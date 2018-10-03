/* file "WhenJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef WHENJSON_H
#define WHENJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeJSON.h"
#include "SetOfTimeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class WhenJSON : public ReferenceCounted
  {
  private:
    bool flagHasInstant;
    DateAndOrTimeJSON * storeInstant;
    bool flagHasStart;
    DateAndOrTimeJSON * storeStart;
    bool flagHasEnd;
    DateAndOrTimeJSON * storeEnd;
    bool flagHasDetails;
    SetOfTimeJSON * storeDetails;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    WhenJSON(const WhenJSON &);
    WhenJSON & operator=(const WhenJSON &other);

    void  fromJSONInstant(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStart(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEnd(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDetails(JSONValue *json_value, bool ignore_extras = false);


  public:
    WhenJSON(void);
    virtual ~WhenJSON(void);
    bool  hasInstant(void) const;
    DateAndOrTimeJSON *  getInstant(void);
    const DateAndOrTimeJSON *  getInstant(void) const;
    bool  hasStart(void) const;
    DateAndOrTimeJSON *  getStart(void);
    const DateAndOrTimeJSON *  getStart(void) const;
    bool  hasEnd(void) const;
    DateAndOrTimeJSON *  getEnd(void);
    const DateAndOrTimeJSON *  getEnd(void) const;
    bool  hasDetails(void) const;
    SetOfTimeJSON *  getDetails(void);
    const SetOfTimeJSON *  getDetails(void) const;

    virtual size_t extraWhenComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraWhenComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraWhenComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraWhenComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraWhenLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraWhenLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setInstant(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasInstant)
          {
            storeInstant->remove_reference();
          }
        flagHasInstant = true;
        storeInstant = new_value;
      }
    void unsetInstant(void)
      {
        if (flagHasInstant)
          {
            storeInstant->remove_reference();
          }
        flagHasInstant = false;
      }
    void setStart(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStart)
          {
            storeStart->remove_reference();
          }
        flagHasStart = true;
        storeStart = new_value;
      }
    void unsetStart(void)
      {
        if (flagHasStart)
          {
            storeStart->remove_reference();
          }
        flagHasStart = false;
      }
    void setEnd(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasEnd)
          {
            storeEnd->remove_reference();
          }
        flagHasEnd = true;
        storeEnd = new_value;
      }
    void unsetEnd(void)
      {
        if (flagHasEnd)
          {
            storeEnd->remove_reference();
          }
        flagHasEnd = false;
      }
    void setDetails(SetOfTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDetails)
          {
            storeDetails->remove_reference();
          }
        flagHasDetails = true;
        storeDetails = new_value;
      }
    void unsetDetails(void)
      {
        if (flagHasDetails)
          {
            storeDetails->remove_reference();
          }
        flagHasDetails = false;
      }

    virtual void extraWhenAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraWhenSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraWhenLookup(key);
        if (old_field == NULL)
          {
            extraWhenAppendPair(key, new_component);
          }
        else
          {
            size_t count = extraKeys.size();
            assert(count == extraValues.size());
            for (size_t num = 0; num < count; ++num)
              {
                if (strcmp(extraKeys[num].c_str(),  key) == 0)
                  {
                    extraValues[num] = new_component;
                    break;
                  }
              }
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
            old_field->remove_reference();
            old_field->remove_reference();
          }
      }

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        size_t extra_count = extraKeys.size();
        assert(extra_count == extraValues.size());
        for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
          {
            handler->start_pair(extraKeys[extra_num].c_str());
            extraValues[extra_num]->write(handler);
          }
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        if (flagHasInstant)
          {
            handler->start_pair("Instant");
            storeInstant->write_as_json(handler);
          }
        if (flagHasStart)
          {
            handler->start_pair("Start");
            storeStart->write_as_json(handler);
          }
        if (flagHasEnd)
          {
            handler->start_pair("End");
            storeEnd->write_as_json(handler);
          }
        if (flagHasDetails)
          {
            handler->start_pair("Details");
            storeDetails->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static WhenJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static WhenJSON *from_text(const char *text, bool ignore_extras = false)
      {
        WhenJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<WhenJSON>, WhenJSON *, bool> generator("Type When", ignore_extras);
            parse_json_value(text, "Text for WhenJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static WhenJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        WhenJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<WhenJSON>, WhenJSON *, bool> generator("Type When", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public JSONObjectGenerator
      {
      private:
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorInstant;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorStart;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorEnd;
        JSONHoldingGenerator<SetOfTimeJSON::Generator, RCHandle<SetOfTimeJSON>, SetOfTimeJSON *, bool > fieldGeneratorDetails;
        class UnknownFieldGenerator : public JSONValueHandler
          {
          public:
            bool ignore;
            std::vector<std::string> field_names;
            std::vector<RCHandle<JSONValue> > field_values;
            string_index *index;
            UnknownFieldGenerator(bool init_ignore) : ignore(init_ignore)
              {
            index = create_string_index();
              }
            ~UnknownFieldGenerator(void)
              {
                destroy_string_index(index);
              }


          protected:
            void new_value(JSONValue *item)
              {
                if (ignore)
                    return;
                assert(field_names.size() == (field_values.size() + 1));
                enter_into_string_index(index, field_names[field_values.size()].c_str(), item);
                field_values.push_back(item);
              }

          public:
            void reset()
              {
                field_names.clear();
                field_values.clear();
                destroy_string_index(index);
            index = create_string_index();
              }
          };
        UnknownFieldGenerator unknownFieldGenerator;


      protected:
        void start(void)
          {
          }
        JSONHandler *start_field(const char *field_name)
          {
            JSONHandler *result = start_known_field(field_name);
            if (result != NULL)
                return result;
            assert(unknownFieldGenerator.field_names.size() ==
                   unknownFieldGenerator.field_values.size());
            if (unknownFieldGenerator.ignore)
              {
                assert(unknownFieldGenerator.field_names.size() == 0);
              }
            else
              {
                unknownFieldGenerator.field_names.push_back(field_name);
              }
            return &unknownFieldGenerator;
          }
        void finish_field(const char *field_name, JSONHandler *field_handler)
          {
          }
        void finish(void)
          {
            WhenJSON *result = new WhenJSON();
            assert(result != NULL);
            RCHandle<WhenJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraWhenAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(WhenJSON *result)
          {
            if (fieldGeneratorInstant.have_value)
              {
                result->setInstant(fieldGeneratorInstant.value.referenced());
                fieldGeneratorInstant.have_value = false;
              }
            if (fieldGeneratorStart.have_value)
              {
                result->setStart(fieldGeneratorStart.value.referenced());
                fieldGeneratorStart.have_value = false;
              }
            if (fieldGeneratorEnd.have_value)
              {
                result->setEnd(fieldGeneratorEnd.value.referenced());
                fieldGeneratorEnd.have_value = false;
              }
            if (fieldGeneratorDetails.have_value)
              {
                result->setDetails(fieldGeneratorDetails.value.referenced());
                fieldGeneratorDetails.have_value = false;
              }
          }
        virtual void handle_result(WhenJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strcmp(&(field_name[1]), "etails") == 0)
                        return &fieldGeneratorDetails;
                    break;
                case 'E':
                    if (strcmp(&(field_name[1]), "nd") == 0)
                        return &fieldGeneratorEnd;
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "nstant") == 0)
                        return &fieldGeneratorInstant;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "tart") == 0)
                        return &fieldGeneratorStart;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorInstant("field \"Instant\" of the When class", ignore_extras), fieldGeneratorStart("field \"Start\" of the When class", ignore_extras), fieldGeneratorEnd("field \"End\" of the When class", ignore_extras), fieldGeneratorDetails("field \"Details\" of the When class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the When class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorInstant.reset();
            fieldGeneratorStart.reset();
            fieldGeneratorEnd.reset();
            fieldGeneratorDetails.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* WHENJSON_H */
