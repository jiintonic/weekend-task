/* file "GuessThatLyricConversationStateElementJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "GuessThatLyricConversationStateElementJSON.h"

#include "GuessThatLyricConversationStateElementJSON.h"


GuessThatLyricConversationStateElementJSON::TypeCommandKind GuessThatLyricConversationStateElementJSON::stringToCommandKind(const char *chars)
  {
    if (strcmp(chars, "GuessThatLyricCommand") == 0)
        return CommandKind_GuessThatLyricCommand;
    throw("The value for field `CommandKind' is not one of the legal values.");
  }

const char *GuessThatLyricConversationStateElementJSON::stringFromCommandKind(TypeCommandKind the_enum)
  {
    switch (the_enum)
      {
        case CommandKind_GuessThatLyricCommand:
            return "GuessThatLyricCommand";
        default:
            assert(false);
            return NULL;
      }
  }

GuessThatLyricConversationStateElementJSON::GuessThatLyricConversationStateElementJSON(const GuessThatLyricConversationStateElementJSON &)
  {
    assert(false);
  }

GuessThatLyricConversationStateElementJSON &GuessThatLyricConversationStateElementJSON::operator=(const GuessThatLyricConversationStateElementJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *GuessThatLyricConversationStateElementJSON::extraCommandKindToJSON(void) const
  {
    JSONStringValue *generated_string_CommandKind;
    generated_string_CommandKind = new JSONStringValue("GuessThatLyricCommand");
    return generated_string_CommandKind;
  }

void GuessThatLyricConversationStateElementJSON::fromJSONCommandKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandKind of GuessThatLyricConversationStateElementJSON is not a string.");
    if (!(strcmp(json_string->getData(), "GuessThatLyricCommand") == 0))
        throw("The value for field CommandKind of GuessThatLyricConversationStateElementJSON is not `GuessThatLyricCommand'.");
    setCommandKind();
  }

GuessThatLyricConversationStateElementJSON::GuessThatLyricConversationStateElementJSON(void) :
        flagHasCommandKind(false)
  {
    extraIndex = create_string_index();
  }

GuessThatLyricConversationStateElementJSON::~GuessThatLyricConversationStateElementJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *GuessThatLyricConversationStateElementJSON::getMusicCommandConversationStateElementKind(void) const
  {
    return "GuessThatLyricConversationStateElement";
  }

bool GuessThatLyricConversationStateElementJSON::hasCommandKind(void) const
  {
    return flagHasCommandKind;
  }

GuessThatLyricConversationStateElementJSON::TypeCommandKind GuessThatLyricConversationStateElementJSON::getCommandKind(void)
  {
    assert(flagHasCommandKind);
    return CommandKind_GuessThatLyricCommand;
  }

const GuessThatLyricConversationStateElementJSON::TypeCommandKind GuessThatLyricConversationStateElementJSON::getCommandKind(void) const
  {
    assert(flagHasCommandKind);
    return CommandKind_GuessThatLyricCommand;
  }

const char *GuessThatLyricConversationStateElementJSON::getCommandKindAsChars(void) const
  {
    return stringFromCommandKind(getCommandKind());
  }

std::string GuessThatLyricConversationStateElementJSON::getCommandKindAsString(void) const
  {
    return stringFromCommandKind(getCommandKind());
  }

GuessThatLyricConversationStateElementJSON *GuessThatLyricConversationStateElementJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    GuessThatLyricConversationStateElementJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<GuessThatLyricConversationStateElementJSON>, GuessThatLyricConversationStateElementJSON *, bool> generator("Type GuessThatLyricConversationStateElement", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
