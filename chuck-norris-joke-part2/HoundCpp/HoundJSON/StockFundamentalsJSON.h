/* file "StockFundamentalsJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef STOCKFUNDAMENTALSJSON_H
#define STOCKFUNDAMENTALSJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
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


class StockFundamentalsJSON : public ReferenceCounted
  {
  public:
    struct TypeMessage
      {
        size_t key;
        std::string choice0;
        bool choice1;
      };
    struct TypeDelay
      {
        size_t key;
        union
          {
            double choice0;
            bool choice1;
          } u;
      };

  private:
    bool flagHasOutcome;
    std::string storeOutcome;
    bool flagHasMessage;
    TypeMessage storeMessage;
    bool flagHasDelay;
    TypeDelay storeDelay;
    bool flagHasFundamentals;
    std::vector< StockFundamentalJSON * > storeFundamentals;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    StockFundamentalsJSON(const StockFundamentalsJSON &);
    StockFundamentalsJSON & operator=(const StockFundamentalsJSON &other);

    void  fromJSONOutcome(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMessage(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDelay(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFundamentals(JSONValue *json_value, bool ignore_extras = false);


  public:
    StockFundamentalsJSON(void);
    virtual ~StockFundamentalsJSON(void);
    bool  hasOutcome(void) const;
    std::string  getOutcome(void);
    const std::string  getOutcome(void) const;
    bool  hasMessage(void) const;
    TypeMessage  getMessage(void);
    const TypeMessage  getMessage(void) const;
    bool  hasDelay(void) const;
    TypeDelay  getDelay(void);
    const TypeDelay  getDelay(void) const;
    bool  hasFundamentals(void) const;
    size_t  countOfFundamentals(void) const;
    StockFundamentalJSON *  elementOfFundamentals(size_t element_num);
    const StockFundamentalJSON *  elementOfFundamentals(size_t element_num) const;
    std::vector< StockFundamentalJSON * >  getFundamentals(void);
    const std::vector< StockFundamentalJSON * >  getFundamentals(void) const;

    virtual size_t extraStockFundamentalsComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraStockFundamentalsComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraStockFundamentalsComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraStockFundamentalsComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraStockFundamentalsLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraStockFundamentalsLookup(const char *field_name) const
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
    void setDelay(TypeDelay new_value)
      {
        flagHasDelay = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeDelay = new_value;
      }
    void unsetDelay(void)
      {
        flagHasDelay = false;
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

    virtual void extraStockFundamentalsAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraStockFundamentalsSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraStockFundamentalsLookup(key);
        if (old_field == NULL)
          {
            extraStockFundamentalsAppendPair(key, new_component);
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
        if (flagHasDelay)
          {
            handler->start_pair("Delay");
            switch (storeDelay.key)
              {
                case 0:
                    if (((double)(long int)storeDelay.u.choice0) == storeDelay.u.choice0)
                        handler->number_value((long int)storeDelay.u.choice0);
                    else
                        handler->number_value(storeDelay.u.choice0);
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
        if (!(hasOutcome()))
          {
            return "When parsing the object for %what%, the \"Outcome\" field was missing.";
          }
        if (!(hasFundamentals()))
          {
            return "When parsing the object for %what%, the \"Fundamentals\" field was missing.";
          }
        return NULL;
      }

    static StockFundamentalsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static StockFundamentalsJSON *from_text(const char *text, bool ignore_extras = false)
      {
        StockFundamentalsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StockFundamentalsJSON>, StockFundamentalsJSON *, bool> generator("Type StockFundamentals", ignore_extras);
            parse_json_value(text, "Text for StockFundamentalsJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static StockFundamentalsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        StockFundamentalsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StockFundamentalsJSON>, StockFundamentalsJSON *, bool> generator("Type StockFundamentals", ignore_extras);
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
    class FieldGeneratorDelay : public JSONParallelGenerator
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
                TypeDelay result;
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
            virtual void handle_result(TypeDelay result) = 0;

          public:
            FieldGeneratorDelay(bool ignore_extras) : field0("option 0 of field \"Delay\""), field1("option 1 of field \"Delay\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorDelay(std::string what, bool ignore_extras) : field0("option 0 of field \"Delay\""), field1("option 1 of field \"Delay\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorDelay(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderDelay
          {
          private:
            bool have_data;
            TypeDelay data;

          public:
            HolderDelay(void) : have_data(false)  { }
            HolderDelay(TypeDelay init_data) : have_data(true), data(init_data)
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
            HolderDelay(const HolderDelay &other) : have_data(other.haveData()), data(other.referenced())
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
            ~HolderDelay(void)
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

            void operator=(const HolderDelay &other)
              {
                TypeDelay new_data;
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
            TypeDelay referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorDelay, HolderDelay, TypeDelay, bool > fieldGeneratorDelay;
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
            StockFundamentalsJSON *result = new StockFundamentalsJSON();
            assert(result != NULL);
            RCHandle<StockFundamentalsJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraStockFundamentalsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(StockFundamentalsJSON *result)
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
            if (fieldGeneratorDelay.have_value)
              {
                result->setDelay(fieldGeneratorDelay.value.referenced());
                fieldGeneratorDelay.have_value = false;
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
        virtual void handle_result(StockFundamentalsJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strcmp(&(field_name[1]), "elay") == 0)
                        return &fieldGeneratorDelay;
                    break;
                case 'F':
                    if (strcmp(&(field_name[1]), "undamentals") == 0)
                        return &fieldGeneratorFundamentals;
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "essage") == 0)
                        return &fieldGeneratorMessage;
                    break;
                case 'O':
                    if (strcmp(&(field_name[1]), "utcome") == 0)
                        return &fieldGeneratorOutcome;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorOutcome("field \"Outcome\" of the StockFundamentals class"), fieldGeneratorMessage("field \"Message\" of the StockFundamentals class", ignore_extras), fieldGeneratorDelay("field \"Delay\" of the StockFundamentals class", ignore_extras), fieldGeneratorFundamentals("field \"Fundamentals\" of the StockFundamentals class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the StockFundamentals class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorOutcome.reset();
            fieldGeneratorMessage.reset();
            fieldGeneratorDelay.reset();
            fieldGeneratorFundamentals.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* STOCKFUNDAMENTALSJSON_H */
