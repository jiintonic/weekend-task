/* file "DisambiguateLocationCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef DISAMBIGUATELOCATIONCOMMANDJSON_H
#define DISAMBIGUATELOCATIONCOMMANDJSON_H

#pragma interface

#include "CommandResultJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "MapLocationJSON.h"
#include "DisambiguateLocationActionOnSelectionJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class DisambiguateLocationCommandJSON : public CommandResultJSON
  {
  private:
    bool flagHasAmbiguousLocations;
    std::vector< MapLocationJSON * > storeAmbiguousLocations;
    bool flagHasActionOnSelection;
    DisambiguateLocationActionOnSelectionJSON * storeActionOnSelection;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    DisambiguateLocationCommandJSON(const DisambiguateLocationCommandJSON &);
    DisambiguateLocationCommandJSON & operator=(const DisambiguateLocationCommandJSON &other);

    JSONValue * extraAmbiguousLocationsToJSON(void) const;
    JSONValue * extraActionOnSelectionToJSON(void) const;

    void  fromJSONAmbiguousLocations(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONActionOnSelection(JSONValue *json_value, bool ignore_extras = false);


  public:
    DisambiguateLocationCommandJSON(void);
    virtual ~DisambiguateLocationCommandJSON(void);
    const char * getCommandKind(void) const;
    bool  hasAmbiguousLocations(void) const;
    size_t  countOfAmbiguousLocations(void) const;
    MapLocationJSON *  elementOfAmbiguousLocations(size_t element_num);
    const MapLocationJSON *  elementOfAmbiguousLocations(size_t element_num) const;
    std::vector< MapLocationJSON * >  getAmbiguousLocations(void);
    const std::vector< MapLocationJSON * >  getAmbiguousLocations(void) const;
    bool  hasActionOnSelection(void) const;
    DisambiguateLocationActionOnSelectionJSON *  getActionOnSelection(void);
    const DisambiguateLocationActionOnSelectionJSON *  getActionOnSelection(void) const;
    DisambiguateLocationActionOnSelectionJSON::TypeValue  getActionOnSelectionValue(void);
    const DisambiguateLocationActionOnSelectionJSON::TypeValue  getActionOnSelectionValue(void) const;
    const char * getActionOnSelectionAsChars(void) const;
    std::string  getActionOnSelectionAsString(void) const;

    virtual size_t extraDisambiguateLocationCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraDisambiguateLocationCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraDisambiguateLocationCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraDisambiguateLocationCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraDisambiguateLocationCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraDisambiguateLocationCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraCommandResultComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasAmbiguousLocations)
            ++result;
        if (flagHasActionOnSelection)
            ++result;
        result += extraDisambiguateLocationCommandComponentCount();
        return result;
      }
    const char *extraCommandResultComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasAmbiguousLocations)
          {
            if (remainder == 0)
                return "AmbiguousLocations";
            --remainder;
          }
        if (flagHasActionOnSelection)
          {
            if (remainder == 0)
                return "ActionOnSelection";
            --remainder;
          }
        return extraDisambiguateLocationCommandComponentKey(remainder);
      }
    JSONValue *extraCommandResultComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasAmbiguousLocations)
          {
            if (remainder == 0)
                return extraAmbiguousLocationsToJSON();
            --remainder;
          }
        if (flagHasActionOnSelection)
          {
            if (remainder == 0)
                return extraActionOnSelectionToJSON();
            --remainder;
          }
        return extraDisambiguateLocationCommandComponentValue(remainder);
      }
    const JSONValue *extraCommandResultComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasAmbiguousLocations)
          {
            if (remainder == 0)
                return extraAmbiguousLocationsToJSON();
            --remainder;
          }
        if (flagHasActionOnSelection)
          {
            if (remainder == 0)
                return extraActionOnSelectionToJSON();
            --remainder;
          }
        return extraDisambiguateLocationCommandComponentValue(remainder);
      }
    JSONValue *extraCommandResultLookup(const char *field_name)
      {
        if (strncmp(field_name, "A", 1) == 0)
          {
            switch ((unsigned char)(field_name[1]))
              {
                case 'c':
                    if (strcmp(&(field_name[2]), "tionOnSelection") == 0)
                        return (flagHasActionOnSelection ? extraActionOnSelectionToJSON() : NULL);
                    break;
                case 'm':
                    if (strcmp(&(field_name[2]), "biguousLocations") == 0)
                        return (flagHasAmbiguousLocations ? extraAmbiguousLocationsToJSON() : NULL);
                    break;
                default:
                    break;
              }
          }
        return extraDisambiguateLocationCommandLookup(field_name);
      }
    const JSONValue *extraCommandResultLookup(const char *field_name) const
      {
        if (strncmp(field_name, "A", 1) == 0)
          {
            switch ((unsigned char)(field_name[1]))
              {
                case 'c':
                    if (strcmp(&(field_name[2]), "tionOnSelection") == 0)
                        return (flagHasActionOnSelection ? extraActionOnSelectionToJSON() : NULL);
                    break;
                case 'm':
                    if (strcmp(&(field_name[2]), "biguousLocations") == 0)
                        return (flagHasAmbiguousLocations ? extraAmbiguousLocationsToJSON() : NULL);
                    break;
                default:
                    break;
              }
          }
        return extraDisambiguateLocationCommandLookup(field_name);
      }

    void initAmbiguousLocations(void)
      {
        if (flagHasAmbiguousLocations)
          {
            for (size_t num2 = 0; num2 < storeAmbiguousLocations.size(); ++num2)
              {
                storeAmbiguousLocations[num2]->remove_reference();
              }
          }
        flagHasAmbiguousLocations = true;
        storeAmbiguousLocations.clear();
      }
    void appendAmbiguousLocations(MapLocationJSON * to_append)
      {
        if (!flagHasAmbiguousLocations)
          {
            flagHasAmbiguousLocations = true;
            storeAmbiguousLocations.clear();
          }
        assert(flagHasAmbiguousLocations);
        to_append->add_reference();
        storeAmbiguousLocations.push_back(to_append);
      }
    void unsetAmbiguousLocations(void)
      {
        if (flagHasAmbiguousLocations)
          {
            for (size_t num3 = 0; num3 < storeAmbiguousLocations.size(); ++num3)
              {
                storeAmbiguousLocations[num3]->remove_reference();
              }
          }
        flagHasAmbiguousLocations = false;
        storeAmbiguousLocations.clear();
      }
    void setActionOnSelection(DisambiguateLocationActionOnSelectionJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasActionOnSelection)
          {
            storeActionOnSelection->remove_reference();
          }
        flagHasActionOnSelection = true;
        storeActionOnSelection = new_value;
      }
    void setActionOnSelection(DisambiguateLocationActionOnSelectionJSON::TypeValue new_value)
      {
        setActionOnSelection(new DisambiguateLocationActionOnSelectionJSON(new_value));
      }
    void setActionOnSelection(const char *chars)
      {
        DisambiguateLocationActionOnSelectionJSON::TypeValueKnownValues known = DisambiguateLocationActionOnSelectionJSON::stringToValue(chars);
        DisambiguateLocationActionOnSelectionJSON::TypeValue new_value;
        if (known == DisambiguateLocationActionOnSelectionJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setActionOnSelection(new_value);
      }
    void setActionOnSelection(std::string the_string)
      {
        setActionOnSelection(the_string.c_str());
      }
    void unsetActionOnSelection(void)
      {
        if (flagHasActionOnSelection)
          {
            storeActionOnSelection->remove_reference();
          }
        flagHasActionOnSelection = false;
      }

    virtual void extraDisambiguateLocationCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraDisambiguateLocationCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraDisambiguateLocationCommandLookup(key);
        if (old_field == NULL)
          {
            extraDisambiguateLocationCommandAppendPair(key, new_component);
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
    void extraCommandResultAppendPair(const char *key, JSONValue *new_component)
      {
        if (strncmp(key, "A", 1) == 0)
          {
            switch ((unsigned char)(key[1]))
              {
                case 'c':
                    if (strcmp(&(key[2]), "tionOnSelection") == 0)
                        {
                        fromJSONActionOnSelection(new_component, false);
                        return;
                        }
                    break;
                case 'm':
                    if (strcmp(&(key[2]), "biguousLocations") == 0)
                        {
                        fromJSONAmbiguousLocations(new_component, false);
                        return;
                        }
                    break;
                default:
                    break;
              }
          }
        extraDisambiguateLocationCommandAppendPair(key, new_component);
      }
    void extraCommandResultSetField(const char *key, JSONValue *new_component)
      {
        if (strncmp(key, "A", 1) == 0)
          {
            switch ((unsigned char)(key[1]))
              {
                case 'c':
                    if (strcmp(&(key[2]), "tionOnSelection") == 0)
                        {
                        fromJSONActionOnSelection(new_component, false);
                        return;
                        }
                    break;
                case 'm':
                    if (strcmp(&(key[2]), "biguousLocations") == 0)
                        {
                        fromJSONAmbiguousLocations(new_component, false);
                        return;
                        }
                    break;
                default:
                    break;
              }
          }
        extraDisambiguateLocationCommandSetField(key, new_component);
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
        CommandResultJSON::write_fields_as_json(handler);
        if (flagHasAmbiguousLocations)
          {
            handler->start_pair("AmbiguousLocations");
            assert(storeAmbiguousLocations.size() >= 2);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeAmbiguousLocations.size(); ++num1)
              {
                storeAmbiguousLocations[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasActionOnSelection)
          {
            handler->start_pair("ActionOnSelection");
            storeActionOnSelection->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static DisambiguateLocationCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static DisambiguateLocationCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        DisambiguateLocationCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DisambiguateLocationCommandJSON>, DisambiguateLocationCommandJSON *, bool> generator("Type DisambiguateLocationCommand", ignore_extras);
            parse_json_value(text, "Text for DisambiguateLocationCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static DisambiguateLocationCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        DisambiguateLocationCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DisambiguateLocationCommandJSON>, DisambiguateLocationCommandJSON *, bool> generator("Type DisambiguateLocationCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public CommandResultJSON::Generator
      {
      private:
        JSONHoldingArrayGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorAmbiguousLocations;
        JSONHoldingGenerator<DisambiguateLocationActionOnSelectionJSON::Generator, RCHandle<DisambiguateLocationActionOnSelectionJSON>, DisambiguateLocationActionOnSelectionJSON *, bool > fieldGeneratorActionOnSelection;
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
            if (!(strcmp(getCommandResultJSONKey().c_str(), "DisambiguateLocationCommand") == 0))
                throw("The key field has a value other than `DisambiguateLocationCommand'.");
            DisambiguateLocationCommandJSON *result = new DisambiguateLocationCommandJSON();
            assert(result != NULL);
            RCHandle<DisambiguateLocationCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraDisambiguateLocationCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(CommandResultJSON *new_result)
          {
            handle_result((DisambiguateLocationCommandJSON *)new_result);
          }
        void finish(DisambiguateLocationCommandJSON *result)
          {
            if (fieldGeneratorAmbiguousLocations.have_value)
              {
                result->initAmbiguousLocations();
                size_t count = fieldGeneratorAmbiguousLocations.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAmbiguousLocations(fieldGeneratorAmbiguousLocations.value[num].referenced());
                  }
                fieldGeneratorAmbiguousLocations.value.clear();
                fieldGeneratorAmbiguousLocations.have_value = false;
              }
            if (fieldGeneratorActionOnSelection.have_value)
              {
                result->setActionOnSelection(fieldGeneratorActionOnSelection.value.referenced());
                fieldGeneratorActionOnSelection.have_value = false;
              }
            CommandResultJSON::Generator::finish(result);
          }
        virtual void handle_result(DisambiguateLocationCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strncmp(field_name, "A", 1) == 0)
              {
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'c':
                        if (strcmp(&(field_name[2]), "tionOnSelection") == 0)
                            return &fieldGeneratorActionOnSelection;
                        break;
                    case 'm':
                        if (strcmp(&(field_name[2]), "biguousLocations") == 0)
                            return &fieldGeneratorAmbiguousLocations;
                        break;
                    default:
                        break;
                  }
              }
            return CommandResultJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CommandResultJSON::Generator(ignore_extras), fieldGeneratorAmbiguousLocations("field \"AmbiguousLocations\" of the DisambiguateLocationCommand class", ignore_extras), fieldGeneratorActionOnSelection("field \"ActionOnSelection\" of the DisambiguateLocationCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the DisambiguateLocationCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorAmbiguousLocations.reset();
            fieldGeneratorActionOnSelection.reset();
            CommandResultJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* DISAMBIGUATELOCATIONCOMMANDJSON_H */
