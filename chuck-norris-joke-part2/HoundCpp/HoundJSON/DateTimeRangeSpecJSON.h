/* file "DateTimeRangeSpecJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef DATETIMERANGESPECJSON_H
#define DATETIMERANGESPECJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONBooleanGenerator.h"
#include "DateTimeSpecJSON.h"
#include "DateTimeSpecJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class DateTimeRangeSpecJSON : public ReferenceCounted
  {
  private:
    bool flagHasStartDateTimeSpec;
    DateTimeSpecJSON * storeStartDateTimeSpec;
    bool flagHasEndDateTimeSpec;
    DateTimeSpecJSON * storeEndDateTimeSpec;
    bool flagHasStartDateTimeInferred;
    bool storeStartDateTimeInferred;
    bool flagHasEndDateTimeInferred;
    bool storeEndDateTimeInferred;
    bool flagHasRangeIsExplicit;
    bool storeRangeIsExplicit;
    bool flagHasExpressedAsDuration;
    bool storeExpressedAsDuration;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    DateTimeRangeSpecJSON(const DateTimeRangeSpecJSON &);
    DateTimeRangeSpecJSON & operator=(const DateTimeRangeSpecJSON &other);

    void  fromJSONStartDateTimeSpec(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEndDateTimeSpec(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStartDateTimeInferred(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEndDateTimeInferred(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRangeIsExplicit(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONExpressedAsDuration(JSONValue *json_value, bool ignore_extras = false);


  public:
    DateTimeRangeSpecJSON(void);
    virtual ~DateTimeRangeSpecJSON(void);
    bool  hasStartDateTimeSpec(void) const;
    DateTimeSpecJSON *  getStartDateTimeSpec(void);
    const DateTimeSpecJSON *  getStartDateTimeSpec(void) const;
    bool  hasEndDateTimeSpec(void) const;
    DateTimeSpecJSON *  getEndDateTimeSpec(void);
    const DateTimeSpecJSON *  getEndDateTimeSpec(void) const;
    bool  hasStartDateTimeInferred(void) const;
    bool  getStartDateTimeInferred(void);
    const bool  getStartDateTimeInferred(void) const;
    bool  hasEndDateTimeInferred(void) const;
    bool  getEndDateTimeInferred(void);
    const bool  getEndDateTimeInferred(void) const;
    bool  hasRangeIsExplicit(void) const;
    bool  getRangeIsExplicit(void);
    const bool  getRangeIsExplicit(void) const;
    bool  hasExpressedAsDuration(void) const;
    bool  getExpressedAsDuration(void);
    const bool  getExpressedAsDuration(void) const;

    virtual size_t extraDateTimeRangeSpecComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraDateTimeRangeSpecComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraDateTimeRangeSpecComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraDateTimeRangeSpecComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraDateTimeRangeSpecLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraDateTimeRangeSpecLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setStartDateTimeSpec(DateTimeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStartDateTimeSpec)
          {
            storeStartDateTimeSpec->remove_reference();
          }
        flagHasStartDateTimeSpec = true;
        storeStartDateTimeSpec = new_value;
      }
    void unsetStartDateTimeSpec(void)
      {
        if (flagHasStartDateTimeSpec)
          {
            storeStartDateTimeSpec->remove_reference();
          }
        flagHasStartDateTimeSpec = false;
      }
    void setEndDateTimeSpec(DateTimeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasEndDateTimeSpec)
          {
            storeEndDateTimeSpec->remove_reference();
          }
        flagHasEndDateTimeSpec = true;
        storeEndDateTimeSpec = new_value;
      }
    void unsetEndDateTimeSpec(void)
      {
        if (flagHasEndDateTimeSpec)
          {
            storeEndDateTimeSpec->remove_reference();
          }
        flagHasEndDateTimeSpec = false;
      }
    void setStartDateTimeInferred(bool new_value)
      {
        flagHasStartDateTimeInferred = true;
        storeStartDateTimeInferred = new_value;
      }
    void unsetStartDateTimeInferred(void)
      {
        flagHasStartDateTimeInferred = false;
      }
    void setEndDateTimeInferred(bool new_value)
      {
        flagHasEndDateTimeInferred = true;
        storeEndDateTimeInferred = new_value;
      }
    void unsetEndDateTimeInferred(void)
      {
        flagHasEndDateTimeInferred = false;
      }
    void setRangeIsExplicit(bool new_value)
      {
        flagHasRangeIsExplicit = true;
        storeRangeIsExplicit = new_value;
      }
    void unsetRangeIsExplicit(void)
      {
        flagHasRangeIsExplicit = false;
      }
    void setExpressedAsDuration(bool new_value)
      {
        flagHasExpressedAsDuration = true;
        storeExpressedAsDuration = new_value;
      }
    void unsetExpressedAsDuration(void)
      {
        flagHasExpressedAsDuration = false;
      }

    virtual void extraDateTimeRangeSpecAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraDateTimeRangeSpecSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraDateTimeRangeSpecLookup(key);
        if (old_field == NULL)
          {
            extraDateTimeRangeSpecAppendPair(key, new_component);
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
        assert(flagHasStartDateTimeSpec);
        handler->start_pair("StartDateTimeSpec");
        storeStartDateTimeSpec->write_as_json(handler);
        assert(flagHasEndDateTimeSpec);
        handler->start_pair("EndDateTimeSpec");
        storeEndDateTimeSpec->write_as_json(handler);
        assert(flagHasStartDateTimeInferred);
        handler->start_pair("StartDateTimeInferred");
        handler->boolean_value(storeStartDateTimeInferred);
        assert(flagHasEndDateTimeInferred);
        handler->start_pair("EndDateTimeInferred");
        handler->boolean_value(storeEndDateTimeInferred);
        assert(flagHasRangeIsExplicit);
        handler->start_pair("RangeIsExplicit");
        handler->boolean_value(storeRangeIsExplicit);
        assert(flagHasExpressedAsDuration);
        handler->start_pair("ExpressedAsDuration");
        handler->boolean_value(storeExpressedAsDuration);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasStartDateTimeSpec()))
          {
            return "When parsing the object for %what%, the \"StartDateTimeSpec\" field was missing.";
          }
        if (!(hasEndDateTimeSpec()))
          {
            return "When parsing the object for %what%, the \"EndDateTimeSpec\" field was missing.";
          }
        if (!(hasStartDateTimeInferred()))
          {
            return "When parsing the object for %what%, the \"StartDateTimeInferred\" field was missing.";
          }
        if (!(hasEndDateTimeInferred()))
          {
            return "When parsing the object for %what%, the \"EndDateTimeInferred\" field was missing.";
          }
        if (!(hasRangeIsExplicit()))
          {
            return "When parsing the object for %what%, the \"RangeIsExplicit\" field was missing.";
          }
        if (!(hasExpressedAsDuration()))
          {
            return "When parsing the object for %what%, the \"ExpressedAsDuration\" field was missing.";
          }
        return NULL;
      }

    static DateTimeRangeSpecJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static DateTimeRangeSpecJSON *from_text(const char *text, bool ignore_extras = false)
      {
        DateTimeRangeSpecJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DateTimeRangeSpecJSON>, DateTimeRangeSpecJSON *, bool> generator("Type DateTimeRangeSpec", ignore_extras);
            parse_json_value(text, "Text for DateTimeRangeSpecJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static DateTimeRangeSpecJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        DateTimeRangeSpecJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DateTimeRangeSpecJSON>, DateTimeRangeSpecJSON *, bool> generator("Type DateTimeRangeSpec", ignore_extras);
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
        JSONHoldingGenerator<DateTimeSpecJSON::Generator, RCHandle<DateTimeSpecJSON>, DateTimeSpecJSON *, bool > fieldGeneratorStartDateTimeSpec;
        JSONHoldingGenerator<DateTimeSpecJSON::Generator, RCHandle<DateTimeSpecJSON>, DateTimeSpecJSON *, bool > fieldGeneratorEndDateTimeSpec;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorStartDateTimeInferred;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorEndDateTimeInferred;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorRangeIsExplicit;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorExpressedAsDuration;
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
            DateTimeRangeSpecJSON *result = new DateTimeRangeSpecJSON();
            assert(result != NULL);
            RCHandle<DateTimeRangeSpecJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraDateTimeRangeSpecAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(DateTimeRangeSpecJSON *result)
          {
            if (fieldGeneratorStartDateTimeSpec.have_value)
              {
                result->setStartDateTimeSpec(fieldGeneratorStartDateTimeSpec.value.referenced());
                fieldGeneratorStartDateTimeSpec.have_value = false;
              }
            else if (!(result->hasStartDateTimeSpec()))
              {
                error("When parsing the object for %what%, the \"StartDateTimeSpec\" field was missing.");
              }
            if (fieldGeneratorEndDateTimeSpec.have_value)
              {
                result->setEndDateTimeSpec(fieldGeneratorEndDateTimeSpec.value.referenced());
                fieldGeneratorEndDateTimeSpec.have_value = false;
              }
            else if (!(result->hasEndDateTimeSpec()))
              {
                error("When parsing the object for %what%, the \"EndDateTimeSpec\" field was missing.");
              }
            if (fieldGeneratorStartDateTimeInferred.have_value)
              {
                result->setStartDateTimeInferred(fieldGeneratorStartDateTimeInferred.value);
                fieldGeneratorStartDateTimeInferred.have_value = false;
              }
            else if (!(result->hasStartDateTimeInferred()))
              {
                error("When parsing the object for %what%, the \"StartDateTimeInferred\" field was missing.");
              }
            if (fieldGeneratorEndDateTimeInferred.have_value)
              {
                result->setEndDateTimeInferred(fieldGeneratorEndDateTimeInferred.value);
                fieldGeneratorEndDateTimeInferred.have_value = false;
              }
            else if (!(result->hasEndDateTimeInferred()))
              {
                error("When parsing the object for %what%, the \"EndDateTimeInferred\" field was missing.");
              }
            if (fieldGeneratorRangeIsExplicit.have_value)
              {
                result->setRangeIsExplicit(fieldGeneratorRangeIsExplicit.value);
                fieldGeneratorRangeIsExplicit.have_value = false;
              }
            else if (!(result->hasRangeIsExplicit()))
              {
                error("When parsing the object for %what%, the \"RangeIsExplicit\" field was missing.");
              }
            if (fieldGeneratorExpressedAsDuration.have_value)
              {
                result->setExpressedAsDuration(fieldGeneratorExpressedAsDuration.value);
                fieldGeneratorExpressedAsDuration.have_value = false;
              }
            else if (!(result->hasExpressedAsDuration()))
              {
                error("When parsing the object for %what%, the \"ExpressedAsDuration\" field was missing.");
              }
          }
        virtual void handle_result(DateTimeRangeSpecJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'E':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'n':
                            if (strncmp(&(field_name[2]), "dDateTime", 9) == 0)
                              {
                                switch ((unsigned char)(field_name[11]))
                                  {
                                    case 'I':
                                        if (strcmp(&(field_name[12]), "nferred") == 0)
                                            return &fieldGeneratorEndDateTimeInferred;
                                        break;
                                    case 'S':
                                        if (strcmp(&(field_name[12]), "pec") == 0)
                                            return &fieldGeneratorEndDateTimeSpec;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'x':
                            if (strcmp(&(field_name[2]), "pressedAsDuration") == 0)
                                return &fieldGeneratorExpressedAsDuration;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "angeIsExplicit") == 0)
                        return &fieldGeneratorRangeIsExplicit;
                    break;
                case 'S':
                    if (strncmp(&(field_name[1]), "tartDateTime", 12) == 0)
                      {
                        switch ((unsigned char)(field_name[13]))
                          {
                            case 'I':
                                if (strcmp(&(field_name[14]), "nferred") == 0)
                                    return &fieldGeneratorStartDateTimeInferred;
                                break;
                            case 'S':
                                if (strcmp(&(field_name[14]), "pec") == 0)
                                    return &fieldGeneratorStartDateTimeSpec;
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
        Generator(bool ignore_extras = false) : fieldGeneratorStartDateTimeSpec("field \"StartDateTimeSpec\" of the DateTimeRangeSpec class", ignore_extras), fieldGeneratorEndDateTimeSpec("field \"EndDateTimeSpec\" of the DateTimeRangeSpec class", ignore_extras), fieldGeneratorStartDateTimeInferred("field \"StartDateTimeInferred\" of the DateTimeRangeSpec class"), fieldGeneratorEndDateTimeInferred("field \"EndDateTimeInferred\" of the DateTimeRangeSpec class"), fieldGeneratorRangeIsExplicit("field \"RangeIsExplicit\" of the DateTimeRangeSpec class"), fieldGeneratorExpressedAsDuration("field \"ExpressedAsDuration\" of the DateTimeRangeSpec class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the DateTimeRangeSpec class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorStartDateTimeSpec.reset();
            fieldGeneratorEndDateTimeSpec.reset();
            fieldGeneratorStartDateTimeInferred.reset();
            fieldGeneratorEndDateTimeInferred.reset();
            fieldGeneratorRangeIsExplicit.reset();
            fieldGeneratorExpressedAsDuration.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* DATETIMERANGESPECJSON_H */
