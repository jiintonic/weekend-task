/* file "GeonameObjectJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef GEONAMEOBJECTJSON_H
#define GEONAMEOBJECTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerUnboundRangeGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
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


class GeonameObjectJSON : public ReferenceCounted
  {
  public:
    class TypeAttributesJSON : public ReferenceCounted
      {
      private:
        bool flagHasAttributeRequested;
        bool storeAttributeRequested;
        bool flagHasAttributeName;
        std::string storeAttributeName;
        bool flagHasAttributeValue;
        std::string storeAttributeValue;
        bool flagHasAttributeValueRaw;
        OInteger storeAttributeValueRaw;
        bool flagHasAttributeValueIsLong;
        bool storeAttributeValueIsLong;

        TypeAttributesJSON(const TypeAttributesJSON &);
        TypeAttributesJSON & operator=(const TypeAttributesJSON &other);

        void  fromJSONAttributeRequested(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAttributeName(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAttributeValue(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAttributeValueRaw(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAttributeValueIsLong(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeAttributesJSON(void);
        virtual ~TypeAttributesJSON(void);
        bool  hasAttributeRequested(void) const;
        bool  getAttributeRequested(void);
        const bool  getAttributeRequested(void) const;
        bool  hasAttributeName(void) const;
        std::string  getAttributeName(void);
        const std::string  getAttributeName(void) const;
        bool  hasAttributeValue(void) const;
        std::string  getAttributeValue(void);
        const std::string  getAttributeValue(void) const;
        bool  hasAttributeValueRaw(void) const;
        OInteger  getAttributeValueRaw(void);
        const OInteger  getAttributeValueRaw(void) const;
        bool  hasAttributeValueIsLong(void) const;
        bool  getAttributeValueIsLong(void);
        const bool  getAttributeValueIsLong(void) const;


        void setAttributeRequested(bool new_value)
          {
            flagHasAttributeRequested = true;
            storeAttributeRequested = new_value;
          }
        void unsetAttributeRequested(void)
          {
            flagHasAttributeRequested = false;
          }
        void setAttributeName(std::string new_value)
          {
            flagHasAttributeName = true;
            storeAttributeName = new_value;
          }
        void unsetAttributeName(void)
          {
            flagHasAttributeName = false;
          }
        void setAttributeValue(std::string new_value)
          {
            flagHasAttributeValue = true;
            storeAttributeValue = new_value;
          }
        void unsetAttributeValue(void)
          {
            flagHasAttributeValue = false;
          }
        void setAttributeValueRaw(OInteger new_value)
          {
            flagHasAttributeValueRaw = true;
            storeAttributeValueRaw = new_value;
          }
        void unsetAttributeValueRaw(void)
          {
            flagHasAttributeValueRaw = false;
          }
        void setAttributeValueIsLong(bool new_value)
          {
            flagHasAttributeValueIsLong = true;
            storeAttributeValueIsLong = new_value;
          }
        void unsetAttributeValueIsLong(void)
          {
            flagHasAttributeValueIsLong = false;
          }


        void write_as_json(JSONHandler *handler) const
          {
            handler->start_object();
            write_fields_as_json(handler);
            handler->finish_object();
          }

        virtual void write_fields_as_json(JSONHandler *handler) const
          {
            assert(flagHasAttributeRequested);
            handler->start_pair("AttributeRequested");
            handler->boolean_value(storeAttributeRequested);
            assert(flagHasAttributeName);
            handler->start_pair("AttributeName");
            handler->string_value(storeAttributeName);
            if (flagHasAttributeValue)
              {
                handler->start_pair("AttributeValue");
                handler->string_value(storeAttributeValue);
              }
            if (flagHasAttributeValueRaw)
              {
                handler->start_pair("AttributeValueRaw");
                handler->number_value(storeAttributeValueRaw.get_o_integer());
              }
            if (flagHasAttributeValueIsLong)
              {
                handler->start_pair("AttributeValueIsLong");
                handler->boolean_value(storeAttributeValueIsLong);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasAttributeRequested()))
              {
                return "When parsing the object for %what%, the \"AttributeRequested\" field was missing.";
              }
            if (!(hasAttributeName()))
              {
                return "When parsing the object for %what%, the \"AttributeName\" field was missing.";
              }
            return NULL;
          }

        static TypeAttributesJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeAttributesJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeAttributesJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeAttributesJSON>, TypeAttributesJSON *, bool> generator("Type TypeAttributes", ignore_extras);
                parse_json_value(text, "Text for TypeAttributesJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeAttributesJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeAttributesJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeAttributesJSON>, TypeAttributesJSON *, bool> generator("Type TypeAttributes", ignore_extras);
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
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorAttributeRequested;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAttributeName;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAttributeValue;
            JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorAttributeValueRaw;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorAttributeValueIsLong;


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
                TypeAttributesJSON *result = new TypeAttributesJSON();
                assert(result != NULL);
                RCHandle<TypeAttributesJSON> result_holder = result;
                finish(result);
                handle_result(result);
              }
            void finish(TypeAttributesJSON *result)
              {
                if (fieldGeneratorAttributeRequested.have_value)
                  {
                    result->setAttributeRequested(fieldGeneratorAttributeRequested.value);
                    fieldGeneratorAttributeRequested.have_value = false;
                  }
                else if (!(result->hasAttributeRequested()))
                  {
                    error("When parsing the object for %what%, the \"AttributeRequested\" field was missing.");
                  }
                if (fieldGeneratorAttributeName.have_value)
                  {
                    result->setAttributeName(fieldGeneratorAttributeName.value);
                    fieldGeneratorAttributeName.have_value = false;
                  }
                else if (!(result->hasAttributeName()))
                  {
                    error("When parsing the object for %what%, the \"AttributeName\" field was missing.");
                  }
                if (fieldGeneratorAttributeValue.have_value)
                  {
                    result->setAttributeValue(fieldGeneratorAttributeValue.value);
                    fieldGeneratorAttributeValue.have_value = false;
                  }
                if (fieldGeneratorAttributeValueRaw.have_value)
                  {
                    result->setAttributeValueRaw(fieldGeneratorAttributeValueRaw.value);
                    fieldGeneratorAttributeValueRaw.have_value = false;
                  }
                if (fieldGeneratorAttributeValueIsLong.have_value)
                  {
                    result->setAttributeValueIsLong(fieldGeneratorAttributeValueIsLong.value);
                    fieldGeneratorAttributeValueIsLong.have_value = false;
                  }
              }
            virtual void handle_result(TypeAttributesJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strncmp(field_name, "Attribute", 9) == 0)
                  {
                    switch ((unsigned char)(field_name[9]))
                      {
                        case 'N':
                            if (strcmp(&(field_name[10]), "ame") == 0)
                                return &fieldGeneratorAttributeName;
                            break;
                        case 'R':
                            if (strcmp(&(field_name[10]), "equested") == 0)
                                return &fieldGeneratorAttributeRequested;
                            break;
                        case 'V':
                            if (strncmp(&(field_name[10]), "alue", 4) == 0)
                              {
                                switch ((unsigned char)(field_name[14]))
                                  {
                                    case 0:
                                        return &fieldGeneratorAttributeValue;
                                    case 'I':
                                        if (strcmp(&(field_name[15]), "sLong") == 0)
                                            return &fieldGeneratorAttributeValueIsLong;
                                        break;
                                    case 'R':
                                        if (strcmp(&(field_name[15]), "aw") == 0)
                                            return &fieldGeneratorAttributeValueRaw;
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
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorAttributeRequested("field \"AttributeRequested\" of the TypeAttributes class"), fieldGeneratorAttributeName("field \"AttributeName\" of the TypeAttributes class"), fieldGeneratorAttributeValue("field \"AttributeValue\" of the TypeAttributes class"), fieldGeneratorAttributeValueRaw("field \"AttributeValueRaw\" of the TypeAttributes class"), fieldGeneratorAttributeValueIsLong("field \"AttributeValueIsLong\" of the TypeAttributes class")
              {
                set_what("the TypeAttributes class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorAttributeRequested.reset();
                fieldGeneratorAttributeName.reset();
                fieldGeneratorAttributeValue.reset();
                fieldGeneratorAttributeValueRaw.reset();
                fieldGeneratorAttributeValueIsLong.reset();
                JSONObjectGenerator::reset();
              }
          };
      };

  private:
    bool flagHasGeonameID;
    OInteger storeGeonameID;
    bool flagHasGeonameObjectType;
    OInteger storeGeonameObjectType;
    bool flagHasGeonameName;
    std::string storeGeonameName;
    bool flagHasURL;
    std::string storeURL;
    bool flagHasAttributes;
    std::vector< TypeAttributesJSON * > storeAttributes;

    GeonameObjectJSON(const GeonameObjectJSON &);
    GeonameObjectJSON & operator=(const GeonameObjectJSON &other);

    void  fromJSONGeonameID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGeonameObjectType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGeonameName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONURL(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAttributes(JSONValue *json_value, bool ignore_extras = false);


  public:
    GeonameObjectJSON(void);
    virtual ~GeonameObjectJSON(void);
    bool  hasGeonameID(void) const;
    OInteger  getGeonameID(void);
    const OInteger  getGeonameID(void) const;
    bool  hasGeonameObjectType(void) const;
    OInteger  getGeonameObjectType(void);
    const OInteger  getGeonameObjectType(void) const;
    bool  hasGeonameName(void) const;
    std::string  getGeonameName(void);
    const std::string  getGeonameName(void) const;
    bool  hasURL(void) const;
    std::string  getURL(void);
    const std::string  getURL(void) const;
    bool  hasAttributes(void) const;
    size_t  countOfAttributes(void) const;
    TypeAttributesJSON *  elementOfAttributes(size_t element_num);
    const TypeAttributesJSON *  elementOfAttributes(size_t element_num) const;
    std::vector< TypeAttributesJSON * >  getAttributes(void);
    const std::vector< TypeAttributesJSON * >  getAttributes(void) const;


    void setGeonameID(OInteger new_value)
      {
        flagHasGeonameID = true;
        if (new_value < 1)
            throw("The value for field GeonameID of GeonameObjectJSON is less than the lower bound (1) for that field.");
        storeGeonameID = new_value;
      }
    void unsetGeonameID(void)
      {
        flagHasGeonameID = false;
      }
    void setGeonameObjectType(OInteger new_value)
      {
        flagHasGeonameObjectType = true;
        if (new_value < 1)
            throw("The value for field GeonameObjectType of GeonameObjectJSON is less than the lower bound (1) for that field.");
        storeGeonameObjectType = new_value;
      }
    void unsetGeonameObjectType(void)
      {
        flagHasGeonameObjectType = false;
      }
    void setGeonameName(std::string new_value)
      {
        flagHasGeonameName = true;
        storeGeonameName = new_value;
      }
    void unsetGeonameName(void)
      {
        flagHasGeonameName = false;
      }
    void setURL(std::string new_value)
      {
        flagHasURL = true;
        storeURL = new_value;
      }
    void unsetURL(void)
      {
        flagHasURL = false;
      }
    void initAttributes(void)
      {
        if (flagHasAttributes)
          {
            for (size_t num2 = 0; num2 < storeAttributes.size(); ++num2)
              {
                storeAttributes[num2]->remove_reference();
              }
          }
        flagHasAttributes = true;
        storeAttributes.clear();
      }
    void appendAttributes(TypeAttributesJSON * to_append)
      {
        if (!flagHasAttributes)
          {
            flagHasAttributes = true;
            storeAttributes.clear();
          }
        assert(flagHasAttributes);
        to_append->add_reference();
        storeAttributes.push_back(to_append);
      }
    void unsetAttributes(void)
      {
        if (flagHasAttributes)
          {
            for (size_t num3 = 0; num3 < storeAttributes.size(); ++num3)
              {
                storeAttributes[num3]->remove_reference();
              }
          }
        flagHasAttributes = false;
        storeAttributes.clear();
      }


    void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        assert(flagHasGeonameID);
        handler->start_pair("GeonameID");
        handler->number_value(storeGeonameID.get_o_integer());
        assert(flagHasGeonameObjectType);
        handler->start_pair("GeonameObjectType");
        handler->number_value(storeGeonameObjectType.get_o_integer());
        if (flagHasGeonameName)
          {
            handler->start_pair("GeonameName");
            handler->string_value(storeGeonameName);
          }
        if (flagHasURL)
          {
            handler->start_pair("URL");
            handler->string_value(storeURL);
          }
        if (flagHasAttributes)
          {
            handler->start_pair("Attributes");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeAttributes.size(); ++num1)
              {
                storeAttributes[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasGeonameID()))
          {
            return "When parsing the object for %what%, the \"GeonameID\" field was missing.";
          }
        if (!(hasGeonameObjectType()))
          {
            return "When parsing the object for %what%, the \"GeonameObjectType\" field was missing.";
          }
        return NULL;
      }

    static GeonameObjectJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static GeonameObjectJSON *from_text(const char *text, bool ignore_extras = false)
      {
        GeonameObjectJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<GeonameObjectJSON>, GeonameObjectJSON *, bool> generator("Type GeonameObject", ignore_extras);
            parse_json_value(text, "Text for GeonameObjectJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static GeonameObjectJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        GeonameObjectJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<GeonameObjectJSON>, GeonameObjectJSON *, bool> generator("Type GeonameObject", ignore_extras);
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
        static char lowerBoundGeonameID[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundGeonameID>, OInteger, o_integer > fieldGeneratorGeonameID;
        static char lowerBoundGeonameObjectType[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundGeonameObjectType>, OInteger, o_integer > fieldGeneratorGeonameObjectType;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorGeonameName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorURL;
        JSONHoldingArrayGenerator<TypeAttributesJSON::Generator, RCHandle<TypeAttributesJSON>, TypeAttributesJSON *, bool > fieldGeneratorAttributes;


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
            GeonameObjectJSON *result = new GeonameObjectJSON();
            assert(result != NULL);
            RCHandle<GeonameObjectJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(GeonameObjectJSON *result)
          {
            if (fieldGeneratorGeonameID.have_value)
              {
                result->setGeonameID(fieldGeneratorGeonameID.value);
                fieldGeneratorGeonameID.have_value = false;
              }
            else if (!(result->hasGeonameID()))
              {
                error("When parsing the object for %what%, the \"GeonameID\" field was missing.");
              }
            if (fieldGeneratorGeonameObjectType.have_value)
              {
                result->setGeonameObjectType(fieldGeneratorGeonameObjectType.value);
                fieldGeneratorGeonameObjectType.have_value = false;
              }
            else if (!(result->hasGeonameObjectType()))
              {
                error("When parsing the object for %what%, the \"GeonameObjectType\" field was missing.");
              }
            if (fieldGeneratorGeonameName.have_value)
              {
                result->setGeonameName(fieldGeneratorGeonameName.value);
                fieldGeneratorGeonameName.have_value = false;
              }
            if (fieldGeneratorURL.have_value)
              {
                result->setURL(fieldGeneratorURL.value);
                fieldGeneratorURL.have_value = false;
              }
            if (fieldGeneratorAttributes.have_value)
              {
                result->initAttributes();
                size_t count = fieldGeneratorAttributes.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAttributes(fieldGeneratorAttributes.value[num].referenced());
                  }
                fieldGeneratorAttributes.value.clear();
                fieldGeneratorAttributes.have_value = false;
              }
          }
        virtual void handle_result(GeonameObjectJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "ttributes") == 0)
                        return &fieldGeneratorAttributes;
                    break;
                case 'G':
                    if (strncmp(&(field_name[1]), "eoname", 6) == 0)
                      {
                        switch ((unsigned char)(field_name[7]))
                          {
                            case 'I':
                                if (strcmp(&(field_name[8]), "D") == 0)
                                    return &fieldGeneratorGeonameID;
                                break;
                            case 'N':
                                if (strcmp(&(field_name[8]), "ame") == 0)
                                    return &fieldGeneratorGeonameName;
                                break;
                            case 'O':
                                if (strcmp(&(field_name[8]), "bjectType") == 0)
                                    return &fieldGeneratorGeonameObjectType;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'U':
                    if (strcmp(&(field_name[1]), "RL") == 0)
                        return &fieldGeneratorURL;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorGeonameID("field \"GeonameID\" of the GeonameObject class"), fieldGeneratorGeonameObjectType("field \"GeonameObjectType\" of the GeonameObject class"), fieldGeneratorGeonameName("field \"GeonameName\" of the GeonameObject class"), fieldGeneratorURL("field \"URL\" of the GeonameObject class"), fieldGeneratorAttributes("field \"Attributes\" of the GeonameObject class", ignore_extras)
          {
            set_what("the GeonameObject class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorGeonameID.reset();
            fieldGeneratorGeonameObjectType.reset();
            fieldGeneratorGeonameName.reset();
            fieldGeneratorURL.reset();
            fieldGeneratorAttributes.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* GEONAMEOBJECTJSON_H */
