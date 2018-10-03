/* file "FiniteRationalQuantityJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FINITERATIONALQUANTITYJSON_H
#define FINITERATIONALQUANTITYJSON_H

#pragma interface

#include "QuantityJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONIntegerUnboundRangeGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "OInteger.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class FiniteRationalQuantityJSON : public QuantityJSON
  {
  private:
    bool flagHasNumerator;
    OInteger storeNumerator;
    bool flagHasDenominator;
    OInteger storeDenominator;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    FiniteRationalQuantityJSON(const FiniteRationalQuantityJSON &);
    FiniteRationalQuantityJSON & operator=(const FiniteRationalQuantityJSON &other);

    JSONValue * extraNumeratorToJSON(void) const;
    JSONValue * extraDenominatorToJSON(void) const;

    void  fromJSONNumerator(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDenominator(JSONValue *json_value, bool ignore_extras = false);


  public:
    FiniteRationalQuantityJSON(void);
    virtual ~FiniteRationalQuantityJSON(void);
    const char * getQuantityKind(void) const;
    bool  hasNumerator(void) const;
    OInteger  getNumerator(void);
    const OInteger  getNumerator(void) const;
    bool  hasDenominator(void) const;
    OInteger  getDenominator(void);
    const OInteger  getDenominator(void) const;

    virtual size_t extraFiniteRationalQuantityComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraFiniteRationalQuantityComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraFiniteRationalQuantityComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraFiniteRationalQuantityComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraFiniteRationalQuantityLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraFiniteRationalQuantityLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraQuantityComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasNumerator)
            ++result;
        if (flagHasDenominator)
            ++result;
        result += extraFiniteRationalQuantityComponentCount();
        return result;
      }
    const char *extraQuantityComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNumerator)
          {
            if (remainder == 0)
                return "Numerator";
            --remainder;
          }
        if (flagHasDenominator)
          {
            if (remainder == 0)
                return "Denominator";
            --remainder;
          }
        return extraFiniteRationalQuantityComponentKey(remainder);
      }
    JSONValue *extraQuantityComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasNumerator)
          {
            if (remainder == 0)
                return extraNumeratorToJSON();
            --remainder;
          }
        if (flagHasDenominator)
          {
            if (remainder == 0)
                return extraDenominatorToJSON();
            --remainder;
          }
        return extraFiniteRationalQuantityComponentValue(remainder);
      }
    const JSONValue *extraQuantityComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNumerator)
          {
            if (remainder == 0)
                return extraNumeratorToJSON();
            --remainder;
          }
        if (flagHasDenominator)
          {
            if (remainder == 0)
                return extraDenominatorToJSON();
            --remainder;
          }
        return extraFiniteRationalQuantityComponentValue(remainder);
      }
    JSONValue *extraQuantityLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'D':
                if (strcmp(&(field_name[1]), "enominator") == 0)
                    return (flagHasDenominator ? extraDenominatorToJSON() : NULL);
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "umerator") == 0)
                    return (flagHasNumerator ? extraNumeratorToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraFiniteRationalQuantityLookup(field_name);
      }
    const JSONValue *extraQuantityLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'D':
                if (strcmp(&(field_name[1]), "enominator") == 0)
                    return (flagHasDenominator ? extraDenominatorToJSON() : NULL);
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "umerator") == 0)
                    return (flagHasNumerator ? extraNumeratorToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraFiniteRationalQuantityLookup(field_name);
      }

    void setNumerator(OInteger new_value)
      {
        flagHasNumerator = true;
        storeNumerator = new_value;
      }
    void unsetNumerator(void)
      {
        flagHasNumerator = false;
      }
    void setDenominator(OInteger new_value)
      {
        flagHasDenominator = true;
        if (new_value < 1)
            throw("The value for field Denominator of FiniteRationalQuantityJSON is less than the lower bound (1) for that field.");
        storeDenominator = new_value;
      }
    void unsetDenominator(void)
      {
        flagHasDenominator = false;
      }

    virtual void extraFiniteRationalQuantityAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraFiniteRationalQuantitySetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraFiniteRationalQuantityLookup(key);
        if (old_field == NULL)
          {
            extraFiniteRationalQuantityAppendPair(key, new_component);
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
    void extraQuantityAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'D':
                if (strcmp(&(key[1]), "enominator") == 0)
                    {
                    fromJSONDenominator(new_component, false);
                    return;
                    }
                break;
            case 'N':
                if (strcmp(&(key[1]), "umerator") == 0)
                    {
                    fromJSONNumerator(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraFiniteRationalQuantityAppendPair(key, new_component);
      }
    void extraQuantitySetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'D':
                if (strcmp(&(key[1]), "enominator") == 0)
                    {
                    fromJSONDenominator(new_component, false);
                    return;
                    }
                break;
            case 'N':
                if (strcmp(&(key[1]), "umerator") == 0)
                    {
                    fromJSONNumerator(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraFiniteRationalQuantitySetField(key, new_component);
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
        QuantityJSON::write_fields_as_json(handler);
        assert(flagHasNumerator);
        handler->start_pair("Numerator");
        handler->number_value(storeNumerator.get_o_integer());
        assert(flagHasDenominator);
        handler->start_pair("Denominator");
        handler->number_value(storeDenominator.get_o_integer());
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasNumerator()))
          {
            return "When parsing the object for %what%, the \"Numerator\" field was missing.";
          }
        if (!(hasDenominator()))
          {
            return "When parsing the object for %what%, the \"Denominator\" field was missing.";
          }
        return NULL;
      }

    static FiniteRationalQuantityJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FiniteRationalQuantityJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FiniteRationalQuantityJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FiniteRationalQuantityJSON>, FiniteRationalQuantityJSON *, bool> generator("Type FiniteRationalQuantity", ignore_extras);
            parse_json_value(text, "Text for FiniteRationalQuantityJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FiniteRationalQuantityJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FiniteRationalQuantityJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FiniteRationalQuantityJSON>, FiniteRationalQuantityJSON *, bool> generator("Type FiniteRationalQuantity", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public QuantityJSON::Generator
      {
      private:
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorNumerator;
        static char lowerBoundDenominator[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundDenominator>, OInteger, o_integer > fieldGeneratorDenominator;
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
            if (!(strcmp(getQuantityJSONKey().c_str(), "FiniteRational") == 0))
                throw("The key field has a value other than `FiniteRational'.");
            FiniteRationalQuantityJSON *result = new FiniteRationalQuantityJSON();
            assert(result != NULL);
            RCHandle<FiniteRationalQuantityJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraFiniteRationalQuantityAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(QuantityJSON *new_result)
          {
            handle_result((FiniteRationalQuantityJSON *)new_result);
          }
        void finish(FiniteRationalQuantityJSON *result)
          {
            if (fieldGeneratorNumerator.have_value)
              {
                result->setNumerator(fieldGeneratorNumerator.value);
                fieldGeneratorNumerator.have_value = false;
              }
            else if (!(result->hasNumerator()))
              {
                error("When parsing the object for %what%, the \"Numerator\" field was missing.");
              }
            if (fieldGeneratorDenominator.have_value)
              {
                result->setDenominator(fieldGeneratorDenominator.value);
                fieldGeneratorDenominator.have_value = false;
              }
            else if (!(result->hasDenominator()))
              {
                error("When parsing the object for %what%, the \"Denominator\" field was missing.");
              }
            QuantityJSON::Generator::finish(result);
          }
        virtual void handle_result(FiniteRationalQuantityJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strcmp(&(field_name[1]), "enominator") == 0)
                        return &fieldGeneratorDenominator;
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "umerator") == 0)
                        return &fieldGeneratorNumerator;
                    break;
                default:
                    break;
              }
            return QuantityJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : QuantityJSON::Generator(ignore_extras), fieldGeneratorNumerator("field \"Numerator\" of the FiniteRationalQuantity class"), fieldGeneratorDenominator("field \"Denominator\" of the FiniteRationalQuantity class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the FiniteRationalQuantity class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNumerator.reset();
            fieldGeneratorDenominator.reset();
            QuantityJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* FINITERATIONALQUANTITYJSON_H */
