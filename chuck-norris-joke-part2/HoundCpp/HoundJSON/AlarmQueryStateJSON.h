/* file "AlarmQueryStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef ALARMQUERYSTATEJSON_H
#define ALARMQUERYSTATEJSON_H

#pragma interface

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


class AlarmQueryStateJSON : public ReferenceCounted
  {
  public:
    enum TypeAlarmCommandKind
      {
        AlarmCommandKind_AlarmStartCommand,
        AlarmCommandKind_AlarmDisplayCommand,
        AlarmCommandKind_AlarmSetCommand,
        AlarmCommandKind_AlarmNotUnderstoodCommand,
        AlarmCommandKind_AlarmUnsetCommand
      };

    static TypeAlarmCommandKind  stringToAlarmCommandKind(const char *chars);
    static const char * stringFromAlarmCommandKind(TypeAlarmCommandKind the_enum);
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
    bool flagHasAlarmCommandKind;
    TypeAlarmCommandKind storeAlarmCommandKind;
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

    AlarmQueryStateJSON(const AlarmQueryStateJSON &);
    AlarmQueryStateJSON & operator=(const AlarmQueryStateJSON &other);

    void  fromJSONAlarmCommandKind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTitle(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsWake(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsRecurring(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDaysOfWeek(JSONValue *json_value, bool ignore_extras = false);


  public:
    AlarmQueryStateJSON(void);
    virtual ~AlarmQueryStateJSON(void);
    bool  hasAlarmCommandKind(void) const;
    TypeAlarmCommandKind  getAlarmCommandKind(void);
    const TypeAlarmCommandKind  getAlarmCommandKind(void) const;
    const char * getAlarmCommandKindAsChars(void) const;
    std::string  getAlarmCommandKindAsString(void) const;
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

    virtual size_t extraAlarmQueryStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraAlarmQueryStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraAlarmQueryStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraAlarmQueryStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraAlarmQueryStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraAlarmQueryStateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setAlarmCommandKind(TypeAlarmCommandKind new_value)
      {
        flagHasAlarmCommandKind = true;
        storeAlarmCommandKind = new_value;
      }
    void setAlarmCommandKind(const char *chars)
      {
        setAlarmCommandKind(stringToAlarmCommandKind(chars));
      }
    void setAlarmCommandKind(std::string the_string)
      {
        setAlarmCommandKind(stringToAlarmCommandKind(the_string.c_str()));
      }
    void unsetAlarmCommandKind(void)
      {
        flagHasAlarmCommandKind = false;
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

    virtual void extraAlarmQueryStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraAlarmQueryStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraAlarmQueryStateLookup(key);
        if (old_field == NULL)
          {
            extraAlarmQueryStateAppendPair(key, new_component);
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
        assert(flagHasAlarmCommandKind);
        handler->start_pair("AlarmCommandKind");
        switch (storeAlarmCommandKind)
          {
            case AlarmCommandKind_AlarmStartCommand:
                handler->string_value("AlarmStartCommand");
                break;
            case AlarmCommandKind_AlarmDisplayCommand:
                handler->string_value("AlarmDisplayCommand");
                break;
            case AlarmCommandKind_AlarmSetCommand:
                handler->string_value("AlarmSetCommand");
                break;
            case AlarmCommandKind_AlarmNotUnderstoodCommand:
                handler->string_value("AlarmNotUnderstoodCommand");
                break;
            case AlarmCommandKind_AlarmUnsetCommand:
                handler->string_value("AlarmUnsetCommand");
                break;
            default:
                assert(false);
          }
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
        if (!(hasAlarmCommandKind()))
          {
            return "When parsing the object for %what%, the \"AlarmCommandKind\" field was missing.";
          }
        return NULL;
      }

    static AlarmQueryStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static AlarmQueryStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        AlarmQueryStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AlarmQueryStateJSON>, AlarmQueryStateJSON *, bool> generator("Type AlarmQueryState", ignore_extras);
            parse_json_value(text, "Text for AlarmQueryStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static AlarmQueryStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        AlarmQueryStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AlarmQueryStateJSON>, AlarmQueryStateJSON *, bool> generator("Type AlarmQueryState", ignore_extras);
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
    class FieldGeneratorAlarmCommandKind : public JSONStringGenerator
          {
          protected:
            FieldGeneratorAlarmCommandKind(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorAlarmCommandKind(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToAlarmCommandKind(result));
              }
            virtual void handle_result(TypeAlarmCommandKind result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorAlarmCommandKind, TypeAlarmCommandKind, TypeAlarmCommandKind > fieldGeneratorAlarmCommandKind;
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
            AlarmQueryStateJSON *result = new AlarmQueryStateJSON();
            assert(result != NULL);
            RCHandle<AlarmQueryStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraAlarmQueryStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(AlarmQueryStateJSON *result)
          {
            if (fieldGeneratorAlarmCommandKind.have_value)
              {
                result->setAlarmCommandKind(fieldGeneratorAlarmCommandKind.value);
                fieldGeneratorAlarmCommandKind.have_value = false;
              }
            else if (!(result->hasAlarmCommandKind()))
              {
                error("When parsing the object for %what%, the \"AlarmCommandKind\" field was missing.");
              }
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
        virtual void handle_result(AlarmQueryStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "larmCommandKind") == 0)
                        return &fieldGeneratorAlarmCommandKind;
                    break;
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
        Generator(bool ignore_extras = false) : fieldGeneratorAlarmCommandKind("field \"AlarmCommandKind\" of the AlarmQueryState class"), fieldGeneratorTitle("field \"Title\" of the AlarmQueryState class"), fieldGeneratorIsWake("field \"IsWake\" of the AlarmQueryState class"), fieldGeneratorIsRecurring("field \"IsRecurring\" of the AlarmQueryState class"), fieldGeneratorDaysOfWeek("field \"DaysOfWeek\" of the AlarmQueryState class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the AlarmQueryState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorAlarmCommandKind.reset();
            fieldGeneratorTitle.reset();
            fieldGeneratorIsWake.reset();
            fieldGeneratorIsRecurring.reset();
            fieldGeneratorDaysOfWeek.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* ALARMQUERYSTATEJSON_H */
