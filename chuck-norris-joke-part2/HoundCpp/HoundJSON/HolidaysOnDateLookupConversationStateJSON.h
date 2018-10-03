/* file "HolidaysOnDateLookupConversationStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOLIDAYSONDATELOOKUPCONVERSATIONSTATEJSON_H
#define HOLIDAYSONDATELOOKUPCONVERSATIONSTATEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "DateAndOrTimeSpecJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HolidaysOnDateLookupConversationStateJSON : public ReferenceCounted
  {
  public:
    enum TypeDateAndTimeKind
      {
        DateAndTimeKind_HolidaysOnDateLookup
      };

    static TypeDateAndTimeKind  stringToDateAndTimeKind(const char *chars);
    static const char * stringFromDateAndTimeKind(TypeDateAndTimeKind the_enum);

  private:
    bool flagHasDateAndTimeKind;
    bool flagHasDateAndOrTimeSpec;
    DateAndOrTimeSpecJSON * storeDateAndOrTimeSpec;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HolidaysOnDateLookupConversationStateJSON(const HolidaysOnDateLookupConversationStateJSON &);
    HolidaysOnDateLookupConversationStateJSON & operator=(const HolidaysOnDateLookupConversationStateJSON &other);

    void  fromJSONDateAndTimeKind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDateAndOrTimeSpec(JSONValue *json_value, bool ignore_extras = false);


  public:
    HolidaysOnDateLookupConversationStateJSON(void);
    virtual ~HolidaysOnDateLookupConversationStateJSON(void);
    bool  hasDateAndTimeKind(void) const;
    TypeDateAndTimeKind  getDateAndTimeKind(void);
    const TypeDateAndTimeKind  getDateAndTimeKind(void) const;
    const char * getDateAndTimeKindAsChars(void) const;
    std::string  getDateAndTimeKindAsString(void) const;
    bool  hasDateAndOrTimeSpec(void) const;
    DateAndOrTimeSpecJSON *  getDateAndOrTimeSpec(void);
    const DateAndOrTimeSpecJSON *  getDateAndOrTimeSpec(void) const;

    virtual size_t extraHolidaysOnDateLookupConversationStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHolidaysOnDateLookupConversationStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHolidaysOnDateLookupConversationStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHolidaysOnDateLookupConversationStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHolidaysOnDateLookupConversationStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHolidaysOnDateLookupConversationStateLookup(const char *field_name) const
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
    void setDateAndOrTimeSpec(DateAndOrTimeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDateAndOrTimeSpec)
          {
            storeDateAndOrTimeSpec->remove_reference();
          }
        flagHasDateAndOrTimeSpec = true;
        storeDateAndOrTimeSpec = new_value;
      }
    void unsetDateAndOrTimeSpec(void)
      {
        if (flagHasDateAndOrTimeSpec)
          {
            storeDateAndOrTimeSpec->remove_reference();
          }
        flagHasDateAndOrTimeSpec = false;
      }

    virtual void extraHolidaysOnDateLookupConversationStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHolidaysOnDateLookupConversationStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHolidaysOnDateLookupConversationStateLookup(key);
        if (old_field == NULL)
          {
            extraHolidaysOnDateLookupConversationStateAppendPair(key, new_component);
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
        handler->string_value("HolidaysOnDateLookup");
        assert(flagHasDateAndOrTimeSpec);
        handler->start_pair("DateAndOrTimeSpec");
        storeDateAndOrTimeSpec->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasDateAndTimeKind()))
          {
            return "When parsing the object for %what%, the \"DateAndTimeKind\" field was missing.";
          }
        if (!(hasDateAndOrTimeSpec()))
          {
            return "When parsing the object for %what%, the \"DateAndOrTimeSpec\" field was missing.";
          }
        return NULL;
      }

    static HolidaysOnDateLookupConversationStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HolidaysOnDateLookupConversationStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HolidaysOnDateLookupConversationStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HolidaysOnDateLookupConversationStateJSON>, HolidaysOnDateLookupConversationStateJSON *, bool> generator("Type HolidaysOnDateLookupConversationState", ignore_extras);
            parse_json_value(text, "Text for HolidaysOnDateLookupConversationStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HolidaysOnDateLookupConversationStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HolidaysOnDateLookupConversationStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HolidaysOnDateLookupConversationStateJSON>, HolidaysOnDateLookupConversationStateJSON *, bool> generator("Type HolidaysOnDateLookupConversationState", ignore_extras);
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
        JSONHoldingGenerator<DateAndOrTimeSpecJSON::Generator, RCHandle<DateAndOrTimeSpecJSON>, DateAndOrTimeSpecJSON *, bool > fieldGeneratorDateAndOrTimeSpec;
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
            HolidaysOnDateLookupConversationStateJSON *result = new HolidaysOnDateLookupConversationStateJSON();
            assert(result != NULL);
            RCHandle<HolidaysOnDateLookupConversationStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHolidaysOnDateLookupConversationStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(HolidaysOnDateLookupConversationStateJSON *result)
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
            if (fieldGeneratorDateAndOrTimeSpec.have_value)
              {
                result->setDateAndOrTimeSpec(fieldGeneratorDateAndOrTimeSpec.value.referenced());
                fieldGeneratorDateAndOrTimeSpec.have_value = false;
              }
            else if (!(result->hasDateAndOrTimeSpec()))
              {
                error("When parsing the object for %what%, the \"DateAndOrTimeSpec\" field was missing.");
              }
          }
        virtual void handle_result(HolidaysOnDateLookupConversationStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strncmp(field_name, "DateAnd", 7) == 0)
              {
                switch ((unsigned char)(field_name[7]))
                  {
                    case 'O':
                        if (strcmp(&(field_name[8]), "rTimeSpec") == 0)
                            return &fieldGeneratorDateAndOrTimeSpec;
                        break;
                    case 'T':
                        if (strcmp(&(field_name[8]), "imeKind") == 0)
                            return &fieldGeneratorDateAndTimeKind;
                        break;
                    default:
                        break;
                  }
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorDateAndTimeKind("field \"DateAndTimeKind\" of the HolidaysOnDateLookupConversationState class"), fieldGeneratorDateAndOrTimeSpec("field \"DateAndOrTimeSpec\" of the HolidaysOnDateLookupConversationState class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HolidaysOnDateLookupConversationState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorDateAndTimeKind.reset();
            fieldGeneratorDateAndOrTimeSpec.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HOLIDAYSONDATELOOKUPCONVERSATIONSTATEJSON_H */
