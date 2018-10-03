/* file "NutrientJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef NUTRIENTJSON_H
#define NUTRIENTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include <string>
#include "OInteger.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class NutrientJSON : public ReferenceCounted
  {
  private:
    bool flagHasID;
    OInteger storeID;
    bool flagHasAmountPer100g;
    double storeAmountPer100g;
    std::string textStoreAmountPer100g;
    bool flagHasRDIPer100g;
    double storeRDIPer100g;
    std::string textStoreRDIPer100g;
    bool flagHasSpokenName;
    std::string storeSpokenName;
    bool flagHasWrittenName;
    std::string storeWrittenName;
    bool flagHasSpokenUnits;
    std::string storeSpokenUnits;
    bool flagHasWrittenUnits;
    std::string storeWrittenUnits;
    bool flagHasOutputUnitsUOMAuxID;
    OInteger storeOutputUnitsUOMAuxID;
    bool flagHasDefaultUnitsUOMAuxID;
    OInteger storeDefaultUnitsUOMAuxID;
    bool flagHasOutputUnitsUOMID;
    std::string storeOutputUnitsUOMID;
    bool flagHasDefaultUnitsUOMID;
    std::string storeDefaultUnitsUOMID;

    NutrientJSON(const NutrientJSON &);
    NutrientJSON & operator=(const NutrientJSON &other);

    void  fromJSONID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAmountPer100g(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRDIPer100g(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWrittenName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenUnits(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWrittenUnits(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOutputUnitsUOMAuxID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDefaultUnitsUOMAuxID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOutputUnitsUOMID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDefaultUnitsUOMID(JSONValue *json_value, bool ignore_extras = false);


  public:
    NutrientJSON(void);
    virtual ~NutrientJSON(void);
    bool  hasID(void) const;
    OInteger  getID(void);
    const OInteger  getID(void) const;
    bool  hasAmountPer100g(void) const;
    double  getAmountPer100g(void);
    const double  getAmountPer100g(void) const;
    std::string  getAmountPer100gAsText(void) const;
    bool  hasRDIPer100g(void) const;
    double  getRDIPer100g(void);
    const double  getRDIPer100g(void) const;
    std::string  getRDIPer100gAsText(void) const;
    bool  hasSpokenName(void) const;
    std::string  getSpokenName(void);
    const std::string  getSpokenName(void) const;
    bool  hasWrittenName(void) const;
    std::string  getWrittenName(void);
    const std::string  getWrittenName(void) const;
    bool  hasSpokenUnits(void) const;
    std::string  getSpokenUnits(void);
    const std::string  getSpokenUnits(void) const;
    bool  hasWrittenUnits(void) const;
    std::string  getWrittenUnits(void);
    const std::string  getWrittenUnits(void) const;
    bool  hasOutputUnitsUOMAuxID(void) const;
    OInteger  getOutputUnitsUOMAuxID(void);
    const OInteger  getOutputUnitsUOMAuxID(void) const;
    bool  hasDefaultUnitsUOMAuxID(void) const;
    OInteger  getDefaultUnitsUOMAuxID(void);
    const OInteger  getDefaultUnitsUOMAuxID(void) const;
    bool  hasOutputUnitsUOMID(void) const;
    std::string  getOutputUnitsUOMID(void);
    const std::string  getOutputUnitsUOMID(void) const;
    bool  hasDefaultUnitsUOMID(void) const;
    std::string  getDefaultUnitsUOMID(void);
    const std::string  getDefaultUnitsUOMID(void) const;


    void setID(OInteger new_value)
      {
        flagHasID = true;
        if (new_value < 0)
            throw("The value for field ID of NutrientJSON is less than the lower bound (0) for that field.");
        storeID = new_value;
      }
    void unsetID(void)
      {
        flagHasID = false;
      }
    void setAmountPer100g(double new_value)
      {
        flagHasAmountPer100g = true;
        if (new_value < -1)
            throw("The value for field AmountPer100g of NutrientJSON is less than the lower bound (-1) for that field.");
        storeAmountPer100g = new_value;
        textStoreAmountPer100g = "";
      }
    void setAmountPer100gText(std::string new_value)
      {
        flagHasAmountPer100g = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field AmountPer100g of NutrientJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), true, "1", "", false, "1") < 0)
            throw("The value for field AmountPer100g of NutrientJSON is less than the lower bound (-1) for that field.");
        textStoreAmountPer100g = new_value;
      }
    void unsetAmountPer100g(void)
      {
        flagHasAmountPer100g = false;
      }
    void setRDIPer100g(double new_value)
      {
        flagHasRDIPer100g = true;
        if (new_value < -1)
            throw("The value for field RDIPer100g of NutrientJSON is less than the lower bound (-1) for that field.");
        storeRDIPer100g = new_value;
        textStoreRDIPer100g = "";
      }
    void setRDIPer100gText(std::string new_value)
      {
        flagHasRDIPer100g = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field RDIPer100g of NutrientJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), true, "1", "", false, "1") < 0)
            throw("The value for field RDIPer100g of NutrientJSON is less than the lower bound (-1) for that field.");
        textStoreRDIPer100g = new_value;
      }
    void unsetRDIPer100g(void)
      {
        flagHasRDIPer100g = false;
      }
    void setSpokenName(std::string new_value)
      {
        flagHasSpokenName = true;
        storeSpokenName = new_value;
      }
    void unsetSpokenName(void)
      {
        flagHasSpokenName = false;
      }
    void setWrittenName(std::string new_value)
      {
        flagHasWrittenName = true;
        storeWrittenName = new_value;
      }
    void unsetWrittenName(void)
      {
        flagHasWrittenName = false;
      }
    void setSpokenUnits(std::string new_value)
      {
        flagHasSpokenUnits = true;
        storeSpokenUnits = new_value;
      }
    void unsetSpokenUnits(void)
      {
        flagHasSpokenUnits = false;
      }
    void setWrittenUnits(std::string new_value)
      {
        flagHasWrittenUnits = true;
        storeWrittenUnits = new_value;
      }
    void unsetWrittenUnits(void)
      {
        flagHasWrittenUnits = false;
      }
    void setOutputUnitsUOMAuxID(OInteger new_value)
      {
        flagHasOutputUnitsUOMAuxID = true;
        if (new_value < -1)
            throw("The value for field OutputUnitsUOMAuxID of NutrientJSON is less than the lower bound (-1) for that field.");
        storeOutputUnitsUOMAuxID = new_value;
      }
    void unsetOutputUnitsUOMAuxID(void)
      {
        flagHasOutputUnitsUOMAuxID = false;
      }
    void setDefaultUnitsUOMAuxID(OInteger new_value)
      {
        flagHasDefaultUnitsUOMAuxID = true;
        if (new_value < -1)
            throw("The value for field DefaultUnitsUOMAuxID of NutrientJSON is less than the lower bound (-1) for that field.");
        storeDefaultUnitsUOMAuxID = new_value;
      }
    void unsetDefaultUnitsUOMAuxID(void)
      {
        flagHasDefaultUnitsUOMAuxID = false;
      }
    void setOutputUnitsUOMID(std::string new_value)
      {
        flagHasOutputUnitsUOMID = true;
        storeOutputUnitsUOMID = new_value;
      }
    void unsetOutputUnitsUOMID(void)
      {
        flagHasOutputUnitsUOMID = false;
      }
    void setDefaultUnitsUOMID(std::string new_value)
      {
        flagHasDefaultUnitsUOMID = true;
        storeDefaultUnitsUOMID = new_value;
      }
    void unsetDefaultUnitsUOMID(void)
      {
        flagHasDefaultUnitsUOMID = false;
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
        assert(flagHasAmountPer100g);
        handler->start_pair("AmountPer100g");
        if (textStoreAmountPer100g != "")
            handler->number_value(textStoreAmountPer100g.c_str());
        else if (((double)(long int)storeAmountPer100g) == storeAmountPer100g)
            handler->number_value((long int)storeAmountPer100g);
        else
            handler->number_value(storeAmountPer100g);
        assert(flagHasRDIPer100g);
        handler->start_pair("RDIPer100g");
        if (textStoreRDIPer100g != "")
            handler->number_value(textStoreRDIPer100g.c_str());
        else if (((double)(long int)storeRDIPer100g) == storeRDIPer100g)
            handler->number_value((long int)storeRDIPer100g);
        else
            handler->number_value(storeRDIPer100g);
        assert(flagHasSpokenName);
        handler->start_pair("SpokenName");
        handler->string_value(storeSpokenName);
        assert(flagHasWrittenName);
        handler->start_pair("WrittenName");
        handler->string_value(storeWrittenName);
        assert(flagHasSpokenUnits);
        handler->start_pair("SpokenUnits");
        handler->string_value(storeSpokenUnits);
        assert(flagHasWrittenUnits);
        handler->start_pair("WrittenUnits");
        handler->string_value(storeWrittenUnits);
        assert(flagHasOutputUnitsUOMAuxID);
        handler->start_pair("OutputUnitsUOMAuxID");
        handler->number_value(storeOutputUnitsUOMAuxID.get_o_integer());
        assert(flagHasDefaultUnitsUOMAuxID);
        handler->start_pair("DefaultUnitsUOMAuxID");
        handler->number_value(storeDefaultUnitsUOMAuxID.get_o_integer());
        if (flagHasOutputUnitsUOMID)
          {
            handler->start_pair("OutputUnitsUOMID");
            handler->string_value(storeOutputUnitsUOMID);
          }
        if (flagHasDefaultUnitsUOMID)
          {
            handler->start_pair("DefaultUnitsUOMID");
            handler->string_value(storeDefaultUnitsUOMID);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasID()))
          {
            return "When parsing the object for %what%, the \"ID\" field was missing.";
          }
        if (!(hasAmountPer100g()))
          {
            return "When parsing the object for %what%, the \"AmountPer100g\" field was missing.";
          }
        if (!(hasRDIPer100g()))
          {
            return "When parsing the object for %what%, the \"RDIPer100g\" field was missing.";
          }
        if (!(hasSpokenName()))
          {
            return "When parsing the object for %what%, the \"SpokenName\" field was missing.";
          }
        if (!(hasWrittenName()))
          {
            return "When parsing the object for %what%, the \"WrittenName\" field was missing.";
          }
        if (!(hasSpokenUnits()))
          {
            return "When parsing the object for %what%, the \"SpokenUnits\" field was missing.";
          }
        if (!(hasWrittenUnits()))
          {
            return "When parsing the object for %what%, the \"WrittenUnits\" field was missing.";
          }
        if (!(hasOutputUnitsUOMAuxID()))
          {
            return "When parsing the object for %what%, the \"OutputUnitsUOMAuxID\" field was missing.";
          }
        if (!(hasDefaultUnitsUOMAuxID()))
          {
            return "When parsing the object for %what%, the \"DefaultUnitsUOMAuxID\" field was missing.";
          }
        return NULL;
      }

    static NutrientJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static NutrientJSON *from_text(const char *text, bool ignore_extras = false)
      {
        NutrientJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<NutrientJSON>, NutrientJSON *, bool> generator("Type Nutrient", ignore_extras);
            parse_json_value(text, "Text for NutrientJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static NutrientJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        NutrientJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<NutrientJSON>, NutrientJSON *, bool> generator("Type Nutrient", ignore_extras);
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
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorAmountPer100g;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorRDIPer100g;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWrittenName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenUnits;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWrittenUnits;
        static char lowerBoundOutputUnitsUOMAuxID[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundOutputUnitsUOMAuxID>, OInteger, o_integer > fieldGeneratorOutputUnitsUOMAuxID;
        static char lowerBoundDefaultUnitsUOMAuxID[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundDefaultUnitsUOMAuxID>, OInteger, o_integer > fieldGeneratorDefaultUnitsUOMAuxID;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorOutputUnitsUOMID;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDefaultUnitsUOMID;


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
            NutrientJSON *result = new NutrientJSON();
            assert(result != NULL);
            RCHandle<NutrientJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(NutrientJSON *result)
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
            if (fieldGeneratorAmountPer100g.have_value)
              {
                result->setAmountPer100gText(fieldGeneratorAmountPer100g.value);
                fieldGeneratorAmountPer100g.have_value = false;
              }
            else if (!(result->hasAmountPer100g()))
              {
                error("When parsing the object for %what%, the \"AmountPer100g\" field was missing.");
              }
            if (fieldGeneratorRDIPer100g.have_value)
              {
                result->setRDIPer100gText(fieldGeneratorRDIPer100g.value);
                fieldGeneratorRDIPer100g.have_value = false;
              }
            else if (!(result->hasRDIPer100g()))
              {
                error("When parsing the object for %what%, the \"RDIPer100g\" field was missing.");
              }
            if (fieldGeneratorSpokenName.have_value)
              {
                result->setSpokenName(fieldGeneratorSpokenName.value);
                fieldGeneratorSpokenName.have_value = false;
              }
            else if (!(result->hasSpokenName()))
              {
                error("When parsing the object for %what%, the \"SpokenName\" field was missing.");
              }
            if (fieldGeneratorWrittenName.have_value)
              {
                result->setWrittenName(fieldGeneratorWrittenName.value);
                fieldGeneratorWrittenName.have_value = false;
              }
            else if (!(result->hasWrittenName()))
              {
                error("When parsing the object for %what%, the \"WrittenName\" field was missing.");
              }
            if (fieldGeneratorSpokenUnits.have_value)
              {
                result->setSpokenUnits(fieldGeneratorSpokenUnits.value);
                fieldGeneratorSpokenUnits.have_value = false;
              }
            else if (!(result->hasSpokenUnits()))
              {
                error("When parsing the object for %what%, the \"SpokenUnits\" field was missing.");
              }
            if (fieldGeneratorWrittenUnits.have_value)
              {
                result->setWrittenUnits(fieldGeneratorWrittenUnits.value);
                fieldGeneratorWrittenUnits.have_value = false;
              }
            else if (!(result->hasWrittenUnits()))
              {
                error("When parsing the object for %what%, the \"WrittenUnits\" field was missing.");
              }
            if (fieldGeneratorOutputUnitsUOMAuxID.have_value)
              {
                result->setOutputUnitsUOMAuxID(fieldGeneratorOutputUnitsUOMAuxID.value);
                fieldGeneratorOutputUnitsUOMAuxID.have_value = false;
              }
            else if (!(result->hasOutputUnitsUOMAuxID()))
              {
                error("When parsing the object for %what%, the \"OutputUnitsUOMAuxID\" field was missing.");
              }
            if (fieldGeneratorDefaultUnitsUOMAuxID.have_value)
              {
                result->setDefaultUnitsUOMAuxID(fieldGeneratorDefaultUnitsUOMAuxID.value);
                fieldGeneratorDefaultUnitsUOMAuxID.have_value = false;
              }
            else if (!(result->hasDefaultUnitsUOMAuxID()))
              {
                error("When parsing the object for %what%, the \"DefaultUnitsUOMAuxID\" field was missing.");
              }
            if (fieldGeneratorOutputUnitsUOMID.have_value)
              {
                result->setOutputUnitsUOMID(fieldGeneratorOutputUnitsUOMID.value);
                fieldGeneratorOutputUnitsUOMID.have_value = false;
              }
            if (fieldGeneratorDefaultUnitsUOMID.have_value)
              {
                result->setDefaultUnitsUOMID(fieldGeneratorDefaultUnitsUOMID.value);
                fieldGeneratorDefaultUnitsUOMID.have_value = false;
              }
          }
        virtual void handle_result(NutrientJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "mountPer100g") == 0)
                        return &fieldGeneratorAmountPer100g;
                    break;
                case 'D':
                    if (strncmp(&(field_name[1]), "efaultUnitsUOM", 14) == 0)
                      {
                        switch ((unsigned char)(field_name[15]))
                          {
                            case 'A':
                                if (strcmp(&(field_name[16]), "uxID") == 0)
                                    return &fieldGeneratorDefaultUnitsUOMAuxID;
                                break;
                            case 'I':
                                if (strcmp(&(field_name[16]), "D") == 0)
                                    return &fieldGeneratorDefaultUnitsUOMID;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "D") == 0)
                        return &fieldGeneratorID;
                    break;
                case 'O':
                    if (strncmp(&(field_name[1]), "utputUnitsUOM", 13) == 0)
                      {
                        switch ((unsigned char)(field_name[14]))
                          {
                            case 'A':
                                if (strcmp(&(field_name[15]), "uxID") == 0)
                                    return &fieldGeneratorOutputUnitsUOMAuxID;
                                break;
                            case 'I':
                                if (strcmp(&(field_name[15]), "D") == 0)
                                    return &fieldGeneratorOutputUnitsUOMID;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "DIPer100g") == 0)
                        return &fieldGeneratorRDIPer100g;
                    break;
                case 'S':
                    if (strncmp(&(field_name[1]), "poken", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 'N':
                                if (strcmp(&(field_name[7]), "ame") == 0)
                                    return &fieldGeneratorSpokenName;
                                break;
                            case 'U':
                                if (strcmp(&(field_name[7]), "nits") == 0)
                                    return &fieldGeneratorSpokenUnits;
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
                            case 'N':
                                if (strcmp(&(field_name[8]), "ame") == 0)
                                    return &fieldGeneratorWrittenName;
                                break;
                            case 'U':
                                if (strcmp(&(field_name[8]), "nits") == 0)
                                    return &fieldGeneratorWrittenUnits;
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
        Generator(bool ignore_extras = false) : fieldGeneratorID("field \"ID\" of the Nutrient class"), fieldGeneratorAmountPer100g("field \"AmountPer100g\" of the Nutrient class"), fieldGeneratorRDIPer100g("field \"RDIPer100g\" of the Nutrient class"), fieldGeneratorSpokenName("field \"SpokenName\" of the Nutrient class"), fieldGeneratorWrittenName("field \"WrittenName\" of the Nutrient class"), fieldGeneratorSpokenUnits("field \"SpokenUnits\" of the Nutrient class"), fieldGeneratorWrittenUnits("field \"WrittenUnits\" of the Nutrient class"), fieldGeneratorOutputUnitsUOMAuxID("field \"OutputUnitsUOMAuxID\" of the Nutrient class"), fieldGeneratorDefaultUnitsUOMAuxID("field \"DefaultUnitsUOMAuxID\" of the Nutrient class"), fieldGeneratorOutputUnitsUOMID("field \"OutputUnitsUOMID\" of the Nutrient class"), fieldGeneratorDefaultUnitsUOMID("field \"DefaultUnitsUOMID\" of the Nutrient class")
          {
            set_what("the Nutrient class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorID.reset();
            fieldGeneratorAmountPer100g.reset();
            fieldGeneratorRDIPer100g.reset();
            fieldGeneratorSpokenName.reset();
            fieldGeneratorWrittenName.reset();
            fieldGeneratorSpokenUnits.reset();
            fieldGeneratorWrittenUnits.reset();
            fieldGeneratorOutputUnitsUOMAuxID.reset();
            fieldGeneratorDefaultUnitsUOMAuxID.reset();
            fieldGeneratorOutputUnitsUOMID.reset();
            fieldGeneratorDefaultUnitsUOMID.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* NUTRIENTJSON_H */
