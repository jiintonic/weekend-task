/* file "GamesMenuConversationStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "GamesMenuConversationStateJSON.h"

#include "GamesMenuConversationStateJSON.h"


GamesMenuConversationStateJSON::GamesMenuConversationStateJSON(const GamesMenuConversationStateJSON &)
  {
    assert(false);
  }

GamesMenuConversationStateJSON &GamesMenuConversationStateJSON::operator=(const GamesMenuConversationStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void GamesMenuConversationStateJSON::fromJSONGamesMenuCommandKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field GamesMenuCommandKind of GamesMenuConversationStateJSON is not a string.");
    setGamesMenuCommandKind(std::string(json_string->getData()));
  }

GamesMenuConversationStateJSON::GamesMenuConversationStateJSON(void) :
        flagHasGamesMenuCommandKind(false)
  {
    extraIndex = create_string_index();
  }

GamesMenuConversationStateJSON::~GamesMenuConversationStateJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool GamesMenuConversationStateJSON::hasGamesMenuCommandKind(void) const
  {
    return flagHasGamesMenuCommandKind;
  }

std::string GamesMenuConversationStateJSON::getGamesMenuCommandKind(void)
  {
    assert(flagHasGamesMenuCommandKind);
    return storeGamesMenuCommandKind;
  }

const std::string GamesMenuConversationStateJSON::getGamesMenuCommandKind(void) const
  {
    assert(flagHasGamesMenuCommandKind);
    return storeGamesMenuCommandKind;
  }

GamesMenuConversationStateJSON *GamesMenuConversationStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    GamesMenuConversationStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<GamesMenuConversationStateJSON>, GamesMenuConversationStateJSON *, bool> generator("Type GamesMenuConversationState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
