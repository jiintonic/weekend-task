/* file "StockInvalidListingJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef STOCKINVALIDLISTINGJSON_H
#define STOCKINVALIDLISTINGJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONBooleanGenerator.h"
#include "StockAttributeValueJSON.h"
#include "StockAttributeValueJSON.h"
#include "StockAttributeValueJSON.h"
#include "StockAttributeValueJSON.h"
#include "StockAttributeValueJSON.h"
#include "StockListingRequestTypeJSON.h"
#include "StockAttributeValueJSON.h"
#include "StockAttributeValueJSON.h"
#include "StockAttributeValueJSON.h"
#include "StockListingJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class StockInvalidListingJSON : public ReferenceCounted
  {
  private:
    bool flagHasSymbol;
    StockAttributeValueJSON * storeSymbol;
    bool flagHasShortName;
    StockAttributeValueJSON * storeShortName;
    bool flagHasShortPossessiveName;
    StockAttributeValueJSON * storeShortPossessiveName;
    bool flagHasMediumName;
    StockAttributeValueJSON * storeMediumName;
    bool flagHasLongName;
    StockAttributeValueJSON * storeLongName;
    bool flagHasListingRequestType;
    StockListingRequestTypeJSON * storeListingRequestType;
    bool flagHasExchangeExplicit;
    bool storeExchangeExplicit;
    bool flagHasRequestedStockExchangeShortName;
    StockAttributeValueJSON * storeRequestedStockExchangeShortName;
    bool flagHasRequestedStockExchangeLongName;
    StockAttributeValueJSON * storeRequestedStockExchangeLongName;
    bool flagHasRequestedStockExchangeSymbol;
    StockAttributeValueJSON * storeRequestedStockExchangeSymbol;
    bool flagHasAlternateListing;
    StockListingJSON * storeAlternateListing;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    StockInvalidListingJSON(const StockInvalidListingJSON &);
    StockInvalidListingJSON & operator=(const StockInvalidListingJSON &other);

    void  fromJSONSymbol(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONShortName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONShortPossessiveName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMediumName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLongName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONListingRequestType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONExchangeExplicit(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestedStockExchangeShortName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestedStockExchangeLongName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestedStockExchangeSymbol(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlternateListing(JSONValue *json_value, bool ignore_extras = false);


  public:
    StockInvalidListingJSON(void);
    virtual ~StockInvalidListingJSON(void);
    bool  hasSymbol(void) const;
    StockAttributeValueJSON *  getSymbol(void);
    const StockAttributeValueJSON *  getSymbol(void) const;
    bool  hasShortName(void) const;
    StockAttributeValueJSON *  getShortName(void);
    const StockAttributeValueJSON *  getShortName(void) const;
    bool  hasShortPossessiveName(void) const;
    StockAttributeValueJSON *  getShortPossessiveName(void);
    const StockAttributeValueJSON *  getShortPossessiveName(void) const;
    bool  hasMediumName(void) const;
    StockAttributeValueJSON *  getMediumName(void);
    const StockAttributeValueJSON *  getMediumName(void) const;
    bool  hasLongName(void) const;
    StockAttributeValueJSON *  getLongName(void);
    const StockAttributeValueJSON *  getLongName(void) const;
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
    bool  hasRequestedStockExchangeShortName(void) const;
    StockAttributeValueJSON *  getRequestedStockExchangeShortName(void);
    const StockAttributeValueJSON *  getRequestedStockExchangeShortName(void) const;
    bool  hasRequestedStockExchangeLongName(void) const;
    StockAttributeValueJSON *  getRequestedStockExchangeLongName(void);
    const StockAttributeValueJSON *  getRequestedStockExchangeLongName(void) const;
    bool  hasRequestedStockExchangeSymbol(void) const;
    StockAttributeValueJSON *  getRequestedStockExchangeSymbol(void);
    const StockAttributeValueJSON *  getRequestedStockExchangeSymbol(void) const;
    bool  hasAlternateListing(void) const;
    StockListingJSON *  getAlternateListing(void);
    const StockListingJSON *  getAlternateListing(void) const;

    virtual size_t extraStockInvalidListingComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraStockInvalidListingComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraStockInvalidListingComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraStockInvalidListingComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraStockInvalidListingLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraStockInvalidListingLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setSymbol(StockAttributeValueJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSymbol)
          {
            storeSymbol->remove_reference();
          }
        flagHasSymbol = true;
        storeSymbol = new_value;
      }
    void unsetSymbol(void)
      {
        if (flagHasSymbol)
          {
            storeSymbol->remove_reference();
          }
        flagHasSymbol = false;
      }
    void setShortName(StockAttributeValueJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasShortName)
          {
            storeShortName->remove_reference();
          }
        flagHasShortName = true;
        storeShortName = new_value;
      }
    void unsetShortName(void)
      {
        if (flagHasShortName)
          {
            storeShortName->remove_reference();
          }
        flagHasShortName = false;
      }
    void setShortPossessiveName(StockAttributeValueJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasShortPossessiveName)
          {
            storeShortPossessiveName->remove_reference();
          }
        flagHasShortPossessiveName = true;
        storeShortPossessiveName = new_value;
      }
    void unsetShortPossessiveName(void)
      {
        if (flagHasShortPossessiveName)
          {
            storeShortPossessiveName->remove_reference();
          }
        flagHasShortPossessiveName = false;
      }
    void setMediumName(StockAttributeValueJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMediumName)
          {
            storeMediumName->remove_reference();
          }
        flagHasMediumName = true;
        storeMediumName = new_value;
      }
    void unsetMediumName(void)
      {
        if (flagHasMediumName)
          {
            storeMediumName->remove_reference();
          }
        flagHasMediumName = false;
      }
    void setLongName(StockAttributeValueJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasLongName)
          {
            storeLongName->remove_reference();
          }
        flagHasLongName = true;
        storeLongName = new_value;
      }
    void unsetLongName(void)
      {
        if (flagHasLongName)
          {
            storeLongName->remove_reference();
          }
        flagHasLongName = false;
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
    void setRequestedStockExchangeShortName(StockAttributeValueJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasRequestedStockExchangeShortName)
          {
            storeRequestedStockExchangeShortName->remove_reference();
          }
        flagHasRequestedStockExchangeShortName = true;
        storeRequestedStockExchangeShortName = new_value;
      }
    void unsetRequestedStockExchangeShortName(void)
      {
        if (flagHasRequestedStockExchangeShortName)
          {
            storeRequestedStockExchangeShortName->remove_reference();
          }
        flagHasRequestedStockExchangeShortName = false;
      }
    void setRequestedStockExchangeLongName(StockAttributeValueJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasRequestedStockExchangeLongName)
          {
            storeRequestedStockExchangeLongName->remove_reference();
          }
        flagHasRequestedStockExchangeLongName = true;
        storeRequestedStockExchangeLongName = new_value;
      }
    void unsetRequestedStockExchangeLongName(void)
      {
        if (flagHasRequestedStockExchangeLongName)
          {
            storeRequestedStockExchangeLongName->remove_reference();
          }
        flagHasRequestedStockExchangeLongName = false;
      }
    void setRequestedStockExchangeSymbol(StockAttributeValueJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasRequestedStockExchangeSymbol)
          {
            storeRequestedStockExchangeSymbol->remove_reference();
          }
        flagHasRequestedStockExchangeSymbol = true;
        storeRequestedStockExchangeSymbol = new_value;
      }
    void unsetRequestedStockExchangeSymbol(void)
      {
        if (flagHasRequestedStockExchangeSymbol)
          {
            storeRequestedStockExchangeSymbol->remove_reference();
          }
        flagHasRequestedStockExchangeSymbol = false;
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

    virtual void extraStockInvalidListingAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraStockInvalidListingSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraStockInvalidListingLookup(key);
        if (old_field == NULL)
          {
            extraStockInvalidListingAppendPair(key, new_component);
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
        assert(flagHasSymbol);
        handler->start_pair("Symbol");
        storeSymbol->write_as_json(handler);
        if (flagHasShortName)
          {
            handler->start_pair("ShortName");
            storeShortName->write_as_json(handler);
          }
        if (flagHasShortPossessiveName)
          {
            handler->start_pair("ShortPossessiveName");
            storeShortPossessiveName->write_as_json(handler);
          }
        if (flagHasMediumName)
          {
            handler->start_pair("MediumName");
            storeMediumName->write_as_json(handler);
          }
        if (flagHasLongName)
          {
            handler->start_pair("LongName");
            storeLongName->write_as_json(handler);
          }
        assert(flagHasListingRequestType);
        handler->start_pair("ListingRequestType");
        storeListingRequestType->write_as_json(handler);
        assert(flagHasExchangeExplicit);
        handler->start_pair("ExchangeExplicit");
        handler->boolean_value(storeExchangeExplicit);
        if (flagHasRequestedStockExchangeShortName)
          {
            handler->start_pair("RequestedStockExchangeShortName");
            storeRequestedStockExchangeShortName->write_as_json(handler);
          }
        if (flagHasRequestedStockExchangeLongName)
          {
            handler->start_pair("RequestedStockExchangeLongName");
            storeRequestedStockExchangeLongName->write_as_json(handler);
          }
        if (flagHasRequestedStockExchangeSymbol)
          {
            handler->start_pair("RequestedStockExchangeSymbol");
            storeRequestedStockExchangeSymbol->write_as_json(handler);
          }
        if (flagHasAlternateListing)
          {
            handler->start_pair("AlternateListing");
            storeAlternateListing->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasSymbol()))
          {
            return "When parsing the object for %what%, the \"Symbol\" field was missing.";
          }
        if (!(hasListingRequestType()))
          {
            return "When parsing the object for %what%, the \"ListingRequestType\" field was missing.";
          }
        if (!(hasExchangeExplicit()))
          {
            return "When parsing the object for %what%, the \"ExchangeExplicit\" field was missing.";
          }
        return NULL;
      }

    static StockInvalidListingJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static StockInvalidListingJSON *from_text(const char *text, bool ignore_extras = false)
      {
        StockInvalidListingJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StockInvalidListingJSON>, StockInvalidListingJSON *, bool> generator("Type StockInvalidListing", ignore_extras);
            parse_json_value(text, "Text for StockInvalidListingJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static StockInvalidListingJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        StockInvalidListingJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StockInvalidListingJSON>, StockInvalidListingJSON *, bool> generator("Type StockInvalidListing", ignore_extras);
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
        JSONHoldingGenerator<StockAttributeValueJSON::Generator, RCHandle<StockAttributeValueJSON>, StockAttributeValueJSON *, bool > fieldGeneratorSymbol;
        JSONHoldingGenerator<StockAttributeValueJSON::Generator, RCHandle<StockAttributeValueJSON>, StockAttributeValueJSON *, bool > fieldGeneratorShortName;
        JSONHoldingGenerator<StockAttributeValueJSON::Generator, RCHandle<StockAttributeValueJSON>, StockAttributeValueJSON *, bool > fieldGeneratorShortPossessiveName;
        JSONHoldingGenerator<StockAttributeValueJSON::Generator, RCHandle<StockAttributeValueJSON>, StockAttributeValueJSON *, bool > fieldGeneratorMediumName;
        JSONHoldingGenerator<StockAttributeValueJSON::Generator, RCHandle<StockAttributeValueJSON>, StockAttributeValueJSON *, bool > fieldGeneratorLongName;
        JSONHoldingGenerator<StockListingRequestTypeJSON::Generator, RCHandle<StockListingRequestTypeJSON>, StockListingRequestTypeJSON *, bool > fieldGeneratorListingRequestType;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorExchangeExplicit;
        JSONHoldingGenerator<StockAttributeValueJSON::Generator, RCHandle<StockAttributeValueJSON>, StockAttributeValueJSON *, bool > fieldGeneratorRequestedStockExchangeShortName;
        JSONHoldingGenerator<StockAttributeValueJSON::Generator, RCHandle<StockAttributeValueJSON>, StockAttributeValueJSON *, bool > fieldGeneratorRequestedStockExchangeLongName;
        JSONHoldingGenerator<StockAttributeValueJSON::Generator, RCHandle<StockAttributeValueJSON>, StockAttributeValueJSON *, bool > fieldGeneratorRequestedStockExchangeSymbol;
        JSONHoldingGenerator<StockListingJSON::Generator, RCHandle<StockListingJSON>, StockListingJSON *, bool > fieldGeneratorAlternateListing;
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
            StockInvalidListingJSON *result = new StockInvalidListingJSON();
            assert(result != NULL);
            RCHandle<StockInvalidListingJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraStockInvalidListingAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(StockInvalidListingJSON *result)
          {
            if (fieldGeneratorSymbol.have_value)
              {
                result->setSymbol(fieldGeneratorSymbol.value.referenced());
                fieldGeneratorSymbol.have_value = false;
              }
            else if (!(result->hasSymbol()))
              {
                error("When parsing the object for %what%, the \"Symbol\" field was missing.");
              }
            if (fieldGeneratorShortName.have_value)
              {
                result->setShortName(fieldGeneratorShortName.value.referenced());
                fieldGeneratorShortName.have_value = false;
              }
            if (fieldGeneratorShortPossessiveName.have_value)
              {
                result->setShortPossessiveName(fieldGeneratorShortPossessiveName.value.referenced());
                fieldGeneratorShortPossessiveName.have_value = false;
              }
            if (fieldGeneratorMediumName.have_value)
              {
                result->setMediumName(fieldGeneratorMediumName.value.referenced());
                fieldGeneratorMediumName.have_value = false;
              }
            if (fieldGeneratorLongName.have_value)
              {
                result->setLongName(fieldGeneratorLongName.value.referenced());
                fieldGeneratorLongName.have_value = false;
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
            if (fieldGeneratorRequestedStockExchangeShortName.have_value)
              {
                result->setRequestedStockExchangeShortName(fieldGeneratorRequestedStockExchangeShortName.value.referenced());
                fieldGeneratorRequestedStockExchangeShortName.have_value = false;
              }
            if (fieldGeneratorRequestedStockExchangeLongName.have_value)
              {
                result->setRequestedStockExchangeLongName(fieldGeneratorRequestedStockExchangeLongName.value.referenced());
                fieldGeneratorRequestedStockExchangeLongName.have_value = false;
              }
            if (fieldGeneratorRequestedStockExchangeSymbol.have_value)
              {
                result->setRequestedStockExchangeSymbol(fieldGeneratorRequestedStockExchangeSymbol.value.referenced());
                fieldGeneratorRequestedStockExchangeSymbol.have_value = false;
              }
            if (fieldGeneratorAlternateListing.have_value)
              {
                result->setAlternateListing(fieldGeneratorAlternateListing.value.referenced());
                fieldGeneratorAlternateListing.have_value = false;
              }
          }
        virtual void handle_result(StockInvalidListingJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "lternateListing") == 0)
                        return &fieldGeneratorAlternateListing;
                    break;
                case 'E':
                    if (strcmp(&(field_name[1]), "xchangeExplicit") == 0)
                        return &fieldGeneratorExchangeExplicit;
                    break;
                case 'L':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'i':
                            if (strcmp(&(field_name[2]), "stingRequestType") == 0)
                                return &fieldGeneratorListingRequestType;
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "ngName") == 0)
                                return &fieldGeneratorLongName;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "ediumName") == 0)
                        return &fieldGeneratorMediumName;
                    break;
                case 'R':
                    if (strncmp(&(field_name[1]), "equestedStockExchange", 21) == 0)
                      {
                        switch ((unsigned char)(field_name[22]))
                          {
                            case 'L':
                                if (strcmp(&(field_name[23]), "ongName") == 0)
                                    return &fieldGeneratorRequestedStockExchangeLongName;
                                break;
                            case 'S':
                                switch ((unsigned char)(field_name[23]))
                                  {
                                    case 'h':
                                        if (strcmp(&(field_name[24]), "ortName") == 0)
                                            return &fieldGeneratorRequestedStockExchangeShortName;
                                        break;
                                    case 'y':
                                        if (strcmp(&(field_name[24]), "mbol") == 0)
                                            return &fieldGeneratorRequestedStockExchangeSymbol;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'h':
                            if (strncmp(&(field_name[2]), "ort", 3) == 0)
                              {
                                switch ((unsigned char)(field_name[5]))
                                  {
                                    case 'N':
                                        if (strcmp(&(field_name[6]), "ame") == 0)
                                            return &fieldGeneratorShortName;
                                        break;
                                    case 'P':
                                        if (strcmp(&(field_name[6]), "ossessiveName") == 0)
                                            return &fieldGeneratorShortPossessiveName;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'y':
                            if (strcmp(&(field_name[2]), "mbol") == 0)
                                return &fieldGeneratorSymbol;
                            break;
                        default:
                            break;
                      }
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorSymbol("field \"Symbol\" of the StockInvalidListing class", ignore_extras), fieldGeneratorShortName("field \"ShortName\" of the StockInvalidListing class", ignore_extras), fieldGeneratorShortPossessiveName("field \"ShortPossessiveName\" of the StockInvalidListing class", ignore_extras), fieldGeneratorMediumName("field \"MediumName\" of the StockInvalidListing class", ignore_extras), fieldGeneratorLongName("field \"LongName\" of the StockInvalidListing class", ignore_extras), fieldGeneratorListingRequestType("field \"ListingRequestType\" of the StockInvalidListing class", ignore_extras), fieldGeneratorExchangeExplicit("field \"ExchangeExplicit\" of the StockInvalidListing class"), fieldGeneratorRequestedStockExchangeShortName("field \"RequestedStockExchangeShortName\" of the StockInvalidListing class", ignore_extras), fieldGeneratorRequestedStockExchangeLongName("field \"RequestedStockExchangeLongName\" of the StockInvalidListing class", ignore_extras), fieldGeneratorRequestedStockExchangeSymbol("field \"RequestedStockExchangeSymbol\" of the StockInvalidListing class", ignore_extras), fieldGeneratorAlternateListing("field \"AlternateListing\" of the StockInvalidListing class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the StockInvalidListing class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorSymbol.reset();
            fieldGeneratorShortName.reset();
            fieldGeneratorShortPossessiveName.reset();
            fieldGeneratorMediumName.reset();
            fieldGeneratorLongName.reset();
            fieldGeneratorListingRequestType.reset();
            fieldGeneratorExchangeExplicit.reset();
            fieldGeneratorRequestedStockExchangeShortName.reset();
            fieldGeneratorRequestedStockExchangeLongName.reset();
            fieldGeneratorRequestedStockExchangeSymbol.reset();
            fieldGeneratorAlternateListing.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* STOCKINVALIDLISTINGJSON_H */
