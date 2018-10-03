/* file "StockAttributeValueJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef STOCKATTRIBUTEVALUEJSON_H
#define STOCKATTRIBUTEVALUEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class StockAttributeValueJSON : public ReferenceCounted
  {
  private:
    bool flagHasSpoken;
    std::string storeSpoken;
    bool flagHasDisplay;
    std::string storeDisplay;
    bool flagHasTable;
    std::string storeTable;
    bool flagHasNative;
    std::string storeNative;
    bool flagHasRationalValue;
    double storeRationalValue;
    std::string textStoreRationalValue;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    StockAttributeValueJSON(const StockAttributeValueJSON &);
    StockAttributeValueJSON & operator=(const StockAttributeValueJSON &other);

    void  fromJSONSpoken(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDisplay(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTable(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNative(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRationalValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    StockAttributeValueJSON(void);
    virtual ~StockAttributeValueJSON(void);
    bool  hasSpoken(void) const;
    std::string  getSpoken(void);
    const std::string  getSpoken(void) const;
    bool  hasDisplay(void) const;
    std::string  getDisplay(void);
    const std::string  getDisplay(void) const;
    bool  hasTable(void) const;
    std::string  getTable(void);
    const std::string  getTable(void) const;
    bool  hasNative(void) const;
    std::string  getNative(void);
    const std::string  getNative(void) const;
    bool  hasRationalValue(void) const;
    double  getRationalValue(void);
    const double  getRationalValue(void) const;
    std::string  getRationalValueAsText(void) const;

    virtual size_t extraStockAttributeValueComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraStockAttributeValueComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraStockAttributeValueComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraStockAttributeValueComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraStockAttributeValueLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraStockAttributeValueLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setSpoken(std::string new_value)
      {
        flagHasSpoken = true;
        storeSpoken = new_value;
      }
    void unsetSpoken(void)
      {
        flagHasSpoken = false;
      }
    void setDisplay(std::string new_value)
      {
        flagHasDisplay = true;
        storeDisplay = new_value;
      }
    void unsetDisplay(void)
      {
        flagHasDisplay = false;
      }
    void setTable(std::string new_value)
      {
        flagHasTable = true;
        storeTable = new_value;
      }
    void unsetTable(void)
      {
        flagHasTable = false;
      }
    void setNative(std::string new_value)
      {
        flagHasNative = true;
        storeNative = new_value;
      }
    void unsetNative(void)
      {
        flagHasNative = false;
      }
    void setRationalValue(double new_value)
      {
        flagHasRationalValue = true;
        storeRationalValue = new_value;
        textStoreRationalValue = "";
      }
    void setRationalValueText(std::string new_value)
      {
        flagHasRationalValue = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field RationalValue of StockAttributeValueJSON is not a valid number.");
        textStoreRationalValue = new_value;
      }
    void unsetRationalValue(void)
      {
        flagHasRationalValue = false;
      }

    virtual void extraStockAttributeValueAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraStockAttributeValueSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraStockAttributeValueLookup(key);
        if (old_field == NULL)
          {
            extraStockAttributeValueAppendPair(key, new_component);
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
        assert(flagHasSpoken);
        handler->start_pair("Spoken");
        handler->string_value(storeSpoken);
        assert(flagHasDisplay);
        handler->start_pair("Display");
        handler->string_value(storeDisplay);
        if (flagHasTable)
          {
            handler->start_pair("Table");
            handler->string_value(storeTable);
          }
        assert(flagHasNative);
        handler->start_pair("Native");
        handler->string_value(storeNative);
        assert(flagHasRationalValue);
        handler->start_pair("RationalValue");
        if (textStoreRationalValue != "")
            handler->number_value(textStoreRationalValue.c_str());
        else if (((double)(long int)storeRationalValue) == storeRationalValue)
            handler->number_value((long int)storeRationalValue);
        else
            handler->number_value(storeRationalValue);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasSpoken()))
          {
            return "When parsing the object for %what%, the \"Spoken\" field was missing.";
          }
        if (!(hasDisplay()))
          {
            return "When parsing the object for %what%, the \"Display\" field was missing.";
          }
        if (!(hasNative()))
          {
            return "When parsing the object for %what%, the \"Native\" field was missing.";
          }
        if (!(hasRationalValue()))
          {
            return "When parsing the object for %what%, the \"RationalValue\" field was missing.";
          }
        return NULL;
      }

    static StockAttributeValueJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static StockAttributeValueJSON *from_text(const char *text, bool ignore_extras = false)
      {
        StockAttributeValueJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StockAttributeValueJSON>, StockAttributeValueJSON *, bool> generator("Type StockAttributeValue", ignore_extras);
            parse_json_value(text, "Text for StockAttributeValueJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static StockAttributeValueJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        StockAttributeValueJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StockAttributeValueJSON>, StockAttributeValueJSON *, bool> generator("Type StockAttributeValue", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpoken;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDisplay;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTable;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorNative;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorRationalValue;
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
            StockAttributeValueJSON *result = new StockAttributeValueJSON();
            assert(result != NULL);
            RCHandle<StockAttributeValueJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraStockAttributeValueAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(StockAttributeValueJSON *result)
          {
            if (fieldGeneratorSpoken.have_value)
              {
                result->setSpoken(fieldGeneratorSpoken.value);
                fieldGeneratorSpoken.have_value = false;
              }
            else if (!(result->hasSpoken()))
              {
                error("When parsing the object for %what%, the \"Spoken\" field was missing.");
              }
            if (fieldGeneratorDisplay.have_value)
              {
                result->setDisplay(fieldGeneratorDisplay.value);
                fieldGeneratorDisplay.have_value = false;
              }
            else if (!(result->hasDisplay()))
              {
                error("When parsing the object for %what%, the \"Display\" field was missing.");
              }
            if (fieldGeneratorTable.have_value)
              {
                result->setTable(fieldGeneratorTable.value);
                fieldGeneratorTable.have_value = false;
              }
            if (fieldGeneratorNative.have_value)
              {
                result->setNative(fieldGeneratorNative.value);
                fieldGeneratorNative.have_value = false;
              }
            else if (!(result->hasNative()))
              {
                error("When parsing the object for %what%, the \"Native\" field was missing.");
              }
            if (fieldGeneratorRationalValue.have_value)
              {
                result->setRationalValueText(fieldGeneratorRationalValue.value);
                fieldGeneratorRationalValue.have_value = false;
              }
            else if (!(result->hasRationalValue()))
              {
                error("When parsing the object for %what%, the \"RationalValue\" field was missing.");
              }
          }
        virtual void handle_result(StockAttributeValueJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strcmp(&(field_name[1]), "isplay") == 0)
                        return &fieldGeneratorDisplay;
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "ative") == 0)
                        return &fieldGeneratorNative;
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "ationalValue") == 0)
                        return &fieldGeneratorRationalValue;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "poken") == 0)
                        return &fieldGeneratorSpoken;
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "able") == 0)
                        return &fieldGeneratorTable;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorSpoken("field \"Spoken\" of the StockAttributeValue class"), fieldGeneratorDisplay("field \"Display\" of the StockAttributeValue class"), fieldGeneratorTable("field \"Table\" of the StockAttributeValue class"), fieldGeneratorNative("field \"Native\" of the StockAttributeValue class"), fieldGeneratorRationalValue("field \"RationalValue\" of the StockAttributeValue class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the StockAttributeValue class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorSpoken.reset();
            fieldGeneratorDisplay.reset();
            fieldGeneratorTable.reset();
            fieldGeneratorNative.reset();
            fieldGeneratorRationalValue.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* STOCKATTRIBUTEVALUEJSON_H */
