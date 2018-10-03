/* file "MusicBuyLinkJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MUSICBUYLINKJSON_H
#define MUSICBUYLINKJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class MusicBuyLinkJSON : public ReferenceCounted
  {
  private:
    bool flagHasStore;
    std::string storeStore;
    bool flagHasURL;
    std::string storeURL;

    MusicBuyLinkJSON(const MusicBuyLinkJSON &);
    MusicBuyLinkJSON & operator=(const MusicBuyLinkJSON &other);

    void  fromJSONStore(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONURL(JSONValue *json_value, bool ignore_extras = false);


  public:
    MusicBuyLinkJSON(void);
    virtual ~MusicBuyLinkJSON(void);
    bool  hasStore(void) const;
    std::string  getStore(void);
    const std::string  getStore(void) const;
    bool  hasURL(void) const;
    std::string  getURL(void);
    const std::string  getURL(void) const;


    void setStore(std::string new_value)
      {
        flagHasStore = true;
        storeStore = new_value;
      }
    void unsetStore(void)
      {
        flagHasStore = false;
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


    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        assert(flagHasStore);
        handler->start_pair("Store");
        handler->string_value(storeStore);
        assert(flagHasURL);
        handler->start_pair("URL");
        handler->string_value(storeURL);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasStore()))
          {
            return "When parsing the object for %what%, the \"Store\" field was missing.";
          }
        if (!(hasURL()))
          {
            return "When parsing the object for %what%, the \"URL\" field was missing.";
          }
        return NULL;
      }

    static MusicBuyLinkJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MusicBuyLinkJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MusicBuyLinkJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicBuyLinkJSON>, MusicBuyLinkJSON *, bool> generator("Type MusicBuyLink", ignore_extras);
            parse_json_value(text, "Text for MusicBuyLinkJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MusicBuyLinkJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MusicBuyLinkJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicBuyLinkJSON>, MusicBuyLinkJSON *, bool> generator("Type MusicBuyLink", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorStore;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorURL;


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
            MusicBuyLinkJSON *result = new MusicBuyLinkJSON();
            assert(result != NULL);
            RCHandle<MusicBuyLinkJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(MusicBuyLinkJSON *result)
          {
            if (fieldGeneratorStore.have_value)
              {
                result->setStore(fieldGeneratorStore.value);
                fieldGeneratorStore.have_value = false;
              }
            else if (!(result->hasStore()))
              {
                error("When parsing the object for %what%, the \"Store\" field was missing.");
              }
            if (fieldGeneratorURL.have_value)
              {
                result->setURL(fieldGeneratorURL.value);
                fieldGeneratorURL.have_value = false;
              }
            else if (!(result->hasURL()))
              {
                error("When parsing the object for %what%, the \"URL\" field was missing.");
              }
          }
        virtual void handle_result(MusicBuyLinkJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'S':
                    if (strcmp(&(field_name[1]), "tore") == 0)
                        return &fieldGeneratorStore;
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
        Generator(bool ignore_extras = false) : fieldGeneratorStore("field \"Store\" of the MusicBuyLink class"), fieldGeneratorURL("field \"URL\" of the MusicBuyLink class")
          {
            set_what("the MusicBuyLink class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorStore.reset();
            fieldGeneratorURL.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* MUSICBUYLINKJSON_H */
