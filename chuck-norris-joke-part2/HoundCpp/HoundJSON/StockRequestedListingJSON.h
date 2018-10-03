/* file "StockRequestedListingJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef STOCKREQUESTEDLISTINGJSON_H
#define STOCKREQUESTEDLISTINGJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONBooleanGenerator.h"
#include "JSONNullGenerator.h"
#include "JSONParallelGenerator.h"
#include <vector>
#include "StockListingJSON.h"
#include "StockListingRequestTypeJSON.h"
#include "StockListingJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class StockRequestedListingJSON : public ReferenceCounted
  {
  public:
    struct TypeRemoteDelay
      {
        size_t key;
        union
          {
            double choice0;
            bool choice1;
          } u;
      };

  private:
    bool flagHasStockListing;
    StockListingJSON * storeStockListing;
    bool flagHasListingRequestType;
    StockListingRequestTypeJSON * storeListingRequestType;
    bool flagHasExchangeExplicit;
    bool storeExchangeExplicit;
    bool flagHasPrimaryHasData;
    bool storePrimaryHasData;
    bool flagHasAllowDataWarnings;
    bool storeAllowDataWarnings;
    bool flagHasAlternateListing;
    StockListingJSON * storeAlternateListing;
    bool flagHasRemoteDelay;
    std::vector< TypeRemoteDelay > storeRemoteDelay;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    StockRequestedListingJSON(const StockRequestedListingJSON &);
    StockRequestedListingJSON & operator=(const StockRequestedListingJSON &other);

    void  fromJSONStockListing(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONListingRequestType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONExchangeExplicit(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPrimaryHasData(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAllowDataWarnings(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlternateListing(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRemoteDelay(JSONValue *json_value, bool ignore_extras = false);


  public:
    StockRequestedListingJSON(void);
    virtual ~StockRequestedListingJSON(void);
    bool  hasStockListing(void) const;
    StockListingJSON *  getStockListing(void);
    const StockListingJSON *  getStockListing(void) const;
    bool  hasListingRequestType(void) const;
    StockListingRequestTypeJSON *  getListingRequestType(void);
    const StockListingRequestTypeJSON *  getListingRequestType(void) const;
    StockListingRequestTypeJSON::TypeValue  getListingRequestTypeValue(void);
    const StockListingRequestTypeJSON::TypeValue  getListingRequestTypeValue(void) const;
    const char * getListingRequestTypeAsChars(void) const;
    std::string  getListingRequestTypeAsString(void) const;
    bool  hasExchangeExplicit(void) const;
    bool  getExchangeExplicit(void);
    const bool  getExchangeExplicit(void) const;
    bool  hasPrimaryHasData(void) const;
    bool  getPrimaryHasData(void);
    const bool  getPrimaryHasData(void) const;
    bool  hasAllowDataWarnings(void) const;
    bool  getAllowDataWarnings(void);
    const bool  getAllowDataWarnings(void) const;
    bool  hasAlternateListing(void) const;
    StockListingJSON *  getAlternateListing(void);
    const StockListingJSON *  getAlternateListing(void) const;
    bool  hasRemoteDelay(void) const;
    size_t  countOfRemoteDelay(void) const;
    TypeRemoteDelay  elementOfRemoteDelay(size_t element_num);
    const TypeRemoteDelay  elementOfRemoteDelay(size_t element_num) const;
    std::vector< TypeRemoteDelay >  getRemoteDelay(void);
    const std::vector< TypeRemoteDelay >  getRemoteDelay(void) const;

    virtual size_t extraStockRequestedListingComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraStockRequestedListingComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraStockRequestedListingComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraStockRequestedListingComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraStockRequestedListingLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraStockRequestedListingLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setStockListing(StockListingJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStockListing)
          {
            storeStockListing->remove_reference();
          }
        flagHasStockListing = true;
        storeStockListing = new_value;
      }
    void unsetStockListing(void)
      {
        if (flagHasStockListing)
          {
            storeStockListing->remove_reference();
          }
        flagHasStockListing = false;
      }
    void setListingRequestType(StockListingRequestTypeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasListingRequestType)
          {
            storeListingRequestType->remove_reference();
          }
        flagHasListingRequestType = true;
        storeListingRequestType = new_value;
      }
    void setListingRequestType(StockListingRequestTypeJSON::TypeValue new_value)
      {
        setListingRequestType(new StockListingRequestTypeJSON(new_value));
      }
    void setListingRequestType(const char *chars)
      {
        StockListingRequestTypeJSON::TypeValueKnownValues known = StockListingRequestTypeJSON::stringToValue(chars);
        StockListingRequestTypeJSON::TypeValue new_value;
        if (known == StockListingRequestTypeJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setListingRequestType(new_value);
      }
    void setListingRequestType(std::string the_string)
      {
        setListingRequestType(the_string.c_str());
      }
    void unsetListingRequestType(void)
      {
        if (flagHasListingRequestType)
          {
            storeListingRequestType->remove_reference();
          }
        flagHasListingRequestType = false;
      }
    void setExchangeExplicit(bool new_value)
      {
        flagHasExchangeExplicit = true;
        storeExchangeExplicit = new_value;
      }
    void unsetExchangeExplicit(void)
      {
        flagHasExchangeExplicit = false;
      }
    void setPrimaryHasData(bool new_value)
      {
        flagHasPrimaryHasData = true;
        storePrimaryHasData = new_value;
      }
    void unsetPrimaryHasData(void)
      {
        flagHasPrimaryHasData = false;
      }
    void setAllowDataWarnings(bool new_value)
      {
        flagHasAllowDataWarnings = true;
        storeAllowDataWarnings = new_value;
      }
    void unsetAllowDataWarnings(void)
      {
        flagHasAllowDataWarnings = false;
      }
    void setAlternateListing(StockListingJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAlternateListing)
          {
            storeAlternateListing->remove_reference();
          }
        flagHasAlternateListing = true;
        storeAlternateListing = new_value;
      }
    void unsetAlternateListing(void)
      {
        if (flagHasAlternateListing)
          {
            storeAlternateListing->remove_reference();
          }
        flagHasAlternateListing = false;
      }
    void initRemoteDelay(void)
      {
        flagHasRemoteDelay = true;
        storeRemoteDelay.clear();
      }
    void appendRemoteDelay(TypeRemoteDelay to_append)
      {
        if (!flagHasRemoteDelay)
          {
            flagHasRemoteDelay = true;
            storeRemoteDelay.clear();
          }
        assert(flagHasRemoteDelay);
        storeRemoteDelay.push_back(to_append);
      }
    void unsetRemoteDelay(void)
      {
        flagHasRemoteDelay = false;
        storeRemoteDelay.clear();
      }

    virtual void extraStockRequestedListingAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraStockRequestedListingSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraStockRequestedListingLookup(key);
        if (old_field == NULL)
          {
            extraStockRequestedListingAppendPair(key, new_component);
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
        assert(flagHasStockListing);
        handler->start_pair("StockListing");
        storeStockListing->write_as_json(handler);
        assert(flagHasListingRequestType);
        handler->start_pair("ListingRequestType");
        storeListingRequestType->write_as_json(handler);
        assert(flagHasExchangeExplicit);
        handler->start_pair("ExchangeExplicit");
        handler->boolean_value(storeExchangeExplicit);
        assert(flagHasPrimaryHasData);
        handler->start_pair("PrimaryHasData");
        handler->boolean_value(storePrimaryHasData);
        assert(flagHasAllowDataWarnings);
        handler->start_pair("AllowDataWarnings");
        handler->boolean_value(storeAllowDataWarnings);
        if (flagHasAlternateListing)
          {
            handler->start_pair("AlternateListing");
            storeAlternateListing->write_as_json(handler);
          }
        if (flagHasRemoteDelay)
          {
            handler->start_pair("RemoteDelay");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeRemoteDelay.size(); ++num1)
              {
                switch (storeRemoteDelay[num1].key)
                  {
                    case 0:
                        if (((double)(long int)storeRemoteDelay[num1].u.choice0) == storeRemoteDelay[num1].u.choice0)
                            handler->number_value((long int)storeRemoteDelay[num1].u.choice0);
                        else
                            handler->number_value(storeRemoteDelay[num1].u.choice0);
                        break;
                    case 1:
                        handler->null_value();
                        break;
                    default:
                        assert(false);
                  }
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasStockListing()))
          {
            return "When parsing the object for %what%, the \"StockListing\" field was missing.";
          }
        if (!(hasListingRequestType()))
          {
            return "When parsing the object for %what%, the \"ListingRequestType\" field was missing.";
          }
        if (!(hasExchangeExplicit()))
          {
            return "When parsing the object for %what%, the \"ExchangeExplicit\" field was missing.";
          }
        if (!(hasPrimaryHasData()))
          {
            return "When parsing the object for %what%, the \"PrimaryHasData\" field was missing.";
          }
        if (!(hasAllowDataWarnings()))
          {
            return "When parsing the object for %what%, the \"AllowDataWarnings\" field was missing.";
          }
        return NULL;
      }

    static StockRequestedListingJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static StockRequestedListingJSON *from_text(const char *text, bool ignore_extras = false)
      {
        StockRequestedListingJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StockRequestedListingJSON>, StockRequestedListingJSON *, bool> generator("Type StockRequestedListing", ignore_extras);
            parse_json_value(text, "Text for StockRequestedListingJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static StockRequestedListingJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        StockRequestedListingJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StockRequestedListingJSON>, StockRequestedListingJSON *, bool> generator("Type StockRequestedListing", ignore_extras);
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
        JSONHoldingGenerator<StockListingJSON::Generator, RCHandle<StockListingJSON>, StockListingJSON *, bool > fieldGeneratorStockListing;
        JSONHoldingGenerator<StockListingRequestTypeJSON::Generator, RCHandle<StockListingRequestTypeJSON>, StockListingRequestTypeJSON *, bool > fieldGeneratorListingRequestType;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorExchangeExplicit;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorPrimaryHasData;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorAllowDataWarnings;
        JSONHoldingGenerator<StockListingJSON::Generator, RCHandle<StockListingJSON>, StockListingJSON *, bool > fieldGeneratorAlternateListing;
    class FieldGeneratorRemoteDelay : public JSONParallelGenerator
          {
          private:
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > field0;
            JSONHoldingGenerator<JSONNullGenerator, bool, bool > field1;
            JSONHandler *all_handlers[2];

          protected:
            size_t start(JSONHandler ***parallel_handlers_location)
              {
                *parallel_handlers_location = &(all_handlers[0]);
                return 2;
              }
            void finish(size_t winning_index)
              {
                TypeRemoteDelay result;
                result.key = winning_index;
                switch (winning_index)
                  {
                    case 0:
                      {
                        assert(field0.have_value);
                        result.u.choice0 = atof(field0.value.c_str());
                        break;
                      }
                    case 1:
                      {
                        assert(field1.have_value);
                        result.u.choice1 = field1.value;
                        break;
                      }
                    default:
                      {
                        assert(false);
                      }
                  }
                handle_result(result);
              }
            virtual void handle_result(TypeRemoteDelay result) = 0;

          public:
            FieldGeneratorRemoteDelay(bool ignore_extras) : field0("option 0 of field \"RemoteDelay\""), field1("option 1 of field \"RemoteDelay\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorRemoteDelay(std::string what, bool ignore_extras) : field0("option 0 of field \"RemoteDelay\""), field1("option 1 of field \"RemoteDelay\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorRemoteDelay(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderRemoteDelay
          {
          private:
            bool have_data;
            TypeRemoteDelay data;

          public:
            HolderRemoteDelay(void) : have_data(false)  { }
            HolderRemoteDelay(TypeRemoteDelay init_data) : have_data(true), data(init_data)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            HolderRemoteDelay(const HolderRemoteDelay &other) : have_data(other.haveData()), data(other.referenced())
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            ~HolderRemoteDelay(void)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }

            void operator=(const HolderRemoteDelay &other)
              {
                TypeRemoteDelay new_data;
                if (other.haveData())
                  {
                    new_data = other.referenced();
                    switch (new_data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                have_data = other.haveData();
                if (have_data)
                    data = new_data;
              }
            bool haveData(void) const
              {
                return have_data;
              }
            TypeRemoteDelay referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingArrayGenerator<FieldGeneratorRemoteDelay, HolderRemoteDelay, TypeRemoteDelay, bool > fieldGeneratorRemoteDelay;
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
            StockRequestedListingJSON *result = new StockRequestedListingJSON();
            assert(result != NULL);
            RCHandle<StockRequestedListingJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraStockRequestedListingAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(StockRequestedListingJSON *result)
          {
            if (fieldGeneratorStockListing.have_value)
              {
                result->setStockListing(fieldGeneratorStockListing.value.referenced());
                fieldGeneratorStockListing.have_value = false;
              }
            else if (!(result->hasStockListing()))
              {
                error("When parsing the object for %what%, the \"StockListing\" field was missing.");
              }
            if (fieldGeneratorListingRequestType.have_value)
              {
                result->setListingRequestType(fieldGeneratorListingRequestType.value.referenced());
                fieldGeneratorListingRequestType.have_value = false;
              }
            else if (!(result->hasListingRequestType()))
              {
                error("When parsing the object for %what%, the \"ListingRequestType\" field was missing.");
              }
            if (fieldGeneratorExchangeExplicit.have_value)
              {
                result->setExchangeExplicit(fieldGeneratorExchangeExplicit.value);
                fieldGeneratorExchangeExplicit.have_value = false;
              }
            else if (!(result->hasExchangeExplicit()))
              {
                error("When parsing the object for %what%, the \"ExchangeExplicit\" field was missing.");
              }
            if (fieldGeneratorPrimaryHasData.have_value)
              {
                result->setPrimaryHasData(fieldGeneratorPrimaryHasData.value);
                fieldGeneratorPrimaryHasData.have_value = false;
              }
            else if (!(result->hasPrimaryHasData()))
              {
                error("When parsing the object for %what%, the \"PrimaryHasData\" field was missing.");
              }
            if (fieldGeneratorAllowDataWarnings.have_value)
              {
                result->setAllowDataWarnings(fieldGeneratorAllowDataWarnings.value);
                fieldGeneratorAllowDataWarnings.have_value = false;
              }
            else if (!(result->hasAllowDataWarnings()))
              {
                error("When parsing the object for %what%, the \"AllowDataWarnings\" field was missing.");
              }
            if (fieldGeneratorAlternateListing.have_value)
              {
                result->setAlternateListing(fieldGeneratorAlternateListing.value.referenced());
                fieldGeneratorAlternateListing.have_value = false;
              }
            if (fieldGeneratorRemoteDelay.have_value)
              {
                result->initRemoteDelay();
                size_t count = fieldGeneratorRemoteDelay.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendRemoteDelay(fieldGeneratorRemoteDelay.value[num].referenced());
                  }
                fieldGeneratorRemoteDelay.value.clear();
                fieldGeneratorRemoteDelay.have_value = false;
              }
          }
        virtual void handle_result(StockRequestedListingJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strncmp(&(field_name[1]), "l", 1) == 0)
                      {
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'l':
                                if (strcmp(&(field_name[3]), "owDataWarnings") == 0)
                                    return &fieldGeneratorAllowDataWarnings;
                                break;
                            case 't':
                                if (strcmp(&(field_name[3]), "ernateListing") == 0)
                                    return &fieldGeneratorAlternateListing;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'E':
                    if (strcmp(&(field_name[1]), "xchangeExplicit") == 0)
                        return &fieldGeneratorExchangeExplicit;
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "istingRequestType") == 0)
                        return &fieldGeneratorListingRequestType;
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "rimaryHasData") == 0)
                        return &fieldGeneratorPrimaryHasData;
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "emoteDelay") == 0)
                        return &fieldGeneratorRemoteDelay;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "tockListing") == 0)
                        return &fieldGeneratorStockListing;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorStockListing("field \"StockListing\" of the StockRequestedListing class", ignore_extras), fieldGeneratorListingRequestType("field \"ListingRequestType\" of the StockRequestedListing class", ignore_extras), fieldGeneratorExchangeExplicit("field \"ExchangeExplicit\" of the StockRequestedListing class"), fieldGeneratorPrimaryHasData("field \"PrimaryHasData\" of the StockRequestedListing class"), fieldGeneratorAllowDataWarnings("field \"AllowDataWarnings\" of the StockRequestedListing class"), fieldGeneratorAlternateListing("field \"AlternateListing\" of the StockRequestedListing class", ignore_extras), fieldGeneratorRemoteDelay("field \"RemoteDelay\" of the StockRequestedListing class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the StockRequestedListing class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorStockListing.reset();
            fieldGeneratorListingRequestType.reset();
            fieldGeneratorExchangeExplicit.reset();
            fieldGeneratorPrimaryHasData.reset();
            fieldGeneratorAllowDataWarnings.reset();
            fieldGeneratorAlternateListing.reset();
            fieldGeneratorRemoteDelay.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* STOCKREQUESTEDLISTINGJSON_H */
