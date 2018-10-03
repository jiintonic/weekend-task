/* file "SportsOlympicsOrganizationResponseStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSOLYMPICSORGANIZATIONRESPONSESTATEJSON_H
#define SPORTSOLYMPICSORGANIZATIONRESPONSESTATEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
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


class SportsOlympicsOrganizationResponseStateJSON : public ReferenceCounted
  {
  private:
    bool flagHasOrganizations;
    std::vector< std::string > storeOrganizations;
    bool flagHasOrganizationsNotFound;
    bool storeOrganizationsNotFound;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsOlympicsOrganizationResponseStateJSON(const SportsOlympicsOrganizationResponseStateJSON &);
    SportsOlympicsOrganizationResponseStateJSON & operator=(const SportsOlympicsOrganizationResponseStateJSON &other);

    void  fromJSONOrganizations(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOrganizationsNotFound(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsOlympicsOrganizationResponseStateJSON(void);
    virtual ~SportsOlympicsOrganizationResponseStateJSON(void);
    bool  hasOrganizations(void) const;
    size_t  countOfOrganizations(void) const;
    std::string  elementOfOrganizations(size_t element_num);
    const std::string  elementOfOrganizations(size_t element_num) const;
    std::vector< std::string >  getOrganizations(void);
    const std::vector< std::string >  getOrganizations(void) const;
    bool  hasOrganizationsNotFound(void) const;
    bool  getOrganizationsNotFound(void);
    const bool  getOrganizationsNotFound(void) const;

    virtual size_t extraSportsOlympicsOrganizationResponseStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsOlympicsOrganizationResponseStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsOlympicsOrganizationResponseStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsOlympicsOrganizationResponseStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsOlympicsOrganizationResponseStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsOlympicsOrganizationResponseStateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void initOrganizations(void)
      {
        flagHasOrganizations = true;
        storeOrganizations.clear();
      }
    void appendOrganizations(std::string to_append)
      {
        if (!flagHasOrganizations)
          {
            flagHasOrganizations = true;
            storeOrganizations.clear();
          }
        assert(flagHasOrganizations);
        storeOrganizations.push_back(to_append);
      }
    void unsetOrganizations(void)
      {
        flagHasOrganizations = false;
        storeOrganizations.clear();
      }
    void setOrganizationsNotFound(bool new_value)
      {
        flagHasOrganizationsNotFound = true;
        storeOrganizationsNotFound = new_value;
      }
    void unsetOrganizationsNotFound(void)
      {
        flagHasOrganizationsNotFound = false;
      }

    virtual void extraSportsOlympicsOrganizationResponseStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsOlympicsOrganizationResponseStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsOlympicsOrganizationResponseStateLookup(key);
        if (old_field == NULL)
          {
            extraSportsOlympicsOrganizationResponseStateAppendPair(key, new_component);
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

    virtual void write_as_json(JSONHandler *handler) const
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
        if (flagHasOrganizations)
          {
            handler->start_pair("Organizations");
            assert(storeOrganizations.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeOrganizations.size(); ++num1)
              {
                handler->string_value(storeOrganizations[num1]);
              }
            handler->finish_array();
          }
        if (flagHasOrganizationsNotFound)
          {
            handler->start_pair("OrganizationsNotFound");
            handler->boolean_value(storeOrganizationsNotFound);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SportsOlympicsOrganizationResponseStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsOlympicsOrganizationResponseStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsOlympicsOrganizationResponseStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsOrganizationResponseStateJSON>, SportsOlympicsOrganizationResponseStateJSON *, bool> generator("Type SportsOlympicsOrganizationResponseState", ignore_extras);
            parse_json_value(text, "Text for SportsOlympicsOrganizationResponseStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsOlympicsOrganizationResponseStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsOlympicsOrganizationResponseStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsOrganizationResponseStateJSON>, SportsOlympicsOrganizationResponseStateJSON *, bool> generator("Type SportsOlympicsOrganizationResponseState", ignore_extras);
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
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorOrganizations;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorOrganizationsNotFound;
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
            SportsOlympicsOrganizationResponseStateJSON *result = new SportsOlympicsOrganizationResponseStateJSON();
            assert(result != NULL);
            RCHandle<SportsOlympicsOrganizationResponseStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsOlympicsOrganizationResponseStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsOlympicsOrganizationResponseStateJSON *result)
          {
            if (fieldGeneratorOrganizations.have_value)
              {
                result->initOrganizations();
                size_t count = fieldGeneratorOrganizations.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendOrganizations(fieldGeneratorOrganizations.value[num]);
                  }
                fieldGeneratorOrganizations.value.clear();
                fieldGeneratorOrganizations.have_value = false;
              }
            if (fieldGeneratorOrganizationsNotFound.have_value)
              {
                result->setOrganizationsNotFound(fieldGeneratorOrganizationsNotFound.value);
                fieldGeneratorOrganizationsNotFound.have_value = false;
              }
          }
        virtual void handle_result(SportsOlympicsOrganizationResponseStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strncmp(field_name, "Organizations", 13) == 0)
              {
                switch ((unsigned char)(field_name[13]))
                  {
                    case 0:
                        return &fieldGeneratorOrganizations;
                    case 'N':
                        if (strcmp(&(field_name[14]), "otFound") == 0)
                            return &fieldGeneratorOrganizationsNotFound;
                        break;
                    default:
                        break;
                  }
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorOrganizations("field \"Organizations\" of the SportsOlympicsOrganizationResponseState class"), fieldGeneratorOrganizationsNotFound("field \"OrganizationsNotFound\" of the SportsOlympicsOrganizationResponseState class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsOlympicsOrganizationResponseState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorOrganizations.reset();
            fieldGeneratorOrganizationsNotFound.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSOLYMPICSORGANIZATIONRESPONSESTATEJSON_H */
