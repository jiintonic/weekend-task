/* file "RequestInfoPreparer.h" */

/* Copyright 2016 SoundHound, Incorporated.  All rights reserved. */

#ifndef REQUESTINFOPREPARER_H
#define REQUESTINFOPREPARER_H

#include "RequestInfoJSON.h"


class RequestInfoPreparer
  {
  protected:
    RequestInfoPreparer(void)  { }

  public:
    virtual ~RequestInfoPreparer(void)  { }

    virtual void prepare(RequestInfoJSON *request_info) = 0;
  };


#endif /* REQUESTINFOPREPARER_H */
