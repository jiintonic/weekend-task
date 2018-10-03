/* file "BattleshipNotUnderstoodCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef BATTLESHIPNOTUNDERSTOODCOMMANDJSON_H
#define BATTLESHIPNOTUNDERSTOODCOMMANDJSON_H

#pragma interface

#include "BattleshipCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "BattleshipPlayerDataJSON.h"
#include "BattleshipPlayerDataJSON.h"
#include "DateAndOrTimeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class BattleshipNotUnderstoodCommandJSON : public BattleshipCommandJSON
  {
  private:
    bool flagHasUserData;
    BattleshipPlayerDataJSON * storeUserData;
    bool flagHasComputerData;
    BattleshipPlayerDataJSON * storeComputerData;
    bool flagHasStartDateAndOrTime;
    DateAndOrTimeJSON * storeStartDateAndOrTime;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    BattleshipNotUnderstoodCommandJSON(const BattleshipNotUnderstoodCommandJSON &);
    BattleshipNotUnderstoodCommandJSON & operator=(const BattleshipNotUnderstoodCommandJSON &other);

    JSONValue * extraUserDataToJSON(void) const;
    JSONValue * extraComputerDataToJSON(void) const;
    JSONValue * extraStartDateAndOrTimeToJSON(void) const;

    void  fromJSONUserData(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONComputerData(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStartDateAndOrTime(JSONValue *json_value, bool ignore_extras = false);


  public:
    BattleshipNotUnderstoodCommandJSON(void);
    virtual ~BattleshipNotUnderstoodCommandJSON(void);
    const char * getBattleshipCommandKind(void) const;
    bool  hasUserData(void) const;
    BattleshipPlayerDataJSON *  getUserData(void);
    const BattleshipPlayerDataJSON *  getUserData(void) const;
    bool  hasComputerData(void) const;
    BattleshipPlayerDataJSON *  getComputerData(void);
    const BattleshipPlayerDataJSON *  getComputerData(void) const;
    bool  hasStartDateAndOrTime(void) const;
    DateAndOrTimeJSON *  getStartDateAndOrTime(void);
    const DateAndOrTimeJSON *  getStartDateAndOrTime(void) const;

    virtual size_t extraBattleshipNotUnderstoodCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraBattleshipNotUnderstoodCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraBattleshipNotUnderstoodCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraBattleshipNotUnderstoodCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraBattleshipNotUnderstoodCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraBattleshipNotUnderstoodCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraBattleshipCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasUserData)
            ++result;
        if (flagHasComputerData)
            ++result;
        if (flagHasStartDateAndOrTime)
            ++result;
        result += extraBattleshipNotUnderstoodCommandComponentCount();
        return result;
      }
    const char *extraBattleshipCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasUserData)
          {
            if (remainder == 0)
                return "UserData";
            --remainder;
          }
        if (flagHasComputerData)
          {
            if (remainder == 0)
                return "ComputerData";
            --remainder;
          }
        if (flagHasStartDateAndOrTime)
          {
            if (remainder == 0)
                return "StartDateAndOrTime";
            --remainder;
          }
        return extraBattleshipNotUnderstoodCommandComponentKey(remainder);
      }
    JSONValue *extraBattleshipCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasUserData)
          {
            if (remainder == 0)
                return extraUserDataToJSON();
            --remainder;
          }
        if (flagHasComputerData)
          {
            if (remainder == 0)
                return extraComputerDataToJSON();
            --remainder;
          }
        if (flagHasStartDateAndOrTime)
          {
            if (remainder == 0)
                return extraStartDateAndOrTimeToJSON();
            --remainder;
          }
        return extraBattleshipNotUnderstoodCommandComponentValue(remainder);
      }
    const JSONValue *extraBattleshipCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasUserData)
          {
            if (remainder == 0)
                return extraUserDataToJSON();
            --remainder;
          }
        if (flagHasComputerData)
          {
            if (remainder == 0)
                return extraComputerDataToJSON();
            --remainder;
          }
        if (flagHasStartDateAndOrTime)
          {
            if (remainder == 0)
                return extraStartDateAndOrTimeToJSON();
            --remainder;
          }
        return extraBattleshipNotUnderstoodCommandComponentValue(remainder);
      }
    JSONValue *extraBattleshipCommandLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "omputerData") == 0)
                    return (flagHasComputerData ? extraComputerDataToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "tartDateAndOrTime") == 0)
                    return (flagHasStartDateAndOrTime ? extraStartDateAndOrTimeToJSON() : NULL);
                break;
            case 'U':
                if (strcmp(&(field_name[1]), "serData") == 0)
                    return (flagHasUserData ? extraUserDataToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraBattleshipNotUnderstoodCommandLookup(field_name);
      }
    const JSONValue *extraBattleshipCommandLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "omputerData") == 0)
                    return (flagHasComputerData ? extraComputerDataToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "tartDateAndOrTime") == 0)
                    return (flagHasStartDateAndOrTime ? extraStartDateAndOrTimeToJSON() : NULL);
                break;
            case 'U':
                if (strcmp(&(field_name[1]), "serData") == 0)
                    return (flagHasUserData ? extraUserDataToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraBattleshipNotUnderstoodCommandLookup(field_name);
      }

    void setUserData(BattleshipPlayerDataJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasUserData)
          {
            storeUserData->remove_reference();
          }
        flagHasUserData = true;
        storeUserData = new_value;
      }
    void unsetUserData(void)
      {
        if (flagHasUserData)
          {
            storeUserData->remove_reference();
          }
        flagHasUserData = false;
      }
    void setComputerData(BattleshipPlayerDataJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasComputerData)
          {
            storeComputerData->remove_reference();
          }
        flagHasComputerData = true;
        storeComputerData = new_value;
      }
    void unsetComputerData(void)
      {
        if (flagHasComputerData)
          {
            storeComputerData->remove_reference();
          }
        flagHasComputerData = false;
      }
    void setStartDateAndOrTime(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStartDateAndOrTime)
          {
            storeStartDateAndOrTime->remove_reference();
          }
        flagHasStartDateAndOrTime = true;
        storeStartDateAndOrTime = new_value;
      }
    void unsetStartDateAndOrTime(void)
      {
        if (flagHasStartDateAndOrTime)
          {
            storeStartDateAndOrTime->remove_reference();
          }
        flagHasStartDateAndOrTime = false;
      }

    virtual void extraBattleshipNotUnderstoodCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraBattleshipNotUnderstoodCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraBattleshipNotUnderstoodCommandLookup(key);
        if (old_field == NULL)
          {
            extraBattleshipNotUnderstoodCommandAppendPair(key, new_component);
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
    void extraBattleshipCommandAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "omputerData") == 0)
                    {
                    fromJSONComputerData(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strcmp(&(key[1]), "tartDateAndOrTime") == 0)
                    {
                    fromJSONStartDateAndOrTime(new_component, false);
                    return;
                    }
                break;
            case 'U':
                if (strcmp(&(key[1]), "serData") == 0)
                    {
                    fromJSONUserData(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraBattleshipNotUnderstoodCommandAppendPair(key, new_component);
      }
    void extraBattleshipCommandSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "omputerData") == 0)
                    {
                    fromJSONComputerData(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strcmp(&(key[1]), "tartDateAndOrTime") == 0)
                    {
                    fromJSONStartDateAndOrTime(new_component, false);
                    return;
                    }
                break;
            case 'U':
                if (strcmp(&(key[1]), "serData") == 0)
                    {
                    fromJSONUserData(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraBattleshipNotUnderstoodCommandSetField(key, new_component);
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
        BattleshipCommandJSON::write_fields_as_json(handler);
        assert(flagHasUserData);
        handler->start_pair("UserData");
        storeUserData->write_as_json(handler);
        assert(flagHasComputerData);
        handler->start_pair("ComputerData");
        storeComputerData->write_as_json(handler);
        if (flagHasStartDateAndOrTime)
          {
            handler->start_pair("StartDateAndOrTime");
            storeStartDateAndOrTime->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasUserData()))
          {
            return "When parsing the object for %what%, the \"UserData\" field was missing.";
          }
        if (!(hasComputerData()))
          {
            return "When parsing the object for %what%, the \"ComputerData\" field was missing.";
          }
        return NULL;
      }

    static BattleshipNotUnderstoodCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static BattleshipNotUnderstoodCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        BattleshipNotUnderstoodCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<BattleshipNotUnderstoodCommandJSON>, BattleshipNotUnderstoodCommandJSON *, bool> generator("Type BattleshipNotUnderstoodCommand", ignore_extras);
            parse_json_value(text, "Text for BattleshipNotUnderstoodCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static BattleshipNotUnderstoodCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        BattleshipNotUnderstoodCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<BattleshipNotUnderstoodCommandJSON>, BattleshipNotUnderstoodCommandJSON *, bool> generator("Type BattleshipNotUnderstoodCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public BattleshipCommandJSON::Generator
      {
      private:
        JSONHoldingGenerator<BattleshipPlayerDataJSON::Generator, RCHandle<BattleshipPlayerDataJSON>, BattleshipPlayerDataJSON *, bool > fieldGeneratorUserData;
        JSONHoldingGenerator<BattleshipPlayerDataJSON::Generator, RCHandle<BattleshipPlayerDataJSON>, BattleshipPlayerDataJSON *, bool > fieldGeneratorComputerData;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorStartDateAndOrTime;
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
            if (!(strcmp(getBattleshipCommandJSONKey().c_str(), "BattleshipNotUnderstoodCommand") == 0))
                throw("The key field has a value other than `BattleshipNotUnderstoodCommand'.");
            BattleshipNotUnderstoodCommandJSON *result = new BattleshipNotUnderstoodCommandJSON();
            assert(result != NULL);
            RCHandle<BattleshipNotUnderstoodCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraBattleshipNotUnderstoodCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(BattleshipCommandJSON *new_result)
          {
            handle_result((BattleshipNotUnderstoodCommandJSON *)new_result);
          }
        void finish(BattleshipNotUnderstoodCommandJSON *result)
          {
            if (fieldGeneratorUserData.have_value)
              {
                result->setUserData(fieldGeneratorUserData.value.referenced());
                fieldGeneratorUserData.have_value = false;
              }
            else if (!(result->hasUserData()))
              {
                error("When parsing the object for %what%, the \"UserData\" field was missing.");
              }
            if (fieldGeneratorComputerData.have_value)
              {
                result->setComputerData(fieldGeneratorComputerData.value.referenced());
                fieldGeneratorComputerData.have_value = false;
              }
            else if (!(result->hasComputerData()))
              {
                error("When parsing the object for %what%, the \"ComputerData\" field was missing.");
              }
            if (fieldGeneratorStartDateAndOrTime.have_value)
              {
                result->setStartDateAndOrTime(fieldGeneratorStartDateAndOrTime.value.referenced());
                fieldGeneratorStartDateAndOrTime.have_value = false;
              }
            BattleshipCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(BattleshipNotUnderstoodCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "omputerData") == 0)
                        return &fieldGeneratorComputerData;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "tartDateAndOrTime") == 0)
                        return &fieldGeneratorStartDateAndOrTime;
                    break;
                case 'U':
                    if (strcmp(&(field_name[1]), "serData") == 0)
                        return &fieldGeneratorUserData;
                    break;
                default:
                    break;
              }
            return BattleshipCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : BattleshipCommandJSON::Generator(ignore_extras), fieldGeneratorUserData("field \"UserData\" of the BattleshipNotUnderstoodCommand class", ignore_extras), fieldGeneratorComputerData("field \"ComputerData\" of the BattleshipNotUnderstoodCommand class", ignore_extras), fieldGeneratorStartDateAndOrTime("field \"StartDateAndOrTime\" of the BattleshipNotUnderstoodCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the BattleshipNotUnderstoodCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorUserData.reset();
            fieldGeneratorComputerData.reset();
            fieldGeneratorStartDateAndOrTime.reset();
            BattleshipCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* BATTLESHIPNOTUNDERSTOODCOMMANDJSON_H */
