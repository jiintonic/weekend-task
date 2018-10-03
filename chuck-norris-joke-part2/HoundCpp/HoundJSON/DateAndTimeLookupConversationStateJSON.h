/* file "DateAndTimeLookupConversationStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef DATEANDTIMELOOKUPCONVERSATIONSTATEJSON_H
#define DATEANDTIMELOOKUPCONVERSATIONSTATEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
#include "DateAndOrTimeSpecJSON.h"
#include "DateAndOrTimeSpecJSON.h"
#include "DateAndOrTimeSpecJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class DateAndTimeLookupConversationStateJSON : public ReferenceCounted
  {
  public:
    enum TypeDateAndTimeKind
      {
        DateAndTimeKind_DateAndTimeLookup
      };

    static TypeDateAndTimeKind  stringToDateAndTimeKind(const char *chars);
    static const char * stringFromDateAndTimeKind(TypeDateAndTimeKind the_enum);

  private:
    bool flagHasDateAndTimeKind;
    bool flagHasDateAndOrTimeSpec;
    DateAndOrTimeSpecJSON * storeDateAndOrTimeSpec;
    bool flagHasComparisonRequested;
    bool storeComparisonRequested;
    bool flagHasComparisonDateAndOrTimeSpec;
    DateAndOrTimeSpecJSON * storeComparisonDateAndOrTimeSpec;
    bool flagHasComparisonDateAndOrTimeSpecEnd;
    DateAndOrTimeSpecJSON * storeComparisonDateAndOrTimeSpecEnd;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    DateAndTimeLookupConversationStateJSON(const DateAndTimeLookupConversationStateJSON &);
    DateAndTimeLookupConversationStateJSON & operator=(const DateAndTimeLookupConversationStateJSON &other);

    void  fromJSONDateAndTimeKind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDateAndOrTimeSpec(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONComparisonRequested(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONComparisonDateAndOrTimeSpec(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONComparisonDateAndOrTimeSpecEnd(JSONValue *json_value, bool ignore_extras = false);


  public:
    DateAndTimeLookupConversationStateJSON(void);
    virtual ~DateAndTimeLookupConversationStateJSON(void);
    bool  hasDateAndTimeKind(void) const;
    TypeDateAndTimeKind  getDateAndTimeKind(void);
    const TypeDateAndTimeKind  getDateAndTimeKind(void) const;
    const char * getDateAndTimeKindAsChars(void) const;
    std::string  getDateAndTimeKindAsString(void) const;
    bool  hasDateAndOrTimeSpec(void) const;
    DateAndOrTimeSpecJSON *  getDateAndOrTimeSpec(void);
    const DateAndOrTimeSpecJSON *  getDateAndOrTimeSpec(void) const;
    bool  hasComparisonRequested(void) const;
    bool  getComparisonRequested(void);
    const bool  getComparisonRequested(void) const;
    bool  hasComparisonDateAndOrTimeSpec(void) const;
    DateAndOrTimeSpecJSON *  getComparisonDateAndOrTimeSpec(void);
    const DateAndOrTimeSpecJSON *  getComparisonDateAndOrTimeSpec(void) const;
    bool  hasComparisonDateAndOrTimeSpecEnd(void) const;
    DateAndOrTimeSpecJSON *  getComparisonDateAndOrTimeSpecEnd(void);
    const DateAndOrTimeSpecJSON *  getComparisonDateAndOrTimeSpecEnd(void) const;

    virtual size_t extraDateAndTimeLookupConversationStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraDateAndTimeLookupConversationStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraDateAndTimeLookupConversationStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraDateAndTimeLookupConversationStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraDateAndTimeLookupConversationStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraDateAndTimeLookupConversationStateLookup(const char *field_name) const
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
    void setComparisonRequested(bool new_value)
      {
        flagHasComparisonRequested = true;
        storeComparisonRequested = new_value;
      }
    void unsetComparisonRequested(void)
      {
        flagHasComparisonRequested = false;
      }
    void setComparisonDateAndOrTimeSpec(DateAndOrTimeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasComparisonDateAndOrTimeSpec)
          {
            storeComparisonDateAndOrTimeSpec->remove_reference();
          }
        flagHasComparisonDateAndOrTimeSpec = true;
        storeComparisonDateAndOrTimeSpec = new_value;
      }
    void unsetComparisonDateAndOrTimeSpec(void)
      {
        if (flagHasComparisonDateAndOrTimeSpec)
          {
            storeComparisonDateAndOrTimeSpec->remove_reference();
          }
        flagHasComparisonDateAndOrTimeSpec = false;
      }
    void setComparisonDateAndOrTimeSpecEnd(DateAndOrTimeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasComparisonDateAndOrTimeSpecEnd)
          {
            storeComparisonDateAndOrTimeSpecEnd->remove_reference();
          }
        flagHasComparisonDateAndOrTimeSpecEnd = true;
        storeComparisonDateAndOrTimeSpecEnd = new_value;
      }
    void unsetComparisonDateAndOrTimeSpecEnd(void)
      {
        if (flagHasComparisonDateAndOrTimeSpecEnd)
          {
            storeComparisonDateAndOrTimeSpecEnd->remove_reference();
          }
        flagHasComparisonDateAndOrTimeSpecEnd = false;
      }

    virtual void extraDateAndTimeLookupConversationStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraDateAndTimeLookupConversationStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraDateAndTimeLookupConversationStateLookup(key);
        if (old_field == NULL)
          {
            extraDateAndTimeLookupConversationStateAppendPair(key, new_component);
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
        handler->string_value("DateAndTimeLookup");
        assert(flagHasDateAndOrTimeSpec);
        handler->start_pair("DateAndOrTimeSpec");
        storeDateAndOrTimeSpec->write_as_json(handler);
        assert(flagHasComparisonRequested);
        handler->start_pair("ComparisonRequested");
        handler->boolean_value(storeComparisonRequested);
        if (flagHasComparisonDateAndOrTimeSpec)
          {
            handler->start_pair("ComparisonDateAndOrTimeSpec");
            storeComparisonDateAndOrTimeSpec->write_as_json(handler);
          }
        if (flagHasComparisonDateAndOrTimeSpecEnd)
          {
            handler->start_pair("ComparisonDateAndOrTimeSpecEnd");
            storeComparisonDateAndOrTimeSpecEnd->write_as_json(handler);
          }
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
        if (!(hasComparisonRequested()))
          {
            return "When parsing the object for %what%, the \"ComparisonRequested\" field was missing.";
          }
        return NULL;
      }

    static DateAndTimeLookupConversationStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static DateAndTimeLookupConversationStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        DateAndTimeLookupConversationStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DateAndTimeLookupConversationStateJSON>, DateAndTimeLookupConversationStateJSON *, bool> generator("Type DateAndTimeLookupConversationState", ignore_extras);
            parse_json_value(text, "Text for DateAndTimeLookupConversationStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static DateAndTimeLookupConversationStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        DateAndTimeLookupConversationStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DateAndTimeLookupConversationStateJSON>, DateAndTimeLookupConversationStateJSON *, bool> generator("Type DateAndTimeLookupConversationState", ignore_extras);
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
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorComparisonRequested;
        JSONHoldingGenerator<DateAndOrTimeSpecJSON::Generator, RCHandle<DateAndOrTimeSpecJSON>, DateAndOrTimeSpecJSON *, bool > fieldGeneratorComparisonDateAndOrTimeSpec;
        JSONHoldingGenerator<DateAndOrTimeSpecJSON::Generator, RCHandle<DateAndOrTimeSpecJSON>, DateAndOrTimeSpecJSON *, bool > fieldGeneratorComparisonDateAndOrTimeSpecEnd;
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
            DateAndTimeLookupConversationStateJSON *result = new DateAndTimeLookupConversationStateJSON();
            assert(result != NULL);
            RCHandle<DateAndTimeLookupConversationStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraDateAndTimeLookupConversationStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(DateAndTimeLookupConversationStateJSON *result)
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
            if (fieldGeneratorComparisonRequested.have_value)
              {
                result->setComparisonRequested(fieldGeneratorComparisonRequested.value);
                fieldGeneratorComparisonRequested.have_value = false;
              }
            else if (!(result->hasComparisonRequested()))
              {
                error("When parsing the object for %what%, the \"ComparisonRequested\" field was missing.");
              }
            if (fieldGeneratorComparisonDateAndOrTimeSpec.have_value)
              {
                result->setComparisonDateAndOrTimeSpec(fieldGeneratorComparisonDateAndOrTimeSpec.value.referenced());
                fieldGeneratorComparisonDateAndOrTimeSpec.have_value = false;
              }
            if (fieldGeneratorComparisonDateAndOrTimeSpecEnd.have_value)
              {
                result->setComparisonDateAndOrTimeSpecEnd(fieldGeneratorComparisonDateAndOrTimeSpecEnd.value.referenced());
                fieldGeneratorComparisonDateAndOrTimeSpecEnd.have_value = false;
              }
          }
        virtual void handle_result(DateAndTimeLookupConversationStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strncmp(&(field_name[1]), "omparison", 9) == 0)
                      {
                        switch ((unsigned char)(field_name[10]))
                          {
                            case 'D':
                                if (strncmp(&(field_name[11]), "ateAndOrTimeSpec", 16) == 0)
                                  {
                                    switch ((unsigned char)(field_name[27]))
                                      {
                                        case 0:
                                            return &fieldGeneratorComparisonDateAndOrTimeSpec;
                                        case 'E':
                                            if (strcmp(&(field_name[28]), "nd") == 0)
                                                return &fieldGeneratorComparisonDateAndOrTimeSpecEnd;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'R':
                                if (strcmp(&(field_name[11]), "equested") == 0)
                                    return &fieldGeneratorComparisonRequested;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'D':
                    if (strncmp(&(field_name[1]), "ateAnd", 6) == 0)
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
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorDateAndTimeKind("field \"DateAndTimeKind\" of the DateAndTimeLookupConversationState class"), fieldGeneratorDateAndOrTimeSpec("field \"DateAndOrTimeSpec\" of the DateAndTimeLookupConversationState class", ignore_extras), fieldGeneratorComparisonRequested("field \"ComparisonRequested\" of the DateAndTimeLookupConversationState class"), fieldGeneratorComparisonDateAndOrTimeSpec("field \"ComparisonDateAndOrTimeSpec\" of the DateAndTimeLookupConversationState class", ignore_extras), fieldGeneratorComparisonDateAndOrTimeSpecEnd("field \"ComparisonDateAndOrTimeSpecEnd\" of the DateAndTimeLookupConversationState class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the DateAndTimeLookupConversationState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorDateAndTimeKind.reset();
            fieldGeneratorDateAndOrTimeSpec.reset();
            fieldGeneratorComparisonRequested.reset();
            fieldGeneratorComparisonDateAndOrTimeSpec.reset();
            fieldGeneratorComparisonDateAndOrTimeSpecEnd.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* DATEANDTIMELOOKUPCONVERSATIONSTATEJSON_H */
