/* file "AstronomyDistanceFromEarthCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef ASTRONOMYDISTANCEFROMEARTHCOMMANDJSON_H
#define ASTRONOMYDISTANCEFROMEARTHCOMMANDJSON_H

#pragma interface

#include "CommandResultJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class AstronomyDistanceFromEarthCommandJSON : public CommandResultJSON
  {
  private:
    bool flagHasObjectName;
    std::string storeObjectName;
    bool flagHasMinimumDistanceMiles;
    double storeMinimumDistanceMiles;
    std::string textStoreMinimumDistanceMiles;
    bool flagHasMaximumDistanceMiles;
    double storeMaximumDistanceMiles;
    std::string textStoreMaximumDistanceMiles;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    AstronomyDistanceFromEarthCommandJSON(const AstronomyDistanceFromEarthCommandJSON &);
    AstronomyDistanceFromEarthCommandJSON & operator=(const AstronomyDistanceFromEarthCommandJSON &other);

    JSONValue * extraObjectNameToJSON(void) const;
    JSONValue * extraMinimumDistanceMilesToJSON(void) const;
    JSONValue * extraMaximumDistanceMilesToJSON(void) const;

    void  fromJSONObjectName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMinimumDistanceMiles(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMaximumDistanceMiles(JSONValue *json_value, bool ignore_extras = false);


  public:
    AstronomyDistanceFromEarthCommandJSON(void);
    virtual ~AstronomyDistanceFromEarthCommandJSON(void);
    const char * getCommandKind(void) const;
    bool  hasObjectName(void) const;
    std::string  getObjectName(void);
    const std::string  getObjectName(void) const;
    bool  hasMinimumDistanceMiles(void) const;
    double  getMinimumDistanceMiles(void);
    const double  getMinimumDistanceMiles(void) const;
    std::string  getMinimumDistanceMilesAsText(void) const;
    bool  hasMaximumDistanceMiles(void) const;
    double  getMaximumDistanceMiles(void);
    const double  getMaximumDistanceMiles(void) const;
    std::string  getMaximumDistanceMilesAsText(void) const;

    virtual size_t extraAstronomyDistanceFromEarthCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraAstronomyDistanceFromEarthCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraAstronomyDistanceFromEarthCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraAstronomyDistanceFromEarthCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraAstronomyDistanceFromEarthCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraAstronomyDistanceFromEarthCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraCommandResultComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasObjectName)
            ++result;
        if (flagHasMinimumDistanceMiles)
            ++result;
        if (flagHasMaximumDistanceMiles)
            ++result;
        result += extraAstronomyDistanceFromEarthCommandComponentCount();
        return result;
      }
    const char *extraCommandResultComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasObjectName)
          {
            if (remainder == 0)
                return "ObjectName";
            --remainder;
          }
        if (flagHasMinimumDistanceMiles)
          {
            if (remainder == 0)
                return "MinimumDistanceMiles";
            --remainder;
          }
        if (flagHasMaximumDistanceMiles)
          {
            if (remainder == 0)
                return "MaximumDistanceMiles";
            --remainder;
          }
        return extraAstronomyDistanceFromEarthCommandComponentKey(remainder);
      }
    JSONValue *extraCommandResultComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasObjectName)
          {
            if (remainder == 0)
                return extraObjectNameToJSON();
            --remainder;
          }
        if (flagHasMinimumDistanceMiles)
          {
            if (remainder == 0)
                return extraMinimumDistanceMilesToJSON();
            --remainder;
          }
        if (flagHasMaximumDistanceMiles)
          {
            if (remainder == 0)
                return extraMaximumDistanceMilesToJSON();
            --remainder;
          }
        return extraAstronomyDistanceFromEarthCommandComponentValue(remainder);
      }
    const JSONValue *extraCommandResultComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasObjectName)
          {
            if (remainder == 0)
                return extraObjectNameToJSON();
            --remainder;
          }
        if (flagHasMinimumDistanceMiles)
          {
            if (remainder == 0)
                return extraMinimumDistanceMilesToJSON();
            --remainder;
          }
        if (flagHasMaximumDistanceMiles)
          {
            if (remainder == 0)
                return extraMaximumDistanceMilesToJSON();
            --remainder;
          }
        return extraAstronomyDistanceFromEarthCommandComponentValue(remainder);
      }
    JSONValue *extraCommandResultLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'M':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'a':
                        if (strcmp(&(field_name[2]), "ximumDistanceMiles") == 0)
                            return (flagHasMaximumDistanceMiles ? extraMaximumDistanceMilesToJSON() : NULL);
                        break;
                    case 'i':
                        if (strcmp(&(field_name[2]), "nimumDistanceMiles") == 0)
                            return (flagHasMinimumDistanceMiles ? extraMinimumDistanceMilesToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'O':
                if (strcmp(&(field_name[1]), "bjectName") == 0)
                    return (flagHasObjectName ? extraObjectNameToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraAstronomyDistanceFromEarthCommandLookup(field_name);
      }
    const JSONValue *extraCommandResultLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'M':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'a':
                        if (strcmp(&(field_name[2]), "ximumDistanceMiles") == 0)
                            return (flagHasMaximumDistanceMiles ? extraMaximumDistanceMilesToJSON() : NULL);
                        break;
                    case 'i':
                        if (strcmp(&(field_name[2]), "nimumDistanceMiles") == 0)
                            return (flagHasMinimumDistanceMiles ? extraMinimumDistanceMilesToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'O':
                if (strcmp(&(field_name[1]), "bjectName") == 0)
                    return (flagHasObjectName ? extraObjectNameToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraAstronomyDistanceFromEarthCommandLookup(field_name);
      }

    void setObjectName(std::string new_value)
      {
        flagHasObjectName = true;
        storeObjectName = new_value;
      }
    void unsetObjectName(void)
      {
        flagHasObjectName = false;
      }
    void setMinimumDistanceMiles(double new_value)
      {
        flagHasMinimumDistanceMiles = true;
        if (new_value < 0)
            throw("The value for field MinimumDistanceMiles of AstronomyDistanceFromEarthCommandJSON is less than the lower bound (0) for that field.");
        storeMinimumDistanceMiles = new_value;
        textStoreMinimumDistanceMiles = "";
      }
    void setMinimumDistanceMilesText(std::string new_value)
      {
        flagHasMinimumDistanceMiles = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field MinimumDistanceMiles of AstronomyDistanceFromEarthCommandJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field MinimumDistanceMiles of AstronomyDistanceFromEarthCommandJSON is less than the lower bound (0) for that field.");
        textStoreMinimumDistanceMiles = new_value;
      }
    void unsetMinimumDistanceMiles(void)
      {
        flagHasMinimumDistanceMiles = false;
      }
    void setMaximumDistanceMiles(double new_value)
      {
        flagHasMaximumDistanceMiles = true;
        if (new_value < 0)
            throw("The value for field MaximumDistanceMiles of AstronomyDistanceFromEarthCommandJSON is less than the lower bound (0) for that field.");
        storeMaximumDistanceMiles = new_value;
        textStoreMaximumDistanceMiles = "";
      }
    void setMaximumDistanceMilesText(std::string new_value)
      {
        flagHasMaximumDistanceMiles = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field MaximumDistanceMiles of AstronomyDistanceFromEarthCommandJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field MaximumDistanceMiles of AstronomyDistanceFromEarthCommandJSON is less than the lower bound (0) for that field.");
        textStoreMaximumDistanceMiles = new_value;
      }
    void unsetMaximumDistanceMiles(void)
      {
        flagHasMaximumDistanceMiles = false;
      }

    virtual void extraAstronomyDistanceFromEarthCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraAstronomyDistanceFromEarthCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraAstronomyDistanceFromEarthCommandLookup(key);
        if (old_field == NULL)
          {
            extraAstronomyDistanceFromEarthCommandAppendPair(key, new_component);
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
        switch ((unsigned char)(key[0]))
          {
            case 'M':
                switch ((unsigned char)(key[1]))
                  {
                    case 'a':
                        if (strcmp(&(key[2]), "ximumDistanceMiles") == 0)
                            {
                            fromJSONMaximumDistanceMiles(new_component, false);
                            return;
                            }
                        break;
                    case 'i':
                        if (strcmp(&(key[2]), "nimumDistanceMiles") == 0)
                            {
                            fromJSONMinimumDistanceMiles(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'O':
                if (strcmp(&(key[1]), "bjectName") == 0)
                    {
                    fromJSONObjectName(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraAstronomyDistanceFromEarthCommandAppendPair(key, new_component);
      }
    void extraCommandResultSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'M':
                switch ((unsigned char)(key[1]))
                  {
                    case 'a':
                        if (strcmp(&(key[2]), "ximumDistanceMiles") == 0)
                            {
                            fromJSONMaximumDistanceMiles(new_component, false);
                            return;
                            }
                        break;
                    case 'i':
                        if (strcmp(&(key[2]), "nimumDistanceMiles") == 0)
                            {
                            fromJSONMinimumDistanceMiles(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'O':
                if (strcmp(&(key[1]), "bjectName") == 0)
                    {
                    fromJSONObjectName(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraAstronomyDistanceFromEarthCommandSetField(key, new_component);
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
        assert(flagHasObjectName);
        handler->start_pair("ObjectName");
        handler->string_value(storeObjectName);
        assert(flagHasMinimumDistanceMiles);
        handler->start_pair("MinimumDistanceMiles");
        if (textStoreMinimumDistanceMiles != "")
            handler->number_value(textStoreMinimumDistanceMiles.c_str());
        else if (((double)(long int)storeMinimumDistanceMiles) == storeMinimumDistanceMiles)
            handler->number_value((long int)storeMinimumDistanceMiles);
        else
            handler->number_value(storeMinimumDistanceMiles);
        assert(flagHasMaximumDistanceMiles);
        handler->start_pair("MaximumDistanceMiles");
        if (textStoreMaximumDistanceMiles != "")
            handler->number_value(textStoreMaximumDistanceMiles.c_str());
        else if (((double)(long int)storeMaximumDistanceMiles) == storeMaximumDistanceMiles)
            handler->number_value((long int)storeMaximumDistanceMiles);
        else
            handler->number_value(storeMaximumDistanceMiles);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasObjectName()))
          {
            return "When parsing the object for %what%, the \"ObjectName\" field was missing.";
          }
        if (!(hasMinimumDistanceMiles()))
          {
            return "When parsing the object for %what%, the \"MinimumDistanceMiles\" field was missing.";
          }
        if (!(hasMaximumDistanceMiles()))
          {
            return "When parsing the object for %what%, the \"MaximumDistanceMiles\" field was missing.";
          }
        return NULL;
      }

    static AstronomyDistanceFromEarthCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static AstronomyDistanceFromEarthCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        AstronomyDistanceFromEarthCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AstronomyDistanceFromEarthCommandJSON>, AstronomyDistanceFromEarthCommandJSON *, bool> generator("Type AstronomyDistanceFromEarthCommand", ignore_extras);
            parse_json_value(text, "Text for AstronomyDistanceFromEarthCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static AstronomyDistanceFromEarthCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        AstronomyDistanceFromEarthCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AstronomyDistanceFromEarthCommandJSON>, AstronomyDistanceFromEarthCommandJSON *, bool> generator("Type AstronomyDistanceFromEarthCommand", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorObjectName;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorMinimumDistanceMiles;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorMaximumDistanceMiles;
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
            if (!(strcmp(getCommandResultJSONKey().c_str(), "AstronomyDistanceFromEarthCommand") == 0))
                throw("The key field has a value other than `AstronomyDistanceFromEarthCommand'.");
            AstronomyDistanceFromEarthCommandJSON *result = new AstronomyDistanceFromEarthCommandJSON();
            assert(result != NULL);
            RCHandle<AstronomyDistanceFromEarthCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraAstronomyDistanceFromEarthCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(CommandResultJSON *new_result)
          {
            handle_result((AstronomyDistanceFromEarthCommandJSON *)new_result);
          }
        void finish(AstronomyDistanceFromEarthCommandJSON *result)
          {
            if (fieldGeneratorObjectName.have_value)
              {
                result->setObjectName(fieldGeneratorObjectName.value);
                fieldGeneratorObjectName.have_value = false;
              }
            else if (!(result->hasObjectName()))
              {
                error("When parsing the object for %what%, the \"ObjectName\" field was missing.");
              }
            if (fieldGeneratorMinimumDistanceMiles.have_value)
              {
                result->setMinimumDistanceMilesText(fieldGeneratorMinimumDistanceMiles.value);
                fieldGeneratorMinimumDistanceMiles.have_value = false;
              }
            else if (!(result->hasMinimumDistanceMiles()))
              {
                error("When parsing the object for %what%, the \"MinimumDistanceMiles\" field was missing.");
              }
            if (fieldGeneratorMaximumDistanceMiles.have_value)
              {
                result->setMaximumDistanceMilesText(fieldGeneratorMaximumDistanceMiles.value);
                fieldGeneratorMaximumDistanceMiles.have_value = false;
              }
            else if (!(result->hasMaximumDistanceMiles()))
              {
                error("When parsing the object for %what%, the \"MaximumDistanceMiles\" field was missing.");
              }
            CommandResultJSON::Generator::finish(result);
          }
        virtual void handle_result(AstronomyDistanceFromEarthCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'M':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "ximumDistanceMiles") == 0)
                                return &fieldGeneratorMaximumDistanceMiles;
                            break;
                        case 'i':
                            if (strcmp(&(field_name[2]), "nimumDistanceMiles") == 0)
                                return &fieldGeneratorMinimumDistanceMiles;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'O':
                    if (strcmp(&(field_name[1]), "bjectName") == 0)
                        return &fieldGeneratorObjectName;
                    break;
                default:
                    break;
              }
            return CommandResultJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CommandResultJSON::Generator(ignore_extras), fieldGeneratorObjectName("field \"ObjectName\" of the AstronomyDistanceFromEarthCommand class"), fieldGeneratorMinimumDistanceMiles("field \"MinimumDistanceMiles\" of the AstronomyDistanceFromEarthCommand class"), fieldGeneratorMaximumDistanceMiles("field \"MaximumDistanceMiles\" of the AstronomyDistanceFromEarthCommand class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the AstronomyDistanceFromEarthCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorObjectName.reset();
            fieldGeneratorMinimumDistanceMiles.reset();
            fieldGeneratorMaximumDistanceMiles.reset();
            CommandResultJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* ASTRONOMYDISTANCEFROMEARTHCOMMANDJSON_H */
