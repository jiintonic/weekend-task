/* file "RCHandle.h" */

/* Copyright 2014 SoundHound, Incorporated.  All rights reserved. */

#ifndef RCHANDLE_H
#define RCHANDLE_H

#include <stddef.h>


template <class Referenced> class RCHandle
  {
  private:
    Referenced *referenced_item;

  public:
    RCHandle(void) : referenced_item(NULL)  { }
    RCHandle(Referenced *init_referenced_item) :
            referenced_item(init_referenced_item)
      {
        if (referenced_item != NULL)
            referenced_item->add_reference();
      }
    RCHandle(const RCHandle &other) : referenced_item(other.referenced())
      {
        if (referenced_item != NULL)
            referenced_item->add_reference();
      }
    ~RCHandle(void)
      {
        if (referenced_item != NULL)
            referenced_item->remove_reference();
      }

    inline void operator=(const RCHandle &other)
      {
        if (other.referenced() != NULL)
            other.referenced()->add_reference();
        if (referenced_item != NULL)
            referenced_item->remove_reference();
        referenced_item = other.referenced();
      }
    inline bool operator==(const RCHandle &other) const
      { return (referenced_item == other.referenced_item); }
    inline bool operator!=(const RCHandle &other) const
      { return (referenced_item != other.referenced_item); }
    inline bool operator<(const RCHandle &other) const
      { return (referenced_item < other.referenced_item); }

    inline Referenced *referenced(void) const  { return referenced_item; }
  };


#endif /* RCHANDLE_H */
