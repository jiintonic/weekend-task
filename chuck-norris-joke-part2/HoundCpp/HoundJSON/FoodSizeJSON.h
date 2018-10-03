/* file "FoodSizeJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FOODSIZEJSON_H
#define FOODSIZEJSON_H

#pragma interface

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


class FoodSizeJSON : public ReferenceCounted
  {
  private:
    bool flagHasWrittenSing;
    std::string storeWrittenSing;
    bool flagHasWrittenPlur;
    std::string storeWrittenPlur;
    bool flagHasSpokenSizeAndFoodSing;
    std::string storeSpokenSizeAndFoodSing;
    bool flagHasSpokenSizeAndFoodPlur;
    std::string storeSpokenSizeAndFoodPlur;
    bool flagHasGrams;
    double storeGrams;
    std::string textStoreGrams;

    FoodSizeJSON(const FoodSizeJSON &);
    FoodSizeJSON & operator=(const FoodSizeJSON &other);

    void  fromJSONWrittenSing(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWrittenPlur(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenSizeAndFoodSing(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenSizeAndFoodPlur(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGrams(JSONValue *json_value, bool ignore_extras = false);


  public:
    FoodSizeJSON(void);
    virtual ~FoodSizeJSON(void);
    bool  hasWrittenSing(void) const;
    std::string  getWrittenSing(void);
    const std::string  getWrittenSing(void) const;
    bool  hasWrittenPlur(void) const;
    std::string  getWrittenPlur(void);
    const std::string  getWrittenPlur(void) const;
    bool  hasSpokenSizeAndFoodSing(void) const;
    std::string  getSpokenSizeAndFoodSing(void);
    const std::string  getSpokenSizeAndFoodSing(void) const;
    bool  hasSpokenSizeAndFoodPlur(void) const;
    std::string  getSpokenSizeAndFoodPlur(void);
    const std::string  getSpokenSizeAndFoodPlur(void) const;
    bool  hasGrams(void) const;
    double  getGrams(void);
    const double  getGrams(void) const;
    std::string  getGramsAsText(void) const;


    void setWrittenSing(std::string new_value)
      {
        flagHasWrittenSing = true;
        storeWrittenSing = new_value;
      }
    void unsetWrittenSing(void)
      {
        flagHasWrittenSing = false;
      }
    void setWrittenPlur(std::string new_value)
      {
        flagHasWrittenPlur = true;
        storeWrittenPlur = new_value;
      }
    void unsetWrittenPlur(void)
      {
        flagHasWrittenPlur = false;
      }
    void setSpokenSizeAndFoodSing(std::string new_value)
      {
        flagHasSpokenSizeAndFoodSing = true;
        storeSpokenSizeAndFoodSing = new_value;
      }
    void unsetSpokenSizeAndFoodSing(void)
      {
        flagHasSpokenSizeAndFoodSing = false;
      }
    void setSpokenSizeAndFoodPlur(std::string new_value)
      {
        flagHasSpokenSizeAndFoodPlur = true;
        storeSpokenSizeAndFoodPlur = new_value;
      }
    void unsetSpokenSizeAndFoodPlur(void)
      {
        flagHasSpokenSizeAndFoodPlur = false;
      }
    void setGrams(double new_value)
      {
        flagHasGrams = true;
        if (new_value < 0)
            throw("The value for field Grams of FoodSizeJSON is less than the lower bound (0) for that field.");
        storeGrams = new_value;
        textStoreGrams = "";
      }
    void setGramsText(std::string new_value)
      {
        flagHasGrams = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Grams of FoodSizeJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field Grams of FoodSizeJSON is less than the lower bound (0) for that field.");
        textStoreGrams = new_value;
      }
    void unsetGrams(void)
      {
        flagHasGrams = false;
      }


    void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        assert(flagHasWrittenSing);
        handler->start_pair("WrittenSing");
        handler->string_value(storeWrittenSing);
        assert(flagHasWrittenPlur);
        handler->start_pair("WrittenPlur");
        handler->string_value(storeWrittenPlur);
        assert(flagHasSpokenSizeAndFoodSing);
        handler->start_pair("SpokenSizeAndFoodSing");
        handler->string_value(storeSpokenSizeAndFoodSing);
        assert(flagHasSpokenSizeAndFoodPlur);
        handler->start_pair("SpokenSizeAndFoodPlur");
        handler->string_value(storeSpokenSizeAndFoodPlur);
        assert(flagHasGrams);
        handler->start_pair("Grams");
        if (textStoreGrams != "")
            handler->number_value(textStoreGrams.c_str());
        else if (((double)(long int)storeGrams) == storeGrams)
            handler->number_value((long int)storeGrams);
        else
            handler->number_value(storeGrams);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasWrittenSing()))
          {
            return "When parsing the object for %what%, the \"WrittenSing\" field was missing.";
          }
        if (!(hasWrittenPlur()))
          {
            return "When parsing the object for %what%, the \"WrittenPlur\" field was missing.";
          }
        if (!(hasSpokenSizeAndFoodSing()))
          {
            return "When parsing the object for %what%, the \"SpokenSizeAndFoodSing\" field was missing.";
          }
        if (!(hasSpokenSizeAndFoodPlur()))
          {
            return "When parsing the object for %what%, the \"SpokenSizeAndFoodPlur\" field was missing.";
          }
        if (!(hasGrams()))
          {
            return "When parsing the object for %what%, the \"Grams\" field was missing.";
          }
        return NULL;
      }

    static FoodSizeJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FoodSizeJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FoodSizeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FoodSizeJSON>, FoodSizeJSON *, bool> generator("Type FoodSize", ignore_extras);
            parse_json_value(text, "Text for FoodSizeJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FoodSizeJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FoodSizeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FoodSizeJSON>, FoodSizeJSON *, bool> generator("Type FoodSize", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWrittenSing;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWrittenPlur;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenSizeAndFoodSing;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenSizeAndFoodPlur;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorGrams;


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
            FoodSizeJSON *result = new FoodSizeJSON();
            assert(result != NULL);
            RCHandle<FoodSizeJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(FoodSizeJSON *result)
          {
            if (fieldGeneratorWrittenSing.have_value)
              {
                result->setWrittenSing(fieldGeneratorWrittenSing.value);
                fieldGeneratorWrittenSing.have_value = false;
              }
            else if (!(result->hasWrittenSing()))
              {
                error("When parsing the object for %what%, the \"WrittenSing\" field was missing.");
              }
            if (fieldGeneratorWrittenPlur.have_value)
              {
                result->setWrittenPlur(fieldGeneratorWrittenPlur.value);
                fieldGeneratorWrittenPlur.have_value = false;
              }
            else if (!(result->hasWrittenPlur()))
              {
                error("When parsing the object for %what%, the \"WrittenPlur\" field was missing.");
              }
            if (fieldGeneratorSpokenSizeAndFoodSing.have_value)
              {
                result->setSpokenSizeAndFoodSing(fieldGeneratorSpokenSizeAndFoodSing.value);
                fieldGeneratorSpokenSizeAndFoodSing.have_value = false;
              }
            else if (!(result->hasSpokenSizeAndFoodSing()))
              {
                error("When parsing the object for %what%, the \"SpokenSizeAndFoodSing\" field was missing.");
              }
            if (fieldGeneratorSpokenSizeAndFoodPlur.have_value)
              {
                result->setSpokenSizeAndFoodPlur(fieldGeneratorSpokenSizeAndFoodPlur.value);
                fieldGeneratorSpokenSizeAndFoodPlur.have_value = false;
              }
            else if (!(result->hasSpokenSizeAndFoodPlur()))
              {
                error("When parsing the object for %what%, the \"SpokenSizeAndFoodPlur\" field was missing.");
              }
            if (fieldGeneratorGrams.have_value)
              {
                result->setGramsText(fieldGeneratorGrams.value);
                fieldGeneratorGrams.have_value = false;
              }
            else if (!(result->hasGrams()))
              {
                error("When parsing the object for %what%, the \"Grams\" field was missing.");
              }
          }
        virtual void handle_result(FoodSizeJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'G':
                    if (strcmp(&(field_name[1]), "rams") == 0)
                        return &fieldGeneratorGrams;
                    break;
                case 'S':
                    if (strncmp(&(field_name[1]), "pokenSizeAndFood", 16) == 0)
                      {
                        switch ((unsigned char)(field_name[17]))
                          {
                            case 'P':
                                if (strcmp(&(field_name[18]), "lur") == 0)
                                    return &fieldGeneratorSpokenSizeAndFoodPlur;
                                break;
                            case 'S':
                                if (strcmp(&(field_name[18]), "ing") == 0)
                                    return &fieldGeneratorSpokenSizeAndFoodSing;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'W':
                    if (strncmp(&(field_name[1]), "ritten", 6) == 0)
                      {
                        switch ((unsigned char)(field_name[7]))
                          {
                            case 'P':
                                if (strcmp(&(field_name[8]), "lur") == 0)
                                    return &fieldGeneratorWrittenPlur;
                                break;
                            case 'S':
                                if (strcmp(&(field_name[8]), "ing") == 0)
                                    return &fieldGeneratorWrittenSing;
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

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorWrittenSing("field \"WrittenSing\" of the FoodSize class"), fieldGeneratorWrittenPlur("field \"WrittenPlur\" of the FoodSize class"), fieldGeneratorSpokenSizeAndFoodSing("field \"SpokenSizeAndFoodSing\" of the FoodSize class"), fieldGeneratorSpokenSizeAndFoodPlur("field \"SpokenSizeAndFoodPlur\" of the FoodSize class"), fieldGeneratorGrams("field \"Grams\" of the FoodSize class")
          {
            set_what("the FoodSize class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorWrittenSing.reset();
            fieldGeneratorWrittenPlur.reset();
            fieldGeneratorSpokenSizeAndFoodSing.reset();
            fieldGeneratorSpokenSizeAndFoodPlur.reset();
            fieldGeneratorGrams.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* FOODSIZEJSON_H */
