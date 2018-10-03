/* file "HomeAutomationControlDisambiguateSpecifierCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOMEAUTOMATIONCONTROLDISAMBIGUATESPECIFIERCOMMANDJSON_H
#define HOMEAUTOMATIONCONTROLDISAMBIGUATESPECIFIERCOMMANDJSON_H

#pragma interface

#include "DisambiguateCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "HomeAutomationCompactDeviceSpecifierJSON.h"
#include "HomeAutomationOperationJSON.h"
#include "HomeAutomationAmbiguityListJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HomeAutomationControlDisambiguateSpecifierCommandJSON : public DisambiguateCommandJSON
  {
  private:
    bool flagHasCompactDeviceSpecifier;
    HomeAutomationCompactDeviceSpecifierJSON * storeCompactDeviceSpecifier;
    bool flagHasOperation;
    HomeAutomationOperationJSON * storeOperation;
    bool flagHasAmbiguities;
    HomeAutomationAmbiguityListJSON * storeAmbiguities;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HomeAutomationControlDisambiguateSpecifierCommandJSON(const HomeAutomationControlDisambiguateSpecifierCommandJSON &);
    HomeAutomationControlDisambiguateSpecifierCommandJSON & operator=(const HomeAutomationControlDisambiguateSpecifierCommandJSON &other);

    JSONValue * extraCompactDeviceSpecifierToJSON(void) const;
    JSONValue * extraOperationToJSON(void) const;
    JSONValue * extraAmbiguitiesToJSON(void) const;

    void  fromJSONCompactDeviceSpecifier(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOperation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAmbiguities(JSONValue *json_value, bool ignore_extras = false);


  public:
    HomeAutomationControlDisambiguateSpecifierCommandJSON(void);
    virtual ~HomeAutomationControlDisambiguateSpecifierCommandJSON(void);
    const char * getDisambiguateCommandKind(void) const;
    bool  hasCompactDeviceSpecifier(void) const;
    HomeAutomationCompactDeviceSpecifierJSON *  getCompactDeviceSpecifier(void);
    const HomeAutomationCompactDeviceSpecifierJSON *  getCompactDeviceSpecifier(void) const;
    bool  hasOperation(void) const;
    HomeAutomationOperationJSON *  getOperation(void);
    const HomeAutomationOperationJSON *  getOperation(void) const;
    HomeAutomationOperationJSON::TypeValue  getOperationValue(void);
    const HomeAutomationOperationJSON::TypeValue  getOperationValue(void) const;
    const char * getOperationAsChars(void) const;
    std::string  getOperationAsString(void) const;
    bool  hasAmbiguities(void) const;
    HomeAutomationAmbiguityListJSON *  getAmbiguities(void);
    const HomeAutomationAmbiguityListJSON *  getAmbiguities(void) const;

    virtual size_t extraHomeAutomationControlDisambiguateSpecifierCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHomeAutomationControlDisambiguateSpecifierCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHomeAutomationControlDisambiguateSpecifierCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHomeAutomationControlDisambiguateSpecifierCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHomeAutomationControlDisambiguateSpecifierCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHomeAutomationControlDisambiguateSpecifierCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraDisambiguateCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasCompactDeviceSpecifier)
            ++result;
        if (flagHasOperation)
            ++result;
        if (flagHasAmbiguities)
            ++result;
        result += extraHomeAutomationControlDisambiguateSpecifierCommandComponentCount();
        return result;
      }
    const char *extraDisambiguateCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasCompactDeviceSpecifier)
          {
            if (remainder == 0)
                return "CompactDeviceSpecifier";
            --remainder;
          }
        if (flagHasOperation)
          {
            if (remainder == 0)
                return "Operation";
            --remainder;
          }
        if (flagHasAmbiguities)
          {
            if (remainder == 0)
                return "Ambiguities";
            --remainder;
          }
        return extraHomeAutomationControlDisambiguateSpecifierCommandComponentKey(remainder);
      }
    JSONValue *extraDisambiguateCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasCompactDeviceSpecifier)
          {
            if (remainder == 0)
                return extraCompactDeviceSpecifierToJSON();
            --remainder;
          }
        if (flagHasOperation)
          {
            if (remainder == 0)
                return extraOperationToJSON();
            --remainder;
          }
        if (flagHasAmbiguities)
          {
            if (remainder == 0)
                return extraAmbiguitiesToJSON();
            --remainder;
          }
        return extraHomeAutomationControlDisambiguateSpecifierCommandComponentValue(remainder);
      }
    const JSONValue *extraDisambiguateCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasCompactDeviceSpecifier)
          {
            if (remainder == 0)
                return extraCompactDeviceSpecifierToJSON();
            --remainder;
          }
        if (flagHasOperation)
          {
            if (remainder == 0)
                return extraOperationToJSON();
            --remainder;
          }
        if (flagHasAmbiguities)
          {
            if (remainder == 0)
                return extraAmbiguitiesToJSON();
            --remainder;
          }
        return extraHomeAutomationControlDisambiguateSpecifierCommandComponentValue(remainder);
      }
    JSONValue *extraDisambiguateCommandLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strcmp(&(field_name[1]), "mbiguities") == 0)
                    return (flagHasAmbiguities ? extraAmbiguitiesToJSON() : NULL);
                break;
            case 'C':
                if (strcmp(&(field_name[1]), "ompactDeviceSpecifier") == 0)
                    return (flagHasCompactDeviceSpecifier ? extraCompactDeviceSpecifierToJSON() : NULL);
                break;
            case 'O':
                if (strcmp(&(field_name[1]), "peration") == 0)
                    return (flagHasOperation ? extraOperationToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraHomeAutomationControlDisambiguateSpecifierCommandLookup(field_name);
      }
    const JSONValue *extraDisambiguateCommandLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strcmp(&(field_name[1]), "mbiguities") == 0)
                    return (flagHasAmbiguities ? extraAmbiguitiesToJSON() : NULL);
                break;
            case 'C':
                if (strcmp(&(field_name[1]), "ompactDeviceSpecifier") == 0)
                    return (flagHasCompactDeviceSpecifier ? extraCompactDeviceSpecifierToJSON() : NULL);
                break;
            case 'O':
                if (strcmp(&(field_name[1]), "peration") == 0)
                    return (flagHasOperation ? extraOperationToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraHomeAutomationControlDisambiguateSpecifierCommandLookup(field_name);
      }

    void setCompactDeviceSpecifier(HomeAutomationCompactDeviceSpecifierJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasCompactDeviceSpecifier)
          {
            storeCompactDeviceSpecifier->remove_reference();
          }
        flagHasCompactDeviceSpecifier = true;
        storeCompactDeviceSpecifier = new_value;
      }
    void unsetCompactDeviceSpecifier(void)
      {
        if (flagHasCompactDeviceSpecifier)
          {
            storeCompactDeviceSpecifier->remove_reference();
          }
        flagHasCompactDeviceSpecifier = false;
      }
    void setOperation(HomeAutomationOperationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasOperation)
          {
            storeOperation->remove_reference();
          }
        flagHasOperation = true;
        storeOperation = new_value;
      }
    void setOperation(HomeAutomationOperationJSON::TypeValue new_value)
      {
        setOperation(new HomeAutomationOperationJSON(new_value));
      }
    void setOperation(const char *chars)
      {
        HomeAutomationOperationJSON::TypeValueKnownValues known = HomeAutomationOperationJSON::stringToValue(chars);
        HomeAutomationOperationJSON::TypeValue new_value;
        if (known == HomeAutomationOperationJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setOperation(new_value);
      }
    void setOperation(std::string the_string)
      {
        setOperation(the_string.c_str());
      }
    void unsetOperation(void)
      {
        if (flagHasOperation)
          {
            storeOperation->remove_reference();
          }
        flagHasOperation = false;
      }
    void setAmbiguities(HomeAutomationAmbiguityListJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAmbiguities)
          {
            storeAmbiguities->remove_reference();
          }
        flagHasAmbiguities = true;
        storeAmbiguities = new_value;
      }
    void unsetAmbiguities(void)
      {
        if (flagHasAmbiguities)
          {
            storeAmbiguities->remove_reference();
          }
        flagHasAmbiguities = false;
      }

    virtual void extraHomeAutomationControlDisambiguateSpecifierCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHomeAutomationControlDisambiguateSpecifierCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHomeAutomationControlDisambiguateSpecifierCommandLookup(key);
        if (old_field == NULL)
          {
            extraHomeAutomationControlDisambiguateSpecifierCommandAppendPair(key, new_component);
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
    void extraDisambiguateCommandAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                if (strcmp(&(key[1]), "mbiguities") == 0)
                    {
                    fromJSONAmbiguities(new_component, false);
                    return;
                    }
                break;
            case 'C':
                if (strcmp(&(key[1]), "ompactDeviceSpecifier") == 0)
                    {
                    fromJSONCompactDeviceSpecifier(new_component, false);
                    return;
                    }
                break;
            case 'O':
                if (strcmp(&(key[1]), "peration") == 0)
                    {
                    fromJSONOperation(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraHomeAutomationControlDisambiguateSpecifierCommandAppendPair(key, new_component);
      }
    void extraDisambiguateCommandSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                if (strcmp(&(key[1]), "mbiguities") == 0)
                    {
                    fromJSONAmbiguities(new_component, false);
                    return;
                    }
                break;
            case 'C':
                if (strcmp(&(key[1]), "ompactDeviceSpecifier") == 0)
                    {
                    fromJSONCompactDeviceSpecifier(new_component, false);
                    return;
                    }
                break;
            case 'O':
                if (strcmp(&(key[1]), "peration") == 0)
                    {
                    fromJSONOperation(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraHomeAutomationControlDisambiguateSpecifierCommandSetField(key, new_component);
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
        DisambiguateCommandJSON::write_fields_as_json(handler);
        if (flagHasCompactDeviceSpecifier)
          {
            handler->start_pair("CompactDeviceSpecifier");
            storeCompactDeviceSpecifier->write_as_json(handler);
          }
        if (flagHasOperation)
          {
            handler->start_pair("Operation");
            storeOperation->write_as_json(handler);
          }
        if (flagHasAmbiguities)
          {
            handler->start_pair("Ambiguities");
            storeAmbiguities->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static HomeAutomationControlDisambiguateSpecifierCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HomeAutomationControlDisambiguateSpecifierCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HomeAutomationControlDisambiguateSpecifierCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationControlDisambiguateSpecifierCommandJSON>, HomeAutomationControlDisambiguateSpecifierCommandJSON *, bool> generator("Type HomeAutomationControlDisambiguateSpecifierCommand", ignore_extras);
            parse_json_value(text, "Text for HomeAutomationControlDisambiguateSpecifierCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HomeAutomationControlDisambiguateSpecifierCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HomeAutomationControlDisambiguateSpecifierCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationControlDisambiguateSpecifierCommandJSON>, HomeAutomationControlDisambiguateSpecifierCommandJSON *, bool> generator("Type HomeAutomationControlDisambiguateSpecifierCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public DisambiguateCommandJSON::Generator
      {
      private:
        JSONHoldingGenerator<HomeAutomationCompactDeviceSpecifierJSON::Generator, RCHandle<HomeAutomationCompactDeviceSpecifierJSON>, HomeAutomationCompactDeviceSpecifierJSON *, bool > fieldGeneratorCompactDeviceSpecifier;
        JSONHoldingGenerator<HomeAutomationOperationJSON::Generator, RCHandle<HomeAutomationOperationJSON>, HomeAutomationOperationJSON *, bool > fieldGeneratorOperation;
        JSONHoldingGenerator<HomeAutomationAmbiguityListJSON::Generator, RCHandle<HomeAutomationAmbiguityListJSON>, HomeAutomationAmbiguityListJSON *, bool > fieldGeneratorAmbiguities;
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
            if (!(strcmp(getDisambiguateCommandJSONKey().c_str(), "HomeAutomationControlDisambiguateSpecifierCommand") == 0))
                throw("The key field has a value other than `HomeAutomationControlDisambiguateSpecifierCommand'.");
            HomeAutomationControlDisambiguateSpecifierCommandJSON *result = new HomeAutomationControlDisambiguateSpecifierCommandJSON();
            assert(result != NULL);
            RCHandle<HomeAutomationControlDisambiguateSpecifierCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHomeAutomationControlDisambiguateSpecifierCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(DisambiguateCommandJSON *new_result)
          {
            handle_result((HomeAutomationControlDisambiguateSpecifierCommandJSON *)new_result);
          }
        void finish(HomeAutomationControlDisambiguateSpecifierCommandJSON *result)
          {
            if (fieldGeneratorCompactDeviceSpecifier.have_value)
              {
                result->setCompactDeviceSpecifier(fieldGeneratorCompactDeviceSpecifier.value.referenced());
                fieldGeneratorCompactDeviceSpecifier.have_value = false;
              }
            if (fieldGeneratorOperation.have_value)
              {
                result->setOperation(fieldGeneratorOperation.value.referenced());
                fieldGeneratorOperation.have_value = false;
              }
            if (fieldGeneratorAmbiguities.have_value)
              {
                result->setAmbiguities(fieldGeneratorAmbiguities.value.referenced());
                fieldGeneratorAmbiguities.have_value = false;
              }
            DisambiguateCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(HomeAutomationControlDisambiguateSpecifierCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "mbiguities") == 0)
                        return &fieldGeneratorAmbiguities;
                    break;
                case 'C':
                    if (strcmp(&(field_name[1]), "ompactDeviceSpecifier") == 0)
                        return &fieldGeneratorCompactDeviceSpecifier;
                    break;
                case 'O':
                    if (strcmp(&(field_name[1]), "peration") == 0)
                        return &fieldGeneratorOperation;
                    break;
                default:
                    break;
              }
            return DisambiguateCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : DisambiguateCommandJSON::Generator(ignore_extras), fieldGeneratorCompactDeviceSpecifier("field \"CompactDeviceSpecifier\" of the HomeAutomationControlDisambiguateSpecifierCommand class", ignore_extras), fieldGeneratorOperation("field \"Operation\" of the HomeAutomationControlDisambiguateSpecifierCommand class", ignore_extras), fieldGeneratorAmbiguities("field \"Ambiguities\" of the HomeAutomationControlDisambiguateSpecifierCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HomeAutomationControlDisambiguateSpecifierCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorCompactDeviceSpecifier.reset();
            fieldGeneratorOperation.reset();
            fieldGeneratorAmbiguities.reset();
            DisambiguateCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HOMEAUTOMATIONCONTROLDISAMBIGUATESPECIFIERCOMMANDJSON_H */
