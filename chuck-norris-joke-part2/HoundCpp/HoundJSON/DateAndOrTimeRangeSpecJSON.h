/* file "DateAndOrTimeRangeSpecJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef DATEANDORTIMERANGESPECJSON_H
#define DATEANDORTIMERANGESPECJSON_H

#pragma interface

#include "WhenJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONBooleanGenerator.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class DateAndOrTimeRangeSpecJSON : public WhenJSON
  {
  private:
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

    DateAndOrTimeRangeSpecJSON(const DateAndOrTimeRangeSpecJSON &);
    DateAndOrTimeRangeSpecJSON & operator=(const DateAndOrTimeRangeSpecJSON &other);

    JSONValue * extraStartDateTimeInferredToJSON(void) const;
    JSONValue * extraEndDateTimeInferredToJSON(void) const;
    JSONValue * extraRangeIsExplicitToJSON(void) const;
    JSONValue * extraExpressedAsDurationToJSON(void) const;

    void  fromJSONStartDateTimeInferred(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEndDateTimeInferred(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRangeIsExplicit(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONExpressedAsDuration(JSONValue *json_value, bool ignore_extras = false);


  public:
    DateAndOrTimeRangeSpecJSON(void);
    virtual ~DateAndOrTimeRangeSpecJSON(void);
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

    virtual size_t extraDateAndOrTimeRangeSpecComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraDateAndOrTimeRangeSpecComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraDateAndOrTimeRangeSpecComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraDateAndOrTimeRangeSpecComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraDateAndOrTimeRangeSpecLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraDateAndOrTimeRangeSpecLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraWhenComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasStartDateTimeInferred)
            ++result;
        if (flagHasEndDateTimeInferred)
            ++result;
        if (flagHasRangeIsExplicit)
            ++result;
        if (flagHasExpressedAsDuration)
            ++result;
        result += extraDateAndOrTimeRangeSpecComponentCount();
        return result;
      }
    const char *extraWhenComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasStartDateTimeInferred)
          {
            if (remainder == 0)
                return "StartDateTimeInferred";
            --remainder;
          }
        if (flagHasEndDateTimeInferred)
          {
            if (remainder == 0)
                return "EndDateTimeInferred";
            --remainder;
          }
        if (flagHasRangeIsExplicit)
          {
            if (remainder == 0)
                return "RangeIsExplicit";
            --remainder;
          }
        if (flagHasExpressedAsDuration)
          {
            if (remainder == 0)
                return "ExpressedAsDuration";
            --remainder;
          }
        return extraDateAndOrTimeRangeSpecComponentKey(remainder);
      }
    JSONValue *extraWhenComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasStartDateTimeInferred)
          {
            if (remainder == 0)
                return extraStartDateTimeInferredToJSON();
            --remainder;
          }
        if (flagHasEndDateTimeInferred)
          {
            if (remainder == 0)
                return extraEndDateTimeInferredToJSON();
            --remainder;
          }
        if (flagHasRangeIsExplicit)
          {
            if (remainder == 0)
                return extraRangeIsExplicitToJSON();
            --remainder;
          }
        if (flagHasExpressedAsDuration)
          {
            if (remainder == 0)
                return extraExpressedAsDurationToJSON();
            --remainder;
          }
        return extraDateAndOrTimeRangeSpecComponentValue(remainder);
      }
    const JSONValue *extraWhenComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasStartDateTimeInferred)
          {
            if (remainder == 0)
                return extraStartDateTimeInferredToJSON();
            --remainder;
          }
        if (flagHasEndDateTimeInferred)
          {
            if (remainder == 0)
                return extraEndDateTimeInferredToJSON();
            --remainder;
          }
        if (flagHasRangeIsExplicit)
          {
            if (remainder == 0)
                return extraRangeIsExplicitToJSON();
            --remainder;
          }
        if (flagHasExpressedAsDuration)
          {
            if (remainder == 0)
                return extraExpressedAsDurationToJSON();
            --remainder;
          }
        return extraDateAndOrTimeRangeSpecComponentValue(remainder);
      }
    JSONValue *extraWhenLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'E':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'n':
                        if (strcmp(&(field_name[2]), "dDateTimeInferred") == 0)
                            return (flagHasEndDateTimeInferred ? extraEndDateTimeInferredToJSON() : NULL);
                        break;
                    case 'x':
                        if (strcmp(&(field_name[2]), "pressedAsDuration") == 0)
                            return (flagHasExpressedAsDuration ? extraExpressedAsDurationToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'R':
                if (strcmp(&(field_name[1]), "angeIsExplicit") == 0)
                    return (flagHasRangeIsExplicit ? extraRangeIsExplicitToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "tartDateTimeInferred") == 0)
                    return (flagHasStartDateTimeInferred ? extraStartDateTimeInferredToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraDateAndOrTimeRangeSpecLookup(field_name);
      }
    const JSONValue *extraWhenLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'E':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'n':
                        if (strcmp(&(field_name[2]), "dDateTimeInferred") == 0)
                            return (flagHasEndDateTimeInferred ? extraEndDateTimeInferredToJSON() : NULL);
                        break;
                    case 'x':
                        if (strcmp(&(field_name[2]), "pressedAsDuration") == 0)
                            return (flagHasExpressedAsDuration ? extraExpressedAsDurationToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'R':
                if (strcmp(&(field_name[1]), "angeIsExplicit") == 0)
                    return (flagHasRangeIsExplicit ? extraRangeIsExplicitToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "tartDateTimeInferred") == 0)
                    return (flagHasStartDateTimeInferred ? extraStartDateTimeInferredToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraDateAndOrTimeRangeSpecLookup(field_name);
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

    virtual void extraDateAndOrTimeRangeSpecAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraDateAndOrTimeRangeSpecSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraDateAndOrTimeRangeSpecLookup(key);
        if (old_field == NULL)
          {
            extraDateAndOrTimeRangeSpecAppendPair(key, new_component);
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
    void extraWhenAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'E':
                switch ((unsigned char)(key[1]))
                  {
                    case 'n':
                        if (strcmp(&(key[2]), "dDateTimeInferred") == 0)
                            {
                            fromJSONEndDateTimeInferred(new_component, false);
                            return;
                            }
                        break;
                    case 'x':
                        if (strcmp(&(key[2]), "pressedAsDuration") == 0)
                            {
                            fromJSONExpressedAsDuration(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'R':
                if (strcmp(&(key[1]), "angeIsExplicit") == 0)
                    {
                    fromJSONRangeIsExplicit(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strcmp(&(key[1]), "tartDateTimeInferred") == 0)
                    {
                    fromJSONStartDateTimeInferred(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraDateAndOrTimeRangeSpecAppendPair(key, new_component);
      }
    void extraWhenSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'E':
                switch ((unsigned char)(key[1]))
                  {
                    case 'n':
                        if (strcmp(&(key[2]), "dDateTimeInferred") == 0)
                            {
                            fromJSONEndDateTimeInferred(new_component, false);
                            return;
                            }
                        break;
                    case 'x':
                        if (strcmp(&(key[2]), "pressedAsDuration") == 0)
                            {
                            fromJSONExpressedAsDuration(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'R':
                if (strcmp(&(key[1]), "angeIsExplicit") == 0)
                    {
                    fromJSONRangeIsExplicit(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strcmp(&(key[1]), "tartDateTimeInferred") == 0)
                    {
                    fromJSONStartDateTimeInferred(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraDateAndOrTimeRangeSpecSetField(key, new_component);
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
        WhenJSON::write_fields_as_json(handler);
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

    static DateAndOrTimeRangeSpecJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static DateAndOrTimeRangeSpecJSON *from_text(const char *text, bool ignore_extras = false)
      {
        DateAndOrTimeRangeSpecJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DateAndOrTimeRangeSpecJSON>, DateAndOrTimeRangeSpecJSON *, bool> generator("Type DateAndOrTimeRangeSpec", ignore_extras);
            parse_json_value(text, "Text for DateAndOrTimeRangeSpecJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static DateAndOrTimeRangeSpecJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        DateAndOrTimeRangeSpecJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DateAndOrTimeRangeSpecJSON>, DateAndOrTimeRangeSpecJSON *, bool> generator("Type DateAndOrTimeRangeSpec", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public WhenJSON::Generator
      {
      private:
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
            DateAndOrTimeRangeSpecJSON *result = new DateAndOrTimeRangeSpecJSON();
            assert(result != NULL);
            RCHandle<DateAndOrTimeRangeSpecJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraDateAndOrTimeRangeSpecAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(WhenJSON *new_result)
          {
            handle_result((DateAndOrTimeRangeSpecJSON *)new_result);
          }
        void finish(DateAndOrTimeRangeSpecJSON *result)
          {
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
            WhenJSON::Generator::finish(result);
          }
        virtual void handle_result(DateAndOrTimeRangeSpecJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'E':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'n':
                            if (strcmp(&(field_name[2]), "dDateTimeInferred") == 0)
                                return &fieldGeneratorEndDateTimeInferred;
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
                    if (strcmp(&(field_name[1]), "tartDateTimeInferred") == 0)
                        return &fieldGeneratorStartDateTimeInferred;
                    break;
                default:
                    break;
              }
            return WhenJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : WhenJSON::Generator(ignore_extras), fieldGeneratorStartDateTimeInferred("field \"StartDateTimeInferred\" of the DateAndOrTimeRangeSpec class"), fieldGeneratorEndDateTimeInferred("field \"EndDateTimeInferred\" of the DateAndOrTimeRangeSpec class"), fieldGeneratorRangeIsExplicit("field \"RangeIsExplicit\" of the DateAndOrTimeRangeSpec class"), fieldGeneratorExpressedAsDuration("field \"ExpressedAsDuration\" of the DateAndOrTimeRangeSpec class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the DateAndOrTimeRangeSpec class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorStartDateTimeInferred.reset();
            fieldGeneratorEndDateTimeInferred.reset();
            fieldGeneratorRangeIsExplicit.reset();
            fieldGeneratorExpressedAsDuration.reset();
            WhenJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
    static DateAndOrTimeRangeSpecJSON *from_WhenJSON_json(const WhenJSON * ancestor, bool ignore_extras = false)
      {
        assert(ancestor != NULL);
        DateAndOrTimeRangeSpecJSON * result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DateAndOrTimeRangeSpecJSON>, DateAndOrTimeRangeSpecJSON *, bool> handler("Type DateAndOrTimeRangeSpec", ignore_extras);
            ancestor->write_as_json(&handler);
            result = handler.value.referenced();
            result->add_reference();
          }
        result->remove_reference_no_delete();
        return result;
      }
  };

#endif /* DATEANDORTIMERANGESPECJSON_H */
