/* file "MapControlCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MAPCONTROLCOMMANDJSON_H
#define MAPCONTROLCOMMANDJSON_H

#pragma interface

#include "DeviceControlCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class MapControlCommandJSON : public DeviceControlCommandJSON
  {
  public:
    enum TypeCommandType
      {
        CommandType_PanMapAbsolute,
        CommandType_PanMapRelative,
        CommandType_ZoomMap,
        CommandType_RotateMap,
        CommandType_RotateMapToHeading,
        CommandType_MapView2D,
        CommandType_MapView3D
      };

    static TypeCommandType  stringToCommandType(const char *chars);
    static const char * stringFromCommandType(TypeCommandType the_enum);
    enum TypePanUnit
      {
        PanUnit_Miles,
        PanUnit_Kilometres,
        PanUnit_None
      };

    static TypePanUnit  stringToPanUnit(const char *chars);
    static const char * stringFromPanUnit(TypePanUnit the_enum);
    enum TypeZoomUnit
      {
        ZoomUnit_Miles,
        ZoomUnit_Feet,
        ZoomUnit_Kilometres,
        ZoomUnit_Metres,
        ZoomUnit_None
      };

    static TypeZoomUnit  stringToZoomUnit(const char *chars);
    static const char * stringFromZoomUnit(TypeZoomUnit the_enum);

  private:
    bool flagHasCommandType;
    TypeCommandType storeCommandType;
    bool flagHasDirection;
    double storeDirection;
    std::string textStoreDirection;
    bool flagHasPanDistance;
    double storePanDistance;
    std::string textStorePanDistance;
    bool flagHasPanUnit;
    TypePanUnit storePanUnit;
    bool flagHasZoomAmount;
    double storeZoomAmount;
    std::string textStoreZoomAmount;
    bool flagHasZoomUnit;
    TypeZoomUnit storeZoomUnit;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    MapControlCommandJSON(const MapControlCommandJSON &);
    MapControlCommandJSON & operator=(const MapControlCommandJSON &other);

    JSONValue * extraCommandTypeToJSON(void) const;
    JSONValue * extraDirectionToJSON(void) const;
    JSONValue * extraPanDistanceToJSON(void) const;
    JSONValue * extraPanUnitToJSON(void) const;
    JSONValue * extraZoomAmountToJSON(void) const;
    JSONValue * extraZoomUnitToJSON(void) const;

    void  fromJSONCommandType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDirection(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPanDistance(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPanUnit(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONZoomAmount(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONZoomUnit(JSONValue *json_value, bool ignore_extras = false);


  public:
    MapControlCommandJSON(void);
    virtual ~MapControlCommandJSON(void);
    const char * getDeviceControlCommandKind(void) const;
    bool  hasCommandType(void) const;
    TypeCommandType  getCommandType(void);
    const TypeCommandType  getCommandType(void) const;
    const char * getCommandTypeAsChars(void) const;
    std::string  getCommandTypeAsString(void) const;
    bool  hasDirection(void) const;
    double  getDirection(void);
    const double  getDirection(void) const;
    std::string  getDirectionAsText(void) const;
    bool  hasPanDistance(void) const;
    double  getPanDistance(void);
    const double  getPanDistance(void) const;
    std::string  getPanDistanceAsText(void) const;
    bool  hasPanUnit(void) const;
    TypePanUnit  getPanUnit(void);
    const TypePanUnit  getPanUnit(void) const;
    const char * getPanUnitAsChars(void) const;
    std::string  getPanUnitAsString(void) const;
    bool  hasZoomAmount(void) const;
    double  getZoomAmount(void);
    const double  getZoomAmount(void) const;
    std::string  getZoomAmountAsText(void) const;
    bool  hasZoomUnit(void) const;
    TypeZoomUnit  getZoomUnit(void);
    const TypeZoomUnit  getZoomUnit(void) const;
    const char * getZoomUnitAsChars(void) const;
    std::string  getZoomUnitAsString(void) const;

    virtual size_t extraMapControlCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraMapControlCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraMapControlCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraMapControlCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraMapControlCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraMapControlCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraDeviceControlCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasCommandType)
            ++result;
        if (flagHasDirection)
            ++result;
        if (flagHasPanDistance)
            ++result;
        if (flagHasPanUnit)
            ++result;
        if (flagHasZoomAmount)
            ++result;
        if (flagHasZoomUnit)
            ++result;
        result += extraMapControlCommandComponentCount();
        return result;
      }
    const char *extraDeviceControlCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasCommandType)
          {
            if (remainder == 0)
                return "CommandType";
            --remainder;
          }
        if (flagHasDirection)
          {
            if (remainder == 0)
                return "Direction";
            --remainder;
          }
        if (flagHasPanDistance)
          {
            if (remainder == 0)
                return "PanDistance";
            --remainder;
          }
        if (flagHasPanUnit)
          {
            if (remainder == 0)
                return "PanUnit";
            --remainder;
          }
        if (flagHasZoomAmount)
          {
            if (remainder == 0)
                return "ZoomAmount";
            --remainder;
          }
        if (flagHasZoomUnit)
          {
            if (remainder == 0)
                return "ZoomUnit";
            --remainder;
          }
        return extraMapControlCommandComponentKey(remainder);
      }
    JSONValue *extraDeviceControlCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasCommandType)
          {
            if (remainder == 0)
                return extraCommandTypeToJSON();
            --remainder;
          }
        if (flagHasDirection)
          {
            if (remainder == 0)
                return extraDirectionToJSON();
            --remainder;
          }
        if (flagHasPanDistance)
          {
            if (remainder == 0)
                return extraPanDistanceToJSON();
            --remainder;
          }
        if (flagHasPanUnit)
          {
            if (remainder == 0)
                return extraPanUnitToJSON();
            --remainder;
          }
        if (flagHasZoomAmount)
          {
            if (remainder == 0)
                return extraZoomAmountToJSON();
            --remainder;
          }
        if (flagHasZoomUnit)
          {
            if (remainder == 0)
                return extraZoomUnitToJSON();
            --remainder;
          }
        return extraMapControlCommandComponentValue(remainder);
      }
    const JSONValue *extraDeviceControlCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasCommandType)
          {
            if (remainder == 0)
                return extraCommandTypeToJSON();
            --remainder;
          }
        if (flagHasDirection)
          {
            if (remainder == 0)
                return extraDirectionToJSON();
            --remainder;
          }
        if (flagHasPanDistance)
          {
            if (remainder == 0)
                return extraPanDistanceToJSON();
            --remainder;
          }
        if (flagHasPanUnit)
          {
            if (remainder == 0)
                return extraPanUnitToJSON();
            --remainder;
          }
        if (flagHasZoomAmount)
          {
            if (remainder == 0)
                return extraZoomAmountToJSON();
            --remainder;
          }
        if (flagHasZoomUnit)
          {
            if (remainder == 0)
                return extraZoomUnitToJSON();
            --remainder;
          }
        return extraMapControlCommandComponentValue(remainder);
      }
    JSONValue *extraDeviceControlCommandLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "ommandType") == 0)
                    return (flagHasCommandType ? extraCommandTypeToJSON() : NULL);
                break;
            case 'D':
                if (strcmp(&(field_name[1]), "irection") == 0)
                    return (flagHasDirection ? extraDirectionToJSON() : NULL);
                break;
            case 'P':
                if (strncmp(&(field_name[1]), "an", 2) == 0)
                  {
                    switch ((unsigned char)(field_name[3]))
                      {
                        case 'D':
                            if (strcmp(&(field_name[4]), "istance") == 0)
                                return (flagHasPanDistance ? extraPanDistanceToJSON() : NULL);
                            break;
                        case 'U':
                            if (strcmp(&(field_name[4]), "nit") == 0)
                                return (flagHasPanUnit ? extraPanUnitToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'Z':
                if (strncmp(&(field_name[1]), "oom", 3) == 0)
                  {
                    switch ((unsigned char)(field_name[4]))
                      {
                        case 'A':
                            if (strcmp(&(field_name[5]), "mount") == 0)
                                return (flagHasZoomAmount ? extraZoomAmountToJSON() : NULL);
                            break;
                        case 'U':
                            if (strcmp(&(field_name[5]), "nit") == 0)
                                return (flagHasZoomUnit ? extraZoomUnitToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraMapControlCommandLookup(field_name);
      }
    const JSONValue *extraDeviceControlCommandLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "ommandType") == 0)
                    return (flagHasCommandType ? extraCommandTypeToJSON() : NULL);
                break;
            case 'D':
                if (strcmp(&(field_name[1]), "irection") == 0)
                    return (flagHasDirection ? extraDirectionToJSON() : NULL);
                break;
            case 'P':
                if (strncmp(&(field_name[1]), "an", 2) == 0)
                  {
                    switch ((unsigned char)(field_name[3]))
                      {
                        case 'D':
                            if (strcmp(&(field_name[4]), "istance") == 0)
                                return (flagHasPanDistance ? extraPanDistanceToJSON() : NULL);
                            break;
                        case 'U':
                            if (strcmp(&(field_name[4]), "nit") == 0)
                                return (flagHasPanUnit ? extraPanUnitToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'Z':
                if (strncmp(&(field_name[1]), "oom", 3) == 0)
                  {
                    switch ((unsigned char)(field_name[4]))
                      {
                        case 'A':
                            if (strcmp(&(field_name[5]), "mount") == 0)
                                return (flagHasZoomAmount ? extraZoomAmountToJSON() : NULL);
                            break;
                        case 'U':
                            if (strcmp(&(field_name[5]), "nit") == 0)
                                return (flagHasZoomUnit ? extraZoomUnitToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraMapControlCommandLookup(field_name);
      }

    void setCommandType(TypeCommandType new_value)
      {
        flagHasCommandType = true;
        storeCommandType = new_value;
      }
    void setCommandType(const char *chars)
      {
        setCommandType(stringToCommandType(chars));
      }
    void setCommandType(std::string the_string)
      {
        setCommandType(stringToCommandType(the_string.c_str()));
      }
    void unsetCommandType(void)
      {
        flagHasCommandType = false;
      }
    void setDirection(double new_value)
      {
        flagHasDirection = true;
        if (new_value < 0)
            throw("The value for field Direction of MapControlCommandJSON is less than the lower bound (0) for that field.");
        if (new_value > 360)
            throw("The value for field Direction of MapControlCommandJSON is greater than the upper bound (360) for that field.");
        storeDirection = new_value;
        textStoreDirection = "";
      }
    void setDirectionText(std::string new_value)
      {
        flagHasDirection = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Direction of MapControlCommandJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field Direction of MapControlCommandJSON is less than the lower bound (0) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "360", "", false, "3") > 0)
            throw("The value for field Direction of MapControlCommandJSON is greater than the upper bound (360) for that field.");
        textStoreDirection = new_value;
      }
    void unsetDirection(void)
      {
        flagHasDirection = false;
      }
    void setPanDistance(double new_value)
      {
        flagHasPanDistance = true;
        storePanDistance = new_value;
        textStorePanDistance = "";
      }
    void setPanDistanceText(std::string new_value)
      {
        flagHasPanDistance = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field PanDistance of MapControlCommandJSON is not a valid number.");
        textStorePanDistance = new_value;
      }
    void unsetPanDistance(void)
      {
        flagHasPanDistance = false;
      }
    void setPanUnit(TypePanUnit new_value)
      {
        flagHasPanUnit = true;
        storePanUnit = new_value;
      }
    void setPanUnit(const char *chars)
      {
        setPanUnit(stringToPanUnit(chars));
      }
    void setPanUnit(std::string the_string)
      {
        setPanUnit(stringToPanUnit(the_string.c_str()));
      }
    void unsetPanUnit(void)
      {
        flagHasPanUnit = false;
      }
    void setZoomAmount(double new_value)
      {
        flagHasZoomAmount = true;
        storeZoomAmount = new_value;
        textStoreZoomAmount = "";
      }
    void setZoomAmountText(std::string new_value)
      {
        flagHasZoomAmount = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field ZoomAmount of MapControlCommandJSON is not a valid number.");
        textStoreZoomAmount = new_value;
      }
    void unsetZoomAmount(void)
      {
        flagHasZoomAmount = false;
      }
    void setZoomUnit(TypeZoomUnit new_value)
      {
        flagHasZoomUnit = true;
        storeZoomUnit = new_value;
      }
    void setZoomUnit(const char *chars)
      {
        setZoomUnit(stringToZoomUnit(chars));
      }
    void setZoomUnit(std::string the_string)
      {
        setZoomUnit(stringToZoomUnit(the_string.c_str()));
      }
    void unsetZoomUnit(void)
      {
        flagHasZoomUnit = false;
      }

    virtual void extraMapControlCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraMapControlCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraMapControlCommandLookup(key);
        if (old_field == NULL)
          {
            extraMapControlCommandAppendPair(key, new_component);
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
    void extraDeviceControlCommandAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "ommandType") == 0)
                    {
                    fromJSONCommandType(new_component, false);
                    return;
                    }
                break;
            case 'D':
                if (strcmp(&(key[1]), "irection") == 0)
                    {
                    fromJSONDirection(new_component, false);
                    return;
                    }
                break;
            case 'P':
                if (strncmp(&(key[1]), "an", 2) == 0)
                  {
                    switch ((unsigned char)(key[3]))
                      {
                        case 'D':
                            if (strcmp(&(key[4]), "istance") == 0)
                                {
                                fromJSONPanDistance(new_component, false);
                                return;
                                }
                            break;
                        case 'U':
                            if (strcmp(&(key[4]), "nit") == 0)
                                {
                                fromJSONPanUnit(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'Z':
                if (strncmp(&(key[1]), "oom", 3) == 0)
                  {
                    switch ((unsigned char)(key[4]))
                      {
                        case 'A':
                            if (strcmp(&(key[5]), "mount") == 0)
                                {
                                fromJSONZoomAmount(new_component, false);
                                return;
                                }
                            break;
                        case 'U':
                            if (strcmp(&(key[5]), "nit") == 0)
                                {
                                fromJSONZoomUnit(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        extraMapControlCommandAppendPair(key, new_component);
      }
    void extraDeviceControlCommandSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "ommandType") == 0)
                    {
                    fromJSONCommandType(new_component, false);
                    return;
                    }
                break;
            case 'D':
                if (strcmp(&(key[1]), "irection") == 0)
                    {
                    fromJSONDirection(new_component, false);
                    return;
                    }
                break;
            case 'P':
                if (strncmp(&(key[1]), "an", 2) == 0)
                  {
                    switch ((unsigned char)(key[3]))
                      {
                        case 'D':
                            if (strcmp(&(key[4]), "istance") == 0)
                                {
                                fromJSONPanDistance(new_component, false);
                                return;
                                }
                            break;
                        case 'U':
                            if (strcmp(&(key[4]), "nit") == 0)
                                {
                                fromJSONPanUnit(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'Z':
                if (strncmp(&(key[1]), "oom", 3) == 0)
                  {
                    switch ((unsigned char)(key[4]))
                      {
                        case 'A':
                            if (strcmp(&(key[5]), "mount") == 0)
                                {
                                fromJSONZoomAmount(new_component, false);
                                return;
                                }
                            break;
                        case 'U':
                            if (strcmp(&(key[5]), "nit") == 0)
                                {
                                fromJSONZoomUnit(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        extraMapControlCommandSetField(key, new_component);
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
        DeviceControlCommandJSON::write_fields_as_json(handler);
        assert(flagHasCommandType);
        handler->start_pair("CommandType");
        switch (storeCommandType)
          {
            case CommandType_PanMapAbsolute:
                handler->string_value("PanMapAbsolute");
                break;
            case CommandType_PanMapRelative:
                handler->string_value("PanMapRelative");
                break;
            case CommandType_ZoomMap:
                handler->string_value("ZoomMap");
                break;
            case CommandType_RotateMap:
                handler->string_value("RotateMap");
                break;
            case CommandType_RotateMapToHeading:
                handler->string_value("RotateMapToHeading");
                break;
            case CommandType_MapView2D:
                handler->string_value("MapView2D");
                break;
            case CommandType_MapView3D:
                handler->string_value("MapView3D");
                break;
            default:
                assert(false);
          }
        if (flagHasDirection)
          {
            handler->start_pair("Direction");
            if (textStoreDirection != "")
                handler->number_value(textStoreDirection.c_str());
            else if (((double)(long int)storeDirection) == storeDirection)
                handler->number_value((long int)storeDirection);
            else
                handler->number_value(storeDirection);
          }
        if (flagHasPanDistance)
          {
            handler->start_pair("PanDistance");
            if (textStorePanDistance != "")
                handler->number_value(textStorePanDistance.c_str());
            else if (((double)(long int)storePanDistance) == storePanDistance)
                handler->number_value((long int)storePanDistance);
            else
                handler->number_value(storePanDistance);
          }
        if (flagHasPanUnit)
          {
            handler->start_pair("PanUnit");
            switch (storePanUnit)
              {
                case PanUnit_Miles:
                    handler->string_value("Miles");
                    break;
                case PanUnit_Kilometres:
                    handler->string_value("Kilometres");
                    break;
                case PanUnit_None:
                    handler->string_value("None");
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasZoomAmount)
          {
            handler->start_pair("ZoomAmount");
            if (textStoreZoomAmount != "")
                handler->number_value(textStoreZoomAmount.c_str());
            else if (((double)(long int)storeZoomAmount) == storeZoomAmount)
                handler->number_value((long int)storeZoomAmount);
            else
                handler->number_value(storeZoomAmount);
          }
        if (flagHasZoomUnit)
          {
            handler->start_pair("ZoomUnit");
            switch (storeZoomUnit)
              {
                case ZoomUnit_Miles:
                    handler->string_value("Miles");
                    break;
                case ZoomUnit_Feet:
                    handler->string_value("Feet");
                    break;
                case ZoomUnit_Kilometres:
                    handler->string_value("Kilometres");
                    break;
                case ZoomUnit_Metres:
                    handler->string_value("Metres");
                    break;
                case ZoomUnit_None:
                    handler->string_value("None");
                    break;
                default:
                    assert(false);
              }
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasCommandType()))
          {
            return "When parsing the object for %what%, the \"CommandType\" field was missing.";
          }
        return NULL;
      }

    static MapControlCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MapControlCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MapControlCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MapControlCommandJSON>, MapControlCommandJSON *, bool> generator("Type MapControlCommand", ignore_extras);
            parse_json_value(text, "Text for MapControlCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MapControlCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MapControlCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MapControlCommandJSON>, MapControlCommandJSON *, bool> generator("Type MapControlCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public DeviceControlCommandJSON::Generator
      {
      private:
    class FieldGeneratorCommandType : public JSONStringGenerator
          {
          protected:
            FieldGeneratorCommandType(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorCommandType(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToCommandType(result));
              }
            virtual void handle_result(TypeCommandType result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorCommandType, TypeCommandType, TypeCommandType > fieldGeneratorCommandType;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorDirection;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorPanDistance;
    class FieldGeneratorPanUnit : public JSONStringGenerator
          {
          protected:
            FieldGeneratorPanUnit(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorPanUnit(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToPanUnit(result));
              }
            virtual void handle_result(TypePanUnit result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorPanUnit, TypePanUnit, TypePanUnit > fieldGeneratorPanUnit;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorZoomAmount;
    class FieldGeneratorZoomUnit : public JSONStringGenerator
          {
          protected:
            FieldGeneratorZoomUnit(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorZoomUnit(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToZoomUnit(result));
              }
            virtual void handle_result(TypeZoomUnit result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorZoomUnit, TypeZoomUnit, TypeZoomUnit > fieldGeneratorZoomUnit;
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
            if (!(strcmp(getDeviceControlCommandJSONKey().c_str(), "MapCommand") == 0))
                throw("The key field has a value other than `MapCommand'.");
            MapControlCommandJSON *result = new MapControlCommandJSON();
            assert(result != NULL);
            RCHandle<MapControlCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraMapControlCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(DeviceControlCommandJSON *new_result)
          {
            handle_result((MapControlCommandJSON *)new_result);
          }
        void finish(MapControlCommandJSON *result)
          {
            if (fieldGeneratorCommandType.have_value)
              {
                result->setCommandType(fieldGeneratorCommandType.value);
                fieldGeneratorCommandType.have_value = false;
              }
            else if (!(result->hasCommandType()))
              {
                error("When parsing the object for %what%, the \"CommandType\" field was missing.");
              }
            if (fieldGeneratorDirection.have_value)
              {
                result->setDirectionText(fieldGeneratorDirection.value);
                fieldGeneratorDirection.have_value = false;
              }
            if (fieldGeneratorPanDistance.have_value)
              {
                result->setPanDistanceText(fieldGeneratorPanDistance.value);
                fieldGeneratorPanDistance.have_value = false;
              }
            if (fieldGeneratorPanUnit.have_value)
              {
                result->setPanUnit(fieldGeneratorPanUnit.value);
                fieldGeneratorPanUnit.have_value = false;
              }
            if (fieldGeneratorZoomAmount.have_value)
              {
                result->setZoomAmountText(fieldGeneratorZoomAmount.value);
                fieldGeneratorZoomAmount.have_value = false;
              }
            if (fieldGeneratorZoomUnit.have_value)
              {
                result->setZoomUnit(fieldGeneratorZoomUnit.value);
                fieldGeneratorZoomUnit.have_value = false;
              }
            DeviceControlCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(MapControlCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "ommandType") == 0)
                        return &fieldGeneratorCommandType;
                    break;
                case 'D':
                    if (strcmp(&(field_name[1]), "irection") == 0)
                        return &fieldGeneratorDirection;
                    break;
                case 'P':
                    if (strncmp(&(field_name[1]), "an", 2) == 0)
                      {
                        switch ((unsigned char)(field_name[3]))
                          {
                            case 'D':
                                if (strcmp(&(field_name[4]), "istance") == 0)
                                    return &fieldGeneratorPanDistance;
                                break;
                            case 'U':
                                if (strcmp(&(field_name[4]), "nit") == 0)
                                    return &fieldGeneratorPanUnit;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'Z':
                    if (strncmp(&(field_name[1]), "oom", 3) == 0)
                      {
                        switch ((unsigned char)(field_name[4]))
                          {
                            case 'A':
                                if (strcmp(&(field_name[5]), "mount") == 0)
                                    return &fieldGeneratorZoomAmount;
                                break;
                            case 'U':
                                if (strcmp(&(field_name[5]), "nit") == 0)
                                    return &fieldGeneratorZoomUnit;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return DeviceControlCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : DeviceControlCommandJSON::Generator(ignore_extras), fieldGeneratorCommandType("field \"CommandType\" of the MapControlCommand class"), fieldGeneratorDirection("field \"Direction\" of the MapControlCommand class"), fieldGeneratorPanDistance("field \"PanDistance\" of the MapControlCommand class"), fieldGeneratorPanUnit("field \"PanUnit\" of the MapControlCommand class"), fieldGeneratorZoomAmount("field \"ZoomAmount\" of the MapControlCommand class"), fieldGeneratorZoomUnit("field \"ZoomUnit\" of the MapControlCommand class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the MapControlCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorCommandType.reset();
            fieldGeneratorDirection.reset();
            fieldGeneratorPanDistance.reset();
            fieldGeneratorPanUnit.reset();
            fieldGeneratorZoomAmount.reset();
            fieldGeneratorZoomUnit.reset();
            DeviceControlCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* MAPCONTROLCOMMANDJSON_H */
