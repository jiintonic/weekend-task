/* file "StockQueryBlockJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef STOCKQUERYBLOCKJSON_H
#define STOCKQUERYBLOCKJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include "CompoundStockAttributeJSON.h"
#include "StockRequestedListingJSON.h"
#include "StockInvalidListingJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class StockQueryBlockJSON : public ReferenceCounted
  {
  private:
    bool flagHasOldConversation;
    bool storeOldConversation;
    bool flagHasRequestedAttributes;
    std::vector< CompoundStockAttributeJSON * > storeRequestedAttributes;
    bool flagHasRequestedListings;
    std::vector< StockRequestedListingJSON * > storeRequestedListings;
    bool flagHasInvalidListings;
    std::vector< StockInvalidListingJSON * > storeInvalidListings;
    bool flagHasGeneralMarketQuery;
    bool storeGeneralMarketQuery;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    StockQueryBlockJSON(const StockQueryBlockJSON &);
    StockQueryBlockJSON & operator=(const StockQueryBlockJSON &other);

    void  fromJSONOldConversation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestedAttributes(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestedListings(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONInvalidListings(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGeneralMarketQuery(JSONValue *json_value, bool ignore_extras = false);


  public:
    StockQueryBlockJSON(void);
    virtual ~StockQueryBlockJSON(void);
    bool  hasOldConversation(void) const;
    bool  getOldConversation(void);
    const bool  getOldConversation(void) const;
    bool  hasRequestedAttributes(void) const;
    size_t  countOfRequestedAttributes(void) const;
    CompoundStockAttributeJSON *  elementOfRequestedAttributes(size_t element_num);
    const CompoundStockAttributeJSON *  elementOfRequestedAttributes(size_t element_num) const;
    std::vector< CompoundStockAttributeJSON * >  getRequestedAttributes(void);
    const std::vector< CompoundStockAttributeJSON * >  getRequestedAttributes(void) const;
    bool  hasRequestedListings(void) const;
    size_t  countOfRequestedListings(void) const;
    StockRequestedListingJSON *  elementOfRequestedListings(size_t element_num);
    const StockRequestedListingJSON *  elementOfRequestedListings(size_t element_num) const;
    std::vector< StockRequestedListingJSON * >  getRequestedListings(void);
    const std::vector< StockRequestedListingJSON * >  getRequestedListings(void) const;
    bool  hasInvalidListings(void) const;
    size_t  countOfInvalidListings(void) const;
    StockInvalidListingJSON *  elementOfInvalidListings(size_t element_num);
    const StockInvalidListingJSON *  elementOfInvalidListings(size_t element_num) const;
    std::vector< StockInvalidListingJSON * >  getInvalidListings(void);
    const std::vector< StockInvalidListingJSON * >  getInvalidListings(void) const;
    bool  hasGeneralMarketQuery(void) const;
    bool  getGeneralMarketQuery(void);
    const bool  getGeneralMarketQuery(void) const;

    virtual size_t extraStockQueryBlockComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraStockQueryBlockComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraStockQueryBlockComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraStockQueryBlockComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraStockQueryBlockLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraStockQueryBlockLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setOldConversation(bool new_value)
      {
        flagHasOldConversation = true;
        storeOldConversation = new_value;
      }
    void unsetOldConversation(void)
      {
        flagHasOldConversation = false;
      }
    void initRequestedAttributes(void)
      {
        if (flagHasRequestedAttributes)
          {
            for (size_t num4 = 0; num4 < storeRequestedAttributes.size(); ++num4)
              {
                storeRequestedAttributes[num4]->remove_reference();
              }
          }
        flagHasRequestedAttributes = true;
        storeRequestedAttributes.clear();
      }
    void appendRequestedAttributes(CompoundStockAttributeJSON * to_append)
      {
        if (!flagHasRequestedAttributes)
          {
            flagHasRequestedAttributes = true;
            storeRequestedAttributes.clear();
          }
        assert(flagHasRequestedAttributes);
        to_append->add_reference();
        storeRequestedAttributes.push_back(to_append);
      }
    void unsetRequestedAttributes(void)
      {
        if (flagHasRequestedAttributes)
          {
            for (size_t num5 = 0; num5 < storeRequestedAttributes.size(); ++num5)
              {
                storeRequestedAttributes[num5]->remove_reference();
              }
          }
        flagHasRequestedAttributes = false;
        storeRequestedAttributes.clear();
      }
    void initRequestedListings(void)
      {
        if (flagHasRequestedListings)
          {
            for (size_t num6 = 0; num6 < storeRequestedListings.size(); ++num6)
              {
                storeRequestedListings[num6]->remove_reference();
              }
          }
        flagHasRequestedListings = true;
        storeRequestedListings.clear();
      }
    void appendRequestedListings(StockRequestedListingJSON * to_append)
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
            for (size_t num7 = 0; num7 < storeRequestedListings.size(); ++num7)
              {
                storeRequestedListings[num7]->remove_reference();
              }
          }
        flagHasRequestedListings = false;
        storeRequestedListings.clear();
      }
    void initInvalidListings(void)
      {
        if (flagHasInvalidListings)
          {
            for (size_t num8 = 0; num8 < storeInvalidListings.size(); ++num8)
              {
                storeInvalidListings[num8]->remove_reference();
              }
          }
        flagHasInvalidListings = true;
        storeInvalidListings.clear();
      }
    void appendInvalidListings(StockInvalidListingJSON * to_append)
      {
        if (!flagHasInvalidListings)
          {
            flagHasInvalidListings = true;
            storeInvalidListings.clear();
          }
        assert(flagHasInvalidListings);
        to_append->add_reference();
        storeInvalidListings.push_back(to_append);
      }
    void unsetInvalidListings(void)
      {
        if (flagHasInvalidListings)
          {
            for (size_t num9 = 0; num9 < storeInvalidListings.size(); ++num9)
              {
                storeInvalidListings[num9]->remove_reference();
              }
          }
        flagHasInvalidListings = false;
        storeInvalidListings.clear();
      }
    void setGeneralMarketQuery(bool new_value)
      {
        flagHasGeneralMarketQuery = true;
        storeGeneralMarketQuery = new_value;
      }
    void unsetGeneralMarketQuery(void)
      {
        flagHasGeneralMarketQuery = false;
      }

    virtual void extraStockQueryBlockAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraStockQueryBlockSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraStockQueryBlockLookup(key);
        if (old_field == NULL)
          {
            extraStockQueryBlockAppendPair(key, new_component);
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
        assert(flagHasOldConversation);
        handler->start_pair("OldConversation");
        handler->boolean_value(storeOldConversation);
        assert(flagHasRequestedAttributes);
        handler->start_pair("RequestedAttributes");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeRequestedAttributes.size(); ++num1)
          {
            storeRequestedAttributes[num1]->write_as_json(handler);
          }
        handler->finish_array();
        assert(flagHasRequestedListings);
        handler->start_pair("RequestedListings");
        handler->start_array();
        for (size_t num2 = 0; num2 < storeRequestedListings.size(); ++num2)
          {
            storeRequestedListings[num2]->write_as_json(handler);
          }
        handler->finish_array();
        assert(flagHasInvalidListings);
        handler->start_pair("InvalidListings");
        handler->start_array();
        for (size_t num3 = 0; num3 < storeInvalidListings.size(); ++num3)
          {
            storeInvalidListings[num3]->write_as_json(handler);
          }
        handler->finish_array();
        if (flagHasGeneralMarketQuery)
          {
            handler->start_pair("GeneralMarketQuery");
            handler->boolean_value(storeGeneralMarketQuery);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasOldConversation()))
          {
            return "When parsing the object for %what%, the \"OldConversation\" field was missing.";
          }
        if (!(hasRequestedAttributes()))
          {
            return "When parsing the object for %what%, the \"RequestedAttributes\" field was missing.";
          }
        if (!(hasRequestedListings()))
          {
            return "When parsing the object for %what%, the \"RequestedListings\" field was missing.";
          }
        if (!(hasInvalidListings()))
          {
            return "When parsing the object for %what%, the \"InvalidListings\" field was missing.";
          }
        return NULL;
      }

    static StockQueryBlockJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static StockQueryBlockJSON *from_text(const char *text, bool ignore_extras = false)
      {
        StockQueryBlockJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StockQueryBlockJSON>, StockQueryBlockJSON *, bool> generator("Type StockQueryBlock", ignore_extras);
            parse_json_value(text, "Text for StockQueryBlockJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static StockQueryBlockJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        StockQueryBlockJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StockQueryBlockJSON>, StockQueryBlockJSON *, bool> generator("Type StockQueryBlock", ignore_extras);
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
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorOldConversation;
        JSONHoldingArrayGenerator<CompoundStockAttributeJSON::Generator, RCHandle<CompoundStockAttributeJSON>, CompoundStockAttributeJSON *, bool > fieldGeneratorRequestedAttributes;
        JSONHoldingArrayGenerator<StockRequestedListingJSON::Generator, RCHandle<StockRequestedListingJSON>, StockRequestedListingJSON *, bool > fieldGeneratorRequestedListings;
        JSONHoldingArrayGenerator<StockInvalidListingJSON::Generator, RCHandle<StockInvalidListingJSON>, StockInvalidListingJSON *, bool > fieldGeneratorInvalidListings;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorGeneralMarketQuery;
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
            StockQueryBlockJSON *result = new StockQueryBlockJSON();
            assert(result != NULL);
            RCHandle<StockQueryBlockJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraStockQueryBlockAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(StockQueryBlockJSON *result)
          {
            if (fieldGeneratorOldConversation.have_value)
              {
                result->setOldConversation(fieldGeneratorOldConversation.value);
                fieldGeneratorOldConversation.have_value = false;
              }
            else if (!(result->hasOldConversation()))
              {
                error("When parsing the object for %what%, the \"OldConversation\" field was missing.");
              }
            if (fieldGeneratorRequestedAttributes.have_value)
              {
                result->initRequestedAttributes();
                size_t count = fieldGeneratorRequestedAttributes.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendRequestedAttributes(fieldGeneratorRequestedAttributes.value[num].referenced());
                  }
                fieldGeneratorRequestedAttributes.value.clear();
                fieldGeneratorRequestedAttributes.have_value = false;
              }
            else if (!(result->hasRequestedAttributes()))
              {
                error("When parsing the object for %what%, the \"RequestedAttributes\" field was missing.");
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
            if (fieldGeneratorInvalidListings.have_value)
              {
                result->initInvalidListings();
                size_t count = fieldGeneratorInvalidListings.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendInvalidListings(fieldGeneratorInvalidListings.value[num].referenced());
                  }
                fieldGeneratorInvalidListings.value.clear();
                fieldGeneratorInvalidListings.have_value = false;
              }
            else if (!(result->hasInvalidListings()))
              {
                error("When parsing the object for %what%, the \"InvalidListings\" field was missing.");
              }
            if (fieldGeneratorGeneralMarketQuery.have_value)
              {
                result->setGeneralMarketQuery(fieldGeneratorGeneralMarketQuery.value);
                fieldGeneratorGeneralMarketQuery.have_value = false;
              }
          }
        virtual void handle_result(StockQueryBlockJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'G':
                    if (strcmp(&(field_name[1]), "eneralMarketQuery") == 0)
                        return &fieldGeneratorGeneralMarketQuery;
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "nvalidListings") == 0)
                        return &fieldGeneratorInvalidListings;
                    break;
                case 'O':
                    if (strcmp(&(field_name[1]), "ldConversation") == 0)
                        return &fieldGeneratorOldConversation;
                    break;
                case 'R':
                    if (strncmp(&(field_name[1]), "equested", 8) == 0)
                      {
                        switch ((unsigned char)(field_name[9]))
                          {
                            case 'A':
                                if (strcmp(&(field_name[10]), "ttributes") == 0)
                                    return &fieldGeneratorRequestedAttributes;
                                break;
                            case 'L':
                                if (strcmp(&(field_name[10]), "istings") == 0)
                                    return &fieldGeneratorRequestedListings;
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
        Generator(bool ignore_extras = false) : fieldGeneratorOldConversation("field \"OldConversation\" of the StockQueryBlock class"), fieldGeneratorRequestedAttributes("field \"RequestedAttributes\" of the StockQueryBlock class", ignore_extras), fieldGeneratorRequestedListings("field \"RequestedListings\" of the StockQueryBlock class", ignore_extras), fieldGeneratorInvalidListings("field \"InvalidListings\" of the StockQueryBlock class", ignore_extras), fieldGeneratorGeneralMarketQuery("field \"GeneralMarketQuery\" of the StockQueryBlock class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the StockQueryBlock class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorOldConversation.reset();
            fieldGeneratorRequestedAttributes.reset();
            fieldGeneratorRequestedListings.reset();
            fieldGeneratorInvalidListings.reset();
            fieldGeneratorGeneralMarketQuery.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* STOCKQUERYBLOCKJSON_H */
