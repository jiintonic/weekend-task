/* file "AmountPropertyJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef AMOUNTPROPERTYJSON_H
#define AMOUNTPROPERTYJSON_H

#pragma interface

#include "GeneralizedThingJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "GeneralizedThingJSON.h"
#include "PropertyJSON.h"
#include "AmountJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class AmountPropertyJSON : public GeneralizedThingJSON
  {
  private:
    bool flagHasBase;
    GeneralizedThingJSON * storeBase;
    bool flagHasProperty;
    PropertyJSON * storeProperty;
    bool flagHasAmount;
    AmountJSON * storeAmount;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    AmountPropertyJSON(const AmountPropertyJSON &);
    AmountPropertyJSON & operator=(const AmountPropertyJSON &other);

    JSONValue * extraBaseToJSON(void) const;
    JSONValue * extraPropertyToJSON(void) const;
    JSONValue * extraAmountToJSON(void) const;

    void  fromJSONBase(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONProperty(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAmount(JSONValue *json_value, bool ignore_extras = false);


  public:
    AmountPropertyJSON(void);
    virtual ~AmountPropertyJSON(void);
    const char * getThingKind(void) const;
    bool  hasBase(void) const;
    GeneralizedThingJSON *  getBase(void);
    const GeneralizedThingJSON *  getBase(void) const;
    bool  hasProperty(void) const;
    PropertyJSON *  getProperty(void);
    const PropertyJSON *  getProperty(void) const;
    bool  hasAmount(void) const;
    AmountJSON *  getAmount(void);
    const AmountJSON *  getAmount(void) const;

    virtual size_t extraAmountPropertyComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraAmountPropertyComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraAmountPropertyComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraAmountPropertyComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraAmountPropertyLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraAmountPropertyLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraGeneralizedThingComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasBase)
            ++result;
        if (flagHasProperty)
            ++result;
        if (flagHasAmount)
            ++result;
        result += extraAmountPropertyComponentCount();
        return result;
      }
    const char *extraGeneralizedThingComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
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
        if (flagHasAmount)
          {
            if (remainder == 0)
                return "Amount";
            --remainder;
          }
        return extraAmountPropertyComponentKey(remainder);
      }
    JSONValue *extraGeneralizedThingComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
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
        if (flagHasAmount)
          {
            if (remainder == 0)
                return extraAmountToJSON();
            --remainder;
          }
        return extraAmountPropertyComponentValue(remainder);
      }
    const JSONValue *extraGeneralizedThingComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
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
        if (flagHasAmount)
          {
            if (remainder == 0)
                return extraAmountToJSON();
            --remainder;
          }
        return extraAmountPropertyComponentValue(remainder);
      }
    JSONValue *extraGeneralizedThingLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strcmp(&(field_name[1]), "mount") == 0)
                    return (flagHasAmount ? extraAmountToJSON() : NULL);
                break;
            case 'B':
                if (strcmp(&(field_name[1]), "ase") == 0)
                    return (flagHasBase ? extraBaseToJSON() : NULL);
                break;
            case 'P':
                if (strcmp(&(field_name[1]), "roperty") == 0)
                    return (flagHasProperty ? extraPropertyToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraAmountPropertyLookup(field_name);
      }
    const JSONValue *extraGeneralizedThingLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strcmp(&(field_name[1]), "mount") == 0)
                    return (flagHasAmount ? extraAmountToJSON() : NULL);
                break;
            case 'B':
                if (strcmp(&(field_name[1]), "ase") == 0)
                    return (flagHasBase ? extraBaseToJSON() : NULL);
                break;
            case 'P':
                if (strcmp(&(field_name[1]), "roperty") == 0)
                    return (flagHasProperty ? extraPropertyToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraAmountPropertyLookup(field_name);
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
    void setAmount(AmountJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAmount)
          {
            storeAmount->remove_reference();
          }
        flagHasAmount = true;
        storeAmount = new_value;
      }
    void unsetAmount(void)
      {
        if (flagHasAmount)
          {
            storeAmount->remove_reference();
          }
        flagHasAmount = false;
      }

    virtual void extraAmountPropertyAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraAmountPropertySetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraAmountPropertyLookup(key);
        if (old_field == NULL)
          {
            extraAmountPropertyAppendPair(key, new_component);
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
    void extraGeneralizedThingAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                if (strcmp(&(key[1]), "mount") == 0)
                    {
                    fromJSONAmount(new_component, false);
                    return;
                    }
                break;
            case 'B':
                if (strcmp(&(key[1]), "ase") == 0)
                    {
                    fromJSONBase(new_component, false);
                    return;
                    }
                break;
            case 'P':
                if (strcmp(&(key[1]), "roperty") == 0)
                    {
                    fromJSONProperty(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraAmountPropertyAppendPair(key, new_component);
      }
    void extraGeneralizedThingSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                if (strcmp(&(key[1]), "mount") == 0)
                    {
                    fromJSONAmount(new_component, false);
                    return;
                    }
                break;
            case 'B':
                if (strcmp(&(key[1]), "ase") == 0)
                    {
                    fromJSONBase(new_component, false);
                    return;
                    }
                break;
            case 'P':
                if (strcmp(&(key[1]), "roperty") == 0)
                    {
                    fromJSONProperty(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraAmountPropertySetField(key, new_component);
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
        GeneralizedThingJSON::write_fields_as_json(handler);
        assert(flagHasBase);
        handler->start_pair("Base");
        storeBase->write_as_json(handler);
        assert(flagHasProperty);
        handler->start_pair("Property");
        storeProperty->write_as_json(handler);
        assert(flagHasAmount);
        handler->start_pair("Amount");
        storeAmount->write_as_json(handler);
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
        if (!(hasAmount()))
          {
            return "When parsing the object for %what%, the \"Amount\" field was missing.";
          }
        return NULL;
      }

    static AmountPropertyJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static AmountPropertyJSON *from_text(const char *text, bool ignore_extras = false)
      {
        AmountPropertyJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AmountPropertyJSON>, AmountPropertyJSON *, bool> generator("Type AmountProperty", ignore_extras);
            parse_json_value(text, "Text for AmountPropertyJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static AmountPropertyJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        AmountPropertyJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AmountPropertyJSON>, AmountPropertyJSON *, bool> generator("Type AmountProperty", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public GeneralizedThingJSON::Generator
      {
      private:
        JSONHoldingGenerator<GeneralizedThingJSON::Generator, RCHandle<GeneralizedThingJSON>, GeneralizedThingJSON *, bool > fieldGeneratorBase;
        JSONHoldingGenerator<PropertyJSON::Generator, RCHandle<PropertyJSON>, PropertyJSON *, bool > fieldGeneratorProperty;
        JSONHoldingGenerator<AmountJSON::Generator, RCHandle<AmountJSON>, AmountJSON *, bool > fieldGeneratorAmount;
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
            if (!(strcmp(getGeneralizedThingJSONKey().c_str(), "AmountProperty") == 0))
                throw("The key field has a value other than `AmountProperty'.");
            AmountPropertyJSON *result = new AmountPropertyJSON();
            assert(result != NULL);
            RCHandle<AmountPropertyJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraAmountPropertyAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(GeneralizedThingJSON *new_result)
          {
            handle_result((AmountPropertyJSON *)new_result);
          }
        void finish(AmountPropertyJSON *result)
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
            if (fieldGeneratorAmount.have_value)
              {
                result->setAmount(fieldGeneratorAmount.value.referenced());
                fieldGeneratorAmount.have_value = false;
              }
            else if (!(result->hasAmount()))
              {
                error("When parsing the object for %what%, the \"Amount\" field was missing.");
              }
            GeneralizedThingJSON::Generator::finish(result);
          }
        virtual void handle_result(AmountPropertyJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "mount") == 0)
                        return &fieldGeneratorAmount;
                    break;
                case 'B':
                    if (strcmp(&(field_name[1]), "ase") == 0)
                        return &fieldGeneratorBase;
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "roperty") == 0)
                        return &fieldGeneratorProperty;
                    break;
                default:
                    break;
              }
            return GeneralizedThingJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : GeneralizedThingJSON::Generator(ignore_extras), fieldGeneratorBase("field \"Base\" of the AmountProperty class", ignore_extras), fieldGeneratorProperty("field \"Property\" of the AmountProperty class", ignore_extras), fieldGeneratorAmount("field \"Amount\" of the AmountProperty class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the AmountProperty class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorBase.reset();
            fieldGeneratorProperty.reset();
            fieldGeneratorAmount.reset();
            GeneralizedThingJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* AMOUNTPROPERTYJSON_H */
