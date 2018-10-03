/* file "HoundSharedDoneFlag.h" */

/* Copyright 2016 SoundHound, Incorporated.  All rights reserved. */


#ifndef HOUNDSHAREDDONEFLAG_H
#define HOUNDSHAREDDONEFLAG_H


class HoundSharedDoneFlag
  {
  protected:
    HoundSharedDoneFlag(void)  { }

  public:
    virtual ~HoundSharedDoneFlag(void)  { }

    virtual bool get_is_done(void) = 0;
    virtual void mark_done(void) = 0;
    virtual void wait_until_done(void) = 0;
  };

extern HoundSharedDoneFlag *create_hound_shared_done_flag(void);


#endif /* HOUNDSHAREDDONEFLAG_H */
