/* file "MeasuredAmountJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MEASUREDAMOUNTJSON_H
#define MEASUREDAMOUNTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include <string>
#include "UnitOfMeasureJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class MeasuredAmountJSON : public ReferenceCounted
  {
  private:
    bool flagHasUnit;
    UnitOfMeasureJSON * storeUnit;
    bool flagHasSingularName;
    std::string storeSingularName;
    bool flagHasPluralName;
    std::string storePluralName;
    bool flagHasAbbreviatedName;
    std::string storeAbbreviatedName;
    bool flagHasReferenceUnitsPerUnit;
    double storeReferenceUnitsPerUnit;
    std::string textStoreReferenceUnitsPerUnit;
    bool flagHasUnitsPerReferenceUnit;
    double storeUnitsPerReferenceUnit;
    std::string textStoreUnitsPerReferenceUnit;
    bool flagHasValue;
    double storeValue;
    std::string textStoreValue;

    MeasuredAmountJSON(const MeasuredAmountJSON &);
    MeasuredAmountJSON & operator=(const MeasuredAmountJSON &other);

    void  fromJSONUnit(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSingularName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPluralName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAbbreviatedName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONReferenceUnitsPerUnit(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUnitsPerReferenceUnit(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    MeasuredAmountJSON(void);
    virtual ~MeasuredAmountJSON(void);
    bool  hasUnit(void) const;
    UnitOfMeasureJSON *  getUnit(void);
    const UnitOfMeasureJSON *  getUnit(void) const;
    UnitOfMeasureJSON::TypeValue  getUnitValue(void);
    const UnitOfMeasureJSON::TypeValue  getUnitValue(void) const;
    const char * getUnitAsChars(void) const;
    std::string  getUnitAsString(void) const;
    bool  hasSingularName(void) const;
    std::string  getSingularName(void);
    const std::string  getSingularName(void) const;
    bool  hasPluralName(void) const;
    std::string  getPluralName(void);
    const std::string  getPluralName(void) const;
    bool  hasAbbreviatedName(void) const;
    std::string  getAbbreviatedName(void);
    const std::string  getAbbreviatedName(void) const;
    bool  hasReferenceUnitsPerUnit(void) const;
    double  getReferenceUnitsPerUnit(void);
    const double  getReferenceUnitsPerUnit(void) const;
    std::string  getReferenceUnitsPerUnitAsText(void) const;
    bool  hasUnitsPerReferenceUnit(void) const;
    double  getUnitsPerReferenceUnit(void);
    const double  getUnitsPerReferenceUnit(void) const;
    std::string  getUnitsPerReferenceUnitAsText(void) const;
    bool  hasValue(void) const;
    double  getValue(void);
    const double  getValue(void) const;
    std::string  getValueAsText(void) const;


    void setUnit(UnitOfMeasureJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasUnit)
          {
            storeUnit->remove_reference();
          }
        flagHasUnit = true;
        storeUnit = new_value;
      }
    void setUnit(UnitOfMeasureJSON::TypeValue new_value)
      {
        setUnit(new UnitOfMeasureJSON(new_value));
      }
    void setUnit(const char *chars)
      {
        UnitOfMeasureJSON::TypeValueKnownValues known = UnitOfMeasureJSON::stringToValue(chars);
        UnitOfMeasureJSON::TypeValue new_value;
        if (known == UnitOfMeasureJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setUnit(new_value);
      }
    void setUnit(std::string the_string)
      {
        setUnit(the_string.c_str());
      }
    void unsetUnit(void)
      {
        if (flagHasUnit)
          {
            storeUnit->remove_reference();
          }
        flagHasUnit = false;
      }
    void setSingularName(std::string new_value)
      {
        flagHasSingularName = true;
        storeSingularName = new_value;
      }
    void unsetSingularName(void)
      {
        flagHasSingularName = false;
      }
    void setPluralName(std::string new_value)
      {
        flagHasPluralName = true;
        storePluralName = new_value;
      }
    void unsetPluralName(void)
      {
        flagHasPluralName = false;
      }
    void setAbbreviatedName(std::string new_value)
      {
        flagHasAbbreviatedName = true;
        storeAbbreviatedName = new_value;
      }
    void unsetAbbreviatedName(void)
      {
        flagHasAbbreviatedName = false;
      }
    void setReferenceUnitsPerUnit(double new_value)
      {
        flagHasReferenceUnitsPerUnit = true;
        if (new_value < 0)
            throw("The value for field ReferenceUnitsPerUnit of MeasuredAmountJSON is less than the lower bound (0) for that field.");
        storeReferenceUnitsPerUnit = new_value;
        textStoreReferenceUnitsPerUnit = "";
      }
    void setReferenceUnitsPerUnitText(std::string new_value)
      {
        flagHasReferenceUnitsPerUnit = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field ReferenceUnitsPerUnit of MeasuredAmountJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field ReferenceUnitsPerUnit of MeasuredAmountJSON is less than the lower bound (0) for that field.");
        textStoreReferenceUnitsPerUnit = new_value;
      }
    void unsetReferenceUnitsPerUnit(void)
      {
        flagHasReferenceUnitsPerUnit = false;
      }
    void setUnitsPerReferenceUnit(double new_value)
      {
        flagHasUnitsPerReferenceUnit = true;
        if (new_value < 0)
            throw("The value for field UnitsPerReferenceUnit of MeasuredAmountJSON is less than the lower bound (0) for that field.");
        storeUnitsPerReferenceUnit = new_value;
        textStoreUnitsPerReferenceUnit = "";
      }
    void setUnitsPerReferenceUnitText(std::string new_value)
      {
        flagHasUnitsPerReferenceUnit = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field UnitsPerReferenceUnit of MeasuredAmountJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field UnitsPerReferenceUnit of MeasuredAmountJSON is less than the lower bound (0) for that field.");
        textStoreUnitsPerReferenceUnit = new_value;
      }
    void unsetUnitsPerReferenceUnit(void)
      {
        flagHasUnitsPerReferenceUnit = false;
      }
    void setValue(double new_value)
      {
        flagHasValue = true;
        storeValue = new_value;
        textStoreValue = "";
      }
    void setValueText(std::string new_value)
      {
        flagHasValue = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Value of MeasuredAmountJSON is not a valid number.");
        textStoreValue = new_value;
      }
    void unsetValue(void)
      {
        flagHasValue = false;
      }


    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        assert(flagHasUnit);
        handler->start_pair("Unit");
        storeUnit->write_as_json(handler);
        assert(flagHasSingularName);
        handler->start_pair("SingularName");
        handler->string_value(storeSingularName);
        assert(flagHasPluralName);
        handler->start_pair("PluralName");
        handler->string_value(storePluralName);
        if (flagHasAbbreviatedName)
          {
            handler->start_pair("AbbreviatedName");
            handler->string_value(storeAbbreviatedName);
          }
        assert(flagHasReferenceUnitsPerUnit);
        handler->start_pair("ReferenceUnitsPerUnit");
        if (textStoreReferenceUnitsPerUnit != "")
            handler->number_value(textStoreReferenceUnitsPerUnit.c_str());
        else if (((double)(long int)storeReferenceUnitsPerUnit) == storeReferenceUnitsPerUnit)
            handler->number_value((long int)storeReferenceUnitsPerUnit);
        else
            handler->number_value(storeReferenceUnitsPerUnit);
        assert(flagHasUnitsPerReferenceUnit);
        handler->start_pair("UnitsPerReferenceUnit");
        if (textStoreUnitsPerReferenceUnit != "")
            handler->number_value(textStoreUnitsPerReferenceUnit.c_str());
        else if (((double)(long int)storeUnitsPerReferenceUnit) == storeUnitsPerReferenceUnit)
            handler->number_value((long int)storeUnitsPerReferenceUnit);
        else
            handler->number_value(storeUnitsPerReferenceUnit);
        assert(flagHasValue);
        handler->start_pair("Value");
        if (textStoreValue != "")
            handler->number_value(textStoreValue.c_str());
        else if (((double)(long int)storeValue) == storeValue)
            handler->number_value((long int)storeValue);
        else
            handler->number_value(storeValue);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasUnit()))
          {
            return "When parsing the object for %what%, the \"Unit\" field was missing.";
          }
        if (!(hasSingularName()))
          {
            return "When parsing the object for %what%, the \"SingularName\" field was missing.";
          }
        if (!(hasPluralName()))
          {
            return "When parsing the object for %what%, the \"PluralName\" field was missing.";
          }
        if (!(hasReferenceUnitsPerUnit()))
          {
            return "When parsing the object for %what%, the \"ReferenceUnitsPerUnit\" field was missing.";
          }
        if (!(hasUnitsPerReferenceUnit()))
          {
            return "When parsing the object for %what%, the \"UnitsPerReferenceUnit\" field was missing.";
          }
        if (!(hasValue()))
          {
            return "When parsing the object for %what%, the \"Value\" field was missing.";
          }
        return NULL;
      }

    static MeasuredAmountJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MeasuredAmountJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MeasuredAmountJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MeasuredAmountJSON>, MeasuredAmountJSON *, bool> generator("Type MeasuredAmount", ignore_extras);
            parse_json_value(text, "Text for MeasuredAmountJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MeasuredAmountJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MeasuredAmountJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MeasuredAmountJSON>, MeasuredAmountJSON *, bool> generator("Type MeasuredAmount", ignore_extras);
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
        JSONHoldingGenerator<UnitOfMeasureJSON::Generator, RCHandle<UnitOfMeasureJSON>, UnitOfMeasureJSON *, bool > fieldGeneratorUnit;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSingularName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPluralName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAbbreviatedName;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorReferenceUnitsPerUnit;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorUnitsPerReferenceUnit;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorValue;


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
            MeasuredAmountJSON *result = new MeasuredAmountJSON();
            assert(result != NULL);
            RCHandle<MeasuredAmountJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(MeasuredAmountJSON *result)
          {
            if (fieldGeneratorUnit.have_value)
              {
                result->setUnit(fieldGeneratorUnit.value.referenced());
                fieldGeneratorUnit.have_value = false;
              }
            else if (!(result->hasUnit()))
              {
                error("When parsing the object for %what%, the \"Unit\" field was missing.");
              }
            if (fieldGeneratorSingularName.have_value)
              {
                result->setSingularName(fieldGeneratorSingularName.value);
                fieldGeneratorSingularName.have_value = false;
              }
            else if (!(result->hasSingularName()))
              {
                error("When parsing the object for %what%, the \"SingularName\" field was missing.");
              }
            if (fieldGeneratorPluralName.have_value)
              {
                result->setPluralName(fieldGeneratorPluralName.value);
                fieldGeneratorPluralName.have_value = false;
              }
            else if (!(result->hasPluralName()))
              {
                error("When parsing the object for %what%, the \"PluralName\" field was missing.");
              }
            if (fieldGeneratorAbbreviatedName.have_value)
              {
                result->setAbbreviatedName(fieldGeneratorAbbreviatedName.value);
                fieldGeneratorAbbreviatedName.have_value = false;
              }
            if (fieldGeneratorReferenceUnitsPerUnit.have_value)
              {
                result->setReferenceUnitsPerUnitText(fieldGeneratorReferenceUnitsPerUnit.value);
                fieldGeneratorReferenceUnitsPerUnit.have_value = false;
              }
            else if (!(result->hasReferenceUnitsPerUnit()))
              {
                error("When parsing the object for %what%, the \"ReferenceUnitsPerUnit\" field was missing.");
              }
            if (fieldGeneratorUnitsPerReferenceUnit.have_value)
              {
                result->setUnitsPerReferenceUnitText(fieldGeneratorUnitsPerReferenceUnit.value);
                fieldGeneratorUnitsPerReferenceUnit.have_value = false;
              }
            else if (!(result->hasUnitsPerReferenceUnit()))
              {
                error("When parsing the object for %what%, the \"UnitsPerReferenceUnit\" field was missing.");
              }
            if (fieldGeneratorValue.have_value)
              {
                result->setValueText(fieldGeneratorValue.value);
                fieldGeneratorValue.have_value = false;
              }
            else if (!(result->hasValue()))
              {
                error("When parsing the object for %what%, the \"Value\" field was missing.");
              }
          }
        virtual void handle_result(MeasuredAmountJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "bbreviatedName") == 0)
                        return &fieldGeneratorAbbreviatedName;
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "luralName") == 0)
                        return &fieldGeneratorPluralName;
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "eferenceUnitsPerUnit") == 0)
                        return &fieldGeneratorReferenceUnitsPerUnit;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "ingularName") == 0)
                        return &fieldGeneratorSingularName;
                    break;
                case 'U':
                    if (strncmp(&(field_name[1]), "nit", 3) == 0)
                      {
                        switch ((unsigned char)(field_name[4]))
                          {
                            case 0:
                                return &fieldGeneratorUnit;
                            case 's':
                                if (strcmp(&(field_name[5]), "PerReferenceUnit") == 0)
                                    return &fieldGeneratorUnitsPerReferenceUnit;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'V':
                    if (strcmp(&(field_name[1]), "alue") == 0)
                        return &fieldGeneratorValue;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorUnit("field \"Unit\" of the MeasuredAmount class", ignore_extras), fieldGeneratorSingularName("field \"SingularName\" of the MeasuredAmount class"), fieldGeneratorPluralName("field \"PluralName\" of the MeasuredAmount class"), fieldGeneratorAbbreviatedName("field \"AbbreviatedName\" of the MeasuredAmount class"), fieldGeneratorReferenceUnitsPerUnit("field \"ReferenceUnitsPerUnit\" of the MeasuredAmount class"), fieldGeneratorUnitsPerReferenceUnit("field \"UnitsPerReferenceUnit\" of the MeasuredAmount class"), fieldGeneratorValue("field \"Value\" of the MeasuredAmount class")
          {
            set_what("the MeasuredAmount class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorUnit.reset();
            fieldGeneratorSingularName.reset();
            fieldGeneratorPluralName.reset();
            fieldGeneratorAbbreviatedName.reset();
            fieldGeneratorReferenceUnitsPerUnit.reset();
            fieldGeneratorUnitsPerReferenceUnit.reset();
            fieldGeneratorValue.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* MEASUREDAMOUNTJSON_H */
