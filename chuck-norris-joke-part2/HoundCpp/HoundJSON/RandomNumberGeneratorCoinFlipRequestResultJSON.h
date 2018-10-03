/* file "RandomNumberGeneratorCoinFlipRequestResultJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef RANDOMNUMBERGENERATORCOINFLIPREQUESTRESULTJSON_H
#define RANDOMNUMBERGENERATORCOINFLIPREQUESTRESULTJSON_H

#pragma interface

#include "RandomNumberGeneratorRequestResultJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
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


class RandomNumberGeneratorCoinFlipRequestResultJSON : public RandomNumberGeneratorRequestResultJSON
  {
  public:
    enum TypeValues
      {
        Values_Heads,
        Values_Tails
      };

    static TypeValues  stringToValues(const char *chars);
    static const char * stringFromValues(TypeValues the_enum);
    class TypeValuesSummaryJSON : public ReferenceCounted
      {
      private:
        bool flagHasNumHeads;
        OInteger storeNumHeads;
        bool flagHasNumTails;
        OInteger storeNumTails;

        TypeValuesSummaryJSON(const TypeValuesSummaryJSON &);
        TypeValuesSummaryJSON & operator=(const TypeValuesSummaryJSON &other);

        void  fromJSONNumHeads(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONNumTails(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeValuesSummaryJSON(void);
        virtual ~TypeValuesSummaryJSON(void);
        bool  hasNumHeads(void) const;
        OInteger  getNumHeads(void);
        const OInteger  getNumHeads(void) const;
        bool  hasNumTails(void) const;
        OInteger  getNumTails(void);
        const OInteger  getNumTails(void) const;


        void setNumHeads(OInteger new_value)
          {
            flagHasNumHeads = true;
            if (new_value < 1)
                throw("The value for field NumHeads of TypeValuesSummaryJSON is less than the lower bound (1) for that field.");
            storeNumHeads = new_value;
          }
        void unsetNumHeads(void)
          {
            flagHasNumHeads = false;
          }
        void setNumTails(OInteger new_value)
          {
            flagHasNumTails = true;
            if (new_value < 1)
                throw("The value for field NumTails of TypeValuesSummaryJSON is less than the lower bound (1) for that field.");
            storeNumTails = new_value;
          }
        void unsetNumTails(void)
          {
            flagHasNumTails = false;
          }


        void write_as_json(JSONHandler *handler) const
          {
            handler->start_object();
            write_fields_as_json(handler);
            handler->finish_object();
          }

        virtual void write_fields_as_json(JSONHandler *handler) const
          {
            assert(flagHasNumHeads);
            handler->start_pair("NumHeads");
            handler->number_value(storeNumHeads.get_o_integer());
            assert(flagHasNumTails);
            handler->start_pair("NumTails");
            handler->number_value(storeNumTails.get_o_integer());
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasNumHeads()))
              {
                return "When parsing the object for %what%, the \"NumHeads\" field was missing.";
              }
            if (!(hasNumTails()))
              {
                return "When parsing the object for %what%, the \"NumTails\" field was missing.";
              }
            return NULL;
          }

        static TypeValuesSummaryJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeValuesSummaryJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeValuesSummaryJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeValuesSummaryJSON>, TypeValuesSummaryJSON *, bool> generator("Type TypeValuesSummary", ignore_extras);
                parse_json_value(text, "Text for TypeValuesSummaryJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeValuesSummaryJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeValuesSummaryJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeValuesSummaryJSON>, TypeValuesSummaryJSON *, bool> generator("Type TypeValuesSummary", ignore_extras);
                parse_json_value(fp, file_name, &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        class Generator : public JSONObjectGenerator
          {
          private:
            static char lowerBoundNumHeads[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundNumHeads>, OInteger, o_integer > fieldGeneratorNumHeads;
            static char lowerBoundNumTails[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundNumTails>, OInteger, o_integer > fieldGeneratorNumTails;


          protected:
            void start(void)
              {
              }
            JSONHandler *start_field(const char *field_name)
              {
                JSONHandler *result = start_known_field(field_name);
                if (result != NULL)
                    return result;
                std::string message("");
                message = message + "Field \"" + field_name + "\" found for a type that doesn't allow extra fields.";
                char *message_chars = (char *)(malloc(strlen(message.c_str()) + 1));
                strcpy(message_chars, message.c_str());
                throw(message_chars);
              }
            void finish_field(const char *field_name, JSONHandler *field_handler)
              {
              }
            void finish(void)
              {
                TypeValuesSummaryJSON *result = new TypeValuesSummaryJSON();
                assert(result != NULL);
                RCHandle<TypeValuesSummaryJSON> result_holder = result;
                finish(result);
                handle_result(result);
              }
            void finish(TypeValuesSummaryJSON *result)
              {
                if (fieldGeneratorNumHeads.have_value)
                  {
                    result->setNumHeads(fieldGeneratorNumHeads.value);
                    fieldGeneratorNumHeads.have_value = false;
                  }
                else if (!(result->hasNumHeads()))
                  {
                    error("When parsing the object for %what%, the \"NumHeads\" field was missing.");
                  }
                if (fieldGeneratorNumTails.have_value)
                  {
                    result->setNumTails(fieldGeneratorNumTails.value);
                    fieldGeneratorNumTails.have_value = false;
                  }
                else if (!(result->hasNumTails()))
                  {
                    error("When parsing the object for %what%, the \"NumTails\" field was missing.");
                  }
              }
            virtual void handle_result(TypeValuesSummaryJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strncmp(field_name, "Num", 3) == 0)
                  {
                    switch ((unsigned char)(field_name[3]))
                      {
                        case 'H':
                            if (strcmp(&(field_name[4]), "eads") == 0)
                                return &fieldGeneratorNumHeads;
                            break;
                        case 'T':
                            if (strcmp(&(field_name[4]), "ails") == 0)
                                return &fieldGeneratorNumTails;
                            break;
                        default:
                            break;
                      }
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorNumHeads("field \"NumHeads\" of the TypeValuesSummary class"), fieldGeneratorNumTails("field \"NumTails\" of the TypeValuesSummary class")
              {
                set_what("the TypeValuesSummary class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorNumHeads.reset();
                fieldGeneratorNumTails.reset();
                JSONObjectGenerator::reset();
              }
          };
      };

  private:
    bool flagHasValues;
    std::vector< TypeValues > storeValues;
    bool flagHasFromDiceOrNumbers;
    bool storeFromDiceOrNumbers;
    bool flagHasValuesSummary;
    TypeValuesSummaryJSON * storeValuesSummary;

    RandomNumberGeneratorCoinFlipRequestResultJSON(const RandomNumberGeneratorCoinFlipRequestResultJSON &);
    RandomNumberGeneratorCoinFlipRequestResultJSON & operator=(const RandomNumberGeneratorCoinFlipRequestResultJSON &other);

    JSONValue * extraValuesToJSON(void) const;
    JSONValue * extraFromDiceOrNumbersToJSON(void) const;
    JSONValue * extraValuesSummaryToJSON(void) const;

    void  fromJSONValues(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFromDiceOrNumbers(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONValuesSummary(JSONValue *json_value, bool ignore_extras = false);


  public:
    RandomNumberGeneratorCoinFlipRequestResultJSON(void);
    virtual ~RandomNumberGeneratorCoinFlipRequestResultJSON(void);
    const char * getRandomNumberRequestKind(void) const;
    bool  hasValues(void) const;
    size_t  countOfValues(void) const;
    TypeValues  elementOfValues(size_t element_num);
    const TypeValues  elementOfValues(size_t element_num) const;
    std::vector< TypeValues >  getValues(void);
    const std::vector< TypeValues >  getValues(void) const;
    bool  hasFromDiceOrNumbers(void) const;
    bool  getFromDiceOrNumbers(void);
    const bool  getFromDiceOrNumbers(void) const;
    bool  hasValuesSummary(void) const;
    TypeValuesSummaryJSON *  getValuesSummary(void);
    const TypeValuesSummaryJSON *  getValuesSummary(void) const;

    size_t extraRandomNumberGeneratorRequestResultComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasValues)
            ++result;
        if (flagHasFromDiceOrNumbers)
            ++result;
        if (flagHasValuesSummary)
            ++result;
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
        if (flagHasFromDiceOrNumbers)
          {
            if (remainder == 0)
                return "FromDiceOrNumbers";
            --remainder;
          }
        if (flagHasValuesSummary)
          {
            if (remainder == 0)
                return "ValuesSummary";
            --remainder;
          }
        assert(false);
        return NULL;
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
        if (flagHasFromDiceOrNumbers)
          {
            if (remainder == 0)
                return extraFromDiceOrNumbersToJSON();
            --remainder;
          }
        if (flagHasValuesSummary)
          {
            if (remainder == 0)
                return extraValuesSummaryToJSON();
            --remainder;
          }
        assert(false);
        return NULL;
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
        if (flagHasFromDiceOrNumbers)
          {
            if (remainder == 0)
                return extraFromDiceOrNumbersToJSON();
            --remainder;
          }
        if (flagHasValuesSummary)
          {
            if (remainder == 0)
                return extraValuesSummaryToJSON();
            --remainder;
          }
        assert(false);
        return NULL;
      }
    JSONValue *extraRandomNumberGeneratorRequestResultLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'F':
                if (strcmp(&(field_name[1]), "romDiceOrNumbers") == 0)
                    return (flagHasFromDiceOrNumbers ? extraFromDiceOrNumbersToJSON() : NULL);
                break;
            case 'V':
                if (strncmp(&(field_name[1]), "alues", 5) == 0)
                  {
                    switch ((unsigned char)(field_name[6]))
                      {
                        case 0:
                            return (flagHasValues ? extraValuesToJSON() : NULL);
                        case 'S':
                            if (strcmp(&(field_name[7]), "ummary") == 0)
                                return (flagHasValuesSummary ? extraValuesSummaryToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return NULL;
      }
    const JSONValue *extraRandomNumberGeneratorRequestResultLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'F':
                if (strcmp(&(field_name[1]), "romDiceOrNumbers") == 0)
                    return (flagHasFromDiceOrNumbers ? extraFromDiceOrNumbersToJSON() : NULL);
                break;
            case 'V':
                if (strncmp(&(field_name[1]), "alues", 5) == 0)
                  {
                    switch ((unsigned char)(field_name[6]))
                      {
                        case 0:
                            return (flagHasValues ? extraValuesToJSON() : NULL);
                        case 'S':
                            if (strcmp(&(field_name[7]), "ummary") == 0)
                                return (flagHasValuesSummary ? extraValuesSummaryToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return NULL;
      }

    void initValues(void)
      {
        flagHasValues = true;
        storeValues.clear();
      }
    void appendValues(TypeValues to_append)
      {
        if (!flagHasValues)
          {
            flagHasValues = true;
            storeValues.clear();
          }
        assert(flagHasValues);
        storeValues.push_back(to_append);
      }
    void appendValues(const char *chars)
      {
        appendValues(stringToValues(chars));
      }
    void appendValues(std::string the_string)
      {
        appendValues(stringToValues(the_string.c_str()));
      }
    void unsetValues(void)
      {
        flagHasValues = false;
        storeValues.clear();
      }
    void setFromDiceOrNumbers(bool new_value)
      {
        flagHasFromDiceOrNumbers = true;
        storeFromDiceOrNumbers = new_value;
      }
    void unsetFromDiceOrNumbers(void)
      {
        flagHasFromDiceOrNumbers = false;
      }
    void setValuesSummary(TypeValuesSummaryJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasValuesSummary)
          {
            storeValuesSummary->remove_reference();
          }
        flagHasValuesSummary = true;
        storeValuesSummary = new_value;
      }
    void unsetValuesSummary(void)
      {
        if (flagHasValuesSummary)
          {
            storeValuesSummary->remove_reference();
          }
        flagHasValuesSummary = false;
      }

    void extraRandomNumberGeneratorRequestResultAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'F':
                if (strcmp(&(key[1]), "romDiceOrNumbers") == 0)
                    {
                    fromJSONFromDiceOrNumbers(new_component, false);
                    return;
                    }
                break;
            case 'V':
                if (strncmp(&(key[1]), "alues", 5) == 0)
                  {
                    switch ((unsigned char)(key[6]))
                      {
                        case 0:
                            {
                            fromJSONValues(new_component, false);
                            return;
                            }
                        case 'S':
                            if (strcmp(&(key[7]), "ummary") == 0)
                                {
                                fromJSONValuesSummary(new_component, false);
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
      }
    void extraRandomNumberGeneratorRequestResultSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'F':
                if (strcmp(&(key[1]), "romDiceOrNumbers") == 0)
                    {
                    fromJSONFromDiceOrNumbers(new_component, false);
                    return;
                    }
                break;
            case 'V':
                if (strncmp(&(key[1]), "alues", 5) == 0)
                  {
                    switch ((unsigned char)(key[6]))
                      {
                        case 0:
                            {
                            fromJSONValues(new_component, false);
                            return;
                            }
                        case 'S':
                            if (strcmp(&(key[7]), "ummary") == 0)
                                {
                                fromJSONValuesSummary(new_component, false);
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
      }

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
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
                switch (storeValues[num1])
                  {
                    case Values_Heads:
                        handler->string_value("Heads");
                        break;
                    case Values_Tails:
                        handler->string_value("Tails");
                        break;
                    default:
                        assert(false);
                  }
              }
            handler->finish_array();
          }
        if (flagHasFromDiceOrNumbers)
          {
            handler->start_pair("FromDiceOrNumbers");
            handler->boolean_value(storeFromDiceOrNumbers);
          }
        if (flagHasValuesSummary)
          {
            handler->start_pair("ValuesSummary");
            storeValuesSummary->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static RandomNumberGeneratorCoinFlipRequestResultJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static RandomNumberGeneratorCoinFlipRequestResultJSON *from_text(const char *text, bool ignore_extras = false)
      {
        RandomNumberGeneratorCoinFlipRequestResultJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RandomNumberGeneratorCoinFlipRequestResultJSON>, RandomNumberGeneratorCoinFlipRequestResultJSON *, bool> generator("Type RandomNumberGeneratorCoinFlipRequestResult", ignore_extras);
            parse_json_value(text, "Text for RandomNumberGeneratorCoinFlipRequestResultJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static RandomNumberGeneratorCoinFlipRequestResultJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        RandomNumberGeneratorCoinFlipRequestResultJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RandomNumberGeneratorCoinFlipRequestResultJSON>, RandomNumberGeneratorCoinFlipRequestResultJSON *, bool> generator("Type RandomNumberGeneratorCoinFlipRequestResult", ignore_extras);
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
    class FieldGeneratorValues : public JSONStringGenerator
          {
          protected:
            FieldGeneratorValues(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorValues(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToValues(result));
              }
            virtual void handle_result(TypeValues result) = 0;
          };
        JSONHoldingArrayGenerator<FieldGeneratorValues, TypeValues, TypeValues > fieldGeneratorValues;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorFromDiceOrNumbers;
        JSONHoldingGenerator<TypeValuesSummaryJSON::Generator, RCHandle<TypeValuesSummaryJSON>, TypeValuesSummaryJSON *, bool > fieldGeneratorValuesSummary;


      protected:
        void start(void)
          {
          }
        JSONHandler *start_field(const char *field_name)
          {
            JSONHandler *result = start_known_field(field_name);
            if (result != NULL)
                return result;
            std::string message("");
            message = message + "Field \"" + field_name + "\" found for a type that doesn't allow extra fields.";
            char *message_chars = (char *)(malloc(strlen(message.c_str()) + 1));
            strcpy(message_chars, message.c_str());
            throw(message_chars);
          }
        void finish_field(const char *field_name, JSONHandler *field_handler)
          {
          }
        void finish(void)
          {
            if (!(strcmp(getRandomNumberGeneratorRequestResultJSONKey().c_str(), "CoinFlipRequest") == 0))
                throw("The key field has a value other than `CoinFlipRequest'.");
            RandomNumberGeneratorCoinFlipRequestResultJSON *result = new RandomNumberGeneratorCoinFlipRequestResultJSON();
            assert(result != NULL);
            RCHandle<RandomNumberGeneratorCoinFlipRequestResultJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void handle_result(RandomNumberGeneratorRequestResultJSON *new_result)
          {
            handle_result((RandomNumberGeneratorCoinFlipRequestResultJSON *)new_result);
          }
        void finish(RandomNumberGeneratorCoinFlipRequestResultJSON *result)
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
            if (fieldGeneratorFromDiceOrNumbers.have_value)
              {
                result->setFromDiceOrNumbers(fieldGeneratorFromDiceOrNumbers.value);
                fieldGeneratorFromDiceOrNumbers.have_value = false;
              }
            if (fieldGeneratorValuesSummary.have_value)
              {
                result->setValuesSummary(fieldGeneratorValuesSummary.value.referenced());
                fieldGeneratorValuesSummary.have_value = false;
              }
            RandomNumberGeneratorRequestResultJSON::Generator::finish(result);
          }
        virtual void handle_result(RandomNumberGeneratorCoinFlipRequestResultJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'F':
                    if (strcmp(&(field_name[1]), "romDiceOrNumbers") == 0)
                        return &fieldGeneratorFromDiceOrNumbers;
                    break;
                case 'V':
                    if (strncmp(&(field_name[1]), "alues", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 0:
                                return &fieldGeneratorValues;
                            case 'S':
                                if (strcmp(&(field_name[7]), "ummary") == 0)
                                    return &fieldGeneratorValuesSummary;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return RandomNumberGeneratorRequestResultJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : RandomNumberGeneratorRequestResultJSON::Generator(ignore_extras), fieldGeneratorValues("field \"Values\" of the RandomNumberGeneratorCoinFlipRequestResult class"), fieldGeneratorFromDiceOrNumbers("field \"FromDiceOrNumbers\" of the RandomNumberGeneratorCoinFlipRequestResult class"), fieldGeneratorValuesSummary("field \"ValuesSummary\" of the RandomNumberGeneratorCoinFlipRequestResult class", ignore_extras)
          {
            set_what("the RandomNumberGeneratorCoinFlipRequestResult class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorValues.reset();
            fieldGeneratorFromDiceOrNumbers.reset();
            fieldGeneratorValuesSummary.reset();
            RandomNumberGeneratorRequestResultJSON::Generator::reset();
          }
      };
  };

#endif /* RANDOMNUMBERGENERATORCOINFLIPREQUESTRESULTJSON_H */
