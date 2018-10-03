/* file "MoonPhaseAtTimeInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MOONPHASEATTIMEINFORMATIONNUGGETJSON_H
#define MOONPHASEATTIMEINFORMATIONNUGGETJSON_H

#pragma interface

#include "DateAndTimeInformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerRangeGenerator.h"
#include "JSONBooleanGenerator.h"
#include <string>
#include <stdint.h>
#include "DateTimeSpecJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class MoonPhaseAtTimeInformationNuggetJSON : public DateAndTimeInformationNuggetJSON
  {
  private:
    bool flagHasDateTimeSpec;
    DateTimeSpecJSON * storeDateTimeSpec;
    bool flagHasMoonPhasePct;
    uint8_t storeMoonPhasePct;
    bool flagHasMoonPhase;
    std::string storeMoonPhase;
    bool flagHasRequestedDateTimeInThePast;
    bool storeRequestedDateTimeInThePast;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    MoonPhaseAtTimeInformationNuggetJSON(const MoonPhaseAtTimeInformationNuggetJSON &);
    MoonPhaseAtTimeInformationNuggetJSON & operator=(const MoonPhaseAtTimeInformationNuggetJSON &other);

    JSONValue * extraDateTimeSpecToJSON(void) const;
    JSONValue * extraMoonPhasePctToJSON(void) const;
    JSONValue * extraMoonPhaseToJSON(void) const;
    JSONValue * extraRequestedDateTimeInThePastToJSON(void) const;

    void  fromJSONDateTimeSpec(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMoonPhasePct(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMoonPhase(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestedDateTimeInThePast(JSONValue *json_value, bool ignore_extras = false);


  public:
    MoonPhaseAtTimeInformationNuggetJSON(void);
    virtual ~MoonPhaseAtTimeInformationNuggetJSON(void);
    const char * getDateAndTimeNuggetKind(void) const;
    bool  hasDateTimeSpec(void) const;
    DateTimeSpecJSON *  getDateTimeSpec(void);
    const DateTimeSpecJSON *  getDateTimeSpec(void) const;
    bool  hasMoonPhasePct(void) const;
    uint8_t  getMoonPhasePct(void);
    const uint8_t  getMoonPhasePct(void) const;
    bool  hasMoonPhase(void) const;
    std::string  getMoonPhase(void);
    const std::string  getMoonPhase(void) const;
    bool  hasRequestedDateTimeInThePast(void) const;
    bool  getRequestedDateTimeInThePast(void);
    const bool  getRequestedDateTimeInThePast(void) const;

    virtual size_t extraMoonPhaseAtTimeInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraMoonPhaseAtTimeInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraMoonPhaseAtTimeInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraMoonPhaseAtTimeInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraMoonPhaseAtTimeInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraMoonPhaseAtTimeInformationNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraDateAndTimeInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasDateTimeSpec)
            ++result;
        if (flagHasMoonPhasePct)
            ++result;
        if (flagHasMoonPhase)
            ++result;
        if (flagHasRequestedDateTimeInThePast)
            ++result;
        result += extraMoonPhaseAtTimeInformationNuggetComponentCount();
        return result;
      }
    const char *extraDateAndTimeInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasDateTimeSpec)
          {
            if (remainder == 0)
                return "DateTimeSpec";
            --remainder;
          }
        if (flagHasMoonPhasePct)
          {
            if (remainder == 0)
                return "MoonPhasePct";
            --remainder;
          }
        if (flagHasMoonPhase)
          {
            if (remainder == 0)
                return "MoonPhase";
            --remainder;
          }
        if (flagHasRequestedDateTimeInThePast)
          {
            if (remainder == 0)
                return "RequestedDateTimeInThePast";
            --remainder;
          }
        return extraMoonPhaseAtTimeInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraDateAndTimeInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasDateTimeSpec)
          {
            if (remainder == 0)
                return extraDateTimeSpecToJSON();
            --remainder;
          }
        if (flagHasMoonPhasePct)
          {
            if (remainder == 0)
                return extraMoonPhasePctToJSON();
            --remainder;
          }
        if (flagHasMoonPhase)
          {
            if (remainder == 0)
                return extraMoonPhaseToJSON();
            --remainder;
          }
        if (flagHasRequestedDateTimeInThePast)
          {
            if (remainder == 0)
                return extraRequestedDateTimeInThePastToJSON();
            --remainder;
          }
        return extraMoonPhaseAtTimeInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraDateAndTimeInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasDateTimeSpec)
          {
            if (remainder == 0)
                return extraDateTimeSpecToJSON();
            --remainder;
          }
        if (flagHasMoonPhasePct)
          {
            if (remainder == 0)
                return extraMoonPhasePctToJSON();
            --remainder;
          }
        if (flagHasMoonPhase)
          {
            if (remainder == 0)
                return extraMoonPhaseToJSON();
            --remainder;
          }
        if (flagHasRequestedDateTimeInThePast)
          {
            if (remainder == 0)
                return extraRequestedDateTimeInThePastToJSON();
            --remainder;
          }
        return extraMoonPhaseAtTimeInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraDateAndTimeInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'D':
                if (strcmp(&(field_name[1]), "ateTimeSpec") == 0)
                    return (flagHasDateTimeSpec ? extraDateTimeSpecToJSON() : NULL);
                break;
            case 'M':
                if (strncmp(&(field_name[1]), "oonPhase", 8) == 0)
                  {
                    switch ((unsigned char)(field_name[9]))
                      {
                        case 0:
                            return (flagHasMoonPhase ? extraMoonPhaseToJSON() : NULL);
                        case 'P':
                            if (strcmp(&(field_name[10]), "ct") == 0)
                                return (flagHasMoonPhasePct ? extraMoonPhasePctToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'R':
                if (strcmp(&(field_name[1]), "equestedDateTimeInThePast") == 0)
                    return (flagHasRequestedDateTimeInThePast ? extraRequestedDateTimeInThePastToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraMoonPhaseAtTimeInformationNuggetLookup(field_name);
      }
    const JSONValue *extraDateAndTimeInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'D':
                if (strcmp(&(field_name[1]), "ateTimeSpec") == 0)
                    return (flagHasDateTimeSpec ? extraDateTimeSpecToJSON() : NULL);
                break;
            case 'M':
                if (strncmp(&(field_name[1]), "oonPhase", 8) == 0)
                  {
                    switch ((unsigned char)(field_name[9]))
                      {
                        case 0:
                            return (flagHasMoonPhase ? extraMoonPhaseToJSON() : NULL);
                        case 'P':
                            if (strcmp(&(field_name[10]), "ct") == 0)
                                return (flagHasMoonPhasePct ? extraMoonPhasePctToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'R':
                if (strcmp(&(field_name[1]), "equestedDateTimeInThePast") == 0)
                    return (flagHasRequestedDateTimeInThePast ? extraRequestedDateTimeInThePastToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraMoonPhaseAtTimeInformationNuggetLookup(field_name);
      }

    void setDateTimeSpec(DateTimeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDateTimeSpec)
          {
            storeDateTimeSpec->remove_reference();
          }
        flagHasDateTimeSpec = true;
        storeDateTimeSpec = new_value;
      }
    void unsetDateTimeSpec(void)
      {
        if (flagHasDateTimeSpec)
          {
            storeDateTimeSpec->remove_reference();
          }
        flagHasDateTimeSpec = false;
      }
    void setMoonPhasePct(uint8_t new_value)
      {
        flagHasMoonPhasePct = true;
        if (new_value < 0)
            throw("The value for field MoonPhasePct of MoonPhaseAtTimeInformationNuggetJSON is less than the lower bound (0) for that field.");
        if (new_value > 100)
            throw("The value for field MoonPhasePct of MoonPhaseAtTimeInformationNuggetJSON is greater than the upper bound (100) for that field.");
        storeMoonPhasePct = new_value;
      }
    void unsetMoonPhasePct(void)
      {
        flagHasMoonPhasePct = false;
      }
    void setMoonPhase(std::string new_value)
      {
        flagHasMoonPhase = true;
        storeMoonPhase = new_value;
      }
    void unsetMoonPhase(void)
      {
        flagHasMoonPhase = false;
      }
    void setRequestedDateTimeInThePast(bool new_value)
      {
        flagHasRequestedDateTimeInThePast = true;
        storeRequestedDateTimeInThePast = new_value;
      }
    void unsetRequestedDateTimeInThePast(void)
      {
        flagHasRequestedDateTimeInThePast = false;
      }

    virtual void extraMoonPhaseAtTimeInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraMoonPhaseAtTimeInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraMoonPhaseAtTimeInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraMoonPhaseAtTimeInformationNuggetAppendPair(key, new_component);
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
    void extraDateAndTimeInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'D':
                if (strcmp(&(key[1]), "ateTimeSpec") == 0)
                    {
                    fromJSONDateTimeSpec(new_component, false);
                    return;
                    }
                break;
            case 'M':
                if (strncmp(&(key[1]), "oonPhase", 8) == 0)
                  {
                    switch ((unsigned char)(key[9]))
                      {
                        case 0:
                            {
                            fromJSONMoonPhase(new_component, false);
                            return;
                            }
                        case 'P':
                            if (strcmp(&(key[10]), "ct") == 0)
                                {
                                fromJSONMoonPhasePct(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'R':
                if (strcmp(&(key[1]), "equestedDateTimeInThePast") == 0)
                    {
                    fromJSONRequestedDateTimeInThePast(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraMoonPhaseAtTimeInformationNuggetAppendPair(key, new_component);
      }
    void extraDateAndTimeInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'D':
                if (strcmp(&(key[1]), "ateTimeSpec") == 0)
                    {
                    fromJSONDateTimeSpec(new_component, false);
                    return;
                    }
                break;
            case 'M':
                if (strncmp(&(key[1]), "oonPhase", 8) == 0)
                  {
                    switch ((unsigned char)(key[9]))
                      {
                        case 0:
                            {
                            fromJSONMoonPhase(new_component, false);
                            return;
                            }
                        case 'P':
                            if (strcmp(&(key[10]), "ct") == 0)
                                {
                                fromJSONMoonPhasePct(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'R':
                if (strcmp(&(key[1]), "equestedDateTimeInThePast") == 0)
                    {
                    fromJSONRequestedDateTimeInThePast(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraMoonPhaseAtTimeInformationNuggetSetField(key, new_component);
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
        DateAndTimeInformationNuggetJSON::write_fields_as_json(handler);
        assert(flagHasDateTimeSpec);
        handler->start_pair("DateTimeSpec");
        storeDateTimeSpec->write_as_json(handler);
        assert(flagHasMoonPhasePct);
        handler->start_pair("MoonPhasePct");
        handler->number_value(storeMoonPhasePct);
        assert(flagHasMoonPhase);
        handler->start_pair("MoonPhase");
        handler->string_value(storeMoonPhase);
        assert(flagHasRequestedDateTimeInThePast);
        handler->start_pair("RequestedDateTimeInThePast");
        handler->boolean_value(storeRequestedDateTimeInThePast);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasDateTimeSpec()))
          {
            return "When parsing the object for %what%, the \"DateTimeSpec\" field was missing.";
          }
        if (!(hasMoonPhasePct()))
          {
            return "When parsing the object for %what%, the \"MoonPhasePct\" field was missing.";
          }
        if (!(hasMoonPhase()))
          {
            return "When parsing the object for %what%, the \"MoonPhase\" field was missing.";
          }
        if (!(hasRequestedDateTimeInThePast()))
          {
            return "When parsing the object for %what%, the \"RequestedDateTimeInThePast\" field was missing.";
          }
        return NULL;
      }

    static MoonPhaseAtTimeInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MoonPhaseAtTimeInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MoonPhaseAtTimeInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MoonPhaseAtTimeInformationNuggetJSON>, MoonPhaseAtTimeInformationNuggetJSON *, bool> generator("Type MoonPhaseAtTimeInformationNugget", ignore_extras);
            parse_json_value(text, "Text for MoonPhaseAtTimeInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MoonPhaseAtTimeInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MoonPhaseAtTimeInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MoonPhaseAtTimeInformationNuggetJSON>, MoonPhaseAtTimeInformationNuggetJSON *, bool> generator("Type MoonPhaseAtTimeInformationNugget", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public DateAndTimeInformationNuggetJSON::Generator
      {
      private:
        JSONHoldingGenerator<DateTimeSpecJSON::Generator, RCHandle<DateTimeSpecJSON>, DateTimeSpecJSON *, bool > fieldGeneratorDateTimeSpec;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 100>, uint8_t, uint8_t > fieldGeneratorMoonPhasePct;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorMoonPhase;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorRequestedDateTimeInThePast;
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
            if (!(strcmp(getDateAndTimeInformationNuggetJSONKey().c_str(), "MoonPhaseAtTime") == 0))
                throw("The key field has a value other than `MoonPhaseAtTime'.");
            MoonPhaseAtTimeInformationNuggetJSON *result = new MoonPhaseAtTimeInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<MoonPhaseAtTimeInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraMoonPhaseAtTimeInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(DateAndTimeInformationNuggetJSON *new_result)
          {
            handle_result((MoonPhaseAtTimeInformationNuggetJSON *)new_result);
          }
        void finish(MoonPhaseAtTimeInformationNuggetJSON *result)
          {
            if (fieldGeneratorDateTimeSpec.have_value)
              {
                result->setDateTimeSpec(fieldGeneratorDateTimeSpec.value.referenced());
                fieldGeneratorDateTimeSpec.have_value = false;
              }
            else if (!(result->hasDateTimeSpec()))
              {
                error("When parsing the object for %what%, the \"DateTimeSpec\" field was missing.");
              }
            if (fieldGeneratorMoonPhasePct.have_value)
              {
                result->setMoonPhasePct(fieldGeneratorMoonPhasePct.value);
                fieldGeneratorMoonPhasePct.have_value = false;
              }
            else if (!(result->hasMoonPhasePct()))
              {
                error("When parsing the object for %what%, the \"MoonPhasePct\" field was missing.");
              }
            if (fieldGeneratorMoonPhase.have_value)
              {
                result->setMoonPhase(fieldGeneratorMoonPhase.value);
                fieldGeneratorMoonPhase.have_value = false;
              }
            else if (!(result->hasMoonPhase()))
              {
                error("When parsing the object for %what%, the \"MoonPhase\" field was missing.");
              }
            if (fieldGeneratorRequestedDateTimeInThePast.have_value)
              {
                result->setRequestedDateTimeInThePast(fieldGeneratorRequestedDateTimeInThePast.value);
                fieldGeneratorRequestedDateTimeInThePast.have_value = false;
              }
            else if (!(result->hasRequestedDateTimeInThePast()))
              {
                error("When parsing the object for %what%, the \"RequestedDateTimeInThePast\" field was missing.");
              }
            DateAndTimeInformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(MoonPhaseAtTimeInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strcmp(&(field_name[1]), "ateTimeSpec") == 0)
                        return &fieldGeneratorDateTimeSpec;
                    break;
                case 'M':
                    if (strncmp(&(field_name[1]), "oonPhase", 8) == 0)
                      {
                        switch ((unsigned char)(field_name[9]))
                          {
                            case 0:
                                return &fieldGeneratorMoonPhase;
                            case 'P':
                                if (strcmp(&(field_name[10]), "ct") == 0)
                                    return &fieldGeneratorMoonPhasePct;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "equestedDateTimeInThePast") == 0)
                        return &fieldGeneratorRequestedDateTimeInThePast;
                    break;
                default:
                    break;
              }
            return DateAndTimeInformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : DateAndTimeInformationNuggetJSON::Generator(ignore_extras), fieldGeneratorDateTimeSpec("field \"DateTimeSpec\" of the MoonPhaseAtTimeInformationNugget class", ignore_extras), fieldGeneratorMoonPhasePct("field \"MoonPhasePct\" of the MoonPhaseAtTimeInformationNugget class"), fieldGeneratorMoonPhase("field \"MoonPhase\" of the MoonPhaseAtTimeInformationNugget class"), fieldGeneratorRequestedDateTimeInThePast("field \"RequestedDateTimeInThePast\" of the MoonPhaseAtTimeInformationNugget class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the MoonPhaseAtTimeInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorDateTimeSpec.reset();
            fieldGeneratorMoonPhasePct.reset();
            fieldGeneratorMoonPhase.reset();
            fieldGeneratorRequestedDateTimeInThePast.reset();
            DateAndTimeInformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* MOONPHASEATTIMEINFORMATIONNUGGETJSON_H */
