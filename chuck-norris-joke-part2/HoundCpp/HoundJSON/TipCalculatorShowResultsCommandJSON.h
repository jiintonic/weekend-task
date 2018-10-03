/* file "TipCalculatorShowResultsCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef TIPCALCULATORSHOWRESULTSCOMMANDJSON_H
#define TIPCALCULATORSHOWRESULTSCOMMANDJSON_H

#pragma interface

#include "TipCalculatorCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include "TipCalculatorInputDataJSON.h"
#include "MoneyJSON.h"
#include "MoneyJSON.h"
#include "MoneyJSON.h"
#include "MoneyJSON.h"
#include "MoneyJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class TipCalculatorShowResultsCommandJSON : public TipCalculatorCommandJSON
  {
  public:
    class TypeNativeDataJSON : public ReferenceCounted
      {
      private:
        bool flagHasTipCalculatorInputData;
        TipCalculatorInputDataJSON * storeTipCalculatorInputData;
        bool flagHasTipPercentageResult;
        double storeTipPercentageResult;
        std::string textStoreTipPercentageResult;
        bool flagHasTipAmountResult;
        MoneyJSON * storeTipAmountResult;
        bool flagHasStandardTipPercentages;
        std::vector< double > storeStandardTipPercentages;
        bool flagHasStandardTipAmounts;
        std::vector< MoneyJSON * > storeStandardTipAmounts;
        bool flagHasUsingStandardTip;
        bool storeUsingStandardTip;
        bool flagHasTotalAmountResult;
        MoneyJSON * storeTotalAmountResult;
        bool flagHasShareOfTotal;
        MoneyJSON * storeShareOfTotal;
        bool flagHasShareOfTip;
        MoneyJSON * storeShareOfTip;
        bool flagHasNotUnderstood;
        bool storeNotUnderstood;
        bool flagHasResultError;
        std::string storeResultError;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeNativeDataJSON(const TypeNativeDataJSON &);
        TypeNativeDataJSON & operator=(const TypeNativeDataJSON &other);

        void  fromJSONTipCalculatorInputData(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONTipPercentageResult(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONTipAmountResult(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONStandardTipPercentages(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONStandardTipAmounts(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONUsingStandardTip(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONTotalAmountResult(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONShareOfTotal(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONShareOfTip(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONNotUnderstood(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONResultError(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeNativeDataJSON(void);
        virtual ~TypeNativeDataJSON(void);
        bool  hasTipCalculatorInputData(void) const;
        TipCalculatorInputDataJSON *  getTipCalculatorInputData(void);
        const TipCalculatorInputDataJSON *  getTipCalculatorInputData(void) const;
        bool  hasTipPercentageResult(void) const;
        double  getTipPercentageResult(void);
        const double  getTipPercentageResult(void) const;
        std::string  getTipPercentageResultAsText(void) const;
        bool  hasTipAmountResult(void) const;
        MoneyJSON *  getTipAmountResult(void);
        const MoneyJSON *  getTipAmountResult(void) const;
        bool  hasStandardTipPercentages(void) const;
        size_t  countOfStandardTipPercentages(void) const;
        double  elementOfStandardTipPercentages(size_t element_num);
        const double  elementOfStandardTipPercentages(size_t element_num) const;
        std::vector< double >  getStandardTipPercentages(void);
        const std::vector< double >  getStandardTipPercentages(void) const;
        bool  hasStandardTipAmounts(void) const;
        size_t  countOfStandardTipAmounts(void) const;
        MoneyJSON *  elementOfStandardTipAmounts(size_t element_num);
        const MoneyJSON *  elementOfStandardTipAmounts(size_t element_num) const;
        std::vector< MoneyJSON * >  getStandardTipAmounts(void);
        const std::vector< MoneyJSON * >  getStandardTipAmounts(void) const;
        bool  hasUsingStandardTip(void) const;
        bool  getUsingStandardTip(void);
        const bool  getUsingStandardTip(void) const;
        bool  hasTotalAmountResult(void) const;
        MoneyJSON *  getTotalAmountResult(void);
        const MoneyJSON *  getTotalAmountResult(void) const;
        bool  hasShareOfTotal(void) const;
        MoneyJSON *  getShareOfTotal(void);
        const MoneyJSON *  getShareOfTotal(void) const;
        bool  hasShareOfTip(void) const;
        MoneyJSON *  getShareOfTip(void);
        const MoneyJSON *  getShareOfTip(void) const;
        bool  hasNotUnderstood(void) const;
        bool  getNotUnderstood(void);
        const bool  getNotUnderstood(void) const;
        bool  hasResultError(void) const;
        std::string  getResultError(void);
        const std::string  getResultError(void) const;

        virtual size_t extraTypeNativeDataComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeNativeDataComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeNativeDataComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeNativeDataComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeNativeDataLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeNativeDataLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setTipCalculatorInputData(TipCalculatorInputDataJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasTipCalculatorInputData)
              {
                storeTipCalculatorInputData->remove_reference();
              }
            flagHasTipCalculatorInputData = true;
            storeTipCalculatorInputData = new_value;
          }
        void unsetTipCalculatorInputData(void)
          {
            if (flagHasTipCalculatorInputData)
              {
                storeTipCalculatorInputData->remove_reference();
              }
            flagHasTipCalculatorInputData = false;
          }
        void setTipPercentageResult(double new_value)
          {
            flagHasTipPercentageResult = true;
            if (new_value < 0)
                throw("The value for field TipPercentageResult of TypeNativeDataJSON is less than the lower bound (0) for that field.");
            storeTipPercentageResult = new_value;
            textStoreTipPercentageResult = "";
          }
        void setTipPercentageResultText(std::string new_value)
          {
            flagHasTipPercentageResult = true;
            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                throw("The text value for field TipPercentageResult of TypeNativeDataJSON is not a valid number.");
            if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
                throw("The value for field TipPercentageResult of TypeNativeDataJSON is less than the lower bound (0) for that field.");
            textStoreTipPercentageResult = new_value;
          }
        void unsetTipPercentageResult(void)
          {
            flagHasTipPercentageResult = false;
          }
        void setTipAmountResult(MoneyJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasTipAmountResult)
              {
                storeTipAmountResult->remove_reference();
              }
            flagHasTipAmountResult = true;
            storeTipAmountResult = new_value;
          }
        void unsetTipAmountResult(void)
          {
            if (flagHasTipAmountResult)
              {
                storeTipAmountResult->remove_reference();
              }
            flagHasTipAmountResult = false;
          }
        void initStandardTipPercentages(void)
          {
            flagHasStandardTipPercentages = true;
            storeStandardTipPercentages.clear();
          }
        void appendStandardTipPercentages(double to_append)
          {
            if (!flagHasStandardTipPercentages)
              {
                flagHasStandardTipPercentages = true;
                storeStandardTipPercentages.clear();
              }
            assert(flagHasStandardTipPercentages);
            storeStandardTipPercentages.push_back(to_append);
          }
        void unsetStandardTipPercentages(void)
          {
            flagHasStandardTipPercentages = false;
            storeStandardTipPercentages.clear();
          }
        void initStandardTipAmounts(void)
          {
            if (flagHasStandardTipAmounts)
              {
                for (size_t num2 = 0; num2 < storeStandardTipAmounts.size(); ++num2)
                  {
                    storeStandardTipAmounts[num2]->remove_reference();
                  }
              }
            flagHasStandardTipAmounts = true;
            storeStandardTipAmounts.clear();
          }
        void appendStandardTipAmounts(MoneyJSON * to_append)
          {
            if (!flagHasStandardTipAmounts)
              {
                flagHasStandardTipAmounts = true;
                storeStandardTipAmounts.clear();
              }
            assert(flagHasStandardTipAmounts);
            to_append->add_reference();
            storeStandardTipAmounts.push_back(to_append);
          }
        void unsetStandardTipAmounts(void)
          {
            if (flagHasStandardTipAmounts)
              {
                for (size_t num3 = 0; num3 < storeStandardTipAmounts.size(); ++num3)
                  {
                    storeStandardTipAmounts[num3]->remove_reference();
                  }
              }
            flagHasStandardTipAmounts = false;
            storeStandardTipAmounts.clear();
          }
        void setUsingStandardTip(bool new_value)
          {
            flagHasUsingStandardTip = true;
            storeUsingStandardTip = new_value;
          }
        void unsetUsingStandardTip(void)
          {
            flagHasUsingStandardTip = false;
          }
        void setTotalAmountResult(MoneyJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasTotalAmountResult)
              {
                storeTotalAmountResult->remove_reference();
              }
            flagHasTotalAmountResult = true;
            storeTotalAmountResult = new_value;
          }
        void unsetTotalAmountResult(void)
          {
            if (flagHasTotalAmountResult)
              {
                storeTotalAmountResult->remove_reference();
              }
            flagHasTotalAmountResult = false;
          }
        void setShareOfTotal(MoneyJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasShareOfTotal)
              {
                storeShareOfTotal->remove_reference();
              }
            flagHasShareOfTotal = true;
            storeShareOfTotal = new_value;
          }
        void unsetShareOfTotal(void)
          {
            if (flagHasShareOfTotal)
              {
                storeShareOfTotal->remove_reference();
              }
            flagHasShareOfTotal = false;
          }
        void setShareOfTip(MoneyJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasShareOfTip)
              {
                storeShareOfTip->remove_reference();
              }
            flagHasShareOfTip = true;
            storeShareOfTip = new_value;
          }
        void unsetShareOfTip(void)
          {
            if (flagHasShareOfTip)
              {
                storeShareOfTip->remove_reference();
              }
            flagHasShareOfTip = false;
          }
        void setNotUnderstood(bool new_value)
          {
            flagHasNotUnderstood = true;
            storeNotUnderstood = new_value;
          }
        void unsetNotUnderstood(void)
          {
            flagHasNotUnderstood = false;
          }
        void setResultError(std::string new_value)
          {
            flagHasResultError = true;
            storeResultError = new_value;
          }
        void unsetResultError(void)
          {
            flagHasResultError = false;
          }

        virtual void extraTypeNativeDataAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeNativeDataSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeNativeDataLookup(key);
            if (old_field == NULL)
              {
                extraTypeNativeDataAppendPair(key, new_component);
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
            assert(flagHasTipCalculatorInputData);
            handler->start_pair("TipCalculatorInputData");
            storeTipCalculatorInputData->write_as_json(handler);
            if (flagHasTipPercentageResult)
              {
                handler->start_pair("TipPercentageResult");
                if (textStoreTipPercentageResult != "")
                    handler->number_value(textStoreTipPercentageResult.c_str());
                else if (((double)(long int)storeTipPercentageResult) == storeTipPercentageResult)
                    handler->number_value((long int)storeTipPercentageResult);
                else
                    handler->number_value(storeTipPercentageResult);
              }
            if (flagHasTipAmountResult)
              {
                handler->start_pair("TipAmountResult");
                storeTipAmountResult->write_as_json(handler);
              }
            if (flagHasStandardTipPercentages)
              {
                handler->start_pair("StandardTipPercentages");
                assert(storeStandardTipPercentages.size() >= 1);
                handler->start_array();
                for (size_t num1 = 0; num1 < storeStandardTipPercentages.size(); ++num1)
                  {
                    if (((double)(long int)storeStandardTipPercentages[num1]) == storeStandardTipPercentages[num1])
                        handler->number_value((long int)storeStandardTipPercentages[num1]);
                    else
                        handler->number_value(storeStandardTipPercentages[num1]);
                  }
                handler->finish_array();
              }
            if (flagHasStandardTipAmounts)
              {
                handler->start_pair("StandardTipAmounts");
                assert(storeStandardTipAmounts.size() >= 1);
                handler->start_array();
                for (size_t num2 = 0; num2 < storeStandardTipAmounts.size(); ++num2)
                  {
                    storeStandardTipAmounts[num2]->write_as_json(handler);
                  }
                handler->finish_array();
              }
            if (flagHasUsingStandardTip)
              {
                handler->start_pair("UsingStandardTip");
                handler->boolean_value(storeUsingStandardTip);
              }
            if (flagHasTotalAmountResult)
              {
                handler->start_pair("TotalAmountResult");
                storeTotalAmountResult->write_as_json(handler);
              }
            if (flagHasShareOfTotal)
              {
                handler->start_pair("ShareOfTotal");
                storeShareOfTotal->write_as_json(handler);
              }
            if (flagHasShareOfTip)
              {
                handler->start_pair("ShareOfTip");
                storeShareOfTip->write_as_json(handler);
              }
            if (flagHasNotUnderstood)
              {
                handler->start_pair("NotUnderstood");
                handler->boolean_value(storeNotUnderstood);
              }
            if (flagHasResultError)
              {
                handler->start_pair("ResultError");
                handler->string_value(storeResultError);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasTipCalculatorInputData()))
              {
                return "When parsing the object for %what%, the \"TipCalculatorInputData\" field was missing.";
              }
            return NULL;
          }

        static TypeNativeDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeNativeDataJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeNativeDataJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
                parse_json_value(text, "Text for TypeNativeDataJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeNativeDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeNativeDataJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
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
            JSONHoldingGenerator<TipCalculatorInputDataJSON::Generator, RCHandle<TipCalculatorInputDataJSON>, TipCalculatorInputDataJSON *, bool > fieldGeneratorTipCalculatorInputData;
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorTipPercentageResult;
            JSONHoldingGenerator<MoneyJSON::Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool > fieldGeneratorTipAmountResult;
            JSONHoldingArrayGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorStandardTipPercentages;
            JSONHoldingArrayGenerator<MoneyJSON::Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool > fieldGeneratorStandardTipAmounts;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorUsingStandardTip;
            JSONHoldingGenerator<MoneyJSON::Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool > fieldGeneratorTotalAmountResult;
            JSONHoldingGenerator<MoneyJSON::Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool > fieldGeneratorShareOfTotal;
            JSONHoldingGenerator<MoneyJSON::Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool > fieldGeneratorShareOfTip;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorNotUnderstood;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorResultError;
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
                TypeNativeDataJSON *result = new TypeNativeDataJSON();
                assert(result != NULL);
                RCHandle<TypeNativeDataJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeNativeDataAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeNativeDataJSON *result)
              {
                if (fieldGeneratorTipCalculatorInputData.have_value)
                  {
                    result->setTipCalculatorInputData(fieldGeneratorTipCalculatorInputData.value.referenced());
                    fieldGeneratorTipCalculatorInputData.have_value = false;
                  }
                else if (!(result->hasTipCalculatorInputData()))
                  {
                    error("When parsing the object for %what%, the \"TipCalculatorInputData\" field was missing.");
                  }
                if (fieldGeneratorTipPercentageResult.have_value)
                  {
                    result->setTipPercentageResultText(fieldGeneratorTipPercentageResult.value);
                    fieldGeneratorTipPercentageResult.have_value = false;
                  }
                if (fieldGeneratorTipAmountResult.have_value)
                  {
                    result->setTipAmountResult(fieldGeneratorTipAmountResult.value.referenced());
                    fieldGeneratorTipAmountResult.have_value = false;
                  }
                if (fieldGeneratorStandardTipPercentages.have_value)
                  {
                    result->initStandardTipPercentages();
                    size_t count = fieldGeneratorStandardTipPercentages.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendStandardTipPercentages(atof(fieldGeneratorStandardTipPercentages.value[num].c_str()));
                      }
                    fieldGeneratorStandardTipPercentages.value.clear();
                    fieldGeneratorStandardTipPercentages.have_value = false;
                  }
                if (fieldGeneratorStandardTipAmounts.have_value)
                  {
                    result->initStandardTipAmounts();
                    size_t count = fieldGeneratorStandardTipAmounts.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendStandardTipAmounts(fieldGeneratorStandardTipAmounts.value[num].referenced());
                      }
                    fieldGeneratorStandardTipAmounts.value.clear();
                    fieldGeneratorStandardTipAmounts.have_value = false;
                  }
                if (fieldGeneratorUsingStandardTip.have_value)
                  {
                    result->setUsingStandardTip(fieldGeneratorUsingStandardTip.value);
                    fieldGeneratorUsingStandardTip.have_value = false;
                  }
                if (fieldGeneratorTotalAmountResult.have_value)
                  {
                    result->setTotalAmountResult(fieldGeneratorTotalAmountResult.value.referenced());
                    fieldGeneratorTotalAmountResult.have_value = false;
                  }
                if (fieldGeneratorShareOfTotal.have_value)
                  {
                    result->setShareOfTotal(fieldGeneratorShareOfTotal.value.referenced());
                    fieldGeneratorShareOfTotal.have_value = false;
                  }
                if (fieldGeneratorShareOfTip.have_value)
                  {
                    result->setShareOfTip(fieldGeneratorShareOfTip.value.referenced());
                    fieldGeneratorShareOfTip.have_value = false;
                  }
                if (fieldGeneratorNotUnderstood.have_value)
                  {
                    result->setNotUnderstood(fieldGeneratorNotUnderstood.value);
                    fieldGeneratorNotUnderstood.have_value = false;
                  }
                if (fieldGeneratorResultError.have_value)
                  {
                    result->setResultError(fieldGeneratorResultError.value);
                    fieldGeneratorResultError.have_value = false;
                  }
              }
            virtual void handle_result(TypeNativeDataJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'N':
                        if (strcmp(&(field_name[1]), "otUnderstood") == 0)
                            return &fieldGeneratorNotUnderstood;
                        break;
                    case 'R':
                        if (strcmp(&(field_name[1]), "esultError") == 0)
                            return &fieldGeneratorResultError;
                        break;
                    case 'S':
                        switch ((unsigned char)(field_name[1]))
                          {
                            case 'h':
                                if (strncmp(&(field_name[2]), "areOfT", 6) == 0)
                                  {
                                    switch ((unsigned char)(field_name[8]))
                                      {
                                        case 'i':
                                            if (strcmp(&(field_name[9]), "p") == 0)
                                                return &fieldGeneratorShareOfTip;
                                            break;
                                        case 'o':
                                            if (strcmp(&(field_name[9]), "tal") == 0)
                                                return &fieldGeneratorShareOfTotal;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 't':
                                if (strncmp(&(field_name[2]), "andardTip", 9) == 0)
                                  {
                                    switch ((unsigned char)(field_name[11]))
                                      {
                                        case 'A':
                                            if (strcmp(&(field_name[12]), "mounts") == 0)
                                                return &fieldGeneratorStandardTipAmounts;
                                            break;
                                        case 'P':
                                            if (strcmp(&(field_name[12]), "ercentages") == 0)
                                                return &fieldGeneratorStandardTipPercentages;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'T':
                        switch ((unsigned char)(field_name[1]))
                          {
                            case 'i':
                                if (strncmp(&(field_name[2]), "p", 1) == 0)
                                  {
                                    switch ((unsigned char)(field_name[3]))
                                      {
                                        case 'A':
                                            if (strcmp(&(field_name[4]), "mountResult") == 0)
                                                return &fieldGeneratorTipAmountResult;
                                            break;
                                        case 'C':
                                            if (strcmp(&(field_name[4]), "alculatorInputData") == 0)
                                                return &fieldGeneratorTipCalculatorInputData;
                                            break;
                                        case 'P':
                                            if (strcmp(&(field_name[4]), "ercentageResult") == 0)
                                                return &fieldGeneratorTipPercentageResult;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'o':
                                if (strcmp(&(field_name[2]), "talAmountResult") == 0)
                                    return &fieldGeneratorTotalAmountResult;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'U':
                        if (strcmp(&(field_name[1]), "singStandardTip") == 0)
                            return &fieldGeneratorUsingStandardTip;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorTipCalculatorInputData("field \"TipCalculatorInputData\" of the TypeNativeData class", ignore_extras), fieldGeneratorTipPercentageResult("field \"TipPercentageResult\" of the TypeNativeData class"), fieldGeneratorTipAmountResult("field \"TipAmountResult\" of the TypeNativeData class", ignore_extras), fieldGeneratorStandardTipPercentages("field \"StandardTipPercentages\" of the TypeNativeData class"), fieldGeneratorStandardTipAmounts("field \"StandardTipAmounts\" of the TypeNativeData class", ignore_extras), fieldGeneratorUsingStandardTip("field \"UsingStandardTip\" of the TypeNativeData class"), fieldGeneratorTotalAmountResult("field \"TotalAmountResult\" of the TypeNativeData class", ignore_extras), fieldGeneratorShareOfTotal("field \"ShareOfTotal\" of the TypeNativeData class", ignore_extras), fieldGeneratorShareOfTip("field \"ShareOfTip\" of the TypeNativeData class", ignore_extras), fieldGeneratorNotUnderstood("field \"NotUnderstood\" of the TypeNativeData class"), fieldGeneratorResultError("field \"ResultError\" of the TypeNativeData class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeNativeData class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorTipCalculatorInputData.reset();
                fieldGeneratorTipPercentageResult.reset();
                fieldGeneratorTipAmountResult.reset();
                fieldGeneratorStandardTipPercentages.reset();
                fieldGeneratorStandardTipAmounts.reset();
                fieldGeneratorUsingStandardTip.reset();
                fieldGeneratorTotalAmountResult.reset();
                fieldGeneratorShareOfTotal.reset();
                fieldGeneratorShareOfTip.reset();
                fieldGeneratorNotUnderstood.reset();
                fieldGeneratorResultError.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasNativeData;
    TypeNativeDataJSON * storeNativeData;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    TipCalculatorShowResultsCommandJSON(const TipCalculatorShowResultsCommandJSON &);
    TipCalculatorShowResultsCommandJSON & operator=(const TipCalculatorShowResultsCommandJSON &other);

    JSONValue * extraNativeDataToJSON(void) const;

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);


  public:
    TipCalculatorShowResultsCommandJSON(void);
    virtual ~TipCalculatorShowResultsCommandJSON(void);
    const char * getTipCalculatorCommandKind(void) const;
    bool  hasNativeData(void) const;
    TypeNativeDataJSON *  getNativeData(void);
    const TypeNativeDataJSON *  getNativeData(void) const;

    virtual size_t extraTipCalculatorShowResultsCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraTipCalculatorShowResultsCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraTipCalculatorShowResultsCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraTipCalculatorShowResultsCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraTipCalculatorShowResultsCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraTipCalculatorShowResultsCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraTipCalculatorCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasNativeData)
            ++result;
        result += extraTipCalculatorShowResultsCommandComponentCount();
        return result;
      }
    const char *extraTipCalculatorCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return "NativeData";
            --remainder;
          }
        return extraTipCalculatorShowResultsCommandComponentKey(remainder);
      }
    JSONValue *extraTipCalculatorCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        return extraTipCalculatorShowResultsCommandComponentValue(remainder);
      }
    const JSONValue *extraTipCalculatorCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        return extraTipCalculatorShowResultsCommandComponentValue(remainder);
      }
    JSONValue *extraTipCalculatorCommandLookup(const char *field_name)
      {
        if (strcmp(field_name, "NativeData") == 0)
            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
        return extraTipCalculatorShowResultsCommandLookup(field_name);
      }
    const JSONValue *extraTipCalculatorCommandLookup(const char *field_name) const
      {
        if (strcmp(field_name, "NativeData") == 0)
            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
        return extraTipCalculatorShowResultsCommandLookup(field_name);
      }

    void setNativeData(TypeNativeDataJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasNativeData)
          {
            storeNativeData->remove_reference();
          }
        flagHasNativeData = true;
        storeNativeData = new_value;
      }
    void unsetNativeData(void)
      {
        if (flagHasNativeData)
          {
            storeNativeData->remove_reference();
          }
        flagHasNativeData = false;
      }

    virtual void extraTipCalculatorShowResultsCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraTipCalculatorShowResultsCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraTipCalculatorShowResultsCommandLookup(key);
        if (old_field == NULL)
          {
            extraTipCalculatorShowResultsCommandAppendPair(key, new_component);
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
    void extraTipCalculatorCommandAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "NativeData") == 0)
            {
            fromJSONNativeData(new_component, false);
            return;
            }
        extraTipCalculatorShowResultsCommandAppendPair(key, new_component);
      }
    void extraTipCalculatorCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "NativeData") == 0)
            {
            fromJSONNativeData(new_component, false);
            return;
            }
        extraTipCalculatorShowResultsCommandSetField(key, new_component);
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
        TipCalculatorCommandJSON::write_fields_as_json(handler);
        if (flagHasNativeData)
          {
            handler->start_pair("NativeData");
            storeNativeData->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static TipCalculatorShowResultsCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static TipCalculatorShowResultsCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        TipCalculatorShowResultsCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TipCalculatorShowResultsCommandJSON>, TipCalculatorShowResultsCommandJSON *, bool> generator("Type TipCalculatorShowResultsCommand", ignore_extras);
            parse_json_value(text, "Text for TipCalculatorShowResultsCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static TipCalculatorShowResultsCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        TipCalculatorShowResultsCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TipCalculatorShowResultsCommandJSON>, TipCalculatorShowResultsCommandJSON *, bool> generator("Type TipCalculatorShowResultsCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public TipCalculatorCommandJSON::Generator
      {
      private:
        JSONHoldingGenerator<TypeNativeDataJSON::Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool > fieldGeneratorNativeData;
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
            if (!(strcmp(getTipCalculatorCommandJSONKey().c_str(), "TipCalculatorShowResultsCommand") == 0))
                throw("The key field has a value other than `TipCalculatorShowResultsCommand'.");
            TipCalculatorShowResultsCommandJSON *result = new TipCalculatorShowResultsCommandJSON();
            assert(result != NULL);
            RCHandle<TipCalculatorShowResultsCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraTipCalculatorShowResultsCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(TipCalculatorCommandJSON *new_result)
          {
            handle_result((TipCalculatorShowResultsCommandJSON *)new_result);
          }
        void finish(TipCalculatorShowResultsCommandJSON *result)
          {
            if (fieldGeneratorNativeData.have_value)
              {
                result->setNativeData(fieldGeneratorNativeData.value.referenced());
                fieldGeneratorNativeData.have_value = false;
              }
            TipCalculatorCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(TipCalculatorShowResultsCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "NativeData") == 0)
                return &fieldGeneratorNativeData;
            return TipCalculatorCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : TipCalculatorCommandJSON::Generator(ignore_extras), fieldGeneratorNativeData("field \"NativeData\" of the TipCalculatorShowResultsCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the TipCalculatorShowResultsCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNativeData.reset();
            TipCalculatorCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* TIPCALCULATORSHOWRESULTSCOMMANDJSON_H */
