/* file "SportsOlympicsAthleteJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSOLYMPICSATHLETEJSON_H
#define SPORTSOLYMPICSATHLETEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "SportsOlympicsOrganizationJSON.h"
#include "SportsOlympicsAthleteGenderJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsOlympicsAthleteJSON : public ReferenceCounted
  {
  private:
    bool flagHasFullName;
    std::string storeFullName;
    bool flagHasOrganization;
    SportsOlympicsOrganizationJSON * storeOrganization;
    bool flagHasGender;
    SportsOlympicsAthleteGenderJSON * storeGender;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsOlympicsAthleteJSON(const SportsOlympicsAthleteJSON &);
    SportsOlympicsAthleteJSON & operator=(const SportsOlympicsAthleteJSON &other);

    void  fromJSONFullName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOrganization(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGender(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsOlympicsAthleteJSON(void);
    virtual ~SportsOlympicsAthleteJSON(void);
    bool  hasFullName(void) const;
    std::string  getFullName(void);
    const std::string  getFullName(void) const;
    bool  hasOrganization(void) const;
    SportsOlympicsOrganizationJSON *  getOrganization(void);
    const SportsOlympicsOrganizationJSON *  getOrganization(void) const;
    bool  hasGender(void) const;
    SportsOlympicsAthleteGenderJSON *  getGender(void);
    const SportsOlympicsAthleteGenderJSON *  getGender(void) const;
    SportsOlympicsAthleteGenderJSON::TypeValue  getGenderValue(void);
    const SportsOlympicsAthleteGenderJSON::TypeValue  getGenderValue(void) const;
    const char * getGenderAsChars(void) const;
    std::string  getGenderAsString(void) const;

    virtual size_t extraSportsOlympicsAthleteComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsOlympicsAthleteComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsOlympicsAthleteComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsOlympicsAthleteComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsOlympicsAthleteLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsOlympicsAthleteLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setFullName(std::string new_value)
      {
        flagHasFullName = true;
        storeFullName = new_value;
      }
    void unsetFullName(void)
      {
        flagHasFullName = false;
      }
    void setOrganization(SportsOlympicsOrganizationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasOrganization)
          {
            storeOrganization->remove_reference();
          }
        flagHasOrganization = true;
        storeOrganization = new_value;
      }
    void unsetOrganization(void)
      {
        if (flagHasOrganization)
          {
            storeOrganization->remove_reference();
          }
        flagHasOrganization = false;
      }
    void setGender(SportsOlympicsAthleteGenderJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasGender)
          {
            storeGender->remove_reference();
          }
        flagHasGender = true;
        storeGender = new_value;
      }
    void setGender(SportsOlympicsAthleteGenderJSON::TypeValue new_value)
      {
        setGender(new SportsOlympicsAthleteGenderJSON(new_value));
      }
    void setGender(const char *chars)
      {
        SportsOlympicsAthleteGenderJSON::TypeValueKnownValues known = SportsOlympicsAthleteGenderJSON::stringToValue(chars);
        SportsOlympicsAthleteGenderJSON::TypeValue new_value;
        if (known == SportsOlympicsAthleteGenderJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setGender(new_value);
      }
    void setGender(std::string the_string)
      {
        setGender(the_string.c_str());
      }
    void unsetGender(void)
      {
        if (flagHasGender)
          {
            storeGender->remove_reference();
          }
        flagHasGender = false;
      }

    virtual void extraSportsOlympicsAthleteAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsOlympicsAthleteSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsOlympicsAthleteLookup(key);
        if (old_field == NULL)
          {
            extraSportsOlympicsAthleteAppendPair(key, new_component);
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
        assert(flagHasFullName);
        handler->start_pair("FullName");
        handler->string_value(storeFullName);
        assert(flagHasOrganization);
        handler->start_pair("Organization");
        storeOrganization->write_as_json(handler);
        if (flagHasGender)
          {
            handler->start_pair("Gender");
            storeGender->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasFullName()))
          {
            return "When parsing the object for %what%, the \"FullName\" field was missing.";
          }
        if (!(hasOrganization()))
          {
            return "When parsing the object for %what%, the \"Organization\" field was missing.";
          }
        return NULL;
      }

    static SportsOlympicsAthleteJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsOlympicsAthleteJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsOlympicsAthleteJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsAthleteJSON>, SportsOlympicsAthleteJSON *, bool> generator("Type SportsOlympicsAthlete", ignore_extras);
            parse_json_value(text, "Text for SportsOlympicsAthleteJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsOlympicsAthleteJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsOlympicsAthleteJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsAthleteJSON>, SportsOlympicsAthleteJSON *, bool> generator("Type SportsOlympicsAthlete", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorFullName;
        JSONHoldingGenerator<SportsOlympicsOrganizationJSON::Generator, RCHandle<SportsOlympicsOrganizationJSON>, SportsOlympicsOrganizationJSON *, bool > fieldGeneratorOrganization;
        JSONHoldingGenerator<SportsOlympicsAthleteGenderJSON::Generator, RCHandle<SportsOlympicsAthleteGenderJSON>, SportsOlympicsAthleteGenderJSON *, bool > fieldGeneratorGender;
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
            SportsOlympicsAthleteJSON *result = new SportsOlympicsAthleteJSON();
            assert(result != NULL);
            RCHandle<SportsOlympicsAthleteJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsOlympicsAthleteAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsOlympicsAthleteJSON *result)
          {
            if (fieldGeneratorFullName.have_value)
              {
                result->setFullName(fieldGeneratorFullName.value);
                fieldGeneratorFullName.have_value = false;
              }
            else if (!(result->hasFullName()))
              {
                error("When parsing the object for %what%, the \"FullName\" field was missing.");
              }
            if (fieldGeneratorOrganization.have_value)
              {
                result->setOrganization(fieldGeneratorOrganization.value.referenced());
                fieldGeneratorOrganization.have_value = false;
              }
            else if (!(result->hasOrganization()))
              {
                error("When parsing the object for %what%, the \"Organization\" field was missing.");
              }
            if (fieldGeneratorGender.have_value)
              {
                result->setGender(fieldGeneratorGender.value.referenced());
                fieldGeneratorGender.have_value = false;
              }
          }
        virtual void handle_result(SportsOlympicsAthleteJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'F':
                    if (strcmp(&(field_name[1]), "ullName") == 0)
                        return &fieldGeneratorFullName;
                    break;
                case 'G':
                    if (strcmp(&(field_name[1]), "ender") == 0)
                        return &fieldGeneratorGender;
                    break;
                case 'O':
                    if (strcmp(&(field_name[1]), "rganization") == 0)
                        return &fieldGeneratorOrganization;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorFullName("field \"FullName\" of the SportsOlympicsAthlete class"), fieldGeneratorOrganization("field \"Organization\" of the SportsOlympicsAthlete class", ignore_extras), fieldGeneratorGender("field \"Gender\" of the SportsOlympicsAthlete class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsOlympicsAthlete class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorFullName.reset();
            fieldGeneratorOrganization.reset();
            fieldGeneratorGender.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSOLYMPICSATHLETEJSON_H */
