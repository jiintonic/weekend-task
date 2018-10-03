/* file "StockGlobalHistoricalQuoteJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef STOCKGLOBALHISTORICALQUOTEJSON_H
#define STOCKGLOBALHISTORICALQUOTEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONNullGenerator.h"
#include "JSONParallelGenerator.h"
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class StockGlobalHistoricalQuoteJSON : public ReferenceCounted
  {
  public:
    struct TypeMessage
      {
        size_t key;
        std::string choice0;
        bool choice1;
      };
    struct TypeOpen
      {
        size_t key;
        union
          {
            double choice0;
            bool choice1;
          } u;
      };
    struct TypeClose
      {
        size_t key;
        union
          {
            double choice0;
            bool choice1;
          } u;
      };
    struct TypeHigh
      {
        size_t key;
        union
          {
            double choice0;
            bool choice1;
          } u;
      };
    struct TypeLow
      {
        size_t key;
        union
          {
            double choice0;
            bool choice1;
          } u;
      };
    struct TypeLast
      {
        size_t key;
        union
          {
            double choice0;
            bool choice1;
          } u;
      };
    struct TypeVolume
      {
        size_t key;
        union
          {
            double choice0;
            bool choice1;
          } u;
      };
    struct TypeSplitRatio
      {
        size_t key;
        union
          {
            double choice0;
            bool choice1;
          } u;
      };
    struct TypeCurrency
      {
        size_t key;
        std::string choice0;
        bool choice1;
      };

  private:
    bool flagHasOutcome;
    std::string storeOutcome;
    bool flagHasMessage;
    TypeMessage storeMessage;
    bool flagHasDate;
    std::string storeDate;
    bool flagHasOpen;
    TypeOpen storeOpen;
    bool flagHasClose;
    TypeClose storeClose;
    bool flagHasHigh;
    TypeHigh storeHigh;
    bool flagHasLow;
    TypeLow storeLow;
    bool flagHasLast;
    TypeLast storeLast;
    bool flagHasVolume;
    TypeVolume storeVolume;
    bool flagHasSplitRatio;
    TypeSplitRatio storeSplitRatio;
    bool flagHasCurrency;
    TypeCurrency storeCurrency;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    StockGlobalHistoricalQuoteJSON(const StockGlobalHistoricalQuoteJSON &);
    StockGlobalHistoricalQuoteJSON & operator=(const StockGlobalHistoricalQuoteJSON &other);

    void  fromJSONOutcome(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMessage(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOpen(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONClose(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHigh(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLow(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLast(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONVolume(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSplitRatio(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCurrency(JSONValue *json_value, bool ignore_extras = false);


  public:
    StockGlobalHistoricalQuoteJSON(void);
    virtual ~StockGlobalHistoricalQuoteJSON(void);
    bool  hasOutcome(void) const;
    std::string  getOutcome(void);
    const std::string  getOutcome(void) const;
    bool  hasMessage(void) const;
    TypeMessage  getMessage(void);
    const TypeMessage  getMessage(void) const;
    bool  hasDate(void) const;
    std::string  getDate(void);
    const std::string  getDate(void) const;
    bool  hasOpen(void) const;
    TypeOpen  getOpen(void);
    const TypeOpen  getOpen(void) const;
    bool  hasClose(void) const;
    TypeClose  getClose(void);
    const TypeClose  getClose(void) const;
    bool  hasHigh(void) const;
    TypeHigh  getHigh(void);
    const TypeHigh  getHigh(void) const;
    bool  hasLow(void) const;
    TypeLow  getLow(void);
    const TypeLow  getLow(void) const;
    bool  hasLast(void) const;
    TypeLast  getLast(void);
    const TypeLast  getLast(void) const;
    bool  hasVolume(void) const;
    TypeVolume  getVolume(void);
    const TypeVolume  getVolume(void) const;
    bool  hasSplitRatio(void) const;
    TypeSplitRatio  getSplitRatio(void);
    const TypeSplitRatio  getSplitRatio(void) const;
    bool  hasCurrency(void) const;
    TypeCurrency  getCurrency(void);
    const TypeCurrency  getCurrency(void) const;

    virtual size_t extraStockGlobalHistoricalQuoteComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraStockGlobalHistoricalQuoteComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraStockGlobalHistoricalQuoteComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraStockGlobalHistoricalQuoteComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraStockGlobalHistoricalQuoteLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraStockGlobalHistoricalQuoteLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setOutcome(std::string new_value)
      {
        flagHasOutcome = true;
        storeOutcome = new_value;
      }
    void unsetOutcome(void)
      {
        flagHasOutcome = false;
      }
    void setMessage(TypeMessage new_value)
      {
        flagHasMessage = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeMessage = new_value;
      }
    void unsetMessage(void)
      {
        flagHasMessage = false;
      }
    void setDate(std::string new_value)
      {
        flagHasDate = true;
        storeDate = new_value;
      }
    void unsetDate(void)
      {
        flagHasDate = false;
      }
    void setOpen(TypeOpen new_value)
      {
        flagHasOpen = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeOpen = new_value;
      }
    void unsetOpen(void)
      {
        flagHasOpen = false;
      }
    void setClose(TypeClose new_value)
      {
        flagHasClose = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeClose = new_value;
      }
    void unsetClose(void)
      {
        flagHasClose = false;
      }
    void setHigh(TypeHigh new_value)
      {
        flagHasHigh = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeHigh = new_value;
      }
    void unsetHigh(void)
      {
        flagHasHigh = false;
      }
    void setLow(TypeLow new_value)
      {
        flagHasLow = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeLow = new_value;
      }
    void unsetLow(void)
      {
        flagHasLow = false;
      }
    void setLast(TypeLast new_value)
      {
        flagHasLast = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeLast = new_value;
      }
    void unsetLast(void)
      {
        flagHasLast = false;
      }
    void setVolume(TypeVolume new_value)
      {
        flagHasVolume = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeVolume = new_value;
      }
    void unsetVolume(void)
      {
        flagHasVolume = false;
      }
    void setSplitRatio(TypeSplitRatio new_value)
      {
        flagHasSplitRatio = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeSplitRatio = new_value;
      }
    void unsetSplitRatio(void)
      {
        flagHasSplitRatio = false;
      }
    void setCurrency(TypeCurrency new_value)
      {
        flagHasCurrency = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeCurrency = new_value;
      }
    void unsetCurrency(void)
      {
        flagHasCurrency = false;
      }

    virtual void extraStockGlobalHistoricalQuoteAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraStockGlobalHistoricalQuoteSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraStockGlobalHistoricalQuoteLookup(key);
        if (old_field == NULL)
          {
            extraStockGlobalHistoricalQuoteAppendPair(key, new_component);
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
        assert(flagHasOutcome);
        handler->start_pair("Outcome");
        handler->string_value(storeOutcome);
        if (flagHasMessage)
          {
            handler->start_pair("Message");
            switch (storeMessage.key)
              {
                case 0:
                    handler->string_value(storeMessage.choice0);
                    break;
                case 1:
                    handler->null_value();
                    break;
                default:
                    assert(false);
              }
          }
        assert(flagHasDate);
        handler->start_pair("Date");
        handler->string_value(storeDate);
        if (flagHasOpen)
          {
            handler->start_pair("Open");
            switch (storeOpen.key)
              {
                case 0:
                    if (((double)(long int)storeOpen.u.choice0) == storeOpen.u.choice0)
                        handler->number_value((long int)storeOpen.u.choice0);
                    else
                        handler->number_value(storeOpen.u.choice0);
                    break;
                case 1:
                    handler->null_value();
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasClose)
          {
            handler->start_pair("Close");
            switch (storeClose.key)
              {
                case 0:
                    if (((double)(long int)storeClose.u.choice0) == storeClose.u.choice0)
                        handler->number_value((long int)storeClose.u.choice0);
                    else
                        handler->number_value(storeClose.u.choice0);
                    break;
                case 1:
                    handler->null_value();
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasHigh)
          {
            handler->start_pair("High");
            switch (storeHigh.key)
              {
                case 0:
                    if (((double)(long int)storeHigh.u.choice0) == storeHigh.u.choice0)
                        handler->number_value((long int)storeHigh.u.choice0);
                    else
                        handler->number_value(storeHigh.u.choice0);
                    break;
                case 1:
                    handler->null_value();
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasLow)
          {
            handler->start_pair("Low");
            switch (storeLow.key)
              {
                case 0:
                    if (((double)(long int)storeLow.u.choice0) == storeLow.u.choice0)
                        handler->number_value((long int)storeLow.u.choice0);
                    else
                        handler->number_value(storeLow.u.choice0);
                    break;
                case 1:
                    handler->null_value();
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasLast)
          {
            handler->start_pair("Last");
            switch (storeLast.key)
              {
                case 0:
                    if (((double)(long int)storeLast.u.choice0) == storeLast.u.choice0)
                        handler->number_value((long int)storeLast.u.choice0);
                    else
                        handler->number_value(storeLast.u.choice0);
                    break;
                case 1:
                    handler->null_value();
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasVolume)
          {
            handler->start_pair("Volume");
            switch (storeVolume.key)
              {
                case 0:
                    if (((double)(long int)storeVolume.u.choice0) == storeVolume.u.choice0)
                        handler->number_value((long int)storeVolume.u.choice0);
                    else
                        handler->number_value(storeVolume.u.choice0);
                    break;
                case 1:
                    handler->null_value();
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasSplitRatio)
          {
            handler->start_pair("SplitRatio");
            switch (storeSplitRatio.key)
              {
                case 0:
                    if (((double)(long int)storeSplitRatio.u.choice0) == storeSplitRatio.u.choice0)
                        handler->number_value((long int)storeSplitRatio.u.choice0);
                    else
                        handler->number_value(storeSplitRatio.u.choice0);
                    break;
                case 1:
                    handler->null_value();
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasCurrency)
          {
            handler->start_pair("Currency");
            switch (storeCurrency.key)
              {
                case 0:
                    handler->string_value(storeCurrency.choice0);
                    break;
                case 1:
                    handler->null_value();
                    break;
                default:
                    assert(false);
              }
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasOutcome()))
          {
            return "When parsing the object for %what%, the \"Outcome\" field was missing.";
          }
        if (!(hasDate()))
          {
            return "When parsing the object for %what%, the \"Date\" field was missing.";
          }
        return NULL;
      }

    static StockGlobalHistoricalQuoteJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static StockGlobalHistoricalQuoteJSON *from_text(const char *text, bool ignore_extras = false)
      {
        StockGlobalHistoricalQuoteJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StockGlobalHistoricalQuoteJSON>, StockGlobalHistoricalQuoteJSON *, bool> generator("Type StockGlobalHistoricalQuote", ignore_extras);
            parse_json_value(text, "Text for StockGlobalHistoricalQuoteJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static StockGlobalHistoricalQuoteJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        StockGlobalHistoricalQuoteJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StockGlobalHistoricalQuoteJSON>, StockGlobalHistoricalQuoteJSON *, bool> generator("Type StockGlobalHistoricalQuote", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorOutcome;
    class FieldGeneratorMessage : public JSONParallelGenerator
          {
          private:
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > field0;
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
                TypeMessage result;
                result.key = winning_index;
                switch (winning_index)
                  {
                    case 0:
                      {
                        assert(field0.have_value);
                        result.choice0 = field0.value;
                        break;
                      }
                    case 1:
                      {
                        assert(field1.have_value);
                        result.choice1 = field1.value;
                        break;
                      }
                    default:
                      {
                        assert(false);
                      }
                  }
                handle_result(result);
              }
            virtual void handle_result(TypeMessage result) = 0;

          public:
            FieldGeneratorMessage(bool ignore_extras) : field0("option 0 of field \"Message\""), field1("option 1 of field \"Message\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorMessage(std::string what, bool ignore_extras) : field0("option 0 of field \"Message\""), field1("option 1 of field \"Message\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorMessage(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderMessage
          {
          private:
            bool have_data;
            TypeMessage data;

          public:
            HolderMessage(void) : have_data(false)  { }
            HolderMessage(TypeMessage init_data) : have_data(true), data(init_data)
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
            HolderMessage(const HolderMessage &other) : have_data(other.haveData()), data(other.referenced())
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
            ~HolderMessage(void)
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

            void operator=(const HolderMessage &other)
              {
                TypeMessage new_data;
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
            TypeMessage referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorMessage, HolderMessage, TypeMessage, bool > fieldGeneratorMessage;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDate;
    class FieldGeneratorOpen : public JSONParallelGenerator
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
                TypeOpen result;
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
            virtual void handle_result(TypeOpen result) = 0;

          public:
            FieldGeneratorOpen(bool ignore_extras) : field0("option 0 of field \"Open\""), field1("option 1 of field \"Open\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorOpen(std::string what, bool ignore_extras) : field0("option 0 of field \"Open\""), field1("option 1 of field \"Open\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorOpen(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderOpen
          {
          private:
            bool have_data;
            TypeOpen data;

          public:
            HolderOpen(void) : have_data(false)  { }
            HolderOpen(TypeOpen init_data) : have_data(true), data(init_data)
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
            HolderOpen(const HolderOpen &other) : have_data(other.haveData()), data(other.referenced())
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
            ~HolderOpen(void)
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

            void operator=(const HolderOpen &other)
              {
                TypeOpen new_data;
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
            TypeOpen referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorOpen, HolderOpen, TypeOpen, bool > fieldGeneratorOpen;
    class FieldGeneratorClose : public JSONParallelGenerator
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
                TypeClose result;
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
            virtual void handle_result(TypeClose result) = 0;

          public:
            FieldGeneratorClose(bool ignore_extras) : field0("option 0 of field \"Close\""), field1("option 1 of field \"Close\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorClose(std::string what, bool ignore_extras) : field0("option 0 of field \"Close\""), field1("option 1 of field \"Close\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorClose(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderClose
          {
          private:
            bool have_data;
            TypeClose data;

          public:
            HolderClose(void) : have_data(false)  { }
            HolderClose(TypeClose init_data) : have_data(true), data(init_data)
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
            HolderClose(const HolderClose &other) : have_data(other.haveData()), data(other.referenced())
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
            ~HolderClose(void)
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

            void operator=(const HolderClose &other)
              {
                TypeClose new_data;
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
            TypeClose referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorClose, HolderClose, TypeClose, bool > fieldGeneratorClose;
    class FieldGeneratorHigh : public JSONParallelGenerator
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
                TypeHigh result;
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
            virtual void handle_result(TypeHigh result) = 0;

          public:
            FieldGeneratorHigh(bool ignore_extras) : field0("option 0 of field \"High\""), field1("option 1 of field \"High\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorHigh(std::string what, bool ignore_extras) : field0("option 0 of field \"High\""), field1("option 1 of field \"High\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorHigh(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderHigh
          {
          private:
            bool have_data;
            TypeHigh data;

          public:
            HolderHigh(void) : have_data(false)  { }
            HolderHigh(TypeHigh init_data) : have_data(true), data(init_data)
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
            HolderHigh(const HolderHigh &other) : have_data(other.haveData()), data(other.referenced())
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
            ~HolderHigh(void)
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

            void operator=(const HolderHigh &other)
              {
                TypeHigh new_data;
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
            TypeHigh referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorHigh, HolderHigh, TypeHigh, bool > fieldGeneratorHigh;
    class FieldGeneratorLow : public JSONParallelGenerator
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
                TypeLow result;
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
            virtual void handle_result(TypeLow result) = 0;

          public:
            FieldGeneratorLow(bool ignore_extras) : field0("option 0 of field \"Low\""), field1("option 1 of field \"Low\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorLow(std::string what, bool ignore_extras) : field0("option 0 of field \"Low\""), field1("option 1 of field \"Low\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorLow(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderLow
          {
          private:
            bool have_data;
            TypeLow data;

          public:
            HolderLow(void) : have_data(false)  { }
            HolderLow(TypeLow init_data) : have_data(true), data(init_data)
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
            HolderLow(const HolderLow &other) : have_data(other.haveData()), data(other.referenced())
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
            ~HolderLow(void)
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

            void operator=(const HolderLow &other)
              {
                TypeLow new_data;
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
            TypeLow referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorLow, HolderLow, TypeLow, bool > fieldGeneratorLow;
    class FieldGeneratorLast : public JSONParallelGenerator
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
                TypeLast result;
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
            virtual void handle_result(TypeLast result) = 0;

          public:
            FieldGeneratorLast(bool ignore_extras) : field0("option 0 of field \"Last\""), field1("option 1 of field \"Last\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorLast(std::string what, bool ignore_extras) : field0("option 0 of field \"Last\""), field1("option 1 of field \"Last\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorLast(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderLast
          {
          private:
            bool have_data;
            TypeLast data;

          public:
            HolderLast(void) : have_data(false)  { }
            HolderLast(TypeLast init_data) : have_data(true), data(init_data)
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
            HolderLast(const HolderLast &other) : have_data(other.haveData()), data(other.referenced())
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
            ~HolderLast(void)
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

            void operator=(const HolderLast &other)
              {
                TypeLast new_data;
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
            TypeLast referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorLast, HolderLast, TypeLast, bool > fieldGeneratorLast;
    class FieldGeneratorVolume : public JSONParallelGenerator
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
                TypeVolume result;
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
            virtual void handle_result(TypeVolume result) = 0;

          public:
            FieldGeneratorVolume(bool ignore_extras) : field0("option 0 of field \"Volume\""), field1("option 1 of field \"Volume\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorVolume(std::string what, bool ignore_extras) : field0("option 0 of field \"Volume\""), field1("option 1 of field \"Volume\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorVolume(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderVolume
          {
          private:
            bool have_data;
            TypeVolume data;

          public:
            HolderVolume(void) : have_data(false)  { }
            HolderVolume(TypeVolume init_data) : have_data(true), data(init_data)
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
            HolderVolume(const HolderVolume &other) : have_data(other.haveData()), data(other.referenced())
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
            ~HolderVolume(void)
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

            void operator=(const HolderVolume &other)
              {
                TypeVolume new_data;
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
            TypeVolume referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorVolume, HolderVolume, TypeVolume, bool > fieldGeneratorVolume;
    class FieldGeneratorSplitRatio : public JSONParallelGenerator
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
                TypeSplitRatio result;
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
            virtual void handle_result(TypeSplitRatio result) = 0;

          public:
            FieldGeneratorSplitRatio(bool ignore_extras) : field0("option 0 of field \"SplitRatio\""), field1("option 1 of field \"SplitRatio\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorSplitRatio(std::string what, bool ignore_extras) : field0("option 0 of field \"SplitRatio\""), field1("option 1 of field \"SplitRatio\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorSplitRatio(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderSplitRatio
          {
          private:
            bool have_data;
            TypeSplitRatio data;

          public:
            HolderSplitRatio(void) : have_data(false)  { }
            HolderSplitRatio(TypeSplitRatio init_data) : have_data(true), data(init_data)
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
            HolderSplitRatio(const HolderSplitRatio &other) : have_data(other.haveData()), data(other.referenced())
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
            ~HolderSplitRatio(void)
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

            void operator=(const HolderSplitRatio &other)
              {
                TypeSplitRatio new_data;
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
            TypeSplitRatio referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorSplitRatio, HolderSplitRatio, TypeSplitRatio, bool > fieldGeneratorSplitRatio;
    class FieldGeneratorCurrency : public JSONParallelGenerator
          {
          private:
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > field0;
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
                TypeCurrency result;
                result.key = winning_index;
                switch (winning_index)
                  {
                    case 0:
                      {
                        assert(field0.have_value);
                        result.choice0 = field0.value;
                        break;
                      }
                    case 1:
                      {
                        assert(field1.have_value);
                        result.choice1 = field1.value;
                        break;
                      }
                    default:
                      {
                        assert(false);
                      }
                  }
                handle_result(result);
              }
            virtual void handle_result(TypeCurrency result) = 0;

          public:
            FieldGeneratorCurrency(bool ignore_extras) : field0("option 0 of field \"Currency\""), field1("option 1 of field \"Currency\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorCurrency(std::string what, bool ignore_extras) : field0("option 0 of field \"Currency\""), field1("option 1 of field \"Currency\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorCurrency(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderCurrency
          {
          private:
            bool have_data;
            TypeCurrency data;

          public:
            HolderCurrency(void) : have_data(false)  { }
            HolderCurrency(TypeCurrency init_data) : have_data(true), data(init_data)
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
            HolderCurrency(const HolderCurrency &other) : have_data(other.haveData()), data(other.referenced())
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
            ~HolderCurrency(void)
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

            void operator=(const HolderCurrency &other)
              {
                TypeCurrency new_data;
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
            TypeCurrency referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorCurrency, HolderCurrency, TypeCurrency, bool > fieldGeneratorCurrency;
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
            StockGlobalHistoricalQuoteJSON *result = new StockGlobalHistoricalQuoteJSON();
            assert(result != NULL);
            RCHandle<StockGlobalHistoricalQuoteJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraStockGlobalHistoricalQuoteAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(StockGlobalHistoricalQuoteJSON *result)
          {
            if (fieldGeneratorOutcome.have_value)
              {
                result->setOutcome(fieldGeneratorOutcome.value);
                fieldGeneratorOutcome.have_value = false;
              }
            else if (!(result->hasOutcome()))
              {
                error("When parsing the object for %what%, the \"Outcome\" field was missing.");
              }
            if (fieldGeneratorMessage.have_value)
              {
                result->setMessage(fieldGeneratorMessage.value.referenced());
                fieldGeneratorMessage.have_value = false;
              }
            if (fieldGeneratorDate.have_value)
              {
                result->setDate(fieldGeneratorDate.value);
                fieldGeneratorDate.have_value = false;
              }
            else if (!(result->hasDate()))
              {
                error("When parsing the object for %what%, the \"Date\" field was missing.");
              }
            if (fieldGeneratorOpen.have_value)
              {
                result->setOpen(fieldGeneratorOpen.value.referenced());
                fieldGeneratorOpen.have_value = false;
              }
            if (fieldGeneratorClose.have_value)
              {
                result->setClose(fieldGeneratorClose.value.referenced());
                fieldGeneratorClose.have_value = false;
              }
            if (fieldGeneratorHigh.have_value)
              {
                result->setHigh(fieldGeneratorHigh.value.referenced());
                fieldGeneratorHigh.have_value = false;
              }
            if (fieldGeneratorLow.have_value)
              {
                result->setLow(fieldGeneratorLow.value.referenced());
                fieldGeneratorLow.have_value = false;
              }
            if (fieldGeneratorLast.have_value)
              {
                result->setLast(fieldGeneratorLast.value.referenced());
                fieldGeneratorLast.have_value = false;
              }
            if (fieldGeneratorVolume.have_value)
              {
                result->setVolume(fieldGeneratorVolume.value.referenced());
                fieldGeneratorVolume.have_value = false;
              }
            if (fieldGeneratorSplitRatio.have_value)
              {
                result->setSplitRatio(fieldGeneratorSplitRatio.value.referenced());
                fieldGeneratorSplitRatio.have_value = false;
              }
            if (fieldGeneratorCurrency.have_value)
              {
                result->setCurrency(fieldGeneratorCurrency.value.referenced());
                fieldGeneratorCurrency.have_value = false;
              }
          }
        virtual void handle_result(StockGlobalHistoricalQuoteJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'l':
                            if (strcmp(&(field_name[2]), "ose") == 0)
                                return &fieldGeneratorClose;
                            break;
                        case 'u':
                            if (strcmp(&(field_name[2]), "rrency") == 0)
                                return &fieldGeneratorCurrency;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'D':
                    if (strcmp(&(field_name[1]), "ate") == 0)
                        return &fieldGeneratorDate;
                    break;
                case 'H':
                    if (strcmp(&(field_name[1]), "igh") == 0)
                        return &fieldGeneratorHigh;
                    break;
                case 'L':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "st") == 0)
                                return &fieldGeneratorLast;
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "w") == 0)
                                return &fieldGeneratorLow;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "essage") == 0)
                        return &fieldGeneratorMessage;
                    break;
                case 'O':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'p':
                            if (strcmp(&(field_name[2]), "en") == 0)
                                return &fieldGeneratorOpen;
                            break;
                        case 'u':
                            if (strcmp(&(field_name[2]), "tcome") == 0)
                                return &fieldGeneratorOutcome;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "plitRatio") == 0)
                        return &fieldGeneratorSplitRatio;
                    break;
                case 'V':
                    if (strcmp(&(field_name[1]), "olume") == 0)
                        return &fieldGeneratorVolume;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorOutcome("field \"Outcome\" of the StockGlobalHistoricalQuote class"), fieldGeneratorMessage("field \"Message\" of the StockGlobalHistoricalQuote class", ignore_extras), fieldGeneratorDate("field \"Date\" of the StockGlobalHistoricalQuote class"), fieldGeneratorOpen("field \"Open\" of the StockGlobalHistoricalQuote class", ignore_extras), fieldGeneratorClose("field \"Close\" of the StockGlobalHistoricalQuote class", ignore_extras), fieldGeneratorHigh("field \"High\" of the StockGlobalHistoricalQuote class", ignore_extras), fieldGeneratorLow("field \"Low\" of the StockGlobalHistoricalQuote class", ignore_extras), fieldGeneratorLast("field \"Last\" of the StockGlobalHistoricalQuote class", ignore_extras), fieldGeneratorVolume("field \"Volume\" of the StockGlobalHistoricalQuote class", ignore_extras), fieldGeneratorSplitRatio("field \"SplitRatio\" of the StockGlobalHistoricalQuote class", ignore_extras), fieldGeneratorCurrency("field \"Currency\" of the StockGlobalHistoricalQuote class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the StockGlobalHistoricalQuote class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorOutcome.reset();
            fieldGeneratorMessage.reset();
            fieldGeneratorDate.reset();
            fieldGeneratorOpen.reset();
            fieldGeneratorClose.reset();
            fieldGeneratorHigh.reset();
            fieldGeneratorLow.reset();
            fieldGeneratorLast.reset();
            fieldGeneratorVolume.reset();
            fieldGeneratorSplitRatio.reset();
            fieldGeneratorCurrency.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* STOCKGLOBALHISTORICALQUOTEJSON_H */
