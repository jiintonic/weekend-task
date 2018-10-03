/* file "SportsPlayerJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSPLAYERJSON_H
#define SPORTSPLAYERJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include <vector>
#include <string>
#include "OInteger.h"
#include "SportsTeamNewJSON.h"
#include "SportsPlayerPositionJSON.h"
#include "SportsPlayerStatusJSON.h"
#include "DateAndOrTimeJSON.h"
#include "SportsPlayerImageJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsPlayerJSON : public ReferenceCounted
  {
  public:
    enum TypeThrowHandKnownValues
      {
        ThrowHand_Left,
        ThrowHand_Right,
        ThrowHand_Both,
        ThrowHand__none
      };
    struct TypeThrowHand
      {
        bool in_known_list;
        std::string string_value;
        TypeThrowHandKnownValues list_value;

        TypeThrowHand(void);
        TypeThrowHand(const TypeThrowHand &other);
        TypeThrowHand(TypeThrowHandKnownValues other);
        bool  operator==(const TypeThrowHand &other) const;
        bool  operator!=(const TypeThrowHand &other) const;
        bool  operator<(const TypeThrowHand &other) const;
        bool  operator>(const TypeThrowHand &other) const;
        bool  operator>=(const TypeThrowHand &other) const;
        bool  operator<=(const TypeThrowHand &other) const;

      };

    static TypeThrowHandKnownValues  stringToThrowHand(const char *chars);
    static const char * stringFromThrowHand(TypeThrowHandKnownValues the_enum);
    enum TypeBatHandKnownValues
      {
        BatHand_Left,
        BatHand_Right,
        BatHand_Both,
        BatHand__none
      };
    struct TypeBatHand
      {
        bool in_known_list;
        std::string string_value;
        TypeBatHandKnownValues list_value;

        TypeBatHand(void);
        TypeBatHand(const TypeBatHand &other);
        TypeBatHand(TypeBatHandKnownValues other);
        bool  operator==(const TypeBatHand &other) const;
        bool  operator!=(const TypeBatHand &other) const;
        bool  operator<(const TypeBatHand &other) const;
        bool  operator>(const TypeBatHand &other) const;
        bool  operator>=(const TypeBatHand &other) const;
        bool  operator<=(const TypeBatHand &other) const;

      };

    static TypeBatHandKnownValues  stringToBatHand(const char *chars);
    static const char * stringFromBatHand(TypeBatHandKnownValues the_enum);
    enum TypeExperienceCollegeKnownValues
      {
        ExperienceCollege_Freshman,
        ExperienceCollege_Sophomore,
        ExperienceCollege_Junior,
        ExperienceCollege_Senior,
        ExperienceCollege_GraduateStudent,
        ExperienceCollege__none
      };
    struct TypeExperienceCollege
      {
        bool in_known_list;
        std::string string_value;
        TypeExperienceCollegeKnownValues list_value;

        TypeExperienceCollege(void);
        TypeExperienceCollege(const TypeExperienceCollege &other);
        TypeExperienceCollege(TypeExperienceCollegeKnownValues other);
        bool  operator==(const TypeExperienceCollege &other) const;
        bool  operator!=(const TypeExperienceCollege &other) const;
        bool  operator<(const TypeExperienceCollege &other) const;
        bool  operator>(const TypeExperienceCollege &other) const;
        bool  operator>=(const TypeExperienceCollege &other) const;
        bool  operator<=(const TypeExperienceCollege &other) const;

      };

    static TypeExperienceCollegeKnownValues  stringToExperienceCollege(const char *chars);
    static const char * stringFromExperienceCollege(TypeExperienceCollegeKnownValues the_enum);

  private:
    bool flagHasFirstName;
    std::string storeFirstName;
    bool flagHasLastName;
    std::string storeLastName;
    bool flagHasPreferredName;
    std::string storePreferredName;
    bool flagHasFullName;
    std::string storeFullName;
    bool flagHasTeam;
    SportsTeamNewJSON * storeTeam;
    bool flagHasID;
    std::string storeID;
    bool flagHasJerseyNumber;
    OInteger storeJerseyNumber;
    bool flagHasWeightInPounds;
    double storeWeightInPounds;
    std::string textStoreWeightInPounds;
    bool flagHasHeightInInches;
    double storeHeightInInches;
    std::string textStoreHeightInInches;
    bool flagHasPosition;
    SportsPlayerPositionJSON * storePosition;
    bool flagHasStatus;
    SportsPlayerStatusJSON * storeStatus;
    bool flagHasThrowHand;
    TypeThrowHand storeThrowHand;
    bool flagHasBatHand;
    TypeBatHand storeBatHand;
    bool flagHasBirthDate;
    DateAndOrTimeJSON * storeBirthDate;
    bool flagHasBirthCountry;
    std::string storeBirthCountry;
    bool flagHasBirthState;
    std::string storeBirthState;
    bool flagHasBirthCity;
    std::string storeBirthCity;
    bool flagHasCollege;
    std::string storeCollege;
    bool flagHasHighSchool;
    std::string storeHighSchool;
    bool flagHasExperienceInYears;
    OInteger storeExperienceInYears;
    bool flagHasExperienceCollege;
    TypeExperienceCollege storeExperienceCollege;
    bool flagHasImages;
    std::vector< SportsPlayerImageJSON * > storeImages;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsPlayerJSON(const SportsPlayerJSON &);
    SportsPlayerJSON & operator=(const SportsPlayerJSON &other);

    void  fromJSONFirstName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLastName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPreferredName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFullName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTeam(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONJerseyNumber(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWeightInPounds(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHeightInInches(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPosition(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStatus(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONThrowHand(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBatHand(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBirthDate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBirthCountry(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBirthState(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBirthCity(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCollege(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHighSchool(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONExperienceInYears(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONExperienceCollege(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONImages(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsPlayerJSON(void);
    virtual ~SportsPlayerJSON(void);
    bool  hasFirstName(void) const;
    std::string  getFirstName(void);
    const std::string  getFirstName(void) const;
    bool  hasLastName(void) const;
    std::string  getLastName(void);
    const std::string  getLastName(void) const;
    bool  hasPreferredName(void) const;
    std::string  getPreferredName(void);
    const std::string  getPreferredName(void) const;
    bool  hasFullName(void) const;
    std::string  getFullName(void);
    const std::string  getFullName(void) const;
    bool  hasTeam(void) const;
    SportsTeamNewJSON *  getTeam(void);
    const SportsTeamNewJSON *  getTeam(void) const;
    bool  hasID(void) const;
    std::string  getID(void);
    const std::string  getID(void) const;
    bool  hasJerseyNumber(void) const;
    OInteger  getJerseyNumber(void);
    const OInteger  getJerseyNumber(void) const;
    bool  hasWeightInPounds(void) const;
    double  getWeightInPounds(void);
    const double  getWeightInPounds(void) const;
    std::string  getWeightInPoundsAsText(void) const;
    bool  hasHeightInInches(void) const;
    double  getHeightInInches(void);
    const double  getHeightInInches(void) const;
    std::string  getHeightInInchesAsText(void) const;
    bool  hasPosition(void) const;
    SportsPlayerPositionJSON *  getPosition(void);
    const SportsPlayerPositionJSON *  getPosition(void) const;
    SportsPlayerPositionJSON::TypeValue  getPositionValue(void);
    const SportsPlayerPositionJSON::TypeValue  getPositionValue(void) const;
    const char * getPositionAsChars(void) const;
    std::string  getPositionAsString(void) const;
    bool  hasStatus(void) const;
    SportsPlayerStatusJSON *  getStatus(void);
    const SportsPlayerStatusJSON *  getStatus(void) const;
    SportsPlayerStatusJSON::TypeValue  getStatusValue(void);
    const SportsPlayerStatusJSON::TypeValue  getStatusValue(void) const;
    const char * getStatusAsChars(void) const;
    std::string  getStatusAsString(void) const;
    bool  hasThrowHand(void) const;
    TypeThrowHand  getThrowHand(void);
    const TypeThrowHand  getThrowHand(void) const;
    const char * getThrowHandAsChars(void) const;
    std::string  getThrowHandAsString(void) const;
    bool  hasBatHand(void) const;
    TypeBatHand  getBatHand(void);
    const TypeBatHand  getBatHand(void) const;
    const char * getBatHandAsChars(void) const;
    std::string  getBatHandAsString(void) const;
    bool  hasBirthDate(void) const;
    DateAndOrTimeJSON *  getBirthDate(void);
    const DateAndOrTimeJSON *  getBirthDate(void) const;
    bool  hasBirthCountry(void) const;
    std::string  getBirthCountry(void);
    const std::string  getBirthCountry(void) const;
    bool  hasBirthState(void) const;
    std::string  getBirthState(void);
    const std::string  getBirthState(void) const;
    bool  hasBirthCity(void) const;
    std::string  getBirthCity(void);
    const std::string  getBirthCity(void) const;
    bool  hasCollege(void) const;
    std::string  getCollege(void);
    const std::string  getCollege(void) const;
    bool  hasHighSchool(void) const;
    std::string  getHighSchool(void);
    const std::string  getHighSchool(void) const;
    bool  hasExperienceInYears(void) const;
    OInteger  getExperienceInYears(void);
    const OInteger  getExperienceInYears(void) const;
    bool  hasExperienceCollege(void) const;
    TypeExperienceCollege  getExperienceCollege(void);
    const TypeExperienceCollege  getExperienceCollege(void) const;
    const char * getExperienceCollegeAsChars(void) const;
    std::string  getExperienceCollegeAsString(void) const;
    bool  hasImages(void) const;
    size_t  countOfImages(void) const;
    SportsPlayerImageJSON *  elementOfImages(size_t element_num);
    const SportsPlayerImageJSON *  elementOfImages(size_t element_num) const;
    std::vector< SportsPlayerImageJSON * >  getImages(void);
    const std::vector< SportsPlayerImageJSON * >  getImages(void) const;

    virtual size_t extraSportsPlayerComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsPlayerComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsPlayerComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsPlayerComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsPlayerLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsPlayerLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setFirstName(std::string new_value)
      {
        flagHasFirstName = true;
        storeFirstName = new_value;
      }
    void unsetFirstName(void)
      {
        flagHasFirstName = false;
      }
    void setLastName(std::string new_value)
      {
        flagHasLastName = true;
        storeLastName = new_value;
      }
    void unsetLastName(void)
      {
        flagHasLastName = false;
      }
    void setPreferredName(std::string new_value)
      {
        flagHasPreferredName = true;
        storePreferredName = new_value;
      }
    void unsetPreferredName(void)
      {
        flagHasPreferredName = false;
      }
    void setFullName(std::string new_value)
      {
        flagHasFullName = true;
        storeFullName = new_value;
      }
    void unsetFullName(void)
      {
        flagHasFullName = false;
      }
    void setTeam(SportsTeamNewJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasTeam)
          {
            storeTeam->remove_reference();
          }
        flagHasTeam = true;
        storeTeam = new_value;
      }
    void unsetTeam(void)
      {
        if (flagHasTeam)
          {
            storeTeam->remove_reference();
          }
        flagHasTeam = false;
      }
    void setID(std::string new_value)
      {
        flagHasID = true;
        storeID = new_value;
      }
    void unsetID(void)
      {
        flagHasID = false;
      }
    void setJerseyNumber(OInteger new_value)
      {
        flagHasJerseyNumber = true;
        if (new_value < 0)
            throw("The value for field JerseyNumber of SportsPlayerJSON is less than the lower bound (0) for that field.");
        storeJerseyNumber = new_value;
      }
    void unsetJerseyNumber(void)
      {
        flagHasJerseyNumber = false;
      }
    void setWeightInPounds(double new_value)
      {
        flagHasWeightInPounds = true;
        if (new_value < 0)
            throw("The value for field WeightInPounds of SportsPlayerJSON is less than the lower bound (0) for that field.");
        storeWeightInPounds = new_value;
        textStoreWeightInPounds = "";
      }
    void setWeightInPoundsText(std::string new_value)
      {
        flagHasWeightInPounds = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field WeightInPounds of SportsPlayerJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field WeightInPounds of SportsPlayerJSON is less than the lower bound (0) for that field.");
        textStoreWeightInPounds = new_value;
      }
    void unsetWeightInPounds(void)
      {
        flagHasWeightInPounds = false;
      }
    void setHeightInInches(double new_value)
      {
        flagHasHeightInInches = true;
        if (new_value < 0)
            throw("The value for field HeightInInches of SportsPlayerJSON is less than the lower bound (0) for that field.");
        storeHeightInInches = new_value;
        textStoreHeightInInches = "";
      }
    void setHeightInInchesText(std::string new_value)
      {
        flagHasHeightInInches = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field HeightInInches of SportsPlayerJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field HeightInInches of SportsPlayerJSON is less than the lower bound (0) for that field.");
        textStoreHeightInInches = new_value;
      }
    void unsetHeightInInches(void)
      {
        flagHasHeightInInches = false;
      }
    void setPosition(SportsPlayerPositionJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPosition)
          {
            storePosition->remove_reference();
          }
        flagHasPosition = true;
        storePosition = new_value;
      }
    void setPosition(SportsPlayerPositionJSON::TypeValue new_value)
      {
        setPosition(new SportsPlayerPositionJSON(new_value));
      }
    void setPosition(const char *chars)
      {
        SportsPlayerPositionJSON::TypeValueKnownValues known = SportsPlayerPositionJSON::stringToValue(chars);
        SportsPlayerPositionJSON::TypeValue new_value;
        if (known == SportsPlayerPositionJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setPosition(new_value);
      }
    void setPosition(std::string the_string)
      {
        setPosition(the_string.c_str());
      }
    void unsetPosition(void)
      {
        if (flagHasPosition)
          {
            storePosition->remove_reference();
          }
        flagHasPosition = false;
      }
    void setStatus(SportsPlayerStatusJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStatus)
          {
            storeStatus->remove_reference();
          }
        flagHasStatus = true;
        storeStatus = new_value;
      }
    void setStatus(SportsPlayerStatusJSON::TypeValue new_value)
      {
        setStatus(new SportsPlayerStatusJSON(new_value));
      }
    void setStatus(const char *chars)
      {
        SportsPlayerStatusJSON::TypeValueKnownValues known = SportsPlayerStatusJSON::stringToValue(chars);
        SportsPlayerStatusJSON::TypeValue new_value;
        if (known == SportsPlayerStatusJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setStatus(new_value);
      }
    void setStatus(std::string the_string)
      {
        setStatus(the_string.c_str());
      }
    void unsetStatus(void)
      {
        if (flagHasStatus)
          {
            storeStatus->remove_reference();
          }
        flagHasStatus = false;
      }
    void setThrowHand(TypeThrowHand new_value)
      {
        flagHasThrowHand = true;
        storeThrowHand = new_value;
      }
    void setThrowHand(const char *chars)
      {
        TypeThrowHandKnownValues known = stringToThrowHand(chars);
        TypeThrowHand new_value;
        if (known == ThrowHand__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setThrowHand(new_value);
      }
    void setThrowHand(std::string the_string)
      {
        setThrowHand(the_string.c_str());
      }
    void setThrowHand(TypeThrowHandKnownValues new_value)
      {
        TypeThrowHand new_full_value;
        assert(new_value != ThrowHand__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setThrowHand(new_full_value);
      }
    void unsetThrowHand(void)
      {
        flagHasThrowHand = false;
      }
    void setBatHand(TypeBatHand new_value)
      {
        flagHasBatHand = true;
        storeBatHand = new_value;
      }
    void setBatHand(const char *chars)
      {
        TypeBatHandKnownValues known = stringToBatHand(chars);
        TypeBatHand new_value;
        if (known == BatHand__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setBatHand(new_value);
      }
    void setBatHand(std::string the_string)
      {
        setBatHand(the_string.c_str());
      }
    void setBatHand(TypeBatHandKnownValues new_value)
      {
        TypeBatHand new_full_value;
        assert(new_value != BatHand__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setBatHand(new_full_value);
      }
    void unsetBatHand(void)
      {
        flagHasBatHand = false;
      }
    void setBirthDate(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasBirthDate)
          {
            storeBirthDate->remove_reference();
          }
        flagHasBirthDate = true;
        storeBirthDate = new_value;
      }
    void unsetBirthDate(void)
      {
        if (flagHasBirthDate)
          {
            storeBirthDate->remove_reference();
          }
        flagHasBirthDate = false;
      }
    void setBirthCountry(std::string new_value)
      {
        flagHasBirthCountry = true;
        storeBirthCountry = new_value;
      }
    void unsetBirthCountry(void)
      {
        flagHasBirthCountry = false;
      }
    void setBirthState(std::string new_value)
      {
        flagHasBirthState = true;
        storeBirthState = new_value;
      }
    void unsetBirthState(void)
      {
        flagHasBirthState = false;
      }
    void setBirthCity(std::string new_value)
      {
        flagHasBirthCity = true;
        storeBirthCity = new_value;
      }
    void unsetBirthCity(void)
      {
        flagHasBirthCity = false;
      }
    void setCollege(std::string new_value)
      {
        flagHasCollege = true;
        storeCollege = new_value;
      }
    void unsetCollege(void)
      {
        flagHasCollege = false;
      }
    void setHighSchool(std::string new_value)
      {
        flagHasHighSchool = true;
        storeHighSchool = new_value;
      }
    void unsetHighSchool(void)
      {
        flagHasHighSchool = false;
      }
    void setExperienceInYears(OInteger new_value)
      {
        flagHasExperienceInYears = true;
        if (new_value < 0)
            throw("The value for field ExperienceInYears of SportsPlayerJSON is less than the lower bound (0) for that field.");
        storeExperienceInYears = new_value;
      }
    void unsetExperienceInYears(void)
      {
        flagHasExperienceInYears = false;
      }
    void setExperienceCollege(TypeExperienceCollege new_value)
      {
        flagHasExperienceCollege = true;
        storeExperienceCollege = new_value;
      }
    void setExperienceCollege(const char *chars)
      {
        TypeExperienceCollegeKnownValues known = stringToExperienceCollege(chars);
        TypeExperienceCollege new_value;
        if (known == ExperienceCollege__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setExperienceCollege(new_value);
      }
    void setExperienceCollege(std::string the_string)
      {
        setExperienceCollege(the_string.c_str());
      }
    void setExperienceCollege(TypeExperienceCollegeKnownValues new_value)
      {
        TypeExperienceCollege new_full_value;
        assert(new_value != ExperienceCollege__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setExperienceCollege(new_full_value);
      }
    void unsetExperienceCollege(void)
      {
        flagHasExperienceCollege = false;
      }
    void initImages(void)
      {
        if (flagHasImages)
          {
            for (size_t num2 = 0; num2 < storeImages.size(); ++num2)
              {
                storeImages[num2]->remove_reference();
              }
          }
        flagHasImages = true;
        storeImages.clear();
      }
    void appendImages(SportsPlayerImageJSON * to_append)
      {
        if (!flagHasImages)
          {
            flagHasImages = true;
            storeImages.clear();
          }
        assert(flagHasImages);
        to_append->add_reference();
        storeImages.push_back(to_append);
      }
    void unsetImages(void)
      {
        if (flagHasImages)
          {
            for (size_t num3 = 0; num3 < storeImages.size(); ++num3)
              {
                storeImages[num3]->remove_reference();
              }
          }
        flagHasImages = false;
        storeImages.clear();
      }

    virtual void extraSportsPlayerAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsPlayerSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsPlayerLookup(key);
        if (old_field == NULL)
          {
            extraSportsPlayerAppendPair(key, new_component);
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

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        if (flagHasFirstName)
          {
            handler->start_pair("FirstName");
            handler->string_value(storeFirstName);
          }
        assert(flagHasLastName);
        handler->start_pair("LastName");
        handler->string_value(storeLastName);
        if (flagHasPreferredName)
          {
            handler->start_pair("PreferredName");
            handler->string_value(storePreferredName);
          }
        assert(flagHasFullName);
        handler->start_pair("FullName");
        handler->string_value(storeFullName);
        if (flagHasTeam)
          {
            handler->start_pair("Team");
            storeTeam->write_as_json(handler);
          }
        assert(flagHasID);
        handler->start_pair("ID");
        handler->string_value(storeID);
        if (flagHasJerseyNumber)
          {
            handler->start_pair("JerseyNumber");
            handler->number_value(storeJerseyNumber.get_o_integer());
          }
        if (flagHasWeightInPounds)
          {
            handler->start_pair("WeightInPounds");
            if (textStoreWeightInPounds != "")
                handler->number_value(textStoreWeightInPounds.c_str());
            else if (((double)(long int)storeWeightInPounds) == storeWeightInPounds)
                handler->number_value((long int)storeWeightInPounds);
            else
                handler->number_value(storeWeightInPounds);
          }
        if (flagHasHeightInInches)
          {
            handler->start_pair("HeightInInches");
            if (textStoreHeightInInches != "")
                handler->number_value(textStoreHeightInInches.c_str());
            else if (((double)(long int)storeHeightInInches) == storeHeightInInches)
                handler->number_value((long int)storeHeightInInches);
            else
                handler->number_value(storeHeightInInches);
          }
        if (flagHasPosition)
          {
            handler->start_pair("Position");
            storePosition->write_as_json(handler);
          }
        if (flagHasStatus)
          {
            handler->start_pair("Status");
            storeStatus->write_as_json(handler);
          }
        if (flagHasThrowHand)
          {
            handler->start_pair("ThrowHand");
            if (storeThrowHand.in_known_list)
              {
                switch (storeThrowHand.list_value)
                  {
                    case ThrowHand_Left:
                        handler->string_value("Left");
                        break;
                    case ThrowHand_Right:
                        handler->string_value("Right");
                        break;
                    case ThrowHand_Both:
                        handler->string_value("Both");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeThrowHand.string_value);
              }
          }
        if (flagHasBatHand)
          {
            handler->start_pair("BatHand");
            if (storeBatHand.in_known_list)
              {
                switch (storeBatHand.list_value)
                  {
                    case BatHand_Left:
                        handler->string_value("Left");
                        break;
                    case BatHand_Right:
                        handler->string_value("Right");
                        break;
                    case BatHand_Both:
                        handler->string_value("Both");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeBatHand.string_value);
              }
          }
        if (flagHasBirthDate)
          {
            handler->start_pair("BirthDate");
            storeBirthDate->write_as_json(handler);
          }
        if (flagHasBirthCountry)
          {
            handler->start_pair("BirthCountry");
            handler->string_value(storeBirthCountry);
          }
        if (flagHasBirthState)
          {
            handler->start_pair("BirthState");
            handler->string_value(storeBirthState);
          }
        if (flagHasBirthCity)
          {
            handler->start_pair("BirthCity");
            handler->string_value(storeBirthCity);
          }
        if (flagHasCollege)
          {
            handler->start_pair("College");
            handler->string_value(storeCollege);
          }
        if (flagHasHighSchool)
          {
            handler->start_pair("HighSchool");
            handler->string_value(storeHighSchool);
          }
        if (flagHasExperienceInYears)
          {
            handler->start_pair("ExperienceInYears");
            handler->number_value(storeExperienceInYears.get_o_integer());
          }
        if (flagHasExperienceCollege)
          {
            handler->start_pair("ExperienceCollege");
            if (storeExperienceCollege.in_known_list)
              {
                switch (storeExperienceCollege.list_value)
                  {
                    case ExperienceCollege_Freshman:
                        handler->string_value("Freshman");
                        break;
                    case ExperienceCollege_Sophomore:
                        handler->string_value("Sophomore");
                        break;
                    case ExperienceCollege_Junior:
                        handler->string_value("Junior");
                        break;
                    case ExperienceCollege_Senior:
                        handler->string_value("Senior");
                        break;
                    case ExperienceCollege_GraduateStudent:
                        handler->string_value("GraduateStudent");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeExperienceCollege.string_value);
              }
          }
        if (flagHasImages)
          {
            handler->start_pair("Images");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeImages.size(); ++num1)
              {
                storeImages[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasLastName()))
          {
            return "When parsing the object for %what%, the \"LastName\" field was missing.";
          }
        if (!(hasFullName()))
          {
            return "When parsing the object for %what%, the \"FullName\" field was missing.";
          }
        if (!(hasID()))
          {
            return "When parsing the object for %what%, the \"ID\" field was missing.";
          }
        return NULL;
      }

    static SportsPlayerJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsPlayerJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsPlayerJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsPlayerJSON>, SportsPlayerJSON *, bool> generator("Type SportsPlayer", ignore_extras);
            parse_json_value(text, "Text for SportsPlayerJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsPlayerJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsPlayerJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsPlayerJSON>, SportsPlayerJSON *, bool> generator("Type SportsPlayer", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public JSONObjectGenerator
      {
      private:
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorFirstName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLastName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPreferredName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorFullName;
        JSONHoldingGenerator<SportsTeamNewJSON::Generator, RCHandle<SportsTeamNewJSON>, SportsTeamNewJSON *, bool > fieldGeneratorTeam;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorID;
        static char lowerBoundJerseyNumber[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundJerseyNumber>, OInteger, o_integer > fieldGeneratorJerseyNumber;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorWeightInPounds;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorHeightInInches;
        JSONHoldingGenerator<SportsPlayerPositionJSON::Generator, RCHandle<SportsPlayerPositionJSON>, SportsPlayerPositionJSON *, bool > fieldGeneratorPosition;
        JSONHoldingGenerator<SportsPlayerStatusJSON::Generator, RCHandle<SportsPlayerStatusJSON>, SportsPlayerStatusJSON *, bool > fieldGeneratorStatus;
    class FieldGeneratorThrowHand : public JSONStringGenerator
          {
          protected:
            FieldGeneratorThrowHand(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorThrowHand(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeThrowHandKnownValues known = stringToThrowHand(result);
                TypeThrowHand new_value;
                if (known == ThrowHand__none)
                  {
                    new_value.in_known_list = false;
                    new_value.string_value = result;
                  }
                else
                  {
                    new_value.in_known_list = true;
                    new_value.list_value = known;
                  }
                handle_result(new_value);
              }
            virtual void handle_result(TypeThrowHand result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorThrowHand, TypeThrowHand, TypeThrowHand > fieldGeneratorThrowHand;
    class FieldGeneratorBatHand : public JSONStringGenerator
          {
          protected:
            FieldGeneratorBatHand(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorBatHand(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeBatHandKnownValues known = stringToBatHand(result);
                TypeBatHand new_value;
                if (known == BatHand__none)
                  {
                    new_value.in_known_list = false;
                    new_value.string_value = result;
                  }
                else
                  {
                    new_value.in_known_list = true;
                    new_value.list_value = known;
                  }
                handle_result(new_value);
              }
            virtual void handle_result(TypeBatHand result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorBatHand, TypeBatHand, TypeBatHand > fieldGeneratorBatHand;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorBirthDate;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorBirthCountry;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorBirthState;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorBirthCity;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCollege;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorHighSchool;
        static char lowerBoundExperienceInYears[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundExperienceInYears>, OInteger, o_integer > fieldGeneratorExperienceInYears;
    class FieldGeneratorExperienceCollege : public JSONStringGenerator
          {
          protected:
            FieldGeneratorExperienceCollege(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorExperienceCollege(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeExperienceCollegeKnownValues known = stringToExperienceCollege(result);
                TypeExperienceCollege new_value;
                if (known == ExperienceCollege__none)
                  {
                    new_value.in_known_list = false;
                    new_value.string_value = result;
                  }
                else
                  {
                    new_value.in_known_list = true;
                    new_value.list_value = known;
                  }
                handle_result(new_value);
              }
            virtual void handle_result(TypeExperienceCollege result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorExperienceCollege, TypeExperienceCollege, TypeExperienceCollege > fieldGeneratorExperienceCollege;
        JSONHoldingArrayGenerator<SportsPlayerImageJSON::Generator, RCHandle<SportsPlayerImageJSON>, SportsPlayerImageJSON *, bool > fieldGeneratorImages;
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
            SportsPlayerJSON *result = new SportsPlayerJSON();
            assert(result != NULL);
            RCHandle<SportsPlayerJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsPlayerAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsPlayerJSON *result)
          {
            if (fieldGeneratorFirstName.have_value)
              {
                result->setFirstName(fieldGeneratorFirstName.value);
                fieldGeneratorFirstName.have_value = false;
              }
            if (fieldGeneratorLastName.have_value)
              {
                result->setLastName(fieldGeneratorLastName.value);
                fieldGeneratorLastName.have_value = false;
              }
            else if (!(result->hasLastName()))
              {
                error("When parsing the object for %what%, the \"LastName\" field was missing.");
              }
            if (fieldGeneratorPreferredName.have_value)
              {
                result->setPreferredName(fieldGeneratorPreferredName.value);
                fieldGeneratorPreferredName.have_value = false;
              }
            if (fieldGeneratorFullName.have_value)
              {
                result->setFullName(fieldGeneratorFullName.value);
                fieldGeneratorFullName.have_value = false;
              }
            else if (!(result->hasFullName()))
              {
                error("When parsing the object for %what%, the \"FullName\" field was missing.");
              }
            if (fieldGeneratorTeam.have_value)
              {
                result->setTeam(fieldGeneratorTeam.value.referenced());
                fieldGeneratorTeam.have_value = false;
              }
            if (fieldGeneratorID.have_value)
              {
                result->setID(fieldGeneratorID.value);
                fieldGeneratorID.have_value = false;
              }
            else if (!(result->hasID()))
              {
                error("When parsing the object for %what%, the \"ID\" field was missing.");
              }
            if (fieldGeneratorJerseyNumber.have_value)
              {
                result->setJerseyNumber(fieldGeneratorJerseyNumber.value);
                fieldGeneratorJerseyNumber.have_value = false;
              }
            if (fieldGeneratorWeightInPounds.have_value)
              {
                result->setWeightInPoundsText(fieldGeneratorWeightInPounds.value);
                fieldGeneratorWeightInPounds.have_value = false;
              }
            if (fieldGeneratorHeightInInches.have_value)
              {
                result->setHeightInInchesText(fieldGeneratorHeightInInches.value);
                fieldGeneratorHeightInInches.have_value = false;
              }
            if (fieldGeneratorPosition.have_value)
              {
                result->setPosition(fieldGeneratorPosition.value.referenced());
                fieldGeneratorPosition.have_value = false;
              }
            if (fieldGeneratorStatus.have_value)
              {
                result->setStatus(fieldGeneratorStatus.value.referenced());
                fieldGeneratorStatus.have_value = false;
              }
            if (fieldGeneratorThrowHand.have_value)
              {
                result->setThrowHand(fieldGeneratorThrowHand.value);
                fieldGeneratorThrowHand.have_value = false;
              }
            if (fieldGeneratorBatHand.have_value)
              {
                result->setBatHand(fieldGeneratorBatHand.value);
                fieldGeneratorBatHand.have_value = false;
              }
            if (fieldGeneratorBirthDate.have_value)
              {
                result->setBirthDate(fieldGeneratorBirthDate.value.referenced());
                fieldGeneratorBirthDate.have_value = false;
              }
            if (fieldGeneratorBirthCountry.have_value)
              {
                result->setBirthCountry(fieldGeneratorBirthCountry.value);
                fieldGeneratorBirthCountry.have_value = false;
              }
            if (fieldGeneratorBirthState.have_value)
              {
                result->setBirthState(fieldGeneratorBirthState.value);
                fieldGeneratorBirthState.have_value = false;
              }
            if (fieldGeneratorBirthCity.have_value)
              {
                result->setBirthCity(fieldGeneratorBirthCity.value);
                fieldGeneratorBirthCity.have_value = false;
              }
            if (fieldGeneratorCollege.have_value)
              {
                result->setCollege(fieldGeneratorCollege.value);
                fieldGeneratorCollege.have_value = false;
              }
            if (fieldGeneratorHighSchool.have_value)
              {
                result->setHighSchool(fieldGeneratorHighSchool.value);
                fieldGeneratorHighSchool.have_value = false;
              }
            if (fieldGeneratorExperienceInYears.have_value)
              {
                result->setExperienceInYears(fieldGeneratorExperienceInYears.value);
                fieldGeneratorExperienceInYears.have_value = false;
              }
            if (fieldGeneratorExperienceCollege.have_value)
              {
                result->setExperienceCollege(fieldGeneratorExperienceCollege.value);
                fieldGeneratorExperienceCollege.have_value = false;
              }
            if (fieldGeneratorImages.have_value)
              {
                result->initImages();
                size_t count = fieldGeneratorImages.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendImages(fieldGeneratorImages.value[num].referenced());
                  }
                fieldGeneratorImages.value.clear();
                fieldGeneratorImages.have_value = false;
              }
          }
        virtual void handle_result(SportsPlayerJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'B':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "tHand") == 0)
                                return &fieldGeneratorBatHand;
                            break;
                        case 'i':
                            if (strncmp(&(field_name[2]), "rth", 3) == 0)
                              {
                                switch ((unsigned char)(field_name[5]))
                                  {
                                    case 'C':
                                        switch ((unsigned char)(field_name[6]))
                                          {
                                            case 'i':
                                                if (strcmp(&(field_name[7]), "ty") == 0)
                                                    return &fieldGeneratorBirthCity;
                                                break;
                                            case 'o':
                                                if (strcmp(&(field_name[7]), "untry") == 0)
                                                    return &fieldGeneratorBirthCountry;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'D':
                                        if (strcmp(&(field_name[6]), "ate") == 0)
                                            return &fieldGeneratorBirthDate;
                                        break;
                                    case 'S':
                                        if (strcmp(&(field_name[6]), "tate") == 0)
                                            return &fieldGeneratorBirthState;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'C':
                    if (strcmp(&(field_name[1]), "ollege") == 0)
                        return &fieldGeneratorCollege;
                    break;
                case 'E':
                    if (strncmp(&(field_name[1]), "xperience", 9) == 0)
                      {
                        switch ((unsigned char)(field_name[10]))
                          {
                            case 'C':
                                if (strcmp(&(field_name[11]), "ollege") == 0)
                                    return &fieldGeneratorExperienceCollege;
                                break;
                            case 'I':
                                if (strcmp(&(field_name[11]), "nYears") == 0)
                                    return &fieldGeneratorExperienceInYears;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'F':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'i':
                            if (strcmp(&(field_name[2]), "rstName") == 0)
                                return &fieldGeneratorFirstName;
                            break;
                        case 'u':
                            if (strcmp(&(field_name[2]), "llName") == 0)
                                return &fieldGeneratorFullName;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'H':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            if (strcmp(&(field_name[2]), "ightInInches") == 0)
                                return &fieldGeneratorHeightInInches;
                            break;
                        case 'i':
                            if (strcmp(&(field_name[2]), "ghSchool") == 0)
                                return &fieldGeneratorHighSchool;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'I':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'D':
                            if (field_name[2] == 0)
                                return &fieldGeneratorID;
                            break;
                        case 'm':
                            if (strcmp(&(field_name[2]), "ages") == 0)
                                return &fieldGeneratorImages;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'J':
                    if (strcmp(&(field_name[1]), "erseyNumber") == 0)
                        return &fieldGeneratorJerseyNumber;
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "astName") == 0)
                        return &fieldGeneratorLastName;
                    break;
                case 'P':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'o':
                            if (strcmp(&(field_name[2]), "sition") == 0)
                                return &fieldGeneratorPosition;
                            break;
                        case 'r':
                            if (strcmp(&(field_name[2]), "eferredName") == 0)
                                return &fieldGeneratorPreferredName;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "tatus") == 0)
                        return &fieldGeneratorStatus;
                    break;
                case 'T':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            if (strcmp(&(field_name[2]), "am") == 0)
                                return &fieldGeneratorTeam;
                            break;
                        case 'h':
                            if (strcmp(&(field_name[2]), "rowHand") == 0)
                                return &fieldGeneratorThrowHand;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'W':
                    if (strcmp(&(field_name[1]), "eightInPounds") == 0)
                        return &fieldGeneratorWeightInPounds;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorFirstName("field \"FirstName\" of the SportsPlayer class"), fieldGeneratorLastName("field \"LastName\" of the SportsPlayer class"), fieldGeneratorPreferredName("field \"PreferredName\" of the SportsPlayer class"), fieldGeneratorFullName("field \"FullName\" of the SportsPlayer class"), fieldGeneratorTeam("field \"Team\" of the SportsPlayer class", ignore_extras), fieldGeneratorID("field \"ID\" of the SportsPlayer class"), fieldGeneratorJerseyNumber("field \"JerseyNumber\" of the SportsPlayer class"), fieldGeneratorWeightInPounds("field \"WeightInPounds\" of the SportsPlayer class"), fieldGeneratorHeightInInches("field \"HeightInInches\" of the SportsPlayer class"), fieldGeneratorPosition("field \"Position\" of the SportsPlayer class", ignore_extras), fieldGeneratorStatus("field \"Status\" of the SportsPlayer class", ignore_extras), fieldGeneratorThrowHand("field \"ThrowHand\" of the SportsPlayer class"), fieldGeneratorBatHand("field \"BatHand\" of the SportsPlayer class"), fieldGeneratorBirthDate("field \"BirthDate\" of the SportsPlayer class", ignore_extras), fieldGeneratorBirthCountry("field \"BirthCountry\" of the SportsPlayer class"), fieldGeneratorBirthState("field \"BirthState\" of the SportsPlayer class"), fieldGeneratorBirthCity("field \"BirthCity\" of the SportsPlayer class"), fieldGeneratorCollege("field \"College\" of the SportsPlayer class"), fieldGeneratorHighSchool("field \"HighSchool\" of the SportsPlayer class"), fieldGeneratorExperienceInYears("field \"ExperienceInYears\" of the SportsPlayer class"), fieldGeneratorExperienceCollege("field \"ExperienceCollege\" of the SportsPlayer class"), fieldGeneratorImages("field \"Images\" of the SportsPlayer class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsPlayer class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorFirstName.reset();
            fieldGeneratorLastName.reset();
            fieldGeneratorPreferredName.reset();
            fieldGeneratorFullName.reset();
            fieldGeneratorTeam.reset();
            fieldGeneratorID.reset();
            fieldGeneratorJerseyNumber.reset();
            fieldGeneratorWeightInPounds.reset();
            fieldGeneratorHeightInInches.reset();
            fieldGeneratorPosition.reset();
            fieldGeneratorStatus.reset();
            fieldGeneratorThrowHand.reset();
            fieldGeneratorBatHand.reset();
            fieldGeneratorBirthDate.reset();
            fieldGeneratorBirthCountry.reset();
            fieldGeneratorBirthState.reset();
            fieldGeneratorBirthCity.reset();
            fieldGeneratorCollege.reset();
            fieldGeneratorHighSchool.reset();
            fieldGeneratorExperienceInYears.reset();
            fieldGeneratorExperienceCollege.reset();
            fieldGeneratorImages.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSPLAYERJSON_H */
