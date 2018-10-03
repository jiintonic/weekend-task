/* file "RandomNumberGeneratorCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef RANDOMNUMBERGENERATORCOMMANDJSON_H
#define RANDOMNUMBERGENERATORCOMMANDJSON_H

#pragma interface

#include "CommandResultJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include "RandomNumberGeneratorRequestResultJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class RandomNumberGeneratorCommandJSON : public CommandResultJSON
  {
  public:
    class TypeNativeDataJSON : public ReferenceCounted
      {
      private:
        bool flagHasRequests;
        std::vector< RandomNumberGeneratorRequestResultJSON * > storeRequests;
        bool flagHasIsMetaquery;
        bool storeIsMetaquery;
        bool flagHasSpecificMetaquery;
        bool storeSpecificMetaquery;

        TypeNativeDataJSON(const TypeNativeDataJSON &);
        TypeNativeDataJSON & operator=(const TypeNativeDataJSON &other);

        void  fromJSONRequests(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONIsMetaquery(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONSpecificMetaquery(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeNativeDataJSON(void);
        virtual ~TypeNativeDataJSON(void);
        bool  hasRequests(void) const;
        size_t  countOfRequests(void) const;
        RandomNumberGeneratorRequestResultJSON *  elementOfRequests(size_t element_num);
        const RandomNumberGeneratorRequestResultJSON *  elementOfRequests(size_t element_num) const;
        std::vector< RandomNumberGeneratorRequestResultJSON * >  getRequests(void);
        const std::vector< RandomNumberGeneratorRequestResultJSON * >  getRequests(void) const;
        bool  hasIsMetaquery(void) const;
        bool  getIsMetaquery(void);
        const bool  getIsMetaquery(void) const;
        bool  hasSpecificMetaquery(void) const;
        bool  getSpecificMetaquery(void);
        const bool  getSpecificMetaquery(void) const;


        void initRequests(void)
          {
            if (flagHasRequests)
              {
                for (size_t num2 = 0; num2 < storeRequests.size(); ++num2)
                  {
                    storeRequests[num2]->remove_reference();
                  }
              }
            flagHasRequests = true;
            storeRequests.clear();
          }
        void appendRequests(RandomNumberGeneratorRequestResultJSON * to_append)
          {
            if (!flagHasRequests)
              {
                flagHasRequests = true;
                storeRequests.clear();
              }
            assert(flagHasRequests);
            to_append->add_reference();
            storeRequests.push_back(to_append);
          }
        void unsetRequests(void)
          {
            if (flagHasRequests)
              {
                for (size_t num3 = 0; num3 < storeRequests.size(); ++num3)
                  {
                    storeRequests[num3]->remove_reference();
                  }
              }
            flagHasRequests = false;
            storeRequests.clear();
          }
        void setIsMetaquery(bool new_value)
          {
            flagHasIsMetaquery = true;
            storeIsMetaquery = new_value;
          }
        void unsetIsMetaquery(void)
          {
            flagHasIsMetaquery = false;
          }
        void setSpecificMetaquery(bool new_value)
          {
            flagHasSpecificMetaquery = true;
            storeSpecificMetaquery = new_value;
          }
        void unsetSpecificMetaquery(void)
          {
            flagHasSpecificMetaquery = false;
          }


        void write_as_json(JSONHandler *handler) const
          {
            handler->start_object();
            write_fields_as_json(handler);
            handler->finish_object();
          }

        virtual void write_fields_as_json(JSONHandler *handler) const
          {
            if (flagHasRequests)
              {
                handler->start_pair("Requests");
                handler->start_array();
                for (size_t num1 = 0; num1 < storeRequests.size(); ++num1)
                  {
                    storeRequests[num1]->write_as_json(handler);
                  }
                handler->finish_array();
              }
            assert(flagHasIsMetaquery);
            handler->start_pair("IsMetaquery");
            handler->boolean_value(storeIsMetaquery);
            if (flagHasSpecificMetaquery)
              {
                handler->start_pair("SpecificMetaquery");
                handler->boolean_value(storeSpecificMetaquery);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasIsMetaquery()))
              {
                return "When parsing the object for %what%, the \"IsMetaquery\" field was missing.";
              }
            return NULL;
          }

        static TypeNativeDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeNativeDataJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeNativeDataJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
                parse_json_value(text, "Text for TypeNativeDataJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeNativeDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeNativeDataJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
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
            JSONHoldingArrayGenerator<RandomNumberGeneratorRequestResultJSON::Generator, RCHandle<RandomNumberGeneratorRequestResultJSON>, RandomNumberGeneratorRequestResultJSON *, bool > fieldGeneratorRequests;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsMetaquery;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorSpecificMetaquery;


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
                TypeNativeDataJSON *result = new TypeNativeDataJSON();
                assert(result != NULL);
                RCHandle<TypeNativeDataJSON> result_holder = result;
                finish(result);
                handle_result(result);
              }
            void finish(TypeNativeDataJSON *result)
              {
                if (fieldGeneratorRequests.have_value)
                  {
                    result->initRequests();
                    size_t count = fieldGeneratorRequests.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendRequests(fieldGeneratorRequests.value[num].referenced());
                      }
                    fieldGeneratorRequests.value.clear();
                    fieldGeneratorRequests.have_value = false;
                  }
                if (fieldGeneratorIsMetaquery.have_value)
                  {
                    result->setIsMetaquery(fieldGeneratorIsMetaquery.value);
                    fieldGeneratorIsMetaquery.have_value = false;
                  }
                else if (!(result->hasIsMetaquery()))
                  {
                    error("When parsing the object for %what%, the \"IsMetaquery\" field was missing.");
                  }
                if (fieldGeneratorSpecificMetaquery.have_value)
                  {
                    result->setSpecificMetaquery(fieldGeneratorSpecificMetaquery.value);
                    fieldGeneratorSpecificMetaquery.have_value = false;
                  }
              }
            virtual void handle_result(TypeNativeDataJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'I':
                        if (strcmp(&(field_name[1]), "sMetaquery") == 0)
                            return &fieldGeneratorIsMetaquery;
                        break;
                    case 'R':
                        if (strcmp(&(field_name[1]), "equests") == 0)
                            return &fieldGeneratorRequests;
                        break;
                    case 'S':
                        if (strcmp(&(field_name[1]), "pecificMetaquery") == 0)
                            return &fieldGeneratorSpecificMetaquery;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorRequests("field \"Requests\" of the TypeNativeData class", ignore_extras), fieldGeneratorIsMetaquery("field \"IsMetaquery\" of the TypeNativeData class"), fieldGeneratorSpecificMetaquery("field \"SpecificMetaquery\" of the TypeNativeData class")
              {
                set_what("the TypeNativeData class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorRequests.reset();
                fieldGeneratorIsMetaquery.reset();
                fieldGeneratorSpecificMetaquery.reset();
                JSONObjectGenerator::reset();
              }
          };
      };

  private:
    bool flagHasNativeData;
    TypeNativeDataJSON * storeNativeData;
    bool flagHasTooLarge;
    bool storeTooLarge;

    RandomNumberGeneratorCommandJSON(const RandomNumberGeneratorCommandJSON &);
    RandomNumberGeneratorCommandJSON & operator=(const RandomNumberGeneratorCommandJSON &other);

    JSONValue * extraNativeDataToJSON(void) const;
    JSONValue * extraTooLargeToJSON(void) const;

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTooLarge(JSONValue *json_value, bool ignore_extras = false);


  public:
    RandomNumberGeneratorCommandJSON(void);
    virtual ~RandomNumberGeneratorCommandJSON(void);
    const char * getCommandKind(void) const;
    bool  hasNativeData(void) const;
    TypeNativeDataJSON *  getNativeData(void);
    const TypeNativeDataJSON *  getNativeData(void) const;
    bool  hasTooLarge(void) const;
    bool  getTooLarge(void);
    const bool  getTooLarge(void) const;

    size_t extraCommandResultComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasNativeData)
            ++result;
        if (flagHasTooLarge)
            ++result;
        return result;
      }
    const char *extraCommandResultComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return "NativeData";
            --remainder;
          }
        if (flagHasTooLarge)
          {
            if (remainder == 0)
                return "TooLarge";
            --remainder;
          }
        assert(false);
        return NULL;
      }
    JSONValue *extraCommandResultComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        if (flagHasTooLarge)
          {
            if (remainder == 0)
                return extraTooLargeToJSON();
            --remainder;
          }
        assert(false);
        return NULL;
      }
    const JSONValue *extraCommandResultComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        if (flagHasTooLarge)
          {
            if (remainder == 0)
                return extraTooLargeToJSON();
            --remainder;
          }
        assert(false);
        return NULL;
      }
    JSONValue *extraCommandResultLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'N':
                if (strcmp(&(field_name[1]), "ativeData") == 0)
                    return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
                break;
            case 'T':
                if (strcmp(&(field_name[1]), "ooLarge") == 0)
                    return (flagHasTooLarge ? extraTooLargeToJSON() : NULL);
                break;
            default:
                break;
          }
        return NULL;
      }
    const JSONValue *extraCommandResultLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'N':
                if (strcmp(&(field_name[1]), "ativeData") == 0)
                    return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
                break;
            case 'T':
                if (strcmp(&(field_name[1]), "ooLarge") == 0)
                    return (flagHasTooLarge ? extraTooLargeToJSON() : NULL);
                break;
            default:
                break;
          }
        return NULL;
      }

    void setNativeData(TypeNativeDataJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasNativeData)
          {
            storeNativeData->remove_reference();
          }
        flagHasNativeData = true;
        storeNativeData = new_value;
      }
    void unsetNativeData(void)
      {
        if (flagHasNativeData)
          {
            storeNativeData->remove_reference();
          }
        flagHasNativeData = false;
      }
    void setTooLarge(bool new_value)
      {
        flagHasTooLarge = true;
        storeTooLarge = new_value;
      }
    void unsetTooLarge(void)
      {
        flagHasTooLarge = false;
      }

    void extraCommandResultAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'N':
                if (strcmp(&(key[1]), "ativeData") == 0)
                    {
                    fromJSONNativeData(new_component, false);
                    return;
                    }
                break;
            case 'T':
                if (strcmp(&(key[1]), "ooLarge") == 0)
                    {
                    fromJSONTooLarge(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
      }
    void extraCommandResultSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'N':
                if (strcmp(&(key[1]), "ativeData") == 0)
                    {
                    fromJSONNativeData(new_component, false);
                    return;
                    }
                break;
            case 'T':
                if (strcmp(&(key[1]), "ooLarge") == 0)
                    {
                    fromJSONTooLarge(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
      }

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        CommandResultJSON::write_fields_as_json(handler);
        assert(flagHasNativeData);
        handler->start_pair("NativeData");
        storeNativeData->write_as_json(handler);
        if (flagHasTooLarge)
          {
            handler->start_pair("TooLarge");
            handler->boolean_value(storeTooLarge);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasNativeData()))
          {
            return "When parsing the object for %what%, the \"NativeData\" field was missing.";
          }
        return NULL;
      }

    static RandomNumberGeneratorCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static RandomNumberGeneratorCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        RandomNumberGeneratorCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RandomNumberGeneratorCommandJSON>, RandomNumberGeneratorCommandJSON *, bool> generator("Type RandomNumberGeneratorCommand", ignore_extras);
            parse_json_value(text, "Text for RandomNumberGeneratorCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static RandomNumberGeneratorCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        RandomNumberGeneratorCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RandomNumberGeneratorCommandJSON>, RandomNumberGeneratorCommandJSON *, bool> generator("Type RandomNumberGeneratorCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public CommandResultJSON::Generator
      {
      private:
        JSONHoldingGenerator<TypeNativeDataJSON::Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool > fieldGeneratorNativeData;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorTooLarge;


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
            if (!(strcmp(getCommandResultJSONKey().c_str(), "RandomNumberGeneratorCommand") == 0))
                throw("The key field has a value other than `RandomNumberGeneratorCommand'.");
            RandomNumberGeneratorCommandJSON *result = new RandomNumberGeneratorCommandJSON();
            assert(result != NULL);
            RCHandle<RandomNumberGeneratorCommandJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void handle_result(CommandResultJSON *new_result)
          {
            handle_result((RandomNumberGeneratorCommandJSON *)new_result);
          }
        void finish(RandomNumberGeneratorCommandJSON *result)
          {
            if (fieldGeneratorNativeData.have_value)
              {
                result->setNativeData(fieldGeneratorNativeData.value.referenced());
                fieldGeneratorNativeData.have_value = false;
              }
            else if (!(result->hasNativeData()))
              {
                error("When parsing the object for %what%, the \"NativeData\" field was missing.");
              }
            if (fieldGeneratorTooLarge.have_value)
              {
                result->setTooLarge(fieldGeneratorTooLarge.value);
                fieldGeneratorTooLarge.have_value = false;
              }
            CommandResultJSON::Generator::finish(result);
          }
        virtual void handle_result(RandomNumberGeneratorCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'N':
                    if (strcmp(&(field_name[1]), "ativeData") == 0)
                        return &fieldGeneratorNativeData;
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "ooLarge") == 0)
                        return &fieldGeneratorTooLarge;
                    break;
                default:
                    break;
              }
            return CommandResultJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CommandResultJSON::Generator(ignore_extras), fieldGeneratorNativeData("field \"NativeData\" of the RandomNumberGeneratorCommand class", ignore_extras), fieldGeneratorTooLarge("field \"TooLarge\" of the RandomNumberGeneratorCommand class")
          {
            set_what("the RandomNumberGeneratorCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNativeData.reset();
            fieldGeneratorTooLarge.reset();
            CommandResultJSON::Generator::reset();
          }
      };
  };

#endif /* RANDOMNUMBERGENERATORCOMMANDJSON_H */
