/* file "StockHistoricalQuoteJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef STOCKHISTORICALQUOTEJSON_H
#define STOCKHISTORICALQUOTEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include <string>
#include "RegEx.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class StockHistoricalQuoteJSON : public ReferenceCounted
  {
  public:
    static RegEx expressionStartDateTime;
    static RegEx expressionEndDateTime;

  private:
    bool flagHasStartDateTime;
    std::string storeStartDateTime;
    bool flagHasEndDateTime;
    std::string storeEndDateTime;
    bool flagHasOpen;
    double storeOpen;
    std::string textStoreOpen;
    bool flagHasClose;
    double storeClose;
    std::string textStoreClose;
    bool flagHasHigh;
    double storeHigh;
    std::string textStoreHigh;
    bool flagHasLow;
    double storeLow;
    std::string textStoreLow;
    bool flagHasVolume;
    double storeVolume;
    std::string textStoreVolume;
    bool flagHasSplitRatio;
    double storeSplitRatio;
    std::string textStoreSplitRatio;
    bool flagHasCurrency;
    std::string storeCurrency;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    StockHistoricalQuoteJSON(const StockHistoricalQuoteJSON &);
    StockHistoricalQuoteJSON & operator=(const StockHistoricalQuoteJSON &other);

    void  fromJSONStartDateTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEndDateTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOpen(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONClose(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHigh(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLow(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONVolume(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSplitRatio(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCurrency(JSONValue *json_value, bool ignore_extras = false);


  public:
    StockHistoricalQuoteJSON(void);
    virtual ~StockHistoricalQuoteJSON(void);
    bool  hasStartDateTime(void) const;
    std::string  getStartDateTime(void);
    const std::string  getStartDateTime(void) const;
    bool  hasEndDateTime(void) const;
    std::string  getEndDateTime(void);
    const std::string  getEndDateTime(void) const;
    bool  hasOpen(void) const;
    double  getOpen(void);
    const double  getOpen(void) const;
    std::string  getOpenAsText(void) const;
    bool  hasClose(void) const;
    double  getClose(void);
    const double  getClose(void) const;
    std::string  getCloseAsText(void) const;
    bool  hasHigh(void) const;
    double  getHigh(void);
    const double  getHigh(void) const;
    std::string  getHighAsText(void) const;
    bool  hasLow(void) const;
    double  getLow(void);
    const double  getLow(void) const;
    std::string  getLowAsText(void) const;
    bool  hasVolume(void) const;
    double  getVolume(void);
    const double  getVolume(void) const;
    std::string  getVolumeAsText(void) const;
    bool  hasSplitRatio(void) const;
    double  getSplitRatio(void);
    const double  getSplitRatio(void) const;
    std::string  getSplitRatioAsText(void) const;
    bool  hasCurrency(void) const;
    std::string  getCurrency(void);
    const std::string  getCurrency(void) const;

    virtual size_t extraStockHistoricalQuoteComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraStockHistoricalQuoteComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraStockHistoricalQuoteComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraStockHistoricalQuoteComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraStockHistoricalQuoteLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraStockHistoricalQuoteLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setStartDateTime(std::string new_value)
      {
        flagHasStartDateTime = true;
        if (!expressionStartDateTime.match(new_value))
            throw("The value is not in the regular expression for field StartDateTime of StockHistoricalQuoteJSON.");
        storeStartDateTime = new_value;
      }
    void unsetStartDateTime(void)
      {
        flagHasStartDateTime = false;
      }
    void setEndDateTime(std::string new_value)
      {
        flagHasEndDateTime = true;
        if (!expressionEndDateTime.match(new_value))
            throw("The value is not in the regular expression for field EndDateTime of StockHistoricalQuoteJSON.");
        storeEndDateTime = new_value;
      }
    void unsetEndDateTime(void)
      {
        flagHasEndDateTime = false;
      }
    void setOpen(double new_value)
      {
        flagHasOpen = true;
        storeOpen = new_value;
        textStoreOpen = "";
      }
    void setOpenText(std::string new_value)
      {
        flagHasOpen = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Open of StockHistoricalQuoteJSON is not a valid number.");
        textStoreOpen = new_value;
      }
    void unsetOpen(void)
      {
        flagHasOpen = false;
      }
    void setClose(double new_value)
      {
        flagHasClose = true;
        storeClose = new_value;
        textStoreClose = "";
      }
    void setCloseText(std::string new_value)
      {
        flagHasClose = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Close of StockHistoricalQuoteJSON is not a valid number.");
        textStoreClose = new_value;
      }
    void unsetClose(void)
      {
        flagHasClose = false;
      }
    void setHigh(double new_value)
      {
        flagHasHigh = true;
        storeHigh = new_value;
        textStoreHigh = "";
      }
    void setHighText(std::string new_value)
      {
        flagHasHigh = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field High of StockHistoricalQuoteJSON is not a valid number.");
        textStoreHigh = new_value;
      }
    void unsetHigh(void)
      {
        flagHasHigh = false;
      }
    void setLow(double new_value)
      {
        flagHasLow = true;
        storeLow = new_value;
        textStoreLow = "";
      }
    void setLowText(std::string new_value)
      {
        flagHasLow = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Low of StockHistoricalQuoteJSON is not a valid number.");
        textStoreLow = new_value;
      }
    void unsetLow(void)
      {
        flagHasLow = false;
      }
    void setVolume(double new_value)
      {
        flagHasVolume = true;
        storeVolume = new_value;
        textStoreVolume = "";
      }
    void setVolumeText(std::string new_value)
      {
        flagHasVolume = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Volume of StockHistoricalQuoteJSON is not a valid number.");
        textStoreVolume = new_value;
      }
    void unsetVolume(void)
      {
        flagHasVolume = false;
      }
    void setSplitRatio(double new_value)
      {
        flagHasSplitRatio = true;
        storeSplitRatio = new_value;
        textStoreSplitRatio = "";
      }
    void setSplitRatioText(std::string new_value)
      {
        flagHasSplitRatio = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field SplitRatio of StockHistoricalQuoteJSON is not a valid number.");
        textStoreSplitRatio = new_value;
      }
    void unsetSplitRatio(void)
      {
        flagHasSplitRatio = false;
      }
    void setCurrency(std::string new_value)
      {
        flagHasCurrency = true;
        storeCurrency = new_value;
      }
    void unsetCurrency(void)
      {
        flagHasCurrency = false;
      }

    virtual void extraStockHistoricalQuoteAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraStockHistoricalQuoteSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraStockHistoricalQuoteLookup(key);
        if (old_field == NULL)
          {
            extraStockHistoricalQuoteAppendPair(key, new_component);
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
        if (flagHasStartDateTime)
          {
            handler->start_pair("StartDateTime");
            handler->string_value(storeStartDateTime);
          }
        if (flagHasEndDateTime)
          {
            handler->start_pair("EndDateTime");
            handler->string_value(storeEndDateTime);
          }
        if (flagHasOpen)
          {
            handler->start_pair("Open");
            if (textStoreOpen != "")
                handler->number_value(textStoreOpen.c_str());
            else if (((double)(long int)storeOpen) == storeOpen)
                handler->number_value((long int)storeOpen);
            else
                handler->number_value(storeOpen);
          }
        if (flagHasClose)
          {
            handler->start_pair("Close");
            if (textStoreClose != "")
                handler->number_value(textStoreClose.c_str());
            else if (((double)(long int)storeClose) == storeClose)
                handler->number_value((long int)storeClose);
            else
                handler->number_value(storeClose);
          }
        if (flagHasHigh)
          {
            handler->start_pair("High");
            if (textStoreHigh != "")
                handler->number_value(textStoreHigh.c_str());
            else if (((double)(long int)storeHigh) == storeHigh)
                handler->number_value((long int)storeHigh);
            else
                handler->number_value(storeHigh);
          }
        if (flagHasLow)
          {
            handler->start_pair("Low");
            if (textStoreLow != "")
                handler->number_value(textStoreLow.c_str());
            else if (((double)(long int)storeLow) == storeLow)
                handler->number_value((long int)storeLow);
            else
                handler->number_value(storeLow);
          }
        if (flagHasVolume)
          {
            handler->start_pair("Volume");
            if (textStoreVolume != "")
                handler->number_value(textStoreVolume.c_str());
            else if (((double)(long int)storeVolume) == storeVolume)
                handler->number_value((long int)storeVolume);
            else
                handler->number_value(storeVolume);
          }
        if (flagHasSplitRatio)
          {
            handler->start_pair("SplitRatio");
            if (textStoreSplitRatio != "")
                handler->number_value(textStoreSplitRatio.c_str());
            else if (((double)(long int)storeSplitRatio) == storeSplitRatio)
                handler->number_value((long int)storeSplitRatio);
            else
                handler->number_value(storeSplitRatio);
          }
        if (flagHasCurrency)
          {
            handler->start_pair("Currency");
            handler->string_value(storeCurrency);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static StockHistoricalQuoteJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static StockHistoricalQuoteJSON *from_text(const char *text, bool ignore_extras = false)
      {
        StockHistoricalQuoteJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StockHistoricalQuoteJSON>, StockHistoricalQuoteJSON *, bool> generator("Type StockHistoricalQuote", ignore_extras);
            parse_json_value(text, "Text for StockHistoricalQuoteJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static StockHistoricalQuoteJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        StockHistoricalQuoteJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StockHistoricalQuoteJSON>, StockHistoricalQuoteJSON *, bool> generator("Type StockHistoricalQuote", ignore_extras);
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
    class FieldGeneratorStartDateTime : public JSONStringGenerator
          {
          private:
            RegEx checker;

          protected:
            FieldGeneratorStartDateTime(void) : checker("^[0-9][0-9][0-9][0-9]/[0-1][0-9]/[0-3][0-9]( [0-2][0-9]:[0-9][0-9]:[0-9][0-9])?")  { }
            void validate(const char *result)
              {
                if (!(checker.match(result)))
                    error("The string for %what% doesn't match the required pattern @^[0-9][0-9][0-9][0-9]/[0-1][0-9]/[0-3][0-9]( [0-2][0-9]:[0-9][0-9]:[0-9][0-9])?@.");
              }
          };
        JSONHoldingGenerator<FieldGeneratorStartDateTime, std::string, const char * > fieldGeneratorStartDateTime;
    class FieldGeneratorEndDateTime : public JSONStringGenerator
          {
          private:
            RegEx checker;

          protected:
            FieldGeneratorEndDateTime(void) : checker("^[0-9][0-9][0-9][0-9]/[0-1][0-9]/[0-3][0-9]( [0-2][0-9]:[0-9][0-9]:[0-9][0-9])?")  { }
            void validate(const char *result)
              {
                if (!(checker.match(result)))
                    error("The string for %what% doesn't match the required pattern @^[0-9][0-9][0-9][0-9]/[0-1][0-9]/[0-3][0-9]( [0-2][0-9]:[0-9][0-9]:[0-9][0-9])?@.");
              }
          };
        JSONHoldingGenerator<FieldGeneratorEndDateTime, std::string, const char * > fieldGeneratorEndDateTime;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorOpen;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorClose;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorHigh;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorLow;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorVolume;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorSplitRatio;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCurrency;
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
            StockHistoricalQuoteJSON *result = new StockHistoricalQuoteJSON();
            assert(result != NULL);
            RCHandle<StockHistoricalQuoteJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraStockHistoricalQuoteAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(StockHistoricalQuoteJSON *result)
          {
            if (fieldGeneratorStartDateTime.have_value)
              {
                result->setStartDateTime(fieldGeneratorStartDateTime.value);
                fieldGeneratorStartDateTime.have_value = false;
              }
            if (fieldGeneratorEndDateTime.have_value)
              {
                result->setEndDateTime(fieldGeneratorEndDateTime.value);
                fieldGeneratorEndDateTime.have_value = false;
              }
            if (fieldGeneratorOpen.have_value)
              {
                result->setOpenText(fieldGeneratorOpen.value);
                fieldGeneratorOpen.have_value = false;
              }
            if (fieldGeneratorClose.have_value)
              {
                result->setCloseText(fieldGeneratorClose.value);
                fieldGeneratorClose.have_value = false;
              }
            if (fieldGeneratorHigh.have_value)
              {
                result->setHighText(fieldGeneratorHigh.value);
                fieldGeneratorHigh.have_value = false;
              }
            if (fieldGeneratorLow.have_value)
              {
                result->setLowText(fieldGeneratorLow.value);
                fieldGeneratorLow.have_value = false;
              }
            if (fieldGeneratorVolume.have_value)
              {
                result->setVolumeText(fieldGeneratorVolume.value);
                fieldGeneratorVolume.have_value = false;
              }
            if (fieldGeneratorSplitRatio.have_value)
              {
                result->setSplitRatioText(fieldGeneratorSplitRatio.value);
                fieldGeneratorSplitRatio.have_value = false;
              }
            if (fieldGeneratorCurrency.have_value)
              {
                result->setCurrency(fieldGeneratorCurrency.value);
                fieldGeneratorCurrency.have_value = false;
              }
          }
        virtual void handle_result(StockHistoricalQuoteJSON *new_result) = 0;
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
                case 'E':
                    if (strcmp(&(field_name[1]), "ndDateTime") == 0)
                        return &fieldGeneratorEndDateTime;
                    break;
                case 'H':
                    if (strcmp(&(field_name[1]), "igh") == 0)
                        return &fieldGeneratorHigh;
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "ow") == 0)
                        return &fieldGeneratorLow;
                    break;
                case 'O':
                    if (strcmp(&(field_name[1]), "pen") == 0)
                        return &fieldGeneratorOpen;
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'p':
                            if (strcmp(&(field_name[2]), "litRatio") == 0)
                                return &fieldGeneratorSplitRatio;
                            break;
                        case 't':
                            if (strcmp(&(field_name[2]), "artDateTime") == 0)
                                return &fieldGeneratorStartDateTime;
                            break;
                        default:
                            break;
                      }
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
        Generator(bool ignore_extras = false) : fieldGeneratorStartDateTime("field \"StartDateTime\" of the StockHistoricalQuote class"), fieldGeneratorEndDateTime("field \"EndDateTime\" of the StockHistoricalQuote class"), fieldGeneratorOpen("field \"Open\" of the StockHistoricalQuote class"), fieldGeneratorClose("field \"Close\" of the StockHistoricalQuote class"), fieldGeneratorHigh("field \"High\" of the StockHistoricalQuote class"), fieldGeneratorLow("field \"Low\" of the StockHistoricalQuote class"), fieldGeneratorVolume("field \"Volume\" of the StockHistoricalQuote class"), fieldGeneratorSplitRatio("field \"SplitRatio\" of the StockHistoricalQuote class"), fieldGeneratorCurrency("field \"Currency\" of the StockHistoricalQuote class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the StockHistoricalQuote class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorStartDateTime.reset();
            fieldGeneratorEndDateTime.reset();
            fieldGeneratorOpen.reset();
            fieldGeneratorClose.reset();
            fieldGeneratorHigh.reset();
            fieldGeneratorLow.reset();
            fieldGeneratorVolume.reset();
            fieldGeneratorSplitRatio.reset();
            fieldGeneratorCurrency.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* STOCKHISTORICALQUOTEJSON_H */
