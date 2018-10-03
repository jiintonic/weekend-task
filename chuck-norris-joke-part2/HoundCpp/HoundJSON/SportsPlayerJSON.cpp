/* file "SportsPlayerJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsPlayerJSON.h"

#include "SportsPlayerJSON.h"


SportsPlayerJSON::TypeThrowHand::TypeThrowHand(void)
  {
  }

SportsPlayerJSON::TypeThrowHand::TypeThrowHand(const TypeThrowHand &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsPlayerJSON::TypeThrowHand::TypeThrowHand(TypeThrowHandKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsPlayerJSON::TypeThrowHand::operator==(const TypeThrowHand &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsPlayerJSON::TypeThrowHand::operator!=(const TypeThrowHand &other) const
  {
    return !(operator==(other));
  }

bool SportsPlayerJSON::TypeThrowHand::operator<(const TypeThrowHand &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsPlayerJSON::TypeThrowHand::operator>(const TypeThrowHand &other) const
  {
    return other.operator<(*this);
  }

bool SportsPlayerJSON::TypeThrowHand::operator>=(const TypeThrowHand &other) const
  {
    return !(operator<(other));
  }

bool SportsPlayerJSON::TypeThrowHand::operator<=(const TypeThrowHand &other) const
  {
    return !(other.operator<(*this));
  }

SportsPlayerJSON::TypeThrowHandKnownValues SportsPlayerJSON::stringToThrowHand(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'B':
            if (strcmp(&(chars[1]), "oth") == 0)
                return ThrowHand_Both;
            break;
        case 'L':
            if (strcmp(&(chars[1]), "eft") == 0)
                return ThrowHand_Left;
            break;
        case 'R':
            if (strcmp(&(chars[1]), "ight") == 0)
                return ThrowHand_Right;
            break;
        default:
            break;
      }
    return ThrowHand__none;
  }

const char *SportsPlayerJSON::stringFromThrowHand(TypeThrowHandKnownValues the_enum)
  {
    switch (the_enum)
      {
        case ThrowHand_Left:
            return "Left";
        case ThrowHand_Right:
            return "Right";
        case ThrowHand_Both:
            return "Both";
        default:
            assert(false);
            return NULL;
      }
  }

SportsPlayerJSON::TypeBatHand::TypeBatHand(void)
  {
  }

SportsPlayerJSON::TypeBatHand::TypeBatHand(const TypeBatHand &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsPlayerJSON::TypeBatHand::TypeBatHand(TypeBatHandKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsPlayerJSON::TypeBatHand::operator==(const TypeBatHand &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsPlayerJSON::TypeBatHand::operator!=(const TypeBatHand &other) const
  {
    return !(operator==(other));
  }

bool SportsPlayerJSON::TypeBatHand::operator<(const TypeBatHand &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsPlayerJSON::TypeBatHand::operator>(const TypeBatHand &other) const
  {
    return other.operator<(*this);
  }

bool SportsPlayerJSON::TypeBatHand::operator>=(const TypeBatHand &other) const
  {
    return !(operator<(other));
  }

bool SportsPlayerJSON::TypeBatHand::operator<=(const TypeBatHand &other) const
  {
    return !(other.operator<(*this));
  }

SportsPlayerJSON::TypeBatHandKnownValues SportsPlayerJSON::stringToBatHand(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'B':
            if (strcmp(&(chars[1]), "oth") == 0)
                return BatHand_Both;
            break;
        case 'L':
            if (strcmp(&(chars[1]), "eft") == 0)
                return BatHand_Left;
            break;
        case 'R':
            if (strcmp(&(chars[1]), "ight") == 0)
                return BatHand_Right;
            break;
        default:
            break;
      }
    return BatHand__none;
  }

const char *SportsPlayerJSON::stringFromBatHand(TypeBatHandKnownValues the_enum)
  {
    switch (the_enum)
      {
        case BatHand_Left:
            return "Left";
        case BatHand_Right:
            return "Right";
        case BatHand_Both:
            return "Both";
        default:
            assert(false);
            return NULL;
      }
  }

SportsPlayerJSON::TypeExperienceCollege::TypeExperienceCollege(void)
  {
  }

SportsPlayerJSON::TypeExperienceCollege::TypeExperienceCollege(const TypeExperienceCollege &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsPlayerJSON::TypeExperienceCollege::TypeExperienceCollege(TypeExperienceCollegeKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsPlayerJSON::TypeExperienceCollege::operator==(const TypeExperienceCollege &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsPlayerJSON::TypeExperienceCollege::operator!=(const TypeExperienceCollege &other) const
  {
    return !(operator==(other));
  }

bool SportsPlayerJSON::TypeExperienceCollege::operator<(const TypeExperienceCollege &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsPlayerJSON::TypeExperienceCollege::operator>(const TypeExperienceCollege &other) const
  {
    return other.operator<(*this);
  }

bool SportsPlayerJSON::TypeExperienceCollege::operator>=(const TypeExperienceCollege &other) const
  {
    return !(operator<(other));
  }

bool SportsPlayerJSON::TypeExperienceCollege::operator<=(const TypeExperienceCollege &other) const
  {
    return !(other.operator<(*this));
  }

SportsPlayerJSON::TypeExperienceCollegeKnownValues SportsPlayerJSON::stringToExperienceCollege(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'F':
            if (strcmp(&(chars[1]), "reshman") == 0)
                return ExperienceCollege_Freshman;
            break;
        case 'G':
            if (strcmp(&(chars[1]), "raduateStudent") == 0)
                return ExperienceCollege_GraduateStudent;
            break;
        case 'J':
            if (strcmp(&(chars[1]), "unior") == 0)
                return ExperienceCollege_Junior;
            break;
        case 'S':
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    if (strcmp(&(chars[2]), "nior") == 0)
                        return ExperienceCollege_Senior;
                    break;
                case 'o':
                    if (strcmp(&(chars[2]), "phomore") == 0)
                        return ExperienceCollege_Sophomore;
                    break;
                default:
                    break;
              }
            break;
        default:
            break;
      }
    return ExperienceCollege__none;
  }

const char *SportsPlayerJSON::stringFromExperienceCollege(TypeExperienceCollegeKnownValues the_enum)
  {
    switch (the_enum)
      {
        case ExperienceCollege_Freshman:
            return "Freshman";
        case ExperienceCollege_Sophomore:
            return "Sophomore";
        case ExperienceCollege_Junior:
            return "Junior";
        case ExperienceCollege_Senior:
            return "Senior";
        case ExperienceCollege_GraduateStudent:
            return "GraduateStudent";
        default:
            assert(false);
            return NULL;
      }
  }

SportsPlayerJSON::SportsPlayerJSON(const SportsPlayerJSON &)
  {
    assert(false);
  }

SportsPlayerJSON &SportsPlayerJSON::operator=(const SportsPlayerJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsPlayerJSON::fromJSONFirstName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field FirstName of SportsPlayerJSON is not a string.");
    setFirstName(std::string(json_string->getData()));
  }

void SportsPlayerJSON::fromJSONLastName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LastName of SportsPlayerJSON is not a string.");
    setLastName(std::string(json_string->getData()));
  }

void SportsPlayerJSON::fromJSONPreferredName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PreferredName of SportsPlayerJSON is not a string.");
    setPreferredName(std::string(json_string->getData()));
  }

void SportsPlayerJSON::fromJSONFullName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field FullName of SportsPlayerJSON is not a string.");
    setFullName(std::string(json_string->getData()));
  }

void SportsPlayerJSON::fromJSONTeam(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsTeamNewJSON *convert_classy = SportsTeamNewJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTeam(convert_classy);
    convert_classy->remove_reference();
  }

void SportsPlayerJSON::fromJSONID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ID of SportsPlayerJSON is not a string.");
    setID(std::string(json_string->getData()));
  }

void SportsPlayerJSON::fromJSONJerseyNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field JerseyNumber of SportsPlayerJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field JerseyNumber of SportsPlayerJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setJerseyNumber(extracted_integer);
  }

void SportsPlayerJSON::fromJSONWeightInPounds(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field WeightInPounds of SportsPlayerJSON is not a number.");
          }
      }
    setWeightInPoundsText(the_rational_text);
  }

void SportsPlayerJSON::fromJSONHeightInInches(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field HeightInInches of SportsPlayerJSON is not a number.");
          }
      }
    setHeightInInchesText(the_rational_text);
  }

void SportsPlayerJSON::fromJSONPosition(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsPlayerPositionJSON *convert_classy = SportsPlayerPositionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPosition(convert_classy);
    convert_classy->remove_reference();
  }

void SportsPlayerJSON::fromJSONStatus(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsPlayerStatusJSON *convert_classy = SportsPlayerStatusJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStatus(convert_classy);
    convert_classy->remove_reference();
  }

void SportsPlayerJSON::fromJSONThrowHand(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ThrowHand of SportsPlayerJSON is not a string.");
    TypeThrowHand the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'B':
            if (strcmp(&(json_string->getData()[1]), "oth") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = ThrowHand_Both;
                    goto open_enum_is_done;
                  }
            break;
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "eft") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = ThrowHand_Left;
                    goto open_enum_is_done;
                  }
            break;
        case 'R':
            if (strcmp(&(json_string->getData()[1]), "ight") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = ThrowHand_Right;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setThrowHand(the_open_enum);
  }

void SportsPlayerJSON::fromJSONBatHand(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field BatHand of SportsPlayerJSON is not a string.");
    TypeBatHand the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'B':
            if (strcmp(&(json_string->getData()[1]), "oth") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = BatHand_Both;
                    goto open_enum_is_done;
                  }
            break;
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "eft") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = BatHand_Left;
                    goto open_enum_is_done;
                  }
            break;
        case 'R':
            if (strcmp(&(json_string->getData()[1]), "ight") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = BatHand_Right;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setBatHand(the_open_enum);
  }

void SportsPlayerJSON::fromJSONBirthDate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setBirthDate(convert_classy);
    convert_classy->remove_reference();
  }

void SportsPlayerJSON::fromJSONBirthCountry(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field BirthCountry of SportsPlayerJSON is not a string.");
    setBirthCountry(std::string(json_string->getData()));
  }

void SportsPlayerJSON::fromJSONBirthState(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field BirthState of SportsPlayerJSON is not a string.");
    setBirthState(std::string(json_string->getData()));
  }

void SportsPlayerJSON::fromJSONBirthCity(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field BirthCity of SportsPlayerJSON is not a string.");
    setBirthCity(std::string(json_string->getData()));
  }

void SportsPlayerJSON::fromJSONCollege(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field College of SportsPlayerJSON is not a string.");
    setCollege(std::string(json_string->getData()));
  }

void SportsPlayerJSON::fromJSONHighSchool(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field HighSchool of SportsPlayerJSON is not a string.");
    setHighSchool(std::string(json_string->getData()));
  }

void SportsPlayerJSON::fromJSONExperienceInYears(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ExperienceInYears of SportsPlayerJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ExperienceInYears of SportsPlayerJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setExperienceInYears(extracted_integer);
  }

void SportsPlayerJSON::fromJSONExperienceCollege(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ExperienceCollege of SportsPlayerJSON is not a string.");
    TypeExperienceCollege the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'F':
            if (strcmp(&(json_string->getData()[1]), "reshman") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = ExperienceCollege_Freshman;
                    goto open_enum_is_done;
                  }
            break;
        case 'G':
            if (strcmp(&(json_string->getData()[1]), "raduateStudent") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = ExperienceCollege_GraduateStudent;
                    goto open_enum_is_done;
                  }
            break;
        case 'J':
            if (strcmp(&(json_string->getData()[1]), "unior") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = ExperienceCollege_Junior;
                    goto open_enum_is_done;
                  }
            break;
        case 'S':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "nior") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = ExperienceCollege_Senior;
                            goto open_enum_is_done;
                          }
                    break;
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "phomore") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = ExperienceCollege_Sophomore;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setExperienceCollege(the_open_enum);
  }

void SportsPlayerJSON::fromJSONImages(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Images of SportsPlayerJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< SportsPlayerImageJSON * > vector_Images1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsPlayerImageJSON *convert_classy = SportsPlayerImageJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Images1[num1] = convert_classy;
      }
    initImages();
    for (size_t num2 = 0; num2 < vector_Images1.size(); ++num2)
        appendImages(vector_Images1[num2]);
    for (size_t num1 = 0; num1 < vector_Images1.size(); ++num1)
      {
        vector_Images1[num1]->remove_reference();
      }
  }

SportsPlayerJSON::SportsPlayerJSON(void) :
        flagHasFirstName(false),
        flagHasLastName(false),
        flagHasPreferredName(false),
        flagHasFullName(false),
        flagHasTeam(false),
        flagHasID(false),
        flagHasJerseyNumber(false),
        flagHasWeightInPounds(false),
        flagHasHeightInInches(false),
        flagHasPosition(false),
        flagHasStatus(false),
        flagHasThrowHand(false),
        flagHasBatHand(false),
        flagHasBirthDate(false),
        flagHasBirthCountry(false),
        flagHasBirthState(false),
        flagHasBirthCity(false),
        flagHasCollege(false),
        flagHasHighSchool(false),
        flagHasExperienceInYears(false),
        flagHasExperienceCollege(false),
        flagHasImages(false)
  {
    extraIndex = create_string_index();
  }

SportsPlayerJSON::~SportsPlayerJSON(void)
  {
    if (flagHasTeam)
      {
        storeTeam->remove_reference();
      }
    if (flagHasPosition)
      {
        storePosition->remove_reference();
      }
    if (flagHasStatus)
      {
        storeStatus->remove_reference();
      }
    if (flagHasBirthDate)
      {
        storeBirthDate->remove_reference();
      }
    if (flagHasImages)
      {
        for (size_t num4 = 0; num4 < storeImages.size(); ++num4)
          {
            storeImages[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsPlayerJSON::hasFirstName(void) const
  {
    return flagHasFirstName;
  }

std::string SportsPlayerJSON::getFirstName(void)
  {
    assert(flagHasFirstName);
    return storeFirstName;
  }

const std::string SportsPlayerJSON::getFirstName(void) const
  {
    assert(flagHasFirstName);
    return storeFirstName;
  }

bool SportsPlayerJSON::hasLastName(void) const
  {
    return flagHasLastName;
  }

std::string SportsPlayerJSON::getLastName(void)
  {
    assert(flagHasLastName);
    return storeLastName;
  }

const std::string SportsPlayerJSON::getLastName(void) const
  {
    assert(flagHasLastName);
    return storeLastName;
  }

bool SportsPlayerJSON::hasPreferredName(void) const
  {
    return flagHasPreferredName;
  }

std::string SportsPlayerJSON::getPreferredName(void)
  {
    assert(flagHasPreferredName);
    return storePreferredName;
  }

const std::string SportsPlayerJSON::getPreferredName(void) const
  {
    assert(flagHasPreferredName);
    return storePreferredName;
  }

bool SportsPlayerJSON::hasFullName(void) const
  {
    return flagHasFullName;
  }

std::string SportsPlayerJSON::getFullName(void)
  {
    assert(flagHasFullName);
    return storeFullName;
  }

const std::string SportsPlayerJSON::getFullName(void) const
  {
    assert(flagHasFullName);
    return storeFullName;
  }

bool SportsPlayerJSON::hasTeam(void) const
  {
    return flagHasTeam;
  }

SportsTeamNewJSON * SportsPlayerJSON::getTeam(void)
  {
    assert(flagHasTeam);
    return storeTeam;
  }

const SportsTeamNewJSON * SportsPlayerJSON::getTeam(void) const
  {
    assert(flagHasTeam);
    return storeTeam;
  }

bool SportsPlayerJSON::hasID(void) const
  {
    return flagHasID;
  }

std::string SportsPlayerJSON::getID(void)
  {
    assert(flagHasID);
    return storeID;
  }

const std::string SportsPlayerJSON::getID(void) const
  {
    assert(flagHasID);
    return storeID;
  }

bool SportsPlayerJSON::hasJerseyNumber(void) const
  {
    return flagHasJerseyNumber;
  }

OInteger SportsPlayerJSON::getJerseyNumber(void)
  {
    assert(flagHasJerseyNumber);
    return storeJerseyNumber;
  }

const OInteger SportsPlayerJSON::getJerseyNumber(void) const
  {
    assert(flagHasJerseyNumber);
    return storeJerseyNumber;
  }

bool SportsPlayerJSON::hasWeightInPounds(void) const
  {
    return flagHasWeightInPounds;
  }

double SportsPlayerJSON::getWeightInPounds(void)
  {
    assert(flagHasWeightInPounds);
    if (textStoreWeightInPounds != "")
      {
        return atof(textStoreWeightInPounds.c_str());
      }
    return storeWeightInPounds;
  }

const double SportsPlayerJSON::getWeightInPounds(void) const
  {
    assert(flagHasWeightInPounds);
    if (textStoreWeightInPounds != "")
      {
        return atof(textStoreWeightInPounds.c_str());
      }
    return storeWeightInPounds;
  }

std::string SportsPlayerJSON::getWeightInPoundsAsText(void) const
  {
    assert(flagHasWeightInPounds);
    if (textStoreWeightInPounds == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeWeightInPounds);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreWeightInPounds);
      }
  }

bool SportsPlayerJSON::hasHeightInInches(void) const
  {
    return flagHasHeightInInches;
  }

double SportsPlayerJSON::getHeightInInches(void)
  {
    assert(flagHasHeightInInches);
    if (textStoreHeightInInches != "")
      {
        return atof(textStoreHeightInInches.c_str());
      }
    return storeHeightInInches;
  }

const double SportsPlayerJSON::getHeightInInches(void) const
  {
    assert(flagHasHeightInInches);
    if (textStoreHeightInInches != "")
      {
        return atof(textStoreHeightInInches.c_str());
      }
    return storeHeightInInches;
  }

std::string SportsPlayerJSON::getHeightInInchesAsText(void) const
  {
    assert(flagHasHeightInInches);
    if (textStoreHeightInInches == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeHeightInInches);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreHeightInInches);
      }
  }

bool SportsPlayerJSON::hasPosition(void) const
  {
    return flagHasPosition;
  }

SportsPlayerPositionJSON * SportsPlayerJSON::getPosition(void)
  {
    assert(flagHasPosition);
    return storePosition;
  }

const SportsPlayerPositionJSON * SportsPlayerJSON::getPosition(void) const
  {
    assert(flagHasPosition);
    return storePosition;
  }

SportsPlayerPositionJSON::TypeValue SportsPlayerJSON::getPositionValue(void)
  {
    return getPosition()->getValue();
  }

const SportsPlayerPositionJSON::TypeValue SportsPlayerJSON::getPositionValue(void) const
  {
    return getPosition()->getValue();
  }

const char *SportsPlayerJSON::getPositionAsChars(void) const
  {
    return getPosition()->getValueAsChars();
  }

std::string SportsPlayerJSON::getPositionAsString(void) const
  {
    return getPosition()->getValueAsString();
  }

bool SportsPlayerJSON::hasStatus(void) const
  {
    return flagHasStatus;
  }

SportsPlayerStatusJSON * SportsPlayerJSON::getStatus(void)
  {
    assert(flagHasStatus);
    return storeStatus;
  }

const SportsPlayerStatusJSON * SportsPlayerJSON::getStatus(void) const
  {
    assert(flagHasStatus);
    return storeStatus;
  }

SportsPlayerStatusJSON::TypeValue SportsPlayerJSON::getStatusValue(void)
  {
    return getStatus()->getValue();
  }

const SportsPlayerStatusJSON::TypeValue SportsPlayerJSON::getStatusValue(void) const
  {
    return getStatus()->getValue();
  }

const char *SportsPlayerJSON::getStatusAsChars(void) const
  {
    return getStatus()->getValueAsChars();
  }

std::string SportsPlayerJSON::getStatusAsString(void) const
  {
    return getStatus()->getValueAsString();
  }

bool SportsPlayerJSON::hasThrowHand(void) const
  {
    return flagHasThrowHand;
  }

SportsPlayerJSON::TypeThrowHand SportsPlayerJSON::getThrowHand(void)
  {
    assert(flagHasThrowHand);
    return storeThrowHand;
  }

const SportsPlayerJSON::TypeThrowHand SportsPlayerJSON::getThrowHand(void) const
  {
    assert(flagHasThrowHand);
    return storeThrowHand;
  }

const char *SportsPlayerJSON::getThrowHandAsChars(void) const
  {
    TypeThrowHand result = getThrowHand();
    if (result.in_known_list)
        return stringFromThrowHand(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsPlayerJSON::getThrowHandAsString(void) const
  {
    return getThrowHandAsChars();
  }

bool SportsPlayerJSON::hasBatHand(void) const
  {
    return flagHasBatHand;
  }

SportsPlayerJSON::TypeBatHand SportsPlayerJSON::getBatHand(void)
  {
    assert(flagHasBatHand);
    return storeBatHand;
  }

const SportsPlayerJSON::TypeBatHand SportsPlayerJSON::getBatHand(void) const
  {
    assert(flagHasBatHand);
    return storeBatHand;
  }

const char *SportsPlayerJSON::getBatHandAsChars(void) const
  {
    TypeBatHand result = getBatHand();
    if (result.in_known_list)
        return stringFromBatHand(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsPlayerJSON::getBatHandAsString(void) const
  {
    return getBatHandAsChars();
  }

bool SportsPlayerJSON::hasBirthDate(void) const
  {
    return flagHasBirthDate;
  }

DateAndOrTimeJSON * SportsPlayerJSON::getBirthDate(void)
  {
    assert(flagHasBirthDate);
    return storeBirthDate;
  }

const DateAndOrTimeJSON * SportsPlayerJSON::getBirthDate(void) const
  {
    assert(flagHasBirthDate);
    return storeBirthDate;
  }

bool SportsPlayerJSON::hasBirthCountry(void) const
  {
    return flagHasBirthCountry;
  }

std::string SportsPlayerJSON::getBirthCountry(void)
  {
    assert(flagHasBirthCountry);
    return storeBirthCountry;
  }

const std::string SportsPlayerJSON::getBirthCountry(void) const
  {
    assert(flagHasBirthCountry);
    return storeBirthCountry;
  }

bool SportsPlayerJSON::hasBirthState(void) const
  {
    return flagHasBirthState;
  }

std::string SportsPlayerJSON::getBirthState(void)
  {
    assert(flagHasBirthState);
    return storeBirthState;
  }

const std::string SportsPlayerJSON::getBirthState(void) const
  {
    assert(flagHasBirthState);
    return storeBirthState;
  }

bool SportsPlayerJSON::hasBirthCity(void) const
  {
    return flagHasBirthCity;
  }

std::string SportsPlayerJSON::getBirthCity(void)
  {
    assert(flagHasBirthCity);
    return storeBirthCity;
  }

const std::string SportsPlayerJSON::getBirthCity(void) const
  {
    assert(flagHasBirthCity);
    return storeBirthCity;
  }

bool SportsPlayerJSON::hasCollege(void) const
  {
    return flagHasCollege;
  }

std::string SportsPlayerJSON::getCollege(void)
  {
    assert(flagHasCollege);
    return storeCollege;
  }

const std::string SportsPlayerJSON::getCollege(void) const
  {
    assert(flagHasCollege);
    return storeCollege;
  }

bool SportsPlayerJSON::hasHighSchool(void) const
  {
    return flagHasHighSchool;
  }

std::string SportsPlayerJSON::getHighSchool(void)
  {
    assert(flagHasHighSchool);
    return storeHighSchool;
  }

const std::string SportsPlayerJSON::getHighSchool(void) const
  {
    assert(flagHasHighSchool);
    return storeHighSchool;
  }

bool SportsPlayerJSON::hasExperienceInYears(void) const
  {
    return flagHasExperienceInYears;
  }

OInteger SportsPlayerJSON::getExperienceInYears(void)
  {
    assert(flagHasExperienceInYears);
    return storeExperienceInYears;
  }

const OInteger SportsPlayerJSON::getExperienceInYears(void) const
  {
    assert(flagHasExperienceInYears);
    return storeExperienceInYears;
  }

bool SportsPlayerJSON::hasExperienceCollege(void) const
  {
    return flagHasExperienceCollege;
  }

SportsPlayerJSON::TypeExperienceCollege SportsPlayerJSON::getExperienceCollege(void)
  {
    assert(flagHasExperienceCollege);
    return storeExperienceCollege;
  }

const SportsPlayerJSON::TypeExperienceCollege SportsPlayerJSON::getExperienceCollege(void) const
  {
    assert(flagHasExperienceCollege);
    return storeExperienceCollege;
  }

const char *SportsPlayerJSON::getExperienceCollegeAsChars(void) const
  {
    TypeExperienceCollege result = getExperienceCollege();
    if (result.in_known_list)
        return stringFromExperienceCollege(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsPlayerJSON::getExperienceCollegeAsString(void) const
  {
    return getExperienceCollegeAsChars();
  }

bool SportsPlayerJSON::hasImages(void) const
  {
    return flagHasImages;
  }

size_t SportsPlayerJSON::countOfImages(void) const
  {
    assert(flagHasImages);
    return storeImages.size();
  }

SportsPlayerImageJSON * SportsPlayerJSON::elementOfImages(size_t element_num)
  {
    assert(flagHasImages);
    return storeImages[element_num];
  }

const SportsPlayerImageJSON * SportsPlayerJSON::elementOfImages(size_t element_num) const
  {
    assert(flagHasImages);
    return storeImages[element_num];
  }

std::vector< SportsPlayerImageJSON * > SportsPlayerJSON::getImages(void)
  {
    assert(flagHasImages);
    return storeImages;
  }

const std::vector< SportsPlayerImageJSON * > SportsPlayerJSON::getImages(void) const
  {
    assert(flagHasImages);
    return storeImages;
  }

char SportsPlayerJSON::Generator::lowerBoundJerseyNumber[] = "0";
char SportsPlayerJSON::Generator::lowerBoundExperienceInYears[] = "0";
SportsPlayerJSON *SportsPlayerJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsPlayerJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsPlayerJSON>, SportsPlayerJSON *, bool> generator("Type SportsPlayer", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
