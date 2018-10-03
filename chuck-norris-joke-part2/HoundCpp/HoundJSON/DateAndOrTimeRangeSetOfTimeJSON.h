/* file "DateAndOrTimeRangeSetOfTimeJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef DATEANDORTIMERANGESETOFTIMEJSON_H
#define DATEANDORTIMERANGESETOFTIMEJSON_H

#pragma interface

#include "SetOfTimeJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class DateAndOrTimeRangeSetOfTimeJSON : public SetOfTimeJSON
  {
  private:
    bool flagHasStart;
    DateAndOrTimeJSON * storeStart;
    bool flagHasEnd;
    DateAndOrTimeJSON * storeEnd;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    DateAndOrTimeRangeSetOfTimeJSON(const DateAndOrTimeRangeSetOfTimeJSON &);
    DateAndOrTimeRangeSetOfTimeJSON & operator=(const DateAndOrTimeRangeSetOfTimeJSON &other);

    JSONValue * extraStartToJSON(void) const;
    JSONValue * extraEndToJSON(void) const;

    void  fromJSONStart(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEnd(JSONValue *json_value, bool ignore_extras = false);


  public:
    DateAndOrTimeRangeSetOfTimeJSON(void);
    virtual ~DateAndOrTimeRangeSetOfTimeJSON(void);
    const char * getSetOfTimeKind(void) const;
    bool  hasStart(void) const;
    DateAndOrTimeJSON *  getStart(void);
    const DateAndOrTimeJSON *  getStart(void) const;
    bool  hasEnd(void) const;
    DateAndOrTimeJSON *  getEnd(void);
    const DateAndOrTimeJSON *  getEnd(void) const;

    virtual size_t extraDateAndOrTimeRangeSetOfTimeComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraDateAndOrTimeRangeSetOfTimeComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraDateAndOrTimeRangeSetOfTimeComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraDateAndOrTimeRangeSetOfTimeComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraDateAndOrTimeRangeSetOfTimeLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraDateAndOrTimeRangeSetOfTimeLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraSetOfTimeComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasStart)
            ++result;
        if (flagHasEnd)
            ++result;
        result += extraDateAndOrTimeRangeSetOfTimeComponentCount();
        return result;
      }
    const char *extraSetOfTimeComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasStart)
          {
            if (remainder == 0)
                return "Start";
            --remainder;
          }
        if (flagHasEnd)
          {
            if (remainder == 0)
                return "End";
            --remainder;
          }
        return extraDateAndOrTimeRangeSetOfTimeComponentKey(remainder);
      }
    JSONValue *extraSetOfTimeComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasStart)
          {
            if (remainder == 0)
                return extraStartToJSON();
            --remainder;
          }
        if (flagHasEnd)
          {
            if (remainder == 0)
                return extraEndToJSON();
            --remainder;
          }
        return extraDateAndOrTimeRangeSetOfTimeComponentValue(remainder);
      }
    const JSONValue *extraSetOfTimeComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasStart)
          {
            if (remainder == 0)
                return extraStartToJSON();
            --remainder;
          }
        if (flagHasEnd)
          {
            if (remainder == 0)
                return extraEndToJSON();
            --remainder;
          }
        return extraDateAndOrTimeRangeSetOfTimeComponentValue(remainder);
      }
    JSONValue *extraSetOfTimeLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'E':
                if (strcmp(&(field_name[1]), "nd") == 0)
                    return (flagHasEnd ? extraEndToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "tart") == 0)
                    return (flagHasStart ? extraStartToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraDateAndOrTimeRangeSetOfTimeLookup(field_name);
      }
    const JSONValue *extraSetOfTimeLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'E':
                if (strcmp(&(field_name[1]), "nd") == 0)
                    return (flagHasEnd ? extraEndToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "tart") == 0)
                    return (flagHasStart ? extraStartToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraDateAndOrTimeRangeSetOfTimeLookup(field_name);
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

    virtual void extraDateAndOrTimeRangeSetOfTimeAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraDateAndOrTimeRangeSetOfTimeSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraDateAndOrTimeRangeSetOfTimeLookup(key);
        if (old_field == NULL)
          {
            extraDateAndOrTimeRangeSetOfTimeAppendPair(key, new_component);
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
        switch ((unsigned char)(key[0]))
          {
            case 'E':
                if (strcmp(&(key[1]), "nd") == 0)
                    {
                    fromJSONEnd(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strcmp(&(key[1]), "tart") == 0)
                    {
                    fromJSONStart(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraDateAndOrTimeRangeSetOfTimeAppendPair(key, new_component);
      }
    void extraSetOfTimeSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'E':
                if (strcmp(&(key[1]), "nd") == 0)
                    {
                    fromJSONEnd(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strcmp(&(key[1]), "tart") == 0)
                    {
                    fromJSONStart(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraDateAndOrTimeRangeSetOfTimeSetField(key, new_component);
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
        assert(flagHasStart);
        handler->start_pair("Start");
        storeStart->write_as_json(handler);
        assert(flagHasEnd);
        handler->start_pair("End");
        storeEnd->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasStart()))
          {
            return "When parsing the object for %what%, the \"Start\" field was missing.";
          }
        if (!(hasEnd()))
          {
            return "When parsing the object for %what%, the \"End\" field was missing.";
          }
        return NULL;
      }

    static DateAndOrTimeRangeSetOfTimeJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static DateAndOrTimeRangeSetOfTimeJSON *from_text(const char *text, bool ignore_extras = false)
      {
        DateAndOrTimeRangeSetOfTimeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DateAndOrTimeRangeSetOfTimeJSON>, DateAndOrTimeRangeSetOfTimeJSON *, bool> generator("Type DateAndOrTimeRangeSetOfTime", ignore_extras);
            parse_json_value(text, "Text for DateAndOrTimeRangeSetOfTimeJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static DateAndOrTimeRangeSetOfTimeJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        DateAndOrTimeRangeSetOfTimeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DateAndOrTimeRangeSetOfTimeJSON>, DateAndOrTimeRangeSetOfTimeJSON *, bool> generator("Type DateAndOrTimeRangeSetOfTime", ignore_extras);
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
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorStart;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorEnd;
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
            if (!(strcmp(getSetOfTimeJSONKey().c_str(), "DateAndOrTimeRange") == 0))
                throw("The key field has a value other than `DateAndOrTimeRange'.");
            DateAndOrTimeRangeSetOfTimeJSON *result = new DateAndOrTimeRangeSetOfTimeJSON();
            assert(result != NULL);
            RCHandle<DateAndOrTimeRangeSetOfTimeJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraDateAndOrTimeRangeSetOfTimeAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(SetOfTimeJSON *new_result)
          {
            handle_result((DateAndOrTimeRangeSetOfTimeJSON *)new_result);
          }
        void finish(DateAndOrTimeRangeSetOfTimeJSON *result)
          {
            if (fieldGeneratorStart.have_value)
              {
                result->setStart(fieldGeneratorStart.value.referenced());
                fieldGeneratorStart.have_value = false;
              }
            else if (!(result->hasStart()))
              {
                error("When parsing the object for %what%, the \"Start\" field was missing.");
              }
            if (fieldGeneratorEnd.have_value)
              {
                result->setEnd(fieldGeneratorEnd.value.referenced());
                fieldGeneratorEnd.have_value = false;
              }
            else if (!(result->hasEnd()))
              {
                error("When parsing the object for %what%, the \"End\" field was missing.");
              }
            SetOfTimeJSON::Generator::finish(result);
          }
        virtual void handle_result(DateAndOrTimeRangeSetOfTimeJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'E':
                    if (strcmp(&(field_name[1]), "nd") == 0)
                        return &fieldGeneratorEnd;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "tart") == 0)
                        return &fieldGeneratorStart;
                    break;
                default:
                    break;
              }
            return SetOfTimeJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : SetOfTimeJSON::Generator(ignore_extras), fieldGeneratorStart("field \"Start\" of the DateAndOrTimeRangeSetOfTime class", ignore_extras), fieldGeneratorEnd("field \"End\" of the DateAndOrTimeRangeSetOfTime class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the DateAndOrTimeRangeSetOfTime class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorStart.reset();
            fieldGeneratorEnd.reset();
            SetOfTimeJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* DATEANDORTIMERANGESETOFTIMEJSON_H */
