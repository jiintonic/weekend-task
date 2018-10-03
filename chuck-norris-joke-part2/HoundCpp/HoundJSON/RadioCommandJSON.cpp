/* file "RadioCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RadioCommandJSON.h"

#include "RadioCommandJSON.h"
#include "RadioOnCommandJSON.h"
#include "RadioOffCommandJSON.h"
#include "RadioToFMCommandJSON.h"
#include "FMChannelCommandJSON.h"
#include "RadioToAMCommandJSON.h"
#include "AMChannelCommandJSON.h"
#include "RadioToSiriusCommandJSON.h"
#include "SiriusChannelCommandJSON.h"
#include "RadioToUSBCommandJSON.h"
#include "RadioToSpotifyCommandJSON.h"
#include "ScanRadioCommandJSON.h"
#include "RadioPresetCommandJSON.h"
#include "NextPresetOrChannelCommandJSON.h"
#include "NextChannelCommandJSON.h"
#include "PreviousPresetOrChannelCommandJSON.h"
#include "PreviousChannelCommandJSON.h"


RadioCommandJSON::RadioCommandJSON(const RadioCommandJSON &)
  {
    assert(false);
  }

RadioCommandJSON &RadioCommandJSON::operator=(const RadioCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

RadioCommandJSON::RadioCommandJSON(void)
  {
  }

RadioCommandJSON::~RadioCommandJSON(void)
  {
  }

const char *RadioCommandJSON::getCommandKind(void) const
  {
    return "RadioCommand";
  }

RadioCommandJSON *RadioCommandJSON::createForKey(const char *key, string_index *other_field_index)
  {
    switch ((unsigned char)(key[0]))
      {
        case 'A':
            if (strcmp(&(key[1]), "MChannel") == 0)
                return new AMChannelCommandJSON();
            break;
        case 'F':
            if (strcmp(&(key[1]), "MChannel") == 0)
                return new FMChannelCommandJSON();
            break;
        case 'N':
            if (strncmp(&(key[1]), "ext", 3) == 0)
              {
                switch ((unsigned char)(key[4]))
                  {
                    case 'C':
                        if (strcmp(&(key[5]), "hannel") == 0)
                            return new NextChannelCommandJSON();
                        break;
                    case 'P':
                        if (strcmp(&(key[5]), "resetOrChannel") == 0)
                            return new NextPresetOrChannelCommandJSON();
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'P':
            if (strncmp(&(key[1]), "revious", 7) == 0)
              {
                switch ((unsigned char)(key[8]))
                  {
                    case 'C':
                        if (strcmp(&(key[9]), "hannel") == 0)
                            return new PreviousChannelCommandJSON();
                        break;
                    case 'P':
                        if (strcmp(&(key[9]), "resetOrChannel") == 0)
                            return new PreviousPresetOrChannelCommandJSON();
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'R':
            if (strncmp(&(key[1]), "adio", 4) == 0)
              {
                switch ((unsigned char)(key[5]))
                  {
                    case 'O':
                        switch ((unsigned char)(key[6]))
                          {
                            case 'f':
                                if (strcmp(&(key[7]), "f") == 0)
                                    return new RadioOffCommandJSON();
                                break;
                            case 'n':
                                if (key[7] == 0)
                                    return new RadioOnCommandJSON();
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'P':
                        if (strcmp(&(key[6]), "reset") == 0)
                            return new RadioPresetCommandJSON();
                        break;
                    case 'T':
                        if (strncmp(&(key[6]), "o", 1) == 0)
                          {
                            switch ((unsigned char)(key[7]))
                              {
                                case 'A':
                                    if (strcmp(&(key[8]), "M") == 0)
                                        return new RadioToAMCommandJSON();
                                    break;
                                case 'F':
                                    if (strcmp(&(key[8]), "M") == 0)
                                        return new RadioToFMCommandJSON();
                                    break;
                                case 'S':
                                    switch ((unsigned char)(key[8]))
                                      {
                                        case 'i':
                                            if (strcmp(&(key[9]), "rius") == 0)
                                                return new RadioToSiriusCommandJSON();
                                            break;
                                        case 'p':
                                            if (strcmp(&(key[9]), "otify") == 0)
                                                return new RadioToSpotifyCommandJSON();
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 'U':
                                    if (strcmp(&(key[8]), "SB") == 0)
                                        return new RadioToUSBCommandJSON();
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
        case 'S':
            switch ((unsigned char)(key[1]))
              {
                case 'c':
                    if (strcmp(&(key[2]), "anRadio") == 0)
                        return new ScanRadioCommandJSON();
                    break;
                case 'i':
                    if (strcmp(&(key[2]), "riusChannel") == 0)
                        return new SiriusChannelCommandJSON();
                    break;
                default:
                    break;
              }
            break;
        default:
            break;
      }

    class GenericRadioCommandJSON : public RadioCommandJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericRadioCommandJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericRadioCommandJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getRadioCommandKind(void) const  { return key.c_str(); }
        size_t extraRadioCommandComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraRadioCommandComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraRadioCommandComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraRadioCommandComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraRadioCommandLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraRadioCommandLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraRadioCommandAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraRadioCommandSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraRadioCommandLookup(key);
            if (old_field == NULL)
              {
                extraRadioCommandAppendPair(key, new_component);
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
    return new GenericRadioCommandJSON(key);
  }
RadioCommandJSON *RadioCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RadioCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RadioCommandJSON>, RadioCommandJSON *, bool> generator("Type RadioCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
