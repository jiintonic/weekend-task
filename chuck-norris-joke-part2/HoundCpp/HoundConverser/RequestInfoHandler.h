/* file "RequestInfoHandler.h" */

/* Copyright 2016 SoundHound, Incorporated.  All rights reserved. */

#ifndef REQUESTINFOHANDLER_H
#define REQUESTINFOHANDLER_H

#include "RequestInfoJSON.h"


class RequestInfoHandler
  {
  protected:
    RequestInfoHandler(void)  { }

  public:
    virtual ~RequestInfoHandler(void)  { }

    virtual void handle(RequestInfoJSON *request_info_json) = 0;
  };


#endif /* REQUESTINFOHANDLER_H */
