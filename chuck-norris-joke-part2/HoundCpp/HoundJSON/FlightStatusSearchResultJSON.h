/* file "FlightStatusSearchResultJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FLIGHTSTATUSSEARCHRESULTJSON_H
#define FLIGHTSTATUSSEARCHRESULTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include <vector>
#include <string>
#include "OInteger.h"
#include "FlightSpecJSON.h"
#include "FlightStatusJSON.h"
#include "ResponseTypesJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class FlightStatusSearchResultJSON : public ReferenceCounted
  {
  private:
    bool flagHasFlightSpec;
    FlightSpecJSON * storeFlightSpec;
    bool flagHasErrorMessage;
    std::string storeErrorMessage;
    bool flagHasErrorMessageSpoken;
    std::string storeErrorMessageSpoken;
    bool flagHasFlightStatuses;
    std::vector< FlightStatusJSON * > storeFlightStatuses;
    bool flagHasMostRelevantFlightIndex;
    OInteger storeMostRelevantFlightIndex;
    bool flagHasMostRelevantFlightCriteria;
    ResponseTypesJSON * storeMostRelevantFlightCriteria;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    FlightStatusSearchResultJSON(const FlightStatusSearchResultJSON &);
    FlightStatusSearchResultJSON & operator=(const FlightStatusSearchResultJSON &other);

    void  fromJSONFlightSpec(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONErrorMessage(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONErrorMessageSpoken(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFlightStatuses(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMostRelevantFlightIndex(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMostRelevantFlightCriteria(JSONValue *json_value, bool ignore_extras = false);


  public:
    FlightStatusSearchResultJSON(void);
    virtual ~FlightStatusSearchResultJSON(void);
    bool  hasFlightSpec(void) const;
    FlightSpecJSON *  getFlightSpec(void);
    const FlightSpecJSON *  getFlightSpec(void) const;
    bool  hasErrorMessage(void) const;
    std::string  getErrorMessage(void);
    const std::string  getErrorMessage(void) const;
    bool  hasErrorMessageSpoken(void) const;
    std::string  getErrorMessageSpoken(void);
    const std::string  getErrorMessageSpoken(void) const;
    bool  hasFlightStatuses(void) const;
    size_t  countOfFlightStatuses(void) const;
    FlightStatusJSON *  elementOfFlightStatuses(size_t element_num);
    const FlightStatusJSON *  elementOfFlightStatuses(size_t element_num) const;
    std::vector< FlightStatusJSON * >  getFlightStatuses(void);
    const std::vector< FlightStatusJSON * >  getFlightStatuses(void) const;
    bool  hasMostRelevantFlightIndex(void) const;
    OInteger  getMostRelevantFlightIndex(void);
    const OInteger  getMostRelevantFlightIndex(void) const;
    bool  hasMostRelevantFlightCriteria(void) const;
    ResponseTypesJSON *  getMostRelevantFlightCriteria(void);
    const ResponseTypesJSON *  getMostRelevantFlightCriteria(void) const;

    virtual size_t extraFlightStatusSearchResultComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraFlightStatusSearchResultComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraFlightStatusSearchResultComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraFlightStatusSearchResultComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraFlightStatusSearchResultLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraFlightStatusSearchResultLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setFlightSpec(FlightSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasFlightSpec)
          {
            storeFlightSpec->remove_reference();
          }
        flagHasFlightSpec = true;
        storeFlightSpec = new_value;
      }
    void unsetFlightSpec(void)
      {
        if (flagHasFlightSpec)
          {
            storeFlightSpec->remove_reference();
          }
        flagHasFlightSpec = false;
      }
    void setErrorMessage(std::string new_value)
      {
        flagHasErrorMessage = true;
        storeErrorMessage = new_value;
      }
    void unsetErrorMessage(void)
      {
        flagHasErrorMessage = false;
      }
    void setErrorMessageSpoken(std::string new_value)
      {
        flagHasErrorMessageSpoken = true;
        storeErrorMessageSpoken = new_value;
      }
    void unsetErrorMessageSpoken(void)
      {
        flagHasErrorMessageSpoken = false;
      }
    void initFlightStatuses(void)
      {
        if (flagHasFlightStatuses)
          {
            for (size_t num2 = 0; num2 < storeFlightStatuses.size(); ++num2)
              {
                storeFlightStatuses[num2]->remove_reference();
              }
          }
        flagHasFlightStatuses = true;
        storeFlightStatuses.clear();
      }
    void appendFlightStatuses(FlightStatusJSON * to_append)
      {
        if (!flagHasFlightStatuses)
          {
            flagHasFlightStatuses = true;
            storeFlightStatuses.clear();
          }
        assert(flagHasFlightStatuses);
        to_append->add_reference();
        storeFlightStatuses.push_back(to_append);
      }
    void unsetFlightStatuses(void)
      {
        if (flagHasFlightStatuses)
          {
            for (size_t num3 = 0; num3 < storeFlightStatuses.size(); ++num3)
              {
                storeFlightStatuses[num3]->remove_reference();
              }
          }
        flagHasFlightStatuses = false;
        storeFlightStatuses.clear();
      }
    void setMostRelevantFlightIndex(OInteger new_value)
      {
        flagHasMostRelevantFlightIndex = true;
        if (new_value < 0)
            throw("The value for field MostRelevantFlightIndex of FlightStatusSearchResultJSON is less than the lower bound (0) for that field.");
        storeMostRelevantFlightIndex = new_value;
      }
    void unsetMostRelevantFlightIndex(void)
      {
        flagHasMostRelevantFlightIndex = false;
      }
    void setMostRelevantFlightCriteria(ResponseTypesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMostRelevantFlightCriteria)
          {
            storeMostRelevantFlightCriteria->remove_reference();
          }
        flagHasMostRelevantFlightCriteria = true;
        storeMostRelevantFlightCriteria = new_value;
      }
    void unsetMostRelevantFlightCriteria(void)
      {
        if (flagHasMostRelevantFlightCriteria)
          {
            storeMostRelevantFlightCriteria->remove_reference();
          }
        flagHasMostRelevantFlightCriteria = false;
      }

    virtual void extraFlightStatusSearchResultAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraFlightStatusSearchResultSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraFlightStatusSearchResultLookup(key);
        if (old_field == NULL)
          {
            extraFlightStatusSearchResultAppendPair(key, new_component);
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
        assert(flagHasFlightSpec);
        handler->start_pair("FlightSpec");
        storeFlightSpec->write_as_json(handler);
        if (flagHasErrorMessage)
          {
            handler->start_pair("ErrorMessage");
            handler->string_value(storeErrorMessage);
          }
        if (flagHasErrorMessageSpoken)
          {
            handler->start_pair("ErrorMessageSpoken");
            handler->string_value(storeErrorMessageSpoken);
          }
        if (flagHasFlightStatuses)
          {
            handler->start_pair("FlightStatuses");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeFlightStatuses.size(); ++num1)
              {
                storeFlightStatuses[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasMostRelevantFlightIndex)
          {
            handler->start_pair("MostRelevantFlightIndex");
            handler->number_value(storeMostRelevantFlightIndex.get_o_integer());
          }
        if (flagHasMostRelevantFlightCriteria)
          {
            handler->start_pair("MostRelevantFlightCriteria");
            storeMostRelevantFlightCriteria->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasFlightSpec()))
          {
            return "When parsing the object for %what%, the \"FlightSpec\" field was missing.";
          }
        return NULL;
      }

    static FlightStatusSearchResultJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FlightStatusSearchResultJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FlightStatusSearchResultJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightStatusSearchResultJSON>, FlightStatusSearchResultJSON *, bool> generator("Type FlightStatusSearchResult", ignore_extras);
            parse_json_value(text, "Text for FlightStatusSearchResultJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FlightStatusSearchResultJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FlightStatusSearchResultJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightStatusSearchResultJSON>, FlightStatusSearchResultJSON *, bool> generator("Type FlightStatusSearchResult", ignore_extras);
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
        JSONHoldingGenerator<FlightSpecJSON::Generator, RCHandle<FlightSpecJSON>, FlightSpecJSON *, bool > fieldGeneratorFlightSpec;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorErrorMessage;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorErrorMessageSpoken;
        JSONHoldingArrayGenerator<FlightStatusJSON::Generator, RCHandle<FlightStatusJSON>, FlightStatusJSON *, bool > fieldGeneratorFlightStatuses;
        static char lowerBoundMostRelevantFlightIndex[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundMostRelevantFlightIndex>, OInteger, o_integer > fieldGeneratorMostRelevantFlightIndex;
        JSONHoldingGenerator<ResponseTypesJSON::Generator, RCHandle<ResponseTypesJSON>, ResponseTypesJSON *, bool > fieldGeneratorMostRelevantFlightCriteria;
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
            FlightStatusSearchResultJSON *result = new FlightStatusSearchResultJSON();
            assert(result != NULL);
            RCHandle<FlightStatusSearchResultJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraFlightStatusSearchResultAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(FlightStatusSearchResultJSON *result)
          {
            if (fieldGeneratorFlightSpec.have_value)
              {
                result->setFlightSpec(fieldGeneratorFlightSpec.value.referenced());
                fieldGeneratorFlightSpec.have_value = false;
              }
            else if (!(result->hasFlightSpec()))
              {
                error("When parsing the object for %what%, the \"FlightSpec\" field was missing.");
              }
            if (fieldGeneratorErrorMessage.have_value)
              {
                result->setErrorMessage(fieldGeneratorErrorMessage.value);
                fieldGeneratorErrorMessage.have_value = false;
              }
            if (fieldGeneratorErrorMessageSpoken.have_value)
              {
                result->setErrorMessageSpoken(fieldGeneratorErrorMessageSpoken.value);
                fieldGeneratorErrorMessageSpoken.have_value = false;
              }
            if (fieldGeneratorFlightStatuses.have_value)
              {
                result->initFlightStatuses();
                size_t count = fieldGeneratorFlightStatuses.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendFlightStatuses(fieldGeneratorFlightStatuses.value[num].referenced());
                  }
                fieldGeneratorFlightStatuses.value.clear();
                fieldGeneratorFlightStatuses.have_value = false;
              }
            if (fieldGeneratorMostRelevantFlightIndex.have_value)
              {
                result->setMostRelevantFlightIndex(fieldGeneratorMostRelevantFlightIndex.value);
                fieldGeneratorMostRelevantFlightIndex.have_value = false;
              }
            if (fieldGeneratorMostRelevantFlightCriteria.have_value)
              {
                result->setMostRelevantFlightCriteria(fieldGeneratorMostRelevantFlightCriteria.value.referenced());
                fieldGeneratorMostRelevantFlightCriteria.have_value = false;
              }
          }
        virtual void handle_result(FlightStatusSearchResultJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'E':
                    if (strncmp(&(field_name[1]), "rrorMessage", 11) == 0)
                      {
                        switch ((unsigned char)(field_name[12]))
                          {
                            case 0:
                                return &fieldGeneratorErrorMessage;
                            case 'S':
                                if (strcmp(&(field_name[13]), "poken") == 0)
                                    return &fieldGeneratorErrorMessageSpoken;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'F':
                    if (strncmp(&(field_name[1]), "lightS", 6) == 0)
                      {
                        switch ((unsigned char)(field_name[7]))
                          {
                            case 'p':
                                if (strcmp(&(field_name[8]), "ec") == 0)
                                    return &fieldGeneratorFlightSpec;
                                break;
                            case 't':
                                if (strcmp(&(field_name[8]), "atuses") == 0)
                                    return &fieldGeneratorFlightStatuses;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'M':
                    if (strncmp(&(field_name[1]), "ostRelevantFlight", 17) == 0)
                      {
                        switch ((unsigned char)(field_name[18]))
                          {
                            case 'C':
                                if (strcmp(&(field_name[19]), "riteria") == 0)
                                    return &fieldGeneratorMostRelevantFlightCriteria;
                                break;
                            case 'I':
                                if (strcmp(&(field_name[19]), "ndex") == 0)
                                    return &fieldGeneratorMostRelevantFlightIndex;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorFlightSpec("field \"FlightSpec\" of the FlightStatusSearchResult class", ignore_extras), fieldGeneratorErrorMessage("field \"ErrorMessage\" of the FlightStatusSearchResult class"), fieldGeneratorErrorMessageSpoken("field \"ErrorMessageSpoken\" of the FlightStatusSearchResult class"), fieldGeneratorFlightStatuses("field \"FlightStatuses\" of the FlightStatusSearchResult class", ignore_extras), fieldGeneratorMostRelevantFlightIndex("field \"MostRelevantFlightIndex\" of the FlightStatusSearchResult class"), fieldGeneratorMostRelevantFlightCriteria("field \"MostRelevantFlightCriteria\" of the FlightStatusSearchResult class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the FlightStatusSearchResult class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorFlightSpec.reset();
            fieldGeneratorErrorMessage.reset();
            fieldGeneratorErrorMessageSpoken.reset();
            fieldGeneratorFlightStatuses.reset();
            fieldGeneratorMostRelevantFlightIndex.reset();
            fieldGeneratorMostRelevantFlightCriteria.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* FLIGHTSTATUSSEARCHRESULTJSON_H */
