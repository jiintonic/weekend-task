/* file "DateAndTimeInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DateAndTimeInformationNuggetJSON.h"

#include "DateAndTimeInformationNuggetJSON.h"
#include "DateAndTimeLookupInformationNuggetJSON.h"
#include "HolidaysOnDateLookupInformationNuggetJSON.h"
#include "MonthLengthLookupInformationNuggetJSON.h"
#include "MoonPhaseAtTimeInformationNuggetJSON.h"
#include "SunriseSunsetTimeInformationNuggetJSON.h"
#include "TimeBetweenLocationsInformationNuggetJSON.h"
#include "TimeBetweenTimesInformationNuggetJSON.h"
#include "TimeInLocationInformationNuggetJSON.h"
#include "TimeOfMoonPhaseInformationNuggetJSON.h"
#include "TimezoneLookupInformationNuggetJSON.h"


DateAndTimeInformationNuggetJSON::DateAndTimeInformationNuggetJSON(const DateAndTimeInformationNuggetJSON &)
  {
    assert(false);
  }

DateAndTimeInformationNuggetJSON &DateAndTimeInformationNuggetJSON::operator=(const DateAndTimeInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

DateAndTimeInformationNuggetJSON::DateAndTimeInformationNuggetJSON(void)
  {
  }

DateAndTimeInformationNuggetJSON::~DateAndTimeInformationNuggetJSON(void)
  {
  }

const char *DateAndTimeInformationNuggetJSON::getNuggetKind(void) const
  {
    return "DateAndTime";
  }

DateAndTimeInformationNuggetJSON *DateAndTimeInformationNuggetJSON::createForKey(const char *key, string_index *other_field_index)
  {
    switch ((unsigned char)(key[0]))
      {
        case 'D':
            if (strcmp(&(key[1]), "ateAndTimeLookupCommand") == 0)
                return new DateAndTimeLookupInformationNuggetJSON();
            break;
        case 'H':
            if (strcmp(&(key[1]), "olidaysOnDateLookup") == 0)
                return new HolidaysOnDateLookupInformationNuggetJSON();
            break;
        case 'M':
            if (strncmp(&(key[1]), "o", 1) == 0)
              {
                switch ((unsigned char)(key[2]))
                  {
                    case 'n':
                        if (strcmp(&(key[3]), "thLengthLookup") == 0)
                            return new MonthLengthLookupInformationNuggetJSON();
                        break;
                    case 'o':
                        if (strcmp(&(key[3]), "nPhaseAtTime") == 0)
                            return new MoonPhaseAtTimeInformationNuggetJSON();
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'S':
            if (strcmp(&(key[1]), "unriseSunsetTime") == 0)
                return new SunriseSunsetTimeInformationNuggetJSON();
            break;
        case 'T':
            if (strncmp(&(key[1]), "ime", 3) == 0)
              {
                switch ((unsigned char)(key[4]))
                  {
                    case 'B':
                        if (strncmp(&(key[5]), "etween", 6) == 0)
                          {
                            switch ((unsigned char)(key[11]))
                              {
                                case 'L':
                                    if (strcmp(&(key[12]), "ocations") == 0)
                                        return new TimeBetweenLocationsInformationNuggetJSON();
                                    break;
                                case 'T':
                                    if (strcmp(&(key[12]), "imes") == 0)
                                        return new TimeBetweenTimesInformationNuggetJSON();
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'I':
                        if (strcmp(&(key[5]), "nLocation") == 0)
                            return new TimeInLocationInformationNuggetJSON();
                        break;
                    case 'O':
                        if (strcmp(&(key[5]), "fMoonPhase") == 0)
                            return new TimeOfMoonPhaseInformationNuggetJSON();
                        break;
                    case 'z':
                        if (strcmp(&(key[5]), "oneLookup") == 0)
                            return new TimezoneLookupInformationNuggetJSON();
                        break;
                    default:
                        break;
                  }
              }
            break;
        default:
            break;
      }

    class GenericDateAndTimeInformationNuggetJSON : public DateAndTimeInformationNuggetJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericDateAndTimeInformationNuggetJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericDateAndTimeInformationNuggetJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getDateAndTimeNuggetKind(void) const  { return key.c_str(); }
        size_t extraDateAndTimeInformationNuggetComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraDateAndTimeInformationNuggetComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraDateAndTimeInformationNuggetComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraDateAndTimeInformationNuggetComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraDateAndTimeInformationNuggetLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraDateAndTimeInformationNuggetLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraDateAndTimeInformationNuggetAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraDateAndTimeInformationNuggetSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraDateAndTimeInformationNuggetLookup(key);
            if (old_field == NULL)
              {
                extraDateAndTimeInformationNuggetAppendPair(key, new_component);
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
    return new GenericDateAndTimeInformationNuggetJSON(key);
  }
DateAndTimeInformationNuggetJSON *DateAndTimeInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DateAndTimeInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DateAndTimeInformationNuggetJSON>, DateAndTimeInformationNuggetJSON *, bool> generator("Type DateAndTimeInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
