/* file "StockSecurityDetailsJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef STOCKSECURITYDETAILSJSON_H
#define STOCKSECURITYDETAILSJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
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


class StockSecurityDetailsJSON : public ReferenceCounted
  {
  public:
    struct TypeCIK
      {
        size_t key;
        std::string choice0;
        bool choice1;
      };
    struct TypeISIN
      {
        size_t key;
        std::string choice0;
        bool choice1;
      };
    struct TypeValoren
      {
        size_t key;
        std::string choice0;
        bool choice1;
      };
    struct TypeMarket
      {
        size_t key;
        std::string choice0;
        bool choice1;
      };
    struct TypeMarketIdentificationCode
      {
        size_t key;
        std::string choice0;
        bool choice1;
      };
    struct TypeMostLiquidExchange
      {
        size_t key;
        union
          {
            bool choice0;
            bool choice1;
          } u;
      };
    struct TypeCategoryOrIndustry
      {
        size_t key;
        std::string choice0;
        bool choice1;
      };

  private:
    bool flagHasCIK;
    TypeCIK storeCIK;
    bool flagHasSymbol;
    std::string storeSymbol;
    bool flagHasISIN;
    TypeISIN storeISIN;
    bool flagHasValoren;
    TypeValoren storeValoren;
    bool flagHasName;
    std::string storeName;
    bool flagHasMarket;
    TypeMarket storeMarket;
    bool flagHasMarketIdentificationCode;
    TypeMarketIdentificationCode storeMarketIdentificationCode;
    bool flagHasMostLiquidExchange;
    TypeMostLiquidExchange storeMostLiquidExchange;
    bool flagHasCategoryOrIndustry;
    TypeCategoryOrIndustry storeCategoryOrIndustry;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    StockSecurityDetailsJSON(const StockSecurityDetailsJSON &);
    StockSecurityDetailsJSON & operator=(const StockSecurityDetailsJSON &other);

    void  fromJSONCIK(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSymbol(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONISIN(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONValoren(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMarket(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMarketIdentificationCode(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMostLiquidExchange(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCategoryOrIndustry(JSONValue *json_value, bool ignore_extras = false);


  public:
    StockSecurityDetailsJSON(void);
    virtual ~StockSecurityDetailsJSON(void);
    bool  hasCIK(void) const;
    TypeCIK  getCIK(void);
    const TypeCIK  getCIK(void) const;
    bool  hasSymbol(void) const;
    std::string  getSymbol(void);
    const std::string  getSymbol(void) const;
    bool  hasISIN(void) const;
    TypeISIN  getISIN(void);
    const TypeISIN  getISIN(void) const;
    bool  hasValoren(void) const;
    TypeValoren  getValoren(void);
    const TypeValoren  getValoren(void) const;
    bool  hasName(void) const;
    std::string  getName(void);
    const std::string  getName(void) const;
    bool  hasMarket(void) const;
    TypeMarket  getMarket(void);
    const TypeMarket  getMarket(void) const;
    bool  hasMarketIdentificationCode(void) const;
    TypeMarketIdentificationCode  getMarketIdentificationCode(void);
    const TypeMarketIdentificationCode  getMarketIdentificationCode(void) const;
    bool  hasMostLiquidExchange(void) const;
    TypeMostLiquidExchange  getMostLiquidExchange(void);
    const TypeMostLiquidExchange  getMostLiquidExchange(void) const;
    bool  hasCategoryOrIndustry(void) const;
    TypeCategoryOrIndustry  getCategoryOrIndustry(void);
    const TypeCategoryOrIndustry  getCategoryOrIndustry(void) const;

    virtual size_t extraStockSecurityDetailsComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraStockSecurityDetailsComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraStockSecurityDetailsComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraStockSecurityDetailsComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraStockSecurityDetailsLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraStockSecurityDetailsLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setCIK(TypeCIK new_value)
      {
        flagHasCIK = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeCIK = new_value;
      }
    void unsetCIK(void)
      {
        flagHasCIK = false;
      }
    void setSymbol(std::string new_value)
      {
        flagHasSymbol = true;
        storeSymbol = new_value;
      }
    void unsetSymbol(void)
      {
        flagHasSymbol = false;
      }
    void setISIN(TypeISIN new_value)
      {
        flagHasISIN = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeISIN = new_value;
      }
    void unsetISIN(void)
      {
        flagHasISIN = false;
      }
    void setValoren(TypeValoren new_value)
      {
        flagHasValoren = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeValoren = new_value;
      }
    void unsetValoren(void)
      {
        flagHasValoren = false;
      }
    void setName(std::string new_value)
      {
        flagHasName = true;
        storeName = new_value;
      }
    void unsetName(void)
      {
        flagHasName = false;
      }
    void setMarket(TypeMarket new_value)
      {
        flagHasMarket = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeMarket = new_value;
      }
    void unsetMarket(void)
      {
        flagHasMarket = false;
      }
    void setMarketIdentificationCode(TypeMarketIdentificationCode new_value)
      {
        flagHasMarketIdentificationCode = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeMarketIdentificationCode = new_value;
      }
    void unsetMarketIdentificationCode(void)
      {
        flagHasMarketIdentificationCode = false;
      }
    void setMostLiquidExchange(TypeMostLiquidExchange new_value)
      {
        flagHasMostLiquidExchange = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeMostLiquidExchange = new_value;
      }
    void unsetMostLiquidExchange(void)
      {
        flagHasMostLiquidExchange = false;
      }
    void setCategoryOrIndustry(TypeCategoryOrIndustry new_value)
      {
        flagHasCategoryOrIndustry = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeCategoryOrIndustry = new_value;
      }
    void unsetCategoryOrIndustry(void)
      {
        flagHasCategoryOrIndustry = false;
      }

    virtual void extraStockSecurityDetailsAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraStockSecurityDetailsSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraStockSecurityDetailsLookup(key);
        if (old_field == NULL)
          {
            extraStockSecurityDetailsAppendPair(key, new_component);
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
        if (flagHasCIK)
          {
            handler->start_pair("CIK");
            switch (storeCIK.key)
              {
                case 0:
                    handler->string_value(storeCIK.choice0);
                    break;
                case 1:
                    handler->null_value();
                    break;
                default:
                    assert(false);
              }
          }
        assert(flagHasSymbol);
        handler->start_pair("Symbol");
        handler->string_value(storeSymbol);
        if (flagHasISIN)
          {
            handler->start_pair("ISIN");
            switch (storeISIN.key)
              {
                case 0:
                    handler->string_value(storeISIN.choice0);
                    break;
                case 1:
                    handler->null_value();
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasValoren)
          {
            handler->start_pair("Valoren");
            switch (storeValoren.key)
              {
                case 0:
                    handler->string_value(storeValoren.choice0);
                    break;
                case 1:
                    handler->null_value();
                    break;
                default:
                    assert(false);
              }
          }
        assert(flagHasName);
        handler->start_pair("Name");
        handler->string_value(storeName);
        if (flagHasMarket)
          {
            handler->start_pair("Market");
            switch (storeMarket.key)
              {
                case 0:
                    handler->string_value(storeMarket.choice0);
                    break;
                case 1:
                    handler->null_value();
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasMarketIdentificationCode)
          {
            handler->start_pair("MarketIdentificationCode");
            switch (storeMarketIdentificationCode.key)
              {
                case 0:
                    handler->string_value(storeMarketIdentificationCode.choice0);
                    break;
                case 1:
                    handler->null_value();
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasMostLiquidExchange)
          {
            handler->start_pair("MostLiquidExchange");
            switch (storeMostLiquidExchange.key)
              {
                case 0:
                    handler->boolean_value(storeMostLiquidExchange.u.choice0);
                    break;
                case 1:
                    handler->null_value();
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasCategoryOrIndustry)
          {
            handler->start_pair("CategoryOrIndustry");
            switch (storeCategoryOrIndustry.key)
              {
                case 0:
                    handler->string_value(storeCategoryOrIndustry.choice0);
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
        if (!(hasSymbol()))
          {
            return "When parsing the object for %what%, the \"Symbol\" field was missing.";
          }
        if (!(hasName()))
          {
            return "When parsing the object for %what%, the \"Name\" field was missing.";
          }
        return NULL;
      }

    static StockSecurityDetailsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static StockSecurityDetailsJSON *from_text(const char *text, bool ignore_extras = false)
      {
        StockSecurityDetailsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StockSecurityDetailsJSON>, StockSecurityDetailsJSON *, bool> generator("Type StockSecurityDetails", ignore_extras);
            parse_json_value(text, "Text for StockSecurityDetailsJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static StockSecurityDetailsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        StockSecurityDetailsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StockSecurityDetailsJSON>, StockSecurityDetailsJSON *, bool> generator("Type StockSecurityDetails", ignore_extras);
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
    class FieldGeneratorCIK : public JSONParallelGenerator
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
                TypeCIK result;
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
            virtual void handle_result(TypeCIK result) = 0;

          public:
            FieldGeneratorCIK(bool ignore_extras) : field0("option 0 of field \"CIK\""), field1("option 1 of field \"CIK\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorCIK(std::string what, bool ignore_extras) : field0("option 0 of field \"CIK\""), field1("option 1 of field \"CIK\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorCIK(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderCIK
          {
          private:
            bool have_data;
            TypeCIK data;

          public:
            HolderCIK(void) : have_data(false)  { }
            HolderCIK(TypeCIK init_data) : have_data(true), data(init_data)
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
            HolderCIK(const HolderCIK &other) : have_data(other.haveData()), data(other.referenced())
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
            ~HolderCIK(void)
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

            void operator=(const HolderCIK &other)
              {
                TypeCIK new_data;
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
            TypeCIK referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorCIK, HolderCIK, TypeCIK, bool > fieldGeneratorCIK;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSymbol;
    class FieldGeneratorISIN : public JSONParallelGenerator
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
                TypeISIN result;
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
            virtual void handle_result(TypeISIN result) = 0;

          public:
            FieldGeneratorISIN(bool ignore_extras) : field0("option 0 of field \"ISIN\""), field1("option 1 of field \"ISIN\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorISIN(std::string what, bool ignore_extras) : field0("option 0 of field \"ISIN\""), field1("option 1 of field \"ISIN\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorISIN(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderISIN
          {
          private:
            bool have_data;
            TypeISIN data;

          public:
            HolderISIN(void) : have_data(false)  { }
            HolderISIN(TypeISIN init_data) : have_data(true), data(init_data)
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
            HolderISIN(const HolderISIN &other) : have_data(other.haveData()), data(other.referenced())
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
            ~HolderISIN(void)
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

            void operator=(const HolderISIN &other)
              {
                TypeISIN new_data;
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
            TypeISIN referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorISIN, HolderISIN, TypeISIN, bool > fieldGeneratorISIN;
    class FieldGeneratorValoren : public JSONParallelGenerator
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
                TypeValoren result;
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
            virtual void handle_result(TypeValoren result) = 0;

          public:
            FieldGeneratorValoren(bool ignore_extras) : field0("option 0 of field \"Valoren\""), field1("option 1 of field \"Valoren\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorValoren(std::string what, bool ignore_extras) : field0("option 0 of field \"Valoren\""), field1("option 1 of field \"Valoren\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorValoren(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderValoren
          {
          private:
            bool have_data;
            TypeValoren data;

          public:
            HolderValoren(void) : have_data(false)  { }
            HolderValoren(TypeValoren init_data) : have_data(true), data(init_data)
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
            HolderValoren(const HolderValoren &other) : have_data(other.haveData()), data(other.referenced())
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
            ~HolderValoren(void)
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

            void operator=(const HolderValoren &other)
              {
                TypeValoren new_data;
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
            TypeValoren referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorValoren, HolderValoren, TypeValoren, bool > fieldGeneratorValoren;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorName;
    class FieldGeneratorMarket : public JSONParallelGenerator
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
                TypeMarket result;
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
            virtual void handle_result(TypeMarket result) = 0;

          public:
            FieldGeneratorMarket(bool ignore_extras) : field0("option 0 of field \"Market\""), field1("option 1 of field \"Market\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorMarket(std::string what, bool ignore_extras) : field0("option 0 of field \"Market\""), field1("option 1 of field \"Market\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorMarket(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderMarket
          {
          private:
            bool have_data;
            TypeMarket data;

          public:
            HolderMarket(void) : have_data(false)  { }
            HolderMarket(TypeMarket init_data) : have_data(true), data(init_data)
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
            HolderMarket(const HolderMarket &other) : have_data(other.haveData()), data(other.referenced())
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
            ~HolderMarket(void)
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

            void operator=(const HolderMarket &other)
              {
                TypeMarket new_data;
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
            TypeMarket referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorMarket, HolderMarket, TypeMarket, bool > fieldGeneratorMarket;
    class FieldGeneratorMarketIdentificationCode : public JSONParallelGenerator
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
                TypeMarketIdentificationCode result;
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
            virtual void handle_result(TypeMarketIdentificationCode result) = 0;

          public:
            FieldGeneratorMarketIdentificationCode(bool ignore_extras) : field0("option 0 of field \"MarketIdentificationCode\""), field1("option 1 of field \"MarketIdentificationCode\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorMarketIdentificationCode(std::string what, bool ignore_extras) : field0("option 0 of field \"MarketIdentificationCode\""), field1("option 1 of field \"MarketIdentificationCode\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorMarketIdentificationCode(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderMarketIdentificationCode
          {
          private:
            bool have_data;
            TypeMarketIdentificationCode data;

          public:
            HolderMarketIdentificationCode(void) : have_data(false)  { }
            HolderMarketIdentificationCode(TypeMarketIdentificationCode init_data) : have_data(true), data(init_data)
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
            HolderMarketIdentificationCode(const HolderMarketIdentificationCode &other) : have_data(other.haveData()), data(other.referenced())
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
            ~HolderMarketIdentificationCode(void)
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

            void operator=(const HolderMarketIdentificationCode &other)
              {
                TypeMarketIdentificationCode new_data;
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
            TypeMarketIdentificationCode referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorMarketIdentificationCode, HolderMarketIdentificationCode, TypeMarketIdentificationCode, bool > fieldGeneratorMarketIdentificationCode;
    class FieldGeneratorMostLiquidExchange : public JSONParallelGenerator
          {
          private:
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > field0;
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
                TypeMostLiquidExchange result;
                result.key = winning_index;
                switch (winning_index)
                  {
                    case 0:
                      {
                        assert(field0.have_value);
                        result.u.choice0 = field0.value;
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
            virtual void handle_result(TypeMostLiquidExchange result) = 0;

          public:
            FieldGeneratorMostLiquidExchange(bool ignore_extras) : field0("option 0 of field \"MostLiquidExchange\""), field1("option 1 of field \"MostLiquidExchange\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorMostLiquidExchange(std::string what, bool ignore_extras) : field0("option 0 of field \"MostLiquidExchange\""), field1("option 1 of field \"MostLiquidExchange\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorMostLiquidExchange(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderMostLiquidExchange
          {
          private:
            bool have_data;
            TypeMostLiquidExchange data;

          public:
            HolderMostLiquidExchange(void) : have_data(false)  { }
            HolderMostLiquidExchange(TypeMostLiquidExchange init_data) : have_data(true), data(init_data)
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
            HolderMostLiquidExchange(const HolderMostLiquidExchange &other) : have_data(other.haveData()), data(other.referenced())
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
            ~HolderMostLiquidExchange(void)
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

            void operator=(const HolderMostLiquidExchange &other)
              {
                TypeMostLiquidExchange new_data;
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
            TypeMostLiquidExchange referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorMostLiquidExchange, HolderMostLiquidExchange, TypeMostLiquidExchange, bool > fieldGeneratorMostLiquidExchange;
    class FieldGeneratorCategoryOrIndustry : public JSONParallelGenerator
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
                TypeCategoryOrIndustry result;
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
            virtual void handle_result(TypeCategoryOrIndustry result) = 0;

          public:
            FieldGeneratorCategoryOrIndustry(bool ignore_extras) : field0("option 0 of field \"CategoryOrIndustry\""), field1("option 1 of field \"CategoryOrIndustry\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorCategoryOrIndustry(std::string what, bool ignore_extras) : field0("option 0 of field \"CategoryOrIndustry\""), field1("option 1 of field \"CategoryOrIndustry\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorCategoryOrIndustry(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderCategoryOrIndustry
          {
          private:
            bool have_data;
            TypeCategoryOrIndustry data;

          public:
            HolderCategoryOrIndustry(void) : have_data(false)  { }
            HolderCategoryOrIndustry(TypeCategoryOrIndustry init_data) : have_data(true), data(init_data)
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
            HolderCategoryOrIndustry(const HolderCategoryOrIndustry &other) : have_data(other.haveData()), data(other.referenced())
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
            ~HolderCategoryOrIndustry(void)
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

            void operator=(const HolderCategoryOrIndustry &other)
              {
                TypeCategoryOrIndustry new_data;
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
            TypeCategoryOrIndustry referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorCategoryOrIndustry, HolderCategoryOrIndustry, TypeCategoryOrIndustry, bool > fieldGeneratorCategoryOrIndustry;
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
            StockSecurityDetailsJSON *result = new StockSecurityDetailsJSON();
            assert(result != NULL);
            RCHandle<StockSecurityDetailsJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraStockSecurityDetailsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(StockSecurityDetailsJSON *result)
          {
            if (fieldGeneratorCIK.have_value)
              {
                result->setCIK(fieldGeneratorCIK.value.referenced());
                fieldGeneratorCIK.have_value = false;
              }
            if (fieldGeneratorSymbol.have_value)
              {
                result->setSymbol(fieldGeneratorSymbol.value);
                fieldGeneratorSymbol.have_value = false;
              }
            else if (!(result->hasSymbol()))
              {
                error("When parsing the object for %what%, the \"Symbol\" field was missing.");
              }
            if (fieldGeneratorISIN.have_value)
              {
                result->setISIN(fieldGeneratorISIN.value.referenced());
                fieldGeneratorISIN.have_value = false;
              }
            if (fieldGeneratorValoren.have_value)
              {
                result->setValoren(fieldGeneratorValoren.value.referenced());
                fieldGeneratorValoren.have_value = false;
              }
            if (fieldGeneratorName.have_value)
              {
                result->setName(fieldGeneratorName.value);
                fieldGeneratorName.have_value = false;
              }
            else if (!(result->hasName()))
              {
                error("When parsing the object for %what%, the \"Name\" field was missing.");
              }
            if (fieldGeneratorMarket.have_value)
              {
                result->setMarket(fieldGeneratorMarket.value.referenced());
                fieldGeneratorMarket.have_value = false;
              }
            if (fieldGeneratorMarketIdentificationCode.have_value)
              {
                result->setMarketIdentificationCode(fieldGeneratorMarketIdentificationCode.value.referenced());
                fieldGeneratorMarketIdentificationCode.have_value = false;
              }
            if (fieldGeneratorMostLiquidExchange.have_value)
              {
                result->setMostLiquidExchange(fieldGeneratorMostLiquidExchange.value.referenced());
                fieldGeneratorMostLiquidExchange.have_value = false;
              }
            if (fieldGeneratorCategoryOrIndustry.have_value)
              {
                result->setCategoryOrIndustry(fieldGeneratorCategoryOrIndustry.value.referenced());
                fieldGeneratorCategoryOrIndustry.have_value = false;
              }
          }
        virtual void handle_result(StockSecurityDetailsJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'I':
                            if (strcmp(&(field_name[2]), "K") == 0)
                                return &fieldGeneratorCIK;
                            break;
                        case 'a':
                            if (strcmp(&(field_name[2]), "tegoryOrIndustry") == 0)
                                return &fieldGeneratorCategoryOrIndustry;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "SIN") == 0)
                        return &fieldGeneratorISIN;
                    break;
                case 'M':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strncmp(&(field_name[2]), "rket", 4) == 0)
                              {
                                switch ((unsigned char)(field_name[6]))
                                  {
                                    case 0:
                                        return &fieldGeneratorMarket;
                                    case 'I':
                                        if (strcmp(&(field_name[7]), "dentificationCode") == 0)
                                            return &fieldGeneratorMarketIdentificationCode;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "stLiquidExchange") == 0)
                                return &fieldGeneratorMostLiquidExchange;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "ame") == 0)
                        return &fieldGeneratorName;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "ymbol") == 0)
                        return &fieldGeneratorSymbol;
                    break;
                case 'V':
                    if (strcmp(&(field_name[1]), "aloren") == 0)
                        return &fieldGeneratorValoren;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorCIK("field \"CIK\" of the StockSecurityDetails class", ignore_extras), fieldGeneratorSymbol("field \"Symbol\" of the StockSecurityDetails class"), fieldGeneratorISIN("field \"ISIN\" of the StockSecurityDetails class", ignore_extras), fieldGeneratorValoren("field \"Valoren\" of the StockSecurityDetails class", ignore_extras), fieldGeneratorName("field \"Name\" of the StockSecurityDetails class"), fieldGeneratorMarket("field \"Market\" of the StockSecurityDetails class", ignore_extras), fieldGeneratorMarketIdentificationCode("field \"MarketIdentificationCode\" of the StockSecurityDetails class", ignore_extras), fieldGeneratorMostLiquidExchange("field \"MostLiquidExchange\" of the StockSecurityDetails class", ignore_extras), fieldGeneratorCategoryOrIndustry("field \"CategoryOrIndustry\" of the StockSecurityDetails class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the StockSecurityDetails class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorCIK.reset();
            fieldGeneratorSymbol.reset();
            fieldGeneratorISIN.reset();
            fieldGeneratorValoren.reset();
            fieldGeneratorName.reset();
            fieldGeneratorMarket.reset();
            fieldGeneratorMarketIdentificationCode.reset();
            fieldGeneratorMostLiquidExchange.reset();
            fieldGeneratorCategoryOrIndustry.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* STOCKSECURITYDETAILSJSON_H */
