/* file "CarControlCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CarControlCommandJSON.h"

#include "CarControlCommandJSON.h"
#include "CarControlWindowCommandJSON.h"
#include "CarControlWindowIntoModeCommandJSON.h"
#include "CarControlWindowModeCancelJSON.h"
#include "CarControlWindowModeNotUnderstoodJSON.h"
#include "CarControlDoorCommandJSON.h"
#include "CarControlLightsCommandJSON.h"
#include "CarControlLightsIntoModeCommandJSON.h"
#include "CarControlLightsModeCancelJSON.h"
#include "CarControlLightsModeNotUnderstoodJSON.h"
#include "CarControlMirrorCommandJSON.h"
#include "CarControlDrivingCommandJSON.h"
#include "CarControlStatusCommandJSON.h"
#include "CarControlSeatCommandJSON.h"
#include "CarControlClimateCommandJSON.h"
#include "CarControlClimateIntoModeCommandJSON.h"
#include "CarControlClimateModeCancelJSON.h"
#include "CarControlClimateModeNotUnderstoodJSON.h"
#include "CarControlSeatHeaterCommandJSON.h"
#include "CarControlConvertibleCommandJSON.h"
#include "CarControlCameraCommandJSON.h"
#include "CarControlScreenCommandJSON.h"


CarControlCommandJSON::CarControlCommandJSON(const CarControlCommandJSON &)
  {
    assert(false);
  }

CarControlCommandJSON &CarControlCommandJSON::operator=(const CarControlCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

CarControlCommandJSON::CarControlCommandJSON(void)
  {
  }

CarControlCommandJSON::~CarControlCommandJSON(void)
  {
  }

const char *CarControlCommandJSON::getCommandKind(void) const
  {
    return "CarControlCommand";
  }

CarControlCommandJSON *CarControlCommandJSON::createForKey(const char *key, string_index *other_field_index)
  {
    if (strncmp(key, "CarControl", 10) == 0)
      {
        switch ((unsigned char)(key[10]))
          {
            case 'C':
                switch ((unsigned char)(key[11]))
                  {
                    case 'a':
                        if (strcmp(&(key[12]), "meraCommand") == 0)
                            return new CarControlCameraCommandJSON();
                        break;
                    case 'l':
                        if (strncmp(&(key[12]), "imate", 5) == 0)
                          {
                            switch ((unsigned char)(key[17]))
                              {
                                case 'C':
                                    if (strcmp(&(key[18]), "ommand") == 0)
                                        return new CarControlClimateCommandJSON();
                                    break;
                                case 'I':
                                    if (strcmp(&(key[18]), "ntoModeCommand") == 0)
                                        return new CarControlClimateIntoModeCommandJSON();
                                    break;
                                case 'M':
                                    if (strncmp(&(key[18]), "ode", 3) == 0)
                                      {
                                        switch ((unsigned char)(key[21]))
                                          {
                                            case 'C':
                                                if (strcmp(&(key[22]), "ancel") == 0)
                                                    return new CarControlClimateModeCancelJSON();
                                                break;
                                            case 'N':
                                                if (strcmp(&(key[22]), "otUnderstood") == 0)
                                                    return new CarControlClimateModeNotUnderstoodJSON();
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'o':
                        if (strcmp(&(key[12]), "nvertibleCommand") == 0)
                            return new CarControlConvertibleCommandJSON();
                        break;
                    default:
                        break;
                  }
                break;
            case 'D':
                switch ((unsigned char)(key[11]))
                  {
                    case 'o':
                        if (strcmp(&(key[12]), "orCommand") == 0)
                            return new CarControlDoorCommandJSON();
                        break;
                    case 'r':
                        if (strcmp(&(key[12]), "ivingCommand") == 0)
                            return new CarControlDrivingCommandJSON();
                        break;
                    default:
                        break;
                  }
                break;
            case 'L':
                if (strncmp(&(key[11]), "ight", 4) == 0)
                  {
                    switch ((unsigned char)(key[15]))
                      {
                        case 'C':
                            if (strcmp(&(key[16]), "ommand") == 0)
                                return new CarControlLightsCommandJSON();
                            break;
                        case 's':
                            switch ((unsigned char)(key[16]))
                              {
                                case 'I':
                                    if (strcmp(&(key[17]), "ntoModeCommand") == 0)
                                        return new CarControlLightsIntoModeCommandJSON();
                                    break;
                                case 'M':
                                    if (strncmp(&(key[17]), "ode", 3) == 0)
                                      {
                                        switch ((unsigned char)(key[20]))
                                          {
                                            case 'C':
                                                if (strcmp(&(key[21]), "ancel") == 0)
                                                    return new CarControlLightsModeCancelJSON();
                                                break;
                                            case 'N':
                                                if (strcmp(&(key[21]), "otUnderstood") == 0)
                                                    return new CarControlLightsModeNotUnderstoodJSON();
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
                        default:
                            break;
                      }
                  }
                break;
            case 'M':
                if (strcmp(&(key[11]), "irrorCommand") == 0)
                    return new CarControlMirrorCommandJSON();
                break;
            case 'S':
                switch ((unsigned char)(key[11]))
                  {
                    case 'c':
                        if (strcmp(&(key[12]), "reenCommand") == 0)
                            return new CarControlScreenCommandJSON();
                        break;
                    case 'e':
                        if (strncmp(&(key[12]), "at", 2) == 0)
                          {
                            switch ((unsigned char)(key[14]))
                              {
                                case 'C':
                                    if (strcmp(&(key[15]), "ommand") == 0)
                                        return new CarControlSeatCommandJSON();
                                    break;
                                case 'H':
                                    if (strcmp(&(key[15]), "eaterCommand") == 0)
                                        return new CarControlSeatHeaterCommandJSON();
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 't':
                        if (strcmp(&(key[12]), "atusCommand") == 0)
                            return new CarControlStatusCommandJSON();
                        break;
                    default:
                        break;
                  }
                break;
            case 'W':
                if (strncmp(&(key[11]), "indow", 5) == 0)
                  {
                    switch ((unsigned char)(key[16]))
                      {
                        case 'C':
                            if (strcmp(&(key[17]), "ommand") == 0)
                                return new CarControlWindowCommandJSON();
                            break;
                        case 'I':
                            if (strcmp(&(key[17]), "ntoModeCommand") == 0)
                                return new CarControlWindowIntoModeCommandJSON();
                            break;
                        case 'M':
                            if (strncmp(&(key[17]), "ode", 3) == 0)
                              {
                                switch ((unsigned char)(key[20]))
                                  {
                                    case 'C':
                                        if (strcmp(&(key[21]), "ancel") == 0)
                                            return new CarControlWindowModeCancelJSON();
                                        break;
                                    case 'N':
                                        if (strcmp(&(key[21]), "otUnderstood") == 0)
                                            return new CarControlWindowModeNotUnderstoodJSON();
                                        break;
                                    default:
                                        break;
                                  }
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
      }

    class GenericCarControlCommandJSON : public CarControlCommandJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericCarControlCommandJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericCarControlCommandJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getCarControlCommandKind(void) const  { return key.c_str(); }
        size_t extraCarControlCommandComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraCarControlCommandComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraCarControlCommandComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraCarControlCommandComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraCarControlCommandLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraCarControlCommandLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraCarControlCommandAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraCarControlCommandSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraCarControlCommandLookup(key);
            if (old_field == NULL)
              {
                extraCarControlCommandAppendPair(key, new_component);
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
    return new GenericCarControlCommandJSON(key);
  }
CarControlCommandJSON *CarControlCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CarControlCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CarControlCommandJSON>, CarControlCommandJSON *, bool> generator("Type CarControlCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
