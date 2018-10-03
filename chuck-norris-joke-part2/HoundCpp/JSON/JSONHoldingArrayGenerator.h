/* file "JSONHoldingArrayGenerator.h" */

/* Copyright 2015 SoundHound, Incorporated.  All rights reserved. */

#ifndef JSONHOLDINGARRAYGENERATOR_H
#define JSONHOLDINGARRAYGENERATOR_H

#include "JSONArrayGenerator.h"
#include <vector>
#include <sstream>


template <class ElementParent, class HoldType, class ReceiveType,
        typename... ElementInitParams>
                class JSONHoldingArrayGenerator : public JSONArrayGenerator
  {
  private:
    std::string get_what_for_element_handler(void)
      {
        return get_what();
      }

    class ElementHandler : public ElementParent
      {
      private:
        JSONHoldingArrayGenerator *top;

      protected:
        void handle_result(ReceiveType result)
          {
            top->value.push_back(result);
          }
        std::string get_what(void)
          {
            std::stringstream result;
            result << "element ";
            result << top->value.size();
            result << " of ";
            result << top->get_what_for_element_handler();
            return result.str();
          }

      public:
        ElementHandler(JSONHoldingArrayGenerator *top,
                ElementInitParams... element_init_params) :
                        ElementParent(element_init_params...), top(top)  { }
        ~ElementHandler(void)  { }
      };

    ElementHandler element_handler;

  protected:
    JSONHandler *start(void)
      {
        have_value = true;
        value.clear();
        return &element_handler;
      }
    void finish(void)
      {
        assert(have_value);
        handle_result(value);
        element_handler.reset();
      }
    virtual void handle_result(std::vector<HoldType> result)
      {
      }

  public:
    JSONHoldingArrayGenerator(const char *what,
            ElementInitParams... element_init_params) :
                    element_handler(this, element_init_params...),
                    have_value(false)
      { JSONArrayGenerator::set_what(what); }
    JSONHoldingArrayGenerator(ElementInitParams... element_init_params) :
            element_handler(this, element_init_params...), have_value(false)
      { }
    ~JSONHoldingArrayGenerator(void)  { }

    void reset(void)
      {
        element_handler.reset();
        have_value = false;
        value.clear();
        JSONArrayGenerator::reset();
      }

    bool have_value;
    std::vector<HoldType> value;
  };


#endif /* JSONHOLDINGARRAYGENERATOR_H */
