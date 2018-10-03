/* file "JSONHoldingGenerator.h" */

/* Copyright 2015 SoundHound, Incorporated.  All rights reserved. */

#ifndef JSONHOLDINGGENERATOR_H
#define JSONHOLDINGGENERATOR_H


template <class Parent, class HoldType, class ReceiveType,
          typename... ParentInitParams>
        class JSONHoldingGenerator : public Parent
  {
  protected:
    void handle_result(ReceiveType result)
      {
//@@@        assert(!have_value);
        have_value = true;
        value = result;
      }

  public:
    JSONHoldingGenerator(const char *what,
            ParentInitParams... parent_init_params) :
                    Parent(parent_init_params...), have_value(false)
      { Parent::set_what(what); }
    ~JSONHoldingGenerator(void)  { }

    void reset(void)
      {
        have_value = false;
        Parent::reset();
      }

    bool have_value;
    HoldType value;
  };


#endif /* JSONHOLDINGGENERATOR_H */
