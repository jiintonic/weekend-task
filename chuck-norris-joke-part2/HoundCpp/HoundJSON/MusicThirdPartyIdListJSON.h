/* file "MusicThirdPartyIdListJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MUSICTHIRDPARTYIDLISTJSON_H
#define MUSICTHIRDPARTYIDLISTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include <string>
#include "MusicThirdPartyJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class MusicThirdPartyIdListJSON : public ReferenceCounted
  {
  private:
    bool flagHasMusicThirdParty;
    MusicThirdPartyJSON * storeMusicThirdParty;
    bool flagHasIds;
    std::vector< std::string > storeIds;
    bool flagHasDeepLinks;
    std::vector< std::string > storeDeepLinks;

    MusicThirdPartyIdListJSON(const MusicThirdPartyIdListJSON &);
    MusicThirdPartyIdListJSON & operator=(const MusicThirdPartyIdListJSON &other);

    void  fromJSONMusicThirdParty(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIds(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDeepLinks(JSONValue *json_value, bool ignore_extras = false);


  public:
    MusicThirdPartyIdListJSON(void);
    virtual ~MusicThirdPartyIdListJSON(void);
    bool  hasMusicThirdParty(void) const;
    MusicThirdPartyJSON *  getMusicThirdParty(void);
    const MusicThirdPartyJSON *  getMusicThirdParty(void) const;
    bool  hasIds(void) const;
    size_t  countOfIds(void) const;
    std::string  elementOfIds(size_t element_num);
    const std::string  elementOfIds(size_t element_num) const;
    std::vector< std::string >  getIds(void);
    const std::vector< std::string >  getIds(void) const;
    bool  hasDeepLinks(void) const;
    size_t  countOfDeepLinks(void) const;
    std::string  elementOfDeepLinks(size_t element_num);
    const std::string  elementOfDeepLinks(size_t element_num) const;
    std::vector< std::string >  getDeepLinks(void);
    const std::vector< std::string >  getDeepLinks(void) const;


    void setMusicThirdParty(MusicThirdPartyJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMusicThirdParty)
          {
            storeMusicThirdParty->remove_reference();
          }
        flagHasMusicThirdParty = true;
        storeMusicThirdParty = new_value;
      }
    void unsetMusicThirdParty(void)
      {
        if (flagHasMusicThirdParty)
          {
            storeMusicThirdParty->remove_reference();
          }
        flagHasMusicThirdParty = false;
      }
    void initIds(void)
      {
        flagHasIds = true;
        storeIds.clear();
      }
    void appendIds(std::string to_append)
      {
        if (!flagHasIds)
          {
            flagHasIds = true;
            storeIds.clear();
          }
        assert(flagHasIds);
        storeIds.push_back(to_append);
      }
    void unsetIds(void)
      {
        flagHasIds = false;
        storeIds.clear();
      }
    void initDeepLinks(void)
      {
        flagHasDeepLinks = true;
        storeDeepLinks.clear();
      }
    void appendDeepLinks(std::string to_append)
      {
        if (!flagHasDeepLinks)
          {
            flagHasDeepLinks = true;
            storeDeepLinks.clear();
          }
        assert(flagHasDeepLinks);
        storeDeepLinks.push_back(to_append);
      }
    void unsetDeepLinks(void)
      {
        flagHasDeepLinks = false;
        storeDeepLinks.clear();
      }


    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        assert(flagHasMusicThirdParty);
        handler->start_pair("MusicThirdParty");
        storeMusicThirdParty->write_as_json(handler);
        assert(flagHasIds);
        handler->start_pair("Ids");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeIds.size(); ++num1)
          {
            handler->string_value(storeIds[num1]);
          }
        handler->finish_array();
        assert(flagHasDeepLinks);
        handler->start_pair("DeepLinks");
        handler->start_array();
        for (size_t num2 = 0; num2 < storeDeepLinks.size(); ++num2)
          {
            handler->string_value(storeDeepLinks[num2]);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasMusicThirdParty()))
          {
            return "When parsing the object for %what%, the \"MusicThirdParty\" field was missing.";
          }
        if (!(hasIds()))
          {
            return "When parsing the object for %what%, the \"Ids\" field was missing.";
          }
        if (!(hasDeepLinks()))
          {
            return "When parsing the object for %what%, the \"DeepLinks\" field was missing.";
          }
        return NULL;
      }

    static MusicThirdPartyIdListJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MusicThirdPartyIdListJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MusicThirdPartyIdListJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicThirdPartyIdListJSON>, MusicThirdPartyIdListJSON *, bool> generator("Type MusicThirdPartyIdList", ignore_extras);
            parse_json_value(text, "Text for MusicThirdPartyIdListJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MusicThirdPartyIdListJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MusicThirdPartyIdListJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicThirdPartyIdListJSON>, MusicThirdPartyIdListJSON *, bool> generator("Type MusicThirdPartyIdList", ignore_extras);
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
        JSONHoldingGenerator<MusicThirdPartyJSON::Generator, RCHandle<MusicThirdPartyJSON>, MusicThirdPartyJSON *, bool > fieldGeneratorMusicThirdParty;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorIds;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDeepLinks;


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
            MusicThirdPartyIdListJSON *result = new MusicThirdPartyIdListJSON();
            assert(result != NULL);
            RCHandle<MusicThirdPartyIdListJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(MusicThirdPartyIdListJSON *result)
          {
            if (fieldGeneratorMusicThirdParty.have_value)
              {
                result->setMusicThirdParty(fieldGeneratorMusicThirdParty.value.referenced());
                fieldGeneratorMusicThirdParty.have_value = false;
              }
            else if (!(result->hasMusicThirdParty()))
              {
                error("When parsing the object for %what%, the \"MusicThirdParty\" field was missing.");
              }
            if (fieldGeneratorIds.have_value)
              {
                result->initIds();
                size_t count = fieldGeneratorIds.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendIds(fieldGeneratorIds.value[num]);
                  }
                fieldGeneratorIds.value.clear();
                fieldGeneratorIds.have_value = false;
              }
            else if (!(result->hasIds()))
              {
                error("When parsing the object for %what%, the \"Ids\" field was missing.");
              }
            if (fieldGeneratorDeepLinks.have_value)
              {
                result->initDeepLinks();
                size_t count = fieldGeneratorDeepLinks.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendDeepLinks(fieldGeneratorDeepLinks.value[num]);
                  }
                fieldGeneratorDeepLinks.value.clear();
                fieldGeneratorDeepLinks.have_value = false;
              }
            else if (!(result->hasDeepLinks()))
              {
                error("When parsing the object for %what%, the \"DeepLinks\" field was missing.");
              }
          }
        virtual void handle_result(MusicThirdPartyIdListJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strcmp(&(field_name[1]), "eepLinks") == 0)
                        return &fieldGeneratorDeepLinks;
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "ds") == 0)
                        return &fieldGeneratorIds;
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "usicThirdParty") == 0)
                        return &fieldGeneratorMusicThirdParty;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorMusicThirdParty("field \"MusicThirdParty\" of the MusicThirdPartyIdList class", ignore_extras), fieldGeneratorIds("field \"Ids\" of the MusicThirdPartyIdList class"), fieldGeneratorDeepLinks("field \"DeepLinks\" of the MusicThirdPartyIdList class")
          {
            set_what("the MusicThirdPartyIdList class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorMusicThirdParty.reset();
            fieldGeneratorIds.reset();
            fieldGeneratorDeepLinks.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* MUSICTHIRDPARTYIDLISTJSON_H */
