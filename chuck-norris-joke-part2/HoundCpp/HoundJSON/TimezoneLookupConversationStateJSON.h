/* file "TimezoneLookupConversationStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef TIMEZONELOOKUPCONVERSATIONSTATEJSON_H
#define TIMEZONELOOKUPCONVERSATIONSTATEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include <string>
#include "MapLocationJSON.h"
#include "DateAndOrTimeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class TimezoneLookupConversationStateJSON : public ReferenceCounted
  {
  public:
    enum TypeDateAndTimeKind
      {
        DateAndTimeKind_TimezoneLookup
      };

    static TypeDateAndTimeKind  stringToDateAndTimeKind(const char *chars);
    static const char * stringFromDateAndTimeKind(TypeDateAndTimeKind the_enum);

  private:
    bool flagHasDateAndTimeKind;
    bool flagHasMapLocation;
    MapLocationJSON * storeMapLocation;
    bool flagHasDateAndTime;
    DateAndOrTimeJSON * storeDateAndTime;
    bool flagHasOlsonCode;
    std::string storeOlsonCode;
    bool flagHasOffset;
    double storeOffset;
    std::string textStoreOffset;
    bool flagHasUnits;
    std::string storeUnits;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    TimezoneLookupConversationStateJSON(const TimezoneLookupConversationStateJSON &);
    TimezoneLookupConversationStateJSON & operator=(const TimezoneLookupConversationStateJSON &other);

    void  fromJSONDateAndTimeKind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMapLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDateAndTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOlsonCode(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOffset(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUnits(JSONValue *json_value, bool ignore_extras = false);


  public:
    TimezoneLookupConversationStateJSON(void);
    virtual ~TimezoneLookupConversationStateJSON(void);
    bool  hasDateAndTimeKind(void) const;
    TypeDateAndTimeKind  getDateAndTimeKind(void);
    const TypeDateAndTimeKind  getDateAndTimeKind(void) const;
    const char * getDateAndTimeKindAsChars(void) const;
    std::string  getDateAndTimeKindAsString(void) const;
    bool  hasMapLocation(void) const;
    MapLocationJSON *  getMapLocation(void);
    const MapLocationJSON *  getMapLocation(void) const;
    bool  hasDateAndTime(void) const;
    DateAndOrTimeJSON *  getDateAndTime(void);
    const DateAndOrTimeJSON *  getDateAndTime(void) const;
    bool  hasOlsonCode(void) const;
    std::string  getOlsonCode(void);
    const std::string  getOlsonCode(void) const;
    bool  hasOffset(void) const;
    double  getOffset(void);
    const double  getOffset(void) const;
    std::string  getOffsetAsText(void) const;
    bool  hasUnits(void) const;
    std::string  getUnits(void);
    const std::string  getUnits(void) const;

    virtual size_t extraTimezoneLookupConversationStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraTimezoneLookupConversationStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraTimezoneLookupConversationStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraTimezoneLookupConversationStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraTimezoneLookupConversationStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraTimezoneLookupConversationStateLookup(const char *field_name) const
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
    void setMapLocation(MapLocationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMapLocation)
          {
            storeMapLocation->remove_reference();
          }
        flagHasMapLocation = true;
        storeMapLocation = new_value;
      }
    void unsetMapLocation(void)
      {
        if (flagHasMapLocation)
          {
            storeMapLocation->remove_reference();
          }
        flagHasMapLocation = false;
      }
    void setDateAndTime(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDateAndTime)
          {
            storeDateAndTime->remove_reference();
          }
        flagHasDateAndTime = true;
        storeDateAndTime = new_value;
      }
    void unsetDateAndTime(void)
      {
        if (flagHasDateAndTime)
          {
            storeDateAndTime->remove_reference();
          }
        flagHasDateAndTime = false;
      }
    void setOlsonCode(std::string new_value)
      {
        flagHasOlsonCode = true;
        storeOlsonCode = new_value;
      }
    void unsetOlsonCode(void)
      {
        flagHasOlsonCode = false;
      }
    void setOffset(double new_value)
      {
        flagHasOffset = true;
        storeOffset = new_value;
        textStoreOffset = "";
      }
    void setOffsetText(std::string new_value)
      {
        flagHasOffset = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Offset of TimezoneLookupConversationStateJSON is not a valid number.");
        textStoreOffset = new_value;
      }
    void unsetOffset(void)
      {
        flagHasOffset = false;
      }
    void setUnits(std::string new_value)
      {
        flagHasUnits = true;
        storeUnits = new_value;
      }
    void unsetUnits(void)
      {
        flagHasUnits = false;
      }

    virtual void extraTimezoneLookupConversationStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraTimezoneLookupConversationStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraTimezoneLookupConversationStateLookup(key);
        if (old_field == NULL)
          {
            extraTimezoneLookupConversationStateAppendPair(key, new_component);
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
        handler->string_value("TimezoneLookup");
        assert(flagHasMapLocation);
        handler->start_pair("MapLocation");
        storeMapLocation->write_as_json(handler);
        assert(flagHasDateAndTime);
        handler->start_pair("DateAndTime");
        storeDateAndTime->write_as_json(handler);
        assert(flagHasOlsonCode);
        handler->start_pair("OlsonCode");
        handler->string_value(storeOlsonCode);
        assert(flagHasOffset);
        handler->start_pair("Offset");
        if (textStoreOffset != "")
            handler->number_value(textStoreOffset.c_str());
        else if (((double)(long int)storeOffset) == storeOffset)
            handler->number_value((long int)storeOffset);
        else
            handler->number_value(storeOffset);
        assert(flagHasUnits);
        handler->start_pair("Units");
        handler->string_value(storeUnits);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasDateAndTimeKind()))
          {
            return "When parsing the object for %what%, the \"DateAndTimeKind\" field was missing.";
          }
        if (!(hasMapLocation()))
          {
            return "When parsing the object for %what%, the \"MapLocation\" field was missing.";
          }
        if (!(hasDateAndTime()))
          {
            return "When parsing the object for %what%, the \"DateAndTime\" field was missing.";
          }
        if (!(hasOlsonCode()))
          {
            return "When parsing the object for %what%, the \"OlsonCode\" field was missing.";
          }
        if (!(hasOffset()))
          {
            return "When parsing the object for %what%, the \"Offset\" field was missing.";
          }
        if (!(hasUnits()))
          {
            return "When parsing the object for %what%, the \"Units\" field was missing.";
          }
        return NULL;
      }

    static TimezoneLookupConversationStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static TimezoneLookupConversationStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        TimezoneLookupConversationStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TimezoneLookupConversationStateJSON>, TimezoneLookupConversationStateJSON *, bool> generator("Type TimezoneLookupConversationState", ignore_extras);
            parse_json_value(text, "Text for TimezoneLookupConversationStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static TimezoneLookupConversationStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        TimezoneLookupConversationStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TimezoneLookupConversationStateJSON>, TimezoneLookupConversationStateJSON *, bool> generator("Type TimezoneLookupConversationState", ignore_extras);
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
        JSONHoldingGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorMapLocation;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorDateAndTime;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorOlsonCode;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorOffset;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorUnits;
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
            TimezoneLookupConversationStateJSON *result = new TimezoneLookupConversationStateJSON();
            assert(result != NULL);
            RCHandle<TimezoneLookupConversationStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraTimezoneLookupConversationStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(TimezoneLookupConversationStateJSON *result)
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
            if (fieldGeneratorMapLocation.have_value)
              {
                result->setMapLocation(fieldGeneratorMapLocation.value.referenced());
                fieldGeneratorMapLocation.have_value = false;
              }
            else if (!(result->hasMapLocation()))
              {
                error("When parsing the object for %what%, the \"MapLocation\" field was missing.");
              }
            if (fieldGeneratorDateAndTime.have_value)
              {
                result->setDateAndTime(fieldGeneratorDateAndTime.value.referenced());
                fieldGeneratorDateAndTime.have_value = false;
              }
            else if (!(result->hasDateAndTime()))
              {
                error("When parsing the object for %what%, the \"DateAndTime\" field was missing.");
              }
            if (fieldGeneratorOlsonCode.have_value)
              {
                result->setOlsonCode(fieldGeneratorOlsonCode.value);
                fieldGeneratorOlsonCode.have_value = false;
              }
            else if (!(result->hasOlsonCode()))
              {
                error("When parsing the object for %what%, the \"OlsonCode\" field was missing.");
              }
            if (fieldGeneratorOffset.have_value)
              {
                result->setOffsetText(fieldGeneratorOffset.value);
                fieldGeneratorOffset.have_value = false;
              }
            else if (!(result->hasOffset()))
              {
                error("When parsing the object for %what%, the \"Offset\" field was missing.");
              }
            if (fieldGeneratorUnits.have_value)
              {
                result->setUnits(fieldGeneratorUnits.value);
                fieldGeneratorUnits.have_value = false;
              }
            else if (!(result->hasUnits()))
              {
                error("When parsing the object for %what%, the \"Units\" field was missing.");
              }
          }
        virtual void handle_result(TimezoneLookupConversationStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strncmp(&(field_name[1]), "ateAndTime", 10) == 0)
                      {
                        switch ((unsigned char)(field_name[11]))
                          {
                            case 0:
                                return &fieldGeneratorDateAndTime;
                            case 'K':
                                if (strcmp(&(field_name[12]), "ind") == 0)
                                    return &fieldGeneratorDateAndTimeKind;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "apLocation") == 0)
                        return &fieldGeneratorMapLocation;
                    break;
                case 'O':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'f':
                            if (strcmp(&(field_name[2]), "fset") == 0)
                                return &fieldGeneratorOffset;
                            break;
                        case 'l':
                            if (strcmp(&(field_name[2]), "sonCode") == 0)
                                return &fieldGeneratorOlsonCode;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'U':
                    if (strcmp(&(field_name[1]), "nits") == 0)
                        return &fieldGeneratorUnits;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorDateAndTimeKind("field \"DateAndTimeKind\" of the TimezoneLookupConversationState class"), fieldGeneratorMapLocation("field \"MapLocation\" of the TimezoneLookupConversationState class", ignore_extras), fieldGeneratorDateAndTime("field \"DateAndTime\" of the TimezoneLookupConversationState class", ignore_extras), fieldGeneratorOlsonCode("field \"OlsonCode\" of the TimezoneLookupConversationState class"), fieldGeneratorOffset("field \"Offset\" of the TimezoneLookupConversationState class"), fieldGeneratorUnits("field \"Units\" of the TimezoneLookupConversationState class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the TimezoneLookupConversationState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorDateAndTimeKind.reset();
            fieldGeneratorMapLocation.reset();
            fieldGeneratorDateAndTime.reset();
            fieldGeneratorOlsonCode.reset();
            fieldGeneratorOffset.reset();
            fieldGeneratorUnits.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* TIMEZONELOOKUPCONVERSATIONSTATEJSON_H */
