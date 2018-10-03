/* file "FoodJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FOODJSON_H
#define FOODJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONObjectValueGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include "OInteger.h"
#include "FoodSizeJSON.h"
#include "NutrientJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class FoodJSON : public ReferenceCounted
  {
  private:
    bool flagHasID;
    OInteger storeID;
    bool flagHasQuantity;
    double storeQuantity;
    std::string textStoreQuantity;
    bool flagHasNDB_No;
    std::string storeNDB_No;
    bool flagHasSizeIndex;
    OInteger storeSizeIndex;
    bool flagHasNameIncludesUnits;
    bool storeNameIncludesUnits;
    bool flagHasExclude;
    bool storeExclude;
    bool flagHasSpokenNoSize;
    std::string storeSpokenNoSize;
    bool flagHasWrittenNoSize;
    std::string storeWrittenNoSize;
    bool flagHasWikiUrl;
    std::string storeWikiUrl;
    bool flagHasImageUrl;
    std::string storeImageUrl;
    bool flagHasAllSizes;
    std::vector< FoodSizeJSON * > storeAllSizes;
    bool flagHasNutrients;
    std::vector< NutrientJSON * > storeNutrients;
    bool flagHasNutrientNameToID;
    JSONObjectValue * storeNutrientNameToID;

    FoodJSON(const FoodJSON &);
    FoodJSON & operator=(const FoodJSON &other);

    void  fromJSONID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONQuantity(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNDB_No(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSizeIndex(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNameIncludesUnits(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONExclude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenNoSize(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWrittenNoSize(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWikiUrl(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONImageUrl(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAllSizes(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNutrients(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNutrientNameToID(JSONValue *json_value, bool ignore_extras = false);


  public:
    FoodJSON(void);
    virtual ~FoodJSON(void);
    bool  hasID(void) const;
    OInteger  getID(void);
    const OInteger  getID(void) const;
    bool  hasQuantity(void) const;
    double  getQuantity(void);
    const double  getQuantity(void) const;
    std::string  getQuantityAsText(void) const;
    bool  hasNDB_No(void) const;
    std::string  getNDB_No(void);
    const std::string  getNDB_No(void) const;
    bool  hasSizeIndex(void) const;
    OInteger  getSizeIndex(void);
    const OInteger  getSizeIndex(void) const;
    bool  hasNameIncludesUnits(void) const;
    bool  getNameIncludesUnits(void);
    const bool  getNameIncludesUnits(void) const;
    bool  hasExclude(void) const;
    bool  getExclude(void);
    const bool  getExclude(void) const;
    bool  hasSpokenNoSize(void) const;
    std::string  getSpokenNoSize(void);
    const std::string  getSpokenNoSize(void) const;
    bool  hasWrittenNoSize(void) const;
    std::string  getWrittenNoSize(void);
    const std::string  getWrittenNoSize(void) const;
    bool  hasWikiUrl(void) const;
    std::string  getWikiUrl(void);
    const std::string  getWikiUrl(void) const;
    bool  hasImageUrl(void) const;
    std::string  getImageUrl(void);
    const std::string  getImageUrl(void) const;
    bool  hasAllSizes(void) const;
    size_t  countOfAllSizes(void) const;
    FoodSizeJSON *  elementOfAllSizes(size_t element_num);
    const FoodSizeJSON *  elementOfAllSizes(size_t element_num) const;
    std::vector< FoodSizeJSON * >  getAllSizes(void);
    const std::vector< FoodSizeJSON * >  getAllSizes(void) const;
    bool  hasNutrients(void) const;
    size_t  countOfNutrients(void) const;
    NutrientJSON *  elementOfNutrients(size_t element_num);
    const NutrientJSON *  elementOfNutrients(size_t element_num) const;
    std::vector< NutrientJSON * >  getNutrients(void);
    const std::vector< NutrientJSON * >  getNutrients(void) const;
    bool  hasNutrientNameToID(void) const;
    JSONObjectValue *  getNutrientNameToID(void);
    const JSONObjectValue *  getNutrientNameToID(void) const;


    void setID(OInteger new_value)
      {
        flagHasID = true;
        if (new_value < -1)
            throw("The value for field ID of FoodJSON is less than the lower bound (-1) for that field.");
        storeID = new_value;
      }
    void unsetID(void)
      {
        flagHasID = false;
      }
    void setQuantity(double new_value)
      {
        flagHasQuantity = true;
        if (new_value < 0)
            throw("The value for field Quantity of FoodJSON is less than the lower bound (0) for that field.");
        storeQuantity = new_value;
        textStoreQuantity = "";
      }
    void setQuantityText(std::string new_value)
      {
        flagHasQuantity = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Quantity of FoodJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field Quantity of FoodJSON is less than the lower bound (0) for that field.");
        textStoreQuantity = new_value;
      }
    void unsetQuantity(void)
      {
        flagHasQuantity = false;
      }
    void setNDB_No(std::string new_value)
      {
        flagHasNDB_No = true;
        storeNDB_No = new_value;
      }
    void unsetNDB_No(void)
      {
        flagHasNDB_No = false;
      }
    void setSizeIndex(OInteger new_value)
      {
        flagHasSizeIndex = true;
        if (new_value < -1)
            throw("The value for field SizeIndex of FoodJSON is less than the lower bound (-1) for that field.");
        storeSizeIndex = new_value;
      }
    void unsetSizeIndex(void)
      {
        flagHasSizeIndex = false;
      }
    void setNameIncludesUnits(bool new_value)
      {
        flagHasNameIncludesUnits = true;
        storeNameIncludesUnits = new_value;
      }
    void unsetNameIncludesUnits(void)
      {
        flagHasNameIncludesUnits = false;
      }
    void setExclude(bool new_value)
      {
        flagHasExclude = true;
        storeExclude = new_value;
      }
    void unsetExclude(void)
      {
        flagHasExclude = false;
      }
    void setSpokenNoSize(std::string new_value)
      {
        flagHasSpokenNoSize = true;
        storeSpokenNoSize = new_value;
      }
    void unsetSpokenNoSize(void)
      {
        flagHasSpokenNoSize = false;
      }
    void setWrittenNoSize(std::string new_value)
      {
        flagHasWrittenNoSize = true;
        storeWrittenNoSize = new_value;
      }
    void unsetWrittenNoSize(void)
      {
        flagHasWrittenNoSize = false;
      }
    void setWikiUrl(std::string new_value)
      {
        flagHasWikiUrl = true;
        storeWikiUrl = new_value;
      }
    void unsetWikiUrl(void)
      {
        flagHasWikiUrl = false;
      }
    void setImageUrl(std::string new_value)
      {
        flagHasImageUrl = true;
        storeImageUrl = new_value;
      }
    void unsetImageUrl(void)
      {
        flagHasImageUrl = false;
      }
    void initAllSizes(void)
      {
        if (flagHasAllSizes)
          {
            for (size_t num3 = 0; num3 < storeAllSizes.size(); ++num3)
              {
                storeAllSizes[num3]->remove_reference();
              }
          }
        flagHasAllSizes = true;
        storeAllSizes.clear();
      }
    void appendAllSizes(FoodSizeJSON * to_append)
      {
        if (!flagHasAllSizes)
          {
            flagHasAllSizes = true;
            storeAllSizes.clear();
          }
        assert(flagHasAllSizes);
        to_append->add_reference();
        storeAllSizes.push_back(to_append);
      }
    void unsetAllSizes(void)
      {
        if (flagHasAllSizes)
          {
            for (size_t num4 = 0; num4 < storeAllSizes.size(); ++num4)
              {
                storeAllSizes[num4]->remove_reference();
              }
          }
        flagHasAllSizes = false;
        storeAllSizes.clear();
      }
    void initNutrients(void)
      {
        if (flagHasNutrients)
          {
            for (size_t num5 = 0; num5 < storeNutrients.size(); ++num5)
              {
                storeNutrients[num5]->remove_reference();
              }
          }
        flagHasNutrients = true;
        storeNutrients.clear();
      }
    void appendNutrients(NutrientJSON * to_append)
      {
        if (!flagHasNutrients)
          {
            flagHasNutrients = true;
            storeNutrients.clear();
          }
        assert(flagHasNutrients);
        to_append->add_reference();
        storeNutrients.push_back(to_append);
      }
    void unsetNutrients(void)
      {
        if (flagHasNutrients)
          {
            for (size_t num6 = 0; num6 < storeNutrients.size(); ++num6)
              {
                storeNutrients[num6]->remove_reference();
              }
          }
        flagHasNutrients = false;
        storeNutrients.clear();
      }
    void setNutrientNameToID(JSONObjectValue * new_value)
      {
        new_value->add_reference();
        if (flagHasNutrientNameToID)
          {
            storeNutrientNameToID->remove_reference();
          }
        flagHasNutrientNameToID = true;
        storeNutrientNameToID = new_value;
      }
    void unsetNutrientNameToID(void)
      {
        if (flagHasNutrientNameToID)
          {
            storeNutrientNameToID->remove_reference();
          }
        flagHasNutrientNameToID = false;
      }


    void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        assert(flagHasID);
        handler->start_pair("ID");
        handler->number_value(storeID.get_o_integer());
        assert(flagHasQuantity);
        handler->start_pair("Quantity");
        if (textStoreQuantity != "")
            handler->number_value(textStoreQuantity.c_str());
        else if (((double)(long int)storeQuantity) == storeQuantity)
            handler->number_value((long int)storeQuantity);
        else
            handler->number_value(storeQuantity);
        assert(flagHasNDB_No);
        handler->start_pair("NDB_No");
        handler->string_value(storeNDB_No);
        assert(flagHasSizeIndex);
        handler->start_pair("SizeIndex");
        handler->number_value(storeSizeIndex.get_o_integer());
        assert(flagHasNameIncludesUnits);
        handler->start_pair("NameIncludesUnits");
        handler->boolean_value(storeNameIncludesUnits);
        assert(flagHasExclude);
        handler->start_pair("Exclude");
        handler->boolean_value(storeExclude);
        assert(flagHasSpokenNoSize);
        handler->start_pair("SpokenNoSize");
        handler->string_value(storeSpokenNoSize);
        assert(flagHasWrittenNoSize);
        handler->start_pair("WrittenNoSize");
        handler->string_value(storeWrittenNoSize);
        assert(flagHasWikiUrl);
        handler->start_pair("WikiUrl");
        handler->string_value(storeWikiUrl);
        assert(flagHasImageUrl);
        handler->start_pair("ImageUrl");
        handler->string_value(storeImageUrl);
        assert(flagHasAllSizes);
        handler->start_pair("AllSizes");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeAllSizes.size(); ++num1)
          {
            storeAllSizes[num1]->write_as_json(handler);
          }
        handler->finish_array();
        assert(flagHasNutrients);
        handler->start_pair("Nutrients");
        handler->start_array();
        for (size_t num2 = 0; num2 < storeNutrients.size(); ++num2)
          {
            storeNutrients[num2]->write_as_json(handler);
          }
        handler->finish_array();
        assert(flagHasNutrientNameToID);
        handler->start_pair("NutrientNameToID");
        storeNutrientNameToID->write(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasID()))
          {
            return "When parsing the object for %what%, the \"ID\" field was missing.";
          }
        if (!(hasQuantity()))
          {
            return "When parsing the object for %what%, the \"Quantity\" field was missing.";
          }
        if (!(hasNDB_No()))
          {
            return "When parsing the object for %what%, the \"NDB_No\" field was missing.";
          }
        if (!(hasSizeIndex()))
          {
            return "When parsing the object for %what%, the \"SizeIndex\" field was missing.";
          }
        if (!(hasNameIncludesUnits()))
          {
            return "When parsing the object for %what%, the \"NameIncludesUnits\" field was missing.";
          }
        if (!(hasExclude()))
          {
            return "When parsing the object for %what%, the \"Exclude\" field was missing.";
          }
        if (!(hasSpokenNoSize()))
          {
            return "When parsing the object for %what%, the \"SpokenNoSize\" field was missing.";
          }
        if (!(hasWrittenNoSize()))
          {
            return "When parsing the object for %what%, the \"WrittenNoSize\" field was missing.";
          }
        if (!(hasWikiUrl()))
          {
            return "When parsing the object for %what%, the \"WikiUrl\" field was missing.";
          }
        if (!(hasImageUrl()))
          {
            return "When parsing the object for %what%, the \"ImageUrl\" field was missing.";
          }
        if (!(hasAllSizes()))
          {
            return "When parsing the object for %what%, the \"AllSizes\" field was missing.";
          }
        if (!(hasNutrients()))
          {
            return "When parsing the object for %what%, the \"Nutrients\" field was missing.";
          }
        if (!(hasNutrientNameToID()))
          {
            return "When parsing the object for %what%, the \"NutrientNameToID\" field was missing.";
          }
        return NULL;
      }

    static FoodJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FoodJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FoodJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FoodJSON>, FoodJSON *, bool> generator("Type Food", ignore_extras);
            parse_json_value(text, "Text for FoodJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FoodJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FoodJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FoodJSON>, FoodJSON *, bool> generator("Type Food", ignore_extras);
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
        static char lowerBoundID[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundID>, OInteger, o_integer > fieldGeneratorID;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorQuantity;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorNDB_No;
        static char lowerBoundSizeIndex[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundSizeIndex>, OInteger, o_integer > fieldGeneratorSizeIndex;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorNameIncludesUnits;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorExclude;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenNoSize;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWrittenNoSize;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWikiUrl;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorImageUrl;
        JSONHoldingArrayGenerator<FoodSizeJSON::Generator, RCHandle<FoodSizeJSON>, FoodSizeJSON *, bool > fieldGeneratorAllSizes;
        JSONHoldingArrayGenerator<NutrientJSON::Generator, RCHandle<NutrientJSON>, NutrientJSON *, bool > fieldGeneratorNutrients;
        JSONHoldingGenerator<JSONObjectValueGenerator, RCHandle<JSONObjectValue>, JSONObjectValue * > fieldGeneratorNutrientNameToID;


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
            FoodJSON *result = new FoodJSON();
            assert(result != NULL);
            RCHandle<FoodJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(FoodJSON *result)
          {
            if (fieldGeneratorID.have_value)
              {
                result->setID(fieldGeneratorID.value);
                fieldGeneratorID.have_value = false;
              }
            else if (!(result->hasID()))
              {
                error("When parsing the object for %what%, the \"ID\" field was missing.");
              }
            if (fieldGeneratorQuantity.have_value)
              {
                result->setQuantityText(fieldGeneratorQuantity.value);
                fieldGeneratorQuantity.have_value = false;
              }
            else if (!(result->hasQuantity()))
              {
                error("When parsing the object for %what%, the \"Quantity\" field was missing.");
              }
            if (fieldGeneratorNDB_No.have_value)
              {
                result->setNDB_No(fieldGeneratorNDB_No.value);
                fieldGeneratorNDB_No.have_value = false;
              }
            else if (!(result->hasNDB_No()))
              {
                error("When parsing the object for %what%, the \"NDB_No\" field was missing.");
              }
            if (fieldGeneratorSizeIndex.have_value)
              {
                result->setSizeIndex(fieldGeneratorSizeIndex.value);
                fieldGeneratorSizeIndex.have_value = false;
              }
            else if (!(result->hasSizeIndex()))
              {
                error("When parsing the object for %what%, the \"SizeIndex\" field was missing.");
              }
            if (fieldGeneratorNameIncludesUnits.have_value)
              {
                result->setNameIncludesUnits(fieldGeneratorNameIncludesUnits.value);
                fieldGeneratorNameIncludesUnits.have_value = false;
              }
            else if (!(result->hasNameIncludesUnits()))
              {
                error("When parsing the object for %what%, the \"NameIncludesUnits\" field was missing.");
              }
            if (fieldGeneratorExclude.have_value)
              {
                result->setExclude(fieldGeneratorExclude.value);
                fieldGeneratorExclude.have_value = false;
              }
            else if (!(result->hasExclude()))
              {
                error("When parsing the object for %what%, the \"Exclude\" field was missing.");
              }
            if (fieldGeneratorSpokenNoSize.have_value)
              {
                result->setSpokenNoSize(fieldGeneratorSpokenNoSize.value);
                fieldGeneratorSpokenNoSize.have_value = false;
              }
            else if (!(result->hasSpokenNoSize()))
              {
                error("When parsing the object for %what%, the \"SpokenNoSize\" field was missing.");
              }
            if (fieldGeneratorWrittenNoSize.have_value)
              {
                result->setWrittenNoSize(fieldGeneratorWrittenNoSize.value);
                fieldGeneratorWrittenNoSize.have_value = false;
              }
            else if (!(result->hasWrittenNoSize()))
              {
                error("When parsing the object for %what%, the \"WrittenNoSize\" field was missing.");
              }
            if (fieldGeneratorWikiUrl.have_value)
              {
                result->setWikiUrl(fieldGeneratorWikiUrl.value);
                fieldGeneratorWikiUrl.have_value = false;
              }
            else if (!(result->hasWikiUrl()))
              {
                error("When parsing the object for %what%, the \"WikiUrl\" field was missing.");
              }
            if (fieldGeneratorImageUrl.have_value)
              {
                result->setImageUrl(fieldGeneratorImageUrl.value);
                fieldGeneratorImageUrl.have_value = false;
              }
            else if (!(result->hasImageUrl()))
              {
                error("When parsing the object for %what%, the \"ImageUrl\" field was missing.");
              }
            if (fieldGeneratorAllSizes.have_value)
              {
                result->initAllSizes();
                size_t count = fieldGeneratorAllSizes.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAllSizes(fieldGeneratorAllSizes.value[num].referenced());
                  }
                fieldGeneratorAllSizes.value.clear();
                fieldGeneratorAllSizes.have_value = false;
              }
            else if (!(result->hasAllSizes()))
              {
                error("When parsing the object for %what%, the \"AllSizes\" field was missing.");
              }
            if (fieldGeneratorNutrients.have_value)
              {
                result->initNutrients();
                size_t count = fieldGeneratorNutrients.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendNutrients(fieldGeneratorNutrients.value[num].referenced());
                  }
                fieldGeneratorNutrients.value.clear();
                fieldGeneratorNutrients.have_value = false;
              }
            else if (!(result->hasNutrients()))
              {
                error("When parsing the object for %what%, the \"Nutrients\" field was missing.");
              }
            if (fieldGeneratorNutrientNameToID.have_value)
              {
                result->setNutrientNameToID(fieldGeneratorNutrientNameToID.value.referenced());
                fieldGeneratorNutrientNameToID.have_value = false;
              }
            else if (!(result->hasNutrientNameToID()))
              {
                error("When parsing the object for %what%, the \"NutrientNameToID\" field was missing.");
              }
          }
        virtual void handle_result(FoodJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "llSizes") == 0)
                        return &fieldGeneratorAllSizes;
                    break;
                case 'E':
                    if (strcmp(&(field_name[1]), "xclude") == 0)
                        return &fieldGeneratorExclude;
                    break;
                case 'I':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'D':
                            if (field_name[2] == 0)
                                return &fieldGeneratorID;
                            break;
                        case 'm':
                            if (strcmp(&(field_name[2]), "ageUrl") == 0)
                                return &fieldGeneratorImageUrl;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'N':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'D':
                            if (strcmp(&(field_name[2]), "B_No") == 0)
                                return &fieldGeneratorNDB_No;
                            break;
                        case 'a':
                            if (strcmp(&(field_name[2]), "meIncludesUnits") == 0)
                                return &fieldGeneratorNameIncludesUnits;
                            break;
                        case 'u':
                            if (strncmp(&(field_name[2]), "trient", 6) == 0)
                              {
                                switch ((unsigned char)(field_name[8]))
                                  {
                                    case 'N':
                                        if (strcmp(&(field_name[9]), "ameToID") == 0)
                                            return &fieldGeneratorNutrientNameToID;
                                        break;
                                    case 's':
                                        if (field_name[9] == 0)
                                            return &fieldGeneratorNutrients;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'Q':
                    if (strcmp(&(field_name[1]), "uantity") == 0)
                        return &fieldGeneratorQuantity;
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'i':
                            if (strcmp(&(field_name[2]), "zeIndex") == 0)
                                return &fieldGeneratorSizeIndex;
                            break;
                        case 'p':
                            if (strcmp(&(field_name[2]), "okenNoSize") == 0)
                                return &fieldGeneratorSpokenNoSize;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'W':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'i':
                            if (strcmp(&(field_name[2]), "kiUrl") == 0)
                                return &fieldGeneratorWikiUrl;
                            break;
                        case 'r':
                            if (strcmp(&(field_name[2]), "ittenNoSize") == 0)
                                return &fieldGeneratorWrittenNoSize;
                            break;
                        default:
                            break;
                      }
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorID("field \"ID\" of the Food class"), fieldGeneratorQuantity("field \"Quantity\" of the Food class"), fieldGeneratorNDB_No("field \"NDB_No\" of the Food class"), fieldGeneratorSizeIndex("field \"SizeIndex\" of the Food class"), fieldGeneratorNameIncludesUnits("field \"NameIncludesUnits\" of the Food class"), fieldGeneratorExclude("field \"Exclude\" of the Food class"), fieldGeneratorSpokenNoSize("field \"SpokenNoSize\" of the Food class"), fieldGeneratorWrittenNoSize("field \"WrittenNoSize\" of the Food class"), fieldGeneratorWikiUrl("field \"WikiUrl\" of the Food class"), fieldGeneratorImageUrl("field \"ImageUrl\" of the Food class"), fieldGeneratorAllSizes("field \"AllSizes\" of the Food class", ignore_extras), fieldGeneratorNutrients("field \"Nutrients\" of the Food class", ignore_extras), fieldGeneratorNutrientNameToID("field \"NutrientNameToID\" of the Food class")
          {
            set_what("the Food class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorID.reset();
            fieldGeneratorQuantity.reset();
            fieldGeneratorNDB_No.reset();
            fieldGeneratorSizeIndex.reset();
            fieldGeneratorNameIncludesUnits.reset();
            fieldGeneratorExclude.reset();
            fieldGeneratorSpokenNoSize.reset();
            fieldGeneratorWrittenNoSize.reset();
            fieldGeneratorWikiUrl.reset();
            fieldGeneratorImageUrl.reset();
            fieldGeneratorAllSizes.reset();
            fieldGeneratorNutrients.reset();
            fieldGeneratorNutrientNameToID.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* FOODJSON_H */
