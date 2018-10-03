/* file "ColorJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef COLORJSON_H
#define COLORJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerRangeGenerator.h"
#include <string>
#include <stdint.h>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class ColorJSON : public ReferenceCounted
  {
  private:
    bool flagHasName;
    std::string storeName;
    bool flagHasRed;
    uint8_t storeRed;
    bool flagHasGreen;
    uint8_t storeGreen;
    bool flagHasBlue;
    uint8_t storeBlue;
    bool flagHasHue;
    uint16_t storeHue;
    bool flagHasSaturation;
    uint8_t storeSaturation;
    bool flagHasBrightnessValue;
    uint8_t storeBrightnessValue;

    ColorJSON(const ColorJSON &);
    ColorJSON & operator=(const ColorJSON &other);

    void  fromJSONName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRed(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGreen(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBlue(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHue(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSaturation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBrightnessValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    ColorJSON(void);
    virtual ~ColorJSON(void);
    bool  hasName(void) const;
    std::string  getName(void);
    const std::string  getName(void) const;
    bool  hasRed(void) const;
    uint8_t  getRed(void);
    const uint8_t  getRed(void) const;
    bool  hasGreen(void) const;
    uint8_t  getGreen(void);
    const uint8_t  getGreen(void) const;
    bool  hasBlue(void) const;
    uint8_t  getBlue(void);
    const uint8_t  getBlue(void) const;
    bool  hasHue(void) const;
    uint16_t  getHue(void);
    const uint16_t  getHue(void) const;
    bool  hasSaturation(void) const;
    uint8_t  getSaturation(void);
    const uint8_t  getSaturation(void) const;
    bool  hasBrightnessValue(void) const;
    uint8_t  getBrightnessValue(void);
    const uint8_t  getBrightnessValue(void) const;


    void setName(std::string new_value)
      {
        flagHasName = true;
        storeName = new_value;
      }
    void unsetName(void)
      {
        flagHasName = false;
      }
    void setRed(uint8_t new_value)
      {
        flagHasRed = true;
        if (new_value < 0)
            throw("The value for field Red of ColorJSON is less than the lower bound (0) for that field.");
        if (new_value > 255)
            throw("The value for field Red of ColorJSON is greater than the upper bound (255) for that field.");
        storeRed = new_value;
      }
    void unsetRed(void)
      {
        flagHasRed = false;
      }
    void setGreen(uint8_t new_value)
      {
        flagHasGreen = true;
        if (new_value < 0)
            throw("The value for field Green of ColorJSON is less than the lower bound (0) for that field.");
        if (new_value > 255)
            throw("The value for field Green of ColorJSON is greater than the upper bound (255) for that field.");
        storeGreen = new_value;
      }
    void unsetGreen(void)
      {
        flagHasGreen = false;
      }
    void setBlue(uint8_t new_value)
      {
        flagHasBlue = true;
        if (new_value < 0)
            throw("The value for field Blue of ColorJSON is less than the lower bound (0) for that field.");
        if (new_value > 255)
            throw("The value for field Blue of ColorJSON is greater than the upper bound (255) for that field.");
        storeBlue = new_value;
      }
    void unsetBlue(void)
      {
        flagHasBlue = false;
      }
    void setHue(uint16_t new_value)
      {
        flagHasHue = true;
        if (new_value < 0)
            throw("The value for field Hue of ColorJSON is less than the lower bound (0) for that field.");
        if (new_value > 359)
            throw("The value for field Hue of ColorJSON is greater than the upper bound (359) for that field.");
        storeHue = new_value;
      }
    void unsetHue(void)
      {
        flagHasHue = false;
      }
    void setSaturation(uint8_t new_value)
      {
        flagHasSaturation = true;
        if (new_value < 0)
            throw("The value for field Saturation of ColorJSON is less than the lower bound (0) for that field.");
        if (new_value > 100)
            throw("The value for field Saturation of ColorJSON is greater than the upper bound (100) for that field.");
        storeSaturation = new_value;
      }
    void unsetSaturation(void)
      {
        flagHasSaturation = false;
      }
    void setBrightnessValue(uint8_t new_value)
      {
        flagHasBrightnessValue = true;
        if (new_value < 0)
            throw("The value for field BrightnessValue of ColorJSON is less than the lower bound (0) for that field.");
        if (new_value > 100)
            throw("The value for field BrightnessValue of ColorJSON is greater than the upper bound (100) for that field.");
        storeBrightnessValue = new_value;
      }
    void unsetBrightnessValue(void)
      {
        flagHasBrightnessValue = false;
      }


    void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        if (flagHasName)
          {
            handler->start_pair("Name");
            handler->string_value(storeName);
          }
        assert(flagHasRed);
        handler->start_pair("Red");
        handler->number_value(storeRed);
        assert(flagHasGreen);
        handler->start_pair("Green");
        handler->number_value(storeGreen);
        assert(flagHasBlue);
        handler->start_pair("Blue");
        handler->number_value(storeBlue);
        assert(flagHasHue);
        handler->start_pair("Hue");
        handler->number_value(storeHue);
        assert(flagHasSaturation);
        handler->start_pair("Saturation");
        handler->number_value(storeSaturation);
        assert(flagHasBrightnessValue);
        handler->start_pair("BrightnessValue");
        handler->number_value(storeBrightnessValue);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasRed()))
          {
            return "When parsing the object for %what%, the \"Red\" field was missing.";
          }
        if (!(hasGreen()))
          {
            return "When parsing the object for %what%, the \"Green\" field was missing.";
          }
        if (!(hasBlue()))
          {
            return "When parsing the object for %what%, the \"Blue\" field was missing.";
          }
        if (!(hasHue()))
          {
            return "When parsing the object for %what%, the \"Hue\" field was missing.";
          }
        if (!(hasSaturation()))
          {
            return "When parsing the object for %what%, the \"Saturation\" field was missing.";
          }
        if (!(hasBrightnessValue()))
          {
            return "When parsing the object for %what%, the \"BrightnessValue\" field was missing.";
          }
        return NULL;
      }

    static ColorJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ColorJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ColorJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ColorJSON>, ColorJSON *, bool> generator("Type Color", ignore_extras);
            parse_json_value(text, "Text for ColorJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ColorJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ColorJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ColorJSON>, ColorJSON *, bool> generator("Type Color", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorName;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 255>, uint8_t, uint8_t > fieldGeneratorRed;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 255>, uint8_t, uint8_t > fieldGeneratorGreen;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 255>, uint8_t, uint8_t > fieldGeneratorBlue;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint16_t, 0, 359>, uint16_t, uint16_t > fieldGeneratorHue;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 100>, uint8_t, uint8_t > fieldGeneratorSaturation;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 100>, uint8_t, uint8_t > fieldGeneratorBrightnessValue;


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
            ColorJSON *result = new ColorJSON();
            assert(result != NULL);
            RCHandle<ColorJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(ColorJSON *result)
          {
            if (fieldGeneratorName.have_value)
              {
                result->setName(fieldGeneratorName.value);
                fieldGeneratorName.have_value = false;
              }
            if (fieldGeneratorRed.have_value)
              {
                result->setRed(fieldGeneratorRed.value);
                fieldGeneratorRed.have_value = false;
              }
            else if (!(result->hasRed()))
              {
                error("When parsing the object for %what%, the \"Red\" field was missing.");
              }
            if (fieldGeneratorGreen.have_value)
              {
                result->setGreen(fieldGeneratorGreen.value);
                fieldGeneratorGreen.have_value = false;
              }
            else if (!(result->hasGreen()))
              {
                error("When parsing the object for %what%, the \"Green\" field was missing.");
              }
            if (fieldGeneratorBlue.have_value)
              {
                result->setBlue(fieldGeneratorBlue.value);
                fieldGeneratorBlue.have_value = false;
              }
            else if (!(result->hasBlue()))
              {
                error("When parsing the object for %what%, the \"Blue\" field was missing.");
              }
            if (fieldGeneratorHue.have_value)
              {
                result->setHue(fieldGeneratorHue.value);
                fieldGeneratorHue.have_value = false;
              }
            else if (!(result->hasHue()))
              {
                error("When parsing the object for %what%, the \"Hue\" field was missing.");
              }
            if (fieldGeneratorSaturation.have_value)
              {
                result->setSaturation(fieldGeneratorSaturation.value);
                fieldGeneratorSaturation.have_value = false;
              }
            else if (!(result->hasSaturation()))
              {
                error("When parsing the object for %what%, the \"Saturation\" field was missing.");
              }
            if (fieldGeneratorBrightnessValue.have_value)
              {
                result->setBrightnessValue(fieldGeneratorBrightnessValue.value);
                fieldGeneratorBrightnessValue.have_value = false;
              }
            else if (!(result->hasBrightnessValue()))
              {
                error("When parsing the object for %what%, the \"BrightnessValue\" field was missing.");
              }
          }
        virtual void handle_result(ColorJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'B':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'l':
                            if (strcmp(&(field_name[2]), "ue") == 0)
                                return &fieldGeneratorBlue;
                            break;
                        case 'r':
                            if (strcmp(&(field_name[2]), "ightnessValue") == 0)
                                return &fieldGeneratorBrightnessValue;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'G':
                    if (strcmp(&(field_name[1]), "reen") == 0)
                        return &fieldGeneratorGreen;
                    break;
                case 'H':
                    if (strcmp(&(field_name[1]), "ue") == 0)
                        return &fieldGeneratorHue;
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "ame") == 0)
                        return &fieldGeneratorName;
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "ed") == 0)
                        return &fieldGeneratorRed;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "aturation") == 0)
                        return &fieldGeneratorSaturation;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorName("field \"Name\" of the Color class"), fieldGeneratorRed("field \"Red\" of the Color class"), fieldGeneratorGreen("field \"Green\" of the Color class"), fieldGeneratorBlue("field \"Blue\" of the Color class"), fieldGeneratorHue("field \"Hue\" of the Color class"), fieldGeneratorSaturation("field \"Saturation\" of the Color class"), fieldGeneratorBrightnessValue("field \"BrightnessValue\" of the Color class")
          {
            set_what("the Color class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorName.reset();
            fieldGeneratorRed.reset();
            fieldGeneratorGreen.reset();
            fieldGeneratorBlue.reset();
            fieldGeneratorHue.reset();
            fieldGeneratorSaturation.reset();
            fieldGeneratorBrightnessValue.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* COLORJSON_H */
