/* file "HandHistoryJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HANDHISTORYJSON_H
#define HANDHISTORYJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONIntegerRangeGenerator.h"
#include <stdint.h>
#include "DateAndOrTimeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HandHistoryJSON : public ReferenceCounted
  {
  private:
    bool flagHasLastDateAndOrTime;
    DateAndOrTimeJSON * storeLastDateAndOrTime;
    bool flagHasNumberOfPlayerCards;
    uint8_t storeNumberOfPlayerCards;
    bool flagHasBetAmount;
    double storeBetAmount;
    std::string textStoreBetAmount;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HandHistoryJSON(const HandHistoryJSON &);
    HandHistoryJSON & operator=(const HandHistoryJSON &other);

    void  fromJSONLastDateAndOrTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNumberOfPlayerCards(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBetAmount(JSONValue *json_value, bool ignore_extras = false);


  public:
    HandHistoryJSON(void);
    virtual ~HandHistoryJSON(void);
    bool  hasLastDateAndOrTime(void) const;
    DateAndOrTimeJSON *  getLastDateAndOrTime(void);
    const DateAndOrTimeJSON *  getLastDateAndOrTime(void) const;
    bool  hasNumberOfPlayerCards(void) const;
    uint8_t  getNumberOfPlayerCards(void);
    const uint8_t  getNumberOfPlayerCards(void) const;
    bool  hasBetAmount(void) const;
    double  getBetAmount(void);
    const double  getBetAmount(void) const;
    std::string  getBetAmountAsText(void) const;

    virtual size_t extraHandHistoryComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHandHistoryComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHandHistoryComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHandHistoryComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHandHistoryLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHandHistoryLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setLastDateAndOrTime(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasLastDateAndOrTime)
          {
            storeLastDateAndOrTime->remove_reference();
          }
        flagHasLastDateAndOrTime = true;
        storeLastDateAndOrTime = new_value;
      }
    void unsetLastDateAndOrTime(void)
      {
        if (flagHasLastDateAndOrTime)
          {
            storeLastDateAndOrTime->remove_reference();
          }
        flagHasLastDateAndOrTime = false;
      }
    void setNumberOfPlayerCards(uint8_t new_value)
      {
        flagHasNumberOfPlayerCards = true;
        if (new_value < 2)
            throw("The value for field NumberOfPlayerCards of HandHistoryJSON is less than the lower bound (2) for that field.");
        if (new_value > 11)
            throw("The value for field NumberOfPlayerCards of HandHistoryJSON is greater than the upper bound (11) for that field.");
        storeNumberOfPlayerCards = new_value;
      }
    void unsetNumberOfPlayerCards(void)
      {
        flagHasNumberOfPlayerCards = false;
      }
    void setBetAmount(double new_value)
      {
        flagHasBetAmount = true;
        storeBetAmount = new_value;
        textStoreBetAmount = "";
      }
    void setBetAmountText(std::string new_value)
      {
        flagHasBetAmount = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field BetAmount of HandHistoryJSON is not a valid number.");
        textStoreBetAmount = new_value;
      }
    void unsetBetAmount(void)
      {
        flagHasBetAmount = false;
      }

    virtual void extraHandHistoryAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHandHistorySetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHandHistoryLookup(key);
        if (old_field == NULL)
          {
            extraHandHistoryAppendPair(key, new_component);
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
        if (flagHasLastDateAndOrTime)
          {
            handler->start_pair("LastDateAndOrTime");
            storeLastDateAndOrTime->write_as_json(handler);
          }
        if (flagHasNumberOfPlayerCards)
          {
            handler->start_pair("NumberOfPlayerCards");
            handler->number_value(storeNumberOfPlayerCards);
          }
        if (flagHasBetAmount)
          {
            handler->start_pair("BetAmount");
            if (textStoreBetAmount != "")
                handler->number_value(textStoreBetAmount.c_str());
            else if (((double)(long int)storeBetAmount) == storeBetAmount)
                handler->number_value((long int)storeBetAmount);
            else
                handler->number_value(storeBetAmount);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static HandHistoryJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HandHistoryJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HandHistoryJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HandHistoryJSON>, HandHistoryJSON *, bool> generator("Type HandHistory", ignore_extras);
            parse_json_value(text, "Text for HandHistoryJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HandHistoryJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HandHistoryJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HandHistoryJSON>, HandHistoryJSON *, bool> generator("Type HandHistory", ignore_extras);
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
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorLastDateAndOrTime;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 2, 11>, uint8_t, uint8_t > fieldGeneratorNumberOfPlayerCards;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorBetAmount;
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
            HandHistoryJSON *result = new HandHistoryJSON();
            assert(result != NULL);
            RCHandle<HandHistoryJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHandHistoryAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(HandHistoryJSON *result)
          {
            if (fieldGeneratorLastDateAndOrTime.have_value)
              {
                result->setLastDateAndOrTime(fieldGeneratorLastDateAndOrTime.value.referenced());
                fieldGeneratorLastDateAndOrTime.have_value = false;
              }
            if (fieldGeneratorNumberOfPlayerCards.have_value)
              {
                result->setNumberOfPlayerCards(fieldGeneratorNumberOfPlayerCards.value);
                fieldGeneratorNumberOfPlayerCards.have_value = false;
              }
            if (fieldGeneratorBetAmount.have_value)
              {
                result->setBetAmountText(fieldGeneratorBetAmount.value);
                fieldGeneratorBetAmount.have_value = false;
              }
          }
        virtual void handle_result(HandHistoryJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'B':
                    if (strcmp(&(field_name[1]), "etAmount") == 0)
                        return &fieldGeneratorBetAmount;
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "astDateAndOrTime") == 0)
                        return &fieldGeneratorLastDateAndOrTime;
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "umberOfPlayerCards") == 0)
                        return &fieldGeneratorNumberOfPlayerCards;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorLastDateAndOrTime("field \"LastDateAndOrTime\" of the HandHistory class", ignore_extras), fieldGeneratorNumberOfPlayerCards("field \"NumberOfPlayerCards\" of the HandHistory class"), fieldGeneratorBetAmount("field \"BetAmount\" of the HandHistory class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HandHistory class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorLastDateAndOrTime.reset();
            fieldGeneratorNumberOfPlayerCards.reset();
            fieldGeneratorBetAmount.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HANDHISTORYJSON_H */
