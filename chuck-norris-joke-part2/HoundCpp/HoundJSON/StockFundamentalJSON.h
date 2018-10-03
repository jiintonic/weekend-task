/* file "StockFundamentalJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef STOCKFUNDAMENTALJSON_H
#define STOCKFUNDAMENTALJSON_H

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


class StockFundamentalJSON : public ReferenceCounted
  {
  public:
    struct TypeReportType
      {
        size_t key;
        std::string choice0;
        bool choice1;
      };
    struct TypeIsRestated
      {
        size_t key;
        union
          {
            bool choice0;
            bool choice1;
          } u;
      };
    struct TypeValue
      {
        size_t key;
        std::string choice0;
        bool choice1;
      };
    struct TypeDate
      {
        size_t key;
        std::string choice0;
        bool choice1;
      };
    struct TypeLastUpdated
      {
        size_t key;
        std::string choice0;
        bool choice1;
      };
    struct TypeUnit
      {
        size_t key;
        std::string choice0;
        bool choice1;
      };

  private:
    bool flagHasType;
    std::string storeType;
    bool flagHasReportType;
    TypeReportType storeReportType;
    bool flagHasIsRestated;
    TypeIsRestated storeIsRestated;
    bool flagHasValue;
    TypeValue storeValue;
    bool flagHasDate;
    TypeDate storeDate;
    bool flagHasLastUpdated;
    TypeLastUpdated storeLastUpdated;
    bool flagHasUnit;
    TypeUnit storeUnit;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    StockFundamentalJSON(const StockFundamentalJSON &);
    StockFundamentalJSON & operator=(const StockFundamentalJSON &other);

    void  fromJSONType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONReportType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsRestated(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLastUpdated(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUnit(JSONValue *json_value, bool ignore_extras = false);


  public:
    StockFundamentalJSON(void);
    virtual ~StockFundamentalJSON(void);
    bool  hasType(void) const;
    std::string  getType(void);
    const std::string  getType(void) const;
    bool  hasReportType(void) const;
    TypeReportType  getReportType(void);
    const TypeReportType  getReportType(void) const;
    bool  hasIsRestated(void) const;
    TypeIsRestated  getIsRestated(void);
    const TypeIsRestated  getIsRestated(void) const;
    bool  hasValue(void) const;
    TypeValue  getValue(void);
    const TypeValue  getValue(void) const;
    bool  hasDate(void) const;
    TypeDate  getDate(void);
    const TypeDate  getDate(void) const;
    bool  hasLastUpdated(void) const;
    TypeLastUpdated  getLastUpdated(void);
    const TypeLastUpdated  getLastUpdated(void) const;
    bool  hasUnit(void) const;
    TypeUnit  getUnit(void);
    const TypeUnit  getUnit(void) const;

    virtual size_t extraStockFundamentalComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraStockFundamentalComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraStockFundamentalComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraStockFundamentalComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraStockFundamentalLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraStockFundamentalLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setType(std::string new_value)
      {
        flagHasType = true;
        storeType = new_value;
      }
    void unsetType(void)
      {
        flagHasType = false;
      }
    void setReportType(TypeReportType new_value)
      {
        flagHasReportType = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeReportType = new_value;
      }
    void unsetReportType(void)
      {
        flagHasReportType = false;
      }
    void setIsRestated(TypeIsRestated new_value)
      {
        flagHasIsRestated = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeIsRestated = new_value;
      }
    void unsetIsRestated(void)
      {
        flagHasIsRestated = false;
      }
    void setValue(TypeValue new_value)
      {
        flagHasValue = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeValue = new_value;
      }
    void unsetValue(void)
      {
        flagHasValue = false;
      }
    void setDate(TypeDate new_value)
      {
        flagHasDate = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeDate = new_value;
      }
    void unsetDate(void)
      {
        flagHasDate = false;
      }
    void setLastUpdated(TypeLastUpdated new_value)
      {
        flagHasLastUpdated = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeLastUpdated = new_value;
      }
    void unsetLastUpdated(void)
      {
        flagHasLastUpdated = false;
      }
    void setUnit(TypeUnit new_value)
      {
        flagHasUnit = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeUnit = new_value;
      }
    void unsetUnit(void)
      {
        flagHasUnit = false;
      }

    virtual void extraStockFundamentalAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraStockFundamentalSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraStockFundamentalLookup(key);
        if (old_field == NULL)
          {
            extraStockFundamentalAppendPair(key, new_component);
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
        assert(flagHasType);
        handler->start_pair("Type");
        handler->string_value(storeType);
        if (flagHasReportType)
          {
            handler->start_pair("ReportType");
            switch (storeReportType.key)
              {
                case 0:
                    handler->string_value(storeReportType.choice0);
                    break;
                case 1:
                    handler->null_value();
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasIsRestated)
          {
            handler->start_pair("IsRestated");
            switch (storeIsRestated.key)
              {
                case 0:
                    handler->boolean_value(storeIsRestated.u.choice0);
                    break;
                case 1:
                    handler->null_value();
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasValue)
          {
            handler->start_pair("Value");
            switch (storeValue.key)
              {
                case 0:
                    handler->string_value(storeValue.choice0);
                    break;
                case 1:
                    handler->null_value();
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasDate)
          {
            handler->start_pair("Date");
            switch (storeDate.key)
              {
                case 0:
                    handler->string_value(storeDate.choice0);
                    break;
                case 1:
                    handler->null_value();
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasLastUpdated)
          {
            handler->start_pair("LastUpdated");
            switch (storeLastUpdated.key)
              {
                case 0:
                    handler->string_value(storeLastUpdated.choice0);
                    break;
                case 1:
                    handler->null_value();
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasUnit)
          {
            handler->start_pair("Unit");
            switch (storeUnit.key)
              {
                case 0:
                    handler->string_value(storeUnit.choice0);
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
        if (!(hasType()))
          {
            return "When parsing the object for %what%, the \"Type\" field was missing.";
          }
        return NULL;
      }

    static StockFundamentalJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static StockFundamentalJSON *from_text(const char *text, bool ignore_extras = false)
      {
        StockFundamentalJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StockFundamentalJSON>, StockFundamentalJSON *, bool> generator("Type StockFundamental", ignore_extras);
            parse_json_value(text, "Text for StockFundamentalJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static StockFundamentalJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        StockFundamentalJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StockFundamentalJSON>, StockFundamentalJSON *, bool> generator("Type StockFundamental", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorType;
    class FieldGeneratorReportType : public JSONParallelGenerator
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
                TypeReportType result;
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
            virtual void handle_result(TypeReportType result) = 0;

          public:
            FieldGeneratorReportType(bool ignore_extras) : field0("option 0 of field \"ReportType\""), field1("option 1 of field \"ReportType\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorReportType(std::string what, bool ignore_extras) : field0("option 0 of field \"ReportType\""), field1("option 1 of field \"ReportType\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorReportType(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderReportType
          {
          private:
            bool have_data;
            TypeReportType data;

          public:
            HolderReportType(void) : have_data(false)  { }
            HolderReportType(TypeReportType init_data) : have_data(true), data(init_data)
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
            HolderReportType(const HolderReportType &other) : have_data(other.haveData()), data(other.referenced())
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
            ~HolderReportType(void)
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

            void operator=(const HolderReportType &other)
              {
                TypeReportType new_data;
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
            TypeReportType referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorReportType, HolderReportType, TypeReportType, bool > fieldGeneratorReportType;
    class FieldGeneratorIsRestated : public JSONParallelGenerator
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
                TypeIsRestated result;
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
            virtual void handle_result(TypeIsRestated result) = 0;

          public:
            FieldGeneratorIsRestated(bool ignore_extras) : field0("option 0 of field \"IsRestated\""), field1("option 1 of field \"IsRestated\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorIsRestated(std::string what, bool ignore_extras) : field0("option 0 of field \"IsRestated\""), field1("option 1 of field \"IsRestated\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorIsRestated(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderIsRestated
          {
          private:
            bool have_data;
            TypeIsRestated data;

          public:
            HolderIsRestated(void) : have_data(false)  { }
            HolderIsRestated(TypeIsRestated init_data) : have_data(true), data(init_data)
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
            HolderIsRestated(const HolderIsRestated &other) : have_data(other.haveData()), data(other.referenced())
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
            ~HolderIsRestated(void)
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

            void operator=(const HolderIsRestated &other)
              {
                TypeIsRestated new_data;
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
            TypeIsRestated referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorIsRestated, HolderIsRestated, TypeIsRestated, bool > fieldGeneratorIsRestated;
    class FieldGeneratorValue : public JSONParallelGenerator
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
                TypeValue result;
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
            virtual void handle_result(TypeValue result) = 0;

          public:
            FieldGeneratorValue(bool ignore_extras) : field0("option 0 of field \"Value\""), field1("option 1 of field \"Value\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorValue(std::string what, bool ignore_extras) : field0("option 0 of field \"Value\""), field1("option 1 of field \"Value\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorValue(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderValue
          {
          private:
            bool have_data;
            TypeValue data;

          public:
            HolderValue(void) : have_data(false)  { }
            HolderValue(TypeValue init_data) : have_data(true), data(init_data)
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
            HolderValue(const HolderValue &other) : have_data(other.haveData()), data(other.referenced())
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
            ~HolderValue(void)
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

            void operator=(const HolderValue &other)
              {
                TypeValue new_data;
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
            TypeValue referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorValue, HolderValue, TypeValue, bool > fieldGeneratorValue;
    class FieldGeneratorDate : public JSONParallelGenerator
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
                TypeDate result;
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
            virtual void handle_result(TypeDate result) = 0;

          public:
            FieldGeneratorDate(bool ignore_extras) : field0("option 0 of field \"Date\""), field1("option 1 of field \"Date\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorDate(std::string what, bool ignore_extras) : field0("option 0 of field \"Date\""), field1("option 1 of field \"Date\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorDate(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderDate
          {
          private:
            bool have_data;
            TypeDate data;

          public:
            HolderDate(void) : have_data(false)  { }
            HolderDate(TypeDate init_data) : have_data(true), data(init_data)
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
            HolderDate(const HolderDate &other) : have_data(other.haveData()), data(other.referenced())
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
            ~HolderDate(void)
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

            void operator=(const HolderDate &other)
              {
                TypeDate new_data;
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
            TypeDate referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorDate, HolderDate, TypeDate, bool > fieldGeneratorDate;
    class FieldGeneratorLastUpdated : public JSONParallelGenerator
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
                TypeLastUpdated result;
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
            virtual void handle_result(TypeLastUpdated result) = 0;

          public:
            FieldGeneratorLastUpdated(bool ignore_extras) : field0("option 0 of field \"LastUpdated\""), field1("option 1 of field \"LastUpdated\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorLastUpdated(std::string what, bool ignore_extras) : field0("option 0 of field \"LastUpdated\""), field1("option 1 of field \"LastUpdated\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorLastUpdated(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderLastUpdated
          {
          private:
            bool have_data;
            TypeLastUpdated data;

          public:
            HolderLastUpdated(void) : have_data(false)  { }
            HolderLastUpdated(TypeLastUpdated init_data) : have_data(true), data(init_data)
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
            HolderLastUpdated(const HolderLastUpdated &other) : have_data(other.haveData()), data(other.referenced())
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
            ~HolderLastUpdated(void)
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

            void operator=(const HolderLastUpdated &other)
              {
                TypeLastUpdated new_data;
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
            TypeLastUpdated referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorLastUpdated, HolderLastUpdated, TypeLastUpdated, bool > fieldGeneratorLastUpdated;
    class FieldGeneratorUnit : public JSONParallelGenerator
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
                TypeUnit result;
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
            virtual void handle_result(TypeUnit result) = 0;

          public:
            FieldGeneratorUnit(bool ignore_extras) : field0("option 0 of field \"Unit\""), field1("option 1 of field \"Unit\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorUnit(std::string what, bool ignore_extras) : field0("option 0 of field \"Unit\""), field1("option 1 of field \"Unit\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorUnit(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderUnit
          {
          private:
            bool have_data;
            TypeUnit data;

          public:
            HolderUnit(void) : have_data(false)  { }
            HolderUnit(TypeUnit init_data) : have_data(true), data(init_data)
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
            HolderUnit(const HolderUnit &other) : have_data(other.haveData()), data(other.referenced())
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
            ~HolderUnit(void)
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

            void operator=(const HolderUnit &other)
              {
                TypeUnit new_data;
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
            TypeUnit referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorUnit, HolderUnit, TypeUnit, bool > fieldGeneratorUnit;
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
            StockFundamentalJSON *result = new StockFundamentalJSON();
            assert(result != NULL);
            RCHandle<StockFundamentalJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraStockFundamentalAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(StockFundamentalJSON *result)
          {
            if (fieldGeneratorType.have_value)
              {
                result->setType(fieldGeneratorType.value);
                fieldGeneratorType.have_value = false;
              }
            else if (!(result->hasType()))
              {
                error("When parsing the object for %what%, the \"Type\" field was missing.");
              }
            if (fieldGeneratorReportType.have_value)
              {
                result->setReportType(fieldGeneratorReportType.value.referenced());
                fieldGeneratorReportType.have_value = false;
              }
            if (fieldGeneratorIsRestated.have_value)
              {
                result->setIsRestated(fieldGeneratorIsRestated.value.referenced());
                fieldGeneratorIsRestated.have_value = false;
              }
            if (fieldGeneratorValue.have_value)
              {
                result->setValue(fieldGeneratorValue.value.referenced());
                fieldGeneratorValue.have_value = false;
              }
            if (fieldGeneratorDate.have_value)
              {
                result->setDate(fieldGeneratorDate.value.referenced());
                fieldGeneratorDate.have_value = false;
              }
            if (fieldGeneratorLastUpdated.have_value)
              {
                result->setLastUpdated(fieldGeneratorLastUpdated.value.referenced());
                fieldGeneratorLastUpdated.have_value = false;
              }
            if (fieldGeneratorUnit.have_value)
              {
                result->setUnit(fieldGeneratorUnit.value.referenced());
                fieldGeneratorUnit.have_value = false;
              }
          }
        virtual void handle_result(StockFundamentalJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strcmp(&(field_name[1]), "ate") == 0)
                        return &fieldGeneratorDate;
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "sRestated") == 0)
                        return &fieldGeneratorIsRestated;
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "astUpdated") == 0)
                        return &fieldGeneratorLastUpdated;
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "eportType") == 0)
                        return &fieldGeneratorReportType;
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "ype") == 0)
                        return &fieldGeneratorType;
                    break;
                case 'U':
                    if (strcmp(&(field_name[1]), "nit") == 0)
                        return &fieldGeneratorUnit;
                    break;
                case 'V':
                    if (strcmp(&(field_name[1]), "alue") == 0)
                        return &fieldGeneratorValue;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorType("field \"Type\" of the StockFundamental class"), fieldGeneratorReportType("field \"ReportType\" of the StockFundamental class", ignore_extras), fieldGeneratorIsRestated("field \"IsRestated\" of the StockFundamental class", ignore_extras), fieldGeneratorValue("field \"Value\" of the StockFundamental class", ignore_extras), fieldGeneratorDate("field \"Date\" of the StockFundamental class", ignore_extras), fieldGeneratorLastUpdated("field \"LastUpdated\" of the StockFundamental class", ignore_extras), fieldGeneratorUnit("field \"Unit\" of the StockFundamental class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the StockFundamental class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorType.reset();
            fieldGeneratorReportType.reset();
            fieldGeneratorIsRestated.reset();
            fieldGeneratorValue.reset();
            fieldGeneratorDate.reset();
            fieldGeneratorLastUpdated.reset();
            fieldGeneratorUnit.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* STOCKFUNDAMENTALJSON_H */
