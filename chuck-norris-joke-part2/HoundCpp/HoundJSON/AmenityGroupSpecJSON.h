/* file "AmenityGroupSpecJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef AMENITYGROUPSPECJSON_H
#define AMENITYGROUPSPECJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class AmenityGroupSpecJSON : public ReferenceCounted
  {
  public:
    class TypeAmenityGroupJSON : public ReferenceCounted
      {
      private:
        bool flagHasAmenityAlias;
        std::string storeAmenityAlias;
        bool flagHasAmenityName;
        std::string storeAmenityName;
        bool flagHasAmenitySpokenNameSingular;
        std::string storeAmenitySpokenNameSingular;
        bool flagHasAmenitySpokenNamePlural;
        std::string storeAmenitySpokenNamePlural;
        bool flagHasAmenityTopLevelName;
        std::string storeAmenityTopLevelName;
        bool flagHasAmenityTopLevelSpokenNameSingular;
        std::string storeAmenityTopLevelSpokenNameSingular;
        bool flagHasAmenityTopLevelSpokenNamePlural;
        std::string storeAmenityTopLevelSpokenNamePlural;

        TypeAmenityGroupJSON(const TypeAmenityGroupJSON &);
        TypeAmenityGroupJSON & operator=(const TypeAmenityGroupJSON &other);

        void  fromJSONAmenityAlias(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAmenityName(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAmenitySpokenNameSingular(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAmenitySpokenNamePlural(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAmenityTopLevelName(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAmenityTopLevelSpokenNameSingular(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAmenityTopLevelSpokenNamePlural(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeAmenityGroupJSON(void);
        virtual ~TypeAmenityGroupJSON(void);
        bool  hasAmenityAlias(void) const;
        std::string  getAmenityAlias(void);
        const std::string  getAmenityAlias(void) const;
        bool  hasAmenityName(void) const;
        std::string  getAmenityName(void);
        const std::string  getAmenityName(void) const;
        bool  hasAmenitySpokenNameSingular(void) const;
        std::string  getAmenitySpokenNameSingular(void);
        const std::string  getAmenitySpokenNameSingular(void) const;
        bool  hasAmenitySpokenNamePlural(void) const;
        std::string  getAmenitySpokenNamePlural(void);
        const std::string  getAmenitySpokenNamePlural(void) const;
        bool  hasAmenityTopLevelName(void) const;
        std::string  getAmenityTopLevelName(void);
        const std::string  getAmenityTopLevelName(void) const;
        bool  hasAmenityTopLevelSpokenNameSingular(void) const;
        std::string  getAmenityTopLevelSpokenNameSingular(void);
        const std::string  getAmenityTopLevelSpokenNameSingular(void) const;
        bool  hasAmenityTopLevelSpokenNamePlural(void) const;
        std::string  getAmenityTopLevelSpokenNamePlural(void);
        const std::string  getAmenityTopLevelSpokenNamePlural(void) const;


        void setAmenityAlias(std::string new_value)
          {
            flagHasAmenityAlias = true;
            storeAmenityAlias = new_value;
          }
        void unsetAmenityAlias(void)
          {
            flagHasAmenityAlias = false;
          }
        void setAmenityName(std::string new_value)
          {
            flagHasAmenityName = true;
            storeAmenityName = new_value;
          }
        void unsetAmenityName(void)
          {
            flagHasAmenityName = false;
          }
        void setAmenitySpokenNameSingular(std::string new_value)
          {
            flagHasAmenitySpokenNameSingular = true;
            storeAmenitySpokenNameSingular = new_value;
          }
        void unsetAmenitySpokenNameSingular(void)
          {
            flagHasAmenitySpokenNameSingular = false;
          }
        void setAmenitySpokenNamePlural(std::string new_value)
          {
            flagHasAmenitySpokenNamePlural = true;
            storeAmenitySpokenNamePlural = new_value;
          }
        void unsetAmenitySpokenNamePlural(void)
          {
            flagHasAmenitySpokenNamePlural = false;
          }
        void setAmenityTopLevelName(std::string new_value)
          {
            flagHasAmenityTopLevelName = true;
            storeAmenityTopLevelName = new_value;
          }
        void unsetAmenityTopLevelName(void)
          {
            flagHasAmenityTopLevelName = false;
          }
        void setAmenityTopLevelSpokenNameSingular(std::string new_value)
          {
            flagHasAmenityTopLevelSpokenNameSingular = true;
            storeAmenityTopLevelSpokenNameSingular = new_value;
          }
        void unsetAmenityTopLevelSpokenNameSingular(void)
          {
            flagHasAmenityTopLevelSpokenNameSingular = false;
          }
        void setAmenityTopLevelSpokenNamePlural(std::string new_value)
          {
            flagHasAmenityTopLevelSpokenNamePlural = true;
            storeAmenityTopLevelSpokenNamePlural = new_value;
          }
        void unsetAmenityTopLevelSpokenNamePlural(void)
          {
            flagHasAmenityTopLevelSpokenNamePlural = false;
          }


        void write_as_json(JSONHandler *handler) const
          {
            handler->start_object();
            write_fields_as_json(handler);
            handler->finish_object();
          }

        virtual void write_fields_as_json(JSONHandler *handler) const
          {
            assert(flagHasAmenityAlias);
            handler->start_pair("AmenityAlias");
            handler->string_value(storeAmenityAlias);
            assert(flagHasAmenityName);
            handler->start_pair("AmenityName");
            handler->string_value(storeAmenityName);
            if (flagHasAmenitySpokenNameSingular)
              {
                handler->start_pair("AmenitySpokenNameSingular");
                handler->string_value(storeAmenitySpokenNameSingular);
              }
            if (flagHasAmenitySpokenNamePlural)
              {
                handler->start_pair("AmenitySpokenNamePlural");
                handler->string_value(storeAmenitySpokenNamePlural);
              }
            if (flagHasAmenityTopLevelName)
              {
                handler->start_pair("AmenityTopLevelName");
                handler->string_value(storeAmenityTopLevelName);
              }
            if (flagHasAmenityTopLevelSpokenNameSingular)
              {
                handler->start_pair("AmenityTopLevelSpokenNameSingular");
                handler->string_value(storeAmenityTopLevelSpokenNameSingular);
              }
            if (flagHasAmenityTopLevelSpokenNamePlural)
              {
                handler->start_pair("AmenityTopLevelSpokenNamePlural");
                handler->string_value(storeAmenityTopLevelSpokenNamePlural);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasAmenityAlias()))
              {
                return "When parsing the object for %what%, the \"AmenityAlias\" field was missing.";
              }
            if (!(hasAmenityName()))
              {
                return "When parsing the object for %what%, the \"AmenityName\" field was missing.";
              }
            return NULL;
          }

        static TypeAmenityGroupJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeAmenityGroupJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeAmenityGroupJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeAmenityGroupJSON>, TypeAmenityGroupJSON *, bool> generator("Type TypeAmenityGroup", ignore_extras);
                parse_json_value(text, "Text for TypeAmenityGroupJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeAmenityGroupJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeAmenityGroupJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeAmenityGroupJSON>, TypeAmenityGroupJSON *, bool> generator("Type TypeAmenityGroup", ignore_extras);
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAmenityAlias;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAmenityName;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAmenitySpokenNameSingular;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAmenitySpokenNamePlural;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAmenityTopLevelName;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAmenityTopLevelSpokenNameSingular;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAmenityTopLevelSpokenNamePlural;


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
                TypeAmenityGroupJSON *result = new TypeAmenityGroupJSON();
                assert(result != NULL);
                RCHandle<TypeAmenityGroupJSON> result_holder = result;
                finish(result);
                handle_result(result);
              }
            void finish(TypeAmenityGroupJSON *result)
              {
                if (fieldGeneratorAmenityAlias.have_value)
                  {
                    result->setAmenityAlias(fieldGeneratorAmenityAlias.value);
                    fieldGeneratorAmenityAlias.have_value = false;
                  }
                else if (!(result->hasAmenityAlias()))
                  {
                    error("When parsing the object for %what%, the \"AmenityAlias\" field was missing.");
                  }
                if (fieldGeneratorAmenityName.have_value)
                  {
                    result->setAmenityName(fieldGeneratorAmenityName.value);
                    fieldGeneratorAmenityName.have_value = false;
                  }
                else if (!(result->hasAmenityName()))
                  {
                    error("When parsing the object for %what%, the \"AmenityName\" field was missing.");
                  }
                if (fieldGeneratorAmenitySpokenNameSingular.have_value)
                  {
                    result->setAmenitySpokenNameSingular(fieldGeneratorAmenitySpokenNameSingular.value);
                    fieldGeneratorAmenitySpokenNameSingular.have_value = false;
                  }
                if (fieldGeneratorAmenitySpokenNamePlural.have_value)
                  {
                    result->setAmenitySpokenNamePlural(fieldGeneratorAmenitySpokenNamePlural.value);
                    fieldGeneratorAmenitySpokenNamePlural.have_value = false;
                  }
                if (fieldGeneratorAmenityTopLevelName.have_value)
                  {
                    result->setAmenityTopLevelName(fieldGeneratorAmenityTopLevelName.value);
                    fieldGeneratorAmenityTopLevelName.have_value = false;
                  }
                if (fieldGeneratorAmenityTopLevelSpokenNameSingular.have_value)
                  {
                    result->setAmenityTopLevelSpokenNameSingular(fieldGeneratorAmenityTopLevelSpokenNameSingular.value);
                    fieldGeneratorAmenityTopLevelSpokenNameSingular.have_value = false;
                  }
                if (fieldGeneratorAmenityTopLevelSpokenNamePlural.have_value)
                  {
                    result->setAmenityTopLevelSpokenNamePlural(fieldGeneratorAmenityTopLevelSpokenNamePlural.value);
                    fieldGeneratorAmenityTopLevelSpokenNamePlural.have_value = false;
                  }
              }
            virtual void handle_result(TypeAmenityGroupJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strncmp(field_name, "Amenity", 7) == 0)
                  {
                    switch ((unsigned char)(field_name[7]))
                      {
                        case 'A':
                            if (strcmp(&(field_name[8]), "lias") == 0)
                                return &fieldGeneratorAmenityAlias;
                            break;
                        case 'N':
                            if (strcmp(&(field_name[8]), "ame") == 0)
                                return &fieldGeneratorAmenityName;
                            break;
                        case 'S':
                            if (strncmp(&(field_name[8]), "pokenName", 9) == 0)
                              {
                                switch ((unsigned char)(field_name[17]))
                                  {
                                    case 'P':
                                        if (strcmp(&(field_name[18]), "lural") == 0)
                                            return &fieldGeneratorAmenitySpokenNamePlural;
                                        break;
                                    case 'S':
                                        if (strcmp(&(field_name[18]), "ingular") == 0)
                                            return &fieldGeneratorAmenitySpokenNameSingular;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'T':
                            if (strncmp(&(field_name[8]), "opLevel", 7) == 0)
                              {
                                switch ((unsigned char)(field_name[15]))
                                  {
                                    case 'N':
                                        if (strcmp(&(field_name[16]), "ame") == 0)
                                            return &fieldGeneratorAmenityTopLevelName;
                                        break;
                                    case 'S':
                                        if (strncmp(&(field_name[16]), "pokenName", 9) == 0)
                                          {
                                            switch ((unsigned char)(field_name[25]))
                                              {
                                                case 'P':
                                                    if (strcmp(&(field_name[26]), "lural") == 0)
                                                        return &fieldGeneratorAmenityTopLevelSpokenNamePlural;
                                                    break;
                                                case 'S':
                                                    if (strcmp(&(field_name[26]), "ingular") == 0)
                                                        return &fieldGeneratorAmenityTopLevelSpokenNameSingular;
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
                            break;
                        default:
                            break;
                      }
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorAmenityAlias("field \"AmenityAlias\" of the TypeAmenityGroup class"), fieldGeneratorAmenityName("field \"AmenityName\" of the TypeAmenityGroup class"), fieldGeneratorAmenitySpokenNameSingular("field \"AmenitySpokenNameSingular\" of the TypeAmenityGroup class"), fieldGeneratorAmenitySpokenNamePlural("field \"AmenitySpokenNamePlural\" of the TypeAmenityGroup class"), fieldGeneratorAmenityTopLevelName("field \"AmenityTopLevelName\" of the TypeAmenityGroup class"), fieldGeneratorAmenityTopLevelSpokenNameSingular("field \"AmenityTopLevelSpokenNameSingular\" of the TypeAmenityGroup class"), fieldGeneratorAmenityTopLevelSpokenNamePlural("field \"AmenityTopLevelSpokenNamePlural\" of the TypeAmenityGroup class")
              {
                set_what("the TypeAmenityGroup class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorAmenityAlias.reset();
                fieldGeneratorAmenityName.reset();
                fieldGeneratorAmenitySpokenNameSingular.reset();
                fieldGeneratorAmenitySpokenNamePlural.reset();
                fieldGeneratorAmenityTopLevelName.reset();
                fieldGeneratorAmenityTopLevelSpokenNameSingular.reset();
                fieldGeneratorAmenityTopLevelSpokenNamePlural.reset();
                JSONObjectGenerator::reset();
              }
          };
      };

  private:
    bool flagHasAmenityGroupName;
    std::string storeAmenityGroupName;
    bool flagHasAmenityGroupSpokenNameSingular;
    std::string storeAmenityGroupSpokenNameSingular;
    bool flagHasAmenityGroupSpokenNamePlural;
    std::string storeAmenityGroupSpokenNamePlural;
    bool flagHasAmenityGroup;
    std::vector< TypeAmenityGroupJSON * > storeAmenityGroup;

    AmenityGroupSpecJSON(const AmenityGroupSpecJSON &);
    AmenityGroupSpecJSON & operator=(const AmenityGroupSpecJSON &other);

    void  fromJSONAmenityGroupName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAmenityGroupSpokenNameSingular(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAmenityGroupSpokenNamePlural(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAmenityGroup(JSONValue *json_value, bool ignore_extras = false);


  public:
    AmenityGroupSpecJSON(void);
    virtual ~AmenityGroupSpecJSON(void);
    bool  hasAmenityGroupName(void) const;
    std::string  getAmenityGroupName(void);
    const std::string  getAmenityGroupName(void) const;
    bool  hasAmenityGroupSpokenNameSingular(void) const;
    std::string  getAmenityGroupSpokenNameSingular(void);
    const std::string  getAmenityGroupSpokenNameSingular(void) const;
    bool  hasAmenityGroupSpokenNamePlural(void) const;
    std::string  getAmenityGroupSpokenNamePlural(void);
    const std::string  getAmenityGroupSpokenNamePlural(void) const;
    bool  hasAmenityGroup(void) const;
    size_t  countOfAmenityGroup(void) const;
    TypeAmenityGroupJSON *  elementOfAmenityGroup(size_t element_num);
    const TypeAmenityGroupJSON *  elementOfAmenityGroup(size_t element_num) const;
    std::vector< TypeAmenityGroupJSON * >  getAmenityGroup(void);
    const std::vector< TypeAmenityGroupJSON * >  getAmenityGroup(void) const;


    void setAmenityGroupName(std::string new_value)
      {
        flagHasAmenityGroupName = true;
        storeAmenityGroupName = new_value;
      }
    void unsetAmenityGroupName(void)
      {
        flagHasAmenityGroupName = false;
      }
    void setAmenityGroupSpokenNameSingular(std::string new_value)
      {
        flagHasAmenityGroupSpokenNameSingular = true;
        storeAmenityGroupSpokenNameSingular = new_value;
      }
    void unsetAmenityGroupSpokenNameSingular(void)
      {
        flagHasAmenityGroupSpokenNameSingular = false;
      }
    void setAmenityGroupSpokenNamePlural(std::string new_value)
      {
        flagHasAmenityGroupSpokenNamePlural = true;
        storeAmenityGroupSpokenNamePlural = new_value;
      }
    void unsetAmenityGroupSpokenNamePlural(void)
      {
        flagHasAmenityGroupSpokenNamePlural = false;
      }
    void initAmenityGroup(void)
      {
        if (flagHasAmenityGroup)
          {
            for (size_t num2 = 0; num2 < storeAmenityGroup.size(); ++num2)
              {
                storeAmenityGroup[num2]->remove_reference();
              }
          }
        flagHasAmenityGroup = true;
        storeAmenityGroup.clear();
      }
    void appendAmenityGroup(TypeAmenityGroupJSON * to_append)
      {
        if (!flagHasAmenityGroup)
          {
            flagHasAmenityGroup = true;
            storeAmenityGroup.clear();
          }
        assert(flagHasAmenityGroup);
        to_append->add_reference();
        storeAmenityGroup.push_back(to_append);
      }
    void unsetAmenityGroup(void)
      {
        if (flagHasAmenityGroup)
          {
            for (size_t num3 = 0; num3 < storeAmenityGroup.size(); ++num3)
              {
                storeAmenityGroup[num3]->remove_reference();
              }
          }
        flagHasAmenityGroup = false;
        storeAmenityGroup.clear();
      }


    void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        if (flagHasAmenityGroupName)
          {
            handler->start_pair("AmenityGroupName");
            handler->string_value(storeAmenityGroupName);
          }
        if (flagHasAmenityGroupSpokenNameSingular)
          {
            handler->start_pair("AmenityGroupSpokenNameSingular");
            handler->string_value(storeAmenityGroupSpokenNameSingular);
          }
        if (flagHasAmenityGroupSpokenNamePlural)
          {
            handler->start_pair("AmenityGroupSpokenNamePlural");
            handler->string_value(storeAmenityGroupSpokenNamePlural);
          }
        assert(flagHasAmenityGroup);
        handler->start_pair("AmenityGroup");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeAmenityGroup.size(); ++num1)
          {
            storeAmenityGroup[num1]->write_as_json(handler);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasAmenityGroup()))
          {
            return "When parsing the object for %what%, the \"AmenityGroup\" field was missing.";
          }
        return NULL;
      }

    static AmenityGroupSpecJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static AmenityGroupSpecJSON *from_text(const char *text, bool ignore_extras = false)
      {
        AmenityGroupSpecJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AmenityGroupSpecJSON>, AmenityGroupSpecJSON *, bool> generator("Type AmenityGroupSpec", ignore_extras);
            parse_json_value(text, "Text for AmenityGroupSpecJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static AmenityGroupSpecJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        AmenityGroupSpecJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AmenityGroupSpecJSON>, AmenityGroupSpecJSON *, bool> generator("Type AmenityGroupSpec", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAmenityGroupName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAmenityGroupSpokenNameSingular;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAmenityGroupSpokenNamePlural;
        JSONHoldingArrayGenerator<TypeAmenityGroupJSON::Generator, RCHandle<TypeAmenityGroupJSON>, TypeAmenityGroupJSON *, bool > fieldGeneratorAmenityGroup;


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
            AmenityGroupSpecJSON *result = new AmenityGroupSpecJSON();
            assert(result != NULL);
            RCHandle<AmenityGroupSpecJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(AmenityGroupSpecJSON *result)
          {
            if (fieldGeneratorAmenityGroupName.have_value)
              {
                result->setAmenityGroupName(fieldGeneratorAmenityGroupName.value);
                fieldGeneratorAmenityGroupName.have_value = false;
              }
            if (fieldGeneratorAmenityGroupSpokenNameSingular.have_value)
              {
                result->setAmenityGroupSpokenNameSingular(fieldGeneratorAmenityGroupSpokenNameSingular.value);
                fieldGeneratorAmenityGroupSpokenNameSingular.have_value = false;
              }
            if (fieldGeneratorAmenityGroupSpokenNamePlural.have_value)
              {
                result->setAmenityGroupSpokenNamePlural(fieldGeneratorAmenityGroupSpokenNamePlural.value);
                fieldGeneratorAmenityGroupSpokenNamePlural.have_value = false;
              }
            if (fieldGeneratorAmenityGroup.have_value)
              {
                result->initAmenityGroup();
                size_t count = fieldGeneratorAmenityGroup.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAmenityGroup(fieldGeneratorAmenityGroup.value[num].referenced());
                  }
                fieldGeneratorAmenityGroup.value.clear();
                fieldGeneratorAmenityGroup.have_value = false;
              }
            else if (!(result->hasAmenityGroup()))
              {
                error("When parsing the object for %what%, the \"AmenityGroup\" field was missing.");
              }
          }
        virtual void handle_result(AmenityGroupSpecJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strncmp(field_name, "AmenityGroup", 12) == 0)
              {
                switch ((unsigned char)(field_name[12]))
                  {
                    case 0:
                        return &fieldGeneratorAmenityGroup;
                    case 'N':
                        if (strcmp(&(field_name[13]), "ame") == 0)
                            return &fieldGeneratorAmenityGroupName;
                        break;
                    case 'S':
                        if (strncmp(&(field_name[13]), "pokenName", 9) == 0)
                          {
                            switch ((unsigned char)(field_name[22]))
                              {
                                case 'P':
                                    if (strcmp(&(field_name[23]), "lural") == 0)
                                        return &fieldGeneratorAmenityGroupSpokenNamePlural;
                                    break;
                                case 'S':
                                    if (strcmp(&(field_name[23]), "ingular") == 0)
                                        return &fieldGeneratorAmenityGroupSpokenNameSingular;
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
        Generator(bool ignore_extras = false) : fieldGeneratorAmenityGroupName("field \"AmenityGroupName\" of the AmenityGroupSpec class"), fieldGeneratorAmenityGroupSpokenNameSingular("field \"AmenityGroupSpokenNameSingular\" of the AmenityGroupSpec class"), fieldGeneratorAmenityGroupSpokenNamePlural("field \"AmenityGroupSpokenNamePlural\" of the AmenityGroupSpec class"), fieldGeneratorAmenityGroup("field \"AmenityGroup\" of the AmenityGroupSpec class", ignore_extras)
          {
            set_what("the AmenityGroupSpec class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorAmenityGroupName.reset();
            fieldGeneratorAmenityGroupSpokenNameSingular.reset();
            fieldGeneratorAmenityGroupSpokenNamePlural.reset();
            fieldGeneratorAmenityGroup.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* AMENITYGROUPSPECJSON_H */
