/* file "BlackjackDoubledownInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef BLACKJACKDOUBLEDOWNINFORMATIONNUGGETJSON_H
#define BLACKJACKDOUBLEDOWNINFORMATIONNUGGETJSON_H

#pragma interface

#include "BlackjackInformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONIntegerRangeGenerator.h"
#include <string>
#include <stdint.h>
#include "BlackjackHandJSON.h"
#include "BlackjackHandJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class BlackjackDoubledownInformationNuggetJSON : public BlackjackInformationNuggetJSON
  {
  private:
    bool flagHasImageURL;
    std::string storeImageURL;
    bool flagHasBankroll;
    double storeBankroll;
    std::string textStoreBankroll;
    bool flagHasPlayerHand;
    BlackjackHandJSON * storePlayerHand;
    bool flagHasPlayerHandTotal;
    uint8_t storePlayerHandTotal;
    bool flagHasDealerHand;
    BlackjackHandJSON * storeDealerHand;
    bool flagHasDealerHandTotal;
    uint8_t storeDealerHandTotal;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    BlackjackDoubledownInformationNuggetJSON(const BlackjackDoubledownInformationNuggetJSON &);
    BlackjackDoubledownInformationNuggetJSON & operator=(const BlackjackDoubledownInformationNuggetJSON &other);

    JSONValue * extraImageURLToJSON(void) const;
    JSONValue * extraBankrollToJSON(void) const;
    JSONValue * extraPlayerHandToJSON(void) const;
    JSONValue * extraPlayerHandTotalToJSON(void) const;
    JSONValue * extraDealerHandToJSON(void) const;
    JSONValue * extraDealerHandTotalToJSON(void) const;

    void  fromJSONImageURL(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBankroll(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPlayerHand(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPlayerHandTotal(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDealerHand(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDealerHandTotal(JSONValue *json_value, bool ignore_extras = false);


  public:
    BlackjackDoubledownInformationNuggetJSON(void);
    virtual ~BlackjackDoubledownInformationNuggetJSON(void);
    const char * getBlackjackNuggetKind(void) const;
    bool  hasImageURL(void) const;
    std::string  getImageURL(void);
    const std::string  getImageURL(void) const;
    bool  hasBankroll(void) const;
    double  getBankroll(void);
    const double  getBankroll(void) const;
    std::string  getBankrollAsText(void) const;
    bool  hasPlayerHand(void) const;
    BlackjackHandJSON *  getPlayerHand(void);
    const BlackjackHandJSON *  getPlayerHand(void) const;
    bool  hasPlayerHandTotal(void) const;
    uint8_t  getPlayerHandTotal(void);
    const uint8_t  getPlayerHandTotal(void) const;
    bool  hasDealerHand(void) const;
    BlackjackHandJSON *  getDealerHand(void);
    const BlackjackHandJSON *  getDealerHand(void) const;
    bool  hasDealerHandTotal(void) const;
    uint8_t  getDealerHandTotal(void);
    const uint8_t  getDealerHandTotal(void) const;

    virtual size_t extraBlackjackDoubledownInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraBlackjackDoubledownInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraBlackjackDoubledownInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraBlackjackDoubledownInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraBlackjackDoubledownInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraBlackjackDoubledownInformationNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraBlackjackInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasImageURL)
            ++result;
        if (flagHasBankroll)
            ++result;
        if (flagHasPlayerHand)
            ++result;
        if (flagHasPlayerHandTotal)
            ++result;
        if (flagHasDealerHand)
            ++result;
        if (flagHasDealerHandTotal)
            ++result;
        result += extraBlackjackDoubledownInformationNuggetComponentCount();
        return result;
      }
    const char *extraBlackjackInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasImageURL)
          {
            if (remainder == 0)
                return "ImageURL";
            --remainder;
          }
        if (flagHasBankroll)
          {
            if (remainder == 0)
                return "Bankroll";
            --remainder;
          }
        if (flagHasPlayerHand)
          {
            if (remainder == 0)
                return "PlayerHand";
            --remainder;
          }
        if (flagHasPlayerHandTotal)
          {
            if (remainder == 0)
                return "PlayerHandTotal";
            --remainder;
          }
        if (flagHasDealerHand)
          {
            if (remainder == 0)
                return "DealerHand";
            --remainder;
          }
        if (flagHasDealerHandTotal)
          {
            if (remainder == 0)
                return "DealerHandTotal";
            --remainder;
          }
        return extraBlackjackDoubledownInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraBlackjackInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasImageURL)
          {
            if (remainder == 0)
                return extraImageURLToJSON();
            --remainder;
          }
        if (flagHasBankroll)
          {
            if (remainder == 0)
                return extraBankrollToJSON();
            --remainder;
          }
        if (flagHasPlayerHand)
          {
            if (remainder == 0)
                return extraPlayerHandToJSON();
            --remainder;
          }
        if (flagHasPlayerHandTotal)
          {
            if (remainder == 0)
                return extraPlayerHandTotalToJSON();
            --remainder;
          }
        if (flagHasDealerHand)
          {
            if (remainder == 0)
                return extraDealerHandToJSON();
            --remainder;
          }
        if (flagHasDealerHandTotal)
          {
            if (remainder == 0)
                return extraDealerHandTotalToJSON();
            --remainder;
          }
        return extraBlackjackDoubledownInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraBlackjackInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasImageURL)
          {
            if (remainder == 0)
                return extraImageURLToJSON();
            --remainder;
          }
        if (flagHasBankroll)
          {
            if (remainder == 0)
                return extraBankrollToJSON();
            --remainder;
          }
        if (flagHasPlayerHand)
          {
            if (remainder == 0)
                return extraPlayerHandToJSON();
            --remainder;
          }
        if (flagHasPlayerHandTotal)
          {
            if (remainder == 0)
                return extraPlayerHandTotalToJSON();
            --remainder;
          }
        if (flagHasDealerHand)
          {
            if (remainder == 0)
                return extraDealerHandToJSON();
            --remainder;
          }
        if (flagHasDealerHandTotal)
          {
            if (remainder == 0)
                return extraDealerHandTotalToJSON();
            --remainder;
          }
        return extraBlackjackDoubledownInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraBlackjackInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'B':
                if (strcmp(&(field_name[1]), "ankroll") == 0)
                    return (flagHasBankroll ? extraBankrollToJSON() : NULL);
                break;
            case 'D':
                if (strncmp(&(field_name[1]), "ealerHand", 9) == 0)
                  {
                    switch ((unsigned char)(field_name[10]))
                      {
                        case 0:
                            return (flagHasDealerHand ? extraDealerHandToJSON() : NULL);
                        case 'T':
                            if (strcmp(&(field_name[11]), "otal") == 0)
                                return (flagHasDealerHandTotal ? extraDealerHandTotalToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'I':
                if (strcmp(&(field_name[1]), "mageURL") == 0)
                    return (flagHasImageURL ? extraImageURLToJSON() : NULL);
                break;
            case 'P':
                if (strncmp(&(field_name[1]), "layerHand", 9) == 0)
                  {
                    switch ((unsigned char)(field_name[10]))
                      {
                        case 0:
                            return (flagHasPlayerHand ? extraPlayerHandToJSON() : NULL);
                        case 'T':
                            if (strcmp(&(field_name[11]), "otal") == 0)
                                return (flagHasPlayerHandTotal ? extraPlayerHandTotalToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraBlackjackDoubledownInformationNuggetLookup(field_name);
      }
    const JSONValue *extraBlackjackInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'B':
                if (strcmp(&(field_name[1]), "ankroll") == 0)
                    return (flagHasBankroll ? extraBankrollToJSON() : NULL);
                break;
            case 'D':
                if (strncmp(&(field_name[1]), "ealerHand", 9) == 0)
                  {
                    switch ((unsigned char)(field_name[10]))
                      {
                        case 0:
                            return (flagHasDealerHand ? extraDealerHandToJSON() : NULL);
                        case 'T':
                            if (strcmp(&(field_name[11]), "otal") == 0)
                                return (flagHasDealerHandTotal ? extraDealerHandTotalToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'I':
                if (strcmp(&(field_name[1]), "mageURL") == 0)
                    return (flagHasImageURL ? extraImageURLToJSON() : NULL);
                break;
            case 'P':
                if (strncmp(&(field_name[1]), "layerHand", 9) == 0)
                  {
                    switch ((unsigned char)(field_name[10]))
                      {
                        case 0:
                            return (flagHasPlayerHand ? extraPlayerHandToJSON() : NULL);
                        case 'T':
                            if (strcmp(&(field_name[11]), "otal") == 0)
                                return (flagHasPlayerHandTotal ? extraPlayerHandTotalToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraBlackjackDoubledownInformationNuggetLookup(field_name);
      }

    void setImageURL(std::string new_value)
      {
        flagHasImageURL = true;
        storeImageURL = new_value;
      }
    void unsetImageURL(void)
      {
        flagHasImageURL = false;
      }
    void setBankroll(double new_value)
      {
        flagHasBankroll = true;
        if (new_value < 0)
            throw("The value for field Bankroll of BlackjackDoubledownInformationNuggetJSON is less than the lower bound (0) for that field.");
        storeBankroll = new_value;
        textStoreBankroll = "";
      }
    void setBankrollText(std::string new_value)
      {
        flagHasBankroll = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Bankroll of BlackjackDoubledownInformationNuggetJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field Bankroll of BlackjackDoubledownInformationNuggetJSON is less than the lower bound (0) for that field.");
        textStoreBankroll = new_value;
      }
    void unsetBankroll(void)
      {
        flagHasBankroll = false;
      }
    void setPlayerHand(BlackjackHandJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPlayerHand)
          {
            storePlayerHand->remove_reference();
          }
        flagHasPlayerHand = true;
        storePlayerHand = new_value;
      }
    void unsetPlayerHand(void)
      {
        if (flagHasPlayerHand)
          {
            storePlayerHand->remove_reference();
          }
        flagHasPlayerHand = false;
      }
    void setPlayerHandTotal(uint8_t new_value)
      {
        flagHasPlayerHandTotal = true;
        if (new_value < 6)
            throw("The value for field PlayerHandTotal of BlackjackDoubledownInformationNuggetJSON is less than the lower bound (6) for that field.");
        if (new_value > 30)
            throw("The value for field PlayerHandTotal of BlackjackDoubledownInformationNuggetJSON is greater than the upper bound (30) for that field.");
        storePlayerHandTotal = new_value;
      }
    void unsetPlayerHandTotal(void)
      {
        flagHasPlayerHandTotal = false;
      }
    void setDealerHand(BlackjackHandJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDealerHand)
          {
            storeDealerHand->remove_reference();
          }
        flagHasDealerHand = true;
        storeDealerHand = new_value;
      }
    void unsetDealerHand(void)
      {
        if (flagHasDealerHand)
          {
            storeDealerHand->remove_reference();
          }
        flagHasDealerHand = false;
      }
    void setDealerHandTotal(uint8_t new_value)
      {
        flagHasDealerHandTotal = true;
        if (new_value < 4)
            throw("The value for field DealerHandTotal of BlackjackDoubledownInformationNuggetJSON is less than the lower bound (4) for that field.");
        if (new_value > 26)
            throw("The value for field DealerHandTotal of BlackjackDoubledownInformationNuggetJSON is greater than the upper bound (26) for that field.");
        storeDealerHandTotal = new_value;
      }
    void unsetDealerHandTotal(void)
      {
        flagHasDealerHandTotal = false;
      }

    virtual void extraBlackjackDoubledownInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraBlackjackDoubledownInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraBlackjackDoubledownInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraBlackjackDoubledownInformationNuggetAppendPair(key, new_component);
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
    void extraBlackjackInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'B':
                if (strcmp(&(key[1]), "ankroll") == 0)
                    {
                    fromJSONBankroll(new_component, false);
                    return;
                    }
                break;
            case 'D':
                if (strncmp(&(key[1]), "ealerHand", 9) == 0)
                  {
                    switch ((unsigned char)(key[10]))
                      {
                        case 0:
                            {
                            fromJSONDealerHand(new_component, false);
                            return;
                            }
                        case 'T':
                            if (strcmp(&(key[11]), "otal") == 0)
                                {
                                fromJSONDealerHandTotal(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'I':
                if (strcmp(&(key[1]), "mageURL") == 0)
                    {
                    fromJSONImageURL(new_component, false);
                    return;
                    }
                break;
            case 'P':
                if (strncmp(&(key[1]), "layerHand", 9) == 0)
                  {
                    switch ((unsigned char)(key[10]))
                      {
                        case 0:
                            {
                            fromJSONPlayerHand(new_component, false);
                            return;
                            }
                        case 'T':
                            if (strcmp(&(key[11]), "otal") == 0)
                                {
                                fromJSONPlayerHandTotal(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        extraBlackjackDoubledownInformationNuggetAppendPair(key, new_component);
      }
    void extraBlackjackInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'B':
                if (strcmp(&(key[1]), "ankroll") == 0)
                    {
                    fromJSONBankroll(new_component, false);
                    return;
                    }
                break;
            case 'D':
                if (strncmp(&(key[1]), "ealerHand", 9) == 0)
                  {
                    switch ((unsigned char)(key[10]))
                      {
                        case 0:
                            {
                            fromJSONDealerHand(new_component, false);
                            return;
                            }
                        case 'T':
                            if (strcmp(&(key[11]), "otal") == 0)
                                {
                                fromJSONDealerHandTotal(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'I':
                if (strcmp(&(key[1]), "mageURL") == 0)
                    {
                    fromJSONImageURL(new_component, false);
                    return;
                    }
                break;
            case 'P':
                if (strncmp(&(key[1]), "layerHand", 9) == 0)
                  {
                    switch ((unsigned char)(key[10]))
                      {
                        case 0:
                            {
                            fromJSONPlayerHand(new_component, false);
                            return;
                            }
                        case 'T':
                            if (strcmp(&(key[11]), "otal") == 0)
                                {
                                fromJSONPlayerHandTotal(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        extraBlackjackDoubledownInformationNuggetSetField(key, new_component);
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
        BlackjackInformationNuggetJSON::write_fields_as_json(handler);
        assert(flagHasImageURL);
        handler->start_pair("ImageURL");
        handler->string_value(storeImageURL);
        assert(flagHasBankroll);
        handler->start_pair("Bankroll");
        if (textStoreBankroll != "")
            handler->number_value(textStoreBankroll.c_str());
        else if (((double)(long int)storeBankroll) == storeBankroll)
            handler->number_value((long int)storeBankroll);
        else
            handler->number_value(storeBankroll);
        assert(flagHasPlayerHand);
        handler->start_pair("PlayerHand");
        storePlayerHand->write_as_json(handler);
        assert(flagHasPlayerHandTotal);
        handler->start_pair("PlayerHandTotal");
        handler->number_value(storePlayerHandTotal);
        assert(flagHasDealerHand);
        handler->start_pair("DealerHand");
        storeDealerHand->write_as_json(handler);
        if (flagHasDealerHandTotal)
          {
            handler->start_pair("DealerHandTotal");
            handler->number_value(storeDealerHandTotal);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasImageURL()))
          {
            return "When parsing the object for %what%, the \"ImageURL\" field was missing.";
          }
        if (!(hasBankroll()))
          {
            return "When parsing the object for %what%, the \"Bankroll\" field was missing.";
          }
        if (!(hasPlayerHand()))
          {
            return "When parsing the object for %what%, the \"PlayerHand\" field was missing.";
          }
        if (!(hasPlayerHandTotal()))
          {
            return "When parsing the object for %what%, the \"PlayerHandTotal\" field was missing.";
          }
        if (!(hasDealerHand()))
          {
            return "When parsing the object for %what%, the \"DealerHand\" field was missing.";
          }
        return NULL;
      }

    static BlackjackDoubledownInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static BlackjackDoubledownInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        BlackjackDoubledownInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<BlackjackDoubledownInformationNuggetJSON>, BlackjackDoubledownInformationNuggetJSON *, bool> generator("Type BlackjackDoubledownInformationNugget", ignore_extras);
            parse_json_value(text, "Text for BlackjackDoubledownInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static BlackjackDoubledownInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        BlackjackDoubledownInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<BlackjackDoubledownInformationNuggetJSON>, BlackjackDoubledownInformationNuggetJSON *, bool> generator("Type BlackjackDoubledownInformationNugget", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public BlackjackInformationNuggetJSON::Generator
      {
      private:
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorImageURL;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorBankroll;
        JSONHoldingGenerator<BlackjackHandJSON::Generator, RCHandle<BlackjackHandJSON>, BlackjackHandJSON *, bool > fieldGeneratorPlayerHand;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 6, 30>, uint8_t, uint8_t > fieldGeneratorPlayerHandTotal;
        JSONHoldingGenerator<BlackjackHandJSON::Generator, RCHandle<BlackjackHandJSON>, BlackjackHandJSON *, bool > fieldGeneratorDealerHand;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 4, 26>, uint8_t, uint8_t > fieldGeneratorDealerHandTotal;
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
            if (!(strcmp(getBlackjackInformationNuggetJSONKey().c_str(), "BlackjackDoubledownCommand") == 0))
                throw("The key field has a value other than `BlackjackDoubledownCommand'.");
            BlackjackDoubledownInformationNuggetJSON *result = new BlackjackDoubledownInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<BlackjackDoubledownInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraBlackjackDoubledownInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(BlackjackInformationNuggetJSON *new_result)
          {
            handle_result((BlackjackDoubledownInformationNuggetJSON *)new_result);
          }
        void finish(BlackjackDoubledownInformationNuggetJSON *result)
          {
            if (fieldGeneratorImageURL.have_value)
              {
                result->setImageURL(fieldGeneratorImageURL.value);
                fieldGeneratorImageURL.have_value = false;
              }
            else if (!(result->hasImageURL()))
              {
                error("When parsing the object for %what%, the \"ImageURL\" field was missing.");
              }
            if (fieldGeneratorBankroll.have_value)
              {
                result->setBankrollText(fieldGeneratorBankroll.value);
                fieldGeneratorBankroll.have_value = false;
              }
            else if (!(result->hasBankroll()))
              {
                error("When parsing the object for %what%, the \"Bankroll\" field was missing.");
              }
            if (fieldGeneratorPlayerHand.have_value)
              {
                result->setPlayerHand(fieldGeneratorPlayerHand.value.referenced());
                fieldGeneratorPlayerHand.have_value = false;
              }
            else if (!(result->hasPlayerHand()))
              {
                error("When parsing the object for %what%, the \"PlayerHand\" field was missing.");
              }
            if (fieldGeneratorPlayerHandTotal.have_value)
              {
                result->setPlayerHandTotal(fieldGeneratorPlayerHandTotal.value);
                fieldGeneratorPlayerHandTotal.have_value = false;
              }
            else if (!(result->hasPlayerHandTotal()))
              {
                error("When parsing the object for %what%, the \"PlayerHandTotal\" field was missing.");
              }
            if (fieldGeneratorDealerHand.have_value)
              {
                result->setDealerHand(fieldGeneratorDealerHand.value.referenced());
                fieldGeneratorDealerHand.have_value = false;
              }
            else if (!(result->hasDealerHand()))
              {
                error("When parsing the object for %what%, the \"DealerHand\" field was missing.");
              }
            if (fieldGeneratorDealerHandTotal.have_value)
              {
                result->setDealerHandTotal(fieldGeneratorDealerHandTotal.value);
                fieldGeneratorDealerHandTotal.have_value = false;
              }
            BlackjackInformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(BlackjackDoubledownInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'B':
                    if (strcmp(&(field_name[1]), "ankroll") == 0)
                        return &fieldGeneratorBankroll;
                    break;
                case 'D':
                    if (strncmp(&(field_name[1]), "ealerHand", 9) == 0)
                      {
                        switch ((unsigned char)(field_name[10]))
                          {
                            case 0:
                                return &fieldGeneratorDealerHand;
                            case 'T':
                                if (strcmp(&(field_name[11]), "otal") == 0)
                                    return &fieldGeneratorDealerHandTotal;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "mageURL") == 0)
                        return &fieldGeneratorImageURL;
                    break;
                case 'P':
                    if (strncmp(&(field_name[1]), "layerHand", 9) == 0)
                      {
                        switch ((unsigned char)(field_name[10]))
                          {
                            case 0:
                                return &fieldGeneratorPlayerHand;
                            case 'T':
                                if (strcmp(&(field_name[11]), "otal") == 0)
                                    return &fieldGeneratorPlayerHandTotal;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return BlackjackInformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : BlackjackInformationNuggetJSON::Generator(ignore_extras), fieldGeneratorImageURL("field \"ImageURL\" of the BlackjackDoubledownInformationNugget class"), fieldGeneratorBankroll("field \"Bankroll\" of the BlackjackDoubledownInformationNugget class"), fieldGeneratorPlayerHand("field \"PlayerHand\" of the BlackjackDoubledownInformationNugget class", ignore_extras), fieldGeneratorPlayerHandTotal("field \"PlayerHandTotal\" of the BlackjackDoubledownInformationNugget class"), fieldGeneratorDealerHand("field \"DealerHand\" of the BlackjackDoubledownInformationNugget class", ignore_extras), fieldGeneratorDealerHandTotal("field \"DealerHandTotal\" of the BlackjackDoubledownInformationNugget class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the BlackjackDoubledownInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorImageURL.reset();
            fieldGeneratorBankroll.reset();
            fieldGeneratorPlayerHand.reset();
            fieldGeneratorPlayerHandTotal.reset();
            fieldGeneratorDealerHand.reset();
            fieldGeneratorDealerHandTotal.reset();
            BlackjackInformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* BLACKJACKDOUBLEDOWNINFORMATIONNUGGETJSON_H */
