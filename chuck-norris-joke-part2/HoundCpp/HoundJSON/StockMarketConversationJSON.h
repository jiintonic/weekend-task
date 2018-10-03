/* file "StockMarketConversationJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef STOCKMARKETCONVERSATIONJSON_H
#define STOCKMARKETCONVERSATIONJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include <string>
#include "RegEx.h"
#include "CompoundStockAttributeJSON.h"
#include "StockConversationRequestedListingJSON.h"
#include "MoneyJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class StockMarketConversationJSON : public ReferenceCounted
  {
  public:
    static RegEx expressionStockAttributes;
    static RegEx expressionStockListings;

  private:
    bool flagHasStockAttributes;
    std::string storeStockAttributes;
    bool flagHasCompoundAttributes;
    std::vector< CompoundStockAttributeJSON * > storeCompoundAttributes;
    bool flagHasStockListings;
    std::vector< std::string > storeStockListings;
    bool flagHasRequestedListings;
    std::vector< StockConversationRequestedListingJSON * > storeRequestedListings;
    bool flagHasMonetaryAmount;
    MoneyJSON * storeMonetaryAmount;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    StockMarketConversationJSON(const StockMarketConversationJSON &);
    StockMarketConversationJSON & operator=(const StockMarketConversationJSON &other);

    void  fromJSONStockAttributes(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCompoundAttributes(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStockListings(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestedListings(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMonetaryAmount(JSONValue *json_value, bool ignore_extras = false);


  public:
    StockMarketConversationJSON(void);
    virtual ~StockMarketConversationJSON(void);
    bool  hasStockAttributes(void) const;
    std::string  getStockAttributes(void);
    const std::string  getStockAttributes(void) const;
    bool  hasCompoundAttributes(void) const;
    size_t  countOfCompoundAttributes(void) const;
    CompoundStockAttributeJSON *  elementOfCompoundAttributes(size_t element_num);
    const CompoundStockAttributeJSON *  elementOfCompoundAttributes(size_t element_num) const;
    std::vector< CompoundStockAttributeJSON * >  getCompoundAttributes(void);
    const std::vector< CompoundStockAttributeJSON * >  getCompoundAttributes(void) const;
    bool  hasStockListings(void) const;
    size_t  countOfStockListings(void) const;
    std::string  elementOfStockListings(size_t element_num);
    const std::string  elementOfStockListings(size_t element_num) const;
    std::vector< std::string >  getStockListings(void);
    const std::vector< std::string >  getStockListings(void) const;
    bool  hasRequestedListings(void) const;
    size_t  countOfRequestedListings(void) const;
    StockConversationRequestedListingJSON *  elementOfRequestedListings(size_t element_num);
    const StockConversationRequestedListingJSON *  elementOfRequestedListings(size_t element_num) const;
    std::vector< StockConversationRequestedListingJSON * >  getRequestedListings(void);
    const std::vector< StockConversationRequestedListingJSON * >  getRequestedListings(void) const;
    bool  hasMonetaryAmount(void) const;
    MoneyJSON *  getMonetaryAmount(void);
    const MoneyJSON *  getMonetaryAmount(void) const;

    virtual size_t extraStockMarketConversationComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraStockMarketConversationComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraStockMarketConversationComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraStockMarketConversationComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraStockMarketConversationLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraStockMarketConversationLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setStockAttributes(std::string new_value)
      {
        flagHasStockAttributes = true;
        if (!expressionStockAttributes.match(new_value))
            throw("The value is not in the regular expression for field StockAttributes of StockMarketConversationJSON.");
        storeStockAttributes = new_value;
      }
    void unsetStockAttributes(void)
      {
        flagHasStockAttributes = false;
      }
    void initCompoundAttributes(void)
      {
        if (flagHasCompoundAttributes)
          {
            for (size_t num3 = 0; num3 < storeCompoundAttributes.size(); ++num3)
              {
                storeCompoundAttributes[num3]->remove_reference();
              }
          }
        flagHasCompoundAttributes = true;
        storeCompoundAttributes.clear();
      }
    void appendCompoundAttributes(CompoundStockAttributeJSON * to_append)
      {
        if (!flagHasCompoundAttributes)
          {
            flagHasCompoundAttributes = true;
            storeCompoundAttributes.clear();
          }
        assert(flagHasCompoundAttributes);
        to_append->add_reference();
        storeCompoundAttributes.push_back(to_append);
      }
    void unsetCompoundAttributes(void)
      {
        if (flagHasCompoundAttributes)
          {
            for (size_t num4 = 0; num4 < storeCompoundAttributes.size(); ++num4)
              {
                storeCompoundAttributes[num4]->remove_reference();
              }
          }
        flagHasCompoundAttributes = false;
        storeCompoundAttributes.clear();
      }
    void initStockListings(void)
      {
        flagHasStockListings = true;
        storeStockListings.clear();
      }
    void appendStockListings(std::string to_append)
      {
        if (!flagHasStockListings)
          {
            flagHasStockListings = true;
            storeStockListings.clear();
          }
        assert(flagHasStockListings);
        storeStockListings.push_back(to_append);
      }
    void unsetStockListings(void)
      {
        flagHasStockListings = false;
        storeStockListings.clear();
      }
    void initRequestedListings(void)
      {
        if (flagHasRequestedListings)
          {
            for (size_t num5 = 0; num5 < storeRequestedListings.size(); ++num5)
              {
                storeRequestedListings[num5]->remove_reference();
              }
          }
        flagHasRequestedListings = true;
        storeRequestedListings.clear();
      }
    void appendRequestedListings(StockConversationRequestedListingJSON * to_append)
      {
        if (!flagHasRequestedListings)
          {
            flagHasRequestedListings = true;
            storeRequestedListings.clear();
          }
        assert(flagHasRequestedListings);
        to_append->add_reference();
        storeRequestedListings.push_back(to_append);
      }
    void unsetRequestedListings(void)
      {
        if (flagHasRequestedListings)
          {
            for (size_t num6 = 0; num6 < storeRequestedListings.size(); ++num6)
              {
                storeRequestedListings[num6]->remove_reference();
              }
          }
        flagHasRequestedListings = false;
        storeRequestedListings.clear();
      }
    void setMonetaryAmount(MoneyJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMonetaryAmount)
          {
            storeMonetaryAmount->remove_reference();
          }
        flagHasMonetaryAmount = true;
        storeMonetaryAmount = new_value;
      }
    void unsetMonetaryAmount(void)
      {
        if (flagHasMonetaryAmount)
          {
            storeMonetaryAmount->remove_reference();
          }
        flagHasMonetaryAmount = false;
      }

    virtual void extraStockMarketConversationAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraStockMarketConversationSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraStockMarketConversationLookup(key);
        if (old_field == NULL)
          {
            extraStockMarketConversationAppendPair(key, new_component);
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
        assert(flagHasStockAttributes);
        handler->start_pair("StockAttributes");
        handler->string_value(storeStockAttributes);
        assert(flagHasCompoundAttributes);
        handler->start_pair("CompoundAttributes");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeCompoundAttributes.size(); ++num1)
          {
            storeCompoundAttributes[num1]->write_as_json(handler);
          }
        handler->finish_array();
        assert(flagHasStockListings);
        handler->start_pair("StockListings");
        handler->start_array();
        for (size_t num2 = 0; num2 < storeStockListings.size(); ++num2)
          {
            handler->string_value(storeStockListings[num2]);
          }
        handler->finish_array();
        assert(flagHasRequestedListings);
        handler->start_pair("RequestedListings");
        handler->start_array();
        for (size_t num3 = 0; num3 < storeRequestedListings.size(); ++num3)
          {
            storeRequestedListings[num3]->write_as_json(handler);
          }
        handler->finish_array();
        if (flagHasMonetaryAmount)
          {
            handler->start_pair("MonetaryAmount");
            storeMonetaryAmount->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasStockAttributes()))
          {
            return "When parsing the object for %what%, the \"StockAttributes\" field was missing.";
          }
        if (!(hasCompoundAttributes()))
          {
            return "When parsing the object for %what%, the \"CompoundAttributes\" field was missing.";
          }
        if (!(hasStockListings()))
          {
            return "When parsing the object for %what%, the \"StockListings\" field was missing.";
          }
        if (!(hasRequestedListings()))
          {
            return "When parsing the object for %what%, the \"RequestedListings\" field was missing.";
          }
        return NULL;
      }

    static StockMarketConversationJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static StockMarketConversationJSON *from_text(const char *text, bool ignore_extras = false)
      {
        StockMarketConversationJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StockMarketConversationJSON>, StockMarketConversationJSON *, bool> generator("Type StockMarketConversation", ignore_extras);
            parse_json_value(text, "Text for StockMarketConversationJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static StockMarketConversationJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        StockMarketConversationJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StockMarketConversationJSON>, StockMarketConversationJSON *, bool> generator("Type StockMarketConversation", ignore_extras);
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
    class FieldGeneratorStockAttributes : public JSONStringGenerator
          {
          private:
            RegEx checker;

          protected:
            FieldGeneratorStockAttributes(void) : checker("^([0-8]( [0-8])*)?$")  { }
            void validate(const char *result)
              {
                if (!(checker.match(result)))
                    error("The string for %what% doesn't match the required pattern @^([0-8]( [0-8])*)?$@.");
              }
          };
        JSONHoldingGenerator<FieldGeneratorStockAttributes, std::string, const char * > fieldGeneratorStockAttributes;
        JSONHoldingArrayGenerator<CompoundStockAttributeJSON::Generator, RCHandle<CompoundStockAttributeJSON>, CompoundStockAttributeJSON *, bool > fieldGeneratorCompoundAttributes;
    class FieldGeneratorStockListings : public JSONStringGenerator
          {
          private:
            RegEx checker;

          protected:
            FieldGeneratorStockListings(void) : checker("^[0-1] [0-9]+ [0-9]+ [0-1]( [0-9]+)?$")  { }
            void validate(const char *result)
              {
                if (!(checker.match(result)))
                    error("The string for %what% doesn't match the required pattern @^[0-1] [0-9]+ [0-9]+ [0-1]( [0-9]+)?$@.");
              }
          };
        JSONHoldingArrayGenerator<FieldGeneratorStockListings, std::string, const char * > fieldGeneratorStockListings;
        JSONHoldingArrayGenerator<StockConversationRequestedListingJSON::Generator, RCHandle<StockConversationRequestedListingJSON>, StockConversationRequestedListingJSON *, bool > fieldGeneratorRequestedListings;
        JSONHoldingGenerator<MoneyJSON::Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool > fieldGeneratorMonetaryAmount;
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
            StockMarketConversationJSON *result = new StockMarketConversationJSON();
            assert(result != NULL);
            RCHandle<StockMarketConversationJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraStockMarketConversationAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(StockMarketConversationJSON *result)
          {
            if (fieldGeneratorStockAttributes.have_value)
              {
                result->setStockAttributes(fieldGeneratorStockAttributes.value);
                fieldGeneratorStockAttributes.have_value = false;
              }
            else if (!(result->hasStockAttributes()))
              {
                error("When parsing the object for %what%, the \"StockAttributes\" field was missing.");
              }
            if (fieldGeneratorCompoundAttributes.have_value)
              {
                result->initCompoundAttributes();
                size_t count = fieldGeneratorCompoundAttributes.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendCompoundAttributes(fieldGeneratorCompoundAttributes.value[num].referenced());
                  }
                fieldGeneratorCompoundAttributes.value.clear();
                fieldGeneratorCompoundAttributes.have_value = false;
              }
            else if (!(result->hasCompoundAttributes()))
              {
                error("When parsing the object for %what%, the \"CompoundAttributes\" field was missing.");
              }
            if (fieldGeneratorStockListings.have_value)
              {
                result->initStockListings();
                size_t count = fieldGeneratorStockListings.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendStockListings(fieldGeneratorStockListings.value[num]);
                  }
                fieldGeneratorStockListings.value.clear();
                fieldGeneratorStockListings.have_value = false;
              }
            else if (!(result->hasStockListings()))
              {
                error("When parsing the object for %what%, the \"StockListings\" field was missing.");
              }
            if (fieldGeneratorRequestedListings.have_value)
              {
                result->initRequestedListings();
                size_t count = fieldGeneratorRequestedListings.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendRequestedListings(fieldGeneratorRequestedListings.value[num].referenced());
                  }
                fieldGeneratorRequestedListings.value.clear();
                fieldGeneratorRequestedListings.have_value = false;
              }
            else if (!(result->hasRequestedListings()))
              {
                error("When parsing the object for %what%, the \"RequestedListings\" field was missing.");
              }
            if (fieldGeneratorMonetaryAmount.have_value)
              {
                result->setMonetaryAmount(fieldGeneratorMonetaryAmount.value.referenced());
                fieldGeneratorMonetaryAmount.have_value = false;
              }
          }
        virtual void handle_result(StockMarketConversationJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "ompoundAttributes") == 0)
                        return &fieldGeneratorCompoundAttributes;
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "onetaryAmount") == 0)
                        return &fieldGeneratorMonetaryAmount;
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "equestedListings") == 0)
                        return &fieldGeneratorRequestedListings;
                    break;
                case 'S':
                    if (strncmp(&(field_name[1]), "tock", 4) == 0)
                      {
                        switch ((unsigned char)(field_name[5]))
                          {
                            case 'A':
                                if (strcmp(&(field_name[6]), "ttributes") == 0)
                                    return &fieldGeneratorStockAttributes;
                                break;
                            case 'L':
                                if (strcmp(&(field_name[6]), "istings") == 0)
                                    return &fieldGeneratorStockListings;
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
        Generator(bool ignore_extras = false) : fieldGeneratorStockAttributes("field \"StockAttributes\" of the StockMarketConversation class"), fieldGeneratorCompoundAttributes("field \"CompoundAttributes\" of the StockMarketConversation class", ignore_extras), fieldGeneratorStockListings("field \"StockListings\" of the StockMarketConversation class"), fieldGeneratorRequestedListings("field \"RequestedListings\" of the StockMarketConversation class", ignore_extras), fieldGeneratorMonetaryAmount("field \"MonetaryAmount\" of the StockMarketConversation class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the StockMarketConversation class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorStockAttributes.reset();
            fieldGeneratorCompoundAttributes.reset();
            fieldGeneratorStockListings.reset();
            fieldGeneratorRequestedListings.reset();
            fieldGeneratorMonetaryAmount.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* STOCKMARKETCONVERSATIONJSON_H */
