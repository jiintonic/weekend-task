/* file "CommandResultHandler.h" */

/* Copyright 2016 SoundHound, Incorporated.  All rights reserved. */

#ifndef COMMANDRESULTHANDLER_H
#define COMMANDRESULTHANDLER_H

#include "CommandResultJSON.h"


class CommandResultHandler
  {
  protected:
    CommandResultHandler(void)  { }

  public:
    virtual ~CommandResultHandler(void)  { }

    virtual void handle(CommandResultJSON *command_result) = 0;
  };


#endif /* COMMANDRESULTHANDLER_H */
