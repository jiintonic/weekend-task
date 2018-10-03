/* file "LabeledPhoneNumberJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef LABELEDPHONENUMBERJSON_H
#define LABELEDPHONENUMBERJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONBooleanGenerator.h"
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


class LabeledPhoneNumberJSON : public ReferenceCounted
  {
  private:
    bool flagHasId;
    OInteger storeId;
    bool flagHasLabel;
    std::string storeLabel;
    bool flagHasNumber;
    std::string storeNumber;
    bool flagHasIsSelected;
    bool storeIsSelected;
    bool flagHasIsDefault;
    bool storeIsDefault;

    LabeledPhoneNumberJSON(const LabeledPhoneNumberJSON &);
    LabeledPhoneNumberJSON & operator=(const LabeledPhoneNumberJSON &other);

    void  fromJSONId(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLabel(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNumber(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsSelected(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsDefault(JSONValue *json_value, bool ignore_extras = false);


  public:
    LabeledPhoneNumberJSON(void);
    virtual ~LabeledPhoneNumberJSON(void);
    bool  hasId(void) const;
    OInteger  getId(void);
    const OInteger  getId(void) const;
    bool  hasLabel(void) const;
    std::string  getLabel(void);
    const std::string  getLabel(void) const;
    bool  hasNumber(void) const;
    std::string  getNumber(void);
    const std::string  getNumber(void) const;
    bool  hasIsSelected(void) const;
    bool  getIsSelected(void);
    const bool  getIsSelected(void) const;
    bool  hasIsDefault(void) const;
    bool  getIsDefault(void);
    const bool  getIsDefault(void) const;


    void setId(OInteger new_value)
      {
        flagHasId = true;
        if (new_value < -1)
            throw("The value for field Id of LabeledPhoneNumberJSON is less than the lower bound (-1) for that field.");
        storeId = new_value;
      }
    void unsetId(void)
      {
        flagHasId = false;
      }
    void setLabel(std::string new_value)
      {
        flagHasLabel = true;
        storeLabel = new_value;
      }
    void unsetLabel(void)
      {
        flagHasLabel = false;
      }
    void setNumber(std::string new_value)
      {
        flagHasNumber = true;
        storeNumber = new_value;
      }
    void unsetNumber(void)
      {
        flagHasNumber = false;
      }
    void setIsSelected(bool new_value)
      {
        flagHasIsSelected = true;
        storeIsSelected = new_value;
      }
    void unsetIsSelected(void)
      {
        flagHasIsSelected = false;
      }
    void setIsDefault(bool new_value)
      {
        flagHasIsDefault = true;
        storeIsDefault = new_value;
      }
    void unsetIsDefault(void)
      {
        flagHasIsDefault = false;
      }


    void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        if (flagHasId)
          {
            handler->start_pair("Id");
            handler->number_value(storeId.get_o_integer());
          }
        if (flagHasLabel)
          {
            handler->start_pair("Label");
            handler->string_value(storeLabel);
          }
        assert(flagHasNumber);
        handler->start_pair("Number");
        handler->string_value(storeNumber);
        if (flagHasIsSelected)
          {
            handler->start_pair("IsSelected");
            handler->boolean_value(storeIsSelected);
          }
        if (flagHasIsDefault)
          {
            handler->start_pair("IsDefault");
            handler->boolean_value(storeIsDefault);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasNumber()))
          {
            return "When parsing the object for %what%, the \"Number\" field was missing.";
          }
        return NULL;
      }

    static LabeledPhoneNumberJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static LabeledPhoneNumberJSON *from_text(const char *text, bool ignore_extras = false)
      {
        LabeledPhoneNumberJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<LabeledPhoneNumberJSON>, LabeledPhoneNumberJSON *, bool> generator("Type LabeledPhoneNumber", ignore_extras);
            parse_json_value(text, "Text for LabeledPhoneNumberJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static LabeledPhoneNumberJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        LabeledPhoneNumberJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<LabeledPhoneNumberJSON>, LabeledPhoneNumberJSON *, bool> generator("Type LabeledPhoneNumber", ignore_extras);
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
        static char lowerBoundId[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundId>, OInteger, o_integer > fieldGeneratorId;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLabel;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorNumber;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsSelected;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsDefault;


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
            LabeledPhoneNumberJSON *result = new LabeledPhoneNumberJSON();
            assert(result != NULL);
            RCHandle<LabeledPhoneNumberJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(LabeledPhoneNumberJSON *result)
          {
            if (fieldGeneratorId.have_value)
              {
                result->setId(fieldGeneratorId.value);
                fieldGeneratorId.have_value = false;
              }
            if (fieldGeneratorLabel.have_value)
              {
                result->setLabel(fieldGeneratorLabel.value);
                fieldGeneratorLabel.have_value = false;
              }
            if (fieldGeneratorNumber.have_value)
              {
                result->setNumber(fieldGeneratorNumber.value);
                fieldGeneratorNumber.have_value = false;
              }
            else if (!(result->hasNumber()))
              {
                error("When parsing the object for %what%, the \"Number\" field was missing.");
              }
            if (fieldGeneratorIsSelected.have_value)
              {
                result->setIsSelected(fieldGeneratorIsSelected.value);
                fieldGeneratorIsSelected.have_value = false;
              }
            if (fieldGeneratorIsDefault.have_value)
              {
                result->setIsDefault(fieldGeneratorIsDefault.value);
                fieldGeneratorIsDefault.have_value = false;
              }
          }
        virtual void handle_result(LabeledPhoneNumberJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'I':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'd':
                            if (field_name[2] == 0)
                                return &fieldGeneratorId;
                            break;
                        case 's':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'D':
                                    if (strcmp(&(field_name[3]), "efault") == 0)
                                        return &fieldGeneratorIsDefault;
                                    break;
                                case 'S':
                                    if (strcmp(&(field_name[3]), "elected") == 0)
                                        return &fieldGeneratorIsSelected;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "abel") == 0)
                        return &fieldGeneratorLabel;
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "umber") == 0)
                        return &fieldGeneratorNumber;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorId("field \"Id\" of the LabeledPhoneNumber class"), fieldGeneratorLabel("field \"Label\" of the LabeledPhoneNumber class"), fieldGeneratorNumber("field \"Number\" of the LabeledPhoneNumber class"), fieldGeneratorIsSelected("field \"IsSelected\" of the LabeledPhoneNumber class"), fieldGeneratorIsDefault("field \"IsDefault\" of the LabeledPhoneNumber class")
          {
            set_what("the LabeledPhoneNumber class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorId.reset();
            fieldGeneratorLabel.reset();
            fieldGeneratorNumber.reset();
            fieldGeneratorIsSelected.reset();
            fieldGeneratorIsDefault.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* LABELEDPHONENUMBERJSON_H */
