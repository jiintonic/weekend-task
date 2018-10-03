/* file "TipCalculatorQueryStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "TipCalculatorQueryStateJSON.h"

#include "TipCalculatorQueryStateJSON.h"


TipCalculatorQueryStateJSON::TypeTipCalculatorCommandKind TipCalculatorQueryStateJSON::stringToTipCalculatorCommandKind(const char *chars)
  {
    if (strncmp(chars, "TipCalculator", 13) == 0)
      {
        switch ((unsigned char)(chars[13]))
          {
            case 'C':
                if (strcmp(&(chars[14]), "ancelInformationNugget") == 0)
                    return TipCalculatorCommandKind_TipCalculatorCancelInformationNugget;
                break;
            case 'S':
                if (strcmp(&(chars[14]), "howResultsCommand") == 0)
                    return TipCalculatorCommandKind_TipCalculatorShowResultsCommand;
                break;
            default:
                break;
          }
      }
    throw("The value for field `TipCalculatorCommandKind' is not one of the legal values.");
  }

const char *TipCalculatorQueryStateJSON::stringFromTipCalculatorCommandKind(TypeTipCalculatorCommandKind the_enum)
  {
    switch (the_enum)
      {
        case TipCalculatorCommandKind_TipCalculatorShowResultsCommand:
            return "TipCalculatorShowResultsCommand";
        case TipCalculatorCommandKind_TipCalculatorCancelInformationNugget:
            return "TipCalculatorCancelInformationNugget";
        default:
            assert(false);
            return NULL;
      }
  }

TipCalculatorQueryStateJSON::TipCalculatorQueryStateJSON(const TipCalculatorQueryStateJSON &)
  {
    assert(false);
  }

TipCalculatorQueryStateJSON &TipCalculatorQueryStateJSON::operator=(const TipCalculatorQueryStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void TipCalculatorQueryStateJSON::fromJSONTipCalculatorCommandKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TipCalculatorCommandKind of TipCalculatorQueryStateJSON is not a string.");
    TypeTipCalculatorCommandKind the_enum;
    if (strncmp(json_string->getData(), "TipCalculator", 13) == 0)
      {
        switch ((unsigned char)(json_string->getData()[13]))
          {
            case 'C':
                if (strcmp(&(json_string->getData()[14]), "ancelInformationNugget") == 0)
                      {
                        the_enum = TipCalculatorCommandKind_TipCalculatorCancelInformationNugget;
                        goto enum_is_done;
                      }
                break;
            case 'S':
                if (strcmp(&(json_string->getData()[14]), "howResultsCommand") == 0)
                      {
                        the_enum = TipCalculatorCommandKind_TipCalculatorShowResultsCommand;
                        goto enum_is_done;
                      }
                break;
            default:
                break;
          }
      }
    throw("The value for field TipCalculatorCommandKind of TipCalculatorQueryStateJSON is not one of the legal strings.");
  enum_is_done:;
    setTipCalculatorCommandKind(the_enum);
  }

void TipCalculatorQueryStateJSON::fromJSONTipCalculatorInputData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TipCalculatorInputDataJSON *convert_classy = TipCalculatorInputDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTipCalculatorInputData(convert_classy);
    convert_classy->remove_reference();
  }

TipCalculatorQueryStateJSON::TipCalculatorQueryStateJSON(void) :
        flagHasTipCalculatorCommandKind(false),
        flagHasTipCalculatorInputData(false)
  {
    extraIndex = create_string_index();
  }

TipCalculatorQueryStateJSON::~TipCalculatorQueryStateJSON(void)
  {
    if (flagHasTipCalculatorInputData)
      {
        storeTipCalculatorInputData->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool TipCalculatorQueryStateJSON::hasTipCalculatorCommandKind(void) const
  {
    return flagHasTipCalculatorCommandKind;
  }

TipCalculatorQueryStateJSON::TypeTipCalculatorCommandKind TipCalculatorQueryStateJSON::getTipCalculatorCommandKind(void)
  {
    assert(flagHasTipCalculatorCommandKind);
    return storeTipCalculatorCommandKind;
  }

const TipCalculatorQueryStateJSON::TypeTipCalculatorCommandKind TipCalculatorQueryStateJSON::getTipCalculatorCommandKind(void) const
  {
    assert(flagHasTipCalculatorCommandKind);
    return storeTipCalculatorCommandKind;
  }

const char *TipCalculatorQueryStateJSON::getTipCalculatorCommandKindAsChars(void) const
  {
    return stringFromTipCalculatorCommandKind(getTipCalculatorCommandKind());
  }

std::string TipCalculatorQueryStateJSON::getTipCalculatorCommandKindAsString(void) const
  {
    return stringFromTipCalculatorCommandKind(getTipCalculatorCommandKind());
  }

bool TipCalculatorQueryStateJSON::hasTipCalculatorInputData(void) const
  {
    return flagHasTipCalculatorInputData;
  }

TipCalculatorInputDataJSON * TipCalculatorQueryStateJSON::getTipCalculatorInputData(void)
  {
    assert(flagHasTipCalculatorInputData);
    return storeTipCalculatorInputData;
  }

const TipCalculatorInputDataJSON * TipCalculatorQueryStateJSON::getTipCalculatorInputData(void) const
  {
    assert(flagHasTipCalculatorInputData);
    return storeTipCalculatorInputData;
  }

TipCalculatorQueryStateJSON *TipCalculatorQueryStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TipCalculatorQueryStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TipCalculatorQueryStateJSON>, TipCalculatorQueryStateJSON *, bool> generator("Type TipCalculatorQueryState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
