/* file "GeonameFactsInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef GEONAMEFACTSINFORMATIONNUGGETJSON_H
#define GEONAMEFACTSINFORMATIONNUGGETJSON_H

#pragma interface

#include "InformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include <string>
#include "GeonameObjectJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class GeonameFactsInformationNuggetJSON : public InformationNuggetJSON
  {
  private:
    bool flagHasTextResponse;
    std::string storeTextResponse;
    bool flagHasResults;
    std::vector< GeonameObjectJSON * > storeResults;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    GeonameFactsInformationNuggetJSON(const GeonameFactsInformationNuggetJSON &);
    GeonameFactsInformationNuggetJSON & operator=(const GeonameFactsInformationNuggetJSON &other);

    JSONValue * extraTextResponseToJSON(void) const;
    JSONValue * extraResultsToJSON(void) const;

    void  fromJSONTextResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResults(JSONValue *json_value, bool ignore_extras = false);


  public:
    GeonameFactsInformationNuggetJSON(void);
    virtual ~GeonameFactsInformationNuggetJSON(void);
    const char * getNuggetKind(void) const;
    bool  hasTextResponse(void) const;
    std::string  getTextResponse(void);
    const std::string  getTextResponse(void) const;
    bool  hasResults(void) const;
    size_t  countOfResults(void) const;
    GeonameObjectJSON *  elementOfResults(size_t element_num);
    const GeonameObjectJSON *  elementOfResults(size_t element_num) const;
    std::vector< GeonameObjectJSON * >  getResults(void);
    const std::vector< GeonameObjectJSON * >  getResults(void) const;

    virtual size_t extraGeonameFactsInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraGeonameFactsInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraGeonameFactsInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraGeonameFactsInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraGeonameFactsInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraGeonameFactsInformationNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasTextResponse)
            ++result;
        if (flagHasResults)
            ++result;
        result += extraGeonameFactsInformationNuggetComponentCount();
        return result;
      }
    const char *extraInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasTextResponse)
          {
            if (remainder == 0)
                return "TextResponse";
            --remainder;
          }
        if (flagHasResults)
          {
            if (remainder == 0)
                return "Results";
            --remainder;
          }
        return extraGeonameFactsInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasTextResponse)
          {
            if (remainder == 0)
                return extraTextResponseToJSON();
            --remainder;
          }
        if (flagHasResults)
          {
            if (remainder == 0)
                return extraResultsToJSON();
            --remainder;
          }
        return extraGeonameFactsInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasTextResponse)
          {
            if (remainder == 0)
                return extraTextResponseToJSON();
            --remainder;
          }
        if (flagHasResults)
          {
            if (remainder == 0)
                return extraResultsToJSON();
            --remainder;
          }
        return extraGeonameFactsInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'R':
                if (strcmp(&(field_name[1]), "esults") == 0)
                    return (flagHasResults ? extraResultsToJSON() : NULL);
                break;
            case 'T':
                if (strcmp(&(field_name[1]), "extResponse") == 0)
                    return (flagHasTextResponse ? extraTextResponseToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraGeonameFactsInformationNuggetLookup(field_name);
      }
    const JSONValue *extraInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'R':
                if (strcmp(&(field_name[1]), "esults") == 0)
                    return (flagHasResults ? extraResultsToJSON() : NULL);
                break;
            case 'T':
                if (strcmp(&(field_name[1]), "extResponse") == 0)
                    return (flagHasTextResponse ? extraTextResponseToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraGeonameFactsInformationNuggetLookup(field_name);
      }

    void setTextResponse(std::string new_value)
      {
        flagHasTextResponse = true;
        storeTextResponse = new_value;
      }
    void unsetTextResponse(void)
      {
        flagHasTextResponse = false;
      }
    void initResults(void)
      {
        if (flagHasResults)
          {
            for (size_t num2 = 0; num2 < storeResults.size(); ++num2)
              {
                storeResults[num2]->remove_reference();
              }
          }
        flagHasResults = true;
        storeResults.clear();
      }
    void appendResults(GeonameObjectJSON * to_append)
      {
        if (!flagHasResults)
          {
            flagHasResults = true;
            storeResults.clear();
          }
        assert(flagHasResults);
        to_append->add_reference();
        storeResults.push_back(to_append);
      }
    void unsetResults(void)
      {
        if (flagHasResults)
          {
            for (size_t num3 = 0; num3 < storeResults.size(); ++num3)
              {
                storeResults[num3]->remove_reference();
              }
          }
        flagHasResults = false;
        storeResults.clear();
      }

    virtual void extraGeonameFactsInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraGeonameFactsInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraGeonameFactsInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraGeonameFactsInformationNuggetAppendPair(key, new_component);
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
    void extraInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'R':
                if (strcmp(&(key[1]), "esults") == 0)
                    {
                    fromJSONResults(new_component, false);
                    return;
                    }
                break;
            case 'T':
                if (strcmp(&(key[1]), "extResponse") == 0)
                    {
                    fromJSONTextResponse(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraGeonameFactsInformationNuggetAppendPair(key, new_component);
      }
    void extraInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'R':
                if (strcmp(&(key[1]), "esults") == 0)
                    {
                    fromJSONResults(new_component, false);
                    return;
                    }
                break;
            case 'T':
                if (strcmp(&(key[1]), "extResponse") == 0)
                    {
                    fromJSONTextResponse(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraGeonameFactsInformationNuggetSetField(key, new_component);
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
        InformationNuggetJSON::write_fields_as_json(handler);
        if (flagHasTextResponse)
          {
            handler->start_pair("TextResponse");
            handler->string_value(storeTextResponse);
          }
        assert(flagHasResults);
        handler->start_pair("Results");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeResults.size(); ++num1)
          {
            storeResults[num1]->write_as_json(handler);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasResults()))
          {
            return "When parsing the object for %what%, the \"Results\" field was missing.";
          }
        return NULL;
      }

    static GeonameFactsInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static GeonameFactsInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        GeonameFactsInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<GeonameFactsInformationNuggetJSON>, GeonameFactsInformationNuggetJSON *, bool> generator("Type GeonameFactsInformationNugget", ignore_extras);
            parse_json_value(text, "Text for GeonameFactsInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static GeonameFactsInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        GeonameFactsInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<GeonameFactsInformationNuggetJSON>, GeonameFactsInformationNuggetJSON *, bool> generator("Type GeonameFactsInformationNugget", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTextResponse;
        JSONHoldingArrayGenerator<GeonameObjectJSON::Generator, RCHandle<GeonameObjectJSON>, GeonameObjectJSON *, bool > fieldGeneratorResults;
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
            if (!(strcmp(getInformationNuggetJSONKey().c_str(), "GeonameFactsInformationNugget") == 0))
                throw("The key field has a value other than `GeonameFactsInformationNugget'.");
            GeonameFactsInformationNuggetJSON *result = new GeonameFactsInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<GeonameFactsInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraGeonameFactsInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(InformationNuggetJSON *new_result)
          {
            handle_result((GeonameFactsInformationNuggetJSON *)new_result);
          }
        void finish(GeonameFactsInformationNuggetJSON *result)
          {
            if (fieldGeneratorTextResponse.have_value)
              {
                result->setTextResponse(fieldGeneratorTextResponse.value);
                fieldGeneratorTextResponse.have_value = false;
              }
            if (fieldGeneratorResults.have_value)
              {
                result->initResults();
                size_t count = fieldGeneratorResults.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendResults(fieldGeneratorResults.value[num].referenced());
                  }
                fieldGeneratorResults.value.clear();
                fieldGeneratorResults.have_value = false;
              }
            else if (!(result->hasResults()))
              {
                error("When parsing the object for %what%, the \"Results\" field was missing.");
              }
            InformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(GeonameFactsInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'R':
                    if (strcmp(&(field_name[1]), "esults") == 0)
                        return &fieldGeneratorResults;
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "extResponse") == 0)
                        return &fieldGeneratorTextResponse;
                    break;
                default:
                    break;
              }
            return InformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : InformationNuggetJSON::Generator(ignore_extras), fieldGeneratorTextResponse("field \"TextResponse\" of the GeonameFactsInformationNugget class"), fieldGeneratorResults("field \"Results\" of the GeonameFactsInformationNugget class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the GeonameFactsInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorTextResponse.reset();
            fieldGeneratorResults.reset();
            InformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* GEONAMEFACTSINFORMATIONNUGGETJSON_H */
