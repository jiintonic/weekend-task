/* file "SharedArray.h" */

/* Copyright 2014-2018 SoundHound, Incorporated.  All rights reserved. */

#ifndef SHAREDARRAY_H
#define SHAREDARRAY_H

#include "ReferenceCounted.h"
#include "RCHandle.h"
#include <stddef.h>
#include <assert.h>
#include <vector>


template <class ElementType> class SharedArrayData : public ReferenceCounted
  {
  private:
    ElementType *array;
    size_t element_count;

  public:
    SharedArrayData(size_t element_count) : element_count(element_count)
      {
        assert(element_count > 0);
        array = new ElementType[element_count];
      }
    ~SharedArrayData(void)
      {
        delete[] array;
      }

    inline size_t size(void) const  { return element_count; }
    inline ElementType getElement(size_t element_num) const
      {
        assert(element_num < element_count);
        return array[element_num];
      }
    inline void setElement(size_t element_num, ElementType new_element)
      {
        assert(element_num < element_count);
        array[element_num] = new_element;
      }
    inline ElementType *elementStorage(size_t element_num)
      {
        assert(element_num < element_count);
        return &(array[element_num]);
      }
    inline const ElementType *constElementStorage(size_t element_num) const
      {
        assert(element_num < element_count);
        return &(array[element_num]);
      }
  };

template <class ElementType> class ROSharedArray;

template <class ElementType> class SharedArray :
        private RCHandle<SharedArrayData<ElementType> >
  {
  private:
    inline SharedArrayData<ElementType> *referenced(void) const
      {
        return RCHandle<SharedArrayData<ElementType> >::referenced();
      }

    friend class ROSharedArray<ElementType>;

  public:
    SharedArray(void)  { }
    SharedArray(size_t element_count)
      {
        if (element_count > 0)
          {
            RCHandle<SharedArrayData<ElementType> >::operator=(
                    new SharedArrayData<ElementType>(element_count));
          }
      }
    SharedArray(const SharedArray<ElementType> &other) :
            RCHandle<SharedArrayData<ElementType> >(other)
      {
      }
    SharedArray(const std::vector<ElementType> &other)
      {
        size_t count = other.size();
        if (count == 0)
            return;
        RCHandle<SharedArrayData<ElementType> >::operator=(
                new SharedArrayData<ElementType>(count));
        for (size_t num = 0; num < count; ++num)
            setElement(num, other[num]);
      }
    SharedArray(const ElementType *data, size_t element_count)
      {
        if (element_count > 0)
          {
            RCHandle<SharedArrayData<ElementType> >::operator=(
                    new SharedArrayData<ElementType>(element_count));
            for (size_t num = 0; num < element_count; ++num)
                setElement(num, data[num]);
          }
      }
    SharedArray(SharedArrayData<ElementType> *init) :
            RCHandle<SharedArrayData<ElementType> >(init)
      {
      }
    ~SharedArray(void)  { }

    inline size_t size(void) const
      {
        return ((referenced() == NULL) ? 0 : referenced()->size());
      }
    inline ElementType getElement(size_t element_num) const
      {
        assert(referenced() != NULL);
        return referenced()->getElement(element_num);
      }
    inline void setElement(size_t element_num, ElementType new_element)
      {
        assert(referenced() != NULL);
        referenced()->setElement(element_num, new_element);
      }
    inline ElementType *elementStorage(size_t element_num)
      {
        assert(referenced() != NULL);
        return referenced()->elementStorage(element_num);
      }
    inline const ElementType *constElementStorage(size_t element_num) const
      {
        assert(referenced() != NULL);
        return referenced()->constElementStorage(element_num);
      }

    inline ElementType &operator[](size_t element_num)
      {
        return *elementStorage(element_num);
      }

    inline const ElementType &operator[](size_t element_num) const
      {
        return *constElementStorage(element_num);
      }

    inline void operator=(const SharedArray<ElementType> &other)
      {
        RCHandle<SharedArrayData<ElementType> >::operator=(other);
      }
    inline bool operator==(const SharedArray<ElementType> &other) const
      {
        size_t count = size();
        if (count != other.size())
            return false;
        for (size_t num = 0; num < count; ++num)
          {
            if (*(constElementStorage(num)) !=
                *(other.constElementStorage(num)))
              {
                return false;
              }
          }
        return true;
      }
    inline bool operator!=(const SharedArray<ElementType> &other) const
      { return !(*this == other); }
    inline bool operator<(const SharedArray<ElementType> &other) const
      {
        size_t count = size();
        if (count != other.size())
            return count < other.size();
        for (size_t num = 0; num < count; ++num)
          {
            if (*(constElementStorage(num)) !=
                *(other.constElementStorage(num)))
              {
                return (*(constElementStorage(num)) <
                        *(other.constElementStorage(num)));
              }
          }
        return false;
      }

    inline operator std::vector<ElementType>(void) const
      {
        size_t count = size();
        std::vector<ElementType> result(count);
        for (size_t num = 0; num < count; ++num)
            result[num] = *(constElementStorage(num));
        return result;
      }
  };

