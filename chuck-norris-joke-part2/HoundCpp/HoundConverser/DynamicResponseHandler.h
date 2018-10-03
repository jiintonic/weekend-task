/* file "DynamicResponseHandler.h" */

/* Copyright 2016 SoundHound, Incorporated.  All rights reserved. */

#ifndef DYNAMICRESPONSEHANDLER_H
#define DYNAMICRESPONSEHANDLER_H

#include "DynamicResponseJSON.h"


class DynamicResponseHandler
  {
  protected:
    DynamicResponseHandler(void)  { }

  public:
    virtual ~DynamicResponseHandler(void)  { }

    virtual void handle(DynamicResponseJSON *dynamic_response) = 0;
  };


#endif /* DYNAMICRESPONSEHANDLER_H */
