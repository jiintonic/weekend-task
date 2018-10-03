/* file "CalendarQueryJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CALENDARQUERYJSON_H
#define CALENDARQUERYJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeJSON.h"
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


class CalendarQueryJSON : public ReferenceCounted
  {
  public:
    enum TypeSelectionTarget
      {
        SelectionTarget_First,
        SelectionTarget_Last,
        SelectionTarget_All
      };

    static TypeSelectionTarget  stringToSelectionTarget(const char *chars);
    static const char * stringFromSelectionTarget(TypeSelectionTarget the_enum);
    enum TypeRecurringTarget
      {
        RecurringTarget_SpecifiedOnly,
        RecurringTarget_AllFollowing
      };

    static TypeRecurringTarget  stringToRecurringTarget(const char *chars);
    static const char * stringFromRecurringTarget(TypeRecurringTarget the_enum);
    class TypeStartTimeRangeJSON : public ReferenceCounted
      {
      private:
        bool flagHasRangeStart;
        DateAndOrTimeJSON * storeRangeStart;
        bool flagHasRangeEnd;
        DateAndOrTimeJSON * storeRangeEnd;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeStartTimeRangeJSON(const TypeStartTimeRangeJSON &);
        TypeStartTimeRangeJSON & operator=(const TypeStartTimeRangeJSON &other);

        void  fromJSONRangeStart(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONRangeEnd(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeStartTimeRangeJSON(void);
        virtual ~TypeStartTimeRangeJSON(void);
        bool  hasRangeStart(void) const;
        DateAndOrTimeJSON *  getRangeStart(void);
        const DateAndOrTimeJSON *  getRangeStart(void) const;
        bool  hasRangeEnd(void) const;
        DateAndOrTimeJSON *  getRangeEnd(void);
        const DateAndOrTimeJSON *  getRangeEnd(void) const;

        virtual size_t extraTypeStartTimeRangeComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeStartTimeRangeComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeStartTimeRangeComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeStartTimeRangeComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeStartTimeRangeLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeStartTimeRangeLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setRangeStart(DateAndOrTimeJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasRangeStart)
              {
                storeRangeStart->remove_reference();
              }
            flagHasRangeStart = true;
            storeRangeStart = new_value;
          }
        void unsetRangeStart(void)
          {
            if (flagHasRangeStart)
              {
                storeRangeStart->remove_reference();
              }
            flagHasRangeStart = false;
          }
        void setRangeEnd(DateAndOrTimeJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasRangeEnd)
              {
                storeRangeEnd->remove_reference();
              }
            flagHasRangeEnd = true;
            storeRangeEnd = new_value;
          }
        void unsetRangeEnd(void)
          {
            if (flagHasRangeEnd)
              {
                storeRangeEnd->remove_reference();
              }
            flagHasRangeEnd = false;
          }

        virtual void extraTypeStartTimeRangeAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeStartTimeRangeSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeStartTimeRangeLookup(key);
            if (old_field == NULL)
              {
                extraTypeStartTimeRangeAppendPair(key, new_component);
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
            assert(flagHasRangeStart);
            handler->start_pair("RangeStart");
            storeRangeStart->write_as_json(handler);
            assert(flagHasRangeEnd);
            handler->start_pair("RangeEnd");
            storeRangeEnd->write_as_json(handler);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasRangeStart()))
              {
                return "When parsing the object for %what%, the \"RangeStart\" field was missing.";
              }
            if (!(hasRangeEnd()))
              {
                return "When parsing the object for %what%, the \"RangeEnd\" field was missing.";
              }
            return NULL;
          }

        static TypeStartTimeRangeJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeStartTimeRangeJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeStartTimeRangeJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeStartTimeRangeJSON>, TypeStartTimeRangeJSON *, bool> generator("Type TypeStartTimeRange", ignore_extras);
                parse_json_value(text, "Text for TypeStartTimeRangeJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeStartTimeRangeJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeStartTimeRangeJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeStartTimeRangeJSON>, TypeStartTimeRangeJSON *, bool> generator("Type TypeStartTimeRange", ignore_extras);
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
            JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorRangeStart;
            JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorRangeEnd;
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
                TypeStartTimeRangeJSON *result = new TypeStartTimeRangeJSON();
                assert(result != NULL);
                RCHandle<TypeStartTimeRangeJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeStartTimeRangeAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeStartTimeRangeJSON *result)
              {
                if (fieldGeneratorRangeStart.have_value)
                  {
                    result->setRangeStart(fieldGeneratorRangeStart.value.referenced());
                    fieldGeneratorRangeStart.have_value = false;
                  }
                else if (!(result->hasRangeStart()))
                  {
                    error("When parsing the object for %what%, the \"RangeStart\" field was missing.");
                  }
                if (fieldGeneratorRangeEnd.have_value)
                  {
                    result->setRangeEnd(fieldGeneratorRangeEnd.value.referenced());
                    fieldGeneratorRangeEnd.have_value = false;
                  }
                else if (!(result->hasRangeEnd()))
                  {
                    error("When parsing the object for %what%, the \"RangeEnd\" field was missing.");
                  }
              }
            virtual void handle_result(TypeStartTimeRangeJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strncmp(field_name, "Range", 5) == 0)
                  {
                    switch ((unsigned char)(field_name[5]))
                      {
                        case 'E':
                            if (strcmp(&(field_name[6]), "nd") == 0)
                                return &fieldGeneratorRangeEnd;
                            break;
                        case 'S':
                            if (strcmp(&(field_name[6]), "tart") == 0)
                                return &fieldGeneratorRangeStart;
                            break;
                        default:
                            break;
                      }
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorRangeStart("field \"RangeStart\" of the TypeStartTimeRange class", ignore_extras), fieldGeneratorRangeEnd("field \"RangeEnd\" of the TypeStartTimeRange class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeStartTimeRange class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorRangeStart.reset();
                fieldGeneratorRangeEnd.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };
    class TypeEndTimeRangeJSON : public ReferenceCounted
      {
      private:
        bool flagHasRangeStart;
        DateAndOrTimeJSON * storeRangeStart;
        bool flagHasRangeEnd;
        DateAndOrTimeJSON * storeRangeEnd;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeEndTimeRangeJSON(const TypeEndTimeRangeJSON &);
        TypeEndTimeRangeJSON & operator=(const TypeEndTimeRangeJSON &other);

        void  fromJSONRangeStart(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONRangeEnd(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeEndTimeRangeJSON(void);
        virtual ~TypeEndTimeRangeJSON(void);
        bool  hasRangeStart(void) const;
        DateAndOrTimeJSON *  getRangeStart(void);
        const DateAndOrTimeJSON *  getRangeStart(void) const;
        bool  hasRangeEnd(void) const;
        DateAndOrTimeJSON *  getRangeEnd(void);
        const DateAndOrTimeJSON *  getRangeEnd(void) const;

        virtual size_t extraTypeEndTimeRangeComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeEndTimeRangeComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeEndTimeRangeComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeEndTimeRangeComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeEndTimeRangeLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeEndTimeRangeLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setRangeStart(DateAndOrTimeJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasRangeStart)
              {
                storeRangeStart->remove_reference();
              }
            flagHasRangeStart = true;
            storeRangeStart = new_value;
          }
        void unsetRangeStart(void)
          {
            if (flagHasRangeStart)
              {
                storeRangeStart->remove_reference();
              }
            flagHasRangeStart = false;
          }
        void setRangeEnd(DateAndOrTimeJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasRangeEnd)
              {
                storeRangeEnd->remove_reference();
              }
            flagHasRangeEnd = true;
            storeRangeEnd = new_value;
          }
        void unsetRangeEnd(void)
          {
            if (flagHasRangeEnd)
              {
                storeRangeEnd->remove_reference();
              }
            flagHasRangeEnd = false;
          }

        virtual void extraTypeEndTimeRangeAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeEndTimeRangeSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeEndTimeRangeLookup(key);
            if (old_field == NULL)
              {
                extraTypeEndTimeRangeAppendPair(key, new_component);
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
            assert(flagHasRangeStart);
            handler->start_pair("RangeStart");
            storeRangeStart->write_as_json(handler);
            assert(flagHasRangeEnd);
            handler->start_pair("RangeEnd");
            storeRangeEnd->write_as_json(handler);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasRangeStart()))
              {
                return "When parsing the object for %what%, the \"RangeStart\" field was missing.";
              }
            if (!(hasRangeEnd()))
              {
                return "When parsing the object for %what%, the \"RangeEnd\" field was missing.";
              }
            return NULL;
          }

        static TypeEndTimeRangeJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeEndTimeRangeJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeEndTimeRangeJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeEndTimeRangeJSON>, TypeEndTimeRangeJSON *, bool> generator("Type TypeEndTimeRange", ignore_extras);
                parse_json_value(text, "Text for TypeEndTimeRangeJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeEndTimeRangeJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeEndTimeRangeJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeEndTimeRangeJSON>, TypeEndTimeRangeJSON *, bool> generator("Type TypeEndTimeRange", ignore_extras);
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
            JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorRangeStart;
            JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorRangeEnd;
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
                TypeEndTimeRangeJSON *result = new TypeEndTimeRangeJSON();
                assert(result != NULL);
                RCHandle<TypeEndTimeRangeJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeEndTimeRangeAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeEndTimeRangeJSON *result)
              {
                if (fieldGeneratorRangeStart.have_value)
                  {
                    result->setRangeStart(fieldGeneratorRangeStart.value.referenced());
                    fieldGeneratorRangeStart.have_value = false;
                  }
                else if (!(result->hasRangeStart()))
                  {
                    error("When parsing the object for %what%, the \"RangeStart\" field was missing.");
                  }
                if (fieldGeneratorRangeEnd.have_value)
                  {
                    result->setRangeEnd(fieldGeneratorRangeEnd.value.referenced());
                    fieldGeneratorRangeEnd.have_value = false;
                  }
                else if (!(result->hasRangeEnd()))
                  {
                    error("When parsing the object for %what%, the \"RangeEnd\" field was missing.");
                  }
              }
            virtual void handle_result(TypeEndTimeRangeJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strncmp(field_name, "Range", 5) == 0)
                  {
                    switch ((unsigned char)(field_name[5]))
                      {
                        case 'E':
                            if (strcmp(&(field_name[6]), "nd") == 0)
                                return &fieldGeneratorRangeEnd;
                            break;
                        case 'S':
                            if (strcmp(&(field_name[6]), "tart") == 0)
                                return &fieldGeneratorRangeStart;
                            break;
                        default:
                            break;
                      }
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorRangeStart("field \"RangeStart\" of the TypeEndTimeRange class", ignore_extras), fieldGeneratorRangeEnd("field \"RangeEnd\" of the TypeEndTimeRange class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeEndTimeRange class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorRangeStart.reset();
                fieldGeneratorRangeEnd.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasSelectionTarget;
    TypeSelectionTarget storeSelectionTarget;
    bool flagHasRecurringTarget;
    TypeRecurringTarget storeRecurringTarget;
    bool flagHasExactCalendarName;
    std::string storeExactCalendarName;
    bool flagHasPartialCalendarName;
    std::string storePartialCalendarName;
    bool flagHasCalendarIDs;
    std::vector< std::string > storeCalendarIDs;
    bool flagHasItemType;
    std::string storeItemType;
    bool flagHasExactTitle;
    std::string storeExactTitle;
    bool flagHasPartialTitle;
    std::string storePartialTitle;
    bool flagHasExactLocation;
    std::string storeExactLocation;
    bool flagHasPartialLocation;
    std::string storePartialLocation;
    bool flagHasStartTimeRange;
    TypeStartTimeRangeJSON * storeStartTimeRange;
    bool flagHasEndTimeRange;
    TypeEndTimeRangeJSON * storeEndTimeRange;
    bool flagHasIsRecurring;
    bool storeIsRecurring;
    bool flagHasIsAllDay;
    bool storeIsAllDay;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    CalendarQueryJSON(const CalendarQueryJSON &);
    CalendarQueryJSON & operator=(const CalendarQueryJSON &other);

    void  fromJSONSelectionTarget(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRecurringTarget(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONExactCalendarName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPartialCalendarName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCalendarIDs(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONItemType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONExactTitle(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPartialTitle(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONExactLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPartialLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStartTimeRange(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEndTimeRange(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsRecurring(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsAllDay(JSONValue *json_value, bool ignore_extras = false);


  public:
    CalendarQueryJSON(void);
    virtual ~CalendarQueryJSON(void);
    bool  hasSelectionTarget(void) const;
    TypeSelectionTarget  getSelectionTarget(void);
    const TypeSelectionTarget  getSelectionTarget(void) const;
    const char * getSelectionTargetAsChars(void) const;
    std::string  getSelectionTargetAsString(void) const;
    bool  hasRecurringTarget(void) const;
    TypeRecurringTarget  getRecurringTarget(void);
    const TypeRecurringTarget  getRecurringTarget(void) const;
    const char * getRecurringTargetAsChars(void) const;
    std::string  getRecurringTargetAsString(void) const;
    bool  hasExactCalendarName(void) const;
    std::string  getExactCalendarName(void);
    const std::string  getExactCalendarName(void) const;
    bool  hasPartialCalendarName(void) const;
    std::string  getPartialCalendarName(void);
    const std::string  getPartialCalendarName(void) const;
    bool  hasCalendarIDs(void) const;
    size_t  countOfCalendarIDs(void) const;
    std::string  elementOfCalendarIDs(size_t element_num);
    const std::string  elementOfCalendarIDs(size_t element_num) const;
    std::vector< std::string >  getCalendarIDs(void);
    const std::vector< std::string >  getCalendarIDs(void) const;
    bool  hasItemType(void) const;
    std::string  getItemType(void);
    const std::string  getItemType(void) const;
    bool  hasExactTitle(void) const;
    std::string  getExactTitle(void);
    const std::string  getExactTitle(void) const;
    bool  hasPartialTitle(void) const;
    std::string  getPartialTitle(void);
    const std::string  getPartialTitle(void) const;
    bool  hasExactLocation(void) const;
    std::string  getExactLocation(void);
    const std::string  getExactLocation(void) const;
    bool  hasPartialLocation(void) const;
    std::string  getPartialLocation(void);
    const std::string  getPartialLocation(void) const;
    bool  hasStartTimeRange(void) const;
    TypeStartTimeRangeJSON *  getStartTimeRange(void);
    const TypeStartTimeRangeJSON *  getStartTimeRange(void) const;
    bool  hasEndTimeRange(void) const;
    TypeEndTimeRangeJSON *  getEndTimeRange(void);
    const TypeEndTimeRangeJSON *  getEndTimeRange(void) const;
    bool  hasIsRecurring(void) const;
    bool  getIsRecurring(void);
    const bool  getIsRecurring(void) const;
    bool  hasIsAllDay(void) const;
    bool  getIsAllDay(void);
    const bool  getIsAllDay(void) const;

    virtual size_t extraCalendarQueryComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraCalendarQueryComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraCalendarQueryComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraCalendarQueryComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraCalendarQueryLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraCalendarQueryLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setSelectionTarget(TypeSelectionTarget new_value)
      {
        flagHasSelectionTarget = true;
        storeSelectionTarget = new_value;
      }
    void setSelectionTarget(const char *chars)
      {
        setSelectionTarget(stringToSelectionTarget(chars));
      }
    void setSelectionTarget(std::string the_string)
      {
        setSelectionTarget(stringToSelectionTarget(the_string.c_str()));
      }
    void unsetSelectionTarget(void)
      {
        flagHasSelectionTarget = false;
      }
    void setRecurringTarget(TypeRecurringTarget new_value)
      {
        flagHasRecurringTarget = true;
        storeRecurringTarget = new_value;
      }
    void setRecurringTarget(const char *chars)
      {
        setRecurringTarget(stringToRecurringTarget(chars));
      }
    void setRecurringTarget(std::string the_string)
      {
        setRecurringTarget(stringToRecurringTarget(the_string.c_str()));
      }
    void unsetRecurringTarget(void)
      {
        flagHasRecurringTarget = false;
      }
    void setExactCalendarName(std::string new_value)
      {
        flagHasExactCalendarName = true;
        storeExactCalendarName = new_value;
      }
    void unsetExactCalendarName(void)
      {
        flagHasExactCalendarName = false;
      }
    void setPartialCalendarName(std::string new_value)
      {
        flagHasPartialCalendarName = true;
        storePartialCalendarName = new_value;
      }
    void unsetPartialCalendarName(void)
      {
        flagHasPartialCalendarName = false;
      }
    void initCalendarIDs(void)
      {
        flagHasCalendarIDs = true;
        storeCalendarIDs.clear();
      }
    void appendCalendarIDs(std::string to_append)
      {
        if (!flagHasCalendarIDs)
          {
            flagHasCalendarIDs = true;
            storeCalendarIDs.clear();
          }
        assert(flagHasCalendarIDs);
        storeCalendarIDs.push_back(to_append);
      }
    void unsetCalendarIDs(void)
      {
        flagHasCalendarIDs = false;
        storeCalendarIDs.clear();
      }
    void setItemType(std::string new_value)
      {
        flagHasItemType = true;
        storeItemType = new_value;
      }
    void unsetItemType(void)
      {
        flagHasItemType = false;
      }
    void setExactTitle(std::string new_value)
      {
        flagHasExactTitle = true;
        storeExactTitle = new_value;
      }
    void unsetExactTitle(void)
      {
        flagHasExactTitle = false;
      }
    void setPartialTitle(std::string new_value)
      {
        flagHasPartialTitle = true;
        storePartialTitle = new_value;
      }
    void unsetPartialTitle(void)
      {
        flagHasPartialTitle = false;
      }
    void setExactLocation(std::string new_value)
      {
        flagHasExactLocation = true;
        storeExactLocation = new_value;
      }
    void unsetExactLocation(void)
      {
        flagHasExactLocation = false;
      }
    void setPartialLocation(std::string new_value)
      {
        flagHasPartialLocation = true;
        storePartialLocation = new_value;
      }
    void unsetPartialLocation(void)
      {
        flagHasPartialLocation = false;
      }
    void setStartTimeRange(TypeStartTimeRangeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStartTimeRange)
          {
            storeStartTimeRange->remove_reference();
          }
        flagHasStartTimeRange = true;
        storeStartTimeRange = new_value;
      }
    void unsetStartTimeRange(void)
      {
        if (flagHasStartTimeRange)
          {
            storeStartTimeRange->remove_reference();
          }
        flagHasStartTimeRange = false;
      }
    void setEndTimeRange(TypeEndTimeRangeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasEndTimeRange)
          {
            storeEndTimeRange->remove_reference();
          }
        flagHasEndTimeRange = true;
        storeEndTimeRange = new_value;
      }
    void unsetEndTimeRange(void)
      {
        if (flagHasEndTimeRange)
          {
            storeEndTimeRange->remove_reference();
          }
        flagHasEndTimeRange = false;
      }
    void setIsRecurring(bool new_value)
      {
        flagHasIsRecurring = true;
        storeIsRecurring = new_value;
      }
    void unsetIsRecurring(void)
      {
        flagHasIsRecurring = false;
      }
    void setIsAllDay(bool new_value)
      {
        flagHasIsAllDay = true;
        storeIsAllDay = new_value;
      }
    void unsetIsAllDay(void)
      {
        flagHasIsAllDay = false;
      }

    virtual void extraCalendarQueryAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraCalendarQuerySetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraCalendarQueryLookup(key);
        if (old_field == NULL)
          {
            extraCalendarQueryAppendPair(key, new_component);
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
        assert(flagHasSelectionTarget);
        handler->start_pair("SelectionTarget");
        switch (storeSelectionTarget)
          {
            case SelectionTarget_First:
                handler->string_value("First");
                break;
            case SelectionTarget_Last:
                handler->string_value("Last");
                break;
            case SelectionTarget_All:
                handler->string_value("All");
                break;
            default:
                assert(false);
          }
        assert(flagHasRecurringTarget);
        handler->start_pair("RecurringTarget");
        switch (storeRecurringTarget)
          {
            case RecurringTarget_SpecifiedOnly:
                handler->string_value("SpecifiedOnly");
                break;
            case RecurringTarget_AllFollowing:
                handler->string_value("AllFollowing");
                break;
            default:
                assert(false);
          }
        if (flagHasExactCalendarName)
          {
            handler->start_pair("ExactCalendarName");
            handler->string_value(storeExactCalendarName);
          }
        if (flagHasPartialCalendarName)
          {
            handler->start_pair("PartialCalendarName");
            handler->string_value(storePartialCalendarName);
          }
        if (flagHasCalendarIDs)
          {
            handler->start_pair("CalendarIDs");
            assert(storeCalendarIDs.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeCalendarIDs.size(); ++num1)
              {
                handler->string_value(storeCalendarIDs[num1]);
              }
            handler->finish_array();
          }
        if (flagHasItemType)
          {
            handler->start_pair("ItemType");
            handler->string_value(storeItemType);
          }
        if (flagHasExactTitle)
          {
            handler->start_pair("ExactTitle");
            handler->string_value(storeExactTitle);
          }
        if (flagHasPartialTitle)
          {
            handler->start_pair("PartialTitle");
            handler->string_value(storePartialTitle);
          }
        if (flagHasExactLocation)
          {
            handler->start_pair("ExactLocation");
            handler->string_value(storeExactLocation);
          }
        if (flagHasPartialLocation)
          {
            handler->start_pair("PartialLocation");
            handler->string_value(storePartialLocation);
          }
        if (flagHasStartTimeRange)
          {
            handler->start_pair("StartTimeRange");
            storeStartTimeRange->write_as_json(handler);
          }
        if (flagHasEndTimeRange)
          {
            handler->start_pair("EndTimeRange");
            storeEndTimeRange->write_as_json(handler);
          }
        if (flagHasIsRecurring)
          {
            handler->start_pair("IsRecurring");
            handler->boolean_value(storeIsRecurring);
          }
        if (flagHasIsAllDay)
          {
            handler->start_pair("IsAllDay");
            handler->boolean_value(storeIsAllDay);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasSelectionTarget()))
          {
            return "When parsing the object for %what%, the \"SelectionTarget\" field was missing.";
          }
        if (!(hasRecurringTarget()))
          {
            return "When parsing the object for %what%, the \"RecurringTarget\" field was missing.";
          }
        return NULL;
      }

    static CalendarQueryJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static CalendarQueryJSON *from_text(const char *text, bool ignore_extras = false)
      {
        CalendarQueryJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CalendarQueryJSON>, CalendarQueryJSON *, bool> generator("Type CalendarQuery", ignore_extras);
            parse_json_value(text, "Text for CalendarQueryJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static CalendarQueryJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        CalendarQueryJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CalendarQueryJSON>, CalendarQueryJSON *, bool> generator("Type CalendarQuery", ignore_extras);
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
    class FieldGeneratorSelectionTarget : public JSONStringGenerator
          {
          protected:
            FieldGeneratorSelectionTarget(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorSelectionTarget(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToSelectionTarget(result));
              }
            virtual void handle_result(TypeSelectionTarget result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorSelectionTarget, TypeSelectionTarget, TypeSelectionTarget > fieldGeneratorSelectionTarget;
    class FieldGeneratorRecurringTarget : public JSONStringGenerator
          {
          protected:
            FieldGeneratorRecurringTarget(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorRecurringTarget(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToRecurringTarget(result));
              }
            virtual void handle_result(TypeRecurringTarget result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorRecurringTarget, TypeRecurringTarget, TypeRecurringTarget > fieldGeneratorRecurringTarget;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorExactCalendarName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPartialCalendarName;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCalendarIDs;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorItemType;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorExactTitle;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPartialTitle;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorExactLocation;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPartialLocation;
        JSONHoldingGenerator<TypeStartTimeRangeJSON::Generator, RCHandle<TypeStartTimeRangeJSON>, TypeStartTimeRangeJSON *, bool > fieldGeneratorStartTimeRange;
        JSONHoldingGenerator<TypeEndTimeRangeJSON::Generator, RCHandle<TypeEndTimeRangeJSON>, TypeEndTimeRangeJSON *, bool > fieldGeneratorEndTimeRange;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsRecurring;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsAllDay;
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
            CalendarQueryJSON *result = new CalendarQueryJSON();
            assert(result != NULL);
            RCHandle<CalendarQueryJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraCalendarQueryAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(CalendarQueryJSON *result)
          {
            if (fieldGeneratorSelectionTarget.have_value)
              {
                result->setSelectionTarget(fieldGeneratorSelectionTarget.value);
                fieldGeneratorSelectionTarget.have_value = false;
              }
            else if (!(result->hasSelectionTarget()))
              {
                error("When parsing the object for %what%, the \"SelectionTarget\" field was missing.");
              }
            if (fieldGeneratorRecurringTarget.have_value)
              {
                result->setRecurringTarget(fieldGeneratorRecurringTarget.value);
                fieldGeneratorRecurringTarget.have_value = false;
              }
            else if (!(result->hasRecurringTarget()))
              {
                error("When parsing the object for %what%, the \"RecurringTarget\" field was missing.");
              }
            if (fieldGeneratorExactCalendarName.have_value)
              {
                result->setExactCalendarName(fieldGeneratorExactCalendarName.value);
                fieldGeneratorExactCalendarName.have_value = false;
              }
            if (fieldGeneratorPartialCalendarName.have_value)
              {
                result->setPartialCalendarName(fieldGeneratorPartialCalendarName.value);
                fieldGeneratorPartialCalendarName.have_value = false;
              }
            if (fieldGeneratorCalendarIDs.have_value)
              {
                result->initCalendarIDs();
                size_t count = fieldGeneratorCalendarIDs.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendCalendarIDs(fieldGeneratorCalendarIDs.value[num]);
                  }
                fieldGeneratorCalendarIDs.value.clear();
                fieldGeneratorCalendarIDs.have_value = false;
              }
            if (fieldGeneratorItemType.have_value)
              {
                result->setItemType(fieldGeneratorItemType.value);
                fieldGeneratorItemType.have_value = false;
              }
            if (fieldGeneratorExactTitle.have_value)
              {
                result->setExactTitle(fieldGeneratorExactTitle.value);
                fieldGeneratorExactTitle.have_value = false;
              }
            if (fieldGeneratorPartialTitle.have_value)
              {
                result->setPartialTitle(fieldGeneratorPartialTitle.value);
                fieldGeneratorPartialTitle.have_value = false;
              }
            if (fieldGeneratorExactLocation.have_value)
              {
                result->setExactLocation(fieldGeneratorExactLocation.value);
                fieldGeneratorExactLocation.have_value = false;
              }
            if (fieldGeneratorPartialLocation.have_value)
              {
                result->setPartialLocation(fieldGeneratorPartialLocation.value);
                fieldGeneratorPartialLocation.have_value = false;
              }
            if (fieldGeneratorStartTimeRange.have_value)
              {
                result->setStartTimeRange(fieldGeneratorStartTimeRange.value.referenced());
                fieldGeneratorStartTimeRange.have_value = false;
              }
            if (fieldGeneratorEndTimeRange.have_value)
              {
                result->setEndTimeRange(fieldGeneratorEndTimeRange.value.referenced());
                fieldGeneratorEndTimeRange.have_value = false;
              }
            if (fieldGeneratorIsRecurring.have_value)
              {
                result->setIsRecurring(fieldGeneratorIsRecurring.value);
                fieldGeneratorIsRecurring.have_value = false;
              }
            if (fieldGeneratorIsAllDay.have_value)
              {
                result->setIsAllDay(fieldGeneratorIsAllDay.value);
                fieldGeneratorIsAllDay.have_value = false;
              }
          }
        virtual void handle_result(CalendarQueryJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "alendarIDs") == 0)
                        return &fieldGeneratorCalendarIDs;
                    break;
                case 'E':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'n':
                            if (strcmp(&(field_name[2]), "dTimeRange") == 0)
                                return &fieldGeneratorEndTimeRange;
                            break;
                        case 'x':
                            if (strncmp(&(field_name[2]), "act", 3) == 0)
                              {
                                switch ((unsigned char)(field_name[5]))
                                  {
                                    case 'C':
                                        if (strcmp(&(field_name[6]), "alendarName") == 0)
                                            return &fieldGeneratorExactCalendarName;
                                        break;
                                    case 'L':
                                        if (strcmp(&(field_name[6]), "ocation") == 0)
                                            return &fieldGeneratorExactLocation;
                                        break;
                                    case 'T':
                                        if (strcmp(&(field_name[6]), "itle") == 0)
                                            return &fieldGeneratorExactTitle;
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
                case 'I':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 's':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'A':
                                    if (strcmp(&(field_name[3]), "llDay") == 0)
                                        return &fieldGeneratorIsAllDay;
                                    break;
                                case 'R':
                                    if (strcmp(&(field_name[3]), "ecurring") == 0)
                                        return &fieldGeneratorIsRecurring;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 't':
                            if (strcmp(&(field_name[2]), "emType") == 0)
                                return &fieldGeneratorItemType;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'P':
                    if (strncmp(&(field_name[1]), "artial", 6) == 0)
                      {
                        switch ((unsigned char)(field_name[7]))
                          {
                            case 'C':
                                if (strcmp(&(field_name[8]), "alendarName") == 0)
                                    return &fieldGeneratorPartialCalendarName;
                                break;
                            case 'L':
                                if (strcmp(&(field_name[8]), "ocation") == 0)
                                    return &fieldGeneratorPartialLocation;
                                break;
                            case 'T':
                                if (strcmp(&(field_name[8]), "itle") == 0)
                                    return &fieldGeneratorPartialTitle;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "ecurringTarget") == 0)
                        return &fieldGeneratorRecurringTarget;
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            if (strcmp(&(field_name[2]), "lectionTarget") == 0)
                                return &fieldGeneratorSelectionTarget;
                            break;
                        case 't':
                            if (strcmp(&(field_name[2]), "artTimeRange") == 0)
                                return &fieldGeneratorStartTimeRange;
                            break;
                        default:
                            break;
                      }
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorSelectionTarget("field \"SelectionTarget\" of the CalendarQuery class"), fieldGeneratorRecurringTarget("field \"RecurringTarget\" of the CalendarQuery class"), fieldGeneratorExactCalendarName("field \"ExactCalendarName\" of the CalendarQuery class"), fieldGeneratorPartialCalendarName("field \"PartialCalendarName\" of the CalendarQuery class"), fieldGeneratorCalendarIDs("field \"CalendarIDs\" of the CalendarQuery class"), fieldGeneratorItemType("field \"ItemType\" of the CalendarQuery class"), fieldGeneratorExactTitle("field \"ExactTitle\" of the CalendarQuery class"), fieldGeneratorPartialTitle("field \"PartialTitle\" of the CalendarQuery class"), fieldGeneratorExactLocation("field \"ExactLocation\" of the CalendarQuery class"), fieldGeneratorPartialLocation("field \"PartialLocation\" of the CalendarQuery class"), fieldGeneratorStartTimeRange("field \"StartTimeRange\" of the CalendarQuery class", ignore_extras), fieldGeneratorEndTimeRange("field \"EndTimeRange\" of the CalendarQuery class", ignore_extras), fieldGeneratorIsRecurring("field \"IsRecurring\" of the CalendarQuery class"), fieldGeneratorIsAllDay("field \"IsAllDay\" of the CalendarQuery class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the CalendarQuery class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorSelectionTarget.reset();
            fieldGeneratorRecurringTarget.reset();
            fieldGeneratorExactCalendarName.reset();
            fieldGeneratorPartialCalendarName.reset();
            fieldGeneratorCalendarIDs.reset();
            fieldGeneratorItemType.reset();
            fieldGeneratorExactTitle.reset();
            fieldGeneratorPartialTitle.reset();
            fieldGeneratorExactLocation.reset();
            fieldGeneratorPartialLocation.reset();
            fieldGeneratorStartTimeRange.reset();
            fieldGeneratorEndTimeRange.reset();
            fieldGeneratorIsRecurring.reset();
            fieldGeneratorIsAllDay.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* CALENDARQUERYJSON_H */
