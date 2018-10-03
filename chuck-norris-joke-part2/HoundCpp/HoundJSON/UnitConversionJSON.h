/* file "UnitConversionJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UNITCONVERSIONJSON_H
#define UNITCONVERSIONJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include <vector>
#include <string>
#include "MeasuredAmountJSON.h"
#include "MeasuredAmountJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UnitConversionJSON : public ReferenceCounted
  {
  public:
    enum TypeConversionTypeKnownValues
      {
        ConversionType_MassToVolume,
        ConversionType_VolumeToMass,
        ConversionType_Length,
        ConversionType_Temperature,
        ConversionType_Pressure,
        ConversionType_Mass,
        ConversionType_Time,
        ConversionType_Data,
        ConversionType_Frequency,
        ConversionType_Angles,
        ConversionType_Volume,
        ConversionType_Force,
        ConversionType_Work,
        ConversionType_Power,
        ConversionType_Area,
        ConversionType_Speed,
        ConversionType_Acceleration,
        ConversionType_Unknown,
        ConversionType__none
      };
    struct TypeConversionType
      {
        bool in_known_list;
        std::string string_value;
        TypeConversionTypeKnownValues list_value;

        TypeConversionType(void);
        TypeConversionType(const TypeConversionType &other);
        TypeConversionType(TypeConversionTypeKnownValues other);
        bool  operator==(const TypeConversionType &other) const;
        bool  operator!=(const TypeConversionType &other) const;
        bool  operator<(const TypeConversionType &other) const;
        bool  operator>(const TypeConversionType &other) const;
        bool  operator>=(const TypeConversionType &other) const;
        bool  operator<=(const TypeConversionType &other) const;

      };

    static TypeConversionTypeKnownValues  stringToConversionType(const char *chars);
    static const char * stringFromConversionType(TypeConversionTypeKnownValues the_enum);
    class TypeReferencePointJSON : public ReferenceCounted
      {
      public:
        enum TypeUnitTypeKnownValues
          {
            UnitType_Density,
            UnitType_Length,
            UnitType_Temperature,
            UnitType_Pressure,
            UnitType_Mass,
            UnitType_Time,
            UnitType_Data,
            UnitType_Frequency,
            UnitType_Angles,
            UnitType_Volume,
            UnitType_Force,
            UnitType_Work,
            UnitType_Power,
            UnitType_Area,
            UnitType_Speed,
            UnitType_Acceleration,
            UnitType_Unknown,
            UnitType__none
          };
        struct TypeUnitType
          {
            bool in_known_list;
            std::string string_value;
            TypeUnitTypeKnownValues list_value;

            TypeUnitType(void);
            TypeUnitType(const TypeUnitType &other);
            TypeUnitType(TypeUnitTypeKnownValues other);
            bool  operator==(const TypeUnitType &other) const;
            bool  operator!=(const TypeUnitType &other) const;
            bool  operator<(const TypeUnitType &other) const;
            bool  operator>(const TypeUnitType &other) const;
            bool  operator>=(const TypeUnitType &other) const;
            bool  operator<=(const TypeUnitType &other) const;

          };

        static TypeUnitTypeKnownValues  stringToUnitType(const char *chars);
        static const char * stringFromUnitType(TypeUnitTypeKnownValues the_enum);

      private:
        bool flagHasUnit;
        std::string storeUnit;
        bool flagHasUnitType;
        TypeUnitType storeUnitType;
        bool flagHasSingularName;
        std::string storeSingularName;
        bool flagHasPluralName;
        std::string storePluralName;
        bool flagHasAbbreviatedName;
        std::string storeAbbreviatedName;
        bool flagHasValue;
        double storeValue;
        std::string textStoreValue;

        TypeReferencePointJSON(const TypeReferencePointJSON &);
        TypeReferencePointJSON & operator=(const TypeReferencePointJSON &other);

        void  fromJSONUnit(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONUnitType(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONSingularName(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONPluralName(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAbbreviatedName(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeReferencePointJSON(void);
        virtual ~TypeReferencePointJSON(void);
        bool  hasUnit(void) const;
        std::string  getUnit(void);
        const std::string  getUnit(void) const;
        bool  hasUnitType(void) const;
        TypeUnitType  getUnitType(void);
        const TypeUnitType  getUnitType(void) const;
        const char * getUnitTypeAsChars(void) const;
        std::string  getUnitTypeAsString(void) const;
        bool  hasSingularName(void) const;
        std::string  getSingularName(void);
        const std::string  getSingularName(void) const;
        bool  hasPluralName(void) const;
        std::string  getPluralName(void);
        const std::string  getPluralName(void) const;
        bool  hasAbbreviatedName(void) const;
        std::string  getAbbreviatedName(void);
        const std::string  getAbbreviatedName(void) const;
        bool  hasValue(void) const;
        double  getValue(void);
        const double  getValue(void) const;
        std::string  getValueAsText(void) const;


        void setUnit(std::string new_value)
          {
            flagHasUnit = true;
            storeUnit = new_value;
          }
        void unsetUnit(void)
          {
            flagHasUnit = false;
          }
        void setUnitType(TypeUnitType new_value)
          {
            flagHasUnitType = true;
            storeUnitType = new_value;
          }
        void setUnitType(const char *chars)
          {
            TypeUnitTypeKnownValues known = stringToUnitType(chars);
            TypeUnitType new_value;
            if (known == UnitType__none)
              {
                new_value.in_known_list = false;
                new_value.string_value = chars;
              }
            else
              {
                new_value.in_known_list = true;
                new_value.list_value = known;
              }
            setUnitType(new_value);
          }
        void setUnitType(std::string the_string)
          {
            setUnitType(the_string.c_str());
          }
        void setUnitType(TypeUnitTypeKnownValues new_value)
          {
            TypeUnitType new_full_value;
            assert(new_value != UnitType__none);
            new_full_value.in_known_list = true;
            new_full_value.list_value = new_value;
            setUnitType(new_full_value);
          }
        void unsetUnitType(void)
          {
            flagHasUnitType = false;
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
                throw("The text value for field Value of TypeReferencePointJSON is not a valid number.");
            textStoreValue = new_value;
          }
        void unsetValue(void)
          {
            flagHasValue = false;
          }


        void write_as_json(JSONHandler *handler) const
          {
            handler->start_object();
            write_fields_as_json(handler);
            handler->finish_object();
          }

        virtual void write_fields_as_json(JSONHandler *handler) const
          {
            assert(flagHasUnit);
            handler->start_pair("Unit");
            handler->string_value(storeUnit);
            assert(flagHasUnitType);
            handler->start_pair("UnitType");
            if (storeUnitType.in_known_list)
              {
                switch (storeUnitType.list_value)
                  {
                    case UnitType_Density:
                        handler->string_value("Density");
                        break;
                    case UnitType_Length:
                        handler->string_value("Length");
                        break;
                    case UnitType_Temperature:
                        handler->string_value("Temperature");
                        break;
                    case UnitType_Pressure:
                        handler->string_value("Pressure");
                        break;
                    case UnitType_Mass:
                        handler->string_value("Mass");
                        break;
                    case UnitType_Time:
                        handler->string_value("Time");
                        break;
                    case UnitType_Data:
                        handler->string_value("Data");
                        break;
                    case UnitType_Frequency:
                        handler->string_value("Frequency");
                        break;
                    case UnitType_Angles:
                        handler->string_value("Angles");
                        break;
                    case UnitType_Volume:
                        handler->string_value("Volume");
                        break;
                    case UnitType_Force:
                        handler->string_value("Force");
                        break;
                    case UnitType_Work:
                        handler->string_value("Work");
                        break;
                    case UnitType_Power:
                        handler->string_value("Power");
                        break;
                    case UnitType_Area:
                        handler->string_value("Area");
                        break;
                    case UnitType_Speed:
                        handler->string_value("Speed");
                        break;
                    case UnitType_Acceleration:
                        handler->string_value("Acceleration");
                        break;
                    case UnitType_Unknown:
                        handler->string_value("Unknown");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeUnitType.string_value);
              }
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
            if (!(hasUnitType()))
              {
                return "When parsing the object for %what%, the \"UnitType\" field was missing.";
              }
            if (!(hasSingularName()))
              {
                return "When parsing the object for %what%, the \"SingularName\" field was missing.";
              }
            if (!(hasPluralName()))
              {
                return "When parsing the object for %what%, the \"PluralName\" field was missing.";
              }
            if (!(hasValue()))
              {
                return "When parsing the object for %what%, the \"Value\" field was missing.";
              }
            return NULL;
          }

        static TypeReferencePointJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeReferencePointJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeReferencePointJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeReferencePointJSON>, TypeReferencePointJSON *, bool> generator("Type TypeReferencePoint", ignore_extras);
                parse_json_value(text, "Text for TypeReferencePointJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeReferencePointJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeReferencePointJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeReferencePointJSON>, TypeReferencePointJSON *, bool> generator("Type TypeReferencePoint", ignore_extras);
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorUnit;
        class FieldGeneratorUnitType : public JSONStringGenerator
              {
              protected:
                FieldGeneratorUnitType(const char *what)
                  {
                    set_what(what);
                  }
                FieldGeneratorUnitType(void)
                  {
                  }
                void handle_result(const char *result)
                  {
                    TypeUnitTypeKnownValues known = stringToUnitType(result);
                    TypeUnitType new_value;
                    if (known == UnitType__none)
                      {
                        new_value.in_known_list = false;
                        new_value.string_value = result;
                      }
                    else
                      {
                        new_value.in_known_list = true;
                        new_value.list_value = known;
                      }
                    handle_result(new_value);
                  }
                virtual void handle_result(TypeUnitType result) = 0;
              };
            JSONHoldingGenerator<FieldGeneratorUnitType, TypeUnitType, TypeUnitType > fieldGeneratorUnitType;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSingularName;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPluralName;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAbbreviatedName;
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
                TypeReferencePointJSON *result = new TypeReferencePointJSON();
                assert(result != NULL);
                RCHandle<TypeReferencePointJSON> result_holder = result;
                finish(result);
                handle_result(result);
              }
            void finish(TypeReferencePointJSON *result)
              {
                if (fieldGeneratorUnit.have_value)
                  {
                    result->setUnit(fieldGeneratorUnit.value);
                    fieldGeneratorUnit.have_value = false;
                  }
                else if (!(result->hasUnit()))
                  {
                    error("When parsing the object for %what%, the \"Unit\" field was missing.");
                  }
                if (fieldGeneratorUnitType.have_value)
                  {
                    result->setUnitType(fieldGeneratorUnitType.value);
                    fieldGeneratorUnitType.have_value = false;
                  }
                else if (!(result->hasUnitType()))
                  {
                    error("When parsing the object for %what%, the \"UnitType\" field was missing.");
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
            virtual void handle_result(TypeReferencePointJSON *new_result) = 0;
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
                                case 'T':
                                    if (strcmp(&(field_name[5]), "ype") == 0)
                                        return &fieldGeneratorUnitType;
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
            Generator(bool ignore_extras = false) : fieldGeneratorUnit("field \"Unit\" of the TypeReferencePoint class"), fieldGeneratorUnitType("field \"UnitType\" of the TypeReferencePoint class"), fieldGeneratorSingularName("field \"SingularName\" of the TypeReferencePoint class"), fieldGeneratorPluralName("field \"PluralName\" of the TypeReferencePoint class"), fieldGeneratorAbbreviatedName("field \"AbbreviatedName\" of the TypeReferencePoint class"), fieldGeneratorValue("field \"Value\" of the TypeReferencePoint class")
              {
                set_what("the TypeReferencePoint class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorUnit.reset();
                fieldGeneratorUnitType.reset();
                fieldGeneratorSingularName.reset();
                fieldGeneratorPluralName.reset();
                fieldGeneratorAbbreviatedName.reset();
                fieldGeneratorValue.reset();
                JSONObjectGenerator::reset();
              }
          };
      };

  private:
    bool flagHasConversionType;
    TypeConversionType storeConversionType;
    bool flagHasDisplayTitle;
    std::string storeDisplayTitle;
    bool flagHasDisplayDescription;
    std::string storeDisplayDescription;
    bool flagHasInputValue;
    std::vector< MeasuredAmountJSON * > storeInputValue;
    bool flagHasOutputValue;
    std::vector< MeasuredAmountJSON * > storeOutputValue;
    bool flagHasReferencePoint;
    TypeReferencePointJSON * storeReferencePoint;

    UnitConversionJSON(const UnitConversionJSON &);
    UnitConversionJSON & operator=(const UnitConversionJSON &other);

    void  fromJSONConversionType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDisplayTitle(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDisplayDescription(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONInputValue(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOutputValue(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONReferencePoint(JSONValue *json_value, bool ignore_extras = false);


  public:
    UnitConversionJSON(void);
    virtual ~UnitConversionJSON(void);
    bool  hasConversionType(void) const;
    TypeConversionType  getConversionType(void);
    const TypeConversionType  getConversionType(void) const;
    const char * getConversionTypeAsChars(void) const;
    std::string  getConversionTypeAsString(void) const;
    bool  hasDisplayTitle(void) const;
    std::string  getDisplayTitle(void);
    const std::string  getDisplayTitle(void) const;
    bool  hasDisplayDescription(void) const;
    std::string  getDisplayDescription(void);
    const std::string  getDisplayDescription(void) const;
    bool  hasInputValue(void) const;
    size_t  countOfInputValue(void) const;
    MeasuredAmountJSON *  elementOfInputValue(size_t element_num);
    const MeasuredAmountJSON *  elementOfInputValue(size_t element_num) const;
    std::vector< MeasuredAmountJSON * >  getInputValue(void);
    const std::vector< MeasuredAmountJSON * >  getInputValue(void) const;
    bool  hasOutputValue(void) const;
    size_t  countOfOutputValue(void) const;
    MeasuredAmountJSON *  elementOfOutputValue(size_t element_num);
    const MeasuredAmountJSON *  elementOfOutputValue(size_t element_num) const;
    std::vector< MeasuredAmountJSON * >  getOutputValue(void);
    const std::vector< MeasuredAmountJSON * >  getOutputValue(void) const;
    bool  hasReferencePoint(void) const;
    TypeReferencePointJSON *  getReferencePoint(void);
    const TypeReferencePointJSON *  getReferencePoint(void) const;


    void setConversionType(TypeConversionType new_value)
      {
        flagHasConversionType = true;
        storeConversionType = new_value;
      }
    void setConversionType(const char *chars)
      {
        TypeConversionTypeKnownValues known = stringToConversionType(chars);
        TypeConversionType new_value;
        if (known == ConversionType__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setConversionType(new_value);
      }
    void setConversionType(std::string the_string)
      {
        setConversionType(the_string.c_str());
      }
    void setConversionType(TypeConversionTypeKnownValues new_value)
      {
        TypeConversionType new_full_value;
        assert(new_value != ConversionType__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setConversionType(new_full_value);
      }
    void unsetConversionType(void)
      {
        flagHasConversionType = false;
      }
    void setDisplayTitle(std::string new_value)
      {
        flagHasDisplayTitle = true;
        storeDisplayTitle = new_value;
      }
    void unsetDisplayTitle(void)
      {
        flagHasDisplayTitle = false;
      }
    void setDisplayDescription(std::string new_value)
      {
        flagHasDisplayDescription = true;
        storeDisplayDescription = new_value;
      }
    void unsetDisplayDescription(void)
      {
        flagHasDisplayDescription = false;
      }
    void initInputValue(void)
      {
        if (flagHasInputValue)
          {
            for (size_t num3 = 0; num3 < storeInputValue.size(); ++num3)
              {
                storeInputValue[num3]->remove_reference();
              }
          }
        flagHasInputValue = true;
        storeInputValue.clear();
      }
    void appendInputValue(MeasuredAmountJSON * to_append)
      {
        if (!flagHasInputValue)
          {
            flagHasInputValue = true;
            storeInputValue.clear();
          }
        assert(flagHasInputValue);
        to_append->add_reference();
        storeInputValue.push_back(to_append);
      }
    void unsetInputValue(void)
      {
        if (flagHasInputValue)
          {
            for (size_t num4 = 0; num4 < storeInputValue.size(); ++num4)
              {
                storeInputValue[num4]->remove_reference();
              }
          }
        flagHasInputValue = false;
        storeInputValue.clear();
      }
    void initOutputValue(void)
      {
        if (flagHasOutputValue)
          {
            for (size_t num5 = 0; num5 < storeOutputValue.size(); ++num5)
              {
                storeOutputValue[num5]->remove_reference();
              }
          }
        flagHasOutputValue = true;
        storeOutputValue.clear();
      }
    void appendOutputValue(MeasuredAmountJSON * to_append)
      {
        if (!flagHasOutputValue)
          {
            flagHasOutputValue = true;
            storeOutputValue.clear();
          }
        assert(flagHasOutputValue);
        to_append->add_reference();
        storeOutputValue.push_back(to_append);
      }
    void unsetOutputValue(void)
      {
        if (flagHasOutputValue)
          {
            for (size_t num6 = 0; num6 < storeOutputValue.size(); ++num6)
              {
                storeOutputValue[num6]->remove_reference();
              }
          }
        flagHasOutputValue = false;
        storeOutputValue.clear();
      }
    void setReferencePoint(TypeReferencePointJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasReferencePoint)
          {
            storeReferencePoint->remove_reference();
          }
        flagHasReferencePoint = true;
        storeReferencePoint = new_value;
      }
    void unsetReferencePoint(void)
      {
        if (flagHasReferencePoint)
          {
            storeReferencePoint->remove_reference();
          }
        flagHasReferencePoint = false;
      }


    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        assert(flagHasConversionType);
        handler->start_pair("ConversionType");
        if (storeConversionType.in_known_list)
          {
            switch (storeConversionType.list_value)
              {
                case ConversionType_MassToVolume:
                    handler->string_value("MassToVolume");
                    break;
                case ConversionType_VolumeToMass:
                    handler->string_value("VolumeToMass");
                    break;
                case ConversionType_Length:
                    handler->string_value("Length");
                    break;
                case ConversionType_Temperature:
                    handler->string_value("Temperature");
                    break;
                case ConversionType_Pressure:
                    handler->string_value("Pressure");
                    break;
                case ConversionType_Mass:
                    handler->string_value("Mass");
                    break;
                case ConversionType_Time:
                    handler->string_value("Time");
                    break;
                case ConversionType_Data:
                    handler->string_value("Data");
                    break;
                case ConversionType_Frequency:
                    handler->string_value("Frequency");
                    break;
                case ConversionType_Angles:
                    handler->string_value("Angles");
                    break;
                case ConversionType_Volume:
                    handler->string_value("Volume");
                    break;
                case ConversionType_Force:
                    handler->string_value("Force");
                    break;
                case ConversionType_Work:
                    handler->string_value("Work");
                    break;
                case ConversionType_Power:
                    handler->string_value("Power");
                    break;
                case ConversionType_Area:
                    handler->string_value("Area");
                    break;
                case ConversionType_Speed:
                    handler->string_value("Speed");
                    break;
                case ConversionType_Acceleration:
                    handler->string_value("Acceleration");
                    break;
                case ConversionType_Unknown:
                    handler->string_value("Unknown");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storeConversionType.string_value);
          }
        assert(flagHasDisplayTitle);
        handler->start_pair("DisplayTitle");
        handler->string_value(storeDisplayTitle);
        if (flagHasDisplayDescription)
          {
            handler->start_pair("DisplayDescription");
            handler->string_value(storeDisplayDescription);
          }
        assert(flagHasInputValue);
        handler->start_pair("InputValue");
        assert(storeInputValue.size() >= 1);
        handler->start_array();
        for (size_t num1 = 0; num1 < storeInputValue.size(); ++num1)
          {
            storeInputValue[num1]->write_as_json(handler);
          }
        handler->finish_array();
        assert(flagHasOutputValue);
        handler->start_pair("OutputValue");
        assert(storeOutputValue.size() >= 1);
        handler->start_array();
        for (size_t num2 = 0; num2 < storeOutputValue.size(); ++num2)
          {
            storeOutputValue[num2]->write_as_json(handler);
          }
        handler->finish_array();
        if (flagHasReferencePoint)
          {
            handler->start_pair("ReferencePoint");
            storeReferencePoint->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasConversionType()))
          {
            return "When parsing the object for %what%, the \"ConversionType\" field was missing.";
          }
        if (!(hasDisplayTitle()))
          {
            return "When parsing the object for %what%, the \"DisplayTitle\" field was missing.";
          }
        if (!(hasInputValue()))
          {
            return "When parsing the object for %what%, the \"InputValue\" field was missing.";
          }
        if (!(hasOutputValue()))
          {
            return "When parsing the object for %what%, the \"OutputValue\" field was missing.";
          }
        return NULL;
      }

    static UnitConversionJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UnitConversionJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UnitConversionJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UnitConversionJSON>, UnitConversionJSON *, bool> generator("Type UnitConversion", ignore_extras);
            parse_json_value(text, "Text for UnitConversionJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UnitConversionJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UnitConversionJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UnitConversionJSON>, UnitConversionJSON *, bool> generator("Type UnitConversion", ignore_extras);
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
    class FieldGeneratorConversionType : public JSONStringGenerator
          {
          protected:
            FieldGeneratorConversionType(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorConversionType(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeConversionTypeKnownValues known = stringToConversionType(result);
                TypeConversionType new_value;
                if (known == ConversionType__none)
                  {
                    new_value.in_known_list = false;
                    new_value.string_value = result;
                  }
                else
                  {
                    new_value.in_known_list = true;
                    new_value.list_value = known;
                  }
                handle_result(new_value);
              }
            virtual void handle_result(TypeConversionType result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorConversionType, TypeConversionType, TypeConversionType > fieldGeneratorConversionType;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDisplayTitle;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDisplayDescription;
        JSONHoldingArrayGenerator<MeasuredAmountJSON::Generator, RCHandle<MeasuredAmountJSON>, MeasuredAmountJSON *, bool > fieldGeneratorInputValue;
        JSONHoldingArrayGenerator<MeasuredAmountJSON::Generator, RCHandle<MeasuredAmountJSON>, MeasuredAmountJSON *, bool > fieldGeneratorOutputValue;
        JSONHoldingGenerator<TypeReferencePointJSON::Generator, RCHandle<TypeReferencePointJSON>, TypeReferencePointJSON *, bool > fieldGeneratorReferencePoint;


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
            UnitConversionJSON *result = new UnitConversionJSON();
            assert(result != NULL);
            RCHandle<UnitConversionJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(UnitConversionJSON *result)
          {
            if (fieldGeneratorConversionType.have_value)
              {
                result->setConversionType(fieldGeneratorConversionType.value);
                fieldGeneratorConversionType.have_value = false;
              }
            else if (!(result->hasConversionType()))
              {
                error("When parsing the object for %what%, the \"ConversionType\" field was missing.");
              }
            if (fieldGeneratorDisplayTitle.have_value)
              {
                result->setDisplayTitle(fieldGeneratorDisplayTitle.value);
                fieldGeneratorDisplayTitle.have_value = false;
              }
            else if (!(result->hasDisplayTitle()))
              {
                error("When parsing the object for %what%, the \"DisplayTitle\" field was missing.");
              }
            if (fieldGeneratorDisplayDescription.have_value)
              {
                result->setDisplayDescription(fieldGeneratorDisplayDescription.value);
                fieldGeneratorDisplayDescription.have_value = false;
              }
            if (fieldGeneratorInputValue.have_value)
              {
                result->initInputValue();
                size_t count = fieldGeneratorInputValue.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendInputValue(fieldGeneratorInputValue.value[num].referenced());
                  }
                fieldGeneratorInputValue.value.clear();
                fieldGeneratorInputValue.have_value = false;
              }
            else if (!(result->hasInputValue()))
              {
                error("When parsing the object for %what%, the \"InputValue\" field was missing.");
              }
            if (fieldGeneratorOutputValue.have_value)
              {
                result->initOutputValue();
                size_t count = fieldGeneratorOutputValue.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendOutputValue(fieldGeneratorOutputValue.value[num].referenced());
                  }
                fieldGeneratorOutputValue.value.clear();
                fieldGeneratorOutputValue.have_value = false;
              }
            else if (!(result->hasOutputValue()))
              {
                error("When parsing the object for %what%, the \"OutputValue\" field was missing.");
              }
            if (fieldGeneratorReferencePoint.have_value)
              {
                result->setReferencePoint(fieldGeneratorReferencePoint.value.referenced());
                fieldGeneratorReferencePoint.have_value = false;
              }
          }
        virtual void handle_result(UnitConversionJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "onversionType") == 0)
                        return &fieldGeneratorConversionType;
                    break;
                case 'D':
                    if (strncmp(&(field_name[1]), "isplay", 6) == 0)
                      {
                        switch ((unsigned char)(field_name[7]))
                          {
                            case 'D':
                                if (strcmp(&(field_name[8]), "escription") == 0)
                                    return &fieldGeneratorDisplayDescription;
                                break;
                            case 'T':
                                if (strcmp(&(field_name[8]), "itle") == 0)
                                    return &fieldGeneratorDisplayTitle;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "nputValue") == 0)
                        return &fieldGeneratorInputValue;
                    break;
                case 'O':
                    if (strcmp(&(field_name[1]), "utputValue") == 0)
                        return &fieldGeneratorOutputValue;
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "eferencePoint") == 0)
                        return &fieldGeneratorReferencePoint;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorConversionType("field \"ConversionType\" of the UnitConversion class"), fieldGeneratorDisplayTitle("field \"DisplayTitle\" of the UnitConversion class"), fieldGeneratorDisplayDescription("field \"DisplayDescription\" of the UnitConversion class"), fieldGeneratorInputValue("field \"InputValue\" of the UnitConversion class", ignore_extras), fieldGeneratorOutputValue("field \"OutputValue\" of the UnitConversion class", ignore_extras), fieldGeneratorReferencePoint("field \"ReferencePoint\" of the UnitConversion class", ignore_extras)
          {
            set_what("the UnitConversion class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorConversionType.reset();
            fieldGeneratorDisplayTitle.reset();
            fieldGeneratorDisplayDescription.reset();
            fieldGeneratorInputValue.reset();
            fieldGeneratorOutputValue.reset();
            fieldGeneratorReferencePoint.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* UNITCONVERSIONJSON_H */
