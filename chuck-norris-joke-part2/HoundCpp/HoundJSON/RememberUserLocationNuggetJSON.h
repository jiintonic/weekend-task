/* file "RememberUserLocationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef REMEMBERUSERLOCATIONNUGGETJSON_H
#define REMEMBERUSERLOCATIONNUGGETJSON_H

#pragma interface

#include "UserMemoryNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
#include <string>
#include "MapLocationJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class RememberUserLocationNuggetJSON : public UserMemoryNuggetJSON
  {
  private:
    bool flagHasIsOwned;
    bool storeIsOwned;
    bool flagHasWhat;
    std::string storeWhat;
    bool flagHasLocation;
    MapLocationJSON * storeLocation;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    RememberUserLocationNuggetJSON(const RememberUserLocationNuggetJSON &);
    RememberUserLocationNuggetJSON & operator=(const RememberUserLocationNuggetJSON &other);

    JSONValue * extraIsOwnedToJSON(void) const;
    JSONValue * extraWhatToJSON(void) const;
    JSONValue * extraLocationToJSON(void) const;

    void  fromJSONIsOwned(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWhat(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLocation(JSONValue *json_value, bool ignore_extras = false);


  public:
    RememberUserLocationNuggetJSON(void);
    virtual ~RememberUserLocationNuggetJSON(void);
    const char * getUserMemoryNuggetKind(void) const;
    bool  hasIsOwned(void) const;
    bool  getIsOwned(void);
    const bool  getIsOwned(void) const;
    bool  hasWhat(void) const;
    std::string  getWhat(void);
    const std::string  getWhat(void) const;
    bool  hasLocation(void) const;
    MapLocationJSON *  getLocation(void);
    const MapLocationJSON *  getLocation(void) const;

    virtual size_t extraRememberUserLocationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraRememberUserLocationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraRememberUserLocationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraRememberUserLocationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraRememberUserLocationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraRememberUserLocationNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraUserMemoryNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasIsOwned)
            ++result;
        if (flagHasWhat)
            ++result;
        if (flagHasLocation)
            ++result;
        result += extraRememberUserLocationNuggetComponentCount();
        return result;
      }
    const char *extraUserMemoryNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasIsOwned)
          {
            if (remainder == 0)
                return "IsOwned";
            --remainder;
          }
        if (flagHasWhat)
          {
            if (remainder == 0)
                return "What";
            --remainder;
          }
        if (flagHasLocation)
          {
            if (remainder == 0)
                return "Location";
            --remainder;
          }
        return extraRememberUserLocationNuggetComponentKey(remainder);
      }
    JSONValue *extraUserMemoryNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasIsOwned)
          {
            if (remainder == 0)
                return extraIsOwnedToJSON();
            --remainder;
          }
        if (flagHasWhat)
          {
            if (remainder == 0)
                return extraWhatToJSON();
            --remainder;
          }
        if (flagHasLocation)
          {
            if (remainder == 0)
                return extraLocationToJSON();
            --remainder;
          }
        return extraRememberUserLocationNuggetComponentValue(remainder);
      }
    const JSONValue *extraUserMemoryNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasIsOwned)
          {
            if (remainder == 0)
                return extraIsOwnedToJSON();
            --remainder;
          }
        if (flagHasWhat)
          {
            if (remainder == 0)
                return extraWhatToJSON();
            --remainder;
          }
        if (flagHasLocation)
          {
            if (remainder == 0)
                return extraLocationToJSON();
            --remainder;
          }
        return extraRememberUserLocationNuggetComponentValue(remainder);
      }
    JSONValue *extraUserMemoryNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'I':
                if (strcmp(&(field_name[1]), "sOwned") == 0)
                    return (flagHasIsOwned ? extraIsOwnedToJSON() : NULL);
                break;
            case 'L':
                if (strcmp(&(field_name[1]), "ocation") == 0)
                    return (flagHasLocation ? extraLocationToJSON() : NULL);
                break;
            case 'W':
                if (strcmp(&(field_name[1]), "hat") == 0)
                    return (flagHasWhat ? extraWhatToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraRememberUserLocationNuggetLookup(field_name);
      }
    const JSONValue *extraUserMemoryNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'I':
                if (strcmp(&(field_name[1]), "sOwned") == 0)
                    return (flagHasIsOwned ? extraIsOwnedToJSON() : NULL);
                break;
            case 'L':
                if (strcmp(&(field_name[1]), "ocation") == 0)
                    return (flagHasLocation ? extraLocationToJSON() : NULL);
                break;
            case 'W':
                if (strcmp(&(field_name[1]), "hat") == 0)
                    return (flagHasWhat ? extraWhatToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraRememberUserLocationNuggetLookup(field_name);
      }

    void setIsOwned(bool new_value)
      {
        flagHasIsOwned = true;
        storeIsOwned = new_value;
      }
    void unsetIsOwned(void)
      {
        flagHasIsOwned = false;
      }
    void setWhat(std::string new_value)
      {
        flagHasWhat = true;
        storeWhat = new_value;
      }
    void unsetWhat(void)
      {
        flagHasWhat = false;
      }
    void setLocation(MapLocationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasLocation)
          {
            storeLocation->remove_reference();
          }
        flagHasLocation = true;
        storeLocation = new_value;
      }
    void unsetLocation(void)
      {
        if (flagHasLocation)
          {
            storeLocation->remove_reference();
          }
        flagHasLocation = false;
      }

    virtual void extraRememberUserLocationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraRememberUserLocationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraRememberUserLocationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraRememberUserLocationNuggetAppendPair(key, new_component);
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
    void extraUserMemoryNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'I':
                if (strcmp(&(key[1]), "sOwned") == 0)
                    {
                    fromJSONIsOwned(new_component, false);
                    return;
                    }
                break;
            case 'L':
                if (strcmp(&(key[1]), "ocation") == 0)
                    {
                    fromJSONLocation(new_component, false);
                    return;
                    }
                break;
            case 'W':
                if (strcmp(&(key[1]), "hat") == 0)
                    {
                    fromJSONWhat(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraRememberUserLocationNuggetAppendPair(key, new_component);
      }
    void extraUserMemoryNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'I':
                if (strcmp(&(key[1]), "sOwned") == 0)
                    {
                    fromJSONIsOwned(new_component, false);
                    return;
                    }
                break;
            case 'L':
                if (strcmp(&(key[1]), "ocation") == 0)
                    {
                    fromJSONLocation(new_component, false);
                    return;
                    }
                break;
            case 'W':
                if (strcmp(&(key[1]), "hat") == 0)
                    {
                    fromJSONWhat(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraRememberUserLocationNuggetSetField(key, new_component);
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
        UserMemoryNuggetJSON::write_fields_as_json(handler);
        assert(flagHasIsOwned);
        handler->start_pair("IsOwned");
        handler->boolean_value(storeIsOwned);
        assert(flagHasWhat);
        handler->start_pair("What");
        handler->string_value(storeWhat);
        assert(flagHasLocation);
        handler->start_pair("Location");
        storeLocation->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasIsOwned()))
          {
            return "When parsing the object for %what%, the \"IsOwned\" field was missing.";
          }
        if (!(hasWhat()))
          {
            return "When parsing the object for %what%, the \"What\" field was missing.";
          }
        if (!(hasLocation()))
          {
            return "When parsing the object for %what%, the \"Location\" field was missing.";
          }
        return NULL;
      }

    static RememberUserLocationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static RememberUserLocationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        RememberUserLocationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RememberUserLocationNuggetJSON>, RememberUserLocationNuggetJSON *, bool> generator("Type RememberUserLocationNugget", ignore_extras);
            parse_json_value(text, "Text for RememberUserLocationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static RememberUserLocationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        RememberUserLocationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RememberUserLocationNuggetJSON>, RememberUserLocationNuggetJSON *, bool> generator("Type RememberUserLocationNugget", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public UserMemoryNuggetJSON::Generator
      {
      private:
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsOwned;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWhat;
        JSONHoldingGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorLocation;
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
            if (!(strcmp(getUserMemoryNuggetJSONKey().c_str(), "RememberUserLocation") == 0))
                throw("The key field has a value other than `RememberUserLocation'.");
            RememberUserLocationNuggetJSON *result = new RememberUserLocationNuggetJSON();
            assert(result != NULL);
            RCHandle<RememberUserLocationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraRememberUserLocationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(UserMemoryNuggetJSON *new_result)
          {
            handle_result((RememberUserLocationNuggetJSON *)new_result);
          }
        void finish(RememberUserLocationNuggetJSON *result)
          {
            if (fieldGeneratorIsOwned.have_value)
              {
                result->setIsOwned(fieldGeneratorIsOwned.value);
                fieldGeneratorIsOwned.have_value = false;
              }
            else if (!(result->hasIsOwned()))
              {
                error("When parsing the object for %what%, the \"IsOwned\" field was missing.");
              }
            if (fieldGeneratorWhat.have_value)
              {
                result->setWhat(fieldGeneratorWhat.value);
                fieldGeneratorWhat.have_value = false;
              }
            else if (!(result->hasWhat()))
              {
                error("When parsing the object for %what%, the \"What\" field was missing.");
              }
            if (fieldGeneratorLocation.have_value)
              {
                result->setLocation(fieldGeneratorLocation.value.referenced());
                fieldGeneratorLocation.have_value = false;
              }
            else if (!(result->hasLocation()))
              {
                error("When parsing the object for %what%, the \"Location\" field was missing.");
              }
            UserMemoryNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(RememberUserLocationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'I':
                    if (strcmp(&(field_name[1]), "sOwned") == 0)
                        return &fieldGeneratorIsOwned;
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "ocation") == 0)
                        return &fieldGeneratorLocation;
                    break;
                case 'W':
                    if (strcmp(&(field_name[1]), "hat") == 0)
                        return &fieldGeneratorWhat;
                    break;
                default:
                    break;
              }
            return UserMemoryNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : UserMemoryNuggetJSON::Generator(ignore_extras), fieldGeneratorIsOwned("field \"IsOwned\" of the RememberUserLocationNugget class"), fieldGeneratorWhat("field \"What\" of the RememberUserLocationNugget class"), fieldGeneratorLocation("field \"Location\" of the RememberUserLocationNugget class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the RememberUserLocationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorIsOwned.reset();
            fieldGeneratorWhat.reset();
            fieldGeneratorLocation.reset();
            UserMemoryNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* REMEMBERUSERLOCATIONNUGGETJSON_H */
