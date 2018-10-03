/* file "CommandErrorJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CommandErrorJSON.h"

#include "CommandErrorJSON.h"
#include "NoDataJSON.h"
#include "NoContactInfoJSON.h"
#include "BadConversationStateJSON.h"
#include "MissingLocationJSON.h"
#include "RequestedDateOutOfBoundsJSON.h"
#include "BadDataJSON.h"
#include "FlightStatusCommandErrorJSON.h"
#include "SMSDisambiguateErrorJSON.h"
#include "ExpediaHotelAPIErrorJSON.h"
#include "FlightBookingCommandErrorJSON.h"
#include "BadTerrierExpressionJSON.h"
#include "UberErrorJSON.h"
#include "HomeAutomationCommandErrorJSON.h"
#include "ContactSaveErrorJSON.h"
#include "UnknownContactRequestKindJSON.h"
#include "AgeCalculatorRequestedDateOutOfBoundsJSON.h"


CommandErrorJSON::CommandErrorJSON(const CommandErrorJSON &)
  {
    assert(false);
  }

CommandErrorJSON &CommandErrorJSON::operator=(const CommandErrorJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CommandErrorJSON::fromJSONErrorMessage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ErrorMessage of CommandErrorJSON is not a string.");
    setErrorMessage(std::string(json_string->getData()));
  }

void CommandErrorJSON::fromJSONExpectedCommandKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ExpectedCommandKind of CommandErrorJSON is not a string.");
    setExpectedCommandKind(std::string(json_string->getData()));
  }

CommandErrorJSON::CommandErrorJSON(void) :
        flagHasErrorMessage(false),
        flagHasExpectedCommandKind(false)
  {
  }

CommandErrorJSON::~CommandErrorJSON(void)
  {
  }

bool CommandErrorJSON::hasErrorMessage(void) const
  {
    return flagHasErrorMessage;
  }

std::string CommandErrorJSON::getErrorMessage(void)
  {
    assert(flagHasErrorMessage);
    return storeErrorMessage;
  }

const std::string CommandErrorJSON::getErrorMessage(void) const
  {
    assert(flagHasErrorMessage);
    return storeErrorMessage;
  }

bool CommandErrorJSON::hasExpectedCommandKind(void) const
  {
    return flagHasExpectedCommandKind;
  }

std::string CommandErrorJSON::getExpectedCommandKind(void)
  {
    assert(flagHasExpectedCommandKind);
    return storeExpectedCommandKind;
  }

const std::string CommandErrorJSON::getExpectedCommandKind(void) const
  {
    assert(flagHasExpectedCommandKind);
    return storeExpectedCommandKind;
  }

CommandErrorJSON *CommandErrorJSON::createForKey(const char *key, string_index *other_field_index)
  {
    switch ((unsigned char)(key[0]))
      {
        case 'A':
            if (strcmp(&(key[1]), "geCalculatorRequestedDateOutOfBounds") == 0)
                return new AgeCalculatorRequestedDateOutOfBoundsJSON();
            break;
        case 'B':
            if (strncmp(&(key[1]), "ad", 2) == 0)
              {
                switch ((unsigned char)(key[3]))
                  {
                    case 'C':
                        if (strcmp(&(key[4]), "onversationState") == 0)
                            return new BadConversationStateJSON();
                        break;
                    case 'D':
                        if (strcmp(&(key[4]), "ata") == 0)
                            return new BadDataJSON();
                        break;
                    case 'T':
                        if (strcmp(&(key[4]), "errierExpression") == 0)
                            return new BadTerrierExpressionJSON();
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'C':
            if (strcmp(&(key[1]), "ontactSaveError") == 0)
                return new ContactSaveErrorJSON();
            break;
        case 'E':
            if (strcmp(&(key[1]), "xpediaHotelAPIError") == 0)
                return new ExpediaHotelAPIErrorJSON();
            break;
        case 'F':
            if (strncmp(&(key[1]), "light", 5) == 0)
              {
                switch ((unsigned char)(key[6]))
                  {
                    case 'B':
                        if (strcmp(&(key[7]), "ookingCommandError") == 0)
                            return new FlightBookingCommandErrorJSON();
                        break;
                    case 'S':
                        if (strcmp(&(key[7]), "tatusCommandError") == 0)
                            return new FlightStatusCommandErrorJSON();
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'H':
            if (strcmp(&(key[1]), "omeAutomationCommandError") == 0)
                return new HomeAutomationCommandErrorJSON();
            break;
        case 'M':
            if (strcmp(&(key[1]), "issingLocation") == 0)
                return new MissingLocationJSON();
            break;
        case 'N':
            if (strncmp(&(key[1]), "o", 1) == 0)
              {
                switch ((unsigned char)(key[2]))
                  {
                    case 'C':
                        if (strcmp(&(key[3]), "ontactInfo") == 0)
                            return new NoContactInfoJSON();
                        break;
                    case 'D':
                        if (strcmp(&(key[3]), "ata") == 0)
                            return new NoDataJSON();
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'R':
            if (strcmp(&(key[1]), "equestedDateOutOfBounds") == 0)
                return new RequestedDateOutOfBoundsJSON();
            break;
        case 'S':
            if (strcmp(&(key[1]), "MSDisambiguateError") == 0)
                return new SMSDisambiguateErrorJSON();
            break;
        case 'U':
            switch ((unsigned char)(key[1]))
              {
                case 'b':
                    if (strcmp(&(key[2]), "erError") == 0)
                      {
                        JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "UberErrorKind")));
                        if (key_value == NULL)
                            throw("The `UberErrorKind' field is missing.");
                        JSONStringValue *key_string_value = key_value->string_value();
                        if (key_string_value == NULL)
                            throw("The `UberErrorKind' field has a non-string value.");
                        return UberErrorJSON::createForKey(key_string_value->getData(), other_field_index);
                      }
                    break;
                case 'n':
                    if (strcmp(&(key[2]), "knownContactRequestKind") == 0)
                        return new UnknownContactRequestKindJSON();
                    break;
                default:
                    break;
              }
            break;
        default:
            break;
      }

    class GenericCommandErrorJSON : public CommandErrorJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericCommandErrorJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericCommandErrorJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getErrorType(void) const  { return key.c_str(); }
        size_t extraCommandErrorComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraCommandErrorComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraCommandErrorComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraCommandErrorComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraCommandErrorLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraCommandErrorLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraCommandErrorAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraCommandErrorSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraCommandErrorLookup(key);
            if (old_field == NULL)
              {
                extraCommandErrorAppendPair(key, new_component);
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
    return new GenericCommandErrorJSON(key);
  }
CommandErrorJSON *CommandErrorJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CommandErrorJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CommandErrorJSON>, CommandErrorJSON *, bool> generator("Type CommandError", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
