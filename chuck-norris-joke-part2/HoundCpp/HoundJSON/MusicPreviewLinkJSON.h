/* file "MusicPreviewLinkJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MUSICPREVIEWLINKJSON_H
#define MUSICPREVIEWLINKJSON_H

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


class MusicPreviewLinkJSON : public ReferenceCounted
  {
  private:
    bool flagHasSource;
    std::string storeSource;
    bool flagHasUrl;
    std::string storeUrl;

    MusicPreviewLinkJSON(const MusicPreviewLinkJSON &);
    MusicPreviewLinkJSON & operator=(const MusicPreviewLinkJSON &other);

    void  fromJSONSource(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUrl(JSONValue *json_value, bool ignore_extras = false);


  public:
    MusicPreviewLinkJSON(void);
    virtual ~MusicPreviewLinkJSON(void);
    bool  hasSource(void) const;
    std::string  getSource(void);
    const std::string  getSource(void) const;
    bool  hasUrl(void) const;
    std::string  getUrl(void);
    const std::string  getUrl(void) const;


    void setSource(std::string new_value)
      {
        flagHasSource = true;
        storeSource = new_value;
      }
    void unsetSource(void)
      {
        flagHasSource = false;
      }
    void setUrl(std::string new_value)
      {
        flagHasUrl = true;
        storeUrl = new_value;
      }
    void unsetUrl(void)
      {
        flagHasUrl = false;
      }


    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        assert(flagHasSource);
        handler->start_pair("Source");
        handler->string_value(storeSource);
        assert(flagHasUrl);
        handler->start_pair("Url");
        handler->string_value(storeUrl);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasSource()))
          {
            return "When parsing the object for %what%, the \"Source\" field was missing.";
          }
        if (!(hasUrl()))
          {
            return "When parsing the object for %what%, the \"Url\" field was missing.";
          }
        return NULL;
      }

    static MusicPreviewLinkJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MusicPreviewLinkJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MusicPreviewLinkJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicPreviewLinkJSON>, MusicPreviewLinkJSON *, bool> generator("Type MusicPreviewLink", ignore_extras);
            parse_json_value(text, "Text for MusicPreviewLinkJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MusicPreviewLinkJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MusicPreviewLinkJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicPreviewLinkJSON>, MusicPreviewLinkJSON *, bool> generator("Type MusicPreviewLink", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSource;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorUrl;


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
            MusicPreviewLinkJSON *result = new MusicPreviewLinkJSON();
            assert(result != NULL);
            RCHandle<MusicPreviewLinkJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(MusicPreviewLinkJSON *result)
          {
            if (fieldGeneratorSource.have_value)
              {
                result->setSource(fieldGeneratorSource.value);
                fieldGeneratorSource.have_value = false;
              }
            else if (!(result->hasSource()))
              {
                error("When parsing the object for %what%, the \"Source\" field was missing.");
              }
            if (fieldGeneratorUrl.have_value)
              {
                result->setUrl(fieldGeneratorUrl.value);
                fieldGeneratorUrl.have_value = false;
              }
            else if (!(result->hasUrl()))
              {
                error("When parsing the object for %what%, the \"Url\" field was missing.");
              }
          }
        virtual void handle_result(MusicPreviewLinkJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'S':
                    if (strcmp(&(field_name[1]), "ource") == 0)
                        return &fieldGeneratorSource;
                    break;
                case 'U':
                    if (strcmp(&(field_name[1]), "rl") == 0)
                        return &fieldGeneratorUrl;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorSource("field \"Source\" of the MusicPreviewLink class"), fieldGeneratorUrl("field \"Url\" of the MusicPreviewLink class")
          {
            set_what("the MusicPreviewLink class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorSource.reset();
            fieldGeneratorUrl.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* MUSICPREVIEWLINKJSON_H */
