/* file "NavigationQueryStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "NavigationQueryStateJSON.h"

#include "NavigationQueryStateJSON.h"


NavigationQueryStateJSON::TypeNavigationCommandKind NavigationQueryStateJSON::stringToNavigationCommandKind(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            if (strcmp(&(chars[1]), "ancel") == 0)
                return NavigationCommandKind_Cancel;
            break;
        case 'N':
            if (strcmp(&(chars[1]), "otUnderstood") == 0)
                return NavigationCommandKind_NotUnderstood;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "tart") == 0)
                return NavigationCommandKind_Start;
            break;
        default:
            break;
      }
    throw("The value for field `NavigationCommandKind' is not one of the legal values.");
  }

const char *NavigationQueryStateJSON::stringFromNavigationCommandKind(TypeNavigationCommandKind the_enum)
  {
    switch (the_enum)
      {
        case NavigationCommandKind_Start:
            return "Start";
        case NavigationCommandKind_NotUnderstood:
            return "NotUnderstood";
        case NavigationCommandKind_Cancel:
            return "Cancel";
        default:
            assert(false);
            return NULL;
      }
  }

NavigationQueryStateJSON::NavigationQueryStateJSON(const NavigationQueryStateJSON &)
  {
    assert(false);
  }

NavigationQueryStateJSON &NavigationQueryStateJSON::operator=(const NavigationQueryStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void NavigationQueryStateJSON::fromJSONNavigationCommandKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field NavigationCommandKind of NavigationQueryStateJSON is not a string.");
    TypeNavigationCommandKind the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "ancel") == 0)
                  {
                    the_enum = NavigationCommandKind_Cancel;
                    goto enum_is_done;
                  }
            break;
        case 'N':
            if (strcmp(&(json_string->getData()[1]), "otUnderstood") == 0)
                  {
                    the_enum = NavigationCommandKind_NotUnderstood;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "tart") == 0)
                  {
                    the_enum = NavigationCommandKind_Start;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field NavigationCommandKind of NavigationQueryStateJSON is not one of the legal strings.");
  enum_is_done:;
    setNavigationCommandKind(the_enum);
  }

NavigationQueryStateJSON::NavigationQueryStateJSON(void) :
        flagHasNavigationCommandKind(false)
  {
    extraIndex = create_string_index();
  }

NavigationQueryStateJSON::~NavigationQueryStateJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool NavigationQueryStateJSON::hasNavigationCommandKind(void) const
  {
    return flagHasNavigationCommandKind;
  }

NavigationQueryStateJSON::TypeNavigationCommandKind NavigationQueryStateJSON::getNavigationCommandKind(void)
  {
    assert(flagHasNavigationCommandKind);
    return storeNavigationCommandKind;
  }

const NavigationQueryStateJSON::TypeNavigationCommandKind NavigationQueryStateJSON::getNavigationCommandKind(void) const
  {
    assert(flagHasNavigationCommandKind);
    return storeNavigationCommandKind;
  }

const char *NavigationQueryStateJSON::getNavigationCommandKindAsChars(void) const
  {
    return stringFromNavigationCommandKind(getNavigationCommandKind());
  }

std::string NavigationQueryStateJSON::getNavigationCommandKindAsString(void) const
  {
    return stringFromNavigationCommandKind(getNavigationCommandKind());
  }

NavigationQueryStateJSON *NavigationQueryStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    NavigationQueryStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<NavigationQueryStateJSON>, NavigationQueryStateJSON *, bool> generator("Type NavigationQueryState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
