/* file "HoundMessageJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOUNDMESSAGEJSON_H
#define HOUNDMESSAGEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONParallelGenerator.h"
#include "HoundServerJSON.h"
#include "HoundPartialTranscriptJSON.h"
#include "HoundUpdateJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HoundMessageJSON : public ReferenceCounted
  {
  public:
    struct TypeValue
      {
        size_t key;
        union
          {
            HoundServerJSON * choice0;
            HoundPartialTranscriptJSON * choice1;
            HoundUpdateJSON * choice2;
          } u;
      };

  private:
    bool flagHasValue;
    TypeValue storeValue;

    HoundMessageJSON(const HoundMessageJSON &);
    HoundMessageJSON & operator=(const HoundMessageJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    HoundMessageJSON(void);
    HoundMessageJSON(TypeValue init_value);
    virtual ~HoundMessageJSON(void);
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
            case 2:
                new_value.u.choice2->add_reference();
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
                case 2:
                    storeValue.u.choice2->remove_reference();
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
            case 2:
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
                case 2:
                    storeValue.u.choice2->remove_reference();
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
            case 2:
                storeValue.u.choice2->write_as_json(handler);
                break;
            default:
                assert(false);
          }
      }

    static HoundMessageJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HoundMessageJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HoundMessageJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HoundMessageJSON>, HoundMessageJSON *, bool> generator("Type HoundMessage", ignore_extras);
            parse_json_value(text, "Text for HoundMessageJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HoundMessageJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HoundMessageJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HoundMessageJSON>, HoundMessageJSON *, bool> generator("Type HoundMessage", ignore_extras);
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
        JSONHoldingGenerator<HoundServerJSON::Generator, RCHandle<HoundServerJSON>, HoundServerJSON *, bool > field0;
        JSONHoldingGenerator<HoundPartialTranscriptJSON::Generator, RCHandle<HoundPartialTranscriptJSON>, HoundPartialTranscriptJSON *, bool > field1;
        JSONHoldingGenerator<HoundUpdateJSON::Generator, RCHandle<HoundUpdateJSON>, HoundUpdateJSON *, bool > field2;
        JSONHandler *all_handlers[3];

      protected:
        size_t start(JSONHandler ***parallel_handlers_location)
          {
            *parallel_handlers_location = &(all_handlers[0]);
            return 3;
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
                case 2:
                  {
                    assert(field2.have_value);
                    result.u.choice2 = field2.value.referenced();
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
        FieldGeneratorValue(bool ignore_extras) : field0("option 0 of field \"Value\"", ignore_extras), field1("option 1 of field \"Value\"", ignore_extras), field2("option 2 of field \"Value\"", ignore_extras)
          {
            all_handlers[0] = &field0;
            all_handlers[1] = &field1;
            all_handlers[2] = &field2;
          }
        FieldGeneratorValue(std::string what, bool ignore_extras) : field0("option 0 of field \"Value\"", ignore_extras), field1("option 1 of field \"Value\"", ignore_extras), field2("option 2 of field \"Value\"", ignore_extras)
          {
            all_handlers[0] = &field0;
            all_handlers[1] = &field1;
            all_handlers[2] = &field2;
          }
        ~FieldGeneratorValue(void)  { }

        void reset(void)
          {
            field0.reset();
            field1.reset();
            field2.reset();
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
                    case 2:
                      data.u.choice2->add_reference();
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
                    case 2:
                      data.u.choice2->add_reference();
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
                    case 2:
                      data.u.choice2->remove_reference();
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
                    case 2:
                      new_data.u.choice2->add_reference();
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
                    case 2:
                      data.u.choice2->remove_reference();
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
            HoundMessageJSON *result = new HoundMessageJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(HoundMessageJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false) : FieldGeneratorValue("Type HoundMessage", ignore_extras)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* HOUNDMESSAGEJSON_H */
