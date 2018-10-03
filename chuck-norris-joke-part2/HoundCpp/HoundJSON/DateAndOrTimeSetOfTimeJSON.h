/* file "DateAndOrTimeSetOfTimeJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef DATEANDORTIMESETOFTIMEJSON_H
#define DATEANDORTIMESETOFTIMEJSON_H

#pragma interface

#include "SetOfTimeJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "DateAndOrTimeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class DateAndOrTimeSetOfTimeJSON : public SetOfTimeJSON
  {
  private:
    bool flagHasPoint;
    DateAndOrTimeJSON * storePoint;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    DateAndOrTimeSetOfTimeJSON(const DateAndOrTimeSetOfTimeJSON &);
    DateAndOrTimeSetOfTimeJSON & operator=(const DateAndOrTimeSetOfTimeJSON &other);

    JSONValue * extraPointToJSON(void) const;

    void  fromJSONPoint(JSONValue *json_value, bool ignore_extras = false);


  public:
    DateAndOrTimeSetOfTimeJSON(void);
    virtual ~DateAndOrTimeSetOfTimeJSON(void);
    const char * getSetOfTimeKind(void) const;
    bool  hasPoint(void) const;
    DateAndOrTimeJSON *  getPoint(void);
    const DateAndOrTimeJSON *  getPoint(void) const;

    virtual size_t extraDateAndOrTimeSetOfTimeComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraDateAndOrTimeSetOfTimeComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraDateAndOrTimeSetOfTimeComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraDateAndOrTimeSetOfTimeComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraDateAndOrTimeSetOfTimeLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraDateAndOrTimeSetOfTimeLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraSetOfTimeComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasPoint)
            ++result;
        result += extraDateAndOrTimeSetOfTimeComponentCount();
        return result;
      }
    const char *extraSetOfTimeComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasPoint)
          {
            if (remainder == 0)
                return "Point";
            --remainder;
          }
        return extraDateAndOrTimeSetOfTimeComponentKey(remainder);
      }
    JSONValue *extraSetOfTimeComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasPoint)
          {
            if (remainder == 0)
                return extraPointToJSON();
            --remainder;
          }
        return extraDateAndOrTimeSetOfTimeComponentValue(remainder);
      }
    const JSONValue *extraSetOfTimeComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasPoint)
          {
            if (remainder == 0)
                return extraPointToJSON();
            --remainder;
          }
        return extraDateAndOrTimeSetOfTimeComponentValue(remainder);
      }
    JSONValue *extraSetOfTimeLookup(const char *field_name)
      {
        if (strcmp(field_name, "Point") == 0)
            return (flagHasPoint ? extraPointToJSON() : NULL);
        return extraDateAndOrTimeSetOfTimeLookup(field_name);
      }
    const JSONValue *extraSetOfTimeLookup(const char *field_name) const
      {
        if (strcmp(field_name, "Point") == 0)
            return (flagHasPoint ? extraPointToJSON() : NULL);
        return extraDateAndOrTimeSetOfTimeLookup(field_name);
      }

    void setPoint(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPoint)
          {
            storePoint->remove_reference();
          }
        flagHasPoint = true;
        storePoint = new_value;
      }
    void unsetPoint(void)
      {
        if (flagHasPoint)
          {
            storePoint->remove_reference();
          }
        flagHasPoint = false;
      }

    virtual void extraDateAndOrTimeSetOfTimeAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraDateAndOrTimeSetOfTimeSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraDateAndOrTimeSetOfTimeLookup(key);
        if (old_field == NULL)
          {
            extraDateAndOrTimeSetOfTimeAppendPair(key, new_component);
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
    void extraSetOfTimeAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Point") == 0)
            {
            fromJSONPoint(new_component, false);
            return;
            }
        extraDateAndOrTimeSetOfTimeAppendPair(key, new_component);
      }
    void extraSetOfTimeSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Point") == 0)
            {
            fromJSONPoint(new_component, false);
            return;
            }
        extraDateAndOrTimeSetOfTimeSetField(key, new_component);
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
        SetOfTimeJSON::write_fields_as_json(handler);
        assert(flagHasPoint);
        handler->start_pair("Point");
        storePoint->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasPoint()))
          {
            return "When parsing the object for %what%, the \"Point\" field was missing.";
          }
        return NULL;
      }

    static DateAndOrTimeSetOfTimeJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static DateAndOrTimeSetOfTimeJSON *from_text(const char *text, bool ignore_extras = false)
      {
        DateAndOrTimeSetOfTimeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DateAndOrTimeSetOfTimeJSON>, DateAndOrTimeSetOfTimeJSON *, bool> generator("Type DateAndOrTimeSetOfTime", ignore_extras);
            parse_json_value(text, "Text for DateAndOrTimeSetOfTimeJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static DateAndOrTimeSetOfTimeJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        DateAndOrTimeSetOfTimeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DateAndOrTimeSetOfTimeJSON>, DateAndOrTimeSetOfTimeJSON *, bool> generator("Type DateAndOrTimeSetOfTime", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public SetOfTimeJSON::Generator
      {
      private:
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorPoint;
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
            if (!(strcmp(getSetOfTimeJSONKey().c_str(), "DateAndOrTime") == 0))
                throw("The key field has a value other than `DateAndOrTime'.");
            DateAndOrTimeSetOfTimeJSON *result = new DateAndOrTimeSetOfTimeJSON();
            assert(result != NULL);
            RCHandle<DateAndOrTimeSetOfTimeJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraDateAndOrTimeSetOfTimeAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(SetOfTimeJSON *new_result)
          {
            handle_result((DateAndOrTimeSetOfTimeJSON *)new_result);
          }
        void finish(DateAndOrTimeSetOfTimeJSON *result)
          {
            if (fieldGeneratorPoint.have_value)
              {
                result->setPoint(fieldGeneratorPoint.value.referenced());
                fieldGeneratorPoint.have_value = false;
              }
            else if (!(result->hasPoint()))
              {
                error("When parsing the object for %what%, the \"Point\" field was missing.");
              }
            SetOfTimeJSON::Generator::finish(result);
          }
        virtual void handle_result(DateAndOrTimeSetOfTimeJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Point") == 0)
                return &fieldGeneratorPoint;
            return SetOfTimeJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : SetOfTimeJSON::Generator(ignore_extras), fieldGeneratorPoint("field \"Point\" of the DateAndOrTimeSetOfTime class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the DateAndOrTimeSetOfTime class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorPoint.reset();
            SetOfTimeJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* DATEANDORTIMESETOFTIMEJSON_H */
