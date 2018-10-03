/* file "HoundServerHandler.h" */

/* Copyright 2016 SoundHound, Incorporated.  All rights reserved. */

#ifndef HOUNDSERVERHANDLER_H
#define HOUNDSERVERHANDLER_H

#include "HoundServerJSON.h"


class HoundServerHandler
  {
  protected:
    HoundServerHandler(void)  { }

  public:
    virtual ~HoundServerHandler(void)  { }

    virtual void handle(HoundServerJSON *hound_server_json) = 0;
  };


#endif /* HOUNDSERVERHANDLER_H */
