/* file "SportsTeamOrPlayerJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSTEAMORPLAYERJSON_H
#define SPORTSTEAMORPLAYERJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONParallelGenerator.h"
#include "SportsTeamNewJSON.h"
#include "SportsPlayerJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsTeamOrPlayerJSON : public ReferenceCounted
  {
  public:
    struct TypeValue
      {
        size_t key;
        union
          {
            SportsTeamNewJSON * choice0;
            SportsPlayerJSON * choice1;
          } u;
      };

  private:
    bool flagHasValue;
    TypeValue storeValue;

    SportsTeamOrPlayerJSON(const SportsTeamOrPlayerJSON &);
    SportsTeamOrPlayerJSON & operator=(const SportsTeamOrPlayerJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsTeamOrPlayerJSON(void);
    SportsTeamOrPlayerJSON(TypeValue init_value);
    virtual ~SportsTeamOrPlayerJSON(void);
    bool  hasValue(void) const;
    TypeValue  getValue(void);
    const TypeValue  getValue(void) const;


    void setValue(TypeValue new_value)
      {
        switch (new_value.key)
          {
            case 0:
                new_value.u.choice0->add_reference();
                break;
            case 1:
                new_value.u.choice1->add_reference();
                break;
            default:
                assert(false);
          }
        if (flagHasValue)
          {
            switch (storeValue.key)
              {
                case 0:
                    storeValue.u.choice0->remove_reference();
                    break;
                case 1:
                    storeValue.u.choice1->remove_reference();
                    break;
                default:
                    assert(false);
              }
          }
        flagHasValue = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeValue = new_value;
      }
    void unsetValue(void)
      {
        if (flagHasValue)
          {
            switch (storeValue.key)
              {
                case 0:
                    storeValue.u.choice0->remove_reference();
                    break;
                case 1:
                    storeValue.u.choice1->remove_reference();
                    break;
                default:
                    assert(false);
              }
          }
        flagHasValue = false;
      }


    void write_as_json(JSONHandler *handler) const
      {
        switch (storeValue.key)
          {
            case 0:
                storeValue.u.choice0->write_as_json(handler);
                break;
            case 1:
                storeValue.u.choice1->write_as_json(handler);
                break;
            default:
                assert(false);
          }
      }

    static SportsTeamOrPlayerJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsTeamOrPlayerJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsTeamOrPlayerJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsTeamOrPlayerJSON>, SportsTeamOrPlayerJSON *, bool> generator("Type SportsTeamOrPlayer", ignore_extras);
            parse_json_value(text, "Text for SportsTeamOrPlayerJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsTeamOrPlayerJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsTeamOrPlayerJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsTeamOrPlayerJSON>, SportsTeamOrPlayerJSON *, bool> generator("Type SportsTeamOrPlayer", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class FieldGeneratorValue : public JSONParallelGenerator
      {
      private:
        JSONHoldingGenerator<SportsTeamNewJSON::Generator, RCHandle<SportsTeamNewJSON>, SportsTeamNewJSON *, bool > field0;
        JSONHoldingGenerator<SportsPlayerJSON::Generator, RCHandle<SportsPlayerJSON>, SportsPlayerJSON *, bool > field1;
        JSONHandler *all_handlers[2];

      protected:
        size_t start(JSONHandler ***parallel_handlers_location)
          {
            *parallel_handlers_location = &(all_handlers[0]);
            return 2;
          }
        void finish(size_t winning_index)
          {
            TypeValue result;
            result.key = winning_index;
            switch (winning_index)
              {
                case 0:
                  {
                    assert(field0.have_value);
                    result.u.choice0 = field0.value.referenced();
                    break;
                  }
                case 1:
                  {
                    assert(field1.have_value);
                    result.u.choice1 = field1.value.referenced();
                    break;
                  }
                default:
                  {
                    assert(false);
                  }
              }
            handle_result(result);
          }
        virtual void handle_result(TypeValue result) = 0;

      public:
        FieldGeneratorValue(bool ignore_extras) : field0("option 0 of field \"Value\"", ignore_extras), field1("option 1 of field \"Value\"", ignore_extras)
          {
            all_handlers[0] = &field0;
            all_handlers[1] = &field1;
          }
        FieldGeneratorValue(std::string what, bool ignore_extras) : field0("option 0 of field \"Value\"", ignore_extras), field1("option 1 of field \"Value\"", ignore_extras)
          {
            all_handlers[0] = &field0;
            all_handlers[1] = &field1;
          }
        ~FieldGeneratorValue(void)  { }

        void reset(void)
          {
            field0.reset();
            field1.reset();
            JSONParallelGenerator::reset();
          }
      };
    class HolderValue
      {
      private:
        bool have_data;
        TypeValue data;

      public:
        HolderValue(void) : have_data(false)  { }
        HolderValue(TypeValue init_data) : have_data(true), data(init_data)
          {
            if (have_data)
              {
                switch (data.key)
                  {
                    case 0:
                      data.u.choice0->add_reference();
                      break;
                    case 1:
                      data.u.choice1->add_reference();
                      break;
                    default:
                      assert(false);
                  }
              }
          }
        HolderValue(const HolderValue &other) : have_data(other.haveData()), data(other.referenced())
          {
            if (have_data)
              {
                switch (data.key)
                  {
                    case 0:
                      data.u.choice0->add_reference();
                      break;
                    case 1:
                      data.u.choice1->add_reference();
                      break;
                    default:
                      assert(false);
                  }
              }
          }
        ~HolderValue(void)
          {
            if (have_data)
              {
                switch (data.key)
                  {
                    case 0:
                      data.u.choice0->remove_reference();
                      break;
                    case 1:
                      data.u.choice1->remove_reference();
                      break;
                    default:
                      assert(false);
                  }
              }
          }

        void operator=(const HolderValue &other)
          {
            TypeValue new_data;
            if (other.haveData())
              {
                new_data = other.referenced();
                switch (new_data.key)
                  {
                    case 0:
                      new_data.u.choice0->add_reference();
                      break;
                    case 1:
                      new_data.u.choice1->add_reference();
                      break;
                    default:
                      assert(false);
                  }
              }
            if (have_data)
              {
                switch (data.key)
                  {
                    case 0:
                      data.u.choice0->remove_reference();
                      break;
                    case 1:
                      data.u.choice1->remove_reference();
                      break;
                    default:
                      assert(false);
                  }
              }
            have_data = other.haveData();
            if (have_data)
                data = new_data;
          }
        bool haveData(void) const
          {
            return have_data;
          }
        TypeValue referenced(void) const
          {
            return data;
          }
      };
    class Generator : public FieldGeneratorValue
      {
      protected:
        void handle_result(TypeValue new_value)
          {
            SportsTeamOrPlayerJSON *result = new SportsTeamOrPlayerJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(SportsTeamOrPlayerJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false) : FieldGeneratorValue("Type SportsTeamOrPlayer", ignore_extras)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* SPORTSTEAMORPLAYERJSON_H */
