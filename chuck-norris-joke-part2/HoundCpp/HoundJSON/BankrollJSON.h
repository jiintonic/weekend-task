/* file "BankrollJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef BANKROLLJSON_H
#define BANKROLLJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class BankrollJSON : public ReferenceCounted
  {
  private:
    bool flagHasBankroll;
    double storeBankroll;
    std::string textStoreBankroll;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    BankrollJSON(const BankrollJSON &);
    BankrollJSON & operator=(const BankrollJSON &other);

    void  fromJSONBankroll(JSONValue *json_value, bool ignore_extras = false);


  public:
    BankrollJSON(void);
    virtual ~BankrollJSON(void);
    bool  hasBankroll(void) const;
    double  getBankroll(void);
    const double  getBankroll(void) const;
    std::string  getBankrollAsText(void) const;

    virtual size_t extraBankrollComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraBankrollComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraBankrollComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraBankrollComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraBankrollLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraBankrollLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setBankroll(double new_value)
      {
        flagHasBankroll = true;
        if (new_value < 0)
            throw("The value for field Bankroll of BankrollJSON is less than the lower bound (0) for that field.");
        storeBankroll = new_value;
        textStoreBankroll = "";
      }
    void setBankrollText(std::string new_value)
      {
        flagHasBankroll = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Bankroll of BankrollJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field Bankroll of BankrollJSON is less than the lower bound (0) for that field.");
        textStoreBankroll = new_value;
      }
    void unsetBankroll(void)
      {
        flagHasBankroll = false;
      }

    virtual void extraBankrollAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraBankrollSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraBankrollLookup(key);
        if (old_field == NULL)
          {
            extraBankrollAppendPair(key, new_component);
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
        assert(flagHasBankroll);
        handler->start_pair("Bankroll");
        if (textStoreBankroll != "")
            handler->number_value(textStoreBankroll.c_str());
        else if (((double)(long int)storeBankroll) == storeBankroll)
            handler->number_value((long int)storeBankroll);
        else
            handler->number_value(storeBankroll);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasBankroll()))
          {
            return "When parsing the object for %what%, the \"Bankroll\" field was missing.";
          }
        return NULL;
      }

    static BankrollJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static BankrollJSON *from_text(const char *text, bool ignore_extras = false)
      {
        BankrollJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<BankrollJSON>, BankrollJSON *, bool> generator("Type Bankroll", ignore_extras);
            parse_json_value(text, "Text for BankrollJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static BankrollJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        BankrollJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<BankrollJSON>, BankrollJSON *, bool> generator("Type Bankroll", ignore_extras);
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
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorBankroll;
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
            BankrollJSON *result = new BankrollJSON();
            assert(result != NULL);
            RCHandle<BankrollJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraBankrollAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(BankrollJSON *result)
          {
            if (fieldGeneratorBankroll.have_value)
              {
                result->setBankrollText(fieldGeneratorBankroll.value);
                fieldGeneratorBankroll.have_value = false;
              }
            else if (!(result->hasBankroll()))
              {
                error("When parsing the object for %what%, the \"Bankroll\" field was missing.");
              }
          }
        virtual void handle_result(BankrollJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Bankroll") == 0)
                return &fieldGeneratorBankroll;
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorBankroll("field \"Bankroll\" of the Bankroll class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the Bankroll class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorBankroll.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* BANKROLLJSON_H */
