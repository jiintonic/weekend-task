/* file "MoonPhaseAtTimeConversationStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MOONPHASEATTIMECONVERSATIONSTATEJSON_H
#define MOONPHASEATTIMECONVERSATIONSTATEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "DateTimeSpecJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class MoonPhaseAtTimeConversationStateJSON : public ReferenceCounted
  {
  public:
    enum TypeDateAndTimeKind
      {
        DateAndTimeKind_MoonPhaseAtTime
      };

    static TypeDateAndTimeKind  stringToDateAndTimeKind(const char *chars);
    static const char * stringFromDateAndTimeKind(TypeDateAndTimeKind the_enum);

  private:
    bool flagHasDateAndTimeKind;
    bool flagHasDateTimeSpec;
    DateTimeSpecJSON * storeDateTimeSpec;
    bool flagHasMoonPhase;
    std::string storeMoonPhase;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    MoonPhaseAtTimeConversationStateJSON(const MoonPhaseAtTimeConversationStateJSON &);
    MoonPhaseAtTimeConversationStateJSON & operator=(const MoonPhaseAtTimeConversationStateJSON &other);

    void  fromJSONDateAndTimeKind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDateTimeSpec(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMoonPhase(JSONValue *json_value, bool ignore_extras = false);


  public:
    MoonPhaseAtTimeConversationStateJSON(void);
    virtual ~MoonPhaseAtTimeConversationStateJSON(void);
    bool  hasDateAndTimeKind(void) const;
    TypeDateAndTimeKind  getDateAndTimeKind(void);
    const TypeDateAndTimeKind  getDateAndTimeKind(void) const;
    const char * getDateAndTimeKindAsChars(void) const;
    std::string  getDateAndTimeKindAsString(void) const;
    bool  hasDateTimeSpec(void) const;
    DateTimeSpecJSON *  getDateTimeSpec(void);
    const DateTimeSpecJSON *  getDateTimeSpec(void) const;
    bool  hasMoonPhase(void) const;
    std::string  getMoonPhase(void);
    const std::string  getMoonPhase(void) const;

    virtual size_t extraMoonPhaseAtTimeConversationStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraMoonPhaseAtTimeConversationStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraMoonPhaseAtTimeConversationStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraMoonPhaseAtTimeConversationStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraMoonPhaseAtTimeConversationStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraMoonPhaseAtTimeConversationStateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setDateAndTimeKind(void)
      {
        flagHasDateAndTimeKind = true;
      }
    void setDateAndTimeKind(TypeDateAndTimeKind new_value)
      {
        setDateAndTimeKind();
      }
    void setDateAndTimeKind(const char *chars)
      {
        setDateAndTimeKind(stringToDateAndTimeKind(chars));
      }
    void setDateAndTimeKind(std::string the_string)
      {
        setDateAndTimeKind(stringToDateAndTimeKind(the_string.c_str()));
      }
    void unsetDateAndTimeKind(void)
      {
        flagHasDateAndTimeKind = false;
      }
    void setDateTimeSpec(DateTimeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDateTimeSpec)
          {
            storeDateTimeSpec->remove_reference();
          }
        flagHasDateTimeSpec = true;
        storeDateTimeSpec = new_value;
      }
    void unsetDateTimeSpec(void)
      {
        if (flagHasDateTimeSpec)
          {
            storeDateTimeSpec->remove_reference();
          }
        flagHasDateTimeSpec = false;
      }
    void setMoonPhase(std::string new_value)
      {
        flagHasMoonPhase = true;
        storeMoonPhase = new_value;
      }
    void unsetMoonPhase(void)
      {
        flagHasMoonPhase = false;
      }

    virtual void extraMoonPhaseAtTimeConversationStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraMoonPhaseAtTimeConversationStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraMoonPhaseAtTimeConversationStateLookup(key);
        if (old_field == NULL)
          {
            extraMoonPhaseAtTimeConversationStateAppendPair(key, new_component);
          }
        else
          {
            size_t count = extraKeys.size();
            assert(count == extraValues.size());
            for (size_t num = 0; num < count; ++num)
              {
                if (strcmp(extraKeys[num].c_str(),  key) == 0)
                  {
                    extraValues[num] = new_component;
                    break;
                  }
              }
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
            old_field->remove_reference();
            old_field->remove_reference();
          }
      }

    void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        size_t extra_count = extraKeys.size();
        assert(extra_count == extraValues.size());
        for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
          {
            handler->start_pair(extraKeys[extra_num].c_str());
            extraValues[extra_num]->write(handler);
          }
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        assert(flagHasDateAndTimeKind);
        handler->start_pair("DateAndTimeKind");
        handler->string_value("MoonPhaseAtTime");
        assert(flagHasDateTimeSpec);
        handler->start_pair("DateTimeSpec");
        storeDateTimeSpec->write_as_json(handler);
        assert(flagHasMoonPhase);
        handler->start_pair("MoonPhase");
        handler->string_value(storeMoonPhase);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasDateAndTimeKind()))
          {
            return "When parsing the object for %what%, the \"DateAndTimeKind\" field was missing.";
          }
        if (!(hasDateTimeSpec()))
          {
            return "When parsing the object for %what%, the \"DateTimeSpec\" field was missing.";
          }
        if (!(hasMoonPhase()))
          {
            return "When parsing the object for %what%, the \"MoonPhase\" field was missing.";
          }
        return NULL;
      }

    static MoonPhaseAtTimeConversationStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MoonPhaseAtTimeConversationStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MoonPhaseAtTimeConversationStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MoonPhaseAtTimeConversationStateJSON>, MoonPhaseAtTimeConversationStateJSON *, bool> generator("Type MoonPhaseAtTimeConversationState", ignore_extras);
            parse_json_value(text, "Text for MoonPhaseAtTimeConversationStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MoonPhaseAtTimeConversationStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MoonPhaseAtTimeConversationStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MoonPhaseAtTimeConversationStateJSON>, MoonPhaseAtTimeConversationStateJSON *, bool> generator("Type MoonPhaseAtTimeConversationState", ignore_extras);
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
    class FieldGeneratorDateAndTimeKind : public JSONStringGenerator
          {
          protected:
            FieldGeneratorDateAndTimeKind(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorDateAndTimeKind(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToDateAndTimeKind(result));
              }
            virtual void handle_result(TypeDateAndTimeKind result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorDateAndTimeKind, TypeDateAndTimeKind, TypeDateAndTimeKind > fieldGeneratorDateAndTimeKind;
        JSONHoldingGenerator<DateTimeSpecJSON::Generator, RCHandle<DateTimeSpecJSON>, DateTimeSpecJSON *, bool > fieldGeneratorDateTimeSpec;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorMoonPhase;
        class UnknownFieldGenerator : public JSONValueHandler
          {
          public:
            bool ignore;
            std::vector<std::string> field_names;
            std::vector<RCHandle<JSONValue> > field_values;
            string_index *index;
            UnknownFieldGenerator(bool init_ignore) : ignore(init_ignore)
              {
            index = create_string_index();
              }
            ~UnknownFieldGenerator(void)
              {
                destroy_string_index(index);
              }


          protected:
            void new_value(JSONValue *item)
              {
                if (ignore)
                    return;
                assert(field_names.size() == (field_values.size() + 1));
                enter_into_string_index(index, field_names[field_values.size()].c_str(), item);
                field_values.push_back(item);
              }

          public:
            void reset()
              {
                field_names.clear();
                field_values.clear();
                destroy_string_index(index);
            index = create_string_index();
              }
          };
        UnknownFieldGenerator unknownFieldGenerator;


      protected:
        void start(void)
          {
          }
        JSONHandler *start_field(const char *field_name)
          {
            JSONHandler *result = start_known_field(field_name);
            if (result != NULL)
                return result;
            assert(unknownFieldGenerator.field_names.size() ==
                   unknownFieldGenerator.field_values.size());
            if (unknownFieldGenerator.ignore)
              {
                assert(unknownFieldGenerator.field_names.size() == 0);
              }
            else
              {
                unknownFieldGenerator.field_names.push_back(field_name);
              }
            return &unknownFieldGenerator;
          }
        void finish_field(const char *field_name, JSONHandler *field_handler)
          {
          }
        void finish(void)
          {
            MoonPhaseAtTimeConversationStateJSON *result = new MoonPhaseAtTimeConversationStateJSON();
            assert(result != NULL);
            RCHandle<MoonPhaseAtTimeConversationStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraMoonPhaseAtTimeConversationStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(MoonPhaseAtTimeConversationStateJSON *result)
          {
            if (fieldGeneratorDateAndTimeKind.have_value)
              {
                result->setDateAndTimeKind();
                fieldGeneratorDateAndTimeKind.have_value = false;
              }
            else if (!(result->hasDateAndTimeKind()))
              {
                error("When parsing the object for %what%, the \"DateAndTimeKind\" field was missing.");
              }
            if (fieldGeneratorDateTimeSpec.have_value)
              {
                result->setDateTimeSpec(fieldGeneratorDateTimeSpec.value.referenced());
                fieldGeneratorDateTimeSpec.have_value = false;
              }
            else if (!(result->hasDateTimeSpec()))
              {
                error("When parsing the object for %what%, the \"DateTimeSpec\" field was missing.");
              }
            if (fieldGeneratorMoonPhase.have_value)
              {
                result->setMoonPhase(fieldGeneratorMoonPhase.value);
                fieldGeneratorMoonPhase.have_value = false;
              }
            else if (!(result->hasMoonPhase()))
              {
                error("When parsing the object for %what%, the \"MoonPhase\" field was missing.");
              }
          }
        virtual void handle_result(MoonPhaseAtTimeConversationStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strncmp(&(field_name[1]), "ate", 3) == 0)
                      {
                        switch ((unsigned char)(field_name[4]))
                          {
                            case 'A':
                                if (strcmp(&(field_name[5]), "ndTimeKind") == 0)
                                    return &fieldGeneratorDateAndTimeKind;
                                break;
                            case 'T':
                                if (strcmp(&(field_name[5]), "imeSpec") == 0)
                                    return &fieldGeneratorDateTimeSpec;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "oonPhase") == 0)
                        return &fieldGeneratorMoonPhase;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorDateAndTimeKind("field \"DateAndTimeKind\" of the MoonPhaseAtTimeConversationState class"), fieldGeneratorDateTimeSpec("field \"DateTimeSpec\" of the MoonPhaseAtTimeConversationState class", ignore_extras), fieldGeneratorMoonPhase("field \"MoonPhase\" of the MoonPhaseAtTimeConversationState class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the MoonPhaseAtTimeConversationState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorDateAndTimeKind.reset();
            fieldGeneratorDateTimeSpec.reset();
            fieldGeneratorMoonPhase.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* MOONPHASEATTIMECONVERSATIONSTATEJSON_H */
