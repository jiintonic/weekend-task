/* file "DisambiguateCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DisambiguateCommandJSON.h"

#include "DisambiguateCommandJSON.h"
#include "CallOneContactNumberAmbiguousCommandJSON.h"
#include "DialOneContactNumberAmbiguousCommandJSON.h"
#include "CallWhichContactAmbiguousCommandJSON.h"
#include "ShowWhichContactAmbiguousCommandJSON.h"
#include "DisambiguateCommunicationCommandJSON.h"
#include "SMSDisambiguatePhoneNumbersCommandJSON.h"
#include "SMSDisambiguatePersonsCommandJSON.h"
#include "HomeAutomationControlDisambiguateSpecifierCommandJSON.h"
#include "HomeAutomationQueryDisambiguateSpecifierCommandJSON.h"


DisambiguateCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

DisambiguateCommandJSON::TypeNativeDataJSON &DisambiguateCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DisambiguateCommandJSON::TypeNativeDataJSON::fromJSONMultiSelect(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field MultiSelect of TypeNativeDataJSON is not true for false.");
          }
      }
    setMultiSelect(the_bool);
  }

void DisambiguateCommandJSON::TypeNativeDataJSON::fromJSONChoiceList(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ChoiceList of TypeNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 2)
        throw("The value for field ChoiceList of TypeNativeDataJSON has too few elements.");
    std::vector< DisambiguateChoiceJSON * > vector_ChoiceList1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        DisambiguateChoiceJSON *convert_classy = DisambiguateChoiceJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_ChoiceList1[num1] = convert_classy;
      }
    assert(vector_ChoiceList1.size() >= 2);
    initChoiceList();
    for (size_t num3 = 0; num3 < vector_ChoiceList1.size(); ++num3)
        appendChoiceList(vector_ChoiceList1[num3]);
    for (size_t num1 = 0; num1 < vector_ChoiceList1.size(); ++num1)
      {
        vector_ChoiceList1[num1]->remove_reference();
      }
  }

DisambiguateCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasMultiSelect(false),
        flagHasChoiceList(false)
  {
    extraIndex = create_string_index();
  }

DisambiguateCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    if (flagHasChoiceList)
      {
        for (size_t num7 = 0; num7 < storeChoiceList.size(); ++num7)
          {
            storeChoiceList[num7]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool DisambiguateCommandJSON::TypeNativeDataJSON::hasMultiSelect(void) const
  {
    return flagHasMultiSelect;
  }

bool DisambiguateCommandJSON::TypeNativeDataJSON::getMultiSelect(void)
  {
    assert(flagHasMultiSelect);
    return storeMultiSelect;
  }

const bool DisambiguateCommandJSON::TypeNativeDataJSON::getMultiSelect(void) const
  {
    assert(flagHasMultiSelect);
    return storeMultiSelect;
  }

bool DisambiguateCommandJSON::TypeNativeDataJSON::hasChoiceList(void) const
  {
    return flagHasChoiceList;
  }

size_t DisambiguateCommandJSON::TypeNativeDataJSON::countOfChoiceList(void) const
  {
    assert(flagHasChoiceList);
    return storeChoiceList.size();
  }

DisambiguateChoiceJSON * DisambiguateCommandJSON::TypeNativeDataJSON::elementOfChoiceList(size_t element_num)
  {
    assert(flagHasChoiceList);
    return storeChoiceList[element_num];
  }

const DisambiguateChoiceJSON * DisambiguateCommandJSON::TypeNativeDataJSON::elementOfChoiceList(size_t element_num) const
  {
    assert(flagHasChoiceList);
    return storeChoiceList[element_num];
  }

std::vector< DisambiguateChoiceJSON * > DisambiguateCommandJSON::TypeNativeDataJSON::getChoiceList(void)
  {
    assert(flagHasChoiceList);
    return storeChoiceList;
  }

const std::vector< DisambiguateChoiceJSON * > DisambiguateCommandJSON::TypeNativeDataJSON::getChoiceList(void) const
  {
    assert(flagHasChoiceList);
    return storeChoiceList;
  }

DisambiguateCommandJSON::DisambiguateCommandJSON(const DisambiguateCommandJSON &)
  {
    assert(false);
  }

DisambiguateCommandJSON &DisambiguateCommandJSON::operator=(const DisambiguateCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *DisambiguateCommandJSON::extraMultiSelectToJSON(void) const
  {
    JSONValue *generated_boolean_MultiSelect = (storeMultiSelect ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_MultiSelect;
  }

JSONValue *DisambiguateCommandJSON::extraChoiceListToJSON(void) const
  {
    JSONArrayValue *generated_array_1_ChoiceList = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeChoiceList.size(); ++num1)
      {
        JSONValueHandler handler_ChoiceList;
        storeChoiceList[num1]->write_as_json(&handler_ChoiceList);
        handler_ChoiceList.result->add_reference();
        generated_array_1_ChoiceList->appendComponent(handler_ChoiceList.result);
        handler_ChoiceList.result->remove_reference();
      }
    return generated_array_1_ChoiceList;
  }

JSONValue *DisambiguateCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void DisambiguateCommandJSON::fromJSONMultiSelect(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field MultiSelect of DisambiguateCommandJSON is not true for false.");
          }
      }
    setMultiSelect(the_bool);
  }

void DisambiguateCommandJSON::fromJSONChoiceList(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ChoiceList of DisambiguateCommandJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 2)
        throw("The value for field ChoiceList of DisambiguateCommandJSON has too few elements.");
    std::vector< DisambiguateChoiceJSON * > vector_ChoiceList1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        DisambiguateChoiceJSON *convert_classy = DisambiguateChoiceJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_ChoiceList1[num1] = convert_classy;
      }
    assert(vector_ChoiceList1.size() >= 2);
    initChoiceList();
    for (size_t num4 = 0; num4 < vector_ChoiceList1.size(); ++num4)
        appendChoiceList(vector_ChoiceList1[num4]);
    for (size_t num1 = 0; num1 < vector_ChoiceList1.size(); ++num1)
      {
        vector_ChoiceList1[num1]->remove_reference();
      }
  }

void DisambiguateCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

DisambiguateCommandJSON::DisambiguateCommandJSON(void) :
        flagHasMultiSelect(false),
        flagHasChoiceList(false),
        flagHasNativeData(false)
  {
  }

DisambiguateCommandJSON::~DisambiguateCommandJSON(void)
  {
    if (flagHasChoiceList)
      {
        for (size_t num10 = 0; num10 < storeChoiceList.size(); ++num10)
          {
            storeChoiceList[num10]->remove_reference();
          }
      }
    if (flagHasNativeData)
      {
        storeNativeData->remove_reference();
      }
  }

const char *DisambiguateCommandJSON::getCommandKind(void) const
  {
    return "DisambiguateCommand";
  }

bool DisambiguateCommandJSON::hasMultiSelect(void) const
  {
    return flagHasMultiSelect;
  }

bool DisambiguateCommandJSON::getMultiSelect(void)
  {
    assert(flagHasMultiSelect);
    return storeMultiSelect;
  }

const bool DisambiguateCommandJSON::getMultiSelect(void) const
  {
    assert(flagHasMultiSelect);
    return storeMultiSelect;
  }

bool DisambiguateCommandJSON::hasChoiceList(void) const
  {
    return flagHasChoiceList;
  }

size_t DisambiguateCommandJSON::countOfChoiceList(void) const
  {
    assert(flagHasChoiceList);
    return storeChoiceList.size();
  }

DisambiguateChoiceJSON * DisambiguateCommandJSON::elementOfChoiceList(size_t element_num)
  {
    assert(flagHasChoiceList);
    return storeChoiceList[element_num];
  }

const DisambiguateChoiceJSON * DisambiguateCommandJSON::elementOfChoiceList(size_t element_num) const
  {
    assert(flagHasChoiceList);
    return storeChoiceList[element_num];
  }

std::vector< DisambiguateChoiceJSON * > DisambiguateCommandJSON::getChoiceList(void)
  {
    assert(flagHasChoiceList);
    return storeChoiceList;
  }

const std::vector< DisambiguateChoiceJSON * > DisambiguateCommandJSON::getChoiceList(void) const
  {
    assert(flagHasChoiceList);
    return storeChoiceList;
  }

bool DisambiguateCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

DisambiguateCommandJSON::TypeNativeDataJSON * DisambiguateCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const DisambiguateCommandJSON::TypeNativeDataJSON * DisambiguateCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

DisambiguateCommandJSON::TypeNativeDataJSON *DisambiguateCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeNativeDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
DisambiguateCommandJSON *DisambiguateCommandJSON::createForKey(const char *key, string_index *other_field_index)
  {
    switch ((unsigned char)(key[0]))
      {
        case 'C':
            if (strncmp(&(key[1]), "all", 3) == 0)
              {
                switch ((unsigned char)(key[4]))
                  {
                    case 'O':
                        if (strcmp(&(key[5]), "neContactNumberAmbiguous") == 0)
                            return new CallOneContactNumberAmbiguousCommandJSON();
                        break;
                    case 'W':
                        if (strcmp(&(key[5]), "hichContactAmbiguous") == 0)
                            return new CallWhichContactAmbiguousCommandJSON();
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'D':
            if (strncmp(&(key[1]), "i", 1) == 0)
              {
                switch ((unsigned char)(key[2]))
                  {
                    case 'a':
                        if (strcmp(&(key[3]), "lOneContactNumberAmbiguous") == 0)
                            return new DialOneContactNumberAmbiguousCommandJSON();
                        break;
                    case 's':
                        if (strcmp(&(key[3]), "ambiguateCommunicationCommand") == 0)
                            return new DisambiguateCommunicationCommandJSON();
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'H':
            if (strncmp(&(key[1]), "omeAutomation", 13) == 0)
              {
                switch ((unsigned char)(key[14]))
                  {
                    case 'C':
                        if (strcmp(&(key[15]), "ontrolDisambiguateSpecifierCommand") == 0)
                            return new HomeAutomationControlDisambiguateSpecifierCommandJSON();
                        break;
                    case 'Q':
                        if (strcmp(&(key[15]), "ueryDisambiguateSpecifierCommand") == 0)
                            return new HomeAutomationQueryDisambiguateSpecifierCommandJSON();
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'S':
            switch ((unsigned char)(key[1]))
              {
                case 'M':
                    if (strncmp(&(key[2]), "SDisambiguateP", 14) == 0)
                      {
                        switch ((unsigned char)(key[16]))
                          {
                            case 'e':
                                if (strcmp(&(key[17]), "rsonsCommand") == 0)
                                    return new SMSDisambiguatePersonsCommandJSON();
                                break;
                            case 'h':
                                if (strcmp(&(key[17]), "oneNumbersCommand") == 0)
                                    return new SMSDisambiguatePhoneNumbersCommandJSON();
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'h':
                    if (strcmp(&(key[2]), "owWhichContactAmbiguous") == 0)
                        return new ShowWhichContactAmbiguousCommandJSON();
                    break;
                default:
                    break;
              }
            break;
        default:
            break;
      }

    class GenericDisambiguateCommandJSON : public DisambiguateCommandJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericDisambiguateCommandJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericDisambiguateCommandJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getDisambiguateCommandKind(void) const  { return key.c_str(); }
        size_t extraDisambiguateCommandComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraDisambiguateCommandComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraDisambiguateCommandComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraDisambiguateCommandComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraDisambiguateCommandLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraDisambiguateCommandLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraDisambiguateCommandAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraDisambiguateCommandSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraDisambiguateCommandLookup(key);
            if (old_field == NULL)
              {
                extraDisambiguateCommandAppendPair(key, new_component);
              }
            else
              {
                size_t count = extraKeys.size();
                assert(count == extraValues.size());
                for (size_t num = 0; num < count; ++num)
                  {
                    if (strcmp(extraKeys[num].c_str(), key) == 0)
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
      };
    return new GenericDisambiguateCommandJSON(key);
  }
DisambiguateCommandJSON *DisambiguateCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DisambiguateCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DisambiguateCommandJSON>, DisambiguateCommandJSON *, bool> generator("Type DisambiguateCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
