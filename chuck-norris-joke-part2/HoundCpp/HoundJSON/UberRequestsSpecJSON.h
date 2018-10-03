/* file "UberRequestsSpecJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERREQUESTSSPECJSON_H
#define UBERREQUESTSSPECJSON_H

#pragma interface

#include "UberSpecJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include "OInteger.h"
#include "MapLocationJSON.h"
#include "MapLocationJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UberRequestsSpecJSON : public UberSpecJSON
  {
  public:
    enum TypeNewStates
      {
        NewStates_select_pick_up_location,
        NewStates_select_drop_off_location,
        NewStates_select_uber_product,
        NewStates_select_uber_product_id
      };

    static TypeNewStates  stringToNewStates(const char *chars);
    static const char * stringFromNewStates(TypeNewStates the_enum);

  private:
    bool flagHasIsCancelled;
    bool storeIsCancelled;
    bool flagHasIsConfirmed;
    bool storeIsConfirmed;
    bool flagHasIsNotUnderstood;
    bool storeIsNotUnderstood;
    bool flagHasIsRedirectOnConfirmation;
    bool storeIsRedirectOnConfirmation;
    bool flagHasIsSurgeConfirmed;
    bool storeIsSurgeConfirmed;
    bool flagHasSurgeConfirmationId;
    std::string storeSurgeConfirmationId;
    bool flagHasPreferredProduct;
    std::string storePreferredProduct;
    bool flagHasUberProductId;
    std::string storeUberProductId;
    bool flagHasPickupLocation;
    MapLocationJSON * storePickupLocation;
    bool flagHasDropoffLocation;
    MapLocationJSON * storeDropoffLocation;
    bool flagHasPassengerCount;
    OInteger storePassengerCount;
    bool flagHasNewStates;
    std::vector< TypeNewStates > storeNewStates;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UberRequestsSpecJSON(const UberRequestsSpecJSON &);
    UberRequestsSpecJSON & operator=(const UberRequestsSpecJSON &other);

    JSONValue * extraIsCancelledToJSON(void) const;
    JSONValue * extraIsConfirmedToJSON(void) const;
    JSONValue * extraIsNotUnderstoodToJSON(void) const;
    JSONValue * extraIsRedirectOnConfirmationToJSON(void) const;
    JSONValue * extraIsSurgeConfirmedToJSON(void) const;
    JSONValue * extraSurgeConfirmationIdToJSON(void) const;
    JSONValue * extraPreferredProductToJSON(void) const;
    JSONValue * extraUberProductIdToJSON(void) const;
    JSONValue * extraPickupLocationToJSON(void) const;
    JSONValue * extraDropoffLocationToJSON(void) const;
    JSONValue * extraPassengerCountToJSON(void) const;
    JSONValue * extraNewStatesToJSON(void) const;

    void  fromJSONIsCancelled(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsConfirmed(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsNotUnderstood(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsRedirectOnConfirmation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsSurgeConfirmed(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSurgeConfirmationId(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPreferredProduct(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUberProductId(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPickupLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDropoffLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPassengerCount(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNewStates(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberRequestsSpecJSON(void);
    virtual ~UberRequestsSpecJSON(void);
    const char * getUberSpecKind(void) const;
    bool  hasIsCancelled(void) const;
    bool  getIsCancelled(void);
    const bool  getIsCancelled(void) const;
    bool  hasIsConfirmed(void) const;
    bool  getIsConfirmed(void);
    const bool  getIsConfirmed(void) const;
    bool  hasIsNotUnderstood(void) const;
    bool  getIsNotUnderstood(void);
    const bool  getIsNotUnderstood(void) const;
    bool  hasIsRedirectOnConfirmation(void) const;
    bool  getIsRedirectOnConfirmation(void);
    const bool  getIsRedirectOnConfirmation(void) const;
    bool  hasIsSurgeConfirmed(void) const;
    bool  getIsSurgeConfirmed(void);
    const bool  getIsSurgeConfirmed(void) const;
    bool  hasSurgeConfirmationId(void) const;
    std::string  getSurgeConfirmationId(void);
    const std::string  getSurgeConfirmationId(void) const;
    bool  hasPreferredProduct(void) const;
    std::string  getPreferredProduct(void);
    const std::string  getPreferredProduct(void) const;
    bool  hasUberProductId(void) const;
    std::string  getUberProductId(void);
    const std::string  getUberProductId(void) const;
    bool  hasPickupLocation(void) const;
    MapLocationJSON *  getPickupLocation(void);
    const MapLocationJSON *  getPickupLocation(void) const;
    bool  hasDropoffLocation(void) const;
    MapLocationJSON *  getDropoffLocation(void);
    const MapLocationJSON *  getDropoffLocation(void) const;
    bool  hasPassengerCount(void) const;
    OInteger  getPassengerCount(void);
    const OInteger  getPassengerCount(void) const;
    bool  hasNewStates(void) const;
    size_t  countOfNewStates(void) const;
    TypeNewStates  elementOfNewStates(size_t element_num);
    const TypeNewStates  elementOfNewStates(size_t element_num) const;
    std::vector< TypeNewStates >  getNewStates(void);
    const std::vector< TypeNewStates >  getNewStates(void) const;

    virtual size_t extraUberRequestsSpecComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberRequestsSpecComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberRequestsSpecComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberRequestsSpecComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberRequestsSpecLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberRequestsSpecLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraUberSpecComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasIsCancelled)
            ++result;
        if (flagHasIsConfirmed)
            ++result;
        if (flagHasIsNotUnderstood)
            ++result;
        if (flagHasIsRedirectOnConfirmation)
            ++result;
        if (flagHasIsSurgeConfirmed)
            ++result;
        if (flagHasSurgeConfirmationId)
            ++result;
        if (flagHasPreferredProduct)
            ++result;
        if (flagHasUberProductId)
            ++result;
        if (flagHasPickupLocation)
            ++result;
        if (flagHasDropoffLocation)
            ++result;
        if (flagHasPassengerCount)
            ++result;
        if (flagHasNewStates)
            ++result;
        result += extraUberRequestsSpecComponentCount();
        return result;
      }
    const char *extraUberSpecComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasIsCancelled)
          {
            if (remainder == 0)
                return "IsCancelled";
            --remainder;
          }
        if (flagHasIsConfirmed)
          {
            if (remainder == 0)
                return "IsConfirmed";
            --remainder;
          }
        if (flagHasIsNotUnderstood)
          {
            if (remainder == 0)
                return "IsNotUnderstood";
            --remainder;
          }
        if (flagHasIsRedirectOnConfirmation)
          {
            if (remainder == 0)
                return "IsRedirectOnConfirmation";
            --remainder;
          }
        if (flagHasIsSurgeConfirmed)
          {
            if (remainder == 0)
                return "IsSurgeConfirmed";
            --remainder;
          }
        if (flagHasSurgeConfirmationId)
          {
            if (remainder == 0)
                return "SurgeConfirmationId";
            --remainder;
          }
        if (flagHasPreferredProduct)
          {
            if (remainder == 0)
                return "PreferredProduct";
            --remainder;
          }
        if (flagHasUberProductId)
          {
            if (remainder == 0)
                return "UberProductId";
            --remainder;
          }
        if (flagHasPickupLocation)
          {
            if (remainder == 0)
                return "PickupLocation";
            --remainder;
          }
        if (flagHasDropoffLocation)
          {
            if (remainder == 0)
                return "DropoffLocation";
            --remainder;
          }
        if (flagHasPassengerCount)
          {
            if (remainder == 0)
                return "PassengerCount";
            --remainder;
          }
        if (flagHasNewStates)
          {
            if (remainder == 0)
                return "NewStates";
            --remainder;
          }
        return extraUberRequestsSpecComponentKey(remainder);
      }
    JSONValue *extraUberSpecComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasIsCancelled)
          {
            if (remainder == 0)
                return extraIsCancelledToJSON();
            --remainder;
          }
        if (flagHasIsConfirmed)
          {
            if (remainder == 0)
                return extraIsConfirmedToJSON();
            --remainder;
          }
        if (flagHasIsNotUnderstood)
          {
            if (remainder == 0)
                return extraIsNotUnderstoodToJSON();
            --remainder;
          }
        if (flagHasIsRedirectOnConfirmation)
          {
            if (remainder == 0)
                return extraIsRedirectOnConfirmationToJSON();
            --remainder;
          }
        if (flagHasIsSurgeConfirmed)
          {
            if (remainder == 0)
                return extraIsSurgeConfirmedToJSON();
            --remainder;
          }
        if (flagHasSurgeConfirmationId)
          {
            if (remainder == 0)
                return extraSurgeConfirmationIdToJSON();
            --remainder;
          }
        if (flagHasPreferredProduct)
          {
            if (remainder == 0)
                return extraPreferredProductToJSON();
            --remainder;
          }
        if (flagHasUberProductId)
          {
            if (remainder == 0)
                return extraUberProductIdToJSON();
            --remainder;
          }
        if (flagHasPickupLocation)
          {
            if (remainder == 0)
                return extraPickupLocationToJSON();
            --remainder;
          }
        if (flagHasDropoffLocation)
          {
            if (remainder == 0)
                return extraDropoffLocationToJSON();
            --remainder;
          }
        if (flagHasPassengerCount)
          {
            if (remainder == 0)
                return extraPassengerCountToJSON();
            --remainder;
          }
        if (flagHasNewStates)
          {
            if (remainder == 0)
                return extraNewStatesToJSON();
            --remainder;
          }
        return extraUberRequestsSpecComponentValue(remainder);
      }
    const JSONValue *extraUberSpecComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasIsCancelled)
          {
            if (remainder == 0)
                return extraIsCancelledToJSON();
            --remainder;
          }
        if (flagHasIsConfirmed)
          {
            if (remainder == 0)
                return extraIsConfirmedToJSON();
            --remainder;
          }
        if (flagHasIsNotUnderstood)
          {
            if (remainder == 0)
                return extraIsNotUnderstoodToJSON();
            --remainder;
          }
        if (flagHasIsRedirectOnConfirmation)
          {
            if (remainder == 0)
                return extraIsRedirectOnConfirmationToJSON();
            --remainder;
          }
        if (flagHasIsSurgeConfirmed)
          {
            if (remainder == 0)
                return extraIsSurgeConfirmedToJSON();
            --remainder;
          }
        if (flagHasSurgeConfirmationId)
          {
            if (remainder == 0)
                return extraSurgeConfirmationIdToJSON();
            --remainder;
          }
        if (flagHasPreferredProduct)
          {
            if (remainder == 0)
                return extraPreferredProductToJSON();
            --remainder;
          }
        if (flagHasUberProductId)
          {
            if (remainder == 0)
                return extraUberProductIdToJSON();
            --remainder;
          }
        if (flagHasPickupLocation)
          {
            if (remainder == 0)
                return extraPickupLocationToJSON();
            --remainder;
          }
        if (flagHasDropoffLocation)
          {
            if (remainder == 0)
                return extraDropoffLocationToJSON();
            --remainder;
          }
        if (flagHasPassengerCount)
          {
            if (remainder == 0)
                return extraPassengerCountToJSON();
            --remainder;
          }
        if (flagHasNewStates)
          {
            if (remainder == 0)
                return extraNewStatesToJSON();
            --remainder;
          }
        return extraUberRequestsSpecComponentValue(remainder);
      }
    JSONValue *extraUberSpecLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'D':
                if (strcmp(&(field_name[1]), "ropoffLocation") == 0)
                    return (flagHasDropoffLocation ? extraDropoffLocationToJSON() : NULL);
                break;
            case 'I':
                if (strncmp(&(field_name[1]), "s", 1) == 0)
                  {
                    switch ((unsigned char)(field_name[2]))
                      {
                        case 'C':
                            switch ((unsigned char)(field_name[3]))
                              {
                                case 'a':
                                    if (strcmp(&(field_name[4]), "ncelled") == 0)
                                        return (flagHasIsCancelled ? extraIsCancelledToJSON() : NULL);
                                    break;
                                case 'o':
                                    if (strcmp(&(field_name[4]), "nfirmed") == 0)
                                        return (flagHasIsConfirmed ? extraIsConfirmedToJSON() : NULL);
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 'N':
                            if (strcmp(&(field_name[3]), "otUnderstood") == 0)
                                return (flagHasIsNotUnderstood ? extraIsNotUnderstoodToJSON() : NULL);
                            break;
                        case 'R':
                            if (strcmp(&(field_name[3]), "edirectOnConfirmation") == 0)
                                return (flagHasIsRedirectOnConfirmation ? extraIsRedirectOnConfirmationToJSON() : NULL);
                            break;
                        case 'S':
                            if (strcmp(&(field_name[3]), "urgeConfirmed") == 0)
                                return (flagHasIsSurgeConfirmed ? extraIsSurgeConfirmedToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "ewStates") == 0)
                    return (flagHasNewStates ? extraNewStatesToJSON() : NULL);
                break;
            case 'P':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'a':
                        if (strcmp(&(field_name[2]), "ssengerCount") == 0)
                            return (flagHasPassengerCount ? extraPassengerCountToJSON() : NULL);
                        break;
                    case 'i':
                        if (strcmp(&(field_name[2]), "ckupLocation") == 0)
                            return (flagHasPickupLocation ? extraPickupLocationToJSON() : NULL);
                        break;
                    case 'r':
                        if (strcmp(&(field_name[2]), "eferredProduct") == 0)
                            return (flagHasPreferredProduct ? extraPreferredProductToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "urgeConfirmationId") == 0)
                    return (flagHasSurgeConfirmationId ? extraSurgeConfirmationIdToJSON() : NULL);
                break;
            case 'U':
                if (strcmp(&(field_name[1]), "berProductId") == 0)
                    return (flagHasUberProductId ? extraUberProductIdToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraUberRequestsSpecLookup(field_name);
      }
    const JSONValue *extraUberSpecLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'D':
                if (strcmp(&(field_name[1]), "ropoffLocation") == 0)
                    return (flagHasDropoffLocation ? extraDropoffLocationToJSON() : NULL);
                break;
            case 'I':
                if (strncmp(&(field_name[1]), "s", 1) == 0)
                  {
                    switch ((unsigned char)(field_name[2]))
                      {
                        case 'C':
                            switch ((unsigned char)(field_name[3]))
                              {
                                case 'a':
                                    if (strcmp(&(field_name[4]), "ncelled") == 0)
                                        return (flagHasIsCancelled ? extraIsCancelledToJSON() : NULL);
                                    break;
                                case 'o':
                                    if (strcmp(&(field_name[4]), "nfirmed") == 0)
                                        return (flagHasIsConfirmed ? extraIsConfirmedToJSON() : NULL);
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 'N':
                            if (strcmp(&(field_name[3]), "otUnderstood") == 0)
                                return (flagHasIsNotUnderstood ? extraIsNotUnderstoodToJSON() : NULL);
                            break;
                        case 'R':
                            if (strcmp(&(field_name[3]), "edirectOnConfirmation") == 0)
                                return (flagHasIsRedirectOnConfirmation ? extraIsRedirectOnConfirmationToJSON() : NULL);
                            break;
                        case 'S':
                            if (strcmp(&(field_name[3]), "urgeConfirmed") == 0)
                                return (flagHasIsSurgeConfirmed ? extraIsSurgeConfirmedToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "ewStates") == 0)
                    return (flagHasNewStates ? extraNewStatesToJSON() : NULL);
                break;
            case 'P':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'a':
                        if (strcmp(&(field_name[2]), "ssengerCount") == 0)
                            return (flagHasPassengerCount ? extraPassengerCountToJSON() : NULL);
                        break;
                    case 'i':
                        if (strcmp(&(field_name[2]), "ckupLocation") == 0)
                            return (flagHasPickupLocation ? extraPickupLocationToJSON() : NULL);
                        break;
                    case 'r':
                        if (strcmp(&(field_name[2]), "eferredProduct") == 0)
                            return (flagHasPreferredProduct ? extraPreferredProductToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "urgeConfirmationId") == 0)
                    return (flagHasSurgeConfirmationId ? extraSurgeConfirmationIdToJSON() : NULL);
                break;
            case 'U':
                if (strcmp(&(field_name[1]), "berProductId") == 0)
                    return (flagHasUberProductId ? extraUberProductIdToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraUberRequestsSpecLookup(field_name);
      }

    void setIsCancelled(bool new_value)
      {
        flagHasIsCancelled = true;
        storeIsCancelled = new_value;
      }
    void unsetIsCancelled(void)
      {
        flagHasIsCancelled = false;
      }
    void setIsConfirmed(bool new_value)
      {
        flagHasIsConfirmed = true;
        storeIsConfirmed = new_value;
      }
    void unsetIsConfirmed(void)
      {
        flagHasIsConfirmed = false;
      }
    void setIsNotUnderstood(bool new_value)
      {
        flagHasIsNotUnderstood = true;
        storeIsNotUnderstood = new_value;
      }
    void unsetIsNotUnderstood(void)
      {
        flagHasIsNotUnderstood = false;
      }
    void setIsRedirectOnConfirmation(bool new_value)
      {
        flagHasIsRedirectOnConfirmation = true;
        storeIsRedirectOnConfirmation = new_value;
      }
    void unsetIsRedirectOnConfirmation(void)
      {
        flagHasIsRedirectOnConfirmation = false;
      }
    void setIsSurgeConfirmed(bool new_value)
      {
        flagHasIsSurgeConfirmed = true;
        storeIsSurgeConfirmed = new_value;
      }
    void unsetIsSurgeConfirmed(void)
      {
        flagHasIsSurgeConfirmed = false;
      }
    void setSurgeConfirmationId(std::string new_value)
      {
        flagHasSurgeConfirmationId = true;
        storeSurgeConfirmationId = new_value;
      }
    void unsetSurgeConfirmationId(void)
      {
        flagHasSurgeConfirmationId = false;
      }
    void setPreferredProduct(std::string new_value)
      {
        flagHasPreferredProduct = true;
        storePreferredProduct = new_value;
      }
    void unsetPreferredProduct(void)
      {
        flagHasPreferredProduct = false;
      }
    void setUberProductId(std::string new_value)
      {
        flagHasUberProductId = true;
        storeUberProductId = new_value;
      }
    void unsetUberProductId(void)
      {
        flagHasUberProductId = false;
      }
    void setPickupLocation(MapLocationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPickupLocation)
          {
            storePickupLocation->remove_reference();
          }
        flagHasPickupLocation = true;
        storePickupLocation = new_value;
      }
    void unsetPickupLocation(void)
      {
        if (flagHasPickupLocation)
          {
            storePickupLocation->remove_reference();
          }
        flagHasPickupLocation = false;
      }
    void setDropoffLocation(MapLocationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDropoffLocation)
          {
            storeDropoffLocation->remove_reference();
          }
        flagHasDropoffLocation = true;
        storeDropoffLocation = new_value;
      }
    void unsetDropoffLocation(void)
      {
        if (flagHasDropoffLocation)
          {
            storeDropoffLocation->remove_reference();
          }
        flagHasDropoffLocation = false;
      }
    void setPassengerCount(OInteger new_value)
      {
        flagHasPassengerCount = true;
        if (new_value < 0)
            throw("The value for field PassengerCount of UberRequestsSpecJSON is less than the lower bound (0) for that field.");
        storePassengerCount = new_value;
      }
    void unsetPassengerCount(void)
      {
        flagHasPassengerCount = false;
      }
    void initNewStates(void)
      {
        flagHasNewStates = true;
        storeNewStates.clear();
      }
    void appendNewStates(TypeNewStates to_append)
      {
        if (!flagHasNewStates)
          {
            flagHasNewStates = true;
            storeNewStates.clear();
          }
        assert(flagHasNewStates);
        storeNewStates.push_back(to_append);
      }
    void appendNewStates(const char *chars)
      {
        appendNewStates(stringToNewStates(chars));
      }
    void appendNewStates(std::string the_string)
      {
        appendNewStates(stringToNewStates(the_string.c_str()));
      }
    void unsetNewStates(void)
      {
        flagHasNewStates = false;
        storeNewStates.clear();
      }

    virtual void extraUberRequestsSpecAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberRequestsSpecSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberRequestsSpecLookup(key);
        if (old_field == NULL)
          {
            extraUberRequestsSpecAppendPair(key, new_component);
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
    void extraUberSpecAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'D':
                if (strcmp(&(key[1]), "ropoffLocation") == 0)
                    {
                    fromJSONDropoffLocation(new_component, false);
                    return;
                    }
                break;
            case 'I':
                if (strncmp(&(key[1]), "s", 1) == 0)
                  {
                    switch ((unsigned char)(key[2]))
                      {
                        case 'C':
                            switch ((unsigned char)(key[3]))
                              {
                                case 'a':
                                    if (strcmp(&(key[4]), "ncelled") == 0)
                                        {
                                        fromJSONIsCancelled(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'o':
                                    if (strcmp(&(key[4]), "nfirmed") == 0)
                                        {
                                        fromJSONIsConfirmed(new_component, false);
                                        return;
                                        }
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 'N':
                            if (strcmp(&(key[3]), "otUnderstood") == 0)
                                {
                                fromJSONIsNotUnderstood(new_component, false);
                                return;
                                }
                            break;
                        case 'R':
                            if (strcmp(&(key[3]), "edirectOnConfirmation") == 0)
                                {
                                fromJSONIsRedirectOnConfirmation(new_component, false);
                                return;
                                }
                            break;
                        case 'S':
                            if (strcmp(&(key[3]), "urgeConfirmed") == 0)
                                {
                                fromJSONIsSurgeConfirmed(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'N':
                if (strcmp(&(key[1]), "ewStates") == 0)
                    {
                    fromJSONNewStates(new_component, false);
                    return;
                    }
                break;
            case 'P':
                switch ((unsigned char)(key[1]))
                  {
                    case 'a':
                        if (strcmp(&(key[2]), "ssengerCount") == 0)
                            {
                            fromJSONPassengerCount(new_component, false);
                            return;
                            }
                        break;
                    case 'i':
                        if (strcmp(&(key[2]), "ckupLocation") == 0)
                            {
                            fromJSONPickupLocation(new_component, false);
                            return;
                            }
                        break;
                    case 'r':
                        if (strcmp(&(key[2]), "eferredProduct") == 0)
                            {
                            fromJSONPreferredProduct(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'S':
                if (strcmp(&(key[1]), "urgeConfirmationId") == 0)
                    {
                    fromJSONSurgeConfirmationId(new_component, false);
                    return;
                    }
                break;
            case 'U':
                if (strcmp(&(key[1]), "berProductId") == 0)
                    {
                    fromJSONUberProductId(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraUberRequestsSpecAppendPair(key, new_component);
      }
    void extraUberSpecSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'D':
                if (strcmp(&(key[1]), "ropoffLocation") == 0)
                    {
                    fromJSONDropoffLocation(new_component, false);
                    return;
                    }
                break;
            case 'I':
                if (strncmp(&(key[1]), "s", 1) == 0)
                  {
                    switch ((unsigned char)(key[2]))
                      {
                        case 'C':
                            switch ((unsigned char)(key[3]))
                              {
                                case 'a':
                                    if (strcmp(&(key[4]), "ncelled") == 0)
                                        {
                                        fromJSONIsCancelled(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'o':
                                    if (strcmp(&(key[4]), "nfirmed") == 0)
                                        {
                                        fromJSONIsConfirmed(new_component, false);
                                        return;
                                        }
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 'N':
                            if (strcmp(&(key[3]), "otUnderstood") == 0)
                                {
                                fromJSONIsNotUnderstood(new_component, false);
                                return;
                                }
                            break;
                        case 'R':
                            if (strcmp(&(key[3]), "edirectOnConfirmation") == 0)
                                {
                                fromJSONIsRedirectOnConfirmation(new_component, false);
                                return;
                                }
                            break;
                        case 'S':
                            if (strcmp(&(key[3]), "urgeConfirmed") == 0)
                                {
                                fromJSONIsSurgeConfirmed(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'N':
                if (strcmp(&(key[1]), "ewStates") == 0)
                    {
                    fromJSONNewStates(new_component, false);
                    return;
                    }
                break;
            case 'P':
                switch ((unsigned char)(key[1]))
                  {
                    case 'a':
                        if (strcmp(&(key[2]), "ssengerCount") == 0)
                            {
                            fromJSONPassengerCount(new_component, false);
                            return;
                            }
                        break;
                    case 'i':
                        if (strcmp(&(key[2]), "ckupLocation") == 0)
                            {
                            fromJSONPickupLocation(new_component, false);
                            return;
                            }
                        break;
                    case 'r':
                        if (strcmp(&(key[2]), "eferredProduct") == 0)
                            {
                            fromJSONPreferredProduct(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'S':
                if (strcmp(&(key[1]), "urgeConfirmationId") == 0)
                    {
                    fromJSONSurgeConfirmationId(new_component, false);
                    return;
                    }
                break;
            case 'U':
                if (strcmp(&(key[1]), "berProductId") == 0)
                    {
                    fromJSONUberProductId(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraUberRequestsSpecSetField(key, new_component);
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
        UberSpecJSON::write_fields_as_json(handler);
        if (flagHasIsCancelled)
          {
            handler->start_pair("IsCancelled");
            handler->boolean_value(storeIsCancelled);
          }
        if (flagHasIsConfirmed)
          {
            handler->start_pair("IsConfirmed");
            handler->boolean_value(storeIsConfirmed);
          }
        if (flagHasIsNotUnderstood)
          {
            handler->start_pair("IsNotUnderstood");
            handler->boolean_value(storeIsNotUnderstood);
          }
        if (flagHasIsRedirectOnConfirmation)
          {
            handler->start_pair("IsRedirectOnConfirmation");
            handler->boolean_value(storeIsRedirectOnConfirmation);
          }
        if (flagHasIsSurgeConfirmed)
          {
            handler->start_pair("IsSurgeConfirmed");
            handler->boolean_value(storeIsSurgeConfirmed);
          }
        if (flagHasSurgeConfirmationId)
          {
            handler->start_pair("SurgeConfirmationId");
            handler->string_value(storeSurgeConfirmationId);
          }
        assert(flagHasPreferredProduct);
        handler->start_pair("PreferredProduct");
        handler->string_value(storePreferredProduct);
        if (flagHasUberProductId)
          {
            handler->start_pair("UberProductId");
            handler->string_value(storeUberProductId);
          }
        if (flagHasPickupLocation)
          {
            handler->start_pair("PickupLocation");
            storePickupLocation->write_as_json(handler);
          }
        if (flagHasDropoffLocation)
          {
            handler->start_pair("DropoffLocation");
            storeDropoffLocation->write_as_json(handler);
          }
        assert(flagHasPassengerCount);
        handler->start_pair("PassengerCount");
        handler->number_value(storePassengerCount.get_o_integer());
        assert(flagHasNewStates);
        handler->start_pair("NewStates");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeNewStates.size(); ++num1)
          {
            switch (storeNewStates[num1])
              {
                case NewStates_select_pick_up_location:
                    handler->string_value("select_pick_up_location");
                    break;
                case NewStates_select_drop_off_location:
                    handler->string_value("select_drop_off_location");
                    break;
                case NewStates_select_uber_product:
                    handler->string_value("select_uber_product");
                    break;
                case NewStates_select_uber_product_id:
                    handler->string_value("select_uber_product_id");
                    break;
                default:
                    assert(false);
              }
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasPreferredProduct()))
          {
            return "When parsing the object for %what%, the \"PreferredProduct\" field was missing.";
          }
        if (!(hasPassengerCount()))
          {
            return "When parsing the object for %what%, the \"PassengerCount\" field was missing.";
          }
        if (!(hasNewStates()))
          {
            return "When parsing the object for %what%, the \"NewStates\" field was missing.";
          }
        return NULL;
      }

    static UberRequestsSpecJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberRequestsSpecJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberRequestsSpecJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberRequestsSpecJSON>, UberRequestsSpecJSON *, bool> generator("Type UberRequestsSpec", ignore_extras);
            parse_json_value(text, "Text for UberRequestsSpecJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberRequestsSpecJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberRequestsSpecJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberRequestsSpecJSON>, UberRequestsSpecJSON *, bool> generator("Type UberRequestsSpec", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public UberSpecJSON::Generator
      {
      private:
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsCancelled;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsConfirmed;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsNotUnderstood;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsRedirectOnConfirmation;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsSurgeConfirmed;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSurgeConfirmationId;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPreferredProduct;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorUberProductId;
        JSONHoldingGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorPickupLocation;
        JSONHoldingGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorDropoffLocation;
        static char lowerBoundPassengerCount[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundPassengerCount>, OInteger, o_integer > fieldGeneratorPassengerCount;
    class FieldGeneratorNewStates : public JSONStringGenerator
          {
          protected:
            FieldGeneratorNewStates(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorNewStates(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToNewStates(result));
              }
            virtual void handle_result(TypeNewStates result) = 0;
          };
        JSONHoldingArrayGenerator<FieldGeneratorNewStates, TypeNewStates, TypeNewStates > fieldGeneratorNewStates;
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
            if (!(strcmp(getUberSpecJSONKey().c_str(), "UberRequestsSpec") == 0))
                throw("The key field has a value other than `UberRequestsSpec'.");
            UberRequestsSpecJSON *result = new UberRequestsSpecJSON();
            assert(result != NULL);
            RCHandle<UberRequestsSpecJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberRequestsSpecAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(UberSpecJSON *new_result)
          {
            handle_result((UberRequestsSpecJSON *)new_result);
          }
        void finish(UberRequestsSpecJSON *result)
          {
            if (fieldGeneratorIsCancelled.have_value)
              {
                result->setIsCancelled(fieldGeneratorIsCancelled.value);
                fieldGeneratorIsCancelled.have_value = false;
              }
            if (fieldGeneratorIsConfirmed.have_value)
              {
                result->setIsConfirmed(fieldGeneratorIsConfirmed.value);
                fieldGeneratorIsConfirmed.have_value = false;
              }
            if (fieldGeneratorIsNotUnderstood.have_value)
              {
                result->setIsNotUnderstood(fieldGeneratorIsNotUnderstood.value);
                fieldGeneratorIsNotUnderstood.have_value = false;
              }
            if (fieldGeneratorIsRedirectOnConfirmation.have_value)
              {
                result->setIsRedirectOnConfirmation(fieldGeneratorIsRedirectOnConfirmation.value);
                fieldGeneratorIsRedirectOnConfirmation.have_value = false;
              }
            if (fieldGeneratorIsSurgeConfirmed.have_value)
              {
                result->setIsSurgeConfirmed(fieldGeneratorIsSurgeConfirmed.value);
                fieldGeneratorIsSurgeConfirmed.have_value = false;
              }
            if (fieldGeneratorSurgeConfirmationId.have_value)
              {
                result->setSurgeConfirmationId(fieldGeneratorSurgeConfirmationId.value);
                fieldGeneratorSurgeConfirmationId.have_value = false;
              }
            if (fieldGeneratorPreferredProduct.have_value)
              {
                result->setPreferredProduct(fieldGeneratorPreferredProduct.value);
                fieldGeneratorPreferredProduct.have_value = false;
              }
            else if (!(result->hasPreferredProduct()))
              {
                error("When parsing the object for %what%, the \"PreferredProduct\" field was missing.");
              }
            if (fieldGeneratorUberProductId.have_value)
              {
                result->setUberProductId(fieldGeneratorUberProductId.value);
                fieldGeneratorUberProductId.have_value = false;
              }
            if (fieldGeneratorPickupLocation.have_value)
              {
                result->setPickupLocation(fieldGeneratorPickupLocation.value.referenced());
                fieldGeneratorPickupLocation.have_value = false;
              }
            if (fieldGeneratorDropoffLocation.have_value)
              {
                result->setDropoffLocation(fieldGeneratorDropoffLocation.value.referenced());
                fieldGeneratorDropoffLocation.have_value = false;
              }
            if (fieldGeneratorPassengerCount.have_value)
              {
                result->setPassengerCount(fieldGeneratorPassengerCount.value);
                fieldGeneratorPassengerCount.have_value = false;
              }
            else if (!(result->hasPassengerCount()))
              {
                error("When parsing the object for %what%, the \"PassengerCount\" field was missing.");
              }
            if (fieldGeneratorNewStates.have_value)
              {
                result->initNewStates();
                size_t count = fieldGeneratorNewStates.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendNewStates(fieldGeneratorNewStates.value[num]);
                  }
                fieldGeneratorNewStates.value.clear();
                fieldGeneratorNewStates.have_value = false;
              }
            else if (!(result->hasNewStates()))
              {
                error("When parsing the object for %what%, the \"NewStates\" field was missing.");
              }
            UberSpecJSON::Generator::finish(result);
          }
        virtual void handle_result(UberRequestsSpecJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strcmp(&(field_name[1]), "ropoffLocation") == 0)
                        return &fieldGeneratorDropoffLocation;
                    break;
                case 'I':
                    if (strncmp(&(field_name[1]), "s", 1) == 0)
                      {
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'C':
                                switch ((unsigned char)(field_name[3]))
                                  {
                                    case 'a':
                                        if (strcmp(&(field_name[4]), "ncelled") == 0)
                                            return &fieldGeneratorIsCancelled;
                                        break;
                                    case 'o':
                                        if (strcmp(&(field_name[4]), "nfirmed") == 0)
                                            return &fieldGeneratorIsConfirmed;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'N':
                                if (strcmp(&(field_name[3]), "otUnderstood") == 0)
                                    return &fieldGeneratorIsNotUnderstood;
                                break;
                            case 'R':
                                if (strcmp(&(field_name[3]), "edirectOnConfirmation") == 0)
                                    return &fieldGeneratorIsRedirectOnConfirmation;
                                break;
                            case 'S':
                                if (strcmp(&(field_name[3]), "urgeConfirmed") == 0)
                                    return &fieldGeneratorIsSurgeConfirmed;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "ewStates") == 0)
                        return &fieldGeneratorNewStates;
                    break;
                case 'P':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "ssengerCount") == 0)
                                return &fieldGeneratorPassengerCount;
                            break;
                        case 'i':
                            if (strcmp(&(field_name[2]), "ckupLocation") == 0)
                                return &fieldGeneratorPickupLocation;
                            break;
                        case 'r':
                            if (strcmp(&(field_name[2]), "eferredProduct") == 0)
                                return &fieldGeneratorPreferredProduct;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "urgeConfirmationId") == 0)
                        return &fieldGeneratorSurgeConfirmationId;
                    break;
                case 'U':
                    if (strcmp(&(field_name[1]), "berProductId") == 0)
                        return &fieldGeneratorUberProductId;
                    break;
                default:
                    break;
              }
            return UberSpecJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : UberSpecJSON::Generator(ignore_extras), fieldGeneratorIsCancelled("field \"IsCancelled\" of the UberRequestsSpec class"), fieldGeneratorIsConfirmed("field \"IsConfirmed\" of the UberRequestsSpec class"), fieldGeneratorIsNotUnderstood("field \"IsNotUnderstood\" of the UberRequestsSpec class"), fieldGeneratorIsRedirectOnConfirmation("field \"IsRedirectOnConfirmation\" of the UberRequestsSpec class"), fieldGeneratorIsSurgeConfirmed("field \"IsSurgeConfirmed\" of the UberRequestsSpec class"), fieldGeneratorSurgeConfirmationId("field \"SurgeConfirmationId\" of the UberRequestsSpec class"), fieldGeneratorPreferredProduct("field \"PreferredProduct\" of the UberRequestsSpec class"), fieldGeneratorUberProductId("field \"UberProductId\" of the UberRequestsSpec class"), fieldGeneratorPickupLocation("field \"PickupLocation\" of the UberRequestsSpec class", ignore_extras), fieldGeneratorDropoffLocation("field \"DropoffLocation\" of the UberRequestsSpec class", ignore_extras), fieldGeneratorPassengerCount("field \"PassengerCount\" of the UberRequestsSpec class"), fieldGeneratorNewStates("field \"NewStates\" of the UberRequestsSpec class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberRequestsSpec class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorIsCancelled.reset();
            fieldGeneratorIsConfirmed.reset();
            fieldGeneratorIsNotUnderstood.reset();
            fieldGeneratorIsRedirectOnConfirmation.reset();
            fieldGeneratorIsSurgeConfirmed.reset();
            fieldGeneratorSurgeConfirmationId.reset();
            fieldGeneratorPreferredProduct.reset();
            fieldGeneratorUberProductId.reset();
            fieldGeneratorPickupLocation.reset();
            fieldGeneratorDropoffLocation.reset();
            fieldGeneratorPassengerCount.reset();
            fieldGeneratorNewStates.reset();
            UberSpecJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UBERREQUESTSSPECJSON_H */