template <class ElementType> class ROSharedArray :
        private RCHandle<SharedArrayData<ElementType> >
  {
  private:
    inline SharedArrayData<ElementType> *referenced(void) const
      {
        return RCHandle<SharedArrayData<ElementType> >::referenced();
      }

  public:
    ROSharedArray(void)  { }
    ROSharedArray(const ROSharedArray<ElementType> &other) :
            RCHandle<SharedArrayData<ElementType> >(other)
      {
      }
    ROSharedArray(const SharedArray<ElementType> &other) :
            RCHandle<SharedArrayData<ElementType> >(other)
      {
      }
    ROSharedArray(const std::vector<ElementType> &other)
      {
        size_t count = other.size();
        if (count == 0)
            return;
        RCHandle<SharedArrayData<ElementType> >::operator=(
                new SharedArrayData<ElementType>(count));
        for (size_t num = 0; num < count; ++num)
            referenced()->setElement(num, other[num]);
      }
    ROSharedArray(const ElementType *data, size_t element_count)
      {
        if (element_count > 0)
          {
            RCHandle<SharedArrayData<ElementType> >::operator=(
                    new SharedArrayData<ElementType>(element_count));
            for (size_t num = 0; num < element_count; ++num)
                referenced()->setElement(num, data[num]);
          }
      }
    ROSharedArray(SharedArrayData<ElementType> *init) :
            RCHandle<SharedArrayData<ElementType> >(init)
      {
      }
    ~ROSharedArray(void)  { }

    inline size_t size(void) const
      {
        return ((referenced() == NULL) ? 0 : referenced()->size());
      }
    inline ElementType getElement(size_t element_num) const
      {
        assert(referenced() != NULL);
        return referenced()->getElement(element_num);
      }
    inline const ElementType *elementStorage(size_t element_num) const
      {
        assert(referenced() != NULL);
        return referenced()->constElementStorage(element_num);
      }

    inline const ElementType &operator[](size_t element_num) const
      {
        return *elementStorage(element_num);
      }

    inline void operator=(const ROSharedArray<ElementType> &other)
      {
        RCHandle<SharedArrayData<ElementType> >::operator=(other);
      }
    inline bool operator==(const ROSharedArray<ElementType> &other) const
      {
        size_t count = size();
        if (count != other.size())
            return false;
        for (size_t num = 0; num < count; ++num)
          {
            if (*(elementStorage(num)) != *(other.elementStorage(num)))
                return false;
          }
        return true;
      }
    inline bool operator!=(const ROSharedArray<ElementType> &other) const
      { return !(*this == other); }
    inline bool operator<(const ROSharedArray<ElementType> &other) const
      {
        size_t count = size();
        if (count != other.size())
            return count < other.size();
        for (size_t num = 0; num < count; ++num)
          {
            if (*(elementStorage(num)) != *(other.elementStorage(num)))
                return (*(elementStorage(num)) < *(other.elementStorage(num)));
          }
        return false;
      }

    inline operator std::vector<ElementType>(void) const
      {
        size_t count = size();
        std::vector<ElementType> result(count);
        for (size_t num = 0; num < count; ++num)
            result[num] = *(elementStorage(num));
        return result;
      }
  };


#endif /* SHAREDARRAY_H */
