/* file "MusicCommandNativeDataJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MusicCommandNativeDataJSON.h"

#include "MusicCommandNativeDataJSON.h"
#include "MusicSearchCommandNativeDataJSON.h"
#include "MusicChartsCommandNativeDataJSON.h"


MusicCommandNativeDataJSON::TypeEntitySpecificationType::TypeEntitySpecificationType(void)
  {
  }

MusicCommandNativeDataJSON::TypeEntitySpecificationType::TypeEntitySpecificationType(const TypeEntitySpecificationType &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

MusicCommandNativeDataJSON::TypeEntitySpecificationType::TypeEntitySpecificationType(TypeEntitySpecificationTypeKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool MusicCommandNativeDataJSON::TypeEntitySpecificationType::operator==(const TypeEntitySpecificationType &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool MusicCommandNativeDataJSON::TypeEntitySpecificationType::operator!=(const TypeEntitySpecificationType &other) const
  {
    return !(operator==(other));
  }

bool MusicCommandNativeDataJSON::TypeEntitySpecificationType::operator<(const TypeEntitySpecificationType &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool MusicCommandNativeDataJSON::TypeEntitySpecificationType::operator>(const TypeEntitySpecificationType &other) const
  {
    return other.operator<(*this);
  }

bool MusicCommandNativeDataJSON::TypeEntitySpecificationType::operator>=(const TypeEntitySpecificationType &other) const
  {
    return !(operator<(other));
  }

bool MusicCommandNativeDataJSON::TypeEntitySpecificationType::operator<=(const TypeEntitySpecificationType &other) const
  {
    return !(other.operator<(*this));
  }

MusicCommandNativeDataJSON::TypeEntitySpecificationTypeKnownValues MusicCommandNativeDataJSON::stringToEntitySpecificationType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'E':
            if (strcmp(&(chars[1]), "xplicit") == 0)
                return EntitySpecificationType_Explicit;
            break;
        case 'L':
            if (strcmp(&(chars[1]), "istPosition") == 0)
                return EntitySpecificationType_ListPosition;
            break;
        case 'R':
            if (strcmp(&(chars[1]), "elative") == 0)
                return EntitySpecificationType_Relative;
            break;
        case 'T':
            if (strcmp(&(chars[1]), "his") == 0)
                return EntitySpecificationType_This;
            break;
        default:
            break;
      }
    return EntitySpecificationType__none;
  }

const char *MusicCommandNativeDataJSON::stringFromEntitySpecificationType(TypeEntitySpecificationTypeKnownValues the_enum)
  {
    switch (the_enum)
      {
        case EntitySpecificationType_Explicit:
            return "Explicit";
        case EntitySpecificationType_This:
            return "This";
        case EntitySpecificationType_ListPosition:
            return "ListPosition";
        case EntitySpecificationType_Relative:
            return "Relative";
        default:
            assert(false);
            return NULL;
      }
  }

MusicCommandNativeDataJSON::TypeOrderToDisplay::TypeOrderToDisplay(void)
  {
  }

MusicCommandNativeDataJSON::TypeOrderToDisplay::TypeOrderToDisplay(const TypeOrderToDisplay &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

MusicCommandNativeDataJSON::TypeOrderToDisplay::TypeOrderToDisplay(TypeOrderToDisplayKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool MusicCommandNativeDataJSON::TypeOrderToDisplay::operator==(const TypeOrderToDisplay &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool MusicCommandNativeDataJSON::TypeOrderToDisplay::operator!=(const TypeOrderToDisplay &other) const
  {
    return !(operator==(other));
  }

bool MusicCommandNativeDataJSON::TypeOrderToDisplay::operator<(const TypeOrderToDisplay &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool MusicCommandNativeDataJSON::TypeOrderToDisplay::operator>(const TypeOrderToDisplay &other) const
  {
    return other.operator<(*this);
  }

bool MusicCommandNativeDataJSON::TypeOrderToDisplay::operator>=(const TypeOrderToDisplay &other) const
  {
    return !(operator<(other));
  }

bool MusicCommandNativeDataJSON::TypeOrderToDisplay::operator<=(const TypeOrderToDisplay &other) const
  {
    return !(other.operator<(*this));
  }

MusicCommandNativeDataJSON::TypeOrderToDisplayKnownValues MusicCommandNativeDataJSON::stringToOrderToDisplay(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            switch ((unsigned char)(chars[1]))
              {
                case 'l':
                    if (strcmp(&(chars[2]), "bum") == 0)
                        return OrderToDisplay_Album;
                    break;
                case 'r':
                    if (strcmp(&(chars[2]), "tist") == 0)
                        return OrderToDisplay_Artist;
                    break;
                default:
                    break;
              }
            break;
        case 'T':
            if (strcmp(&(chars[1]), "rack") == 0)
                return OrderToDisplay_Track;
            break;
        case 'V':
            if (strcmp(&(chars[1]), "ideo") == 0)
                return OrderToDisplay_Video;
            break;
        default:
            break;
      }
    return OrderToDisplay__none;
  }

const char *MusicCommandNativeDataJSON::stringFromOrderToDisplay(TypeOrderToDisplayKnownValues the_enum)
  {
    switch (the_enum)
      {
        case OrderToDisplay_Album:
            return "Album";
        case OrderToDisplay_Artist:
            return "Artist";
        case OrderToDisplay_Track:
            return "Track";
        case OrderToDisplay_Video:
            return "Video";
        default:
            assert(false);
            return NULL;
      }
  }

MusicCommandNativeDataJSON::MusicCommandNativeDataJSON(const MusicCommandNativeDataJSON &)
  {
    assert(false);
  }

MusicCommandNativeDataJSON &MusicCommandNativeDataJSON::operator=(const MusicCommandNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MusicCommandNativeDataJSON::fromJSONSearchParameters(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MusicSearchParametersJSON *convert_classy = MusicSearchParametersJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSearchParameters(convert_classy);
    convert_classy->remove_reference();
  }

void MusicCommandNativeDataJSON::fromJSONAlbumsLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AlbumsLabel of MusicCommandNativeDataJSON is not a string.");
    setAlbumsLabel(std::string(json_string->getData()));
  }

void MusicCommandNativeDataJSON::fromJSONAlbums(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Albums of MusicCommandNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< MusicAlbumJSON * > vector_Albums1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        MusicAlbumJSON *convert_classy = MusicAlbumJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Albums1[num1] = convert_classy;
      }
    initAlbums();
    for (size_t num8 = 0; num8 < vector_Albums1.size(); ++num8)
        appendAlbums(vector_Albums1[num8]);
    for (size_t num1 = 0; num1 < vector_Albums1.size(); ++num1)
      {
        vector_Albums1[num1]->remove_reference();
      }
  }

void MusicCommandNativeDataJSON::fromJSONArtistsLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ArtistsLabel of MusicCommandNativeDataJSON is not a string.");
    setArtistsLabel(std::string(json_string->getData()));
  }

void MusicCommandNativeDataJSON::fromJSONArtists(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Artists of MusicCommandNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< MusicArtistJSON * > vector_Artists1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        MusicArtistJSON *convert_classy = MusicArtistJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Artists1[num1] = convert_classy;
      }
    initArtists();
    for (size_t num9 = 0; num9 < vector_Artists1.size(); ++num9)
        appendArtists(vector_Artists1[num9]);
    for (size_t num1 = 0; num1 < vector_Artists1.size(); ++num1)
      {
        vector_Artists1[num1]->remove_reference();
      }
  }

void MusicCommandNativeDataJSON::fromJSONTracksLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TracksLabel of MusicCommandNativeDataJSON is not a string.");
    setTracksLabel(std::string(json_string->getData()));
  }

void MusicCommandNativeDataJSON::fromJSONTracks(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Tracks of MusicCommandNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< MusicTrackJSON * > vector_Tracks1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        MusicTrackJSON *convert_classy = MusicTrackJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Tracks1[num1] = convert_classy;
      }
    initTracks();
    for (size_t num10 = 0; num10 < vector_Tracks1.size(); ++num10)
        appendTracks(vector_Tracks1[num10]);
    for (size_t num1 = 0; num1 < vector_Tracks1.size(); ++num1)
      {
        vector_Tracks1[num1]->remove_reference();
      }
  }

void MusicCommandNativeDataJSON::fromJSONSupplementalTrackInfos(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field SupplementalTrackInfos of MusicCommandNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< MusicTrackSupplementalInfoJSON * > vector_SupplementalTrackInfos1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        MusicTrackSupplementalInfoJSON *convert_classy = MusicTrackSupplementalInfoJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_SupplementalTrackInfos1[num1] = convert_classy;
      }
    initSupplementalTrackInfos();
    for (size_t num11 = 0; num11 < vector_SupplementalTrackInfos1.size(); ++num11)
        appendSupplementalTrackInfos(vector_SupplementalTrackInfos1[num11]);
    for (size_t num1 = 0; num1 < vector_SupplementalTrackInfos1.size(); ++num1)
      {
        vector_SupplementalTrackInfos1[num1]->remove_reference();
      }
  }

void MusicCommandNativeDataJSON::fromJSONUserRequestedAutoPlay(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field UserRequestedAutoPlay of MusicCommandNativeDataJSON is not true for false.");
          }
      }
    setUserRequestedAutoPlay(the_bool);
  }

void MusicCommandNativeDataJSON::fromJSONUserRequestedAirplay(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field UserRequestedAirplay of MusicCommandNativeDataJSON is not true for false.");
          }
      }
    setUserRequestedAirplay(the_bool);
  }

void MusicCommandNativeDataJSON::fromJSONUserRequestedRepeat(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field UserRequestedRepeat of MusicCommandNativeDataJSON is not true for false.");
          }
      }
    setUserRequestedRepeat(the_bool);
  }

void MusicCommandNativeDataJSON::fromJSONUserRequestedShuffle(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field UserRequestedShuffle of MusicCommandNativeDataJSON is not true for false.");
          }
      }
    setUserRequestedShuffle(the_bool);
  }

void MusicCommandNativeDataJSON::fromJSONUserRequestedAll(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field UserRequestedAll of MusicCommandNativeDataJSON is not true for false.");
          }
      }
    setUserRequestedAll(the_bool);
  }

void MusicCommandNativeDataJSON::fromJSONArtistSpecified(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field ArtistSpecified of MusicCommandNativeDataJSON is not true for false.");
          }
      }
    setArtistSpecified(the_bool);
  }

void MusicCommandNativeDataJSON::fromJSONQueryArtists(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field QueryArtists of MusicCommandNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< MusicArtistJSON * > vector_QueryArtists1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        MusicArtistJSON *convert_classy = MusicArtistJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_QueryArtists1[num1] = convert_classy;
      }
    initQueryArtists();
    for (size_t num12 = 0; num12 < vector_QueryArtists1.size(); ++num12)
        appendQueryArtists(vector_QueryArtists1[num12]);
    for (size_t num1 = 0; num1 < vector_QueryArtists1.size(); ++num1)
      {
        vector_QueryArtists1[num1]->remove_reference();
      }
  }

void MusicCommandNativeDataJSON::fromJSONEntitySpecificationType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field EntitySpecificationType of MusicCommandNativeDataJSON is not a string.");
    TypeEntitySpecificationType the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'E':
            if (strcmp(&(json_string->getData()[1]), "xplicit") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = EntitySpecificationType_Explicit;
                    goto open_enum_is_done;
                  }
            break;
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "istPosition") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = EntitySpecificationType_ListPosition;
                    goto open_enum_is_done;
                  }
            break;
        case 'R':
            if (strcmp(&(json_string->getData()[1]), "elative") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = EntitySpecificationType_Relative;
                    goto open_enum_is_done;
                  }
            break;
        case 'T':
            if (strcmp(&(json_string->getData()[1]), "his") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = EntitySpecificationType_This;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setEntitySpecificationType(the_open_enum);
  }

void MusicCommandNativeDataJSON::fromJSONMusicThirdParty(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MusicThirdPartyJSON *convert_classy = MusicThirdPartyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMusicThirdParty(convert_classy);
    convert_classy->remove_reference();
  }

void MusicCommandNativeDataJSON::fromJSONListPosition(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ListPosition of MusicCommandNativeDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ListPosition of MusicCommandNativeDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setListPosition(extracted_integer);
  }

void MusicCommandNativeDataJSON::fromJSONErrors(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Errors of MusicCommandNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Errors of MusicCommandNativeDataJSON has too few elements.");
    std::vector< MusicSearchErrorJSON * > vector_Errors1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        MusicSearchErrorJSON *convert_classy = MusicSearchErrorJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Errors1[num1] = convert_classy;
      }
    assert(vector_Errors1.size() >= 1);
    initErrors();
    for (size_t num13 = 0; num13 < vector_Errors1.size(); ++num13)
        appendErrors(vector_Errors1[num13]);
    for (size_t num1 = 0; num1 < vector_Errors1.size(); ++num1)
      {
        vector_Errors1[num1]->remove_reference();
      }
  }

void MusicCommandNativeDataJSON::fromJSONOrderToDisplay(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field OrderToDisplay of MusicCommandNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 3)
        throw("The value for field OrderToDisplay of MusicCommandNativeDataJSON has too few elements.");
    std::vector< TypeOrderToDisplay > vector_OrderToDisplay1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field OrderToDisplay of MusicCommandNativeDataJSON is not a string.");
        TypeOrderToDisplay the_open_enum;
        switch ((unsigned char)(json_string->getData()[0]))
          {
            case 'A':
                switch ((unsigned char)(json_string->getData()[1]))
                  {
                    case 'l':
                        if (strcmp(&(json_string->getData()[2]), "bum") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = OrderToDisplay_Album;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'r':
                        if (strcmp(&(json_string->getData()[2]), "tist") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = OrderToDisplay_Artist;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
                break;
            case 'T':
                if (strcmp(&(json_string->getData()[1]), "rack") == 0)
                      {
                        the_open_enum.in_known_list = true;
                        the_open_enum.list_value = OrderToDisplay_Track;
                        goto open_enum_is_done;
                      }
                break;
            case 'V':
                if (strcmp(&(json_string->getData()[1]), "ideo") == 0)
                      {
                        the_open_enum.in_known_list = true;
                        the_open_enum.list_value = OrderToDisplay_Video;
                        goto open_enum_is_done;
                      }
                break;
            default:
                break;
          }
        the_open_enum.in_known_list = false;
        the_open_enum.string_value = json_string->getData();
      open_enum_is_done:;
        vector_OrderToDisplay1[num1] = the_open_enum;
      }
    assert(vector_OrderToDisplay1.size() >= 3);
    initOrderToDisplay();
    for (size_t num14 = 0; num14 < vector_OrderToDisplay1.size(); ++num14)
        appendOrderToDisplay(vector_OrderToDisplay1[num14]);
    for (size_t num1 = 0; num1 < vector_OrderToDisplay1.size(); ++num1)
      {
      }
  }

MusicCommandNativeDataJSON::MusicCommandNativeDataJSON(void) :
        flagHasSearchParameters(false),
        flagHasAlbumsLabel(false),
        flagHasAlbums(false),
        flagHasArtistsLabel(false),
        flagHasArtists(false),
        flagHasTracksLabel(false),
        flagHasTracks(false),
        flagHasSupplementalTrackInfos(false),
        flagHasUserRequestedAutoPlay(false),
        flagHasUserRequestedAirplay(false),
        flagHasUserRequestedRepeat(false),
        flagHasUserRequestedShuffle(false),
        flagHasUserRequestedAll(false),
        flagHasArtistSpecified(false),
        flagHasQueryArtists(false),
        flagHasEntitySpecificationType(false),
        flagHasMusicThirdParty(false),
        flagHasListPosition(false),
        flagHasErrors(false),
        flagHasOrderToDisplay(false)
  {
  }

MusicCommandNativeDataJSON::~MusicCommandNativeDataJSON(void)
  {
    if (flagHasSearchParameters)
      {
        storeSearchParameters->remove_reference();
      }
    if (flagHasAlbums)
      {
        for (size_t num19 = 0; num19 < storeAlbums.size(); ++num19)
          {
            storeAlbums[num19]->remove_reference();
          }
      }
    if (flagHasArtists)
      {
        for (size_t num20 = 0; num20 < storeArtists.size(); ++num20)
          {
            storeArtists[num20]->remove_reference();
          }
      }
    if (flagHasTracks)
      {
        for (size_t num21 = 0; num21 < storeTracks.size(); ++num21)
          {
            storeTracks[num21]->remove_reference();
          }
      }
    if (flagHasSupplementalTrackInfos)
      {
        for (size_t num22 = 0; num22 < storeSupplementalTrackInfos.size(); ++num22)
          {
            storeSupplementalTrackInfos[num22]->remove_reference();
          }
      }
    if (flagHasQueryArtists)
      {
        for (size_t num23 = 0; num23 < storeQueryArtists.size(); ++num23)
          {
            storeQueryArtists[num23]->remove_reference();
          }
      }
    if (flagHasMusicThirdParty)
      {
        storeMusicThirdParty->remove_reference();
      }
    if (flagHasErrors)
      {
        for (size_t num24 = 0; num24 < storeErrors.size(); ++num24)
          {
            storeErrors[num24]->remove_reference();
          }
      }
  }

bool MusicCommandNativeDataJSON::hasSearchParameters(void) const
  {
    return flagHasSearchParameters;
  }

MusicSearchParametersJSON * MusicCommandNativeDataJSON::getSearchParameters(void)
  {
    assert(flagHasSearchParameters);
    return storeSearchParameters;
  }

const MusicSearchParametersJSON * MusicCommandNativeDataJSON::getSearchParameters(void) const
  {
    assert(flagHasSearchParameters);
    return storeSearchParameters;
  }

bool MusicCommandNativeDataJSON::hasAlbumsLabel(void) const
  {
    return flagHasAlbumsLabel;
  }

std::string MusicCommandNativeDataJSON::getAlbumsLabel(void)
  {
    assert(flagHasAlbumsLabel);
    return storeAlbumsLabel;
  }

const std::string MusicCommandNativeDataJSON::getAlbumsLabel(void) const
  {
    assert(flagHasAlbumsLabel);
    return storeAlbumsLabel;
  }

bool MusicCommandNativeDataJSON::hasAlbums(void) const
  {
    return flagHasAlbums;
  }

size_t MusicCommandNativeDataJSON::countOfAlbums(void) const
  {
    assert(flagHasAlbums);
    return storeAlbums.size();
  }

MusicAlbumJSON * MusicCommandNativeDataJSON::elementOfAlbums(size_t element_num)
  {
    assert(flagHasAlbums);
    return storeAlbums[element_num];
  }

const MusicAlbumJSON * MusicCommandNativeDataJSON::elementOfAlbums(size_t element_num) const
  {
    assert(flagHasAlbums);
    return storeAlbums[element_num];
  }

std::vector< MusicAlbumJSON * > MusicCommandNativeDataJSON::getAlbums(void)
  {
    assert(flagHasAlbums);
    return storeAlbums;
  }

const std::vector< MusicAlbumJSON * > MusicCommandNativeDataJSON::getAlbums(void) const
  {
    assert(flagHasAlbums);
    return storeAlbums;
  }

bool MusicCommandNativeDataJSON::hasArtistsLabel(void) const
  {
    return flagHasArtistsLabel;
  }

std::string MusicCommandNativeDataJSON::getArtistsLabel(void)
  {
    assert(flagHasArtistsLabel);
    return storeArtistsLabel;
  }

const std::string MusicCommandNativeDataJSON::getArtistsLabel(void) const
  {
    assert(flagHasArtistsLabel);
    return storeArtistsLabel;
  }

bool MusicCommandNativeDataJSON::hasArtists(void) const
  {
    return flagHasArtists;
  }

size_t MusicCommandNativeDataJSON::countOfArtists(void) const
  {
    assert(flagHasArtists);
    return storeArtists.size();
  }

MusicArtistJSON * MusicCommandNativeDataJSON::elementOfArtists(size_t element_num)
  {
    assert(flagHasArtists);
    return storeArtists[element_num];
  }

const MusicArtistJSON * MusicCommandNativeDataJSON::elementOfArtists(size_t element_num) const
  {
    assert(flagHasArtists);
    return storeArtists[element_num];
  }

std::vector< MusicArtistJSON * > MusicCommandNativeDataJSON::getArtists(void)
  {
    assert(flagHasArtists);
    return storeArtists;
  }

const std::vector< MusicArtistJSON * > MusicCommandNativeDataJSON::getArtists(void) const
  {
    assert(flagHasArtists);
    return storeArtists;
  }

bool MusicCommandNativeDataJSON::hasTracksLabel(void) const
  {
    return flagHasTracksLabel;
  }

std::string MusicCommandNativeDataJSON::getTracksLabel(void)
  {
    assert(flagHasTracksLabel);
    return storeTracksLabel;
  }

const std::string MusicCommandNativeDataJSON::getTracksLabel(void) const
  {
    assert(flagHasTracksLabel);
    return storeTracksLabel;
  }

bool MusicCommandNativeDataJSON::hasTracks(void) const
  {
    return flagHasTracks;
  }

size_t MusicCommandNativeDataJSON::countOfTracks(void) const
  {
    assert(flagHasTracks);
    return storeTracks.size();
  }

MusicTrackJSON * MusicCommandNativeDataJSON::elementOfTracks(size_t element_num)
  {
    assert(flagHasTracks);
    return storeTracks[element_num];
  }

const MusicTrackJSON * MusicCommandNativeDataJSON::elementOfTracks(size_t element_num) const
  {
    assert(flagHasTracks);
    return storeTracks[element_num];
  }

std::vector< MusicTrackJSON * > MusicCommandNativeDataJSON::getTracks(void)
  {
    assert(flagHasTracks);
    return storeTracks;
  }

const std::vector< MusicTrackJSON * > MusicCommandNativeDataJSON::getTracks(void) const
  {
    assert(flagHasTracks);
    return storeTracks;
  }

bool MusicCommandNativeDataJSON::hasSupplementalTrackInfos(void) const
  {
    return flagHasSupplementalTrackInfos;
  }

size_t MusicCommandNativeDataJSON::countOfSupplementalTrackInfos(void) const
  {
    assert(flagHasSupplementalTrackInfos);
    return storeSupplementalTrackInfos.size();
  }

MusicTrackSupplementalInfoJSON * MusicCommandNativeDataJSON::elementOfSupplementalTrackInfos(size_t element_num)
  {
    assert(flagHasSupplementalTrackInfos);
    return storeSupplementalTrackInfos[element_num];
  }

const MusicTrackSupplementalInfoJSON * MusicCommandNativeDataJSON::elementOfSupplementalTrackInfos(size_t element_num) const
  {
    assert(flagHasSupplementalTrackInfos);
    return storeSupplementalTrackInfos[element_num];
  }

std::vector< MusicTrackSupplementalInfoJSON * > MusicCommandNativeDataJSON::getSupplementalTrackInfos(void)
  {
    assert(flagHasSupplementalTrackInfos);
    return storeSupplementalTrackInfos;
  }

const std::vector< MusicTrackSupplementalInfoJSON * > MusicCommandNativeDataJSON::getSupplementalTrackInfos(void) const
  {
    assert(flagHasSupplementalTrackInfos);
    return storeSupplementalTrackInfos;
  }

bool MusicCommandNativeDataJSON::hasUserRequestedAutoPlay(void) const
  {
    return flagHasUserRequestedAutoPlay;
  }

bool MusicCommandNativeDataJSON::getUserRequestedAutoPlay(void)
  {
    assert(flagHasUserRequestedAutoPlay);
    return storeUserRequestedAutoPlay;
  }

const bool MusicCommandNativeDataJSON::getUserRequestedAutoPlay(void) const
  {
    assert(flagHasUserRequestedAutoPlay);
    return storeUserRequestedAutoPlay;
  }

bool MusicCommandNativeDataJSON::hasUserRequestedAirplay(void) const
  {
    return flagHasUserRequestedAirplay;
  }

bool MusicCommandNativeDataJSON::getUserRequestedAirplay(void)
  {
    assert(flagHasUserRequestedAirplay);
    return storeUserRequestedAirplay;
  }

const bool MusicCommandNativeDataJSON::getUserRequestedAirplay(void) const
  {
    assert(flagHasUserRequestedAirplay);
    return storeUserRequestedAirplay;
  }

bool MusicCommandNativeDataJSON::hasUserRequestedRepeat(void) const
  {
    return flagHasUserRequestedRepeat;
  }

bool MusicCommandNativeDataJSON::getUserRequestedRepeat(void)
  {
    assert(flagHasUserRequestedRepeat);
    return storeUserRequestedRepeat;
  }

const bool MusicCommandNativeDataJSON::getUserRequestedRepeat(void) const
  {
    assert(flagHasUserRequestedRepeat);
    return storeUserRequestedRepeat;
  }

bool MusicCommandNativeDataJSON::hasUserRequestedShuffle(void) const
  {
    return flagHasUserRequestedShuffle;
  }

bool MusicCommandNativeDataJSON::getUserRequestedShuffle(void)
  {
    assert(flagHasUserRequestedShuffle);
    return storeUserRequestedShuffle;
  }

const bool MusicCommandNativeDataJSON::getUserRequestedShuffle(void) const
  {
    assert(flagHasUserRequestedShuffle);
    return storeUserRequestedShuffle;
  }

bool MusicCommandNativeDataJSON::hasUserRequestedAll(void) const
  {
    return flagHasUserRequestedAll;
  }

bool MusicCommandNativeDataJSON::getUserRequestedAll(void)
  {
    assert(flagHasUserRequestedAll);
    return storeUserRequestedAll;
  }

const bool MusicCommandNativeDataJSON::getUserRequestedAll(void) const
  {
    assert(flagHasUserRequestedAll);
    return storeUserRequestedAll;
  }

bool MusicCommandNativeDataJSON::hasArtistSpecified(void) const
  {
    return flagHasArtistSpecified;
  }

bool MusicCommandNativeDataJSON::getArtistSpecified(void)
  {
    assert(flagHasArtistSpecified);
    return storeArtistSpecified;
  }

const bool MusicCommandNativeDataJSON::getArtistSpecified(void) const
  {
    assert(flagHasArtistSpecified);
    return storeArtistSpecified;
  }

bool MusicCommandNativeDataJSON::hasQueryArtists(void) const
  {
    return flagHasQueryArtists;
  }

size_t MusicCommandNativeDataJSON::countOfQueryArtists(void) const
  {
    assert(flagHasQueryArtists);
    return storeQueryArtists.size();
  }

MusicArtistJSON * MusicCommandNativeDataJSON::elementOfQueryArtists(size_t element_num)
  {
    assert(flagHasQueryArtists);
    return storeQueryArtists[element_num];
  }

const MusicArtistJSON * MusicCommandNativeDataJSON::elementOfQueryArtists(size_t element_num) const
  {
    assert(flagHasQueryArtists);
    return storeQueryArtists[element_num];
  }

std::vector< MusicArtistJSON * > MusicCommandNativeDataJSON::getQueryArtists(void)
  {
    assert(flagHasQueryArtists);
    return storeQueryArtists;
  }

const std::vector< MusicArtistJSON * > MusicCommandNativeDataJSON::getQueryArtists(void) const
  {
    assert(flagHasQueryArtists);
    return storeQueryArtists;
  }

bool MusicCommandNativeDataJSON::hasEntitySpecificationType(void) const
  {
    return flagHasEntitySpecificationType;
  }

MusicCommandNativeDataJSON::TypeEntitySpecificationType MusicCommandNativeDataJSON::getEntitySpecificationType(void)
  {
    assert(flagHasEntitySpecificationType);
    return storeEntitySpecificationType;
  }

const MusicCommandNativeDataJSON::TypeEntitySpecificationType MusicCommandNativeDataJSON::getEntitySpecificationType(void) const
  {
    assert(flagHasEntitySpecificationType);
    return storeEntitySpecificationType;
  }

const char *MusicCommandNativeDataJSON::getEntitySpecificationTypeAsChars(void) const
  {
    TypeEntitySpecificationType result = getEntitySpecificationType();
    if (result.in_known_list)
        return stringFromEntitySpecificationType(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string MusicCommandNativeDataJSON::getEntitySpecificationTypeAsString(void) const
  {
    return getEntitySpecificationTypeAsChars();
  }

bool MusicCommandNativeDataJSON::hasMusicThirdParty(void) const
  {
    return flagHasMusicThirdParty;
  }

MusicThirdPartyJSON * MusicCommandNativeDataJSON::getMusicThirdParty(void)
  {
    assert(flagHasMusicThirdParty);
    return storeMusicThirdParty;
  }

const MusicThirdPartyJSON * MusicCommandNativeDataJSON::getMusicThirdParty(void) const
  {
    assert(flagHasMusicThirdParty);
    return storeMusicThirdParty;
  }

bool MusicCommandNativeDataJSON::hasListPosition(void) const
  {
    return flagHasListPosition;
  }

OInteger MusicCommandNativeDataJSON::getListPosition(void)
  {
    assert(flagHasListPosition);
    return storeListPosition;
  }

const OInteger MusicCommandNativeDataJSON::getListPosition(void) const
  {
    assert(flagHasListPosition);
    return storeListPosition;
  }

bool MusicCommandNativeDataJSON::hasErrors(void) const
  {
    return flagHasErrors;
  }

size_t MusicCommandNativeDataJSON::countOfErrors(void) const
  {
    assert(flagHasErrors);
    return storeErrors.size();
  }

MusicSearchErrorJSON * MusicCommandNativeDataJSON::elementOfErrors(size_t element_num)
  {
    assert(flagHasErrors);
    return storeErrors[element_num];
  }

const MusicSearchErrorJSON * MusicCommandNativeDataJSON::elementOfErrors(size_t element_num) const
  {
    assert(flagHasErrors);
    return storeErrors[element_num];
  }

std::vector< MusicSearchErrorJSON * > MusicCommandNativeDataJSON::getErrors(void)
  {
    assert(flagHasErrors);
    return storeErrors;
  }

const std::vector< MusicSearchErrorJSON * > MusicCommandNativeDataJSON::getErrors(void) const
  {
    assert(flagHasErrors);
    return storeErrors;
  }

bool MusicCommandNativeDataJSON::hasOrderToDisplay(void) const
  {
    return flagHasOrderToDisplay;
  }

size_t MusicCommandNativeDataJSON::countOfOrderToDisplay(void) const
  {
    assert(flagHasOrderToDisplay);
    return storeOrderToDisplay.size();
  }

MusicCommandNativeDataJSON::TypeOrderToDisplay MusicCommandNativeDataJSON::elementOfOrderToDisplay(size_t element_num)
  {
    assert(flagHasOrderToDisplay);
    return storeOrderToDisplay[element_num];
  }

const MusicCommandNativeDataJSON::TypeOrderToDisplay MusicCommandNativeDataJSON::elementOfOrderToDisplay(size_t element_num) const
  {
    assert(flagHasOrderToDisplay);
    return storeOrderToDisplay[element_num];
  }

std::vector< MusicCommandNativeDataJSON::TypeOrderToDisplay > MusicCommandNativeDataJSON::getOrderToDisplay(void)
  {
    assert(flagHasOrderToDisplay);
    return storeOrderToDisplay;
  }

const std::vector< MusicCommandNativeDataJSON::TypeOrderToDisplay > MusicCommandNativeDataJSON::getOrderToDisplay(void) const
  {
    assert(flagHasOrderToDisplay);
    return storeOrderToDisplay;
  }

MusicCommandNativeDataJSON *MusicCommandNativeDataJSON::createForKey(const char *key, string_index *other_field_index)
  {
    if (strncmp(key, "Music", 5) == 0)
      {
        switch ((unsigned char)(key[5]))
          {
            case 'C':
                if (strcmp(&(key[6]), "hartsCommandNativeData") == 0)
                    return new MusicChartsCommandNativeDataJSON();
                break;
            case 'S':
                if (strcmp(&(key[6]), "earchCommandNativeData") == 0)
                    return new MusicSearchCommandNativeDataJSON();
                break;
            default:
                break;
          }
      }

    class GenericMusicCommandNativeDataJSON : public MusicCommandNativeDataJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericMusicCommandNativeDataJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericMusicCommandNativeDataJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getMusicCommandNativeDataKind(void) const  { return key.c_str(); }
        size_t extraMusicCommandNativeDataComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraMusicCommandNativeDataComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraMusicCommandNativeDataComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraMusicCommandNativeDataComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraMusicCommandNativeDataLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraMusicCommandNativeDataLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraMusicCommandNativeDataAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraMusicCommandNativeDataSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraMusicCommandNativeDataLookup(key);
            if (old_field == NULL)
              {
                extraMusicCommandNativeDataAppendPair(key, new_component);
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
    return new GenericMusicCommandNativeDataJSON(key);
  }
MusicCommandNativeDataJSON *MusicCommandNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MusicCommandNativeDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MusicCommandNativeDataJSON>, MusicCommandNativeDataJSON *, bool> generator("Type MusicCommandNativeData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
