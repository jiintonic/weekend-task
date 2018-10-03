/* file "FlightListSortCriterionJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FLIGHTLISTSORTCRITERIONJSON_H
#define FLIGHTLISTSORTCRITERIONJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "FlightSortFieldJSON.h"
#include "SortOrderJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class FlightListSortCriterionJSON : public ReferenceCounted
  {
  private:
    bool flagHasSortByField;
    FlightSortFieldJSON * storeSortByField;
    bool flagHasSortOrder;
    SortOrderJSON * storeSortOrder;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    FlightListSortCriterionJSON(const FlightListSortCriterionJSON &);
    FlightListSortCriterionJSON & operator=(const FlightListSortCriterionJSON &other);

    void  fromJSONSortByField(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSortOrder(JSONValue *json_value, bool ignore_extras = false);


  public:
    FlightListSortCriterionJSON(void);
    virtual ~FlightListSortCriterionJSON(void);
    bool  hasSortByField(void) const;
    FlightSortFieldJSON *  getSortByField(void);
    const FlightSortFieldJSON *  getSortByField(void) const;
    FlightSortFieldJSON::TypeValue  getSortByFieldValue(void);
    const FlightSortFieldJSON::TypeValue  getSortByFieldValue(void) const;
    const char * getSortByFieldAsChars(void) const;
    std::string  getSortByFieldAsString(void) const;
    bool  hasSortOrder(void) const;
    SortOrderJSON *  getSortOrder(void);
    const SortOrderJSON *  getSortOrder(void) const;
    SortOrderJSON::TypeValue  getSortOrderValue(void);
    const SortOrderJSON::TypeValue  getSortOrderValue(void) const;
    const char * getSortOrderAsChars(void) const;
    std::string  getSortOrderAsString(void) const;

    virtual size_t extraFlightListSortCriterionComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraFlightListSortCriterionComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraFlightListSortCriterionComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraFlightListSortCriterionComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraFlightListSortCriterionLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraFlightListSortCriterionLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setSortByField(FlightSortFieldJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSortByField)
          {
            storeSortByField->remove_reference();
          }
        flagHasSortByField = true;
        storeSortByField = new_value;
      }
    void setSortByField(FlightSortFieldJSON::TypeValue new_value)
      {
        setSortByField(new FlightSortFieldJSON(new_value));
      }
    void setSortByField(const char *chars)
      {
        FlightSortFieldJSON::TypeValueKnownValues known = FlightSortFieldJSON::stringToValue(chars);
        FlightSortFieldJSON::TypeValue new_value;
        if (known == FlightSortFieldJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setSortByField(new_value);
      }
    void setSortByField(std::string the_string)
      {
        setSortByField(the_string.c_str());
      }
    void unsetSortByField(void)
      {
        if (flagHasSortByField)
          {
            storeSortByField->remove_reference();
          }
        flagHasSortByField = false;
      }
    void setSortOrder(SortOrderJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSortOrder)
          {
            storeSortOrder->remove_reference();
          }
        flagHasSortOrder = true;
        storeSortOrder = new_value;
      }
    void setSortOrder(SortOrderJSON::TypeValue new_value)
      {
        setSortOrder(new SortOrderJSON(new_value));
      }
    void setSortOrder(const char *chars)
      {
        SortOrderJSON::TypeValueKnownValues known = SortOrderJSON::stringToValue(chars);
        SortOrderJSON::TypeValue new_value;
        if (known == SortOrderJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setSortOrder(new_value);
      }
    void setSortOrder(std::string the_string)
      {
        setSortOrder(the_string.c_str());
      }
    void unsetSortOrder(void)
      {
        if (flagHasSortOrder)
          {
            storeSortOrder->remove_reference();
          }
        flagHasSortOrder = false;
      }

    virtual void extraFlightListSortCriterionAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraFlightListSortCriterionSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraFlightListSortCriterionLookup(key);
        if (old_field == NULL)
          {
            extraFlightListSortCriterionAppendPair(key, new_component);
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
        assert(flagHasSortByField);
        handler->start_pair("SortByField");
        storeSortByField->write_as_json(handler);
        assert(flagHasSortOrder);
        handler->start_pair("SortOrder");
        storeSortOrder->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasSortByField()))
          {
            return "When parsing the object for %what%, the \"SortByField\" field was missing.";
          }
        if (!(hasSortOrder()))
          {
            return "When parsing the object for %what%, the \"SortOrder\" field was missing.";
          }
        return NULL;
      }

    static FlightListSortCriterionJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FlightListSortCriterionJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FlightListSortCriterionJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightListSortCriterionJSON>, FlightListSortCriterionJSON *, bool> generator("Type FlightListSortCriterion", ignore_extras);
            parse_json_value(text, "Text for FlightListSortCriterionJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FlightListSortCriterionJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FlightListSortCriterionJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightListSortCriterionJSON>, FlightListSortCriterionJSON *, bool> generator("Type FlightListSortCriterion", ignore_extras);
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
        JSONHoldingGenerator<FlightSortFieldJSON::Generator, RCHandle<FlightSortFieldJSON>, FlightSortFieldJSON *, bool > fieldGeneratorSortByField;
        JSONHoldingGenerator<SortOrderJSON::Generator, RCHandle<SortOrderJSON>, SortOrderJSON *, bool > fieldGeneratorSortOrder;
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
            FlightListSortCriterionJSON *result = new FlightListSortCriterionJSON();
            assert(result != NULL);
            RCHandle<FlightListSortCriterionJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraFlightListSortCriterionAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(FlightListSortCriterionJSON *result)
          {
            if (fieldGeneratorSortByField.have_value)
              {
                result->setSortByField(fieldGeneratorSortByField.value.referenced());
                fieldGeneratorSortByField.have_value = false;
              }
            else if (!(result->hasSortByField()))
              {
                error("When parsing the object for %what%, the \"SortByField\" field was missing.");
              }
            if (fieldGeneratorSortOrder.have_value)
              {
                result->setSortOrder(fieldGeneratorSortOrder.value.referenced());
                fieldGeneratorSortOrder.have_value = false;
              }
            else if (!(result->hasSortOrder()))
              {
                error("When parsing the object for %what%, the \"SortOrder\" field was missing.");
              }
          }
        virtual void handle_result(FlightListSortCriterionJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strncmp(field_name, "Sort", 4) == 0)
              {
                switch ((unsigned char)(field_name[4]))
                  {
                    case 'B':
                        if (strcmp(&(field_name[5]), "yField") == 0)
                            return &fieldGeneratorSortByField;
                        break;
                    case 'O':
                        if (strcmp(&(field_name[5]), "rder") == 0)
                            return &fieldGeneratorSortOrder;
                        break;
                    default:
                        break;
                  }
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorSortByField("field \"SortByField\" of the FlightListSortCriterion class", ignore_extras), fieldGeneratorSortOrder("field \"SortOrder\" of the FlightListSortCriterion class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the FlightListSortCriterion class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorSortByField.reset();
            fieldGeneratorSortOrder.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* FLIGHTLISTSORTCRITERIONJSON_H */
