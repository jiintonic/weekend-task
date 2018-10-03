/* file "StockFundamentalsSetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef STOCKFUNDAMENTALSSETJSON_H
#define STOCKFUNDAMENTALSSETJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNullGenerator.h"
#include "JSONParallelGenerator.h"
#include <vector>
#include <string>
#include "StockFundamentalJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class StockFundamentalsSetJSON : public ReferenceCounted
  {
  public:
    struct TypeAsOfDate
      {
        size_t key;
        std::string choice0;
        bool choice1;
      };
    struct TypeCurrency
      {
        size_t key;
        std::string choice0;
        bool choice1;
      };

  private:
    bool flagHasAsOfDate;
    TypeAsOfDate storeAsOfDate;
    bool flagHasCurrency;
    TypeCurrency storeCurrency;
    bool flagHasFundamentals;
    std::vector< StockFundamentalJSON * > storeFundamentals;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    StockFundamentalsSetJSON(const StockFundamentalsSetJSON &);
    StockFundamentalsSetJSON & operator=(const StockFundamentalsSetJSON &other);

    void  fromJSONAsOfDate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCurrency(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFundamentals(JSONValue *json_value, bool ignore_extras = false);


  public:
    StockFundamentalsSetJSON(void);
    virtual ~StockFundamentalsSetJSON(void);
    bool  hasAsOfDate(void) const;
    TypeAsOfDate  getAsOfDate(void);
    const TypeAsOfDate  getAsOfDate(void) const;
    bool  hasCurrency(void) const;
    TypeCurrency  getCurrency(void);
    const TypeCurrency  getCurrency(void) const;
    bool  hasFundamentals(void) const;
    size_t  countOfFundamentals(void) const;
    StockFundamentalJSON *  elementOfFundamentals(size_t element_num);
    const StockFundamentalJSON *  elementOfFundamentals(size_t element_num) const;
    std::vector< StockFundamentalJSON * >  getFundamentals(void);
    const std::vector< StockFundamentalJSON * >  getFundamentals(void) const;

    virtual size_t extraStockFundamentalsSetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraStockFundamentalsSetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraStockFundamentalsSetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraStockFundamentalsSetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraStockFundamentalsSetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraStockFundamentalsSetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setAsOfDate(TypeAsOfDate new_value)
      {
        flagHasAsOfDate = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeAsOfDate = new_value;
      }
    void unsetAsOfDate(void)
      {
        flagHasAsOfDate = false;
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
    void initFundamentals(void)
      {
        if (flagHasFundamentals)
          {
            for (size_t num2 = 0; num2 < storeFundamentals.size(); ++num2)
              {
                storeFundamentals[num2]->remove_reference();
              }
          }
        flagHasFundamentals = true;
        storeFundamentals.clear();
      }
    void appendFundamentals(StockFundamentalJSON * to_append)
      {
        if (!flagHasFundamentals)
          {
            flagHasFundamentals = true;
            storeFundamentals.clear();
          }
        assert(flagHasFundamentals);
        to_append->add_reference();
        storeFundamentals.push_back(to_append);
      }
    void unsetFundamentals(void)
      {
        if (flagHasFundamentals)
          {
            for (size_t num3 = 0; num3 < storeFundamentals.size(); ++num3)
              {
                storeFundamentals[num3]->remove_reference();
              }
          }
        flagHasFundamentals = false;
        storeFundamentals.clear();
      }

    virtual void extraStockFundamentalsSetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraStockFundamentalsSetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraStockFundamentalsSetLookup(key);
        if (old_field == NULL)
          {
            extraStockFundamentalsSetAppendPair(key, new_component);
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
        if (flagHasAsOfDate)
          {
            handler->start_pair("AsOfDate");
            switch (storeAsOfDate.key)
              {
                case 0:
                    handler->string_value(storeAsOfDate.choice0);
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
        assert(flagHasFundamentals);
        handler->start_pair("Fundamentals");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeFundamentals.size(); ++num1)
          {
            storeFundamentals[num1]->write_as_json(handler);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasFundamentals()))
          {
            return "When parsing the object for %what%, the \"Fundamentals\" field was missing.";
          }
        return NULL;
      }

    static StockFundamentalsSetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static StockFundamentalsSetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        StockFundamentalsSetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StockFundamentalsSetJSON>, StockFundamentalsSetJSON *, bool> generator("Type StockFundamentalsSet", ignore_extras);
            parse_json_value(text, "Text for StockFundamentalsSetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static StockFundamentalsSetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        StockFundamentalsSetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StockFundamentalsSetJSON>, StockFundamentalsSetJSON *, bool> generator("Type StockFundamentalsSet", ignore_extras);
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
    class FieldGeneratorAsOfDate : public JSONParallelGenerator
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
                TypeAsOfDate result;
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
            virtual void handle_result(TypeAsOfDate result) = 0;

          public:
            FieldGeneratorAsOfDate(bool ignore_extras) : field0("option 0 of field \"AsOfDate\""), field1("option 1 of field \"AsOfDate\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorAsOfDate(std::string what, bool ignore_extras) : field0("option 0 of field \"AsOfDate\""), field1("option 1 of field \"AsOfDate\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorAsOfDate(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderAsOfDate
          {
          private:
            bool have_data;
            TypeAsOfDate data;

          public:
            HolderAsOfDate(void) : have_data(false)  { }
            HolderAsOfDate(TypeAsOfDate init_data) : have_data(true), data(init_data)
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
            HolderAsOfDate(const HolderAsOfDate &other) : have_data(other.haveData()), data(other.referenced())
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
            ~HolderAsOfDate(void)
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

            void operator=(const HolderAsOfDate &other)
              {
                TypeAsOfDate new_data;
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
            TypeAsOfDate referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorAsOfDate, HolderAsOfDate, TypeAsOfDate, bool > fieldGeneratorAsOfDate;
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
        JSONHoldingArrayGenerator<StockFundamentalJSON::Generator, RCHandle<StockFundamentalJSON>, StockFundamentalJSON *, bool > fieldGeneratorFundamentals;
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
            StockFundamentalsSetJSON *result = new StockFundamentalsSetJSON();
            assert(result != NULL);
            RCHandle<StockFundamentalsSetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraStockFundamentalsSetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(StockFundamentalsSetJSON *result)
          {
            if (fieldGeneratorAsOfDate.have_value)
              {
                result->setAsOfDate(fieldGeneratorAsOfDate.value.referenced());
                fieldGeneratorAsOfDate.have_value = false;
              }
            if (fieldGeneratorCurrency.have_value)
              {
                result->setCurrency(fieldGeneratorCurrency.value.referenced());
                fieldGeneratorCurrency.have_value = false;
              }
            if (fieldGeneratorFundamentals.have_value)
              {
                result->initFundamentals();
                size_t count = fieldGeneratorFundamentals.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendFundamentals(fieldGeneratorFundamentals.value[num].referenced());
                  }
                fieldGeneratorFundamentals.value.clear();
                fieldGeneratorFundamentals.have_value = false;
              }
            else if (!(result->hasFundamentals()))
              {
                error("When parsing the object for %what%, the \"Fundamentals\" field was missing.");
              }
          }
        virtual void handle_result(StockFundamentalsSetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "sOfDate") == 0)
                        return &fieldGeneratorAsOfDate;
                    break;
                case 'C':
                    if (strcmp(&(field_name[1]), "urrency") == 0)
                        return &fieldGeneratorCurrency;
                    break;
                case 'F':
                    if (strcmp(&(field_name[1]), "undamentals") == 0)
                        return &fieldGeneratorFundamentals;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorAsOfDate("field \"AsOfDate\" of the StockFundamentalsSet class", ignore_extras), fieldGeneratorCurrency("field \"Currency\" of the StockFundamentalsSet class", ignore_extras), fieldGeneratorFundamentals("field \"Fundamentals\" of the StockFundamentalsSet class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the StockFundamentalsSet class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorAsOfDate.reset();
            fieldGeneratorCurrency.reset();
            fieldGeneratorFundamentals.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* STOCKFUNDAMENTALSSETJSON_H */
