/* file "SportsGameSchedulesScoresAPIJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSGAMESCHEDULESSCORESAPIJSON_H
#define SPORTSGAMESCHEDULESSCORESAPIJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONParallelGenerator.h"
#include <vector>
#include "SportsResultScoreCricketJSON.h"
#include "SportsGameSchedulesScoresAPIGameJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsGameSchedulesScoresAPIJSON : public ReferenceCounted
  {
  public:
    struct TypeValue
      {
        size_t key;
        union
          {
            SportsResultScoreCricketJSON * choice0;
            SportsGameSchedulesScoresAPIGameJSON * choice1;
          } u;
      };

  private:
    bool flagHasValue;
    std::vector< TypeValue > storeValue;

    SportsGameSchedulesScoresAPIJSON(const SportsGameSchedulesScoresAPIJSON &);
    SportsGameSchedulesScoresAPIJSON & operator=(const SportsGameSchedulesScoresAPIJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsGameSchedulesScoresAPIJSON(void);
    virtual ~SportsGameSchedulesScoresAPIJSON(void);
    bool  hasValue(void) const;
    size_t  countOfValue(void) const;
    TypeValue  elementOfValue(size_t element_num);
    const TypeValue  elementOfValue(size_t element_num) const;
    std::vector< TypeValue >  getValue(void);
    const std::vector< TypeValue >  getValue(void) const;


    void initValue(void)
      {
        if (flagHasValue)
          {
            for (size_t num2 = 0; num2 < storeValue.size(); ++num2)
              {
                switch (storeValue[num2].key)
                  {
                    case 0:
                        storeValue[num2].u.choice0->remove_reference();
                        break;
                    case 1:
                        storeValue[num2].u.choice1->remove_reference();
                        break;
                    default:
                        assert(false);
                  }
              }
          }
        flagHasValue = true;
        storeValue.clear();
      }
    void appendValue(TypeValue to_append)
      {
        if (!flagHasValue)
          {
            flagHasValue = true;
            storeValue.clear();
          }
        assert(flagHasValue);
        switch (to_append.key)
          {
            case 0:
                to_append.u.choice0->add_reference();
                break;
            case 1:
                to_append.u.choice1->add_reference();
                break;
            default:
                assert(false);
          }
        storeValue.push_back(to_append);
      }
    void unsetValue(void)
      {
        if (flagHasValue)
          {
            for (size_t num3 = 0; num3 < storeValue.size(); ++num3)
              {
                switch (storeValue[num3].key)
                  {
                    case 0:
                        storeValue[num3].u.choice0->remove_reference();
                        break;
                    case 1:
                        storeValue[num3].u.choice1->remove_reference();
                        break;
                    default:
                        assert(false);
                  }
              }
          }
        flagHasValue = false;
        storeValue.clear();
      }


    void write_as_json(JSONHandler *handler) const
      {
        handler->start_array();
        for (size_t num1 = 0; num1 < storeValue.size(); ++num1)
          {
            switch (storeValue[num1].key)
              {
                case 0:
                    storeValue[num1].u.choice0->write_as_json(handler);
                    break;
                case 1:
                    storeValue[num1].u.choice1->write_as_json(handler);
                    break;
                default:
                    assert(false);
              }
          }
        handler->finish_array();
      }

    static SportsGameSchedulesScoresAPIJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsGameSchedulesScoresAPIJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsGameSchedulesScoresAPIJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsGameSchedulesScoresAPIJSON>, SportsGameSchedulesScoresAPIJSON *, bool> generator("Type SportsGameSchedulesScoresAPI", ignore_extras);
            parse_json_value(text, "Text for SportsGameSchedulesScoresAPIJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsGameSchedulesScoresAPIJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsGameSchedulesScoresAPIJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsGameSchedulesScoresAPIJSON>, SportsGameSchedulesScoresAPIJSON *, bool> generator("Type SportsGameSchedulesScoresAPI", ignore_extras);
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
        JSONHoldingGenerator<SportsResultScoreCricketJSON::Generator, RCHandle<SportsResultScoreCricketJSON>, SportsResultScoreCricketJSON *, bool > field0;
        JSONHoldingGenerator<SportsGameSchedulesScoresAPIGameJSON::Generator, RCHandle<SportsGameSchedulesScoresAPIGameJSON>, SportsGameSchedulesScoresAPIGameJSON *, bool > field1;
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
    class Generator : public JSONHoldingArrayGenerator<FieldGeneratorValue, HolderValue, TypeValue, bool >
      {
      protected:
        void finish(void)
          {
            assert(have_value);
            SportsGameSchedulesScoresAPIJSON *result = new SportsGameSchedulesScoresAPIJSON();
            result->initValue();
            size_t count = value.size();
            for (size_t num = 0; num < count; ++num)
              {
                result->appendValue(value[num].referenced());
              }
            handle_result(result);
          }
        virtual void handle_result(SportsGameSchedulesScoresAPIJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false) : JSONHoldingArrayGenerator<FieldGeneratorValue, HolderValue, TypeValue, bool >("Type SportsGameSchedulesScoresAPI", ignore_extras)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* SPORTSGAMESCHEDULESSCORESAPIJSON_H */
