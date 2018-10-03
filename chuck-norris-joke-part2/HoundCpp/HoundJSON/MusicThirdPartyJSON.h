/* file "MusicThirdPartyJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MUSICTHIRDPARTYJSON_H
#define MUSICTHIRDPARTYJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class MusicThirdPartyJSON : public ReferenceCounted
  {
  public:
    enum TypeNameKnownValues
      {
        Name_SoundHound,
        Name_Pandora,
        Name_Spotify,
        Name_Rdio,
        Name_YouTube,
        Name_SoundCloud,
        Name_AppleMusic,
        Name_GoogleMusic,
        Name_Deezer,
        Name_AmazonPrimeMusic,
        Name_Tidal,
        Name_Default,
        Name__none
      };
    struct TypeName
      {
        bool in_known_list;
        std::string string_value;
        TypeNameKnownValues list_value;

        TypeName(void);
        TypeName(const TypeName &other);
        TypeName(TypeNameKnownValues other);
        bool  operator==(const TypeName &other) const;
        bool  operator!=(const TypeName &other) const;
        bool  operator<(const TypeName &other) const;
        bool  operator>(const TypeName &other) const;
        bool  operator>=(const TypeName &other) const;
        bool  operator<=(const TypeName &other) const;

      };

    static TypeNameKnownValues  stringToName(const char *chars);
    static const char * stringFromName(TypeNameKnownValues the_enum);

  private:
    bool flagHasName;
    TypeName storeName;

    MusicThirdPartyJSON(const MusicThirdPartyJSON &);
    MusicThirdPartyJSON & operator=(const MusicThirdPartyJSON &other);

    void  fromJSONName(JSONValue *json_value, bool ignore_extras = false);


  public:
    MusicThirdPartyJSON(void);
    virtual ~MusicThirdPartyJSON(void);
    bool  hasName(void) const;
    TypeName  getName(void);
    const TypeName  getName(void) const;
    const char * getNameAsChars(void) const;
    std::string  getNameAsString(void) const;


    void setName(TypeName new_value)
      {
        flagHasName = true;
        storeName = new_value;
      }
    void setName(const char *chars)
      {
        TypeNameKnownValues known = stringToName(chars);
        TypeName new_value;
        if (known == Name__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setName(new_value);
      }
    void setName(std::string the_string)
      {
        setName(the_string.c_str());
      }
    void setName(TypeNameKnownValues new_value)
      {
        TypeName new_full_value;
        assert(new_value != Name__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setName(new_full_value);
      }
    void unsetName(void)
      {
        flagHasName = false;
      }


    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        assert(flagHasName);
        handler->start_pair("Name");
        if (storeName.in_known_list)
          {
            switch (storeName.list_value)
              {
                case Name_SoundHound:
                    handler->string_value("SoundHound");
                    break;
                case Name_Pandora:
                    handler->string_value("Pandora");
                    break;
                case Name_Spotify:
                    handler->string_value("Spotify");
                    break;
                case Name_Rdio:
                    handler->string_value("Rdio");
                    break;
                case Name_YouTube:
                    handler->string_value("YouTube");
                    break;
                case Name_SoundCloud:
                    handler->string_value("SoundCloud");
                    break;
                case Name_AppleMusic:
                    handler->string_value("AppleMusic");
                    break;
                case Name_GoogleMusic:
                    handler->string_value("GoogleMusic");
                    break;
                case Name_Deezer:
                    handler->string_value("Deezer");
                    break;
                case Name_AmazonPrimeMusic:
                    handler->string_value("AmazonPrimeMusic");
                    break;
                case Name_Tidal:
                    handler->string_value("Tidal");
                    break;
                case Name_Default:
                    handler->string_value("Default");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storeName.string_value);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasName()))
          {
            return "When parsing the object for %what%, the \"Name\" field was missing.";
          }
        return NULL;
      }

    static MusicThirdPartyJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MusicThirdPartyJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MusicThirdPartyJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicThirdPartyJSON>, MusicThirdPartyJSON *, bool> generator("Type MusicThirdParty", ignore_extras);
            parse_json_value(text, "Text for MusicThirdPartyJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MusicThirdPartyJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MusicThirdPartyJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicThirdPartyJSON>, MusicThirdPartyJSON *, bool> generator("Type MusicThirdParty", ignore_extras);
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
    class FieldGeneratorName : public JSONStringGenerator
          {
          protected:
            FieldGeneratorName(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorName(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeNameKnownValues known = stringToName(result);
                TypeName new_value;
                if (known == Name__none)
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
            virtual void handle_result(TypeName result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorName, TypeName, TypeName > fieldGeneratorName;


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
            MusicThirdPartyJSON *result = new MusicThirdPartyJSON();
            assert(result != NULL);
            RCHandle<MusicThirdPartyJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(MusicThirdPartyJSON *result)
          {
            if (fieldGeneratorName.have_value)
              {
                result->setName(fieldGeneratorName.value);
                fieldGeneratorName.have_value = false;
              }
            else if (!(result->hasName()))
              {
                error("When parsing the object for %what%, the \"Name\" field was missing.");
              }
          }
        virtual void handle_result(MusicThirdPartyJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Name") == 0)
                return &fieldGeneratorName;
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorName("field \"Name\" of the MusicThirdParty class")
          {
            set_what("the MusicThirdParty class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorName.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* MUSICTHIRDPARTYJSON_H */
