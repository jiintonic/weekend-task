/* file "HoundSharedDoneFlagSingleThreaded.cpp" */

/* Copyright 2016 SoundHound, Incorporated.  All rights reserved. */


#include "HoundSharedDoneFlag.h"
#include <assert.h>


class HoundSharedDoneFlagSingleThreaded : public HoundSharedDoneFlag
  {
  private:
    bool done_flag;

  public:
    HoundSharedDoneFlagSingleThreaded(void)
      {
        done_flag = false;
      }
    ~HoundSharedDoneFlagSingleThreaded(void)
      {
      }

    bool get_is_done(void)
      {
        return done_flag;
      }
    void mark_done(void)
      {
        done_flag = true;
      }
    void wait_until_done(void)
      {
        assert(done_flag);
      }
  };


extern HoundSharedDoneFlag *create_hound_shared_done_flag(void)
  {
    return new HoundSharedDoneFlagSingleThreaded();
  }
