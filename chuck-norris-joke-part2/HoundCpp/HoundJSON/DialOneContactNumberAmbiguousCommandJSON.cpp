/* file "DialOneContactNumberAmbiguousCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DialOneContactNumberAmbiguousCommandJSON.h"

#include "DialOneContactNumberAmbiguousCommandJSON.h"


DialOneContactNumberAmbiguousCommandJSON::DialOneContactNumberAmbiguousCommandJSON(const DialOneContactNumberAmbiguousCommandJSON &)
  {
    assert(false);
  }

DialOneContactNumberAmbiguousCommandJSON &DialOneContactNumberAmbiguousCommandJSON::operator=(const DialOneContactNumberAmbiguousCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *DialOneContactNumberAmbiguousCommandJSON::extraChoicesToJSON(void) const
  {
    JSONValueHandler handler_Choices;
    storeChoices->write_as_json(&handler_Choices);
    handler_Choices.result->add_reference();
    return handler_Choices.result;
  }

void DialOneContactNumberAmbiguousCommandJSON::fromJSONChoices(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    ContactNumberChoicesJSON *convert_classy = ContactNumberChoicesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setChoices(convert_classy);
    convert_classy->remove_reference();
  }

DialOneContactNumberAmbiguousCommandJSON::DialOneContactNumberAmbiguousCommandJSON(void) :
        flagHasChoices(false)
  {
    extraIndex = create_string_index();
  }

DialOneContactNumberAmbiguousCommandJSON::~DialOneContactNumberAmbiguousCommandJSON(void)
  {
    if (flagHasChoices)
      {
        storeChoices->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *DialOneContactNumberAmbiguousCommandJSON::getDisambiguateCommandKind(void) const
  {
    return "DialOneContactNumberAmbiguous";
  }

bool DialOneContactNumberAmbiguousCommandJSON::hasChoices(void) const
  {
    return flagHasChoices;
  }

ContactNumberChoicesJSON * DialOneContactNumberAmbiguousCommandJSON::getChoices(void)
  {
    assert(flagHasChoices);
    return storeChoices;
  }

const ContactNumberChoicesJSON * DialOneContactNumberAmbiguousCommandJSON::getChoices(void) const
  {
    assert(flagHasChoices);
    return storeChoices;
  }

DialOneContactNumberAmbiguousCommandJSON *DialOneContactNumberAmbiguousCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DialOneContactNumberAmbiguousCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DialOneContactNumberAmbiguousCommandJSON>, DialOneContactNumberAmbiguousCommandJSON *, bool> generator("Type DialOneContactNumberAmbiguousCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
