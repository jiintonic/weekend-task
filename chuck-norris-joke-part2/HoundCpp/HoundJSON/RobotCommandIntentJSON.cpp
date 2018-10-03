/* file "RobotCommandIntentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RobotCommandIntentJSON.h"

#include "RobotCommandIntentJSON.h"
#include "RobotMoveCommandIntentJSON.h"
#include "RobotTurnCommandIntentJSON.h"
#include "RobotStopCommandIntentJSON.h"
#include "RobotTakePictureCommandIntentJSON.h"
#include "RobotTakeVideoCommandIntentJSON.h"
#include "RobotStopRecordingVideoCommandIntentJSON.h"
#include "RobotListCapabilitiesCommandIntentJSON.h"
#include "RobotSetKnownRoomsCommandIntentJSON.h"
#include "RobotListKnownRoomsCommandIntentJSON.h"


RobotCommandIntentJSON::RobotCommandIntentJSON(const RobotCommandIntentJSON &)
  {
    assert(false);
  }

RobotCommandIntentJSON &RobotCommandIntentJSON::operator=(const RobotCommandIntentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

RobotCommandIntentJSON::RobotCommandIntentJSON(void)
  {
  }

RobotCommandIntentJSON::~RobotCommandIntentJSON(void)
  {
  }

const char *RobotCommandIntentJSON::getCommandIntentKind(void) const
  {
    return "Robot";
  }

RobotCommandIntentJSON *RobotCommandIntentJSON::createForKey(const char *key, string_index *other_field_index)
  {
    switch ((unsigned char)(key[0]))
      {
        case 'L':
            if (strncmp(&(key[1]), "ist", 3) == 0)
              {
                switch ((unsigned char)(key[4]))
                  {
                    case 'C':
                        if (strcmp(&(key[5]), "apabilitiesCommand") == 0)
                            return new RobotListCapabilitiesCommandIntentJSON();
                        break;
                    case 'K':
                        if (strcmp(&(key[5]), "nownRoomsCommand") == 0)
                            return new RobotListKnownRoomsCommandIntentJSON();
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'M':
            if (strcmp(&(key[1]), "oveCommand") == 0)
                return new RobotMoveCommandIntentJSON();
            break;
        case 'R':
            if (strcmp(&(key[1]), "obotSetKnownRoomsCommand") == 0)
                return new RobotSetKnownRoomsCommandIntentJSON();
            break;
        case 'S':
            if (strncmp(&(key[1]), "top", 3) == 0)
              {
                switch ((unsigned char)(key[4]))
                  {
                    case 'C':
                        if (strcmp(&(key[5]), "ommand") == 0)
                            return new RobotStopCommandIntentJSON();
                        break;
                    case 'R':
                        if (strcmp(&(key[5]), "ecordingVideoCommand") == 0)
                            return new RobotStopRecordingVideoCommandIntentJSON();
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'T':
            switch ((unsigned char)(key[1]))
              {
                case 'a':
                    if (strncmp(&(key[2]), "ke", 2) == 0)
                      {
                        switch ((unsigned char)(key[4]))
                          {
                            case 'P':
                                if (strcmp(&(key[5]), "ictureCommand") == 0)
                                    return new RobotTakePictureCommandIntentJSON();
                                break;
                            case 'V':
                                if (strcmp(&(key[5]), "ideoCommand") == 0)
                                    return new RobotTakeVideoCommandIntentJSON();
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'u':
                    if (strcmp(&(key[2]), "rnCommand") == 0)
                        return new RobotTurnCommandIntentJSON();
                    break;
                default:
                    break;
              }
            break;
        default:
            break;
      }

    class GenericRobotCommandIntentJSON : public RobotCommandIntentJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericRobotCommandIntentJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericRobotCommandIntentJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getRobotIntentKind(void) const  { return key.c_str(); }
        size_t extraRobotCommandIntentComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraRobotCommandIntentComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraRobotCommandIntentComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraRobotCommandIntentComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraRobotCommandIntentLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraRobotCommandIntentLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraRobotCommandIntentAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraRobotCommandIntentSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraRobotCommandIntentLookup(key);
            if (old_field == NULL)
              {
                extraRobotCommandIntentAppendPair(key, new_component);
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
    return new GenericRobotCommandIntentJSON(key);
  }
RobotCommandIntentJSON *RobotCommandIntentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RobotCommandIntentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RobotCommandIntentJSON>, RobotCommandIntentJSON *, bool> generator("Type RobotCommandIntent", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
