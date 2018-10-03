/* file "UnitConversionErrorJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UNITCONVERSIONERRORJSON_H
#define UNITCONVERSIONERRORJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include "UnitOfMeasureJSON.h"
#include "UnitOfMeasureJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UnitConversionErrorJSON : public ReferenceCounted
  {
  public:
    enum TypeTypeKnownValues
      {
        Type_TypeMismatch,
        Type_InvalidDensity,
        Type_UnnecessaryDensity,
        Type_NoValidInputFound,
        Type_NoValidOutputFound,
        Type_BadAdjective,
        Type__none
      };
    struct TypeType
      {
        bool in_known_list;
        std::string string_value;
        TypeTypeKnownValues list_value;

        TypeType(void);
        TypeType(const TypeType &other);
        TypeType(TypeTypeKnownValues other);
        bool  operator==(const TypeType &other) const;
        bool  operator!=(const TypeType &other) const;
        bool  operator<(const TypeType &other) const;
        bool  operator>(const TypeType &other) const;
        bool  operator>=(const TypeType &other) const;
        bool  operator<=(const TypeType &other) const;

      };

    static TypeTypeKnownValues  stringToType(const char *chars);
    static const char * stringFromType(TypeTypeKnownValues the_enum);

  private:
    bool flagHasType;
    TypeType storeType;
    bool flagHasInputUnit;
    std::vector< UnitOfMeasureJSON * > storeInputUnit;
    bool flagHasOutputUnit;
    std::vector< UnitOfMeasureJSON * > storeOutputUnit;

    UnitConversionErrorJSON(const UnitConversionErrorJSON &);
    UnitConversionErrorJSON & operator=(const UnitConversionErrorJSON &other);

    void  fromJSONType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONInputUnit(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOutputUnit(JSONValue *json_value, bool ignore_extras = false);


  public:
    UnitConversionErrorJSON(void);
    virtual ~UnitConversionErrorJSON(void);
    bool  hasType(void) const;
    TypeType  getType(void);
    const TypeType  getType(void) const;
    const char * getTypeAsChars(void) const;
    std::string  getTypeAsString(void) const;
    bool  hasInputUnit(void) const;
    size_t  countOfInputUnit(void) const;
    UnitOfMeasureJSON *  elementOfInputUnit(size_t element_num);
    const UnitOfMeasureJSON *  elementOfInputUnit(size_t element_num) const;
    std::vector< UnitOfMeasureJSON * >  getInputUnit(void);
    const std::vector< UnitOfMeasureJSON * >  getInputUnit(void) const;
    bool  hasOutputUnit(void) const;
    size_t  countOfOutputUnit(void) const;
    UnitOfMeasureJSON *  elementOfOutputUnit(size_t element_num);
    const UnitOfMeasureJSON *  elementOfOutputUnit(size_t element_num) const;
    std::vector< UnitOfMeasureJSON * >  getOutputUnit(void);
    const std::vector< UnitOfMeasureJSON * >  getOutputUnit(void) const;


    void setType(TypeType new_value)
      {
        flagHasType = true;
        storeType = new_value;
      }
    void setType(const char *chars)
      {
        TypeTypeKnownValues known = stringToType(chars);
        TypeType new_value;
        if (known == Type__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setType(new_value);
      }
    void setType(std::string the_string)
      {
        setType(the_string.c_str());
      }
    void setType(TypeTypeKnownValues new_value)
      {
        TypeType new_full_value;
        assert(new_value != Type__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setType(new_full_value);
      }
    void unsetType(void)
      {
        flagHasType = false;
      }
    void initInputUnit(void)
      {
        if (flagHasInputUnit)
          {
            for (size_t num3 = 0; num3 < storeInputUnit.size(); ++num3)
              {
                storeInputUnit[num3]->remove_reference();
              }
          }
        flagHasInputUnit = true;
        storeInputUnit.clear();
      }
    void appendInputUnit(UnitOfMeasureJSON * to_append)
      {
        if (!flagHasInputUnit)
          {
            flagHasInputUnit = true;
            storeInputUnit.clear();
          }
        assert(flagHasInputUnit);
        to_append->add_reference();
        storeInputUnit.push_back(to_append);
      }
    void appendInputUnit(UnitOfMeasureJSON::TypeValue new_value)
      {
        appendInputUnit(new UnitOfMeasureJSON(new_value));
      }
    void appendInputUnit(const char *chars)
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
        appendInputUnit(new_value);
      }
    void appendInputUnit(std::string the_string)
      {
        appendInputUnit(the_string.c_str());
      }
    void unsetInputUnit(void)
      {
        if (flagHasInputUnit)
          {
            for (size_t num4 = 0; num4 < storeInputUnit.size(); ++num4)
              {
                storeInputUnit[num4]->remove_reference();
              }
          }
        flagHasInputUnit = false;
        storeInputUnit.clear();
      }
    void initOutputUnit(void)
      {
        if (flagHasOutputUnit)
          {
            for (size_t num5 = 0; num5 < storeOutputUnit.size(); ++num5)
              {
                storeOutputUnit[num5]->remove_reference();
              }
          }
        flagHasOutputUnit = true;
        storeOutputUnit.clear();
      }
    void appendOutputUnit(UnitOfMeasureJSON * to_append)
      {
        if (!flagHasOutputUnit)
          {
            flagHasOutputUnit = true;
            storeOutputUnit.clear();
          }
        assert(flagHasOutputUnit);
        to_append->add_reference();
        storeOutputUnit.push_back(to_append);
      }
    void appendOutputUnit(UnitOfMeasureJSON::TypeValue new_value)
      {
        appendOutputUnit(new UnitOfMeasureJSON(new_value));
      }
    void appendOutputUnit(const char *chars)
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
        appendOutputUnit(new_value);
      }
    void appendOutputUnit(std::string the_string)
      {
        appendOutputUnit(the_string.c_str());
      }
    void unsetOutputUnit(void)
      {
        if (flagHasOutputUnit)
          {
            for (size_t num6 = 0; num6 < storeOutputUnit.size(); ++num6)
              {
                storeOutputUnit[num6]->remove_reference();
              }
          }
        flagHasOutputUnit = false;
        storeOutputUnit.clear();
      }


    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        assert(flagHasType);
        handler->start_pair("Type");
        if (storeType.in_known_list)
          {
            switch (storeType.list_value)
              {
                case Type_TypeMismatch:
                    handler->string_value("TypeMismatch");
                    break;
                case Type_InvalidDensity:
                    handler->string_value("InvalidDensity");
                    break;
                case Type_UnnecessaryDensity:
                    handler->string_value("UnnecessaryDensity");
                    break;
                case Type_NoValidInputFound:
                    handler->string_value("NoValidInputFound");
                    break;
                case Type_NoValidOutputFound:
                    handler->string_value("NoValidOutputFound");
                    break;
                case Type_BadAdjective:
                    handler->string_value("BadAdjective");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storeType.string_value);
          }
        if (flagHasInputUnit)
          {
            handler->start_pair("InputUnit");
            assert(storeInputUnit.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeInputUnit.size(); ++num1)
              {
                storeInputUnit[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasOutputUnit)
          {
            handler->start_pair("OutputUnit");
            assert(storeOutputUnit.size() >= 1);
            handler->start_array();
            for (size_t num2 = 0; num2 < storeOutputUnit.size(); ++num2)
              {
                storeOutputUnit[num2]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasType()))
          {
            return "When parsing the object for %what%, the \"Type\" field was missing.";
          }
        return NULL;
      }

    static UnitConversionErrorJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UnitConversionErrorJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UnitConversionErrorJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UnitConversionErrorJSON>, UnitConversionErrorJSON *, bool> generator("Type UnitConversionError", ignore_extras);
            parse_json_value(text, "Text for UnitConversionErrorJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UnitConversionErrorJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UnitConversionErrorJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UnitConversionErrorJSON>, UnitConversionErrorJSON *, bool> generator("Type UnitConversionError", ignore_extras);
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
    class FieldGeneratorType : public JSONStringGenerator
          {
          protected:
            FieldGeneratorType(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorType(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeTypeKnownValues known = stringToType(result);
                TypeType new_value;
                if (known == Type__none)
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
            virtual void handle_result(TypeType result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorType, TypeType, TypeType > fieldGeneratorType;
        JSONHoldingArrayGenerator<UnitOfMeasureJSON::Generator, RCHandle<UnitOfMeasureJSON>, UnitOfMeasureJSON *, bool > fieldGeneratorInputUnit;
        JSONHoldingArrayGenerator<UnitOfMeasureJSON::Generator, RCHandle<UnitOfMeasureJSON>, UnitOfMeasureJSON *, bool > fieldGeneratorOutputUnit;


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
            UnitConversionErrorJSON *result = new UnitConversionErrorJSON();
            assert(result != NULL);
            RCHandle<UnitConversionErrorJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(UnitConversionErrorJSON *result)
          {
            if (fieldGeneratorType.have_value)
              {
                result->setType(fieldGeneratorType.value);
                fieldGeneratorType.have_value = false;
              }
            else if (!(result->hasType()))
              {
                error("When parsing the object for %what%, the \"Type\" field was missing.");
              }
            if (fieldGeneratorInputUnit.have_value)
              {
                result->initInputUnit();
                size_t count = fieldGeneratorInputUnit.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendInputUnit(fieldGeneratorInputUnit.value[num].referenced());
                  }
                fieldGeneratorInputUnit.value.clear();
                fieldGeneratorInputUnit.have_value = false;
              }
            if (fieldGeneratorOutputUnit.have_value)
              {
                result->initOutputUnit();
                size_t count = fieldGeneratorOutputUnit.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendOutputUnit(fieldGeneratorOutputUnit.value[num].referenced());
                  }
                fieldGeneratorOutputUnit.value.clear();
                fieldGeneratorOutputUnit.have_value = false;
              }
          }
        virtual void handle_result(UnitConversionErrorJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'I':
                    if (strcmp(&(field_name[1]), "nputUnit") == 0)
                        return &fieldGeneratorInputUnit;
                    break;
                case 'O':
                    if (strcmp(&(field_name[1]), "utputUnit") == 0)
                        return &fieldGeneratorOutputUnit;
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "ype") == 0)
                        return &fieldGeneratorType;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorType("field \"Type\" of the UnitConversionError class"), fieldGeneratorInputUnit("field \"InputUnit\" of the UnitConversionError class", ignore_extras), fieldGeneratorOutputUnit("field \"OutputUnit\" of the UnitConversionError class", ignore_extras)
          {
            set_what("the UnitConversionError class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorType.reset();
            fieldGeneratorInputUnit.reset();
            fieldGeneratorOutputUnit.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* UNITCONVERSIONERRORJSON_H */
