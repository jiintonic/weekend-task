/* file "MonthLengthLookupConversationStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MONTHLENGTHLOOKUPCONVERSATIONSTATEJSON_H
#define MONTHLENGTHLOOKUPCONVERSATIONSTATEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerUnboundRangeGenerator.h"
#include "JSONIntegerRangeGenerator.h"
#include <stdint.h>
#include "OInteger.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class MonthLengthLookupConversationStateJSON : public ReferenceCounted
  {
  public:
    enum TypeDateAndTimeKind
      {
        DateAndTimeKind_MonthLengthLookup
      };

    static TypeDateAndTimeKind  stringToDateAndTimeKind(const char *chars);
    static const char * stringFromDateAndTimeKind(TypeDateAndTimeKind the_enum);

  private:
    bool flagHasDateAndTimeKind;
    bool flagHasMonth;
    uint8_t storeMonth;
    bool flagHasYear;
    OInteger storeYear;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    MonthLengthLookupConversationStateJSON(const MonthLengthLookupConversationStateJSON &);
    MonthLengthLookupConversationStateJSON & operator=(const MonthLengthLookupConversationStateJSON &other);

    void  fromJSONDateAndTimeKind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMonth(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONYear(JSONValue *json_value, bool ignore_extras = false);


  public:
    MonthLengthLookupConversationStateJSON(void);
    virtual ~MonthLengthLookupConversationStateJSON(void);
    bool  hasDateAndTimeKind(void) const;
    TypeDateAndTimeKind  getDateAndTimeKind(void);
    const TypeDateAndTimeKind  getDateAndTimeKind(void) const;
    const char * getDateAndTimeKindAsChars(void) const;
    std::string  getDateAndTimeKindAsString(void) const;
    bool  hasMonth(void) const;
    uint8_t  getMonth(void);
    const uint8_t  getMonth(void) const;
    bool  hasYear(void) const;
    OInteger  getYear(void);
    const OInteger  getYear(void) const;

    virtual size_t extraMonthLengthLookupConversationStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraMonthLengthLookupConversationStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraMonthLengthLookupConversationStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraMonthLengthLookupConversationStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraMonthLengthLookupConversationStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraMonthLengthLookupConversationStateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setDateAndTimeKind(void)
      {
        flagHasDateAndTimeKind = true;
      }
    void setDateAndTimeKind(TypeDateAndTimeKind new_value)
      {
        setDateAndTimeKind();
      }
    void setDateAndTimeKind(const char *chars)
      {
        setDateAndTimeKind(stringToDateAndTimeKind(chars));
      }
    void setDateAndTimeKind(std::string the_string)
      {
        setDateAndTimeKind(stringToDateAndTimeKind(the_string.c_str()));
      }
    void unsetDateAndTimeKind(void)
      {
        flagHasDateAndTimeKind = false;
      }
    void setMonth(uint8_t new_value)
      {
        flagHasMonth = true;
        if (new_value < 0)
            throw("The value for field Month of MonthLengthLookupConversationStateJSON is less than the lower bound (0) for that field.");
        if (new_value > 11)
            throw("The value for field Month of MonthLengthLookupConversationStateJSON is greater than the upper bound (11) for that field.");
        storeMonth = new_value;
      }
    void unsetMonth(void)
      {
        flagHasMonth = false;
      }
    void setYear(OInteger new_value)
      {
        flagHasYear = true;
        storeYear = new_value;
      }
    void unsetYear(void)
      {
        flagHasYear = false;
      }

    virtual void extraMonthLengthLookupConversationStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraMonthLengthLookupConversationStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraMonthLengthLookupConversationStateLookup(key);
        if (old_field == NULL)
          {
            extraMonthLengthLookupConversationStateAppendPair(key, new_component);
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

    void write_as_json(JSONHandler *handler) const
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
        assert(flagHasDateAndTimeKind);
        handler->start_pair("DateAndTimeKind");
        handler->string_value("MonthLengthLookup");
        assert(flagHasMonth);
        handler->start_pair("Month");
        handler->number_value(storeMonth);
        if (flagHasYear)
          {
            handler->start_pair("Year");
            handler->number_value(storeYear.get_o_integer());
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasDateAndTimeKind()))
          {
            return "When parsing the object for %what%, the \"DateAndTimeKind\" field was missing.";
          }
        if (!(hasMonth()))
          {
            return "When parsing the object for %what%, the \"Month\" field was missing.";
          }
        return NULL;
      }

    static MonthLengthLookupConversationStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MonthLengthLookupConversationStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MonthLengthLookupConversationStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MonthLengthLookupConversationStateJSON>, MonthLengthLookupConversationStateJSON *, bool> generator("Type MonthLengthLookupConversationState", ignore_extras);
            parse_json_value(text, "Text for MonthLengthLookupConversationStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MonthLengthLookupConversationStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MonthLengthLookupConversationStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MonthLengthLookupConversationStateJSON>, MonthLengthLookupConversationStateJSON *, bool> generator("Type MonthLengthLookupConversationState", ignore_extras);
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
    class FieldGeneratorDateAndTimeKind : public JSONStringGenerator
          {
          protected:
            FieldGeneratorDateAndTimeKind(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorDateAndTimeKind(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToDateAndTimeKind(result));
              }
            virtual void handle_result(TypeDateAndTimeKind result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorDateAndTimeKind, TypeDateAndTimeKind, TypeDateAndTimeKind > fieldGeneratorDateAndTimeKind;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 11>, uint8_t, uint8_t > fieldGeneratorMonth;
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorYear;
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
            MonthLengthLookupConversationStateJSON *result = new MonthLengthLookupConversationStateJSON();
            assert(result != NULL);
            RCHandle<MonthLengthLookupConversationStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraMonthLengthLookupConversationStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(MonthLengthLookupConversationStateJSON *result)
          {
            if (fieldGeneratorDateAndTimeKind.have_value)
              {
                result->setDateAndTimeKind();
                fieldGeneratorDateAndTimeKind.have_value = false;
              }
            else if (!(result->hasDateAndTimeKind()))
              {
                error("When parsing the object for %what%, the \"DateAndTimeKind\" field was missing.");
              }
            if (fieldGeneratorMonth.have_value)
              {
                result->setMonth(fieldGeneratorMonth.value);
                fieldGeneratorMonth.have_value = false;
              }
            else if (!(result->hasMonth()))
              {
                error("When parsing the object for %what%, the \"Month\" field was missing.");
              }
            if (fieldGeneratorYear.have_value)
              {
                result->setYear(fieldGeneratorYear.value);
                fieldGeneratorYear.have_value = false;
              }
          }
        virtual void handle_result(MonthLengthLookupConversationStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strcmp(&(field_name[1]), "ateAndTimeKind") == 0)
                        return &fieldGeneratorDateAndTimeKind;
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "onth") == 0)
                        return &fieldGeneratorMonth;
                    break;
                case 'Y':
                    if (strcmp(&(field_name[1]), "ear") == 0)
                        return &fieldGeneratorYear;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorDateAndTimeKind("field \"DateAndTimeKind\" of the MonthLengthLookupConversationState class"), fieldGeneratorMonth("field \"Month\" of the MonthLengthLookupConversationState class"), fieldGeneratorYear("field \"Year\" of the MonthLengthLookupConversationState class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the MonthLengthLookupConversationState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorDateAndTimeKind.reset();
            fieldGeneratorMonth.reset();
            fieldGeneratorYear.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* MONTHLENGTHLOOKUPCONVERSATIONSTATEJSON_H */
