/* file "OpenHoursSpecJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef OPENHOURSSPECJSON_H
#define OPENHOURSSPECJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONBooleanGenerator.h"
#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class OpenHoursSpecJSON : public ReferenceCounted
  {
  private:
    bool flagHasOpenNow;
    bool storeOpenNow;
    bool flagHasOpen24Hrs;
    bool storeOpen24Hrs;
    bool flagHasOpenEveryday;
    bool storeOpenEveryday;
    bool flagHasOpenMonday;
    bool storeOpenMonday;
    bool flagHasOpenTuesday;
    bool storeOpenTuesday;
    bool flagHasOpenWednesday;
    bool storeOpenWednesday;
    bool flagHasOpenThursday;
    bool storeOpenThursday;
    bool flagHasOpenFriday;
    bool storeOpenFriday;
    bool flagHasOpenSaturday;
    bool storeOpenSaturday;
    bool flagHasOpenSunday;
    bool storeOpenSunday;
    bool flagHasOpenAfterTime;
    bool storeOpenAfterTime;
    bool flagHasOpenBeforeTime;
    bool storeOpenBeforeTime;
    bool flagHasOpenTimeMentioned;
    bool storeOpenTimeMentioned;
    bool flagHasStartDateAndTime;
    DateAndOrTimeJSON * storeStartDateAndTime;
    bool flagHasEndDateAndTime;
    DateAndOrTimeJSON * storeEndDateAndTime;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    OpenHoursSpecJSON(const OpenHoursSpecJSON &);
    OpenHoursSpecJSON & operator=(const OpenHoursSpecJSON &other);

    void  fromJSONOpenNow(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOpen24Hrs(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOpenEveryday(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOpenMonday(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOpenTuesday(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOpenWednesday(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOpenThursday(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOpenFriday(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOpenSaturday(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOpenSunday(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOpenAfterTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOpenBeforeTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOpenTimeMentioned(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStartDateAndTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEndDateAndTime(JSONValue *json_value, bool ignore_extras = false);


  public:
    OpenHoursSpecJSON(void);
    virtual ~OpenHoursSpecJSON(void);
    bool  hasOpenNow(void) const;
    bool  getOpenNow(void);
    const bool  getOpenNow(void) const;
    bool  hasOpen24Hrs(void) const;
    bool  getOpen24Hrs(void);
    const bool  getOpen24Hrs(void) const;
    bool  hasOpenEveryday(void) const;
    bool  getOpenEveryday(void);
    const bool  getOpenEveryday(void) const;
    bool  hasOpenMonday(void) const;
    bool  getOpenMonday(void);
    const bool  getOpenMonday(void) const;
    bool  hasOpenTuesday(void) const;
    bool  getOpenTuesday(void);
    const bool  getOpenTuesday(void) const;
    bool  hasOpenWednesday(void) const;
    bool  getOpenWednesday(void);
    const bool  getOpenWednesday(void) const;
    bool  hasOpenThursday(void) const;
    bool  getOpenThursday(void);
    const bool  getOpenThursday(void) const;
    bool  hasOpenFriday(void) const;
    bool  getOpenFriday(void);
    const bool  getOpenFriday(void) const;
    bool  hasOpenSaturday(void) const;
    bool  getOpenSaturday(void);
    const bool  getOpenSaturday(void) const;
    bool  hasOpenSunday(void) const;
    bool  getOpenSunday(void);
    const bool  getOpenSunday(void) const;
    bool  hasOpenAfterTime(void) const;
    bool  getOpenAfterTime(void);
    const bool  getOpenAfterTime(void) const;
    bool  hasOpenBeforeTime(void) const;
    bool  getOpenBeforeTime(void);
    const bool  getOpenBeforeTime(void) const;
    bool  hasOpenTimeMentioned(void) const;
    bool  getOpenTimeMentioned(void);
    const bool  getOpenTimeMentioned(void) const;
    bool  hasStartDateAndTime(void) const;
    DateAndOrTimeJSON *  getStartDateAndTime(void);
    const DateAndOrTimeJSON *  getStartDateAndTime(void) const;
    bool  hasEndDateAndTime(void) const;
    DateAndOrTimeJSON *  getEndDateAndTime(void);
    const DateAndOrTimeJSON *  getEndDateAndTime(void) const;

    virtual size_t extraOpenHoursSpecComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraOpenHoursSpecComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraOpenHoursSpecComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraOpenHoursSpecComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraOpenHoursSpecLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraOpenHoursSpecLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setOpenNow(bool new_value)
      {
        flagHasOpenNow = true;
        storeOpenNow = new_value;
      }
    void unsetOpenNow(void)
      {
        flagHasOpenNow = false;
      }
    void setOpen24Hrs(bool new_value)
      {
        flagHasOpen24Hrs = true;
        storeOpen24Hrs = new_value;
      }
    void unsetOpen24Hrs(void)
      {
        flagHasOpen24Hrs = false;
      }
    void setOpenEveryday(bool new_value)
      {
        flagHasOpenEveryday = true;
        storeOpenEveryday = new_value;
      }
    void unsetOpenEveryday(void)
      {
        flagHasOpenEveryday = false;
      }
    void setOpenMonday(bool new_value)
      {
        flagHasOpenMonday = true;
        storeOpenMonday = new_value;
      }
    void unsetOpenMonday(void)
      {
        flagHasOpenMonday = false;
      }
    void setOpenTuesday(bool new_value)
      {
        flagHasOpenTuesday = true;
        storeOpenTuesday = new_value;
      }
    void unsetOpenTuesday(void)
      {
        flagHasOpenTuesday = false;
      }
    void setOpenWednesday(bool new_value)
      {
        flagHasOpenWednesday = true;
        storeOpenWednesday = new_value;
      }
    void unsetOpenWednesday(void)
      {
        flagHasOpenWednesday = false;
      }
    void setOpenThursday(bool new_value)
      {
        flagHasOpenThursday = true;
        storeOpenThursday = new_value;
      }
    void unsetOpenThursday(void)
      {
        flagHasOpenThursday = false;
      }
    void setOpenFriday(bool new_value)
      {
        flagHasOpenFriday = true;
        storeOpenFriday = new_value;
      }
    void unsetOpenFriday(void)
      {
        flagHasOpenFriday = false;
      }
    void setOpenSaturday(bool new_value)
      {
        flagHasOpenSaturday = true;
        storeOpenSaturday = new_value;
      }
    void unsetOpenSaturday(void)
      {
        flagHasOpenSaturday = false;
      }
    void setOpenSunday(bool new_value)
      {
        flagHasOpenSunday = true;
        storeOpenSunday = new_value;
      }
    void unsetOpenSunday(void)
      {
        flagHasOpenSunday = false;
      }
    void setOpenAfterTime(bool new_value)
      {
        flagHasOpenAfterTime = true;
        storeOpenAfterTime = new_value;
      }
    void unsetOpenAfterTime(void)
      {
        flagHasOpenAfterTime = false;
      }
    void setOpenBeforeTime(bool new_value)
      {
        flagHasOpenBeforeTime = true;
        storeOpenBeforeTime = new_value;
      }
    void unsetOpenBeforeTime(void)
      {
        flagHasOpenBeforeTime = false;
      }
    void setOpenTimeMentioned(bool new_value)
      {
        flagHasOpenTimeMentioned = true;
        storeOpenTimeMentioned = new_value;
      }
    void unsetOpenTimeMentioned(void)
      {
        flagHasOpenTimeMentioned = false;
      }
    void setStartDateAndTime(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStartDateAndTime)
          {
            storeStartDateAndTime->remove_reference();
          }
        flagHasStartDateAndTime = true;
        storeStartDateAndTime = new_value;
      }
    void unsetStartDateAndTime(void)
      {
        if (flagHasStartDateAndTime)
          {
            storeStartDateAndTime->remove_reference();
          }
        flagHasStartDateAndTime = false;
      }
    void setEndDateAndTime(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasEndDateAndTime)
          {
            storeEndDateAndTime->remove_reference();
          }
        flagHasEndDateAndTime = true;
        storeEndDateAndTime = new_value;
      }
    void unsetEndDateAndTime(void)
      {
        if (flagHasEndDateAndTime)
          {
            storeEndDateAndTime->remove_reference();
          }
        flagHasEndDateAndTime = false;
      }

    virtual void extraOpenHoursSpecAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraOpenHoursSpecSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraOpenHoursSpecLookup(key);
        if (old_field == NULL)
          {
            extraOpenHoursSpecAppendPair(key, new_component);
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
        if (flagHasOpenNow)
          {
            handler->start_pair("OpenNow");
            handler->boolean_value(storeOpenNow);
          }
        if (flagHasOpen24Hrs)
          {
            handler->start_pair("Open24Hrs");
            handler->boolean_value(storeOpen24Hrs);
          }
        if (flagHasOpenEveryday)
          {
            handler->start_pair("OpenEveryday");
            handler->boolean_value(storeOpenEveryday);
          }
        if (flagHasOpenMonday)
          {
            handler->start_pair("OpenMonday");
            handler->boolean_value(storeOpenMonday);
          }
        if (flagHasOpenTuesday)
          {
            handler->start_pair("OpenTuesday");
            handler->boolean_value(storeOpenTuesday);
          }
        if (flagHasOpenWednesday)
          {
            handler->start_pair("OpenWednesday");
            handler->boolean_value(storeOpenWednesday);
          }
        if (flagHasOpenThursday)
          {
            handler->start_pair("OpenThursday");
            handler->boolean_value(storeOpenThursday);
          }
        if (flagHasOpenFriday)
          {
            handler->start_pair("OpenFriday");
            handler->boolean_value(storeOpenFriday);
          }
        if (flagHasOpenSaturday)
          {
            handler->start_pair("OpenSaturday");
            handler->boolean_value(storeOpenSaturday);
          }
        if (flagHasOpenSunday)
          {
            handler->start_pair("OpenSunday");
            handler->boolean_value(storeOpenSunday);
          }
        if (flagHasOpenAfterTime)
          {
            handler->start_pair("OpenAfterTime");
            handler->boolean_value(storeOpenAfterTime);
          }
        if (flagHasOpenBeforeTime)
          {
            handler->start_pair("OpenBeforeTime");
            handler->boolean_value(storeOpenBeforeTime);
          }
        if (flagHasOpenTimeMentioned)
          {
            handler->start_pair("OpenTimeMentioned");
            handler->boolean_value(storeOpenTimeMentioned);
          }
        if (flagHasStartDateAndTime)
          {
            handler->start_pair("StartDateAndTime");
            storeStartDateAndTime->write_as_json(handler);
          }
        if (flagHasEndDateAndTime)
          {
            handler->start_pair("EndDateAndTime");
            storeEndDateAndTime->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static OpenHoursSpecJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static OpenHoursSpecJSON *from_text(const char *text, bool ignore_extras = false)
      {
        OpenHoursSpecJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<OpenHoursSpecJSON>, OpenHoursSpecJSON *, bool> generator("Type OpenHoursSpec", ignore_extras);
            parse_json_value(text, "Text for OpenHoursSpecJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static OpenHoursSpecJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        OpenHoursSpecJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<OpenHoursSpecJSON>, OpenHoursSpecJSON *, bool> generator("Type OpenHoursSpec", ignore_extras);
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
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorOpenNow;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorOpen24Hrs;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorOpenEveryday;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorOpenMonday;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorOpenTuesday;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorOpenWednesday;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorOpenThursday;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorOpenFriday;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorOpenSaturday;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorOpenSunday;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorOpenAfterTime;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorOpenBeforeTime;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorOpenTimeMentioned;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorStartDateAndTime;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorEndDateAndTime;
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
            OpenHoursSpecJSON *result = new OpenHoursSpecJSON();
            assert(result != NULL);
            RCHandle<OpenHoursSpecJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraOpenHoursSpecAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(OpenHoursSpecJSON *result)
          {
            if (fieldGeneratorOpenNow.have_value)
              {
                result->setOpenNow(fieldGeneratorOpenNow.value);
                fieldGeneratorOpenNow.have_value = false;
              }
            if (fieldGeneratorOpen24Hrs.have_value)
              {
                result->setOpen24Hrs(fieldGeneratorOpen24Hrs.value);
                fieldGeneratorOpen24Hrs.have_value = false;
              }
            if (fieldGeneratorOpenEveryday.have_value)
              {
                result->setOpenEveryday(fieldGeneratorOpenEveryday.value);
                fieldGeneratorOpenEveryday.have_value = false;
              }
            if (fieldGeneratorOpenMonday.have_value)
              {
                result->setOpenMonday(fieldGeneratorOpenMonday.value);
                fieldGeneratorOpenMonday.have_value = false;
              }
            if (fieldGeneratorOpenTuesday.have_value)
              {
                result->setOpenTuesday(fieldGeneratorOpenTuesday.value);
                fieldGeneratorOpenTuesday.have_value = false;
              }
            if (fieldGeneratorOpenWednesday.have_value)
              {
                result->setOpenWednesday(fieldGeneratorOpenWednesday.value);
                fieldGeneratorOpenWednesday.have_value = false;
              }
            if (fieldGeneratorOpenThursday.have_value)
              {
                result->setOpenThursday(fieldGeneratorOpenThursday.value);
                fieldGeneratorOpenThursday.have_value = false;
              }
            if (fieldGeneratorOpenFriday.have_value)
              {
                result->setOpenFriday(fieldGeneratorOpenFriday.value);
                fieldGeneratorOpenFriday.have_value = false;
              }
            if (fieldGeneratorOpenSaturday.have_value)
              {
                result->setOpenSaturday(fieldGeneratorOpenSaturday.value);
                fieldGeneratorOpenSaturday.have_value = false;
              }
            if (fieldGeneratorOpenSunday.have_value)
              {
                result->setOpenSunday(fieldGeneratorOpenSunday.value);
                fieldGeneratorOpenSunday.have_value = false;
              }
            if (fieldGeneratorOpenAfterTime.have_value)
              {
                result->setOpenAfterTime(fieldGeneratorOpenAfterTime.value);
                fieldGeneratorOpenAfterTime.have_value = false;
              }
            if (fieldGeneratorOpenBeforeTime.have_value)
              {
                result->setOpenBeforeTime(fieldGeneratorOpenBeforeTime.value);
                fieldGeneratorOpenBeforeTime.have_value = false;
              }
            if (fieldGeneratorOpenTimeMentioned.have_value)
              {
                result->setOpenTimeMentioned(fieldGeneratorOpenTimeMentioned.value);
                fieldGeneratorOpenTimeMentioned.have_value = false;
              }
            if (fieldGeneratorStartDateAndTime.have_value)
              {
                result->setStartDateAndTime(fieldGeneratorStartDateAndTime.value.referenced());
                fieldGeneratorStartDateAndTime.have_value = false;
              }
            if (fieldGeneratorEndDateAndTime.have_value)
              {
                result->setEndDateAndTime(fieldGeneratorEndDateAndTime.value.referenced());
                fieldGeneratorEndDateAndTime.have_value = false;
              }
          }
        virtual void handle_result(OpenHoursSpecJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'E':
                    if (strcmp(&(field_name[1]), "ndDateAndTime") == 0)
                        return &fieldGeneratorEndDateAndTime;
                    break;
                case 'O':
                    if (strncmp(&(field_name[1]), "pen", 3) == 0)
                      {
                        switch ((unsigned char)(field_name[4]))
                          {
                            case '2':
                                if (strcmp(&(field_name[5]), "4Hrs") == 0)
                                    return &fieldGeneratorOpen24Hrs;
                                break;
                            case 'A':
                                if (strcmp(&(field_name[5]), "fterTime") == 0)
                                    return &fieldGeneratorOpenAfterTime;
                                break;
                            case 'B':
                                if (strcmp(&(field_name[5]), "eforeTime") == 0)
                                    return &fieldGeneratorOpenBeforeTime;
                                break;
                            case 'E':
                                if (strcmp(&(field_name[5]), "veryday") == 0)
                                    return &fieldGeneratorOpenEveryday;
                                break;
                            case 'F':
                                if (strcmp(&(field_name[5]), "riday") == 0)
                                    return &fieldGeneratorOpenFriday;
                                break;
                            case 'M':
                                if (strcmp(&(field_name[5]), "onday") == 0)
                                    return &fieldGeneratorOpenMonday;
                                break;
                            case 'N':
                                if (strcmp(&(field_name[5]), "ow") == 0)
                                    return &fieldGeneratorOpenNow;
                                break;
                            case 'S':
                                switch ((unsigned char)(field_name[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(field_name[6]), "turday") == 0)
                                            return &fieldGeneratorOpenSaturday;
                                        break;
                                    case 'u':
                                        if (strcmp(&(field_name[6]), "nday") == 0)
                                            return &fieldGeneratorOpenSunday;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'T':
                                switch ((unsigned char)(field_name[5]))
                                  {
                                    case 'h':
                                        if (strcmp(&(field_name[6]), "ursday") == 0)
                                            return &fieldGeneratorOpenThursday;
                                        break;
                                    case 'i':
                                        if (strcmp(&(field_name[6]), "meMentioned") == 0)
                                            return &fieldGeneratorOpenTimeMentioned;
                                        break;
                                    case 'u':
                                        if (strcmp(&(field_name[6]), "esday") == 0)
                                            return &fieldGeneratorOpenTuesday;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'W':
                                if (strcmp(&(field_name[5]), "ednesday") == 0)
                                    return &fieldGeneratorOpenWednesday;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "tartDateAndTime") == 0)
                        return &fieldGeneratorStartDateAndTime;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorOpenNow("field \"OpenNow\" of the OpenHoursSpec class"), fieldGeneratorOpen24Hrs("field \"Open24Hrs\" of the OpenHoursSpec class"), fieldGeneratorOpenEveryday("field \"OpenEveryday\" of the OpenHoursSpec class"), fieldGeneratorOpenMonday("field \"OpenMonday\" of the OpenHoursSpec class"), fieldGeneratorOpenTuesday("field \"OpenTuesday\" of the OpenHoursSpec class"), fieldGeneratorOpenWednesday("field \"OpenWednesday\" of the OpenHoursSpec class"), fieldGeneratorOpenThursday("field \"OpenThursday\" of the OpenHoursSpec class"), fieldGeneratorOpenFriday("field \"OpenFriday\" of the OpenHoursSpec class"), fieldGeneratorOpenSaturday("field \"OpenSaturday\" of the OpenHoursSpec class"), fieldGeneratorOpenSunday("field \"OpenSunday\" of the OpenHoursSpec class"), fieldGeneratorOpenAfterTime("field \"OpenAfterTime\" of the OpenHoursSpec class"), fieldGeneratorOpenBeforeTime("field \"OpenBeforeTime\" of the OpenHoursSpec class"), fieldGeneratorOpenTimeMentioned("field \"OpenTimeMentioned\" of the OpenHoursSpec class"), fieldGeneratorStartDateAndTime("field \"StartDateAndTime\" of the OpenHoursSpec class", ignore_extras), fieldGeneratorEndDateAndTime("field \"EndDateAndTime\" of the OpenHoursSpec class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the OpenHoursSpec class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorOpenNow.reset();
            fieldGeneratorOpen24Hrs.reset();
            fieldGeneratorOpenEveryday.reset();
            fieldGeneratorOpenMonday.reset();
            fieldGeneratorOpenTuesday.reset();
            fieldGeneratorOpenWednesday.reset();
            fieldGeneratorOpenThursday.reset();
            fieldGeneratorOpenFriday.reset();
            fieldGeneratorOpenSaturday.reset();
            fieldGeneratorOpenSunday.reset();
            fieldGeneratorOpenAfterTime.reset();
            fieldGeneratorOpenBeforeTime.reset();
            fieldGeneratorOpenTimeMentioned.reset();
            fieldGeneratorStartDateAndTime.reset();
            fieldGeneratorEndDateAndTime.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* OPENHOURSSPECJSON_H */
