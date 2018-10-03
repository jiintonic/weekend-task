/* file "StockConversationRequestedListingJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef STOCKCONVERSATIONREQUESTEDLISTINGJSON_H
#define STOCKCONVERSATIONREQUESTEDLISTINGJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONIntegerUnboundRangeGenerator.h"
#include "OInteger.h"
#include "StockListingRequestTypeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class StockConversationRequestedListingJSON : public ReferenceCounted
  {
  private:
    bool flagHasListingID;
    OInteger storeListingID;
    bool flagHasListingRequestType;
    StockListingRequestTypeJSON * storeListingRequestType;
    bool flagHasNumShares;
    OInteger storeNumShares;
    bool flagHasAlternateListingID;
    OInteger storeAlternateListingID;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    StockConversationRequestedListingJSON(const StockConversationRequestedListingJSON &);
    StockConversationRequestedListingJSON & operator=(const StockConversationRequestedListingJSON &other);

    void  fromJSONListingID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONListingRequestType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNumShares(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlternateListingID(JSONValue *json_value, bool ignore_extras = false);


  public:
    StockConversationRequestedListingJSON(void);
    virtual ~StockConversationRequestedListingJSON(void);
    bool  hasListingID(void) const;
    OInteger  getListingID(void);
    const OInteger  getListingID(void) const;
    bool  hasListingRequestType(void) const;
    StockListingRequestTypeJSON *  getListingRequestType(void);
    const StockListingRequestTypeJSON *  getListingRequestType(void) const;
    StockListingRequestTypeJSON::TypeValue  getListingRequestTypeValue(void);
    const StockListingRequestTypeJSON::TypeValue  getListingRequestTypeValue(void) const;
    const char * getListingRequestTypeAsChars(void) const;
    std::string  getListingRequestTypeAsString(void) const;
    bool  hasNumShares(void) const;
    OInteger  getNumShares(void);
    const OInteger  getNumShares(void) const;
    bool  hasAlternateListingID(void) const;
    OInteger  getAlternateListingID(void);
    const OInteger  getAlternateListingID(void) const;

    virtual size_t extraStockConversationRequestedListingComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraStockConversationRequestedListingComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraStockConversationRequestedListingComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraStockConversationRequestedListingComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraStockConversationRequestedListingLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraStockConversationRequestedListingLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setListingID(OInteger new_value)
      {
        flagHasListingID = true;
        storeListingID = new_value;
      }
    void unsetListingID(void)
      {
        flagHasListingID = false;
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
    void setNumShares(OInteger new_value)
      {
        flagHasNumShares = true;
        storeNumShares = new_value;
      }
    void unsetNumShares(void)
      {
        flagHasNumShares = false;
      }
    void setAlternateListingID(OInteger new_value)
      {
        flagHasAlternateListingID = true;
        storeAlternateListingID = new_value;
      }
    void unsetAlternateListingID(void)
      {
        flagHasAlternateListingID = false;
      }

    virtual void extraStockConversationRequestedListingAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraStockConversationRequestedListingSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraStockConversationRequestedListingLookup(key);
        if (old_field == NULL)
          {
            extraStockConversationRequestedListingAppendPair(key, new_component);
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
        assert(flagHasListingID);
        handler->start_pair("ListingID");
        handler->number_value(storeListingID.get_o_integer());
        assert(flagHasListingRequestType);
        handler->start_pair("ListingRequestType");
        storeListingRequestType->write_as_json(handler);
        if (flagHasNumShares)
          {
            handler->start_pair("NumShares");
            handler->number_value(storeNumShares.get_o_integer());
          }
        if (flagHasAlternateListingID)
          {
            handler->start_pair("AlternateListingID");
            handler->number_value(storeAlternateListingID.get_o_integer());
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasListingID()))
          {
            return "When parsing the object for %what%, the \"ListingID\" field was missing.";
          }
        if (!(hasListingRequestType()))
          {
            return "When parsing the object for %what%, the \"ListingRequestType\" field was missing.";
          }
        return NULL;
      }

    static StockConversationRequestedListingJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static StockConversationRequestedListingJSON *from_text(const char *text, bool ignore_extras = false)
      {
        StockConversationRequestedListingJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StockConversationRequestedListingJSON>, StockConversationRequestedListingJSON *, bool> generator("Type StockConversationRequestedListing", ignore_extras);
            parse_json_value(text, "Text for StockConversationRequestedListingJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static StockConversationRequestedListingJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        StockConversationRequestedListingJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StockConversationRequestedListingJSON>, StockConversationRequestedListingJSON *, bool> generator("Type StockConversationRequestedListing", ignore_extras);
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
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorListingID;
        JSONHoldingGenerator<StockListingRequestTypeJSON::Generator, RCHandle<StockListingRequestTypeJSON>, StockListingRequestTypeJSON *, bool > fieldGeneratorListingRequestType;
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorNumShares;
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorAlternateListingID;
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
            StockConversationRequestedListingJSON *result = new StockConversationRequestedListingJSON();
            assert(result != NULL);
            RCHandle<StockConversationRequestedListingJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraStockConversationRequestedListingAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(StockConversationRequestedListingJSON *result)
          {
            if (fieldGeneratorListingID.have_value)
              {
                result->setListingID(fieldGeneratorListingID.value);
                fieldGeneratorListingID.have_value = false;
              }
            else if (!(result->hasListingID()))
              {
                error("When parsing the object for %what%, the \"ListingID\" field was missing.");
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
            if (fieldGeneratorNumShares.have_value)
              {
                result->setNumShares(fieldGeneratorNumShares.value);
                fieldGeneratorNumShares.have_value = false;
              }
            if (fieldGeneratorAlternateListingID.have_value)
              {
                result->setAlternateListingID(fieldGeneratorAlternateListingID.value);
                fieldGeneratorAlternateListingID.have_value = false;
              }
          }
        virtual void handle_result(StockConversationRequestedListingJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "lternateListingID") == 0)
                        return &fieldGeneratorAlternateListingID;
                    break;
                case 'L':
                    if (strncmp(&(field_name[1]), "isting", 6) == 0)
                      {
                        switch ((unsigned char)(field_name[7]))
                          {
                            case 'I':
                                if (strcmp(&(field_name[8]), "D") == 0)
                                    return &fieldGeneratorListingID;
                                break;
                            case 'R':
                                if (strcmp(&(field_name[8]), "equestType") == 0)
                                    return &fieldGeneratorListingRequestType;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "umShares") == 0)
                        return &fieldGeneratorNumShares;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorListingID("field \"ListingID\" of the StockConversationRequestedListing class"), fieldGeneratorListingRequestType("field \"ListingRequestType\" of the StockConversationRequestedListing class", ignore_extras), fieldGeneratorNumShares("field \"NumShares\" of the StockConversationRequestedListing class"), fieldGeneratorAlternateListingID("field \"AlternateListingID\" of the StockConversationRequestedListing class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the StockConversationRequestedListing class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorListingID.reset();
            fieldGeneratorListingRequestType.reset();
            fieldGeneratorNumShares.reset();
            fieldGeneratorAlternateListingID.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* STOCKCONVERSATIONREQUESTEDLISTINGJSON_H */
