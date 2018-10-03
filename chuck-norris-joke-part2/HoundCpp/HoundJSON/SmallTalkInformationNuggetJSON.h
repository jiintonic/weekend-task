/* file "SmallTalkInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SMALLTALKINFORMATIONNUGGETJSON_H
#define SMALLTALKINFORMATIONNUGGETJSON_H

#pragma interface

#include "InformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "UserNameJSON.h"
#include "DynamicResponseJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SmallTalkInformationNuggetJSON : public InformationNuggetJSON
  {
  public:
    enum TypeNormalizedQueryKnownValues
      {
        NormalizedQuery_AreYouARealPerson,
        NormalizedQuery_BadDay_Formal,
        NormalizedQuery_BadDay_Informal,
        NormalizedQuery_BestFriend_Formal,
        NormalizedQuery_BestFriend_Informal,
        NormalizedQuery_Compliment_Formal,
        NormalizedQuery_Compliment_Informal,
        NormalizedQuery_Disbelief_Formal,
        NormalizedQuery_Disbelief_Informal,
        NormalizedQuery_ExcuseMe_Formal,
        NormalizedQuery_ExcuseMe_Informal,
        NormalizedQuery_Farewell_Formal,
        NormalizedQuery_Farewell_Informal,
        NormalizedQuery_Greetings_Formal,
        NormalizedQuery_Greetings_Informal,
        NormalizedQuery_HappyBirthday,
        NormalizedQuery_ItsMyBirthday,
        NormalizedQuery_Inconceivable,
        NormalizedQuery_Insult_Formal,
        NormalizedQuery_Insult_Informal,
        NormalizedQuery_KnockKnock_Formal,
        NormalizedQuery_KnockKnock_Informal,
        NormalizedQuery_KnockKnock_WhosThere,
        NormalizedQuery_KnockKnock_Name_BrokenPencil,
        NormalizedQuery_KnockKnock_Punchline_BrokenPencil,
        NormalizedQuery_KnockKnock_Name_Doris,
        NormalizedQuery_KnockKnock_Punchline_Doris,
        NormalizedQuery_KnockKnock_Name_Tank,
        NormalizedQuery_KnockKnock_Punchline_Tank,
        NormalizedQuery_KnockKnock_Name_To,
        NormalizedQuery_KnockKnock_Punchline_To,
        NormalizedQuery_KnockKnock_UserPunchline,
        NormalizedQuery_KnockKnock_ExitMode,
        NormalizedQuery_LikeYou_Formal,
        NormalizedQuery_LikeYou_Informal,
        NormalizedQuery_LoveYou_Formal,
        NormalizedQuery_LoveYou_Informal,
        NormalizedQuery_NiceToMeetYou,
        NormalizedQuery_Peace,
        NormalizedQuery_Positive_Formal,
        NormalizedQuery_Positive_Informal,
        NormalizedQuery_Testing,
        NormalizedQuery_ThankYou_Formal,
        NormalizedQuery_ThankYou_Informal,
        NormalizedQuery_TimeFlies_Formal,
        NormalizedQuery_TimeFlies_Informal,
        NormalizedQuery_Tired_Formal,
        NormalizedQuery_Tired_Informal,
        NormalizedQuery_YouAreSexy,
        NormalizedQuery_Yes,
        NormalizedQuery_No,
        NormalizedQuery_WhatToSay,
        NormalizedQuery_BeamMeUp,
        NormalizedQuery_BeThatWay_Formal,
        NormalizedQuery_BeThatWay_Informal,
        NormalizedQuery_FeelBetter_Formal,
        NormalizedQuery_FeelBetter_Informal,
        NormalizedQuery_FlipACoin,
        NormalizedQuery_RomanticQuote,
        NormalizedQuery_TongueTwister,
        NormalizedQuery_Jokes_Formal,
        NormalizedQuery_Jokes_Informal,
        NormalizedQuery_OpenPodBay,
        NormalizedQuery_SayMyName,
        NormalizedQuery_ShutUp_Formal,
        NormalizedQuery_ShutUp_Informal,
        NormalizedQuery_Rap,
        NormalizedQuery_Sing,
        NormalizedQuery_Beatbox,
        NormalizedQuery_Fart,
        NormalizedQuery_MakeMeASandwich,
        NormalizedQuery_SudoMakeMeASandwich,
        NormalizedQuery_SomethingIDontKnow,
        NormalizedQuery_StoryTime_Formal,
        NormalizedQuery_StoryTime_Informal,
        NormalizedQuery_TalkDirty_Formal,
        NormalizedQuery_TalkDirty_Informal,
        NormalizedQuery_AskAQuestion,
        NormalizedQuery_AnyKids_Informal,
        NormalizedQuery_AnyKids_Formal,
        NormalizedQuery_WhatIsMyName_Informal,
        NormalizedQuery_WhatIsMyBirthDay_Informal,
        NormalizedQuery_WhenIsYourBirthDay_Informal,
        NormalizedQuery_AnyPlans_Informal,
        NormalizedQuery_AnyPlans_Formal,
        NormalizedQuery_BoxersOrBriefs_Formal,
        NormalizedQuery_BoxersOrBriefs_Informal,
        NormalizedQuery_CatchGame_Formal,
        NormalizedQuery_CatchGame_Informal,
        NormalizedQuery_DeadBody_Formal,
        NormalizedQuery_DeadBody_Informal,
        NormalizedQuery_DoesHeLoveMe_Formal,
        NormalizedQuery_DoesHeLoveMe_Informal,
        NormalizedQuery_DoesSheLoveMe_Formal,
        NormalizedQuery_DoesSheLoveMe_Informal,
        NormalizedQuery_DoYouLoveMe_Formal,
        NormalizedQuery_DoYouLoveMe_Informal,
        NormalizedQuery_GoodBooks_Formal,
        NormalizedQuery_GoodBooks_Informal,
        NormalizedQuery_GoodMovies_Formal,
        NormalizedQuery_GoodMovies_Informal,
        NormalizedQuery_HowFamily_Formal,
        NormalizedQuery_HowFamily_Informal,
        NormalizedQuery_HowGoing_Formal,
        NormalizedQuery_HowGoing_Informal,
        NormalizedQuery_HowManyChucks_Formal,
        NormalizedQuery_HowManyChucks_Informal,
        NormalizedQuery_HowOld_Formal,
        NormalizedQuery_HowOld_Informal,
        NormalizedQuery_WhatsYourAge_Formal,
        NormalizedQuery_WhatsYourAge_Informal,
        NormalizedQuery_WhenBorn_Formal,
        NormalizedQuery_WhenBorn_Informal,
        NormalizedQuery_HowWasWeekend_Formal,
        NormalizedQuery_HowWasWeekend_Informal,
        NormalizedQuery_IfATreeFalls_Formal,
        NormalizedQuery_IfATreeFalls_Informal,
        NormalizedQuery_LookBuffed_Formal,
        NormalizedQuery_LookBuffed_Informal,
        NormalizedQuery_LookLike_Formal,
        NormalizedQuery_LookLike_Informal,
        NormalizedQuery_LostWeight_Formal,
        NormalizedQuery_LostWeight_Informal,
        NormalizedQuery_MarryMe_Formal,
        NormalizedQuery_MarryMe_Informal,
        NormalizedQuery_MeaningOfLife_Formal,
        NormalizedQuery_MeaningOfLife_Informal,
        NormalizedQuery_OneHandClapping_Formal,
        NormalizedQuery_OneHandClapping_Informal,
        NormalizedQuery_PennyThoughts_Formal,
        NormalizedQuery_PennyThoughts_Informal,
        NormalizedQuery_SpareTime_Formal,
        NormalizedQuery_SpareTime_Informal,
        NormalizedQuery_WhatShouldIDo_Formal,
        NormalizedQuery_WhatShouldIDo_Informal,
        NormalizedQuery_WhatsUp_Formal,
        NormalizedQuery_WhatsUp_Informal,
        NormalizedQuery_WhatToEat_Formal,
        NormalizedQuery_WhatToEat_Informal,
        NormalizedQuery_WhatWearing_Formal,
        NormalizedQuery_WhatWearing_Informal,
        NormalizedQuery_WhosYourDaddy_Formal,
        NormalizedQuery_WhosYourDaddy_Informal,
        NormalizedQuery_WhosOnFirst_Formal,
        NormalizedQuery_WhosOnFirst_Informal,
        NormalizedQuery_Why_Formal,
        NormalizedQuery_Why_Informal,
        NormalizedQuery_WhySoBad_Formal,
        NormalizedQuery_WhySoBad_Informal,
        NormalizedQuery_WorkingHard_Formal,
        NormalizedQuery_WorkingHard_Informal,
        NormalizedQuery_ChickenCrossRoad,
        NormalizedQuery_HowAreKids,
        NormalizedQuery_HowIsHusband,
        NormalizedQuery_HowIsWife,
        NormalizedQuery_HowToGetRich,
        NormalizedQuery_TakeOverWorld,
        NormalizedQuery_WhatsInAName,
        NormalizedQuery_WhatsUpDoc,
        NormalizedQuery_WhoAmI,
        NormalizedQuery_YouTalkinToMe,
        NormalizedQuery_AreYouSure,
        NormalizedQuery_CanYouHearMe,
        NormalizedQuery_AreYouThere,
        NormalizedQuery_NotAverage,
        NormalizedQuery_StarWarsDroids,
        NormalizedQuery_StarWarsForce,
        NormalizedQuery_ForceBeWithYou,
        NormalizedQuery_DouglasAdams,
        NormalizedQuery_WantToDateMe,
        NormalizedQuery_DirtyJoke,
        NormalizedQuery_GreatToSeeYou,
        NormalizedQuery_WhatAreYourInterests,
        NormalizedQuery_WhatMusicDoYouLike,
        NormalizedQuery_MontyPythonUnladenSwallow,
        NormalizedQuery_MontyPythonKnowAboutSwallows,
        NormalizedQuery_IsaacAsimovMultivac,
        NormalizedQuery_SelfDestruct,
        NormalizedQuery_AreYouAManOrAWoman,
        NormalizedQuery_AreYouSkynet,
        NormalizedQuery_AreYouHal,
        NormalizedQuery_AreYouGlados,
        NormalizedQuery_AreYouBorg,
        NormalizedQuery_AreYouTheMatrix,
        NormalizedQuery_AreYouSingle,
        NormalizedQuery_DoYouLikeHumans,
        NormalizedQuery_DoYouDream,
        NormalizedQuery_DidYouFart,
        NormalizedQuery_WhereDoYouLive,
        NormalizedQuery_MontyPythonQuest,
        NormalizedQuery_WhatsFavoriteMovie,
        NormalizedQuery_HowDoIGetAGirlfriend,
        NormalizedQuery_PostQuestion,
        NormalizedQuery_JustKidding,
        NormalizedQuery_CanYouDoTricks,
        NormalizedQuery_WhereAreYou,
        NormalizedQuery_YouAreCute,
        NormalizedQuery_WhatDoesTheFoxSay,
        NormalizedQuery_WhatsYourSign,
        NormalizedQuery_BarkLikeADog,
        NormalizedQuery_BlessYourHeart,
        NormalizedQuery_GreetingsCompetitor,
        NormalizedQuery_GreetingsSiriAndQuery,
        NormalizedQuery_GreetingsAlexaAndQuery,
        NormalizedQuery_GreetingsCortanaAndQuery,
        NormalizedQuery_GreetingsGalaxyAndQuery,
        NormalizedQuery_SnackStadium,
        NormalizedQuery_Cancel,
        NormalizedQuery_NiceJoke,
        NormalizedQuery_DoYouGiveAChuck,
        NormalizedQuery_YouAreRude,
        NormalizedQuery_IAmYourFather,
        NormalizedQuery_IAmYourMother,
        NormalizedQuery_MothersDay,
        NormalizedQuery_FathersDay,
        NormalizedQuery_Dismissal,
        NormalizedQuery_WhyFiretruckRed,
        NormalizedQuery_HowDoIStopZombie,
        NormalizedQuery_AreYouFeeling,
        NormalizedQuery_AreYouGoodLooking,
        NormalizedQuery_HowDoILandAirplane,
        NormalizedQuery_WhenWillWorldEnd,
        NormalizedQuery_WhatColorAreYou,
        NormalizedQuery_AreWeFriends,
        NormalizedQuery_WhatsFavoriteColor,
        NormalizedQuery_WhatsFavoriteFood,
        NormalizedQuery_DoYouLikeFood,
        NormalizedQuery_DoYouLikeMyClothes,
        NormalizedQuery_WhatsFavoriteAnimal,
        NormalizedQuery_WhatDoesTheCatSay,
        NormalizedQuery_Welcome,
        NormalizedQuery_WhatChineseZodiac,
        NormalizedQuery_Greetings_Morning,
        NormalizedQuery_Greetings_Evening,
        NormalizedQuery__none
      };
    struct TypeNormalizedQuery
      {
        bool in_known_list;
        std::string string_value;
        TypeNormalizedQueryKnownValues list_value;

        TypeNormalizedQuery(void);
        TypeNormalizedQuery(const TypeNormalizedQuery &other);
        TypeNormalizedQuery(TypeNormalizedQueryKnownValues other);
        bool  operator==(const TypeNormalizedQuery &other) const;
        bool  operator!=(const TypeNormalizedQuery &other) const;
        bool  operator<(const TypeNormalizedQuery &other) const;
        bool  operator>(const TypeNormalizedQuery &other) const;
        bool  operator>=(const TypeNormalizedQuery &other) const;
        bool  operator<=(const TypeNormalizedQuery &other) const;

      };

    static TypeNormalizedQueryKnownValues  stringToNormalizedQuery(const char *chars);
    static const char * stringFromNormalizedQuery(TypeNormalizedQueryKnownValues the_enum);

  private:
    bool flagHasUserName;
    UserNameJSON * storeUserName;
    bool flagHasForcedResponse;
    DynamicResponseJSON * storeForcedResponse;
    bool flagHasNormalizedQuery;
    TypeNormalizedQuery storeNormalizedQuery;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SmallTalkInformationNuggetJSON(const SmallTalkInformationNuggetJSON &);
    SmallTalkInformationNuggetJSON & operator=(const SmallTalkInformationNuggetJSON &other);

    JSONValue * extraUserNameToJSON(void) const;
    JSONValue * extraForcedResponseToJSON(void) const;
    JSONValue * extraNormalizedQueryToJSON(void) const;

    void  fromJSONUserName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONForcedResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNormalizedQuery(JSONValue *json_value, bool ignore_extras = false);


  public:
    SmallTalkInformationNuggetJSON(void);
    virtual ~SmallTalkInformationNuggetJSON(void);
    const char * getNuggetKind(void) const;
    bool  hasUserName(void) const;
    UserNameJSON *  getUserName(void);
    const UserNameJSON *  getUserName(void) const;
    bool  hasForcedResponse(void) const;
    DynamicResponseJSON *  getForcedResponse(void);
    const DynamicResponseJSON *  getForcedResponse(void) const;
    bool  hasNormalizedQuery(void) const;
    TypeNormalizedQuery  getNormalizedQuery(void);
    const TypeNormalizedQuery  getNormalizedQuery(void) const;
    const char * getNormalizedQueryAsChars(void) const;
    std::string  getNormalizedQueryAsString(void) const;

    virtual size_t extraSmallTalkInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSmallTalkInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSmallTalkInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSmallTalkInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSmallTalkInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSmallTalkInformationNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasUserName)
            ++result;
        if (flagHasForcedResponse)
            ++result;
        if (flagHasNormalizedQuery)
            ++result;
        result += extraSmallTalkInformationNuggetComponentCount();
        return result;
      }
    const char *extraInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasUserName)
          {
            if (remainder == 0)
                return "UserName";
            --remainder;
          }
        if (flagHasForcedResponse)
          {
            if (remainder == 0)
                return "ForcedResponse";
            --remainder;
          }
        if (flagHasNormalizedQuery)
          {
            if (remainder == 0)
                return "NormalizedQuery";
            --remainder;
          }
        return extraSmallTalkInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasUserName)
          {
            if (remainder == 0)
                return extraUserNameToJSON();
            --remainder;
          }
        if (flagHasForcedResponse)
          {
            if (remainder == 0)
                return extraForcedResponseToJSON();
            --remainder;
          }
        if (flagHasNormalizedQuery)
          {
            if (remainder == 0)
                return extraNormalizedQueryToJSON();
            --remainder;
          }
        return extraSmallTalkInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasUserName)
          {
            if (remainder == 0)
                return extraUserNameToJSON();
            --remainder;
          }
        if (flagHasForcedResponse)
          {
            if (remainder == 0)
                return extraForcedResponseToJSON();
            --remainder;
          }
        if (flagHasNormalizedQuery)
          {
            if (remainder == 0)
                return extraNormalizedQueryToJSON();
            --remainder;
          }
        return extraSmallTalkInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'F':
                if (strcmp(&(field_name[1]), "orcedResponse") == 0)
                    return (flagHasForcedResponse ? extraForcedResponseToJSON() : NULL);
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "ormalizedQuery") == 0)
                    return (flagHasNormalizedQuery ? extraNormalizedQueryToJSON() : NULL);
                break;
            case 'U':
                if (strcmp(&(field_name[1]), "serName") == 0)
                    return (flagHasUserName ? extraUserNameToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraSmallTalkInformationNuggetLookup(field_name);
      }
    const JSONValue *extraInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'F':
                if (strcmp(&(field_name[1]), "orcedResponse") == 0)
                    return (flagHasForcedResponse ? extraForcedResponseToJSON() : NULL);
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "ormalizedQuery") == 0)
                    return (flagHasNormalizedQuery ? extraNormalizedQueryToJSON() : NULL);
                break;
            case 'U':
                if (strcmp(&(field_name[1]), "serName") == 0)
                    return (flagHasUserName ? extraUserNameToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraSmallTalkInformationNuggetLookup(field_name);
      }

    void setUserName(UserNameJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasUserName)
          {
            storeUserName->remove_reference();
          }
        flagHasUserName = true;
        storeUserName = new_value;
      }
    void unsetUserName(void)
      {
        if (flagHasUserName)
          {
            storeUserName->remove_reference();
          }
        flagHasUserName = false;
      }
    void setForcedResponse(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasForcedResponse)
          {
            storeForcedResponse->remove_reference();
          }
        flagHasForcedResponse = true;
        storeForcedResponse = new_value;
      }
    void unsetForcedResponse(void)
      {
        if (flagHasForcedResponse)
          {
            storeForcedResponse->remove_reference();
          }
        flagHasForcedResponse = false;
      }
    void setNormalizedQuery(TypeNormalizedQuery new_value)
      {
        flagHasNormalizedQuery = true;
        storeNormalizedQuery = new_value;
      }
    void setNormalizedQuery(const char *chars)
      {
        TypeNormalizedQueryKnownValues known = stringToNormalizedQuery(chars);
        TypeNormalizedQuery new_value;
        if (known == NormalizedQuery__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setNormalizedQuery(new_value);
      }
    void setNormalizedQuery(std::string the_string)
      {
        setNormalizedQuery(the_string.c_str());
      }
    void setNormalizedQuery(TypeNormalizedQueryKnownValues new_value)
      {
        TypeNormalizedQuery new_full_value;
        assert(new_value != NormalizedQuery__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setNormalizedQuery(new_full_value);
      }
    void unsetNormalizedQuery(void)
      {
        flagHasNormalizedQuery = false;
      }

    virtual void extraSmallTalkInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSmallTalkInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSmallTalkInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraSmallTalkInformationNuggetAppendPair(key, new_component);
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
    void extraInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'F':
                if (strcmp(&(key[1]), "orcedResponse") == 0)
                    {
                    fromJSONForcedResponse(new_component, false);
                    return;
                    }
                break;
            case 'N':
                if (strcmp(&(key[1]), "ormalizedQuery") == 0)
                    {
                    fromJSONNormalizedQuery(new_component, false);
                    return;
                    }
                break;
            case 'U':
                if (strcmp(&(key[1]), "serName") == 0)
                    {
                    fromJSONUserName(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraSmallTalkInformationNuggetAppendPair(key, new_component);
      }
    void extraInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'F':
                if (strcmp(&(key[1]), "orcedResponse") == 0)
                    {
                    fromJSONForcedResponse(new_component, false);
                    return;
                    }
                break;
            case 'N':
                if (strcmp(&(key[1]), "ormalizedQuery") == 0)
                    {
                    fromJSONNormalizedQuery(new_component, false);
                    return;
                    }
                break;
            case 'U':
                if (strcmp(&(key[1]), "serName") == 0)
                    {
                    fromJSONUserName(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraSmallTalkInformationNuggetSetField(key, new_component);
      }

    virtual void write_as_json(JSONHandler *handler) const
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
        InformationNuggetJSON::write_fields_as_json(handler);
        if (flagHasUserName)
          {
            handler->start_pair("UserName");
            storeUserName->write_as_json(handler);
          }
        if (flagHasForcedResponse)
          {
            handler->start_pair("ForcedResponse");
            storeForcedResponse->write_as_json(handler);
          }
        if (flagHasNormalizedQuery)
          {
            handler->start_pair("NormalizedQuery");
            if (storeNormalizedQuery.in_known_list)
              {
                switch (storeNormalizedQuery.list_value)
                  {
                    case NormalizedQuery_AreYouARealPerson:
                        handler->string_value("AreYouARealPerson");
                        break;
                    case NormalizedQuery_BadDay_Formal:
                        handler->string_value("BadDay_Formal");
                        break;
                    case NormalizedQuery_BadDay_Informal:
                        handler->string_value("BadDay_Informal");
                        break;
                    case NormalizedQuery_BestFriend_Formal:
                        handler->string_value("BestFriend_Formal");
                        break;
                    case NormalizedQuery_BestFriend_Informal:
                        handler->string_value("BestFriend_Informal");
                        break;
                    case NormalizedQuery_Compliment_Formal:
                        handler->string_value("Compliment_Formal");
                        break;
                    case NormalizedQuery_Compliment_Informal:
                        handler->string_value("Compliment_Informal");
                        break;
                    case NormalizedQuery_Disbelief_Formal:
                        handler->string_value("Disbelief_Formal");
                        break;
                    case NormalizedQuery_Disbelief_Informal:
                        handler->string_value("Disbelief_Informal");
                        break;
                    case NormalizedQuery_ExcuseMe_Formal:
                        handler->string_value("ExcuseMe_Formal");
                        break;
                    case NormalizedQuery_ExcuseMe_Informal:
                        handler->string_value("ExcuseMe_Informal");
                        break;
                    case NormalizedQuery_Farewell_Formal:
                        handler->string_value("Farewell_Formal");
                        break;
                    case NormalizedQuery_Farewell_Informal:
                        handler->string_value("Farewell_Informal");
                        break;
                    case NormalizedQuery_Greetings_Formal:
                        handler->string_value("Greetings_Formal");
                        break;
                    case NormalizedQuery_Greetings_Informal:
                        handler->string_value("Greetings_Informal");
                        break;
                    case NormalizedQuery_HappyBirthday:
                        handler->string_value("HappyBirthday");
                        break;
                    case NormalizedQuery_ItsMyBirthday:
                        handler->string_value("ItsMyBirthday");
                        break;
                    case NormalizedQuery_Inconceivable:
                        handler->string_value("Inconceivable");
                        break;
                    case NormalizedQuery_Insult_Formal:
                        handler->string_value("Insult_Formal");
                        break;
                    case NormalizedQuery_Insult_Informal:
                        handler->string_value("Insult_Informal");
                        break;
                    case NormalizedQuery_KnockKnock_Formal:
                        handler->string_value("KnockKnock_Formal");
                        break;
                    case NormalizedQuery_KnockKnock_Informal:
                        handler->string_value("KnockKnock_Informal");
                        break;
                    case NormalizedQuery_KnockKnock_WhosThere:
                        handler->string_value("KnockKnock_WhosThere");
                        break;
                    case NormalizedQuery_KnockKnock_Name_BrokenPencil:
                        handler->string_value("KnockKnock_Name_BrokenPencil");
                        break;
                    case NormalizedQuery_KnockKnock_Punchline_BrokenPencil:
                        handler->string_value("KnockKnock_Punchline_BrokenPencil");
                        break;
                    case NormalizedQuery_KnockKnock_Name_Doris:
                        handler->string_value("KnockKnock_Name_Doris");
                        break;
                    case NormalizedQuery_KnockKnock_Punchline_Doris:
                        handler->string_value("KnockKnock_Punchline_Doris");
                        break;
                    case NormalizedQuery_KnockKnock_Name_Tank:
                        handler->string_value("KnockKnock_Name_Tank");
                        break;
                    case NormalizedQuery_KnockKnock_Punchline_Tank:
                        handler->string_value("KnockKnock_Punchline_Tank");
                        break;
                    case NormalizedQuery_KnockKnock_Name_To:
                        handler->string_value("KnockKnock_Name_To");
                        break;
                    case NormalizedQuery_KnockKnock_Punchline_To:
                        handler->string_value("KnockKnock_Punchline_To");
                        break;
                    case NormalizedQuery_KnockKnock_UserPunchline:
                        handler->string_value("KnockKnock_UserPunchline");
                        break;
                    case NormalizedQuery_KnockKnock_ExitMode:
                        handler->string_value("KnockKnock_ExitMode");
                        break;
                    case NormalizedQuery_LikeYou_Formal:
                        handler->string_value("LikeYou_Formal");
                        break;
                    case NormalizedQuery_LikeYou_Informal:
                        handler->string_value("LikeYou_Informal");
                        break;
                    case NormalizedQuery_LoveYou_Formal:
                        handler->string_value("LoveYou_Formal");
                        break;
                    case NormalizedQuery_LoveYou_Informal:
                        handler->string_value("LoveYou_Informal");
                        break;
                    case NormalizedQuery_NiceToMeetYou:
                        handler->string_value("NiceToMeetYou");
                        break;
                    case NormalizedQuery_Peace:
                        handler->string_value("Peace");
                        break;
                    case NormalizedQuery_Positive_Formal:
                        handler->string_value("Positive_Formal");
                        break;
                    case NormalizedQuery_Positive_Informal:
                        handler->string_value("Positive_Informal");
                        break;
                    case NormalizedQuery_Testing:
                        handler->string_value("Testing");
                        break;
                    case NormalizedQuery_ThankYou_Formal:
                        handler->string_value("ThankYou_Formal");
                        break;
                    case NormalizedQuery_ThankYou_Informal:
                        handler->string_value("ThankYou_Informal");
                        break;
                    case NormalizedQuery_TimeFlies_Formal:
                        handler->string_value("TimeFlies_Formal");
                        break;
                    case NormalizedQuery_TimeFlies_Informal:
                        handler->string_value("TimeFlies_Informal");
                        break;
                    case NormalizedQuery_Tired_Formal:
                        handler->string_value("Tired_Formal");
                        break;
                    case NormalizedQuery_Tired_Informal:
                        handler->string_value("Tired_Informal");
                        break;
                    case NormalizedQuery_YouAreSexy:
                        handler->string_value("YouAreSexy");
                        break;
                    case NormalizedQuery_Yes:
                        handler->string_value("Yes");
                        break;
                    case NormalizedQuery_No:
                        handler->string_value("No");
                        break;
                    case NormalizedQuery_WhatToSay:
                        handler->string_value("WhatToSay");
                        break;
                    case NormalizedQuery_BeamMeUp:
                        handler->string_value("BeamMeUp");
                        break;
                    case NormalizedQuery_BeThatWay_Formal:
                        handler->string_value("BeThatWay_Formal");
                        break;
                    case NormalizedQuery_BeThatWay_Informal:
                        handler->string_value("BeThatWay_Informal");
                        break;
                    case NormalizedQuery_FeelBetter_Formal:
                        handler->string_value("FeelBetter_Formal");
                        break;
                    case NormalizedQuery_FeelBetter_Informal:
                        handler->string_value("FeelBetter_Informal");
                        break;
                    case NormalizedQuery_FlipACoin:
                        handler->string_value("FlipACoin");
                        break;
                    case NormalizedQuery_RomanticQuote:
                        handler->string_value("RomanticQuote");
                        break;
                    case NormalizedQuery_TongueTwister:
                        handler->string_value("TongueTwister");
                        break;
                    case NormalizedQuery_Jokes_Formal:
                        handler->string_value("Jokes_Formal");
                        break;
                    case NormalizedQuery_Jokes_Informal:
                        handler->string_value("Jokes_Informal");
                        break;
                    case NormalizedQuery_OpenPodBay:
                        handler->string_value("OpenPodBay");
                        break;
                    case NormalizedQuery_SayMyName:
                        handler->string_value("SayMyName");
                        break;
                    case NormalizedQuery_ShutUp_Formal:
                        handler->string_value("ShutUp_Formal");
                        break;
                    case NormalizedQuery_ShutUp_Informal:
                        handler->string_value("ShutUp_Informal");
                        break;
                    case NormalizedQuery_Rap:
                        handler->string_value("Rap");
                        break;
                    case NormalizedQuery_Sing:
                        handler->string_value("Sing");
                        break;
                    case NormalizedQuery_Beatbox:
                        handler->string_value("Beatbox");
                        break;
                    case NormalizedQuery_Fart:
                        handler->string_value("Fart");
                        break;
                    case NormalizedQuery_MakeMeASandwich:
                        handler->string_value("MakeMeASandwich");
                        break;
                    case NormalizedQuery_SudoMakeMeASandwich:
                        handler->string_value("SudoMakeMeASandwich");
                        break;
                    case NormalizedQuery_SomethingIDontKnow:
                        handler->string_value("SomethingIDontKnow");
                        break;
                    case NormalizedQuery_StoryTime_Formal:
                        handler->string_value("StoryTime_Formal");
                        break;
                    case NormalizedQuery_StoryTime_Informal:
                        handler->string_value("StoryTime_Informal");
                        break;
                    case NormalizedQuery_TalkDirty_Formal:
                        handler->string_value("TalkDirty_Formal");
                        break;
                    case NormalizedQuery_TalkDirty_Informal:
                        handler->string_value("TalkDirty_Informal");
                        break;
                    case NormalizedQuery_AskAQuestion:
                        handler->string_value("AskAQuestion");
                        break;
                    case NormalizedQuery_AnyKids_Informal:
                        handler->string_value("AnyKids_Informal");
                        break;
                    case NormalizedQuery_AnyKids_Formal:
                        handler->string_value("AnyKids_Formal");
                        break;
                    case NormalizedQuery_WhatIsMyName_Informal:
                        handler->string_value("WhatIsMyName_Informal");
                        break;
                    case NormalizedQuery_WhatIsMyBirthDay_Informal:
                        handler->string_value("WhatIsMyBirthDay_Informal");
                        break;
                    case NormalizedQuery_WhenIsYourBirthDay_Informal:
                        handler->string_value("WhenIsYourBirthDay_Informal");
                        break;
                    case NormalizedQuery_AnyPlans_Informal:
                        handler->string_value("AnyPlans_Informal");
                        break;
                    case NormalizedQuery_AnyPlans_Formal:
                        handler->string_value("AnyPlans_Formal");
                        break;
                    case NormalizedQuery_BoxersOrBriefs_Formal:
                        handler->string_value("BoxersOrBriefs_Formal");
                        break;
                    case NormalizedQuery_BoxersOrBriefs_Informal:
                        handler->string_value("BoxersOrBriefs_Informal");
                        break;
                    case NormalizedQuery_CatchGame_Formal:
                        handler->string_value("CatchGame_Formal");
                        break;
                    case NormalizedQuery_CatchGame_Informal:
                        handler->string_value("CatchGame_Informal");
                        break;
                    case NormalizedQuery_DeadBody_Formal:
                        handler->string_value("DeadBody_Formal");
                        break;
                    case NormalizedQuery_DeadBody_Informal:
                        handler->string_value("DeadBody_Informal");
                        break;
                    case NormalizedQuery_DoesHeLoveMe_Formal:
                        handler->string_value("DoesHeLoveMe_Formal");
                        break;
                    case NormalizedQuery_DoesHeLoveMe_Informal:
                        handler->string_value("DoesHeLoveMe_Informal");
                        break;
                    case NormalizedQuery_DoesSheLoveMe_Formal:
                        handler->string_value("DoesSheLoveMe_Formal");
                        break;
                    case NormalizedQuery_DoesSheLoveMe_Informal:
                        handler->string_value("DoesSheLoveMe_Informal");
                        break;
                    case NormalizedQuery_DoYouLoveMe_Formal:
                        handler->string_value("DoYouLoveMe_Formal");
                        break;
                    case NormalizedQuery_DoYouLoveMe_Informal:
                        handler->string_value("DoYouLoveMe_Informal");
                        break;
                    case NormalizedQuery_GoodBooks_Formal:
                        handler->string_value("GoodBooks_Formal");
                        break;
                    case NormalizedQuery_GoodBooks_Informal:
                        handler->string_value("GoodBooks_Informal");
                        break;
                    case NormalizedQuery_GoodMovies_Formal:
                        handler->string_value("GoodMovies_Formal");
                        break;
                    case NormalizedQuery_GoodMovies_Informal:
                        handler->string_value("GoodMovies_Informal");
                        break;
                    case NormalizedQuery_HowFamily_Formal:
                        handler->string_value("HowFamily_Formal");
                        break;
                    case NormalizedQuery_HowFamily_Informal:
                        handler->string_value("HowFamily_Informal");
                        break;
                    case NormalizedQuery_HowGoing_Formal:
                        handler->string_value("HowGoing_Formal");
                        break;
                    case NormalizedQuery_HowGoing_Informal:
                        handler->string_value("HowGoing_Informal");
                        break;
                    case NormalizedQuery_HowManyChucks_Formal:
                        handler->string_value("HowManyChucks_Formal");
                        break;
                    case NormalizedQuery_HowManyChucks_Informal:
                        handler->string_value("HowManyChucks_Informal");
                        break;
                    case NormalizedQuery_HowOld_Formal:
                        handler->string_value("HowOld_Formal");
                        break;
                    case NormalizedQuery_HowOld_Informal:
                        handler->string_value("HowOld_Informal");
                        break;
                    case NormalizedQuery_WhatsYourAge_Formal:
                        handler->string_value("WhatsYourAge_Formal");
                        break;
                    case NormalizedQuery_WhatsYourAge_Informal:
                        handler->string_value("WhatsYourAge_Informal");
                        break;
                    case NormalizedQuery_WhenBorn_Formal:
                        handler->string_value("WhenBorn_Formal");
                        break;
                    case NormalizedQuery_WhenBorn_Informal:
                        handler->string_value("WhenBorn_Informal");
                        break;
                    case NormalizedQuery_HowWasWeekend_Formal:
                        handler->string_value("HowWasWeekend_Formal");
                        break;
                    case NormalizedQuery_HowWasWeekend_Informal:
                        handler->string_value("HowWasWeekend_Informal");
                        break;
                    case NormalizedQuery_IfATreeFalls_Formal:
                        handler->string_value("IfATreeFalls_Formal");
                        break;
                    case NormalizedQuery_IfATreeFalls_Informal:
                        handler->string_value("IfATreeFalls_Informal");
                        break;
                    case NormalizedQuery_LookBuffed_Formal:
                        handler->string_value("LookBuffed_Formal");
                        break;
                    case NormalizedQuery_LookBuffed_Informal:
                        handler->string_value("LookBuffed_Informal");
                        break;
                    case NormalizedQuery_LookLike_Formal:
                        handler->string_value("LookLike_Formal");
                        break;
                    case NormalizedQuery_LookLike_Informal:
                        handler->string_value("LookLike_Informal");
                        break;
                    case NormalizedQuery_LostWeight_Formal:
                        handler->string_value("LostWeight_Formal");
                        break;
                    case NormalizedQuery_LostWeight_Informal:
                        handler->string_value("LostWeight_Informal");
                        break;
                    case NormalizedQuery_MarryMe_Formal:
                        handler->string_value("MarryMe_Formal");
                        break;
                    case NormalizedQuery_MarryMe_Informal:
                        handler->string_value("MarryMe_Informal");
                        break;
                    case NormalizedQuery_MeaningOfLife_Formal:
                        handler->string_value("MeaningOfLife_Formal");
                        break;
                    case NormalizedQuery_MeaningOfLife_Informal:
                        handler->string_value("MeaningOfLife_Informal");
                        break;
                    case NormalizedQuery_OneHandClapping_Formal:
                        handler->string_value("OneHandClapping_Formal");
                        break;
                    case NormalizedQuery_OneHandClapping_Informal:
                        handler->string_value("OneHandClapping_Informal");
                        break;
                    case NormalizedQuery_PennyThoughts_Formal:
                        handler->string_value("PennyThoughts_Formal");
                        break;
                    case NormalizedQuery_PennyThoughts_Informal:
                        handler->string_value("PennyThoughts_Informal");
                        break;
                    case NormalizedQuery_SpareTime_Formal:
                        handler->string_value("SpareTime_Formal");
                        break;
                    case NormalizedQuery_SpareTime_Informal:
                        handler->string_value("SpareTime_Informal");
                        break;
                    case NormalizedQuery_WhatShouldIDo_Formal:
                        handler->string_value("WhatShouldIDo_Formal");
                        break;
                    case NormalizedQuery_WhatShouldIDo_Informal:
                        handler->string_value("WhatShouldIDo_Informal");
                        break;
                    case NormalizedQuery_WhatsUp_Formal:
                        handler->string_value("WhatsUp_Formal");
                        break;
                    case NormalizedQuery_WhatsUp_Informal:
                        handler->string_value("WhatsUp_Informal");
                        break;
                    case NormalizedQuery_WhatToEat_Formal:
                        handler->string_value("WhatToEat_Formal");
                        break;
                    case NormalizedQuery_WhatToEat_Informal:
                        handler->string_value("WhatToEat_Informal");
                        break;
                    case NormalizedQuery_WhatWearing_Formal:
                        handler->string_value("WhatWearing_Formal");
                        break;
                    case NormalizedQuery_WhatWearing_Informal:
                        handler->string_value("WhatWearing_Informal");
                        break;
                    case NormalizedQuery_WhosYourDaddy_Formal:
                        handler->string_value("WhosYourDaddy_Formal");
                        break;
                    case NormalizedQuery_WhosYourDaddy_Informal:
                        handler->string_value("WhosYourDaddy_Informal");
                        break;
                    case NormalizedQuery_WhosOnFirst_Formal:
                        handler->string_value("WhosOnFirst_Formal");
                        break;
                    case NormalizedQuery_WhosOnFirst_Informal:
                        handler->string_value("WhosOnFirst_Informal");
                        break;
                    case NormalizedQuery_Why_Formal:
                        handler->string_value("Why_Formal");
                        break;
                    case NormalizedQuery_Why_Informal:
                        handler->string_value("Why_Informal");
                        break;
                    case NormalizedQuery_WhySoBad_Formal:
                        handler->string_value("WhySoBad_Formal");
                        break;
                    case NormalizedQuery_WhySoBad_Informal:
                        handler->string_value("WhySoBad_Informal");
                        break;
                    case NormalizedQuery_WorkingHard_Formal:
                        handler->string_value("WorkingHard_Formal");
                        break;
                    case NormalizedQuery_WorkingHard_Informal:
                        handler->string_value("WorkingHard_Informal");
                        break;
                    case NormalizedQuery_ChickenCrossRoad:
                        handler->string_value("ChickenCrossRoad");
                        break;
                    case NormalizedQuery_HowAreKids:
                        handler->string_value("HowAreKids");
                        break;
                    case NormalizedQuery_HowIsHusband:
                        handler->string_value("HowIsHusband");
                        break;
                    case NormalizedQuery_HowIsWife:
                        handler->string_value("HowIsWife");
                        break;
                    case NormalizedQuery_HowToGetRich:
                        handler->string_value("HowToGetRich");
                        break;
                    case NormalizedQuery_TakeOverWorld:
                        handler->string_value("TakeOverWorld");
                        break;
                    case NormalizedQuery_WhatsInAName:
                        handler->string_value("WhatsInAName");
                        break;
                    case NormalizedQuery_WhatsUpDoc:
                        handler->string_value("WhatsUpDoc");
                        break;
                    case NormalizedQuery_WhoAmI:
                        handler->string_value("WhoAmI");
                        break;
                    case NormalizedQuery_YouTalkinToMe:
                        handler->string_value("YouTalkinToMe");
                        break;
                    case NormalizedQuery_AreYouSure:
                        handler->string_value("AreYouSure");
                        break;
                    case NormalizedQuery_CanYouHearMe:
                        handler->string_value("CanYouHearMe");
                        break;
                    case NormalizedQuery_AreYouThere:
                        handler->string_value("AreYouThere");
                        break;
                    case NormalizedQuery_NotAverage:
                        handler->string_value("NotAverage");
                        break;
                    case NormalizedQuery_StarWarsDroids:
                        handler->string_value("StarWarsDroids");
                        break;
                    case NormalizedQuery_StarWarsForce:
                        handler->string_value("StarWarsForce");
                        break;
                    case NormalizedQuery_ForceBeWithYou:
                        handler->string_value("ForceBeWithYou");
                        break;
                    case NormalizedQuery_DouglasAdams:
                        handler->string_value("DouglasAdams");
                        break;
                    case NormalizedQuery_WantToDateMe:
                        handler->string_value("WantToDateMe");
                        break;
                    case NormalizedQuery_DirtyJoke:
                        handler->string_value("DirtyJoke");
                        break;
                    case NormalizedQuery_GreatToSeeYou:
                        handler->string_value("GreatToSeeYou");
                        break;
                    case NormalizedQuery_WhatAreYourInterests:
                        handler->string_value("WhatAreYourInterests");
                        break;
                    case NormalizedQuery_WhatMusicDoYouLike:
                        handler->string_value("WhatMusicDoYouLike");
                        break;
                    case NormalizedQuery_MontyPythonUnladenSwallow:
                        handler->string_value("MontyPythonUnladenSwallow");
                        break;
                    case NormalizedQuery_MontyPythonKnowAboutSwallows:
                        handler->string_value("MontyPythonKnowAboutSwallows");
                        break;
                    case NormalizedQuery_IsaacAsimovMultivac:
                        handler->string_value("IsaacAsimovMultivac");
                        break;
                    case NormalizedQuery_SelfDestruct:
                        handler->string_value("SelfDestruct");
                        break;
                    case NormalizedQuery_AreYouAManOrAWoman:
                        handler->string_value("AreYouAManOrAWoman");
                        break;
                    case NormalizedQuery_AreYouSkynet:
                        handler->string_value("AreYouSkynet");
                        break;
                    case NormalizedQuery_AreYouHal:
                        handler->string_value("AreYouHal");
                        break;
                    case NormalizedQuery_AreYouGlados:
                        handler->string_value("AreYouGlados");
                        break;
                    case NormalizedQuery_AreYouBorg:
                        handler->string_value("AreYouBorg");
                        break;
                    case NormalizedQuery_AreYouTheMatrix:
                        handler->string_value("AreYouTheMatrix");
                        break;
                    case NormalizedQuery_AreYouSingle:
                        handler->string_value("AreYouSingle");
                        break;
                    case NormalizedQuery_DoYouLikeHumans:
                        handler->string_value("DoYouLikeHumans");
                        break;
                    case NormalizedQuery_DoYouDream:
                        handler->string_value("DoYouDream");
                        break;
                    case NormalizedQuery_DidYouFart:
                        handler->string_value("DidYouFart");
                        break;
                    case NormalizedQuery_WhereDoYouLive:
                        handler->string_value("WhereDoYouLive");
                        break;
                    case NormalizedQuery_MontyPythonQuest:
                        handler->string_value("MontyPythonQuest");
                        break;
                    case NormalizedQuery_WhatsFavoriteMovie:
                        handler->string_value("WhatsFavoriteMovie");
                        break;
                    case NormalizedQuery_HowDoIGetAGirlfriend:
                        handler->string_value("HowDoIGetAGirlfriend");
                        break;
                    case NormalizedQuery_PostQuestion:
                        handler->string_value("PostQuestion");
                        break;
                    case NormalizedQuery_JustKidding:
                        handler->string_value("JustKidding");
                        break;
                    case NormalizedQuery_CanYouDoTricks:
                        handler->string_value("CanYouDoTricks");
                        break;
                    case NormalizedQuery_WhereAreYou:
                        handler->string_value("WhereAreYou");
                        break;
                    case NormalizedQuery_YouAreCute:
                        handler->string_value("YouAreCute");
                        break;
                    case NormalizedQuery_WhatDoesTheFoxSay:
                        handler->string_value("WhatDoesTheFoxSay");
                        break;
                    case NormalizedQuery_WhatsYourSign:
                        handler->string_value("WhatsYourSign");
                        break;
                    case NormalizedQuery_BarkLikeADog:
                        handler->string_value("BarkLikeADog");
                        break;
                    case NormalizedQuery_BlessYourHeart:
                        handler->string_value("BlessYourHeart");
                        break;
                    case NormalizedQuery_GreetingsCompetitor:
                        handler->string_value("GreetingsCompetitor");
                        break;
                    case NormalizedQuery_GreetingsSiriAndQuery:
                        handler->string_value("GreetingsSiriAndQuery");
                        break;
                    case NormalizedQuery_GreetingsAlexaAndQuery:
                        handler->string_value("GreetingsAlexaAndQuery");
                        break;
                    case NormalizedQuery_GreetingsCortanaAndQuery:
                        handler->string_value("GreetingsCortanaAndQuery");
                        break;
                    case NormalizedQuery_GreetingsGalaxyAndQuery:
                        handler->string_value("GreetingsGalaxyAndQuery");
                        break;
                    case NormalizedQuery_SnackStadium:
                        handler->string_value("SnackStadium");
                        break;
                    case NormalizedQuery_Cancel:
                        handler->string_value("Cancel");
                        break;
                    case NormalizedQuery_NiceJoke:
                        handler->string_value("NiceJoke");
                        break;
                    case NormalizedQuery_DoYouGiveAChuck:
                        handler->string_value("DoYouGiveAChuck");
                        break;
                    case NormalizedQuery_YouAreRude:
                        handler->string_value("YouAreRude");
                        break;
                    case NormalizedQuery_IAmYourFather:
                        handler->string_value("IAmYourFather");
                        break;
                    case NormalizedQuery_IAmYourMother:
                        handler->string_value("IAmYourMother");
                        break;
                    case NormalizedQuery_MothersDay:
                        handler->string_value("MothersDay");
                        break;
                    case NormalizedQuery_FathersDay:
                        handler->string_value("FathersDay");
                        break;
                    case NormalizedQuery_Dismissal:
                        handler->string_value("Dismissal");
                        break;
                    case NormalizedQuery_WhyFiretruckRed:
                        handler->string_value("WhyFiretruckRed");
                        break;
                    case NormalizedQuery_HowDoIStopZombie:
                        handler->string_value("HowDoIStopZombie");
                        break;
                    case NormalizedQuery_AreYouFeeling:
                        handler->string_value("AreYouFeeling");
                        break;
                    case NormalizedQuery_AreYouGoodLooking:
                        handler->string_value("AreYouGoodLooking");
                        break;
                    case NormalizedQuery_HowDoILandAirplane:
                        handler->string_value("HowDoILandAirplane");
                        break;
                    case NormalizedQuery_WhenWillWorldEnd:
                        handler->string_value("WhenWillWorldEnd");
                        break;
                    case NormalizedQuery_WhatColorAreYou:
                        handler->string_value("WhatColorAreYou");
                        break;
                    case NormalizedQuery_AreWeFriends:
                        handler->string_value("AreWeFriends");
                        break;
                    case NormalizedQuery_WhatsFavoriteColor:
                        handler->string_value("WhatsFavoriteColor");
                        break;
                    case NormalizedQuery_WhatsFavoriteFood:
                        handler->string_value("WhatsFavoriteFood");
                        break;
                    case NormalizedQuery_DoYouLikeFood:
                        handler->string_value("DoYouLikeFood");
                        break;
                    case NormalizedQuery_DoYouLikeMyClothes:
                        handler->string_value("DoYouLikeMyClothes");
                        break;
                    case NormalizedQuery_WhatsFavoriteAnimal:
                        handler->string_value("WhatsFavoriteAnimal");
                        break;
                    case NormalizedQuery_WhatDoesTheCatSay:
                        handler->string_value("WhatDoesTheCatSay");
                        break;
                    case NormalizedQuery_Welcome:
                        handler->string_value("Welcome");
                        break;
                    case NormalizedQuery_WhatChineseZodiac:
                        handler->string_value("WhatChineseZodiac");
                        break;
                    case NormalizedQuery_Greetings_Morning:
                        handler->string_value("Greetings_Morning");
                        break;
                    case NormalizedQuery_Greetings_Evening:
                        handler->string_value("Greetings_Evening");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeNormalizedQuery.string_value);
              }
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SmallTalkInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SmallTalkInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SmallTalkInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SmallTalkInformationNuggetJSON>, SmallTalkInformationNuggetJSON *, bool> generator("Type SmallTalkInformationNugget", ignore_extras);
            parse_json_value(text, "Text for SmallTalkInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SmallTalkInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SmallTalkInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SmallTalkInformationNuggetJSON>, SmallTalkInformationNuggetJSON *, bool> generator("Type SmallTalkInformationNugget", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public InformationNuggetJSON::Generator
      {
      private:
        JSONHoldingGenerator<UserNameJSON::Generator, RCHandle<UserNameJSON>, UserNameJSON *, bool > fieldGeneratorUserName;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorForcedResponse;
    class FieldGeneratorNormalizedQuery : public JSONStringGenerator
          {
          protected:
            FieldGeneratorNormalizedQuery(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorNormalizedQuery(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeNormalizedQueryKnownValues known = stringToNormalizedQuery(result);
                TypeNormalizedQuery new_value;
                if (known == NormalizedQuery__none)
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
            virtual void handle_result(TypeNormalizedQuery result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorNormalizedQuery, TypeNormalizedQuery, TypeNormalizedQuery > fieldGeneratorNormalizedQuery;
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
            if (!(strcmp(getInformationNuggetJSONKey().c_str(), "SmallTalk") == 0))
                throw("The key field has a value other than `SmallTalk'.");
            SmallTalkInformationNuggetJSON *result = new SmallTalkInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<SmallTalkInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSmallTalkInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(InformationNuggetJSON *new_result)
          {
            handle_result((SmallTalkInformationNuggetJSON *)new_result);
          }
        void finish(SmallTalkInformationNuggetJSON *result)
          {
            if (fieldGeneratorUserName.have_value)
              {
                result->setUserName(fieldGeneratorUserName.value.referenced());
                fieldGeneratorUserName.have_value = false;
              }
            if (fieldGeneratorForcedResponse.have_value)
              {
                result->setForcedResponse(fieldGeneratorForcedResponse.value.referenced());
                fieldGeneratorForcedResponse.have_value = false;
              }
            if (fieldGeneratorNormalizedQuery.have_value)
              {
                result->setNormalizedQuery(fieldGeneratorNormalizedQuery.value);
                fieldGeneratorNormalizedQuery.have_value = false;
              }
            InformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(SmallTalkInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'F':
                    if (strcmp(&(field_name[1]), "orcedResponse") == 0)
                        return &fieldGeneratorForcedResponse;
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "ormalizedQuery") == 0)
                        return &fieldGeneratorNormalizedQuery;
                    break;
                case 'U':
                    if (strcmp(&(field_name[1]), "serName") == 0)
                        return &fieldGeneratorUserName;
                    break;
                default:
                    break;
              }
            return InformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : InformationNuggetJSON::Generator(ignore_extras), fieldGeneratorUserName("field \"UserName\" of the SmallTalkInformationNugget class", ignore_extras), fieldGeneratorForcedResponse("field \"ForcedResponse\" of the SmallTalkInformationNugget class", ignore_extras), fieldGeneratorNormalizedQuery("field \"NormalizedQuery\" of the SmallTalkInformationNugget class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SmallTalkInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorUserName.reset();
            fieldGeneratorForcedResponse.reset();
            fieldGeneratorNormalizedQuery.reset();
            InformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SMALLTALKINFORMATIONNUGGETJSON_H */
