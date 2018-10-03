/* file "ReferenceCounted.h" */

/* Copyright 2014 SoundHound, Incorporated.  All rights reserved. */

#ifndef REFERENCECOUNTED_H
#define REFERENCECOUNTED_H

#include <stddef.h>
#include <assert.h>


class ReferenceCounted
  {
  private:
    size_t reference_count;

  public:
    ReferenceCounted(void) : reference_count(0)  { }
    ReferenceCounted(const ReferenceCounted &) : reference_count(0)  { }
    ReferenceCounted(ReferenceCounted &) : reference_count(0)  { }
    virtual ~ReferenceCounted(void)
      {
        assert(reference_count == 0);
      }

    ReferenceCounted &operator=(const ReferenceCounted &)
      {
        reference_count = 0;
        return *this;
      }

    inline void add_reference(void)
      {
        assert(reference_count >= 0);
        ++reference_count;
      }
    inline void remove_reference(void)
      {
        assert(reference_count > 0);
        --reference_count;
        if (reference_count == 0)
            delete this;
      }
    inline void remove_reference_no_delete(void)
      {
        assert(reference_count > 0);
        --reference_count;
      }
  };


#endif /* REFERENCECOUNTED_H */
