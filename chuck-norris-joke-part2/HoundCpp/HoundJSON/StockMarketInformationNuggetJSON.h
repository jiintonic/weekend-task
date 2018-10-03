/* file "StockMarketInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef STOCKMARKETINFORMATIONNUGGETJSON_H
#define STOCKMARKETINFORMATIONNUGGETJSON_H

#pragma interface

#include "InformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include "StockQueryBlockJSON.h"
#include "DateAndOrTimeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class StockMarketInformationNuggetJSON : public InformationNuggetJSON
  {
  private:
    bool flagHasQueryBlocks;
    std::vector< StockQueryBlockJSON * > storeQueryBlocks;
    bool flagHasInvalidDateRequested;
    bool storeInvalidDateRequested;
    bool flagHasInvalidAttributeRequested;
    bool storeInvalidAttributeRequested;
    bool flagHasClientLocalTime;
    DateAndOrTimeJSON * storeClientLocalTime;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    StockMarketInformationNuggetJSON(const StockMarketInformationNuggetJSON &);
    StockMarketInformationNuggetJSON & operator=(const StockMarketInformationNuggetJSON &other);

    JSONValue * extraQueryBlocksToJSON(void) const;
    JSONValue * extraInvalidDateRequestedToJSON(void) const;
    JSONValue * extraInvalidAttributeRequestedToJSON(void) const;
    JSONValue * extraClientLocalTimeToJSON(void) const;

    void  fromJSONQueryBlocks(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONInvalidDateRequested(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONInvalidAttributeRequested(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONClientLocalTime(JSONValue *json_value, bool ignore_extras = false);


  public:
    StockMarketInformationNuggetJSON(void);
    virtual ~StockMarketInformationNuggetJSON(void);
    const char * getNuggetKind(void) const;
    bool  hasQueryBlocks(void) const;
    size_t  countOfQueryBlocks(void) const;
    StockQueryBlockJSON *  elementOfQueryBlocks(size_t element_num);
    const StockQueryBlockJSON *  elementOfQueryBlocks(size_t element_num) const;
    std::vector< StockQueryBlockJSON * >  getQueryBlocks(void);
    const std::vector< StockQueryBlockJSON * >  getQueryBlocks(void) const;
    bool  hasInvalidDateRequested(void) const;
    bool  getInvalidDateRequested(void);
    const bool  getInvalidDateRequested(void) const;
    bool  hasInvalidAttributeRequested(void) const;
    bool  getInvalidAttributeRequested(void);
    const bool  getInvalidAttributeRequested(void) const;
    bool  hasClientLocalTime(void) const;
    DateAndOrTimeJSON *  getClientLocalTime(void);
    const DateAndOrTimeJSON *  getClientLocalTime(void) const;

    virtual size_t extraStockMarketInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraStockMarketInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraStockMarketInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraStockMarketInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraStockMarketInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraStockMarketInformationNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasQueryBlocks)
            ++result;
        if (flagHasInvalidDateRequested)
            ++result;
        if (flagHasInvalidAttributeRequested)
            ++result;
        if (flagHasClientLocalTime)
            ++result;
        result += extraStockMarketInformationNuggetComponentCount();
        return result;
      }
    const char *extraInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasQueryBlocks)
          {
            if (remainder == 0)
                return "QueryBlocks";
            --remainder;
          }
        if (flagHasInvalidDateRequested)
          {
            if (remainder == 0)
                return "InvalidDateRequested";
            --remainder;
          }
        if (flagHasInvalidAttributeRequested)
          {
            if (remainder == 0)
                return "InvalidAttributeRequested";
            --remainder;
          }
        if (flagHasClientLocalTime)
          {
            if (remainder == 0)
                return "ClientLocalTime";
            --remainder;
          }
        return extraStockMarketInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasQueryBlocks)
          {
            if (remainder == 0)
                return extraQueryBlocksToJSON();
            --remainder;
          }
        if (flagHasInvalidDateRequested)
          {
            if (remainder == 0)
                return extraInvalidDateRequestedToJSON();
            --remainder;
          }
        if (flagHasInvalidAttributeRequested)
          {
            if (remainder == 0)
                return extraInvalidAttributeRequestedToJSON();
            --remainder;
          }
        if (flagHasClientLocalTime)
          {
            if (remainder == 0)
                return extraClientLocalTimeToJSON();
            --remainder;
          }
        return extraStockMarketInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasQueryBlocks)
          {
            if (remainder == 0)
                return extraQueryBlocksToJSON();
            --remainder;
          }
        if (flagHasInvalidDateRequested)
          {
            if (remainder == 0)
                return extraInvalidDateRequestedToJSON();
            --remainder;
          }
        if (flagHasInvalidAttributeRequested)
          {
            if (remainder == 0)
                return extraInvalidAttributeRequestedToJSON();
            --remainder;
          }
        if (flagHasClientLocalTime)
          {
            if (remainder == 0)
                return extraClientLocalTimeToJSON();
            --remainder;
          }
        return extraStockMarketInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "lientLocalTime") == 0)
                    return (flagHasClientLocalTime ? extraClientLocalTimeToJSON() : NULL);
                break;
            case 'I':
                if (strncmp(&(field_name[1]), "nvalid", 6) == 0)
                  {
                    switch ((unsigned char)(field_name[7]))
                      {
                        case 'A':
                            if (strcmp(&(field_name[8]), "ttributeRequested") == 0)
                                return (flagHasInvalidAttributeRequested ? extraInvalidAttributeRequestedToJSON() : NULL);
                            break;
                        case 'D':
                            if (strcmp(&(field_name[8]), "ateRequested") == 0)
                                return (flagHasInvalidDateRequested ? extraInvalidDateRequestedToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'Q':
                if (strcmp(&(field_name[1]), "ueryBlocks") == 0)
                    return (flagHasQueryBlocks ? extraQueryBlocksToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraStockMarketInformationNuggetLookup(field_name);
      }
    const JSONValue *extraInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "lientLocalTime") == 0)
                    return (flagHasClientLocalTime ? extraClientLocalTimeToJSON() : NULL);
                break;
            case 'I':
                if (strncmp(&(field_name[1]), "nvalid", 6) == 0)
                  {
                    switch ((unsigned char)(field_name[7]))
                      {
                        case 'A':
                            if (strcmp(&(field_name[8]), "ttributeRequested") == 0)
                                return (flagHasInvalidAttributeRequested ? extraInvalidAttributeRequestedToJSON() : NULL);
                            break;
                        case 'D':
                            if (strcmp(&(field_name[8]), "ateRequested") == 0)
                                return (flagHasInvalidDateRequested ? extraInvalidDateRequestedToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'Q':
                if (strcmp(&(field_name[1]), "ueryBlocks") == 0)
                    return (flagHasQueryBlocks ? extraQueryBlocksToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraStockMarketInformationNuggetLookup(field_name);
      }

    void initQueryBlocks(void)
      {
        if (flagHasQueryBlocks)
          {
            for (size_t num2 = 0; num2 < storeQueryBlocks.size(); ++num2)
              {
                storeQueryBlocks[num2]->remove_reference();
              }
          }
        flagHasQueryBlocks = true;
        storeQueryBlocks.clear();
      }
    void appendQueryBlocks(StockQueryBlockJSON * to_append)
      {
        if (!flagHasQueryBlocks)
          {
            flagHasQueryBlocks = true;
            storeQueryBlocks.clear();
          }
        assert(flagHasQueryBlocks);
        to_append->add_reference();
        storeQueryBlocks.push_back(to_append);
      }
    void unsetQueryBlocks(void)
      {
        if (flagHasQueryBlocks)
          {
            for (size_t num3 = 0; num3 < storeQueryBlocks.size(); ++num3)
              {
                storeQueryBlocks[num3]->remove_reference();
              }
          }
        flagHasQueryBlocks = false;
        storeQueryBlocks.clear();
      }
    void setInvalidDateRequested(bool new_value)
      {
        flagHasInvalidDateRequested = true;
        storeInvalidDateRequested = new_value;
      }
    void unsetInvalidDateRequested(void)
      {
        flagHasInvalidDateRequested = false;
      }
    void setInvalidAttributeRequested(bool new_value)
      {
        flagHasInvalidAttributeRequested = true;
        storeInvalidAttributeRequested = new_value;
      }
    void unsetInvalidAttributeRequested(void)
      {
        flagHasInvalidAttributeRequested = false;
      }
    void setClientLocalTime(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasClientLocalTime)
          {
            storeClientLocalTime->remove_reference();
          }
        flagHasClientLocalTime = true;
        storeClientLocalTime = new_value;
      }
    void unsetClientLocalTime(void)
      {
        if (flagHasClientLocalTime)
          {
            storeClientLocalTime->remove_reference();
          }
        flagHasClientLocalTime = false;
      }

    virtual void extraStockMarketInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraStockMarketInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraStockMarketInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraStockMarketInformationNuggetAppendPair(key, new_component);
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
            case 'C':
                if (strcmp(&(key[1]), "lientLocalTime") == 0)
                    {
                    fromJSONClientLocalTime(new_component, false);
                    return;
                    }
                break;
            case 'I':
                if (strncmp(&(key[1]), "nvalid", 6) == 0)
                  {
                    switch ((unsigned char)(key[7]))
                      {
                        case 'A':
                            if (strcmp(&(key[8]), "ttributeRequested") == 0)
                                {
                                fromJSONInvalidAttributeRequested(new_component, false);
                                return;
                                }
                            break;
                        case 'D':
                            if (strcmp(&(key[8]), "ateRequested") == 0)
                                {
                                fromJSONInvalidDateRequested(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'Q':
                if (strcmp(&(key[1]), "ueryBlocks") == 0)
                    {
                    fromJSONQueryBlocks(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraStockMarketInformationNuggetAppendPair(key, new_component);
      }
    void extraInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "lientLocalTime") == 0)
                    {
                    fromJSONClientLocalTime(new_component, false);
                    return;
                    }
                break;
            case 'I':
                if (strncmp(&(key[1]), "nvalid", 6) == 0)
                  {
                    switch ((unsigned char)(key[7]))
                      {
                        case 'A':
                            if (strcmp(&(key[8]), "ttributeRequested") == 0)
                                {
                                fromJSONInvalidAttributeRequested(new_component, false);
                                return;
                                }
                            break;
                        case 'D':
                            if (strcmp(&(key[8]), "ateRequested") == 0)
                                {
                                fromJSONInvalidDateRequested(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'Q':
                if (strcmp(&(key[1]), "ueryBlocks") == 0)
                    {
                    fromJSONQueryBlocks(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraStockMarketInformationNuggetSetField(key, new_component);
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
        assert(flagHasQueryBlocks);
        handler->start_pair("QueryBlocks");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeQueryBlocks.size(); ++num1)
          {
            storeQueryBlocks[num1]->write_as_json(handler);
          }
        handler->finish_array();
        assert(flagHasInvalidDateRequested);
        handler->start_pair("InvalidDateRequested");
        handler->boolean_value(storeInvalidDateRequested);
        assert(flagHasInvalidAttributeRequested);
        handler->start_pair("InvalidAttributeRequested");
        handler->boolean_value(storeInvalidAttributeRequested);
        if (flagHasClientLocalTime)
          {
            handler->start_pair("ClientLocalTime");
            storeClientLocalTime->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasQueryBlocks()))
          {
            return "When parsing the object for %what%, the \"QueryBlocks\" field was missing.";
          }
        if (!(hasInvalidDateRequested()))
          {
            return "When parsing the object for %what%, the \"InvalidDateRequested\" field was missing.";
          }
        if (!(hasInvalidAttributeRequested()))
          {
            return "When parsing the object for %what%, the \"InvalidAttributeRequested\" field was missing.";
          }
        return NULL;
      }

    static StockMarketInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static StockMarketInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        StockMarketInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StockMarketInformationNuggetJSON>, StockMarketInformationNuggetJSON *, bool> generator("Type StockMarketInformationNugget", ignore_extras);
            parse_json_value(text, "Text for StockMarketInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static StockMarketInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        StockMarketInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StockMarketInformationNuggetJSON>, StockMarketInformationNuggetJSON *, bool> generator("Type StockMarketInformationNugget", ignore_extras);
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
        JSONHoldingArrayGenerator<StockQueryBlockJSON::Generator, RCHandle<StockQueryBlockJSON>, StockQueryBlockJSON *, bool > fieldGeneratorQueryBlocks;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorInvalidDateRequested;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorInvalidAttributeRequested;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorClientLocalTime;
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
            if (!(strcmp(getInformationNuggetJSONKey().c_str(), "StockMarket") == 0))
                throw("The key field has a value other than `StockMarket'.");
            StockMarketInformationNuggetJSON *result = new StockMarketInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<StockMarketInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraStockMarketInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(InformationNuggetJSON *new_result)
          {
            handle_result((StockMarketInformationNuggetJSON *)new_result);
          }
        void finish(StockMarketInformationNuggetJSON *result)
          {
            if (fieldGeneratorQueryBlocks.have_value)
              {
                result->initQueryBlocks();
                size_t count = fieldGeneratorQueryBlocks.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendQueryBlocks(fieldGeneratorQueryBlocks.value[num].referenced());
                  }
                fieldGeneratorQueryBlocks.value.clear();
                fieldGeneratorQueryBlocks.have_value = false;
              }
            else if (!(result->hasQueryBlocks()))
              {
                error("When parsing the object for %what%, the \"QueryBlocks\" field was missing.");
              }
            if (fieldGeneratorInvalidDateRequested.have_value)
              {
                result->setInvalidDateRequested(fieldGeneratorInvalidDateRequested.value);
                fieldGeneratorInvalidDateRequested.have_value = false;
              }
            else if (!(result->hasInvalidDateRequested()))
              {
                error("When parsing the object for %what%, the \"InvalidDateRequested\" field was missing.");
              }
            if (fieldGeneratorInvalidAttributeRequested.have_value)
              {
                result->setInvalidAttributeRequested(fieldGeneratorInvalidAttributeRequested.value);
                fieldGeneratorInvalidAttributeRequested.have_value = false;
              }
            else if (!(result->hasInvalidAttributeRequested()))
              {
                error("When parsing the object for %what%, the \"InvalidAttributeRequested\" field was missing.");
              }
            if (fieldGeneratorClientLocalTime.have_value)
              {
                result->setClientLocalTime(fieldGeneratorClientLocalTime.value.referenced());
                fieldGeneratorClientLocalTime.have_value = false;
              }
            InformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(StockMarketInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "lientLocalTime") == 0)
                        return &fieldGeneratorClientLocalTime;
                    break;
                case 'I':
                    if (strncmp(&(field_name[1]), "nvalid", 6) == 0)
                      {
                        switch ((unsigned char)(field_name[7]))
                          {
                            case 'A':
                                if (strcmp(&(field_name[8]), "ttributeRequested") == 0)
                                    return &fieldGeneratorInvalidAttributeRequested;
                                break;
                            case 'D':
                                if (strcmp(&(field_name[8]), "ateRequested") == 0)
                                    return &fieldGeneratorInvalidDateRequested;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'Q':
                    if (strcmp(&(field_name[1]), "ueryBlocks") == 0)
                        return &fieldGeneratorQueryBlocks;
                    break;
                default:
                    break;
              }
            return InformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : InformationNuggetJSON::Generator(ignore_extras), fieldGeneratorQueryBlocks("field \"QueryBlocks\" of the StockMarketInformationNugget class", ignore_extras), fieldGeneratorInvalidDateRequested("field \"InvalidDateRequested\" of the StockMarketInformationNugget class"), fieldGeneratorInvalidAttributeRequested("field \"InvalidAttributeRequested\" of the StockMarketInformationNugget class"), fieldGeneratorClientLocalTime("field \"ClientLocalTime\" of the StockMarketInformationNugget class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the StockMarketInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorQueryBlocks.reset();
            fieldGeneratorInvalidDateRequested.reset();
            fieldGeneratorInvalidAttributeRequested.reset();
            fieldGeneratorClientLocalTime.reset();
            InformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* STOCKMARKETINFORMATIONNUGGETJSON_H */
