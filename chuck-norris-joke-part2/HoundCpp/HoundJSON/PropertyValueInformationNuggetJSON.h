/* file "PropertyValueInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef PROPERTYVALUEINFORMATIONNUGGETJSON_H
#define PROPERTYVALUEINFORMATIONNUGGETJSON_H

#pragma interface

#include "InformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "GeneralizedThingJSON.h"
#include "PropertyJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class PropertyValueInformationNuggetJSON : public InformationNuggetJSON
  {
  private:
    bool flagHasBase;
    GeneralizedThingJSON * storeBase;
    bool flagHasProperty;
    PropertyJSON * storeProperty;
    bool flagHasValueSpokenLabel;
    std::string storeValueSpokenLabel;
    bool flagHasValueWrittenLabel;
    std::string storeValueWrittenLabel;

    PropertyValueInformationNuggetJSON(const PropertyValueInformationNuggetJSON &);
    PropertyValueInformationNuggetJSON & operator=(const PropertyValueInformationNuggetJSON &other);

    JSONValue * extraBaseToJSON(void) const;
    JSONValue * extraPropertyToJSON(void) const;
    JSONValue * extraValueSpokenLabelToJSON(void) const;
    JSONValue * extraValueWrittenLabelToJSON(void) const;

    void  fromJSONBase(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONProperty(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONValueSpokenLabel(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONValueWrittenLabel(JSONValue *json_value, bool ignore_extras = false);


  public:
    PropertyValueInformationNuggetJSON(void);
    virtual ~PropertyValueInformationNuggetJSON(void);
    const char * getNuggetKind(void) const;
    virtual const char *getPropertyValueKind(void) const = 0;
    bool  hasBase(void) const;
    GeneralizedThingJSON *  getBase(void);
    const GeneralizedThingJSON *  getBase(void) const;
    bool  hasProperty(void) const;
    PropertyJSON *  getProperty(void);
    const PropertyJSON *  getProperty(void) const;
    bool  hasValueSpokenLabel(void) const;
    std::string  getValueSpokenLabel(void);
    const std::string  getValueSpokenLabel(void) const;
    bool  hasValueWrittenLabel(void) const;
    std::string  getValueWrittenLabel(void);
    const std::string  getValueWrittenLabel(void) const;

    virtual size_t extraPropertyValueInformationNuggetComponentCount(void) const = 0;
    virtual const char *extraPropertyValueInformationNuggetComponentKey(size_t component_num) const = 0;
    virtual JSONValue *extraPropertyValueInformationNuggetComponentValue(size_t component_num) = 0;
    virtual const JSONValue *extraPropertyValueInformationNuggetComponentValue(size_t component_num) const = 0;
    virtual JSONValue *extraPropertyValueInformationNuggetLookup(const char *field_name) = 0;
    virtual const JSONValue *extraPropertyValueInformationNuggetLookup(const char *field_name) const = 0;
    size_t extraInformationNuggetComponentCount(void) const
      {
        size_t result = 1;
        if (flagHasBase)
            ++result;
        if (flagHasProperty)
            ++result;
        if (flagHasValueSpokenLabel)
            ++result;
        if (flagHasValueWrittenLabel)
            ++result;
        result += extraPropertyValueInformationNuggetComponentCount();
        return result;
      }
    const char *extraInformationNuggetComponentKey(size_t component_num) const
      {
        if (component_num == 0)
            return "PropertyValueKind";
        size_t remainder = (component_num - 1);
        if (flagHasBase)
          {
            if (remainder == 0)
                return "Base";
            --remainder;
          }
        if (flagHasProperty)
          {
            if (remainder == 0)
                return "Property";
            --remainder;
          }
        if (flagHasValueSpokenLabel)
          {
            if (remainder == 0)
                return "ValueSpokenLabel";
            --remainder;
          }
        if (flagHasValueWrittenLabel)
          {
            if (remainder == 0)
                return "ValueWrittenLabel";
            --remainder;
          }
        return extraPropertyValueInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraInformationNuggetComponentValue(size_t component_num)
      {
        if (component_num == 0)
            return new JSONStringValue(getPropertyValueKind());
        size_t remainder = (component_num - 1);
        if (flagHasBase)
          {
            if (remainder == 0)
                return extraBaseToJSON();
            --remainder;
          }
        if (flagHasProperty)
          {
            if (remainder == 0)
                return extraPropertyToJSON();
            --remainder;
          }
        if (flagHasValueSpokenLabel)
          {
            if (remainder == 0)
                return extraValueSpokenLabelToJSON();
            --remainder;
          }
        if (flagHasValueWrittenLabel)
          {
            if (remainder == 0)
                return extraValueWrittenLabelToJSON();
            --remainder;
          }
        return extraPropertyValueInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraInformationNuggetComponentValue(size_t component_num) const
      {
        if (component_num == 0)
            return new JSONStringValue(getPropertyValueKind());
        size_t remainder = (component_num - 1);
        if (flagHasBase)
          {
            if (remainder == 0)
                return extraBaseToJSON();
            --remainder;
          }
        if (flagHasProperty)
          {
            if (remainder == 0)
                return extraPropertyToJSON();
            --remainder;
          }
        if (flagHasValueSpokenLabel)
          {
            if (remainder == 0)
                return extraValueSpokenLabelToJSON();
            --remainder;
          }
        if (flagHasValueWrittenLabel)
          {
            if (remainder == 0)
                return extraValueWrittenLabelToJSON();
            --remainder;
          }
        return extraPropertyValueInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'B':
                if (strcmp(&(field_name[1]), "ase") == 0)
                    return (flagHasBase ? extraBaseToJSON() : NULL);
                break;
            case 'P':
                if (strncmp(&(field_name[1]), "roperty", 7) == 0)
                  {
                    switch ((unsigned char)(field_name[8]))
                      {
                        case 0:
                            return (flagHasProperty ? extraPropertyToJSON() : NULL);
                        case 'V':
                            if (strcmp(&(field_name[9]), "alueKind") == 0)
                                return new JSONStringValue(getPropertyValueKind());
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'V':
                if (strncmp(&(field_name[1]), "alue", 4) == 0)
                  {
                    switch ((unsigned char)(field_name[5]))
                      {
                        case 'S':
                            if (strcmp(&(field_name[6]), "pokenLabel") == 0)
                                return (flagHasValueSpokenLabel ? extraValueSpokenLabelToJSON() : NULL);
                            break;
                        case 'W':
                            if (strcmp(&(field_name[6]), "rittenLabel") == 0)
                                return (flagHasValueWrittenLabel ? extraValueWrittenLabelToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraPropertyValueInformationNuggetLookup(field_name);
      }
    const JSONValue *extraInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'B':
                if (strcmp(&(field_name[1]), "ase") == 0)
                    return (flagHasBase ? extraBaseToJSON() : NULL);
                break;
            case 'P':
                if (strncmp(&(field_name[1]), "roperty", 7) == 0)
                  {
                    switch ((unsigned char)(field_name[8]))
                      {
                        case 0:
                            return (flagHasProperty ? extraPropertyToJSON() : NULL);
                        case 'V':
                            if (strcmp(&(field_name[9]), "alueKind") == 0)
                                return new JSONStringValue(getPropertyValueKind());
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'V':
                if (strncmp(&(field_name[1]), "alue", 4) == 0)
                  {
                    switch ((unsigned char)(field_name[5]))
                      {
                        case 'S':
                            if (strcmp(&(field_name[6]), "pokenLabel") == 0)
                                return (flagHasValueSpokenLabel ? extraValueSpokenLabelToJSON() : NULL);
                            break;
                        case 'W':
                            if (strcmp(&(field_name[6]), "rittenLabel") == 0)
                                return (flagHasValueWrittenLabel ? extraValueWrittenLabelToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraPropertyValueInformationNuggetLookup(field_name);
      }

    void setBase(GeneralizedThingJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasBase)
          {
            storeBase->remove_reference();
          }
        flagHasBase = true;
        storeBase = new_value;
      }
    void unsetBase(void)
      {
        if (flagHasBase)
          {
            storeBase->remove_reference();
          }
        flagHasBase = false;
      }
    void setProperty(PropertyJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasProperty)
          {
            storeProperty->remove_reference();
          }
        flagHasProperty = true;
        storeProperty = new_value;
      }
    void unsetProperty(void)
      {
        if (flagHasProperty)
          {
            storeProperty->remove_reference();
          }
        flagHasProperty = false;
      }
    void setValueSpokenLabel(std::string new_value)
      {
        flagHasValueSpokenLabel = true;
        storeValueSpokenLabel = new_value;
      }
    void unsetValueSpokenLabel(void)
      {
        flagHasValueSpokenLabel = false;
      }
    void setValueWrittenLabel(std::string new_value)
      {
        flagHasValueWrittenLabel = true;
        storeValueWrittenLabel = new_value;
      }
    void unsetValueWrittenLabel(void)
      {
        flagHasValueWrittenLabel = false;
      }

    virtual void extraPropertyValueInformationNuggetAppendPair(const char *key, JSONValue *new_component) = 0;
    virtual void extraPropertyValueInformationNuggetSetField(const char *key, JSONValue *new_component) = 0;
    void extraInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'B':
                if (strcmp(&(key[1]), "ase") == 0)
                    {
                    fromJSONBase(new_component, false);
                    return;
                    }
                break;
            case 'P':
                if (strncmp(&(key[1]), "roperty", 7) == 0)
                  {
                    switch ((unsigned char)(key[8]))
                      {
                        case 0:
                            {
                            fromJSONProperty(new_component, false);
                            return;
                            }
                        case 'V':
                            if (strcmp(&(key[9]), "alueKind") == 0)
                                return;
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'V':
                if (strncmp(&(key[1]), "alue", 4) == 0)
                  {
                    switch ((unsigned char)(key[5]))
                      {
                        case 'S':
                            if (strcmp(&(key[6]), "pokenLabel") == 0)
                                {
                                fromJSONValueSpokenLabel(new_component, false);
                                return;
                                }
                            break;
                        case 'W':
                            if (strcmp(&(key[6]), "rittenLabel") == 0)
                                {
                                fromJSONValueWrittenLabel(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        extraPropertyValueInformationNuggetAppendPair(key, new_component);
      }
    void extraInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'B':
                if (strcmp(&(key[1]), "ase") == 0)
                    {
                    fromJSONBase(new_component, false);
                    return;
                    }
                break;
            case 'P':
                if (strncmp(&(key[1]), "roperty", 7) == 0)
                  {
                    switch ((unsigned char)(key[8]))
                      {
                        case 0:
                            {
                            fromJSONProperty(new_component, false);
                            return;
                            }
                        case 'V':
                            if (strcmp(&(key[9]), "alueKind") == 0)
                                return;
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'V':
                if (strncmp(&(key[1]), "alue", 4) == 0)
                  {
                    switch ((unsigned char)(key[5]))
                      {
                        case 'S':
                            if (strcmp(&(key[6]), "pokenLabel") == 0)
                                {
                                fromJSONValueSpokenLabel(new_component, false);
                                return;
                                }
                            break;
                        case 'W':
                            if (strcmp(&(key[6]), "rittenLabel") == 0)
                                {
                                fromJSONValueWrittenLabel(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        extraPropertyValueInformationNuggetSetField(key, new_component);
      }

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        InformationNuggetJSON::write_fields_as_json(handler);
        handler->pair("PropertyValueKind", getPropertyValueKind());
        assert(flagHasBase);
        handler->start_pair("Base");
        storeBase->write_as_json(handler);
        assert(flagHasProperty);
        handler->start_pair("Property");
        storeProperty->write_as_json(handler);
        assert(flagHasValueSpokenLabel);
        handler->start_pair("ValueSpokenLabel");
        handler->string_value(storeValueSpokenLabel);
        assert(flagHasValueWrittenLabel);
        handler->start_pair("ValueWrittenLabel");
        handler->string_value(storeValueWrittenLabel);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasBase()))
          {
            return "When parsing the object for %what%, the \"Base\" field was missing.";
          }
        if (!(hasProperty()))
          {
            return "When parsing the object for %what%, the \"Property\" field was missing.";
          }
        if (!(hasValueSpokenLabel()))
          {
            return "When parsing the object for %what%, the \"ValueSpokenLabel\" field was missing.";
          }
        if (!(hasValueWrittenLabel()))
          {
            return "When parsing the object for %what%, the \"ValueWrittenLabel\" field was missing.";
          }
        return NULL;
      }

    static PropertyValueInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static PropertyValueInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        PropertyValueInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<PropertyValueInformationNuggetJSON>, PropertyValueInformationNuggetJSON *, bool> generator("Type PropertyValueInformationNugget", ignore_extras);
            parse_json_value(text, "Text for PropertyValueInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static PropertyValueInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        PropertyValueInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<PropertyValueInformationNuggetJSON>, PropertyValueInformationNuggetJSON *, bool> generator("Type PropertyValueInformationNugget", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public InformationNuggetJSON::Generator
      {
      private:
        JSONHoldingGenerator<GeneralizedThingJSON::Generator, RCHandle<GeneralizedThingJSON>, GeneralizedThingJSON *, bool > fieldGeneratorBase;
        JSONHoldingGenerator<PropertyJSON::Generator, RCHandle<PropertyJSON>, PropertyJSON *, bool > fieldGeneratorProperty;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorValueSpokenLabel;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorValueWrittenLabel;
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char *> keyGenerator;


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
            if (!(keyGenerator.have_value))
                throw("The `PropertyValueKind' field is missing.");
            if (!(strcmp(getInformationNuggetJSONKey().c_str(), "PropertyValue") == 0))
                throw("The key field has a value other than `PropertyValue'.");
            PropertyValueInformationNuggetJSON *result = createForKey(keyGenerator.value.c_str(), unknownFieldGenerator.index);
            assert(result != NULL);
            RCHandle<PropertyValueInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraPropertyValueInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            const char *missing_field_error = result->missing_field_error();
            if (missing_field_error != NULL)
                error(missing_field_error);
            handle_result(result);
          }
        std::string getPropertyValueInformationNuggetJSONKey(void)
          {
            if (!(keyGenerator.have_value))
                throw("The `PropertyValueKind' field is missing.");
            return keyGenerator.value;
          }
        void handle_result(InformationNuggetJSON *new_result)
          {
            handle_result((PropertyValueInformationNuggetJSON *)new_result);
          }
        void finish(PropertyValueInformationNuggetJSON *result)
          {
            if (fieldGeneratorBase.have_value)
              {
                result->setBase(fieldGeneratorBase.value.referenced());
                fieldGeneratorBase.have_value = false;
              }
            else if (!(result->hasBase()))
              {
                error("When parsing the object for %what%, the \"Base\" field was missing.");
              }
            if (fieldGeneratorProperty.have_value)
              {
                result->setProperty(fieldGeneratorProperty.value.referenced());
                fieldGeneratorProperty.have_value = false;
              }
            else if (!(result->hasProperty()))
              {
                error("When parsing the object for %what%, the \"Property\" field was missing.");
              }
            if (fieldGeneratorValueSpokenLabel.have_value)
              {
                result->setValueSpokenLabel(fieldGeneratorValueSpokenLabel.value);
                fieldGeneratorValueSpokenLabel.have_value = false;
              }
            else if (!(result->hasValueSpokenLabel()))
              {
                error("When parsing the object for %what%, the \"ValueSpokenLabel\" field was missing.");
              }
            if (fieldGeneratorValueWrittenLabel.have_value)
              {
                result->setValueWrittenLabel(fieldGeneratorValueWrittenLabel.value);
                fieldGeneratorValueWrittenLabel.have_value = false;
              }
            else if (!(result->hasValueWrittenLabel()))
              {
                error("When parsing the object for %what%, the \"ValueWrittenLabel\" field was missing.");
              }
            InformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(PropertyValueInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'B':
                    if (strcmp(&(field_name[1]), "ase") == 0)
                        return &fieldGeneratorBase;
                    break;
                case 'P':
                    if (strncmp(&(field_name[1]), "roperty", 7) == 0)
                      {
                        switch ((unsigned char)(field_name[8]))
                          {
                            case 0:
                                return &fieldGeneratorProperty;
                            case 'V':
                                if (strcmp(&(field_name[9]), "alueKind") == 0)
                                    {
                                    keyGenerator.reset();
                                    return &keyGenerator;
                                    }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'V':
                    if (strncmp(&(field_name[1]), "alue", 4) == 0)
                      {
                        switch ((unsigned char)(field_name[5]))
                          {
                            case 'S':
                                if (strcmp(&(field_name[6]), "pokenLabel") == 0)
                                    return &fieldGeneratorValueSpokenLabel;
                                break;
                            case 'W':
                                if (strcmp(&(field_name[6]), "rittenLabel") == 0)
                                    return &fieldGeneratorValueWrittenLabel;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return InformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : InformationNuggetJSON::Generator(ignore_extras), fieldGeneratorBase("field \"Base\" of the PropertyValueInformationNugget class", ignore_extras), fieldGeneratorProperty("field \"Property\" of the PropertyValueInformationNugget class", ignore_extras), fieldGeneratorValueSpokenLabel("field \"ValueSpokenLabel\" of the PropertyValueInformationNugget class"), fieldGeneratorValueWrittenLabel("field \"ValueWrittenLabel\" of the PropertyValueInformationNugget class"), unknownFieldGenerator(ignore_extras), keyGenerator("key field \"PropertyValueKind\" of the PropertyValueInformationNugget class")
          {
            set_what("the PropertyValueInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorBase.reset();
            fieldGeneratorProperty.reset();
            fieldGeneratorValueSpokenLabel.reset();
            fieldGeneratorValueWrittenLabel.reset();
            InformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
    static PropertyValueInformationNuggetJSON *createForKey(const char *key, string_index *other_field_index);
  };

#endif /* PROPERTYVALUEINFORMATIONNUGGETJSON_H */
