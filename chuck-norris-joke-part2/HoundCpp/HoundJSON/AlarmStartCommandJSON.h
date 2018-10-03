/* file "AlarmStartCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef ALARMSTARTCOMMANDJSON_H
#define ALARMSTARTCOMMANDJSON_H

#pragma interface

#include "AlarmCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class AlarmStartCommandJSON : public AlarmCommandJSON
  {
  public:
    class TypeNativeDataJSON : public ReferenceCounted
      {
      public:
        enum TypeDaysOfWeekKnownValues
          {
            DaysOfWeek_Sunday,
            DaysOfWeek_Monday,
            DaysOfWeek_Tuesday,
            DaysOfWeek_Wednesday,
            DaysOfWeek_Thursday,
            DaysOfWeek_Friday,
            DaysOfWeek_Saturday,
            DaysOfWeek__none
          };
        struct TypeDaysOfWeek
          {
            bool in_known_list;
            std::string string_value;
            TypeDaysOfWeekKnownValues list_value;

            TypeDaysOfWeek(void);
            TypeDaysOfWeek(const TypeDaysOfWeek &other);
            TypeDaysOfWeek(TypeDaysOfWeekKnownValues other);
            bool  operator==(const TypeDaysOfWeek &other) const;
            bool  operator!=(const TypeDaysOfWeek &other) const;
            bool  operator<(const TypeDaysOfWeek &other) const;
            bool  operator>(const TypeDaysOfWeek &other) const;
            bool  operator>=(const TypeDaysOfWeek &other) const;
            bool  operator<=(const TypeDaysOfWeek &other) const;

          };

        static TypeDaysOfWeekKnownValues  stringToDaysOfWeek(const char *chars);
        static const char * stringFromDaysOfWeek(TypeDaysOfWeekKnownValues the_enum);

      private:
        bool flagHasTitle;
        std::string storeTitle;
        bool flagHasIsWake;
        bool storeIsWake;
        bool flagHasIsRecurring;
        bool storeIsRecurring;
        bool flagHasDaysOfWeek;
        std::vector< TypeDaysOfWeek > storeDaysOfWeek;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeNativeDataJSON(const TypeNativeDataJSON &);
        TypeNativeDataJSON & operator=(const TypeNativeDataJSON &other);

        void  fromJSONTitle(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONIsWake(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONIsRecurring(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONDaysOfWeek(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeNativeDataJSON(void);
        virtual ~TypeNativeDataJSON(void);
        bool  hasTitle(void) const;
        std::string  getTitle(void);
        const std::string  getTitle(void) const;
        bool  hasIsWake(void) const;
        bool  getIsWake(void);
        const bool  getIsWake(void) const;
        bool  hasIsRecurring(void) const;
        bool  getIsRecurring(void);
        const bool  getIsRecurring(void) const;
        bool  hasDaysOfWeek(void) const;
        size_t  countOfDaysOfWeek(void) const;
        TypeDaysOfWeek  elementOfDaysOfWeek(size_t element_num);
        const TypeDaysOfWeek  elementOfDaysOfWeek(size_t element_num) const;
        std::vector< TypeDaysOfWeek >  getDaysOfWeek(void);
        const std::vector< TypeDaysOfWeek >  getDaysOfWeek(void) const;

        virtual size_t extraTypeNativeDataComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeNativeDataComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeNativeDataComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeNativeDataComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeNativeDataLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeNativeDataLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setTitle(std::string new_value)
          {
            flagHasTitle = true;
            storeTitle = new_value;
          }
        void unsetTitle(void)
          {
            flagHasTitle = false;
          }
        void setIsWake(bool new_value)
          {
            flagHasIsWake = true;
            storeIsWake = new_value;
          }
        void unsetIsWake(void)
          {
            flagHasIsWake = false;
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
        void initDaysOfWeek(void)
          {
            flagHasDaysOfWeek = true;
            storeDaysOfWeek.clear();
          }
        void appendDaysOfWeek(TypeDaysOfWeek to_append)
          {
            if (!flagHasDaysOfWeek)
              {
                flagHasDaysOfWeek = true;
                storeDaysOfWeek.clear();
              }
            assert(flagHasDaysOfWeek);
            storeDaysOfWeek.push_back(to_append);
          }
        void appendDaysOfWeek(const char *chars)
          {
            TypeDaysOfWeekKnownValues known = stringToDaysOfWeek(chars);
            TypeDaysOfWeek new_value;
            if (known == DaysOfWeek__none)
              {
                new_value.in_known_list = false;
                new_value.string_value = chars;
              }
            else
              {
                new_value.in_known_list = true;
                new_value.list_value = known;
              }
            appendDaysOfWeek(new_value);
          }
        void appendDaysOfWeek(std::string the_string)
          {
            appendDaysOfWeek(the_string.c_str());
          }
        void appendDaysOfWeek(TypeDaysOfWeekKnownValues new_value)
          {
            TypeDaysOfWeek new_full_value;
            assert(new_value != DaysOfWeek__none);
            new_full_value.in_known_list = true;
            new_full_value.list_value = new_value;
            appendDaysOfWeek(new_full_value);
          }
        void unsetDaysOfWeek(void)
          {
            flagHasDaysOfWeek = false;
            storeDaysOfWeek.clear();
          }

        virtual void extraTypeNativeDataAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeNativeDataSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeNativeDataLookup(key);
            if (old_field == NULL)
              {
                extraTypeNativeDataAppendPair(key, new_component);
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
            if (flagHasTitle)
              {
                handler->start_pair("Title");
                handler->string_value(storeTitle);
              }
            if (flagHasIsWake)
              {
                handler->start_pair("IsWake");
                handler->boolean_value(storeIsWake);
              }
            if (flagHasIsRecurring)
              {
                handler->start_pair("IsRecurring");
                handler->boolean_value(storeIsRecurring);
              }
            if (flagHasDaysOfWeek)
              {
                handler->start_pair("DaysOfWeek");
                handler->start_array();
                for (size_t num1 = 0; num1 < storeDaysOfWeek.size(); ++num1)
                  {
                    if (storeDaysOfWeek[num1].in_known_list)
                      {
                        switch (storeDaysOfWeek[num1].list_value)
                          {
                            case DaysOfWeek_Sunday:
                                handler->string_value("Sunday");
                                break;
                            case DaysOfWeek_Monday:
                                handler->string_value("Monday");
                                break;
                            case DaysOfWeek_Tuesday:
                                handler->string_value("Tuesday");
                                break;
                            case DaysOfWeek_Wednesday:
                                handler->string_value("Wednesday");
                                break;
                            case DaysOfWeek_Thursday:
                                handler->string_value("Thursday");
                                break;
                            case DaysOfWeek_Friday:
                                handler->string_value("Friday");
                                break;
                            case DaysOfWeek_Saturday:
                                handler->string_value("Saturday");
                                break;
                            default:
                                assert(false);
                          }
                      }
                    else
                      {
                                handler->string_value(storeDaysOfWeek[num1].string_value);
                      }
                  }
                handler->finish_array();
              }
          }
        virtual const char *missing_field_error(void) const
          {
            return NULL;
          }

        static TypeNativeDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeNativeDataJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeNativeDataJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
                parse_json_value(text, "Text for TypeNativeDataJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeNativeDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeNativeDataJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTitle;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsWake;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsRecurring;
        class FieldGeneratorDaysOfWeek : public JSONStringGenerator
              {
              protected:
                FieldGeneratorDaysOfWeek(const char *what)
                  {
                    set_what(what);
                  }
                FieldGeneratorDaysOfWeek(void)
                  {
                  }
                void handle_result(const char *result)
                  {
                    TypeDaysOfWeekKnownValues known = stringToDaysOfWeek(result);
                    TypeDaysOfWeek new_value;
                    if (known == DaysOfWeek__none)
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
                virtual void handle_result(TypeDaysOfWeek result) = 0;
              };
            JSONHoldingArrayGenerator<FieldGeneratorDaysOfWeek, TypeDaysOfWeek, TypeDaysOfWeek > fieldGeneratorDaysOfWeek;
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
                TypeNativeDataJSON *result = new TypeNativeDataJSON();
                assert(result != NULL);
                RCHandle<TypeNativeDataJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeNativeDataAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeNativeDataJSON *result)
              {
                if (fieldGeneratorTitle.have_value)
                  {
                    result->setTitle(fieldGeneratorTitle.value);
                    fieldGeneratorTitle.have_value = false;
                  }
                if (fieldGeneratorIsWake.have_value)
                  {
                    result->setIsWake(fieldGeneratorIsWake.value);
                    fieldGeneratorIsWake.have_value = false;
                  }
                if (fieldGeneratorIsRecurring.have_value)
                  {
                    result->setIsRecurring(fieldGeneratorIsRecurring.value);
                    fieldGeneratorIsRecurring.have_value = false;
                  }
                if (fieldGeneratorDaysOfWeek.have_value)
                  {
                    result->initDaysOfWeek();
                    size_t count = fieldGeneratorDaysOfWeek.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendDaysOfWeek(fieldGeneratorDaysOfWeek.value[num]);
                      }
                    fieldGeneratorDaysOfWeek.value.clear();
                    fieldGeneratorDaysOfWeek.have_value = false;
                  }
              }
            virtual void handle_result(TypeNativeDataJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'D':
                        if (strcmp(&(field_name[1]), "aysOfWeek") == 0)
                            return &fieldGeneratorDaysOfWeek;
                        break;
                    case 'I':
                        if (strncmp(&(field_name[1]), "s", 1) == 0)
                          {
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'R':
                                    if (strcmp(&(field_name[3]), "ecurring") == 0)
                                        return &fieldGeneratorIsRecurring;
                                    break;
                                case 'W':
                                    if (strcmp(&(field_name[3]), "ake") == 0)
                                        return &fieldGeneratorIsWake;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'T':
                        if (strcmp(&(field_name[1]), "itle") == 0)
                            return &fieldGeneratorTitle;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorTitle("field \"Title\" of the TypeNativeData class"), fieldGeneratorIsWake("field \"IsWake\" of the TypeNativeData class"), fieldGeneratorIsRecurring("field \"IsRecurring\" of the TypeNativeData class"), fieldGeneratorDaysOfWeek("field \"DaysOfWeek\" of the TypeNativeData class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeNativeData class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorTitle.reset();
                fieldGeneratorIsWake.reset();
                fieldGeneratorIsRecurring.reset();
                fieldGeneratorDaysOfWeek.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasNativeData;
    TypeNativeDataJSON * storeNativeData;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    AlarmStartCommandJSON(const AlarmStartCommandJSON &);
    AlarmStartCommandJSON & operator=(const AlarmStartCommandJSON &other);

    JSONValue * extraNativeDataToJSON(void) const;

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);


  public:
    AlarmStartCommandJSON(void);
    virtual ~AlarmStartCommandJSON(void);
    const char * getAlarmCommandKind(void) const;
    bool  hasNativeData(void) const;
    TypeNativeDataJSON *  getNativeData(void);
    const TypeNativeDataJSON *  getNativeData(void) const;

    virtual size_t extraAlarmStartCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraAlarmStartCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraAlarmStartCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraAlarmStartCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraAlarmStartCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraAlarmStartCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraAlarmCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasNativeData)
            ++result;
        result += extraAlarmStartCommandComponentCount();
        return result;
      }
    const char *extraAlarmCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return "NativeData";
            --remainder;
          }
        return extraAlarmStartCommandComponentKey(remainder);
      }
    JSONValue *extraAlarmCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        return extraAlarmStartCommandComponentValue(remainder);
      }
    const JSONValue *extraAlarmCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        return extraAlarmStartCommandComponentValue(remainder);
      }
    JSONValue *extraAlarmCommandLookup(const char *field_name)
      {
        if (strcmp(field_name, "NativeData") == 0)
            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
        return extraAlarmStartCommandLookup(field_name);
      }
    const JSONValue *extraAlarmCommandLookup(const char *field_name) const
      {
        if (strcmp(field_name, "NativeData") == 0)
            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
        return extraAlarmStartCommandLookup(field_name);
      }

    void setNativeData(TypeNativeDataJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasNativeData)
          {
            storeNativeData->remove_reference();
          }
        flagHasNativeData = true;
        storeNativeData = new_value;
      }
    void unsetNativeData(void)
      {
        if (flagHasNativeData)
          {
            storeNativeData->remove_reference();
          }
        flagHasNativeData = false;
      }

    virtual void extraAlarmStartCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraAlarmStartCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraAlarmStartCommandLookup(key);
        if (old_field == NULL)
          {
            extraAlarmStartCommandAppendPair(key, new_component);
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
    void extraAlarmCommandAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "NativeData") == 0)
            {
            fromJSONNativeData(new_component, false);
            return;
            }
        extraAlarmStartCommandAppendPair(key, new_component);
      }
    void extraAlarmCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "NativeData") == 0)
            {
            fromJSONNativeData(new_component, false);
            return;
            }
        extraAlarmStartCommandSetField(key, new_component);
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
        AlarmCommandJSON::write_fields_as_json(handler);
        assert(flagHasNativeData);
        handler->start_pair("NativeData");
        storeNativeData->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasNativeData()))
          {
            return "When parsing the object for %what%, the \"NativeData\" field was missing.";
          }
        return NULL;
      }

    static AlarmStartCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static AlarmStartCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        AlarmStartCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AlarmStartCommandJSON>, AlarmStartCommandJSON *, bool> generator("Type AlarmStartCommand", ignore_extras);
            parse_json_value(text, "Text for AlarmStartCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static AlarmStartCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        AlarmStartCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AlarmStartCommandJSON>, AlarmStartCommandJSON *, bool> generator("Type AlarmStartCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public AlarmCommandJSON::Generator
      {
      private:
        JSONHoldingGenerator<TypeNativeDataJSON::Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool > fieldGeneratorNativeData;
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
            if (!(strcmp(getAlarmCommandJSONKey().c_str(), "AlarmStartCommand") == 0))
                throw("The key field has a value other than `AlarmStartCommand'.");
            AlarmStartCommandJSON *result = new AlarmStartCommandJSON();
            assert(result != NULL);
            RCHandle<AlarmStartCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraAlarmStartCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(AlarmCommandJSON *new_result)
          {
            handle_result((AlarmStartCommandJSON *)new_result);
          }
        void finish(AlarmStartCommandJSON *result)
          {
            if (fieldGeneratorNativeData.have_value)
              {
                result->setNativeData(fieldGeneratorNativeData.value.referenced());
                fieldGeneratorNativeData.have_value = false;
              }
            else if (!(result->hasNativeData()))
              {
                error("When parsing the object for %what%, the \"NativeData\" field was missing.");
              }
            AlarmCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(AlarmStartCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "NativeData") == 0)
                return &fieldGeneratorNativeData;
            return AlarmCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : AlarmCommandJSON::Generator(ignore_extras), fieldGeneratorNativeData("field \"NativeData\" of the AlarmStartCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the AlarmStartCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNativeData.reset();
            AlarmCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* ALARMSTARTCOMMANDJSON_H */
