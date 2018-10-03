/* file "RandomNumberGeneratorInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef RANDOMNUMBERGENERATORINFORMATIONNUGGETJSON_H
#define RANDOMNUMBERGENERATORINFORMATIONNUGGETJSON_H

#pragma interface

#include "InformationNuggetJSON.h"
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


class RandomNumberGeneratorInformationNuggetJSON : public InformationNuggetJSON
  {
  private:
    bool flagHasRequests;
    std::vector< RandomNumberGeneratorRequestResultJSON * > storeRequests;
    bool flagHasIsMetaquery;
    bool storeIsMetaquery;
    bool flagHasSpecificMetaquery;
    bool storeSpecificMetaquery;
    bool flagHasTooLarge;
    bool storeTooLarge;

    RandomNumberGeneratorInformationNuggetJSON(const RandomNumberGeneratorInformationNuggetJSON &);
    RandomNumberGeneratorInformationNuggetJSON & operator=(const RandomNumberGeneratorInformationNuggetJSON &other);

    JSONValue * extraRequestsToJSON(void) const;
    JSONValue * extraIsMetaqueryToJSON(void) const;
    JSONValue * extraSpecificMetaqueryToJSON(void) const;
    JSONValue * extraTooLargeToJSON(void) const;

    void  fromJSONRequests(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsMetaquery(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpecificMetaquery(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTooLarge(JSONValue *json_value, bool ignore_extras = false);


  public:
    RandomNumberGeneratorInformationNuggetJSON(void);
    virtual ~RandomNumberGeneratorInformationNuggetJSON(void);
    const char * getNuggetKind(void) const;
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
    bool  hasTooLarge(void) const;
    bool  getTooLarge(void);
    const bool  getTooLarge(void) const;

    size_t extraInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasRequests)
            ++result;
        if (flagHasIsMetaquery)
            ++result;
        if (flagHasSpecificMetaquery)
            ++result;
        if (flagHasTooLarge)
            ++result;
        return result;
      }
    const char *extraInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasRequests)
          {
            if (remainder == 0)
                return "Requests";
            --remainder;
          }
        if (flagHasIsMetaquery)
          {
            if (remainder == 0)
                return "IsMetaquery";
            --remainder;
          }
        if (flagHasSpecificMetaquery)
          {
            if (remainder == 0)
                return "SpecificMetaquery";
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
    JSONValue *extraInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasRequests)
          {
            if (remainder == 0)
                return extraRequestsToJSON();
            --remainder;
          }
        if (flagHasIsMetaquery)
          {
            if (remainder == 0)
                return extraIsMetaqueryToJSON();
            --remainder;
          }
        if (flagHasSpecificMetaquery)
          {
            if (remainder == 0)
                return extraSpecificMetaqueryToJSON();
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
    const JSONValue *extraInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasRequests)
          {
            if (remainder == 0)
                return extraRequestsToJSON();
            --remainder;
          }
        if (flagHasIsMetaquery)
          {
            if (remainder == 0)
                return extraIsMetaqueryToJSON();
            --remainder;
          }
        if (flagHasSpecificMetaquery)
          {
            if (remainder == 0)
                return extraSpecificMetaqueryToJSON();
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
    JSONValue *extraInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'I':
                if (strcmp(&(field_name[1]), "sMetaquery") == 0)
                    return (flagHasIsMetaquery ? extraIsMetaqueryToJSON() : NULL);
                break;
            case 'R':
                if (strcmp(&(field_name[1]), "equests") == 0)
                    return (flagHasRequests ? extraRequestsToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "pecificMetaquery") == 0)
                    return (flagHasSpecificMetaquery ? extraSpecificMetaqueryToJSON() : NULL);
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
    const JSONValue *extraInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'I':
                if (strcmp(&(field_name[1]), "sMetaquery") == 0)
                    return (flagHasIsMetaquery ? extraIsMetaqueryToJSON() : NULL);
                break;
            case 'R':
                if (strcmp(&(field_name[1]), "equests") == 0)
                    return (flagHasRequests ? extraRequestsToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "pecificMetaquery") == 0)
                    return (flagHasSpecificMetaquery ? extraSpecificMetaqueryToJSON() : NULL);
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
    void setTooLarge(bool new_value)
      {
        flagHasTooLarge = true;
        storeTooLarge = new_value;
      }
    void unsetTooLarge(void)
      {
        flagHasTooLarge = false;
      }

    void extraInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'I':
                if (strcmp(&(key[1]), "sMetaquery") == 0)
                    {
                    fromJSONIsMetaquery(new_component, false);
                    return;
                    }
                break;
            case 'R':
                if (strcmp(&(key[1]), "equests") == 0)
                    {
                    fromJSONRequests(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strcmp(&(key[1]), "pecificMetaquery") == 0)
                    {
                    fromJSONSpecificMetaquery(new_component, false);
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
    void extraInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'I':
                if (strcmp(&(key[1]), "sMetaquery") == 0)
                    {
                    fromJSONIsMetaquery(new_component, false);
                    return;
                    }
                break;
            case 'R':
                if (strcmp(&(key[1]), "equests") == 0)
                    {
                    fromJSONRequests(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strcmp(&(key[1]), "pecificMetaquery") == 0)
                    {
                    fromJSONSpecificMetaquery(new_component, false);
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
        InformationNuggetJSON::write_fields_as_json(handler);
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
        if (flagHasTooLarge)
          {
            handler->start_pair("TooLarge");
            handler->boolean_value(storeTooLarge);
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

    static RandomNumberGeneratorInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static RandomNumberGeneratorInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        RandomNumberGeneratorInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RandomNumberGeneratorInformationNuggetJSON>, RandomNumberGeneratorInformationNuggetJSON *, bool> generator("Type RandomNumberGeneratorInformationNugget", ignore_extras);
            parse_json_value(text, "Text for RandomNumberGeneratorInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static RandomNumberGeneratorInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        RandomNumberGeneratorInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RandomNumberGeneratorInformationNuggetJSON>, RandomNumberGeneratorInformationNuggetJSON *, bool> generator("Type RandomNumberGeneratorInformationNugget", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public InformationNuggetJSON::Generator
      {
      private:
        JSONHoldingArrayGenerator<RandomNumberGeneratorRequestResultJSON::Generator, RCHandle<RandomNumberGeneratorRequestResultJSON>, RandomNumberGeneratorRequestResultJSON *, bool > fieldGeneratorRequests;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsMetaquery;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorSpecificMetaquery;
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
            if (!(strcmp(getInformationNuggetJSONKey().c_str(), "RandomNumberGenerator") == 0))
                throw("The key field has a value other than `RandomNumberGenerator'.");
            RandomNumberGeneratorInformationNuggetJSON *result = new RandomNumberGeneratorInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<RandomNumberGeneratorInformationNuggetJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void handle_result(InformationNuggetJSON *new_result)
          {
            handle_result((RandomNumberGeneratorInformationNuggetJSON *)new_result);
          }
        void finish(RandomNumberGeneratorInformationNuggetJSON *result)
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
            if (fieldGeneratorTooLarge.have_value)
              {
                result->setTooLarge(fieldGeneratorTooLarge.value);
                fieldGeneratorTooLarge.have_value = false;
              }
            InformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(RandomNumberGeneratorInformationNuggetJSON *new_result) = 0;
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
                case 'T':
                    if (strcmp(&(field_name[1]), "ooLarge") == 0)
                        return &fieldGeneratorTooLarge;
                    break;
                default:
                    break;
              }
            return InformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : InformationNuggetJSON::Generator(ignore_extras), fieldGeneratorRequests("field \"Requests\" of the RandomNumberGeneratorInformationNugget class", ignore_extras), fieldGeneratorIsMetaquery("field \"IsMetaquery\" of the RandomNumberGeneratorInformationNugget class"), fieldGeneratorSpecificMetaquery("field \"SpecificMetaquery\" of the RandomNumberGeneratorInformationNugget class"), fieldGeneratorTooLarge("field \"TooLarge\" of the RandomNumberGeneratorInformationNugget class")
          {
            set_what("the RandomNumberGeneratorInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorRequests.reset();
            fieldGeneratorIsMetaquery.reset();
            fieldGeneratorSpecificMetaquery.reset();
            fieldGeneratorTooLarge.reset();
            InformationNuggetJSON::Generator::reset();
          }
      };
  };

#endif /* RANDOMNUMBERGENERATORINFORMATIONNUGGETJSON_H */
