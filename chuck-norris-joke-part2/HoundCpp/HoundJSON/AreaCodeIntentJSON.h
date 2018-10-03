/* file "AreaCodeIntentJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef AREACODEINTENTJSON_H
#define AREACODEINTENTJSON_H

#pragma interface

#include "LocationIntentJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONIntegerUnboundRangeGenerator.h"
#include "OInteger.h"
#include "MapLocationJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class AreaCodeIntentJSON : public LocationIntentJSON
  {
  private:
    bool flagHasPhoneAreaCode;
    OInteger storePhoneAreaCode;
    bool flagHasMapLocation;
    MapLocationJSON * storeMapLocation;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    AreaCodeIntentJSON(const AreaCodeIntentJSON &);
    AreaCodeIntentJSON & operator=(const AreaCodeIntentJSON &other);

    JSONValue * extraPhoneAreaCodeToJSON(void) const;
    JSONValue * extraMapLocationToJSON(void) const;

    void  fromJSONPhoneAreaCode(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMapLocation(JSONValue *json_value, bool ignore_extras = false);


  public:
    AreaCodeIntentJSON(void);
    virtual ~AreaCodeIntentJSON(void);
    const char * getLocationIntentKind(void) const;
    bool  hasPhoneAreaCode(void) const;
    OInteger  getPhoneAreaCode(void);
    const OInteger  getPhoneAreaCode(void) const;
    bool  hasMapLocation(void) const;
    MapLocationJSON *  getMapLocation(void);
    const MapLocationJSON *  getMapLocation(void) const;

    virtual size_t extraAreaCodeIntentComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraAreaCodeIntentComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraAreaCodeIntentComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraAreaCodeIntentComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraAreaCodeIntentLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraAreaCodeIntentLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraLocationIntentComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasPhoneAreaCode)
            ++result;
        if (flagHasMapLocation)
            ++result;
        result += extraAreaCodeIntentComponentCount();
        return result;
      }
    const char *extraLocationIntentComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasPhoneAreaCode)
          {
            if (remainder == 0)
                return "PhoneAreaCode";
            --remainder;
          }
        if (flagHasMapLocation)
          {
            if (remainder == 0)
                return "MapLocation";
            --remainder;
          }
        return extraAreaCodeIntentComponentKey(remainder);
      }
    JSONValue *extraLocationIntentComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasPhoneAreaCode)
          {
            if (remainder == 0)
                return extraPhoneAreaCodeToJSON();
            --remainder;
          }
        if (flagHasMapLocation)
          {
            if (remainder == 0)
                return extraMapLocationToJSON();
            --remainder;
          }
        return extraAreaCodeIntentComponentValue(remainder);
      }
    const JSONValue *extraLocationIntentComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasPhoneAreaCode)
          {
            if (remainder == 0)
                return extraPhoneAreaCodeToJSON();
            --remainder;
          }
        if (flagHasMapLocation)
          {
            if (remainder == 0)
                return extraMapLocationToJSON();
            --remainder;
          }
        return extraAreaCodeIntentComponentValue(remainder);
      }
    JSONValue *extraLocationIntentLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'M':
                if (strcmp(&(field_name[1]), "apLocation") == 0)
                    return (flagHasMapLocation ? extraMapLocationToJSON() : NULL);
                break;
            case 'P':
                if (strcmp(&(field_name[1]), "honeAreaCode") == 0)
                    return (flagHasPhoneAreaCode ? extraPhoneAreaCodeToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraAreaCodeIntentLookup(field_name);
      }
    const JSONValue *extraLocationIntentLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'M':
                if (strcmp(&(field_name[1]), "apLocation") == 0)
                    return (flagHasMapLocation ? extraMapLocationToJSON() : NULL);
                break;
            case 'P':
                if (strcmp(&(field_name[1]), "honeAreaCode") == 0)
                    return (flagHasPhoneAreaCode ? extraPhoneAreaCodeToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraAreaCodeIntentLookup(field_name);
      }

    void setPhoneAreaCode(OInteger new_value)
      {
        flagHasPhoneAreaCode = true;
        storePhoneAreaCode = new_value;
      }
    void unsetPhoneAreaCode(void)
      {
        flagHasPhoneAreaCode = false;
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

    virtual void extraAreaCodeIntentAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraAreaCodeIntentSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraAreaCodeIntentLookup(key);
        if (old_field == NULL)
          {
            extraAreaCodeIntentAppendPair(key, new_component);
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
    void extraLocationIntentAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'M':
                if (strcmp(&(key[1]), "apLocation") == 0)
                    {
                    fromJSONMapLocation(new_component, false);
                    return;
                    }
                break;
            case 'P':
                if (strcmp(&(key[1]), "honeAreaCode") == 0)
                    {
                    fromJSONPhoneAreaCode(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraAreaCodeIntentAppendPair(key, new_component);
      }
    void extraLocationIntentSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'M':
                if (strcmp(&(key[1]), "apLocation") == 0)
                    {
                    fromJSONMapLocation(new_component, false);
                    return;
                    }
                break;
            case 'P':
                if (strcmp(&(key[1]), "honeAreaCode") == 0)
                    {
                    fromJSONPhoneAreaCode(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraAreaCodeIntentSetField(key, new_component);
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
        LocationIntentJSON::write_fields_as_json(handler);
        assert(flagHasPhoneAreaCode);
        handler->start_pair("PhoneAreaCode");
        handler->number_value(storePhoneAreaCode.get_o_integer());
        assert(flagHasMapLocation);
        handler->start_pair("MapLocation");
        storeMapLocation->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasPhoneAreaCode()))
          {
            return "When parsing the object for %what%, the \"PhoneAreaCode\" field was missing.";
          }
        if (!(hasMapLocation()))
          {
            return "When parsing the object for %what%, the \"MapLocation\" field was missing.";
          }
        return NULL;
      }

    static AreaCodeIntentJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static AreaCodeIntentJSON *from_text(const char *text, bool ignore_extras = false)
      {
        AreaCodeIntentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AreaCodeIntentJSON>, AreaCodeIntentJSON *, bool> generator("Type AreaCodeIntent", ignore_extras);
            parse_json_value(text, "Text for AreaCodeIntentJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static AreaCodeIntentJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        AreaCodeIntentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AreaCodeIntentJSON>, AreaCodeIntentJSON *, bool> generator("Type AreaCodeIntent", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public LocationIntentJSON::Generator
      {
      private:
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorPhoneAreaCode;
        JSONHoldingGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorMapLocation;
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
            if (!(strcmp(getLocationIntentJSONKey().c_str(), "AreaCode") == 0))
                throw("The key field has a value other than `AreaCode'.");
            AreaCodeIntentJSON *result = new AreaCodeIntentJSON();
            assert(result != NULL);
            RCHandle<AreaCodeIntentJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraAreaCodeIntentAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(LocationIntentJSON *new_result)
          {
            handle_result((AreaCodeIntentJSON *)new_result);
          }
        void finish(AreaCodeIntentJSON *result)
          {
            if (fieldGeneratorPhoneAreaCode.have_value)
              {
                result->setPhoneAreaCode(fieldGeneratorPhoneAreaCode.value);
                fieldGeneratorPhoneAreaCode.have_value = false;
              }
            else if (!(result->hasPhoneAreaCode()))
              {
                error("When parsing the object for %what%, the \"PhoneAreaCode\" field was missing.");
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
            LocationIntentJSON::Generator::finish(result);
          }
        virtual void handle_result(AreaCodeIntentJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'M':
                    if (strcmp(&(field_name[1]), "apLocation") == 0)
                        return &fieldGeneratorMapLocation;
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "honeAreaCode") == 0)
                        return &fieldGeneratorPhoneAreaCode;
                    break;
                default:
                    break;
              }
            return LocationIntentJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : LocationIntentJSON::Generator(ignore_extras), fieldGeneratorPhoneAreaCode("field \"PhoneAreaCode\" of the AreaCodeIntent class"), fieldGeneratorMapLocation("field \"MapLocation\" of the AreaCodeIntent class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the AreaCodeIntent class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorPhoneAreaCode.reset();
            fieldGeneratorMapLocation.reset();
            LocationIntentJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* AREACODEINTENTJSON_H */
