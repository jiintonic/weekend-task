/* file "CarControlCameraCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CarControlCameraCommandJSON.h"

#include "CarControlCameraCommandJSON.h"


CarControlCameraCommandJSON::TypeCameraSelection CarControlCameraCommandJSON::stringToCameraSelection(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'F':
            if (strcmp(&(chars[1]), "ront") == 0)
                return CameraSelection_Front;
            break;
        case 'L':
            if (strcmp(&(chars[1]), "eftSide") == 0)
                return CameraSelection_LeftSide;
            break;
        case 'R':
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    if (strcmp(&(chars[2]), "ar") == 0)
                        return CameraSelection_Rear;
                    break;
                case 'i':
                    if (strcmp(&(chars[2]), "ghtSide") == 0)
                        return CameraSelection_RightSide;
                    break;
                default:
                    break;
              }
            break;
        default:
            break;
      }
    throw("The value for field `CameraSelection' is not one of the legal values.");
  }

const char *CarControlCameraCommandJSON::stringFromCameraSelection(TypeCameraSelection the_enum)
  {
    switch (the_enum)
      {
        case CameraSelection_Front:
            return "Front";
        case CameraSelection_Rear:
            return "Rear";
        case CameraSelection_LeftSide:
            return "LeftSide";
        case CameraSelection_RightSide:
            return "RightSide";
        default:
            assert(false);
            return NULL;
      }
  }

CarControlCameraCommandJSON::TypeCommandType CarControlCameraCommandJSON::stringToCommandType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'S':
            if (strcmp(&(chars[1]), "how") == 0)
                return CommandType_Show;
            break;
        case 'T':
            if (strcmp(&(chars[1]), "akePicture") == 0)
                return CommandType_TakePicture;
            break;
        default:
            break;
      }
    throw("The value for field `CommandType' is not one of the legal values.");
  }

const char *CarControlCameraCommandJSON::stringFromCommandType(TypeCommandType the_enum)
  {
    switch (the_enum)
      {
        case CommandType_Show:
            return "Show";
        case CommandType_TakePicture:
            return "TakePicture";
        default:
            assert(false);
            return NULL;
      }
  }

CarControlCameraCommandJSON::CarControlCameraCommandJSON(const CarControlCameraCommandJSON &)
  {
    assert(false);
  }

CarControlCameraCommandJSON &CarControlCameraCommandJSON::operator=(const CarControlCameraCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *CarControlCameraCommandJSON::extraCameraSelectionToJSON(void) const
  {
    JSONStringValue *generated_string_CameraSelection;
    switch (storeCameraSelection)
      {
        case CameraSelection_Front:
            generated_string_CameraSelection = new JSONStringValue("Front");
            break;
        case CameraSelection_Rear:
            generated_string_CameraSelection = new JSONStringValue("Rear");
            break;
        case CameraSelection_LeftSide:
            generated_string_CameraSelection = new JSONStringValue("LeftSide");
            break;
        case CameraSelection_RightSide:
            generated_string_CameraSelection = new JSONStringValue("RightSide");
            break;
        default:
            assert(false);
            generated_string_CameraSelection = NULL;
      }
    return generated_string_CameraSelection;
  }

JSONValue *CarControlCameraCommandJSON::extraCommandTypeToJSON(void) const
  {
    JSONStringValue *generated_string_CommandType;
    switch (storeCommandType)
      {
        case CommandType_Show:
            generated_string_CommandType = new JSONStringValue("Show");
            break;
        case CommandType_TakePicture:
            generated_string_CommandType = new JSONStringValue("TakePicture");
            break;
        default:
            assert(false);
            generated_string_CommandType = NULL;
      }
    return generated_string_CommandType;
  }

void CarControlCameraCommandJSON::fromJSONCameraSelection(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CameraSelection of CarControlCameraCommandJSON is not a string.");
    TypeCameraSelection the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'F':
            if (strcmp(&(json_string->getData()[1]), "ront") == 0)
                  {
                    the_enum = CameraSelection_Front;
                    goto enum_is_done;
                  }
            break;
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "eftSide") == 0)
                  {
                    the_enum = CameraSelection_LeftSide;
                    goto enum_is_done;
                  }
            break;
        case 'R':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "ar") == 0)
                          {
                            the_enum = CameraSelection_Rear;
                            goto enum_is_done;
                          }
                    break;
                case 'i':
                    if (strcmp(&(json_string->getData()[2]), "ghtSide") == 0)
                          {
                            the_enum = CameraSelection_RightSide;
                            goto enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        default:
            break;
      }
    throw("The value for field CameraSelection of CarControlCameraCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setCameraSelection(the_enum);
  }

void CarControlCameraCommandJSON::fromJSONCommandType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandType of CarControlCameraCommandJSON is not a string.");
    TypeCommandType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "how") == 0)
                  {
                    the_enum = CommandType_Show;
                    goto enum_is_done;
                  }
            break;
        case 'T':
            if (strcmp(&(json_string->getData()[1]), "akePicture") == 0)
                  {
                    the_enum = CommandType_TakePicture;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field CommandType of CarControlCameraCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setCommandType(the_enum);
  }

CarControlCameraCommandJSON::CarControlCameraCommandJSON(void) :
        flagHasCameraSelection(false),
        flagHasCommandType(false)
  {
    extraIndex = create_string_index();
  }

CarControlCameraCommandJSON::~CarControlCameraCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *CarControlCameraCommandJSON::getCarControlCommandKind(void) const
  {
    return "CarControlCameraCommand";
  }

bool CarControlCameraCommandJSON::hasCameraSelection(void) const
  {
    return flagHasCameraSelection;
  }

CarControlCameraCommandJSON::TypeCameraSelection CarControlCameraCommandJSON::getCameraSelection(void)
  {
    assert(flagHasCameraSelection);
    return storeCameraSelection;
  }

const CarControlCameraCommandJSON::TypeCameraSelection CarControlCameraCommandJSON::getCameraSelection(void) const
  {
    assert(flagHasCameraSelection);
    return storeCameraSelection;
  }

const char *CarControlCameraCommandJSON::getCameraSelectionAsChars(void) const
  {
    return stringFromCameraSelection(getCameraSelection());
  }

std::string CarControlCameraCommandJSON::getCameraSelectionAsString(void) const
  {
    return stringFromCameraSelection(getCameraSelection());
  }

bool CarControlCameraCommandJSON::hasCommandType(void) const
  {
    return flagHasCommandType;
  }

CarControlCameraCommandJSON::TypeCommandType CarControlCameraCommandJSON::getCommandType(void)
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const CarControlCameraCommandJSON::TypeCommandType CarControlCameraCommandJSON::getCommandType(void) const
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const char *CarControlCameraCommandJSON::getCommandTypeAsChars(void) const
  {
    return stringFromCommandType(getCommandType());
  }

std::string CarControlCameraCommandJSON::getCommandTypeAsString(void) const
  {
    return stringFromCommandType(getCommandType());
  }

CarControlCameraCommandJSON *CarControlCameraCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CarControlCameraCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CarControlCameraCommandJSON>, CarControlCameraCommandJSON *, bool> generator("Type CarControlCameraCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
