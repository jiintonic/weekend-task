/* file "RandomNumberGeneratorDiceRollRequestResultJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef RANDOMNUMBERGENERATORDICEROLLREQUESTRESULTJSON_H
#define RANDOMNUMBERGENERATORDICEROLLREQUESTRESULTJSON_H

#pragma interface

#include "RandomNumberGeneratorRequestResultJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONIntegerUnboundRangeGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include "OInteger.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class RandomNumberGeneratorDiceRollRequestResultJSON : public RandomNumberGeneratorRequestResultJSON
  {
  private:
    bool flagHasValues;
    std::vector< OInteger > storeValues;
    bool flagHasNumFaces;
    OInteger storeNumFaces;
    bool flagHasIsDnDStyle;
    bool storeIsDnDStyle;
    bool flagHasTotal;
    OInteger storeTotal;
    bool flagHasModifier;
    OInteger storeModifier;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    RandomNumberGeneratorDiceRollRequestResultJSON(const RandomNumberGeneratorDiceRollRequestResultJSON &);
    RandomNumberGeneratorDiceRollRequestResultJSON & operator=(const RandomNumberGeneratorDiceRollRequestResultJSON &other);

    JSONValue * extraValuesToJSON(void) const;
    JSONValue * extraNumFacesToJSON(void) const;
    JSONValue * extraIsDnDStyleToJSON(void) const;
    JSONValue * extraTotalToJSON(void) const;
    JSONValue * extraModifierToJSON(void) const;

    void  fromJSONValues(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNumFaces(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsDnDStyle(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTotal(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONModifier(JSONValue *json_value, bool ignore_extras = false);


  public:
    RandomNumberGeneratorDiceRollRequestResultJSON(void);
    virtual ~RandomNumberGeneratorDiceRollRequestResultJSON(void);
    const char * getRandomNumberRequestKind(void) const;
    bool  hasValues(void) const;
    size_t  countOfValues(void) const;
    OInteger  elementOfValues(size_t element_num);
    const OInteger  elementOfValues(size_t element_num) const;
    std::vector< OInteger >  getValues(void);
    const std::vector< OInteger >  getValues(void) const;
    bool  hasNumFaces(void) const;
    OInteger  getNumFaces(void);
    const OInteger  getNumFaces(void) const;
    bool  hasIsDnDStyle(void) const;
    bool  getIsDnDStyle(void);
    const bool  getIsDnDStyle(void) const;
    bool  hasTotal(void) const;
    OInteger  getTotal(void);
    const OInteger  getTotal(void) const;
    bool  hasModifier(void) const;
    OInteger  getModifier(void);
    const OInteger  getModifier(void) const;

    virtual size_t extraRandomNumberGeneratorDiceRollRequestResultComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraRandomNumberGeneratorDiceRollRequestResultComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraRandomNumberGeneratorDiceRollRequestResultComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraRandomNumberGeneratorDiceRollRequestResultComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraRandomNumberGeneratorDiceRollRequestResultLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraRandomNumberGeneratorDiceRollRequestResultLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraRandomNumberGeneratorRequestResultComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasValues)
            ++result;
        if (flagHasNumFaces)
            ++result;
        if (flagHasIsDnDStyle)
            ++result;
        if (flagHasTotal)
            ++result;
        if (flagHasModifier)
            ++result;
        result += extraRandomNumberGeneratorDiceRollRequestResultComponentCount();
        return result;
      }
    const char *extraRandomNumberGeneratorRequestResultComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasValues)
          {
            if (remainder == 0)
                return "Values";
            --remainder;
          }
        if (flagHasNumFaces)
          {
            if (remainder == 0)
                return "NumFaces";
            --remainder;
          }
        if (flagHasIsDnDStyle)
          {
            if (remainder == 0)
                return "IsDnDStyle";
            --remainder;
          }
        if (flagHasTotal)
          {
            if (remainder == 0)
                return "Total";
            --remainder;
          }
        if (flagHasModifier)
          {
            if (remainder == 0)
                return "Modifier";
            --remainder;
          }
        return extraRandomNumberGeneratorDiceRollRequestResultComponentKey(remainder);
      }
    JSONValue *extraRandomNumberGeneratorRequestResultComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasValues)
          {
            if (remainder == 0)
                return extraValuesToJSON();
            --remainder;
          }
        if (flagHasNumFaces)
          {
            if (remainder == 0)
                return extraNumFacesToJSON();
            --remainder;
          }
        if (flagHasIsDnDStyle)
          {
            if (remainder == 0)
                return extraIsDnDStyleToJSON();
            --remainder;
          }
        if (flagHasTotal)
          {
            if (remainder == 0)
                return extraTotalToJSON();
            --remainder;
          }
        if (flagHasModifier)
          {
            if (remainder == 0)
                return extraModifierToJSON();
            --remainder;
          }
        return extraRandomNumberGeneratorDiceRollRequestResultComponentValue(remainder);
      }
    const JSONValue *extraRandomNumberGeneratorRequestResultComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasValues)
          {
            if (remainder == 0)
                return extraValuesToJSON();
            --remainder;
          }
        if (flagHasNumFaces)
          {
            if (remainder == 0)
                return extraNumFacesToJSON();
            --remainder;
          }
        if (flagHasIsDnDStyle)
          {
            if (remainder == 0)
                return extraIsDnDStyleToJSON();
            --remainder;
          }
        if (flagHasTotal)
          {
            if (remainder == 0)
                return extraTotalToJSON();
            --remainder;
          }
        if (flagHasModifier)
          {
            if (remainder == 0)
                return extraModifierToJSON();
            --remainder;
          }
        return extraRandomNumberGeneratorDiceRollRequestResultComponentValue(remainder);
      }
    JSONValue *extraRandomNumberGeneratorRequestResultLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'I':
                if (strcmp(&(field_name[1]), "sDnDStyle") == 0)
                    return (flagHasIsDnDStyle ? extraIsDnDStyleToJSON() : NULL);
                break;
            case 'M':
                if (strcmp(&(field_name[1]), "odifier") == 0)
                    return (flagHasModifier ? extraModifierToJSON() : NULL);
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "umFaces") == 0)
                    return (flagHasNumFaces ? extraNumFacesToJSON() : NULL);
                break;
            case 'T':
                if (strcmp(&(field_name[1]), "otal") == 0)
                    return (flagHasTotal ? extraTotalToJSON() : NULL);
                break;
            case 'V':
                if (strcmp(&(field_name[1]), "alues") == 0)
                    return (flagHasValues ? extraValuesToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraRandomNumberGeneratorDiceRollRequestResultLookup(field_name);
      }
    const JSONValue *extraRandomNumberGeneratorRequestResultLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'I':
                if (strcmp(&(field_name[1]), "sDnDStyle") == 0)
                    return (flagHasIsDnDStyle ? extraIsDnDStyleToJSON() : NULL);
                break;
            case 'M':
                if (strcmp(&(field_name[1]), "odifier") == 0)
                    return (flagHasModifier ? extraModifierToJSON() : NULL);
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "umFaces") == 0)
                    return (flagHasNumFaces ? extraNumFacesToJSON() : NULL);
                break;
            case 'T':
                if (strcmp(&(field_name[1]), "otal") == 0)
                    return (flagHasTotal ? extraTotalToJSON() : NULL);
                break;
            case 'V':
                if (strcmp(&(field_name[1]), "alues") == 0)
                    return (flagHasValues ? extraValuesToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraRandomNumberGeneratorDiceRollRequestResultLookup(field_name);
      }

    void initValues(void)
      {
        flagHasValues = true;
        storeValues.clear();
      }
    void appendValues(OInteger to_append)
      {
        if (!flagHasValues)
          {
            flagHasValues = true;
            storeValues.clear();
          }
        assert(flagHasValues);
        storeValues.push_back(to_append);
      }
    void unsetValues(void)
      {
        flagHasValues = false;
        storeValues.clear();
      }
    void setNumFaces(OInteger new_value)
      {
        flagHasNumFaces = true;
        if (new_value < 2)
            throw("The value for field NumFaces of RandomNumberGeneratorDiceRollRequestResultJSON is less than the lower bound (2) for that field.");
        storeNumFaces = new_value;
      }
    void unsetNumFaces(void)
      {
        flagHasNumFaces = false;
      }
    void setIsDnDStyle(bool new_value)
      {
        flagHasIsDnDStyle = true;
        storeIsDnDStyle = new_value;
      }
    void unsetIsDnDStyle(void)
      {
        flagHasIsDnDStyle = false;
      }
    void setTotal(OInteger new_value)
      {
        flagHasTotal = true;
        storeTotal = new_value;
      }
    void unsetTotal(void)
      {
        flagHasTotal = false;
      }
    void setModifier(OInteger new_value)
      {
        flagHasModifier = true;
        storeModifier = new_value;
      }
    void unsetModifier(void)
      {
        flagHasModifier = false;
      }

    virtual void extraRandomNumberGeneratorDiceRollRequestResultAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraRandomNumberGeneratorDiceRollRequestResultSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraRandomNumberGeneratorDiceRollRequestResultLookup(key);
        if (old_field == NULL)
          {
            extraRandomNumberGeneratorDiceRollRequestResultAppendPair(key, new_component);
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
    void extraRandomNumberGeneratorRequestResultAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'I':
                if (strcmp(&(key[1]), "sDnDStyle") == 0)
                    {
                    fromJSONIsDnDStyle(new_component, false);
                    return;
                    }
                break;
            case 'M':
                if (strcmp(&(key[1]), "odifier") == 0)
                    {
                    fromJSONModifier(new_component, false);
                    return;
                    }
                break;
            case 'N':
                if (strcmp(&(key[1]), "umFaces") == 0)
                    {
                    fromJSONNumFaces(new_component, false);
                    return;
                    }
                break;
            case 'T':
                if (strcmp(&(key[1]), "otal") == 0)
                    {
                    fromJSONTotal(new_component, false);
                    return;
                    }
                break;
            case 'V':
                if (strcmp(&(key[1]), "alues") == 0)
                    {
                    fromJSONValues(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraRandomNumberGeneratorDiceRollRequestResultAppendPair(key, new_component);
      }
    void extraRandomNumberGeneratorRequestResultSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'I':
                if (strcmp(&(key[1]), "sDnDStyle") == 0)
                    {
                    fromJSONIsDnDStyle(new_component, false);
                    return;
                    }
                break;
            case 'M':
                if (strcmp(&(key[1]), "odifier") == 0)
                    {
                    fromJSONModifier(new_component, false);
                    return;
                    }
                break;
            case 'N':
                if (strcmp(&(key[1]), "umFaces") == 0)
                    {
                    fromJSONNumFaces(new_component, false);
                    return;
                    }
                break;
            case 'T':
                if (strcmp(&(key[1]), "otal") == 0)
                    {
                    fromJSONTotal(new_component, false);
                    return;
                    }
                break;
            case 'V':
                if (strcmp(&(key[1]), "alues") == 0)
                    {
                    fromJSONValues(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraRandomNumberGeneratorDiceRollRequestResultSetField(key, new_component);
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
        RandomNumberGeneratorRequestResultJSON::write_fields_as_json(handler);
        if (flagHasValues)
          {
            handler->start_pair("Values");
            assert(storeValues.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeValues.size(); ++num1)
              {
                handler->number_value(storeValues[num1].get_o_integer());
              }
            handler->finish_array();
          }
        assert(flagHasNumFaces);
        handler->start_pair("NumFaces");
        handler->number_value(storeNumFaces.get_o_integer());
        assert(flagHasIsDnDStyle);
        handler->start_pair("IsDnDStyle");
        handler->boolean_value(storeIsDnDStyle);
        if (flagHasTotal)
          {
            handler->start_pair("Total");
            handler->number_value(storeTotal.get_o_integer());
          }
        if (flagHasModifier)
          {
            handler->start_pair("Modifier");
            handler->number_value(storeModifier.get_o_integer());
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasNumFaces()))
          {
            return "When parsing the object for %what%, the \"NumFaces\" field was missing.";
          }
        if (!(hasIsDnDStyle()))
          {
            return "When parsing the object for %what%, the \"IsDnDStyle\" field was missing.";
          }
        return NULL;
      }

    static RandomNumberGeneratorDiceRollRequestResultJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static RandomNumberGeneratorDiceRollRequestResultJSON *from_text(const char *text, bool ignore_extras = false)
      {
        RandomNumberGeneratorDiceRollRequestResultJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RandomNumberGeneratorDiceRollRequestResultJSON>, RandomNumberGeneratorDiceRollRequestResultJSON *, bool> generator("Type RandomNumberGeneratorDiceRollRequestResult", ignore_extras);
            parse_json_value(text, "Text for RandomNumberGeneratorDiceRollRequestResultJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static RandomNumberGeneratorDiceRollRequestResultJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        RandomNumberGeneratorDiceRollRequestResultJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RandomNumberGeneratorDiceRollRequestResultJSON>, RandomNumberGeneratorDiceRollRequestResultJSON *, bool> generator("Type RandomNumberGeneratorDiceRollRequestResult", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public RandomNumberGeneratorRequestResultJSON::Generator
      {
      private:
        static char lowerBoundValues[];
        JSONHoldingArrayGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundValues>, OInteger, o_integer > fieldGeneratorValues;
        static char lowerBoundNumFaces[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundNumFaces>, OInteger, o_integer > fieldGeneratorNumFaces;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsDnDStyle;
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorTotal;
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorModifier;
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
            if (!(strcmp(getRandomNumberGeneratorRequestResultJSONKey().c_str(), "DiceRollRequest") == 0))
                throw("The key field has a value other than `DiceRollRequest'.");
            RandomNumberGeneratorDiceRollRequestResultJSON *result = new RandomNumberGeneratorDiceRollRequestResultJSON();
            assert(result != NULL);
            RCHandle<RandomNumberGeneratorDiceRollRequestResultJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraRandomNumberGeneratorDiceRollRequestResultAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(RandomNumberGeneratorRequestResultJSON *new_result)
          {
            handle_result((RandomNumberGeneratorDiceRollRequestResultJSON *)new_result);
          }
        void finish(RandomNumberGeneratorDiceRollRequestResultJSON *result)
          {
            if (fieldGeneratorValues.have_value)
              {
                result->initValues();
                size_t count = fieldGeneratorValues.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendValues(fieldGeneratorValues.value[num]);
                  }
                fieldGeneratorValues.value.clear();
                fieldGeneratorValues.have_value = false;
              }
            if (fieldGeneratorNumFaces.have_value)
              {
                result->setNumFaces(fieldGeneratorNumFaces.value);
                fieldGeneratorNumFaces.have_value = false;
              }
            else if (!(result->hasNumFaces()))
              {
                error("When parsing the object for %what%, the \"NumFaces\" field was missing.");
              }
            if (fieldGeneratorIsDnDStyle.have_value)
              {
                result->setIsDnDStyle(fieldGeneratorIsDnDStyle.value);
                fieldGeneratorIsDnDStyle.have_value = false;
              }
            else if (!(result->hasIsDnDStyle()))
              {
                error("When parsing the object for %what%, the \"IsDnDStyle\" field was missing.");
              }
            if (fieldGeneratorTotal.have_value)
              {
                result->setTotal(fieldGeneratorTotal.value);
                fieldGeneratorTotal.have_value = false;
              }
            if (fieldGeneratorModifier.have_value)
              {
                result->setModifier(fieldGeneratorModifier.value);
                fieldGeneratorModifier.have_value = false;
              }
            RandomNumberGeneratorRequestResultJSON::Generator::finish(result);
          }
        virtual void handle_result(RandomNumberGeneratorDiceRollRequestResultJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'I':
                    if (strcmp(&(field_name[1]), "sDnDStyle") == 0)
                        return &fieldGeneratorIsDnDStyle;
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "odifier") == 0)
                        return &fieldGeneratorModifier;
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "umFaces") == 0)
                        return &fieldGeneratorNumFaces;
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "otal") == 0)
                        return &fieldGeneratorTotal;
                    break;
                case 'V':
                    if (strcmp(&(field_name[1]), "alues") == 0)
                        return &fieldGeneratorValues;
                    break;
                default:
                    break;
              }
            return RandomNumberGeneratorRequestResultJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : RandomNumberGeneratorRequestResultJSON::Generator(ignore_extras), fieldGeneratorValues("field \"Values\" of the RandomNumberGeneratorDiceRollRequestResult class"), fieldGeneratorNumFaces("field \"NumFaces\" of the RandomNumberGeneratorDiceRollRequestResult class"), fieldGeneratorIsDnDStyle("field \"IsDnDStyle\" of the RandomNumberGeneratorDiceRollRequestResult class"), fieldGeneratorTotal("field \"Total\" of the RandomNumberGeneratorDiceRollRequestResult class"), fieldGeneratorModifier("field \"Modifier\" of the RandomNumberGeneratorDiceRollRequestResult class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the RandomNumberGeneratorDiceRollRequestResult class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorValues.reset();
            fieldGeneratorNumFaces.reset();
            fieldGeneratorIsDnDStyle.reset();
            fieldGeneratorTotal.reset();
            fieldGeneratorModifier.reset();
            RandomNumberGeneratorRequestResultJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* RANDOMNUMBERGENERATORDICEROLLREQUESTRESULTJSON_H */
