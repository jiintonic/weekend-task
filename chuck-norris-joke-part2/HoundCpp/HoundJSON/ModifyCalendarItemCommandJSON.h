/* file "ModifyCalendarItemCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MODIFYCALENDARITEMCOMMANDJSON_H
#define MODIFYCALENDARITEMCOMMANDJSON_H

#pragma interface

#include "CalendarCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include <vector>
#include <string>
#include "OInteger.h"
#include "CalendarQueryJSON.h"
#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeJSON.h"
#include "CalendarQueryJSON.h"
#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeJSON.h"
#include "DynamicResponseJSON.h"
#include "DynamicResponseJSON.h"
#include "DynamicResponseJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class ModifyCalendarItemCommandJSON : public CalendarCommandJSON
  {
  public:
    enum TypeNewFrequencyType
      {
        NewFrequencyType_unknown,
        NewFrequencyType_one_time,
        NewFrequencyType_daily,
        NewFrequencyType_weekly,
        NewFrequencyType_monthly,
        NewFrequencyType_yearly
      };

    static TypeNewFrequencyType  stringToNewFrequencyType(const char *chars);
    static const char * stringFromNewFrequencyType(TypeNewFrequencyType the_enum);
    class TypeSetEventFieldsJSON : public ReferenceCounted
      {
      private:
        bool flagHasFieldName;
        std::string storeFieldName;
        bool flagHasNewValue;
        JSONValue * storeNewValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeSetEventFieldsJSON(const TypeSetEventFieldsJSON &);
        TypeSetEventFieldsJSON & operator=(const TypeSetEventFieldsJSON &other);

        void  fromJSONFieldName(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONNewValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeSetEventFieldsJSON(void);
        virtual ~TypeSetEventFieldsJSON(void);
        bool  hasFieldName(void) const;
        std::string  getFieldName(void);
        const std::string  getFieldName(void) const;
        bool  hasNewValue(void) const;
        JSONValue *  getNewValue(void);
        const JSONValue *  getNewValue(void) const;

        virtual size_t extraTypeSetEventFieldsComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeSetEventFieldsComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeSetEventFieldsComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeSetEventFieldsComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeSetEventFieldsLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeSetEventFieldsLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setFieldName(std::string new_value)
          {
            flagHasFieldName = true;
            storeFieldName = new_value;
          }
        void unsetFieldName(void)
          {
            flagHasFieldName = false;
          }
        void setNewValue(JSONValue * new_value)
          {
            new_value->add_reference();
            if (flagHasNewValue)
              {
                storeNewValue->remove_reference();
              }
            flagHasNewValue = true;
            storeNewValue = new_value;
          }
        void unsetNewValue(void)
          {
            if (flagHasNewValue)
              {
                storeNewValue->remove_reference();
              }
            flagHasNewValue = false;
          }

        virtual void extraTypeSetEventFieldsAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeSetEventFieldsSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeSetEventFieldsLookup(key);
            if (old_field == NULL)
              {
                extraTypeSetEventFieldsAppendPair(key, new_component);
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
            assert(flagHasFieldName);
            handler->start_pair("FieldName");
            handler->string_value(storeFieldName);
            assert(flagHasNewValue);
            handler->start_pair("NewValue");
            storeNewValue->write(handler);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasFieldName()))
              {
                return "When parsing the object for %what%, the \"FieldName\" field was missing.";
              }
            if (!(hasNewValue()))
              {
                return "When parsing the object for %what%, the \"NewValue\" field was missing.";
              }
            return NULL;
          }

        static TypeSetEventFieldsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeSetEventFieldsJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeSetEventFieldsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeSetEventFieldsJSON>, TypeSetEventFieldsJSON *, bool> generator("Type TypeSetEventFields", ignore_extras);
                parse_json_value(text, "Text for TypeSetEventFieldsJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeSetEventFieldsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeSetEventFieldsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeSetEventFieldsJSON>, TypeSetEventFieldsJSON *, bool> generator("Type TypeSetEventFields", ignore_extras);
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorFieldName;
            JSONHoldingGenerator<JSONValueHandler, RCHandle<JSONValue>, JSONValue * > fieldGeneratorNewValue;
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
                TypeSetEventFieldsJSON *result = new TypeSetEventFieldsJSON();
                assert(result != NULL);
                RCHandle<TypeSetEventFieldsJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeSetEventFieldsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeSetEventFieldsJSON *result)
              {
                if (fieldGeneratorFieldName.have_value)
                  {
                    result->setFieldName(fieldGeneratorFieldName.value);
                    fieldGeneratorFieldName.have_value = false;
                  }
                else if (!(result->hasFieldName()))
                  {
                    error("When parsing the object for %what%, the \"FieldName\" field was missing.");
                  }
                if (fieldGeneratorNewValue.have_value)
                  {
                    result->setNewValue(fieldGeneratorNewValue.value.referenced());
                    fieldGeneratorNewValue.have_value = false;
                  }
                else if (!(result->hasNewValue()))
                  {
                    error("When parsing the object for %what%, the \"NewValue\" field was missing.");
                  }
              }
            virtual void handle_result(TypeSetEventFieldsJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'F':
                        if (strcmp(&(field_name[1]), "ieldName") == 0)
                            return &fieldGeneratorFieldName;
                        break;
                    case 'N':
                        if (strcmp(&(field_name[1]), "ewValue") == 0)
                            return &fieldGeneratorNewValue;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorFieldName("field \"FieldName\" of the TypeSetEventFields class"), fieldGeneratorNewValue("field \"NewValue\" of the TypeSetEventFields class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeSetEventFields class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorFieldName.reset();
                fieldGeneratorNewValue.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };
    class TypeAppendEventFieldsJSON : public ReferenceCounted
      {
      private:
        bool flagHasFieldName;
        std::string storeFieldName;
        bool flagHasNewValues;
        std::vector< JSONValue * > storeNewValues;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeAppendEventFieldsJSON(const TypeAppendEventFieldsJSON &);
        TypeAppendEventFieldsJSON & operator=(const TypeAppendEventFieldsJSON &other);

        void  fromJSONFieldName(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONNewValues(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeAppendEventFieldsJSON(void);
        virtual ~TypeAppendEventFieldsJSON(void);
        bool  hasFieldName(void) const;
        std::string  getFieldName(void);
        const std::string  getFieldName(void) const;
        bool  hasNewValues(void) const;
        size_t  countOfNewValues(void) const;
        JSONValue *  elementOfNewValues(size_t element_num);
        const JSONValue *  elementOfNewValues(size_t element_num) const;
        std::vector< JSONValue * >  getNewValues(void);
        const std::vector< JSONValue * >  getNewValues(void) const;

        virtual size_t extraTypeAppendEventFieldsComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeAppendEventFieldsComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeAppendEventFieldsComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeAppendEventFieldsComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeAppendEventFieldsLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeAppendEventFieldsLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setFieldName(std::string new_value)
          {
            flagHasFieldName = true;
            storeFieldName = new_value;
          }
        void unsetFieldName(void)
          {
            flagHasFieldName = false;
          }
        void initNewValues(void)
          {
            if (flagHasNewValues)
              {
                for (size_t num2 = 0; num2 < storeNewValues.size(); ++num2)
                  {
                    storeNewValues[num2]->remove_reference();
                  }
              }
            flagHasNewValues = true;
            storeNewValues.clear();
          }
        void appendNewValues(JSONValue * to_append)
          {
            if (!flagHasNewValues)
              {
                flagHasNewValues = true;
                storeNewValues.clear();
              }
            assert(flagHasNewValues);
            to_append->add_reference();
            storeNewValues.push_back(to_append);
          }
        void unsetNewValues(void)
          {
            if (flagHasNewValues)
              {
                for (size_t num3 = 0; num3 < storeNewValues.size(); ++num3)
                  {
                    storeNewValues[num3]->remove_reference();
                  }
              }
            flagHasNewValues = false;
            storeNewValues.clear();
          }

        virtual void extraTypeAppendEventFieldsAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeAppendEventFieldsSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeAppendEventFieldsLookup(key);
            if (old_field == NULL)
              {
                extraTypeAppendEventFieldsAppendPair(key, new_component);
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
            assert(flagHasFieldName);
            handler->start_pair("FieldName");
            handler->string_value(storeFieldName);
            assert(flagHasNewValues);
            handler->start_pair("NewValues");
            assert(storeNewValues.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeNewValues.size(); ++num1)
              {
                storeNewValues[num1]->write(handler);
              }
            handler->finish_array();
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasFieldName()))
              {
                return "When parsing the object for %what%, the \"FieldName\" field was missing.";
              }
            if (!(hasNewValues()))
              {
                return "When parsing the object for %what%, the \"NewValues\" field was missing.";
              }
            return NULL;
          }

        static TypeAppendEventFieldsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeAppendEventFieldsJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeAppendEventFieldsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeAppendEventFieldsJSON>, TypeAppendEventFieldsJSON *, bool> generator("Type TypeAppendEventFields", ignore_extras);
                parse_json_value(text, "Text for TypeAppendEventFieldsJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeAppendEventFieldsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeAppendEventFieldsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeAppendEventFieldsJSON>, TypeAppendEventFieldsJSON *, bool> generator("Type TypeAppendEventFields", ignore_extras);
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorFieldName;
            JSONHoldingArrayGenerator<JSONValueHandler, RCHandle<JSONValue>, JSONValue * > fieldGeneratorNewValues;
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
                TypeAppendEventFieldsJSON *result = new TypeAppendEventFieldsJSON();
                assert(result != NULL);
                RCHandle<TypeAppendEventFieldsJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeAppendEventFieldsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeAppendEventFieldsJSON *result)
              {
                if (fieldGeneratorFieldName.have_value)
                  {
                    result->setFieldName(fieldGeneratorFieldName.value);
                    fieldGeneratorFieldName.have_value = false;
                  }
                else if (!(result->hasFieldName()))
                  {
                    error("When parsing the object for %what%, the \"FieldName\" field was missing.");
                  }
                if (fieldGeneratorNewValues.have_value)
                  {
                    result->initNewValues();
                    size_t count = fieldGeneratorNewValues.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendNewValues(fieldGeneratorNewValues.value[num].referenced());
                      }
                    fieldGeneratorNewValues.value.clear();
                    fieldGeneratorNewValues.have_value = false;
                  }
                else if (!(result->hasNewValues()))
                  {
                    error("When parsing the object for %what%, the \"NewValues\" field was missing.");
                  }
              }
            virtual void handle_result(TypeAppendEventFieldsJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'F':
                        if (strcmp(&(field_name[1]), "ieldName") == 0)
                            return &fieldGeneratorFieldName;
                        break;
                    case 'N':
                        if (strcmp(&(field_name[1]), "ewValues") == 0)
                            return &fieldGeneratorNewValues;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorFieldName("field \"FieldName\" of the TypeAppendEventFields class"), fieldGeneratorNewValues("field \"NewValues\" of the TypeAppendEventFields class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeAppendEventFields class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorFieldName.reset();
                fieldGeneratorNewValues.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };
    class TypeAddEventFieldsJSON : public ReferenceCounted
      {
      private:
        bool flagHasFieldName;
        std::string storeFieldName;
        bool flagHasNewValue;
        JSONValue * storeNewValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeAddEventFieldsJSON(const TypeAddEventFieldsJSON &);
        TypeAddEventFieldsJSON & operator=(const TypeAddEventFieldsJSON &other);

        void  fromJSONFieldName(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONNewValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeAddEventFieldsJSON(void);
        virtual ~TypeAddEventFieldsJSON(void);
        bool  hasFieldName(void) const;
        std::string  getFieldName(void);
        const std::string  getFieldName(void) const;
        bool  hasNewValue(void) const;
        JSONValue *  getNewValue(void);
        const JSONValue *  getNewValue(void) const;

        virtual size_t extraTypeAddEventFieldsComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeAddEventFieldsComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeAddEventFieldsComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeAddEventFieldsComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeAddEventFieldsLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeAddEventFieldsLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setFieldName(std::string new_value)
          {
            flagHasFieldName = true;
            storeFieldName = new_value;
          }
        void unsetFieldName(void)
          {
            flagHasFieldName = false;
          }
        void setNewValue(JSONValue * new_value)
          {
            new_value->add_reference();
            if (flagHasNewValue)
              {
                storeNewValue->remove_reference();
              }
            flagHasNewValue = true;
            storeNewValue = new_value;
          }
        void unsetNewValue(void)
          {
            if (flagHasNewValue)
              {
                storeNewValue->remove_reference();
              }
            flagHasNewValue = false;
          }

        virtual void extraTypeAddEventFieldsAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeAddEventFieldsSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeAddEventFieldsLookup(key);
            if (old_field == NULL)
              {
                extraTypeAddEventFieldsAppendPair(key, new_component);
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
            assert(flagHasFieldName);
            handler->start_pair("FieldName");
            handler->string_value(storeFieldName);
            assert(flagHasNewValue);
            handler->start_pair("NewValue");
            storeNewValue->write(handler);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasFieldName()))
              {
                return "When parsing the object for %what%, the \"FieldName\" field was missing.";
              }
            if (!(hasNewValue()))
              {
                return "When parsing the object for %what%, the \"NewValue\" field was missing.";
              }
            return NULL;
          }

        static TypeAddEventFieldsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeAddEventFieldsJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeAddEventFieldsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeAddEventFieldsJSON>, TypeAddEventFieldsJSON *, bool> generator("Type TypeAddEventFields", ignore_extras);
                parse_json_value(text, "Text for TypeAddEventFieldsJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeAddEventFieldsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeAddEventFieldsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeAddEventFieldsJSON>, TypeAddEventFieldsJSON *, bool> generator("Type TypeAddEventFields", ignore_extras);
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorFieldName;
            JSONHoldingGenerator<JSONValueHandler, RCHandle<JSONValue>, JSONValue * > fieldGeneratorNewValue;
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
                TypeAddEventFieldsJSON *result = new TypeAddEventFieldsJSON();
                assert(result != NULL);
                RCHandle<TypeAddEventFieldsJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeAddEventFieldsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeAddEventFieldsJSON *result)
              {
                if (fieldGeneratorFieldName.have_value)
                  {
                    result->setFieldName(fieldGeneratorFieldName.value);
                    fieldGeneratorFieldName.have_value = false;
                  }
                else if (!(result->hasFieldName()))
                  {
                    error("When parsing the object for %what%, the \"FieldName\" field was missing.");
                  }
                if (fieldGeneratorNewValue.have_value)
                  {
                    result->setNewValue(fieldGeneratorNewValue.value.referenced());
                    fieldGeneratorNewValue.have_value = false;
                  }
                else if (!(result->hasNewValue()))
                  {
                    error("When parsing the object for %what%, the \"NewValue\" field was missing.");
                  }
              }
            virtual void handle_result(TypeAddEventFieldsJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'F':
                        if (strcmp(&(field_name[1]), "ieldName") == 0)
                            return &fieldGeneratorFieldName;
                        break;
                    case 'N':
                        if (strcmp(&(field_name[1]), "ewValue") == 0)
                            return &fieldGeneratorNewValue;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorFieldName("field \"FieldName\" of the TypeAddEventFields class"), fieldGeneratorNewValue("field \"NewValue\" of the TypeAddEventFields class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeAddEventFields class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorFieldName.reset();
                fieldGeneratorNewValue.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };
    class TypeNativeDataJSON : public ReferenceCounted
      {
      public:
        enum TypeNewFrequencyType
          {
            NewFrequencyType_unknown,
            NewFrequencyType_one_time,
            NewFrequencyType_daily,
            NewFrequencyType_weekly,
            NewFrequencyType_monthly,
            NewFrequencyType_yearly
          };

        static TypeNewFrequencyType  stringToNewFrequencyType(const char *chars);
        static const char * stringFromNewFrequencyType(TypeNewFrequencyType the_enum);
        class TypeSetEventFieldsJSON : public ReferenceCounted
          {
          private:
            bool flagHasFieldName;
            std::string storeFieldName;
            bool flagHasNewValue;
            JSONValue * storeNewValue;
            std::vector<std::string> extraKeys;
            std::vector<JSONValue *> extraValues;
            string_index *extraIndex;

            TypeSetEventFieldsJSON(const TypeSetEventFieldsJSON &);
            TypeSetEventFieldsJSON & operator=(const TypeSetEventFieldsJSON &other);

            void  fromJSONFieldName(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONNewValue(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypeSetEventFieldsJSON(void);
            virtual ~TypeSetEventFieldsJSON(void);
            bool  hasFieldName(void) const;
            std::string  getFieldName(void);
            const std::string  getFieldName(void) const;
            bool  hasNewValue(void) const;
            JSONValue *  getNewValue(void);
            const JSONValue *  getNewValue(void) const;

            virtual size_t extraTypeSetEventFieldsComponentCount(void) const
              {
                assert(extraKeys.size() == extraValues.size());
                return extraKeys.size();
              }
            virtual const char *extraTypeSetEventFieldsComponentKey(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraKeys[component_num].c_str();
              }
            virtual JSONValue *extraTypeSetEventFieldsComponentValue(size_t component_num)
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual const JSONValue *extraTypeSetEventFieldsComponentValue(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual JSONValue *extraTypeSetEventFieldsLookup(const char *field_name)
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }
            virtual const JSONValue *extraTypeSetEventFieldsLookup(const char *field_name) const
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }

            void setFieldName(std::string new_value)
              {
                flagHasFieldName = true;
                storeFieldName = new_value;
              }
            void unsetFieldName(void)
              {
                flagHasFieldName = false;
              }
            void setNewValue(JSONValue * new_value)
              {
                new_value->add_reference();
                if (flagHasNewValue)
                  {
                    storeNewValue->remove_reference();
                  }
                flagHasNewValue = true;
                storeNewValue = new_value;
              }
            void unsetNewValue(void)
              {
                if (flagHasNewValue)
                  {
                    storeNewValue->remove_reference();
                  }
                flagHasNewValue = false;
              }

            virtual void extraTypeSetEventFieldsAppendPair(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                assert(extraKeys.size() == extraValues.size());
                extraKeys.push_back(key);
                extraValues.push_back(new_component);
                enter_into_string_index(extraIndex, key, new_component);
                new_component->add_reference();
              }
            virtual void extraTypeSetEventFieldsSetField(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                JSONValue *old_field = extraTypeSetEventFieldsLookup(key);
                if (old_field == NULL)
                  {
                    extraTypeSetEventFieldsAppendPair(key, new_component);
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
                assert(flagHasFieldName);
                handler->start_pair("FieldName");
                handler->string_value(storeFieldName);
                assert(flagHasNewValue);
                handler->start_pair("NewValue");
                storeNewValue->write(handler);
              }
            virtual const char *missing_field_error(void) const
              {
                if (!(hasFieldName()))
                  {
                    return "When parsing the object for %what%, the \"FieldName\" field was missing.";
                  }
                if (!(hasNewValue()))
                  {
                    return "When parsing the object for %what%, the \"NewValue\" field was missing.";
                  }
                return NULL;
              }

            static TypeSetEventFieldsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TypeSetEventFieldsJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TypeSetEventFieldsJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeSetEventFieldsJSON>, TypeSetEventFieldsJSON *, bool> generator("Type TypeSetEventFields", ignore_extras);
                    parse_json_value(text, "Text for TypeSetEventFieldsJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TypeSetEventFieldsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TypeSetEventFieldsJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeSetEventFieldsJSON>, TypeSetEventFieldsJSON *, bool> generator("Type TypeSetEventFields", ignore_extras);
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
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorFieldName;
                JSONHoldingGenerator<JSONValueHandler, RCHandle<JSONValue>, JSONValue * > fieldGeneratorNewValue;
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
                    TypeSetEventFieldsJSON *result = new TypeSetEventFieldsJSON();
                    assert(result != NULL);
                    RCHandle<TypeSetEventFieldsJSON> result_holder = result;
                    finish(result);
                    size_t extra_count = unknownFieldGenerator.field_names.size();
                    assert(extra_count == unknownFieldGenerator.field_values.size());
                    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                      {
                        result->extraTypeSetEventFieldsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                      }
                    unknownFieldGenerator.field_names.clear();
                    unknownFieldGenerator.field_values.clear();
                    destroy_string_index(unknownFieldGenerator.index);
                unknownFieldGenerator.index = create_string_index();
                    handle_result(result);
                  }
                void finish(TypeSetEventFieldsJSON *result)
                  {
                    if (fieldGeneratorFieldName.have_value)
                      {
                        result->setFieldName(fieldGeneratorFieldName.value);
                        fieldGeneratorFieldName.have_value = false;
                      }
                    else if (!(result->hasFieldName()))
                      {
                        error("When parsing the object for %what%, the \"FieldName\" field was missing.");
                      }
                    if (fieldGeneratorNewValue.have_value)
                      {
                        result->setNewValue(fieldGeneratorNewValue.value.referenced());
                        fieldGeneratorNewValue.have_value = false;
                      }
                    else if (!(result->hasNewValue()))
                      {
                        error("When parsing the object for %what%, the \"NewValue\" field was missing.");
                      }
                  }
                virtual void handle_result(TypeSetEventFieldsJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    switch ((unsigned char)(field_name[0]))
                      {
                        case 'F':
                            if (strcmp(&(field_name[1]), "ieldName") == 0)
                                return &fieldGeneratorFieldName;
                            break;
                        case 'N':
                            if (strcmp(&(field_name[1]), "ewValue") == 0)
                                return &fieldGeneratorNewValue;
                            break;
                        default:
                            break;
                      }
                    return NULL;
                  }

              public:
                Generator(bool ignore_extras = false) : fieldGeneratorFieldName("field \"FieldName\" of the TypeSetEventFields class"), fieldGeneratorNewValue("field \"NewValue\" of the TypeSetEventFields class"), unknownFieldGenerator(ignore_extras)
                  {
                    set_what("the TypeSetEventFields class");
                  }
                ~Generator(void)
                  {
                  }

                void reset(void)
                  {
                    fieldGeneratorFieldName.reset();
                    fieldGeneratorNewValue.reset();
                    JSONObjectGenerator::reset();
                    unknownFieldGenerator.reset();
                  }
              };
          };
        class TypeAppendEventFieldsJSON : public ReferenceCounted
          {
          private:
            bool flagHasFieldName;
            std::string storeFieldName;
            bool flagHasNewValues;
            std::vector< JSONValue * > storeNewValues;
            std::vector<std::string> extraKeys;
            std::vector<JSONValue *> extraValues;
            string_index *extraIndex;

            TypeAppendEventFieldsJSON(const TypeAppendEventFieldsJSON &);
            TypeAppendEventFieldsJSON & operator=(const TypeAppendEventFieldsJSON &other);

            void  fromJSONFieldName(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONNewValues(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypeAppendEventFieldsJSON(void);
            virtual ~TypeAppendEventFieldsJSON(void);
            bool  hasFieldName(void) const;
            std::string  getFieldName(void);
            const std::string  getFieldName(void) const;
            bool  hasNewValues(void) const;
            size_t  countOfNewValues(void) const;
            JSONValue *  elementOfNewValues(size_t element_num);
            const JSONValue *  elementOfNewValues(size_t element_num) const;
            std::vector< JSONValue * >  getNewValues(void);
            const std::vector< JSONValue * >  getNewValues(void) const;

            virtual size_t extraTypeAppendEventFieldsComponentCount(void) const
              {
                assert(extraKeys.size() == extraValues.size());
                return extraKeys.size();
              }
            virtual const char *extraTypeAppendEventFieldsComponentKey(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraKeys[component_num].c_str();
              }
            virtual JSONValue *extraTypeAppendEventFieldsComponentValue(size_t component_num)
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual const JSONValue *extraTypeAppendEventFieldsComponentValue(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual JSONValue *extraTypeAppendEventFieldsLookup(const char *field_name)
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }
            virtual const JSONValue *extraTypeAppendEventFieldsLookup(const char *field_name) const
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }

            void setFieldName(std::string new_value)
              {
                flagHasFieldName = true;
                storeFieldName = new_value;
              }
            void unsetFieldName(void)
              {
                flagHasFieldName = false;
              }
            void initNewValues(void)
              {
                if (flagHasNewValues)
                  {
                    for (size_t num5 = 0; num5 < storeNewValues.size(); ++num5)
                      {
                        storeNewValues[num5]->remove_reference();
                      }
                  }
                flagHasNewValues = true;
                storeNewValues.clear();
              }
            void appendNewValues(JSONValue * to_append)
              {
                if (!flagHasNewValues)
                  {
                    flagHasNewValues = true;
                    storeNewValues.clear();
                  }
                assert(flagHasNewValues);
                to_append->add_reference();
                storeNewValues.push_back(to_append);
              }
            void unsetNewValues(void)
              {
                if (flagHasNewValues)
                  {
                    for (size_t num6 = 0; num6 < storeNewValues.size(); ++num6)
                      {
                        storeNewValues[num6]->remove_reference();
                      }
                  }
                flagHasNewValues = false;
                storeNewValues.clear();
              }

            virtual void extraTypeAppendEventFieldsAppendPair(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                assert(extraKeys.size() == extraValues.size());
                extraKeys.push_back(key);
                extraValues.push_back(new_component);
                enter_into_string_index(extraIndex, key, new_component);
                new_component->add_reference();
              }
            virtual void extraTypeAppendEventFieldsSetField(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                JSONValue *old_field = extraTypeAppendEventFieldsLookup(key);
                if (old_field == NULL)
                  {
                    extraTypeAppendEventFieldsAppendPair(key, new_component);
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
                assert(flagHasFieldName);
                handler->start_pair("FieldName");
                handler->string_value(storeFieldName);
                assert(flagHasNewValues);
                handler->start_pair("NewValues");
                assert(storeNewValues.size() >= 1);
                handler->start_array();
                for (size_t num1 = 0; num1 < storeNewValues.size(); ++num1)
                  {
                    storeNewValues[num1]->write(handler);
                  }
                handler->finish_array();
              }
            virtual const char *missing_field_error(void) const
              {
                if (!(hasFieldName()))
                  {
                    return "When parsing the object for %what%, the \"FieldName\" field was missing.";
                  }
                if (!(hasNewValues()))
                  {
                    return "When parsing the object for %what%, the \"NewValues\" field was missing.";
                  }
                return NULL;
              }

            static TypeAppendEventFieldsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TypeAppendEventFieldsJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TypeAppendEventFieldsJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeAppendEventFieldsJSON>, TypeAppendEventFieldsJSON *, bool> generator("Type TypeAppendEventFields", ignore_extras);
                    parse_json_value(text, "Text for TypeAppendEventFieldsJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TypeAppendEventFieldsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TypeAppendEventFieldsJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeAppendEventFieldsJSON>, TypeAppendEventFieldsJSON *, bool> generator("Type TypeAppendEventFields", ignore_extras);
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
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorFieldName;
                JSONHoldingArrayGenerator<JSONValueHandler, RCHandle<JSONValue>, JSONValue * > fieldGeneratorNewValues;
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
                    TypeAppendEventFieldsJSON *result = new TypeAppendEventFieldsJSON();
                    assert(result != NULL);
                    RCHandle<TypeAppendEventFieldsJSON> result_holder = result;
                    finish(result);
                    size_t extra_count = unknownFieldGenerator.field_names.size();
                    assert(extra_count == unknownFieldGenerator.field_values.size());
                    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                      {
                        result->extraTypeAppendEventFieldsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                      }
                    unknownFieldGenerator.field_names.clear();
                    unknownFieldGenerator.field_values.clear();
                    destroy_string_index(unknownFieldGenerator.index);
                unknownFieldGenerator.index = create_string_index();
                    handle_result(result);
                  }
                void finish(TypeAppendEventFieldsJSON *result)
                  {
                    if (fieldGeneratorFieldName.have_value)
                      {
                        result->setFieldName(fieldGeneratorFieldName.value);
                        fieldGeneratorFieldName.have_value = false;
                      }
                    else if (!(result->hasFieldName()))
                      {
                        error("When parsing the object for %what%, the \"FieldName\" field was missing.");
                      }
                    if (fieldGeneratorNewValues.have_value)
                      {
                        result->initNewValues();
                        size_t count = fieldGeneratorNewValues.value.size();
                        for (size_t num = 0; num < count; ++num)
                          {
                            result->appendNewValues(fieldGeneratorNewValues.value[num].referenced());
                          }
                        fieldGeneratorNewValues.value.clear();
                        fieldGeneratorNewValues.have_value = false;
                      }
                    else if (!(result->hasNewValues()))
                      {
                        error("When parsing the object for %what%, the \"NewValues\" field was missing.");
                      }
                  }
                virtual void handle_result(TypeAppendEventFieldsJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    switch ((unsigned char)(field_name[0]))
                      {
                        case 'F':
                            if (strcmp(&(field_name[1]), "ieldName") == 0)
                                return &fieldGeneratorFieldName;
                            break;
                        case 'N':
                            if (strcmp(&(field_name[1]), "ewValues") == 0)
                                return &fieldGeneratorNewValues;
                            break;
                        default:
                            break;
                      }
                    return NULL;
                  }

              public:
                Generator(bool ignore_extras = false) : fieldGeneratorFieldName("field \"FieldName\" of the TypeAppendEventFields class"), fieldGeneratorNewValues("field \"NewValues\" of the TypeAppendEventFields class"), unknownFieldGenerator(ignore_extras)
                  {
                    set_what("the TypeAppendEventFields class");
                  }
                ~Generator(void)
                  {
                  }

                void reset(void)
                  {
                    fieldGeneratorFieldName.reset();
                    fieldGeneratorNewValues.reset();
                    JSONObjectGenerator::reset();
                    unknownFieldGenerator.reset();
                  }
              };
          };
        class TypeAddEventFieldsJSON : public ReferenceCounted
          {
          private:
            bool flagHasFieldName;
            std::string storeFieldName;
            bool flagHasNewValue;
            JSONValue * storeNewValue;
            std::vector<std::string> extraKeys;
            std::vector<JSONValue *> extraValues;
            string_index *extraIndex;

            TypeAddEventFieldsJSON(const TypeAddEventFieldsJSON &);
            TypeAddEventFieldsJSON & operator=(const TypeAddEventFieldsJSON &other);

            void  fromJSONFieldName(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONNewValue(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypeAddEventFieldsJSON(void);
            virtual ~TypeAddEventFieldsJSON(void);
            bool  hasFieldName(void) const;
            std::string  getFieldName(void);
            const std::string  getFieldName(void) const;
            bool  hasNewValue(void) const;
            JSONValue *  getNewValue(void);
            const JSONValue *  getNewValue(void) const;

            virtual size_t extraTypeAddEventFieldsComponentCount(void) const
              {
                assert(extraKeys.size() == extraValues.size());
                return extraKeys.size();
              }
            virtual const char *extraTypeAddEventFieldsComponentKey(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraKeys[component_num].c_str();
              }
            virtual JSONValue *extraTypeAddEventFieldsComponentValue(size_t component_num)
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual const JSONValue *extraTypeAddEventFieldsComponentValue(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual JSONValue *extraTypeAddEventFieldsLookup(const char *field_name)
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }
            virtual const JSONValue *extraTypeAddEventFieldsLookup(const char *field_name) const
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }

            void setFieldName(std::string new_value)
              {
                flagHasFieldName = true;
                storeFieldName = new_value;
              }
            void unsetFieldName(void)
              {
                flagHasFieldName = false;
              }
            void setNewValue(JSONValue * new_value)
              {
                new_value->add_reference();
                if (flagHasNewValue)
                  {
                    storeNewValue->remove_reference();
                  }
                flagHasNewValue = true;
                storeNewValue = new_value;
              }
            void unsetNewValue(void)
              {
                if (flagHasNewValue)
                  {
                    storeNewValue->remove_reference();
                  }
                flagHasNewValue = false;
              }

            virtual void extraTypeAddEventFieldsAppendPair(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                assert(extraKeys.size() == extraValues.size());
                extraKeys.push_back(key);
                extraValues.push_back(new_component);
                enter_into_string_index(extraIndex, key, new_component);
                new_component->add_reference();
              }
            virtual void extraTypeAddEventFieldsSetField(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                JSONValue *old_field = extraTypeAddEventFieldsLookup(key);
                if (old_field == NULL)
                  {
                    extraTypeAddEventFieldsAppendPair(key, new_component);
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
                assert(flagHasFieldName);
                handler->start_pair("FieldName");
                handler->string_value(storeFieldName);
                assert(flagHasNewValue);
                handler->start_pair("NewValue");
                storeNewValue->write(handler);
              }
            virtual const char *missing_field_error(void) const
              {
                if (!(hasFieldName()))
                  {
                    return "When parsing the object for %what%, the \"FieldName\" field was missing.";
                  }
                if (!(hasNewValue()))
                  {
                    return "When parsing the object for %what%, the \"NewValue\" field was missing.";
                  }
                return NULL;
              }

            static TypeAddEventFieldsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TypeAddEventFieldsJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TypeAddEventFieldsJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeAddEventFieldsJSON>, TypeAddEventFieldsJSON *, bool> generator("Type TypeAddEventFields", ignore_extras);
                    parse_json_value(text, "Text for TypeAddEventFieldsJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TypeAddEventFieldsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TypeAddEventFieldsJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeAddEventFieldsJSON>, TypeAddEventFieldsJSON *, bool> generator("Type TypeAddEventFields", ignore_extras);
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
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorFieldName;
                JSONHoldingGenerator<JSONValueHandler, RCHandle<JSONValue>, JSONValue * > fieldGeneratorNewValue;
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
                    TypeAddEventFieldsJSON *result = new TypeAddEventFieldsJSON();
                    assert(result != NULL);
                    RCHandle<TypeAddEventFieldsJSON> result_holder = result;
                    finish(result);
                    size_t extra_count = unknownFieldGenerator.field_names.size();
                    assert(extra_count == unknownFieldGenerator.field_values.size());
                    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                      {
                        result->extraTypeAddEventFieldsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                      }
                    unknownFieldGenerator.field_names.clear();
                    unknownFieldGenerator.field_values.clear();
                    destroy_string_index(unknownFieldGenerator.index);
                unknownFieldGenerator.index = create_string_index();
                    handle_result(result);
                  }
                void finish(TypeAddEventFieldsJSON *result)
                  {
                    if (fieldGeneratorFieldName.have_value)
                      {
                        result->setFieldName(fieldGeneratorFieldName.value);
                        fieldGeneratorFieldName.have_value = false;
                      }
                    else if (!(result->hasFieldName()))
                      {
                        error("When parsing the object for %what%, the \"FieldName\" field was missing.");
                      }
                    if (fieldGeneratorNewValue.have_value)
                      {
                        result->setNewValue(fieldGeneratorNewValue.value.referenced());
                        fieldGeneratorNewValue.have_value = false;
                      }
                    else if (!(result->hasNewValue()))
                      {
                        error("When parsing the object for %what%, the \"NewValue\" field was missing.");
                      }
                  }
                virtual void handle_result(TypeAddEventFieldsJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    switch ((unsigned char)(field_name[0]))
                      {
                        case 'F':
                            if (strcmp(&(field_name[1]), "ieldName") == 0)
                                return &fieldGeneratorFieldName;
                            break;
                        case 'N':
                            if (strcmp(&(field_name[1]), "ewValue") == 0)
                                return &fieldGeneratorNewValue;
                            break;
                        default:
                            break;
                      }
                    return NULL;
                  }

              public:
                Generator(bool ignore_extras = false) : fieldGeneratorFieldName("field \"FieldName\" of the TypeAddEventFields class"), fieldGeneratorNewValue("field \"NewValue\" of the TypeAddEventFields class"), unknownFieldGenerator(ignore_extras)
                  {
                    set_what("the TypeAddEventFields class");
                  }
                ~Generator(void)
                  {
                  }

                void reset(void)
                  {
                    fieldGeneratorFieldName.reset();
                    fieldGeneratorNewValue.reset();
                    JSONObjectGenerator::reset();
                    unknownFieldGenerator.reset();
                  }
              };
          };

      private:
        bool flagHasEventIDs;
        std::vector< std::string > storeEventIDs;
        bool flagHasQuery;
        CalendarQueryJSON * storeQuery;
        bool flagHasNewItemType;
        std::string storeNewItemType;
        bool flagHasNewTitle;
        std::string storeNewTitle;
        bool flagHasNewLocation;
        std::string storeNewLocation;
        bool flagHasNewStart;
        DateAndOrTimeJSON * storeNewStart;
        bool flagHasStartDeltaSeconds;
        double storeStartDeltaSeconds;
        std::string textStoreStartDeltaSeconds;
        bool flagHasStartDeltaDays;
        OInteger storeStartDeltaDays;
        bool flagHasStartDeltaMonths;
        OInteger storeStartDeltaMonths;
        bool flagHasNewEnd;
        DateAndOrTimeJSON * storeNewEnd;
        bool flagHasEndDeltaSeconds;
        double storeEndDeltaSeconds;
        std::string textStoreEndDeltaSeconds;
        bool flagHasEndDeltaDays;
        OInteger storeEndDeltaDays;
        bool flagHasEndDeltaMonths;
        OInteger storeEndDeltaMonths;
        bool flagHasNewFrequencyType;
        TypeNewFrequencyType storeNewFrequencyType;
        bool flagHasNewFrequencyMultiplier;
        OInteger storeNewFrequencyMultiplier;
        bool flagHasSetEventFields;
        std::vector< TypeSetEventFieldsJSON * > storeSetEventFields;
        bool flagHasAppendEventFields;
        std::vector< TypeAppendEventFieldsJSON * > storeAppendEventFields;
        bool flagHasRemoveEventFields;
        std::vector< std::string > storeRemoveEventFields;
        bool flagHasAddEventFields;
        std::vector< TypeAddEventFieldsJSON * > storeAddEventFields;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeNativeDataJSON(const TypeNativeDataJSON &);
        TypeNativeDataJSON & operator=(const TypeNativeDataJSON &other);

        void  fromJSONEventIDs(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONQuery(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONNewItemType(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONNewTitle(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONNewLocation(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONNewStart(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONStartDeltaSeconds(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONStartDeltaDays(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONStartDeltaMonths(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONNewEnd(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONEndDeltaSeconds(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONEndDeltaDays(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONEndDeltaMonths(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONNewFrequencyType(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONNewFrequencyMultiplier(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONSetEventFields(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAppendEventFields(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONRemoveEventFields(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAddEventFields(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeNativeDataJSON(void);
        virtual ~TypeNativeDataJSON(void);
        bool  hasEventIDs(void) const;
        size_t  countOfEventIDs(void) const;
        std::string  elementOfEventIDs(size_t element_num);
        const std::string  elementOfEventIDs(size_t element_num) const;
        std::vector< std::string >  getEventIDs(void);
        const std::vector< std::string >  getEventIDs(void) const;
        bool  hasQuery(void) const;
        CalendarQueryJSON *  getQuery(void);
        const CalendarQueryJSON *  getQuery(void) const;
        bool  hasNewItemType(void) const;
        std::string  getNewItemType(void);
        const std::string  getNewItemType(void) const;
        bool  hasNewTitle(void) const;
        std::string  getNewTitle(void);
        const std::string  getNewTitle(void) const;
        bool  hasNewLocation(void) const;
        std::string  getNewLocation(void);
        const std::string  getNewLocation(void) const;
        bool  hasNewStart(void) const;
        DateAndOrTimeJSON *  getNewStart(void);
        const DateAndOrTimeJSON *  getNewStart(void) const;
        bool  hasStartDeltaSeconds(void) const;
        double  getStartDeltaSeconds(void);
        const double  getStartDeltaSeconds(void) const;
        std::string  getStartDeltaSecondsAsText(void) const;
        bool  hasStartDeltaDays(void) const;
        OInteger  getStartDeltaDays(void);
        const OInteger  getStartDeltaDays(void) const;
        bool  hasStartDeltaMonths(void) const;
        OInteger  getStartDeltaMonths(void);
        const OInteger  getStartDeltaMonths(void) const;
        bool  hasNewEnd(void) const;
        DateAndOrTimeJSON *  getNewEnd(void);
        const DateAndOrTimeJSON *  getNewEnd(void) const;
        bool  hasEndDeltaSeconds(void) const;
        double  getEndDeltaSeconds(void);
        const double  getEndDeltaSeconds(void) const;
        std::string  getEndDeltaSecondsAsText(void) const;
        bool  hasEndDeltaDays(void) const;
        OInteger  getEndDeltaDays(void);
        const OInteger  getEndDeltaDays(void) const;
        bool  hasEndDeltaMonths(void) const;
        OInteger  getEndDeltaMonths(void);
        const OInteger  getEndDeltaMonths(void) const;
        bool  hasNewFrequencyType(void) const;
        TypeNewFrequencyType  getNewFrequencyType(void);
        const TypeNewFrequencyType  getNewFrequencyType(void) const;
        const char * getNewFrequencyTypeAsChars(void) const;
        std::string  getNewFrequencyTypeAsString(void) const;
        bool  hasNewFrequencyMultiplier(void) const;
        OInteger  getNewFrequencyMultiplier(void);
        const OInteger  getNewFrequencyMultiplier(void) const;
        bool  hasSetEventFields(void) const;
        size_t  countOfSetEventFields(void) const;
        TypeSetEventFieldsJSON *  elementOfSetEventFields(size_t element_num);
        const TypeSetEventFieldsJSON *  elementOfSetEventFields(size_t element_num) const;
        std::vector< TypeSetEventFieldsJSON * >  getSetEventFields(void);
        const std::vector< TypeSetEventFieldsJSON * >  getSetEventFields(void) const;
        bool  hasAppendEventFields(void) const;
        size_t  countOfAppendEventFields(void) const;
        TypeAppendEventFieldsJSON *  elementOfAppendEventFields(size_t element_num);
        const TypeAppendEventFieldsJSON *  elementOfAppendEventFields(size_t element_num) const;
        std::vector< TypeAppendEventFieldsJSON * >  getAppendEventFields(void);
        const std::vector< TypeAppendEventFieldsJSON * >  getAppendEventFields(void) const;
        bool  hasRemoveEventFields(void) const;
        size_t  countOfRemoveEventFields(void) const;
        std::string  elementOfRemoveEventFields(size_t element_num);
        const std::string  elementOfRemoveEventFields(size_t element_num) const;
        std::vector< std::string >  getRemoveEventFields(void);
        const std::vector< std::string >  getRemoveEventFields(void) const;
        bool  hasAddEventFields(void) const;
        size_t  countOfAddEventFields(void) const;
        TypeAddEventFieldsJSON *  elementOfAddEventFields(size_t element_num);
        const TypeAddEventFieldsJSON *  elementOfAddEventFields(size_t element_num) const;
        std::vector< TypeAddEventFieldsJSON * >  getAddEventFields(void);
        const std::vector< TypeAddEventFieldsJSON * >  getAddEventFields(void) const;

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

        void initEventIDs(void)
          {
            flagHasEventIDs = true;
            storeEventIDs.clear();
          }
        void appendEventIDs(std::string to_append)
          {
            if (!flagHasEventIDs)
              {
                flagHasEventIDs = true;
                storeEventIDs.clear();
              }
            assert(flagHasEventIDs);
            storeEventIDs.push_back(to_append);
          }
        void unsetEventIDs(void)
          {
            flagHasEventIDs = false;
            storeEventIDs.clear();
          }
        void setQuery(CalendarQueryJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasQuery)
              {
                storeQuery->remove_reference();
              }
            flagHasQuery = true;
            storeQuery = new_value;
          }
        void unsetQuery(void)
          {
            if (flagHasQuery)
              {
                storeQuery->remove_reference();
              }
            flagHasQuery = false;
          }
        void setNewItemType(std::string new_value)
          {
            flagHasNewItemType = true;
            storeNewItemType = new_value;
          }
        void unsetNewItemType(void)
          {
            flagHasNewItemType = false;
          }
        void setNewTitle(std::string new_value)
          {
            flagHasNewTitle = true;
            storeNewTitle = new_value;
          }
        void unsetNewTitle(void)
          {
            flagHasNewTitle = false;
          }
        void setNewLocation(std::string new_value)
          {
            flagHasNewLocation = true;
            storeNewLocation = new_value;
          }
        void unsetNewLocation(void)
          {
            flagHasNewLocation = false;
          }
        void setNewStart(DateAndOrTimeJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasNewStart)
              {
                storeNewStart->remove_reference();
              }
            flagHasNewStart = true;
            storeNewStart = new_value;
          }
        void unsetNewStart(void)
          {
            if (flagHasNewStart)
              {
                storeNewStart->remove_reference();
              }
            flagHasNewStart = false;
          }
        void setStartDeltaSeconds(double new_value)
          {
            flagHasStartDeltaSeconds = true;
            storeStartDeltaSeconds = new_value;
            textStoreStartDeltaSeconds = "";
          }
        void setStartDeltaSecondsText(std::string new_value)
          {
            flagHasStartDeltaSeconds = true;
            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                throw("The text value for field StartDeltaSeconds of TypeNativeDataJSON is not a valid number.");
            textStoreStartDeltaSeconds = new_value;
          }
        void unsetStartDeltaSeconds(void)
          {
            flagHasStartDeltaSeconds = false;
          }
        void setStartDeltaDays(OInteger new_value)
          {
            flagHasStartDeltaDays = true;
            if (new_value < 0)
                throw("The value for field StartDeltaDays of TypeNativeDataJSON is less than the lower bound (0) for that field.");
            storeStartDeltaDays = new_value;
          }
        void unsetStartDeltaDays(void)
          {
            flagHasStartDeltaDays = false;
          }
        void setStartDeltaMonths(OInteger new_value)
          {
            flagHasStartDeltaMonths = true;
            if (new_value < 0)
                throw("The value for field StartDeltaMonths of TypeNativeDataJSON is less than the lower bound (0) for that field.");
            storeStartDeltaMonths = new_value;
          }
        void unsetStartDeltaMonths(void)
          {
            flagHasStartDeltaMonths = false;
          }
        void setNewEnd(DateAndOrTimeJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasNewEnd)
              {
                storeNewEnd->remove_reference();
              }
            flagHasNewEnd = true;
            storeNewEnd = new_value;
          }
        void unsetNewEnd(void)
          {
            if (flagHasNewEnd)
              {
                storeNewEnd->remove_reference();
              }
            flagHasNewEnd = false;
          }
        void setEndDeltaSeconds(double new_value)
          {
            flagHasEndDeltaSeconds = true;
            storeEndDeltaSeconds = new_value;
            textStoreEndDeltaSeconds = "";
          }
        void setEndDeltaSecondsText(std::string new_value)
          {
            flagHasEndDeltaSeconds = true;
            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                throw("The text value for field EndDeltaSeconds of TypeNativeDataJSON is not a valid number.");
            textStoreEndDeltaSeconds = new_value;
          }
        void unsetEndDeltaSeconds(void)
          {
            flagHasEndDeltaSeconds = false;
          }
        void setEndDeltaDays(OInteger new_value)
          {
            flagHasEndDeltaDays = true;
            if (new_value < 0)
                throw("The value for field EndDeltaDays of TypeNativeDataJSON is less than the lower bound (0) for that field.");
            storeEndDeltaDays = new_value;
          }
        void unsetEndDeltaDays(void)
          {
            flagHasEndDeltaDays = false;
          }
        void setEndDeltaMonths(OInteger new_value)
          {
            flagHasEndDeltaMonths = true;
            if (new_value < 0)
                throw("The value for field EndDeltaMonths of TypeNativeDataJSON is less than the lower bound (0) for that field.");
            storeEndDeltaMonths = new_value;
          }
        void unsetEndDeltaMonths(void)
          {
            flagHasEndDeltaMonths = false;
          }
        void setNewFrequencyType(TypeNewFrequencyType new_value)
          {
            flagHasNewFrequencyType = true;
            storeNewFrequencyType = new_value;
          }
        void setNewFrequencyType(const char *chars)
          {
            setNewFrequencyType(stringToNewFrequencyType(chars));
          }
        void setNewFrequencyType(std::string the_string)
          {
            setNewFrequencyType(stringToNewFrequencyType(the_string.c_str()));
          }
        void unsetNewFrequencyType(void)
          {
            flagHasNewFrequencyType = false;
          }
        void setNewFrequencyMultiplier(OInteger new_value)
          {
            flagHasNewFrequencyMultiplier = true;
            if (new_value < 0)
                throw("The value for field NewFrequencyMultiplier of TypeNativeDataJSON is less than the lower bound (0) for that field.");
            storeNewFrequencyMultiplier = new_value;
          }
        void unsetNewFrequencyMultiplier(void)
          {
            flagHasNewFrequencyMultiplier = false;
          }
        void initSetEventFields(void)
          {
            if (flagHasSetEventFields)
              {
                for (size_t num10 = 0; num10 < storeSetEventFields.size(); ++num10)
                  {
                    storeSetEventFields[num10]->remove_reference();
                  }
              }
            flagHasSetEventFields = true;
            storeSetEventFields.clear();
          }
        void appendSetEventFields(TypeSetEventFieldsJSON * to_append)
          {
            if (!flagHasSetEventFields)
              {
                flagHasSetEventFields = true;
                storeSetEventFields.clear();
              }
            assert(flagHasSetEventFields);
            to_append->add_reference();
            storeSetEventFields.push_back(to_append);
          }
        void unsetSetEventFields(void)
          {
            if (flagHasSetEventFields)
              {
                for (size_t num11 = 0; num11 < storeSetEventFields.size(); ++num11)
                  {
                    storeSetEventFields[num11]->remove_reference();
                  }
              }
            flagHasSetEventFields = false;
            storeSetEventFields.clear();
          }
        void initAppendEventFields(void)
          {
            if (flagHasAppendEventFields)
              {
                for (size_t num12 = 0; num12 < storeAppendEventFields.size(); ++num12)
                  {
                    storeAppendEventFields[num12]->remove_reference();
                  }
              }
            flagHasAppendEventFields = true;
            storeAppendEventFields.clear();
          }
        void appendAppendEventFields(TypeAppendEventFieldsJSON * to_append)
          {
            if (!flagHasAppendEventFields)
              {
                flagHasAppendEventFields = true;
                storeAppendEventFields.clear();
              }
            assert(flagHasAppendEventFields);
            to_append->add_reference();
            storeAppendEventFields.push_back(to_append);
          }
        void unsetAppendEventFields(void)
          {
            if (flagHasAppendEventFields)
              {
                for (size_t num13 = 0; num13 < storeAppendEventFields.size(); ++num13)
                  {
                    storeAppendEventFields[num13]->remove_reference();
                  }
              }
            flagHasAppendEventFields = false;
            storeAppendEventFields.clear();
          }
        void initRemoveEventFields(void)
          {
            flagHasRemoveEventFields = true;
            storeRemoveEventFields.clear();
          }
        void appendRemoveEventFields(std::string to_append)
          {
            if (!flagHasRemoveEventFields)
              {
                flagHasRemoveEventFields = true;
                storeRemoveEventFields.clear();
              }
            assert(flagHasRemoveEventFields);
            storeRemoveEventFields.push_back(to_append);
          }
        void unsetRemoveEventFields(void)
          {
            flagHasRemoveEventFields = false;
            storeRemoveEventFields.clear();
          }
        void initAddEventFields(void)
          {
            if (flagHasAddEventFields)
              {
                for (size_t num14 = 0; num14 < storeAddEventFields.size(); ++num14)
                  {
                    storeAddEventFields[num14]->remove_reference();
                  }
              }
            flagHasAddEventFields = true;
            storeAddEventFields.clear();
          }
        void appendAddEventFields(TypeAddEventFieldsJSON * to_append)
          {
            if (!flagHasAddEventFields)
              {
                flagHasAddEventFields = true;
                storeAddEventFields.clear();
              }
            assert(flagHasAddEventFields);
            to_append->add_reference();
            storeAddEventFields.push_back(to_append);
          }
        void unsetAddEventFields(void)
          {
            if (flagHasAddEventFields)
              {
                for (size_t num15 = 0; num15 < storeAddEventFields.size(); ++num15)
                  {
                    storeAddEventFields[num15]->remove_reference();
                  }
              }
            flagHasAddEventFields = false;
            storeAddEventFields.clear();
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
            if (flagHasEventIDs)
              {
                handler->start_pair("EventIDs");
                assert(storeEventIDs.size() >= 1);
                handler->start_array();
                for (size_t num1 = 0; num1 < storeEventIDs.size(); ++num1)
                  {
                    handler->string_value(storeEventIDs[num1]);
                  }
                handler->finish_array();
              }
            if (flagHasQuery)
              {
                handler->start_pair("Query");
                storeQuery->write_as_json(handler);
              }
            assert(flagHasNewItemType);
            handler->start_pair("NewItemType");
            handler->string_value(storeNewItemType);
            assert(flagHasNewTitle);
            handler->start_pair("NewTitle");
            handler->string_value(storeNewTitle);
            assert(flagHasNewLocation);
            handler->start_pair("NewLocation");
            handler->string_value(storeNewLocation);
            assert(flagHasNewStart);
            handler->start_pair("NewStart");
            storeNewStart->write_as_json(handler);
            assert(flagHasStartDeltaSeconds);
            handler->start_pair("StartDeltaSeconds");
            if (textStoreStartDeltaSeconds != "")
                handler->number_value(textStoreStartDeltaSeconds.c_str());
            else if (((double)(long int)storeStartDeltaSeconds) == storeStartDeltaSeconds)
                handler->number_value((long int)storeStartDeltaSeconds);
            else
                handler->number_value(storeStartDeltaSeconds);
            assert(flagHasStartDeltaDays);
            handler->start_pair("StartDeltaDays");
            handler->number_value(storeStartDeltaDays.get_o_integer());
            assert(flagHasStartDeltaMonths);
            handler->start_pair("StartDeltaMonths");
            handler->number_value(storeStartDeltaMonths.get_o_integer());
            assert(flagHasNewEnd);
            handler->start_pair("NewEnd");
            storeNewEnd->write_as_json(handler);
            assert(flagHasEndDeltaSeconds);
            handler->start_pair("EndDeltaSeconds");
            if (textStoreEndDeltaSeconds != "")
                handler->number_value(textStoreEndDeltaSeconds.c_str());
            else if (((double)(long int)storeEndDeltaSeconds) == storeEndDeltaSeconds)
                handler->number_value((long int)storeEndDeltaSeconds);
            else
                handler->number_value(storeEndDeltaSeconds);
            assert(flagHasEndDeltaDays);
            handler->start_pair("EndDeltaDays");
            handler->number_value(storeEndDeltaDays.get_o_integer());
            assert(flagHasEndDeltaMonths);
            handler->start_pair("EndDeltaMonths");
            handler->number_value(storeEndDeltaMonths.get_o_integer());
            assert(flagHasNewFrequencyType);
            handler->start_pair("NewFrequencyType");
            switch (storeNewFrequencyType)
              {
                case NewFrequencyType_unknown:
                    handler->string_value("unknown");
                    break;
                case NewFrequencyType_one_time:
                    handler->string_value("one-time");
                    break;
                case NewFrequencyType_daily:
                    handler->string_value("daily");
                    break;
                case NewFrequencyType_weekly:
                    handler->string_value("weekly");
                    break;
                case NewFrequencyType_monthly:
                    handler->string_value("monthly");
                    break;
                case NewFrequencyType_yearly:
                    handler->string_value("yearly");
                    break;
                default:
                    assert(false);
              }
            assert(flagHasNewFrequencyMultiplier);
            handler->start_pair("NewFrequencyMultiplier");
            handler->number_value(storeNewFrequencyMultiplier.get_o_integer());
            if (flagHasSetEventFields)
              {
                handler->start_pair("SetEventFields");
                handler->start_array();
                for (size_t num2 = 0; num2 < storeSetEventFields.size(); ++num2)
                  {
                    storeSetEventFields[num2]->write_as_json(handler);
                  }
                handler->finish_array();
              }
            if (flagHasAppendEventFields)
              {
                handler->start_pair("AppendEventFields");
                handler->start_array();
                for (size_t num3 = 0; num3 < storeAppendEventFields.size(); ++num3)
                  {
                    storeAppendEventFields[num3]->write_as_json(handler);
                  }
                handler->finish_array();
              }
            if (flagHasRemoveEventFields)
              {
                handler->start_pair("RemoveEventFields");
                handler->start_array();
                for (size_t num4 = 0; num4 < storeRemoveEventFields.size(); ++num4)
                  {
                    handler->string_value(storeRemoveEventFields[num4]);
                  }
                handler->finish_array();
              }
            if (flagHasAddEventFields)
              {
                handler->start_pair("AddEventFields");
                handler->start_array();
                for (size_t num5 = 0; num5 < storeAddEventFields.size(); ++num5)
                  {
                    storeAddEventFields[num5]->write_as_json(handler);
                  }
                handler->finish_array();
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasNewItemType()))
              {
                return "When parsing the object for %what%, the \"NewItemType\" field was missing.";
              }
            if (!(hasNewTitle()))
              {
                return "When parsing the object for %what%, the \"NewTitle\" field was missing.";
              }
            if (!(hasNewLocation()))
              {
                return "When parsing the object for %what%, the \"NewLocation\" field was missing.";
              }
            if (!(hasNewStart()))
              {
                return "When parsing the object for %what%, the \"NewStart\" field was missing.";
              }
            if (!(hasStartDeltaSeconds()))
              {
                return "When parsing the object for %what%, the \"StartDeltaSeconds\" field was missing.";
              }
            if (!(hasStartDeltaDays()))
              {
                return "When parsing the object for %what%, the \"StartDeltaDays\" field was missing.";
              }
            if (!(hasStartDeltaMonths()))
              {
                return "When parsing the object for %what%, the \"StartDeltaMonths\" field was missing.";
              }
            if (!(hasNewEnd()))
              {
                return "When parsing the object for %what%, the \"NewEnd\" field was missing.";
              }
            if (!(hasEndDeltaSeconds()))
              {
                return "When parsing the object for %what%, the \"EndDeltaSeconds\" field was missing.";
              }
            if (!(hasEndDeltaDays()))
              {
                return "When parsing the object for %what%, the \"EndDeltaDays\" field was missing.";
              }
            if (!(hasEndDeltaMonths()))
              {
                return "When parsing the object for %what%, the \"EndDeltaMonths\" field was missing.";
              }
            if (!(hasNewFrequencyType()))
              {
                return "When parsing the object for %what%, the \"NewFrequencyType\" field was missing.";
              }
            if (!(hasNewFrequencyMultiplier()))
              {
                return "When parsing the object for %what%, the \"NewFrequencyMultiplier\" field was missing.";
              }
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
            JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorEventIDs;
            JSONHoldingGenerator<CalendarQueryJSON::Generator, RCHandle<CalendarQueryJSON>, CalendarQueryJSON *, bool > fieldGeneratorQuery;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorNewItemType;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorNewTitle;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorNewLocation;
            JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorNewStart;
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorStartDeltaSeconds;
            static char lowerBoundStartDeltaDays[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundStartDeltaDays>, OInteger, o_integer > fieldGeneratorStartDeltaDays;
            static char lowerBoundStartDeltaMonths[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundStartDeltaMonths>, OInteger, o_integer > fieldGeneratorStartDeltaMonths;
            JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorNewEnd;
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorEndDeltaSeconds;
            static char lowerBoundEndDeltaDays[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundEndDeltaDays>, OInteger, o_integer > fieldGeneratorEndDeltaDays;
            static char lowerBoundEndDeltaMonths[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundEndDeltaMonths>, OInteger, o_integer > fieldGeneratorEndDeltaMonths;
        class FieldGeneratorNewFrequencyType : public JSONStringGenerator
              {
              protected:
                FieldGeneratorNewFrequencyType(const char *what)
                  {
                    set_what(what);
                  }
                FieldGeneratorNewFrequencyType(void)
                  {
                  }
                void handle_result(const char *result)
                  {
                    handle_result(stringToNewFrequencyType(result));
                  }
                virtual void handle_result(TypeNewFrequencyType result) = 0;
              };
            JSONHoldingGenerator<FieldGeneratorNewFrequencyType, TypeNewFrequencyType, TypeNewFrequencyType > fieldGeneratorNewFrequencyType;
            static char lowerBoundNewFrequencyMultiplier[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundNewFrequencyMultiplier>, OInteger, o_integer > fieldGeneratorNewFrequencyMultiplier;
            JSONHoldingArrayGenerator<TypeSetEventFieldsJSON::Generator, RCHandle<TypeSetEventFieldsJSON>, TypeSetEventFieldsJSON *, bool > fieldGeneratorSetEventFields;
            JSONHoldingArrayGenerator<TypeAppendEventFieldsJSON::Generator, RCHandle<TypeAppendEventFieldsJSON>, TypeAppendEventFieldsJSON *, bool > fieldGeneratorAppendEventFields;
            JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorRemoveEventFields;
            JSONHoldingArrayGenerator<TypeAddEventFieldsJSON::Generator, RCHandle<TypeAddEventFieldsJSON>, TypeAddEventFieldsJSON *, bool > fieldGeneratorAddEventFields;
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
                if (fieldGeneratorEventIDs.have_value)
                  {
                    result->initEventIDs();
                    size_t count = fieldGeneratorEventIDs.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendEventIDs(fieldGeneratorEventIDs.value[num]);
                      }
                    fieldGeneratorEventIDs.value.clear();
                    fieldGeneratorEventIDs.have_value = false;
                  }
                if (fieldGeneratorQuery.have_value)
                  {
                    result->setQuery(fieldGeneratorQuery.value.referenced());
                    fieldGeneratorQuery.have_value = false;
                  }
                if (fieldGeneratorNewItemType.have_value)
                  {
                    result->setNewItemType(fieldGeneratorNewItemType.value);
                    fieldGeneratorNewItemType.have_value = false;
                  }
                else if (!(result->hasNewItemType()))
                  {
                    error("When parsing the object for %what%, the \"NewItemType\" field was missing.");
                  }
                if (fieldGeneratorNewTitle.have_value)
                  {
                    result->setNewTitle(fieldGeneratorNewTitle.value);
                    fieldGeneratorNewTitle.have_value = false;
                  }
                else if (!(result->hasNewTitle()))
                  {
                    error("When parsing the object for %what%, the \"NewTitle\" field was missing.");
                  }
                if (fieldGeneratorNewLocation.have_value)
                  {
                    result->setNewLocation(fieldGeneratorNewLocation.value);
                    fieldGeneratorNewLocation.have_value = false;
                  }
                else if (!(result->hasNewLocation()))
                  {
                    error("When parsing the object for %what%, the \"NewLocation\" field was missing.");
                  }
                if (fieldGeneratorNewStart.have_value)
                  {
                    result->setNewStart(fieldGeneratorNewStart.value.referenced());
                    fieldGeneratorNewStart.have_value = false;
                  }
                else if (!(result->hasNewStart()))
                  {
                    error("When parsing the object for %what%, the \"NewStart\" field was missing.");
                  }
                if (fieldGeneratorStartDeltaSeconds.have_value)
                  {
                    result->setStartDeltaSecondsText(fieldGeneratorStartDeltaSeconds.value);
                    fieldGeneratorStartDeltaSeconds.have_value = false;
                  }
                else if (!(result->hasStartDeltaSeconds()))
                  {
                    error("When parsing the object for %what%, the \"StartDeltaSeconds\" field was missing.");
                  }
                if (fieldGeneratorStartDeltaDays.have_value)
                  {
                    result->setStartDeltaDays(fieldGeneratorStartDeltaDays.value);
                    fieldGeneratorStartDeltaDays.have_value = false;
                  }
                else if (!(result->hasStartDeltaDays()))
                  {
                    error("When parsing the object for %what%, the \"StartDeltaDays\" field was missing.");
                  }
                if (fieldGeneratorStartDeltaMonths.have_value)
                  {
                    result->setStartDeltaMonths(fieldGeneratorStartDeltaMonths.value);
                    fieldGeneratorStartDeltaMonths.have_value = false;
                  }
                else if (!(result->hasStartDeltaMonths()))
                  {
                    error("When parsing the object for %what%, the \"StartDeltaMonths\" field was missing.");
                  }
                if (fieldGeneratorNewEnd.have_value)
                  {
                    result->setNewEnd(fieldGeneratorNewEnd.value.referenced());
                    fieldGeneratorNewEnd.have_value = false;
                  }
                else if (!(result->hasNewEnd()))
                  {
                    error("When parsing the object for %what%, the \"NewEnd\" field was missing.");
                  }
                if (fieldGeneratorEndDeltaSeconds.have_value)
                  {
                    result->setEndDeltaSecondsText(fieldGeneratorEndDeltaSeconds.value);
                    fieldGeneratorEndDeltaSeconds.have_value = false;
                  }
                else if (!(result->hasEndDeltaSeconds()))
                  {
                    error("When parsing the object for %what%, the \"EndDeltaSeconds\" field was missing.");
                  }
                if (fieldGeneratorEndDeltaDays.have_value)
                  {
                    result->setEndDeltaDays(fieldGeneratorEndDeltaDays.value);
                    fieldGeneratorEndDeltaDays.have_value = false;
                  }
                else if (!(result->hasEndDeltaDays()))
                  {
                    error("When parsing the object for %what%, the \"EndDeltaDays\" field was missing.");
                  }
                if (fieldGeneratorEndDeltaMonths.have_value)
                  {
                    result->setEndDeltaMonths(fieldGeneratorEndDeltaMonths.value);
                    fieldGeneratorEndDeltaMonths.have_value = false;
                  }
                else if (!(result->hasEndDeltaMonths()))
                  {
                    error("When parsing the object for %what%, the \"EndDeltaMonths\" field was missing.");
                  }
                if (fieldGeneratorNewFrequencyType.have_value)
                  {
                    result->setNewFrequencyType(fieldGeneratorNewFrequencyType.value);
                    fieldGeneratorNewFrequencyType.have_value = false;
                  }
                else if (!(result->hasNewFrequencyType()))
                  {
                    error("When parsing the object for %what%, the \"NewFrequencyType\" field was missing.");
                  }
                if (fieldGeneratorNewFrequencyMultiplier.have_value)
                  {
                    result->setNewFrequencyMultiplier(fieldGeneratorNewFrequencyMultiplier.value);
                    fieldGeneratorNewFrequencyMultiplier.have_value = false;
                  }
                else if (!(result->hasNewFrequencyMultiplier()))
                  {
                    error("When parsing the object for %what%, the \"NewFrequencyMultiplier\" field was missing.");
                  }
                if (fieldGeneratorSetEventFields.have_value)
                  {
                    result->initSetEventFields();
                    size_t count = fieldGeneratorSetEventFields.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendSetEventFields(fieldGeneratorSetEventFields.value[num].referenced());
                      }
                    fieldGeneratorSetEventFields.value.clear();
                    fieldGeneratorSetEventFields.have_value = false;
                  }
                if (fieldGeneratorAppendEventFields.have_value)
                  {
                    result->initAppendEventFields();
                    size_t count = fieldGeneratorAppendEventFields.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendAppendEventFields(fieldGeneratorAppendEventFields.value[num].referenced());
                      }
                    fieldGeneratorAppendEventFields.value.clear();
                    fieldGeneratorAppendEventFields.have_value = false;
                  }
                if (fieldGeneratorRemoveEventFields.have_value)
                  {
                    result->initRemoveEventFields();
                    size_t count = fieldGeneratorRemoveEventFields.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendRemoveEventFields(fieldGeneratorRemoveEventFields.value[num]);
                      }
                    fieldGeneratorRemoveEventFields.value.clear();
                    fieldGeneratorRemoveEventFields.have_value = false;
                  }
                if (fieldGeneratorAddEventFields.have_value)
                  {
                    result->initAddEventFields();
                    size_t count = fieldGeneratorAddEventFields.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendAddEventFields(fieldGeneratorAddEventFields.value[num].referenced());
                      }
                    fieldGeneratorAddEventFields.value.clear();
                    fieldGeneratorAddEventFields.have_value = false;
                  }
              }
            virtual void handle_result(TypeNativeDataJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'A':
                        switch ((unsigned char)(field_name[1]))
                          {
                            case 'd':
                                if (strcmp(&(field_name[2]), "dEventFields") == 0)
                                    return &fieldGeneratorAddEventFields;
                                break;
                            case 'p':
                                if (strcmp(&(field_name[2]), "pendEventFields") == 0)
                                    return &fieldGeneratorAppendEventFields;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'E':
                        switch ((unsigned char)(field_name[1]))
                          {
                            case 'n':
                                if (strncmp(&(field_name[2]), "dDelta", 6) == 0)
                                  {
                                    switch ((unsigned char)(field_name[8]))
                                      {
                                        case 'D':
                                            if (strcmp(&(field_name[9]), "ays") == 0)
                                                return &fieldGeneratorEndDeltaDays;
                                            break;
                                        case 'M':
                                            if (strcmp(&(field_name[9]), "onths") == 0)
                                                return &fieldGeneratorEndDeltaMonths;
                                            break;
                                        case 'S':
                                            if (strcmp(&(field_name[9]), "econds") == 0)
                                                return &fieldGeneratorEndDeltaSeconds;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'v':
                                if (strcmp(&(field_name[2]), "entIDs") == 0)
                                    return &fieldGeneratorEventIDs;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'N':
                        if (strncmp(&(field_name[1]), "ew", 2) == 0)
                          {
                            switch ((unsigned char)(field_name[3]))
                              {
                                case 'E':
                                    if (strcmp(&(field_name[4]), "nd") == 0)
                                        return &fieldGeneratorNewEnd;
                                    break;
                                case 'F':
                                    if (strncmp(&(field_name[4]), "requency", 8) == 0)
                                      {
                                        switch ((unsigned char)(field_name[12]))
                                          {
                                            case 'M':
                                                if (strcmp(&(field_name[13]), "ultiplier") == 0)
                                                    return &fieldGeneratorNewFrequencyMultiplier;
                                                break;
                                            case 'T':
                                                if (strcmp(&(field_name[13]), "ype") == 0)
                                                    return &fieldGeneratorNewFrequencyType;
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 'I':
                                    if (strcmp(&(field_name[4]), "temType") == 0)
                                        return &fieldGeneratorNewItemType;
                                    break;
                                case 'L':
                                    if (strcmp(&(field_name[4]), "ocation") == 0)
                                        return &fieldGeneratorNewLocation;
                                    break;
                                case 'S':
                                    if (strcmp(&(field_name[4]), "tart") == 0)
                                        return &fieldGeneratorNewStart;
                                    break;
                                case 'T':
                                    if (strcmp(&(field_name[4]), "itle") == 0)
                                        return &fieldGeneratorNewTitle;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'Q':
                        if (strcmp(&(field_name[1]), "uery") == 0)
                            return &fieldGeneratorQuery;
                        break;
                    case 'R':
                        if (strcmp(&(field_name[1]), "emoveEventFields") == 0)
                            return &fieldGeneratorRemoveEventFields;
                        break;
                    case 'S':
                        switch ((unsigned char)(field_name[1]))
                          {
                            case 'e':
                                if (strcmp(&(field_name[2]), "tEventFields") == 0)
                                    return &fieldGeneratorSetEventFields;
                                break;
                            case 't':
                                if (strncmp(&(field_name[2]), "artDelta", 8) == 0)
                                  {
                                    switch ((unsigned char)(field_name[10]))
                                      {
                                        case 'D':
                                            if (strcmp(&(field_name[11]), "ays") == 0)
                                                return &fieldGeneratorStartDeltaDays;
                                            break;
                                        case 'M':
                                            if (strcmp(&(field_name[11]), "onths") == 0)
                                                return &fieldGeneratorStartDeltaMonths;
                                            break;
                                        case 'S':
                                            if (strcmp(&(field_name[11]), "econds") == 0)
                                                return &fieldGeneratorStartDeltaSeconds;
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
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorEventIDs("field \"EventIDs\" of the TypeNativeData class"), fieldGeneratorQuery("field \"Query\" of the TypeNativeData class", ignore_extras), fieldGeneratorNewItemType("field \"NewItemType\" of the TypeNativeData class"), fieldGeneratorNewTitle("field \"NewTitle\" of the TypeNativeData class"), fieldGeneratorNewLocation("field \"NewLocation\" of the TypeNativeData class"), fieldGeneratorNewStart("field \"NewStart\" of the TypeNativeData class", ignore_extras), fieldGeneratorStartDeltaSeconds("field \"StartDeltaSeconds\" of the TypeNativeData class"), fieldGeneratorStartDeltaDays("field \"StartDeltaDays\" of the TypeNativeData class"), fieldGeneratorStartDeltaMonths("field \"StartDeltaMonths\" of the TypeNativeData class"), fieldGeneratorNewEnd("field \"NewEnd\" of the TypeNativeData class", ignore_extras), fieldGeneratorEndDeltaSeconds("field \"EndDeltaSeconds\" of the TypeNativeData class"), fieldGeneratorEndDeltaDays("field \"EndDeltaDays\" of the TypeNativeData class"), fieldGeneratorEndDeltaMonths("field \"EndDeltaMonths\" of the TypeNativeData class"), fieldGeneratorNewFrequencyType("field \"NewFrequencyType\" of the TypeNativeData class"), fieldGeneratorNewFrequencyMultiplier("field \"NewFrequencyMultiplier\" of the TypeNativeData class"), fieldGeneratorSetEventFields("field \"SetEventFields\" of the TypeNativeData class", ignore_extras), fieldGeneratorAppendEventFields("field \"AppendEventFields\" of the TypeNativeData class", ignore_extras), fieldGeneratorRemoveEventFields("field \"RemoveEventFields\" of the TypeNativeData class"), fieldGeneratorAddEventFields("field \"AddEventFields\" of the TypeNativeData class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeNativeData class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorEventIDs.reset();
                fieldGeneratorQuery.reset();
                fieldGeneratorNewItemType.reset();
                fieldGeneratorNewTitle.reset();
                fieldGeneratorNewLocation.reset();
                fieldGeneratorNewStart.reset();
                fieldGeneratorStartDeltaSeconds.reset();
                fieldGeneratorStartDeltaDays.reset();
                fieldGeneratorStartDeltaMonths.reset();
                fieldGeneratorNewEnd.reset();
                fieldGeneratorEndDeltaSeconds.reset();
                fieldGeneratorEndDeltaDays.reset();
                fieldGeneratorEndDeltaMonths.reset();
                fieldGeneratorNewFrequencyType.reset();
                fieldGeneratorNewFrequencyMultiplier.reset();
                fieldGeneratorSetEventFields.reset();
                fieldGeneratorAppendEventFields.reset();
                fieldGeneratorRemoveEventFields.reset();
                fieldGeneratorAddEventFields.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasEventIDs;
    std::vector< std::string > storeEventIDs;
    bool flagHasQuery;
    CalendarQueryJSON * storeQuery;
    bool flagHasNewItemType;
    std::string storeNewItemType;
    bool flagHasNewTitle;
    std::string storeNewTitle;
    bool flagHasNewLocation;
    std::string storeNewLocation;
    bool flagHasNewStart;
    DateAndOrTimeJSON * storeNewStart;
    bool flagHasStartDeltaSeconds;
    double storeStartDeltaSeconds;
    std::string textStoreStartDeltaSeconds;
    bool flagHasStartDeltaDays;
    OInteger storeStartDeltaDays;
    bool flagHasStartDeltaMonths;
    OInteger storeStartDeltaMonths;
    bool flagHasNewEnd;
    DateAndOrTimeJSON * storeNewEnd;
    bool flagHasEndDeltaSeconds;
    double storeEndDeltaSeconds;
    std::string textStoreEndDeltaSeconds;
    bool flagHasEndDeltaDays;
    OInteger storeEndDeltaDays;
    bool flagHasEndDeltaMonths;
    OInteger storeEndDeltaMonths;
    bool flagHasNewFrequencyType;
    TypeNewFrequencyType storeNewFrequencyType;
    bool flagHasNewFrequencyMultiplier;
    OInteger storeNewFrequencyMultiplier;
    bool flagHasSetEventFields;
    std::vector< TypeSetEventFieldsJSON * > storeSetEventFields;
    bool flagHasAppendEventFields;
    std::vector< TypeAppendEventFieldsJSON * > storeAppendEventFields;
    bool flagHasRemoveEventFields;
    std::vector< std::string > storeRemoveEventFields;
    bool flagHasAddEventFields;
    std::vector< TypeAddEventFieldsJSON * > storeAddEventFields;
    bool flagHasNativeData;
    TypeNativeDataJSON * storeNativeData;
    bool flagHasEventsConflictResult;
    DynamicResponseJSON * storeEventsConflictResult;
    bool flagHasCalendarPreferenceIsNotSetResult;
    DynamicResponseJSON * storeCalendarPreferenceIsNotSetResult;
    bool flagHasNoMatchResult;
    DynamicResponseJSON * storeNoMatchResult;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    ModifyCalendarItemCommandJSON(const ModifyCalendarItemCommandJSON &);
    ModifyCalendarItemCommandJSON & operator=(const ModifyCalendarItemCommandJSON &other);

    JSONValue * extraEventIDsToJSON(void) const;
    JSONValue * extraQueryToJSON(void) const;
    JSONValue * extraNewItemTypeToJSON(void) const;
    JSONValue * extraNewTitleToJSON(void) const;
    JSONValue * extraNewLocationToJSON(void) const;
    JSONValue * extraNewStartToJSON(void) const;
    JSONValue * extraStartDeltaSecondsToJSON(void) const;
    JSONValue * extraStartDeltaDaysToJSON(void) const;
    JSONValue * extraStartDeltaMonthsToJSON(void) const;
    JSONValue * extraNewEndToJSON(void) const;
    JSONValue * extraEndDeltaSecondsToJSON(void) const;
    JSONValue * extraEndDeltaDaysToJSON(void) const;
    JSONValue * extraEndDeltaMonthsToJSON(void) const;
    JSONValue * extraNewFrequencyTypeToJSON(void) const;
    JSONValue * extraNewFrequencyMultiplierToJSON(void) const;
    JSONValue * extraSetEventFieldsToJSON(void) const;
    JSONValue * extraAppendEventFieldsToJSON(void) const;
    JSONValue * extraRemoveEventFieldsToJSON(void) const;
    JSONValue * extraAddEventFieldsToJSON(void) const;
    JSONValue * extraNativeDataToJSON(void) const;
    JSONValue * extraEventsConflictResultToJSON(void) const;
    JSONValue * extraCalendarPreferenceIsNotSetResultToJSON(void) const;
    JSONValue * extraNoMatchResultToJSON(void) const;

    void  fromJSONEventIDs(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONQuery(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNewItemType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNewTitle(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNewLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNewStart(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStartDeltaSeconds(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStartDeltaDays(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStartDeltaMonths(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNewEnd(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEndDeltaSeconds(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEndDeltaDays(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEndDeltaMonths(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNewFrequencyType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNewFrequencyMultiplier(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSetEventFields(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAppendEventFields(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRemoveEventFields(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAddEventFields(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEventsConflictResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCalendarPreferenceIsNotSetResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNoMatchResult(JSONValue *json_value, bool ignore_extras = false);


  public:
    ModifyCalendarItemCommandJSON(void);
    virtual ~ModifyCalendarItemCommandJSON(void);
    const char * getCalendarCommandKind(void) const;
    bool  hasEventIDs(void) const;
    size_t  countOfEventIDs(void) const;
    std::string  elementOfEventIDs(size_t element_num);
    const std::string  elementOfEventIDs(size_t element_num) const;
    std::vector< std::string >  getEventIDs(void);
    const std::vector< std::string >  getEventIDs(void) const;
    bool  hasQuery(void) const;
    CalendarQueryJSON *  getQuery(void);
    const CalendarQueryJSON *  getQuery(void) const;
    bool  hasNewItemType(void) const;
    std::string  getNewItemType(void);
    const std::string  getNewItemType(void) const;
    bool  hasNewTitle(void) const;
    std::string  getNewTitle(void);
    const std::string  getNewTitle(void) const;
    bool  hasNewLocation(void) const;
    std::string  getNewLocation(void);
    const std::string  getNewLocation(void) const;
    bool  hasNewStart(void) const;
    DateAndOrTimeJSON *  getNewStart(void);
    const DateAndOrTimeJSON *  getNewStart(void) const;
    bool  hasStartDeltaSeconds(void) const;
    double  getStartDeltaSeconds(void);
    const double  getStartDeltaSeconds(void) const;
    std::string  getStartDeltaSecondsAsText(void) const;
    bool  hasStartDeltaDays(void) const;
    OInteger  getStartDeltaDays(void);
    const OInteger  getStartDeltaDays(void) const;
    bool  hasStartDeltaMonths(void) const;
    OInteger  getStartDeltaMonths(void);
    const OInteger  getStartDeltaMonths(void) const;
    bool  hasNewEnd(void) const;
    DateAndOrTimeJSON *  getNewEnd(void);
    const DateAndOrTimeJSON *  getNewEnd(void) const;
    bool  hasEndDeltaSeconds(void) const;
    double  getEndDeltaSeconds(void);
    const double  getEndDeltaSeconds(void) const;
    std::string  getEndDeltaSecondsAsText(void) const;
    bool  hasEndDeltaDays(void) const;
    OInteger  getEndDeltaDays(void);
    const OInteger  getEndDeltaDays(void) const;
    bool  hasEndDeltaMonths(void) const;
    OInteger  getEndDeltaMonths(void);
    const OInteger  getEndDeltaMonths(void) const;
    bool  hasNewFrequencyType(void) const;
    TypeNewFrequencyType  getNewFrequencyType(void);
    const TypeNewFrequencyType  getNewFrequencyType(void) const;
    const char * getNewFrequencyTypeAsChars(void) const;
    std::string  getNewFrequencyTypeAsString(void) const;
    bool  hasNewFrequencyMultiplier(void) const;
    OInteger  getNewFrequencyMultiplier(void);
    const OInteger  getNewFrequencyMultiplier(void) const;
    bool  hasSetEventFields(void) const;
    size_t  countOfSetEventFields(void) const;
    TypeSetEventFieldsJSON *  elementOfSetEventFields(size_t element_num);
    const TypeSetEventFieldsJSON *  elementOfSetEventFields(size_t element_num) const;
    std::vector< TypeSetEventFieldsJSON * >  getSetEventFields(void);
    const std::vector< TypeSetEventFieldsJSON * >  getSetEventFields(void) const;
    bool  hasAppendEventFields(void) const;
    size_t  countOfAppendEventFields(void) const;
    TypeAppendEventFieldsJSON *  elementOfAppendEventFields(size_t element_num);
    const TypeAppendEventFieldsJSON *  elementOfAppendEventFields(size_t element_num) const;
    std::vector< TypeAppendEventFieldsJSON * >  getAppendEventFields(void);
    const std::vector< TypeAppendEventFieldsJSON * >  getAppendEventFields(void) const;
    bool  hasRemoveEventFields(void) const;
    size_t  countOfRemoveEventFields(void) const;
    std::string  elementOfRemoveEventFields(size_t element_num);
    const std::string  elementOfRemoveEventFields(size_t element_num) const;
    std::vector< std::string >  getRemoveEventFields(void);
    const std::vector< std::string >  getRemoveEventFields(void) const;
    bool  hasAddEventFields(void) const;
    size_t  countOfAddEventFields(void) const;
    TypeAddEventFieldsJSON *  elementOfAddEventFields(size_t element_num);
    const TypeAddEventFieldsJSON *  elementOfAddEventFields(size_t element_num) const;
    std::vector< TypeAddEventFieldsJSON * >  getAddEventFields(void);
    const std::vector< TypeAddEventFieldsJSON * >  getAddEventFields(void) const;
    bool  hasNativeData(void) const;
    TypeNativeDataJSON *  getNativeData(void);
    const TypeNativeDataJSON *  getNativeData(void) const;
    bool  hasEventsConflictResult(void) const;
    DynamicResponseJSON *  getEventsConflictResult(void);
    const DynamicResponseJSON *  getEventsConflictResult(void) const;
    bool  hasCalendarPreferenceIsNotSetResult(void) const;
    DynamicResponseJSON *  getCalendarPreferenceIsNotSetResult(void);
    const DynamicResponseJSON *  getCalendarPreferenceIsNotSetResult(void) const;
    bool  hasNoMatchResult(void) const;
    DynamicResponseJSON *  getNoMatchResult(void);
    const DynamicResponseJSON *  getNoMatchResult(void) const;

    virtual size_t extraModifyCalendarItemCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraModifyCalendarItemCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraModifyCalendarItemCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraModifyCalendarItemCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraModifyCalendarItemCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraModifyCalendarItemCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraCalendarCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasEventIDs)
            ++result;
        if (flagHasQuery)
            ++result;
        if (flagHasNewItemType)
            ++result;
        if (flagHasNewTitle)
            ++result;
        if (flagHasNewLocation)
            ++result;
        if (flagHasNewStart)
            ++result;
        if (flagHasStartDeltaSeconds)
            ++result;
        if (flagHasStartDeltaDays)
            ++result;
        if (flagHasStartDeltaMonths)
            ++result;
        if (flagHasNewEnd)
            ++result;
        if (flagHasEndDeltaSeconds)
            ++result;
        if (flagHasEndDeltaDays)
            ++result;
        if (flagHasEndDeltaMonths)
            ++result;
        if (flagHasNewFrequencyType)
            ++result;
        if (flagHasNewFrequencyMultiplier)
            ++result;
        if (flagHasSetEventFields)
            ++result;
        if (flagHasAppendEventFields)
            ++result;
        if (flagHasRemoveEventFields)
            ++result;
        if (flagHasAddEventFields)
            ++result;
        if (flagHasNativeData)
            ++result;
        if (flagHasEventsConflictResult)
            ++result;
        if (flagHasCalendarPreferenceIsNotSetResult)
            ++result;
        if (flagHasNoMatchResult)
            ++result;
        result += extraModifyCalendarItemCommandComponentCount();
        return result;
      }
    const char *extraCalendarCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasEventIDs)
          {
            if (remainder == 0)
                return "EventIDs";
            --remainder;
          }
        if (flagHasQuery)
          {
            if (remainder == 0)
                return "Query";
            --remainder;
          }
        if (flagHasNewItemType)
          {
            if (remainder == 0)
                return "NewItemType";
            --remainder;
          }
        if (flagHasNewTitle)
          {
            if (remainder == 0)
                return "NewTitle";
            --remainder;
          }
        if (flagHasNewLocation)
          {
            if (remainder == 0)
                return "NewLocation";
            --remainder;
          }
        if (flagHasNewStart)
          {
            if (remainder == 0)
                return "NewStart";
            --remainder;
          }
        if (flagHasStartDeltaSeconds)
          {
            if (remainder == 0)
                return "StartDeltaSeconds";
            --remainder;
          }
        if (flagHasStartDeltaDays)
          {
            if (remainder == 0)
                return "StartDeltaDays";
            --remainder;
          }
        if (flagHasStartDeltaMonths)
          {
            if (remainder == 0)
                return "StartDeltaMonths";
            --remainder;
          }
        if (flagHasNewEnd)
          {
            if (remainder == 0)
                return "NewEnd";
            --remainder;
          }
        if (flagHasEndDeltaSeconds)
          {
            if (remainder == 0)
                return "EndDeltaSeconds";
            --remainder;
          }
        if (flagHasEndDeltaDays)
          {
            if (remainder == 0)
                return "EndDeltaDays";
            --remainder;
          }
        if (flagHasEndDeltaMonths)
          {
            if (remainder == 0)
                return "EndDeltaMonths";
            --remainder;
          }
        if (flagHasNewFrequencyType)
          {
            if (remainder == 0)
                return "NewFrequencyType";
            --remainder;
          }
        if (flagHasNewFrequencyMultiplier)
          {
            if (remainder == 0)
                return "NewFrequencyMultiplier";
            --remainder;
          }
        if (flagHasSetEventFields)
          {
            if (remainder == 0)
                return "SetEventFields";
            --remainder;
          }
        if (flagHasAppendEventFields)
          {
            if (remainder == 0)
                return "AppendEventFields";
            --remainder;
          }
        if (flagHasRemoveEventFields)
          {
            if (remainder == 0)
                return "RemoveEventFields";
            --remainder;
          }
        if (flagHasAddEventFields)
          {
            if (remainder == 0)
                return "AddEventFields";
            --remainder;
          }
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return "NativeData";
            --remainder;
          }
        if (flagHasEventsConflictResult)
          {
            if (remainder == 0)
                return "EventsConflictResult";
            --remainder;
          }
        if (flagHasCalendarPreferenceIsNotSetResult)
          {
            if (remainder == 0)
                return "CalendarPreferenceIsNotSetResult";
            --remainder;
          }
        if (flagHasNoMatchResult)
          {
            if (remainder == 0)
                return "NoMatchResult";
            --remainder;
          }
        return extraModifyCalendarItemCommandComponentKey(remainder);
      }
    JSONValue *extraCalendarCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasEventIDs)
          {
            if (remainder == 0)
                return extraEventIDsToJSON();
            --remainder;
          }
        if (flagHasQuery)
          {
            if (remainder == 0)
                return extraQueryToJSON();
            --remainder;
          }
        if (flagHasNewItemType)
          {
            if (remainder == 0)
                return extraNewItemTypeToJSON();
            --remainder;
          }
        if (flagHasNewTitle)
          {
            if (remainder == 0)
                return extraNewTitleToJSON();
            --remainder;
          }
        if (flagHasNewLocation)
          {
            if (remainder == 0)
                return extraNewLocationToJSON();
            --remainder;
          }
        if (flagHasNewStart)
          {
            if (remainder == 0)
                return extraNewStartToJSON();
            --remainder;
          }
        if (flagHasStartDeltaSeconds)
          {
            if (remainder == 0)
                return extraStartDeltaSecondsToJSON();
            --remainder;
          }
        if (flagHasStartDeltaDays)
          {
            if (remainder == 0)
                return extraStartDeltaDaysToJSON();
            --remainder;
          }
        if (flagHasStartDeltaMonths)
          {
            if (remainder == 0)
                return extraStartDeltaMonthsToJSON();
            --remainder;
          }
        if (flagHasNewEnd)
          {
            if (remainder == 0)
                return extraNewEndToJSON();
            --remainder;
          }
        if (flagHasEndDeltaSeconds)
          {
            if (remainder == 0)
                return extraEndDeltaSecondsToJSON();
            --remainder;
          }
        if (flagHasEndDeltaDays)
          {
            if (remainder == 0)
                return extraEndDeltaDaysToJSON();
            --remainder;
          }
        if (flagHasEndDeltaMonths)
          {
            if (remainder == 0)
                return extraEndDeltaMonthsToJSON();
            --remainder;
          }
        if (flagHasNewFrequencyType)
          {
            if (remainder == 0)
                return extraNewFrequencyTypeToJSON();
            --remainder;
          }
        if (flagHasNewFrequencyMultiplier)
          {
            if (remainder == 0)
                return extraNewFrequencyMultiplierToJSON();
            --remainder;
          }
        if (flagHasSetEventFields)
          {
            if (remainder == 0)
                return extraSetEventFieldsToJSON();
            --remainder;
          }
        if (flagHasAppendEventFields)
          {
            if (remainder == 0)
                return extraAppendEventFieldsToJSON();
            --remainder;
          }
        if (flagHasRemoveEventFields)
          {
            if (remainder == 0)
                return extraRemoveEventFieldsToJSON();
            --remainder;
          }
        if (flagHasAddEventFields)
          {
            if (remainder == 0)
                return extraAddEventFieldsToJSON();
            --remainder;
          }
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        if (flagHasEventsConflictResult)
          {
            if (remainder == 0)
                return extraEventsConflictResultToJSON();
            --remainder;
          }
        if (flagHasCalendarPreferenceIsNotSetResult)
          {
            if (remainder == 0)
                return extraCalendarPreferenceIsNotSetResultToJSON();
            --remainder;
          }
        if (flagHasNoMatchResult)
          {
            if (remainder == 0)
                return extraNoMatchResultToJSON();
            --remainder;
          }
        return extraModifyCalendarItemCommandComponentValue(remainder);
      }
    const JSONValue *extraCalendarCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasEventIDs)
          {
            if (remainder == 0)
                return extraEventIDsToJSON();
            --remainder;
          }
        if (flagHasQuery)
          {
            if (remainder == 0)
                return extraQueryToJSON();
            --remainder;
          }
        if (flagHasNewItemType)
          {
            if (remainder == 0)
                return extraNewItemTypeToJSON();
            --remainder;
          }
        if (flagHasNewTitle)
          {
            if (remainder == 0)
                return extraNewTitleToJSON();
            --remainder;
          }
        if (flagHasNewLocation)
          {
            if (remainder == 0)
                return extraNewLocationToJSON();
            --remainder;
          }
        if (flagHasNewStart)
          {
            if (remainder == 0)
                return extraNewStartToJSON();
            --remainder;
          }
        if (flagHasStartDeltaSeconds)
          {
            if (remainder == 0)
                return extraStartDeltaSecondsToJSON();
            --remainder;
          }
        if (flagHasStartDeltaDays)
          {
            if (remainder == 0)
                return extraStartDeltaDaysToJSON();
            --remainder;
          }
        if (flagHasStartDeltaMonths)
          {
            if (remainder == 0)
                return extraStartDeltaMonthsToJSON();
            --remainder;
          }
        if (flagHasNewEnd)
          {
            if (remainder == 0)
                return extraNewEndToJSON();
            --remainder;
          }
        if (flagHasEndDeltaSeconds)
          {
            if (remainder == 0)
                return extraEndDeltaSecondsToJSON();
            --remainder;
          }
        if (flagHasEndDeltaDays)
          {
            if (remainder == 0)
                return extraEndDeltaDaysToJSON();
            --remainder;
          }
        if (flagHasEndDeltaMonths)
          {
            if (remainder == 0)
                return extraEndDeltaMonthsToJSON();
            --remainder;
          }
        if (flagHasNewFrequencyType)
          {
            if (remainder == 0)
                return extraNewFrequencyTypeToJSON();
            --remainder;
          }
        if (flagHasNewFrequencyMultiplier)
          {
            if (remainder == 0)
                return extraNewFrequencyMultiplierToJSON();
            --remainder;
          }
        if (flagHasSetEventFields)
          {
            if (remainder == 0)
                return extraSetEventFieldsToJSON();
            --remainder;
          }
        if (flagHasAppendEventFields)
          {
            if (remainder == 0)
                return extraAppendEventFieldsToJSON();
            --remainder;
          }
        if (flagHasRemoveEventFields)
          {
            if (remainder == 0)
                return extraRemoveEventFieldsToJSON();
            --remainder;
          }
        if (flagHasAddEventFields)
          {
            if (remainder == 0)
                return extraAddEventFieldsToJSON();
            --remainder;
          }
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        if (flagHasEventsConflictResult)
          {
            if (remainder == 0)
                return extraEventsConflictResultToJSON();
            --remainder;
          }
        if (flagHasCalendarPreferenceIsNotSetResult)
          {
            if (remainder == 0)
                return extraCalendarPreferenceIsNotSetResultToJSON();
            --remainder;
          }
        if (flagHasNoMatchResult)
          {
            if (remainder == 0)
                return extraNoMatchResultToJSON();
            --remainder;
          }
        return extraModifyCalendarItemCommandComponentValue(remainder);
      }
    JSONValue *extraCalendarCommandLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'd':
                        if (strcmp(&(field_name[2]), "dEventFields") == 0)
                            return (flagHasAddEventFields ? extraAddEventFieldsToJSON() : NULL);
                        break;
                    case 'p':
                        if (strcmp(&(field_name[2]), "pendEventFields") == 0)
                            return (flagHasAppendEventFields ? extraAppendEventFieldsToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'C':
                if (strcmp(&(field_name[1]), "alendarPreferenceIsNotSetResult") == 0)
                    return (flagHasCalendarPreferenceIsNotSetResult ? extraCalendarPreferenceIsNotSetResultToJSON() : NULL);
                break;
            case 'E':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'n':
                        if (strncmp(&(field_name[2]), "dDelta", 6) == 0)
                          {
                            switch ((unsigned char)(field_name[8]))
                              {
                                case 'D':
                                    if (strcmp(&(field_name[9]), "ays") == 0)
                                        return (flagHasEndDeltaDays ? extraEndDeltaDaysToJSON() : NULL);
                                    break;
                                case 'M':
                                    if (strcmp(&(field_name[9]), "onths") == 0)
                                        return (flagHasEndDeltaMonths ? extraEndDeltaMonthsToJSON() : NULL);
                                    break;
                                case 'S':
                                    if (strcmp(&(field_name[9]), "econds") == 0)
                                        return (flagHasEndDeltaSeconds ? extraEndDeltaSecondsToJSON() : NULL);
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'v':
                        if (strncmp(&(field_name[2]), "ent", 3) == 0)
                          {
                            switch ((unsigned char)(field_name[5]))
                              {
                                case 'I':
                                    if (strcmp(&(field_name[6]), "Ds") == 0)
                                        return (flagHasEventIDs ? extraEventIDsToJSON() : NULL);
                                    break;
                                case 's':
                                    if (strcmp(&(field_name[6]), "ConflictResult") == 0)
                                        return (flagHasEventsConflictResult ? extraEventsConflictResultToJSON() : NULL);
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
            case 'N':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'a':
                        if (strcmp(&(field_name[2]), "tiveData") == 0)
                            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
                        break;
                    case 'e':
                        if (strncmp(&(field_name[2]), "w", 1) == 0)
                          {
                            switch ((unsigned char)(field_name[3]))
                              {
                                case 'E':
                                    if (strcmp(&(field_name[4]), "nd") == 0)
                                        return (flagHasNewEnd ? extraNewEndToJSON() : NULL);
                                    break;
                                case 'F':
                                    if (strncmp(&(field_name[4]), "requency", 8) == 0)
                                      {
                                        switch ((unsigned char)(field_name[12]))
                                          {
                                            case 'M':
                                                if (strcmp(&(field_name[13]), "ultiplier") == 0)
                                                    return (flagHasNewFrequencyMultiplier ? extraNewFrequencyMultiplierToJSON() : NULL);
                                                break;
                                            case 'T':
                                                if (strcmp(&(field_name[13]), "ype") == 0)
                                                    return (flagHasNewFrequencyType ? extraNewFrequencyTypeToJSON() : NULL);
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 'I':
                                    if (strcmp(&(field_name[4]), "temType") == 0)
                                        return (flagHasNewItemType ? extraNewItemTypeToJSON() : NULL);
                                    break;
                                case 'L':
                                    if (strcmp(&(field_name[4]), "ocation") == 0)
                                        return (flagHasNewLocation ? extraNewLocationToJSON() : NULL);
                                    break;
                                case 'S':
                                    if (strcmp(&(field_name[4]), "tart") == 0)
                                        return (flagHasNewStart ? extraNewStartToJSON() : NULL);
                                    break;
                                case 'T':
                                    if (strcmp(&(field_name[4]), "itle") == 0)
                                        return (flagHasNewTitle ? extraNewTitleToJSON() : NULL);
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'o':
                        if (strcmp(&(field_name[2]), "MatchResult") == 0)
                            return (flagHasNoMatchResult ? extraNoMatchResultToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'Q':
                if (strcmp(&(field_name[1]), "uery") == 0)
                    return (flagHasQuery ? extraQueryToJSON() : NULL);
                break;
            case 'R':
                if (strcmp(&(field_name[1]), "emoveEventFields") == 0)
                    return (flagHasRemoveEventFields ? extraRemoveEventFieldsToJSON() : NULL);
                break;
            case 'S':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'e':
                        if (strcmp(&(field_name[2]), "tEventFields") == 0)
                            return (flagHasSetEventFields ? extraSetEventFieldsToJSON() : NULL);
                        break;
                    case 't':
                        if (strncmp(&(field_name[2]), "artDelta", 8) == 0)
                          {
                            switch ((unsigned char)(field_name[10]))
                              {
                                case 'D':
                                    if (strcmp(&(field_name[11]), "ays") == 0)
                                        return (flagHasStartDeltaDays ? extraStartDeltaDaysToJSON() : NULL);
                                    break;
                                case 'M':
                                    if (strcmp(&(field_name[11]), "onths") == 0)
                                        return (flagHasStartDeltaMonths ? extraStartDeltaMonthsToJSON() : NULL);
                                    break;
                                case 'S':
                                    if (strcmp(&(field_name[11]), "econds") == 0)
                                        return (flagHasStartDeltaSeconds ? extraStartDeltaSecondsToJSON() : NULL);
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
        return extraModifyCalendarItemCommandLookup(field_name);
      }
    const JSONValue *extraCalendarCommandLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'd':
                        if (strcmp(&(field_name[2]), "dEventFields") == 0)
                            return (flagHasAddEventFields ? extraAddEventFieldsToJSON() : NULL);
                        break;
                    case 'p':
                        if (strcmp(&(field_name[2]), "pendEventFields") == 0)
                            return (flagHasAppendEventFields ? extraAppendEventFieldsToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'C':
                if (strcmp(&(field_name[1]), "alendarPreferenceIsNotSetResult") == 0)
                    return (flagHasCalendarPreferenceIsNotSetResult ? extraCalendarPreferenceIsNotSetResultToJSON() : NULL);
                break;
            case 'E':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'n':
                        if (strncmp(&(field_name[2]), "dDelta", 6) == 0)
                          {
                            switch ((unsigned char)(field_name[8]))
                              {
                                case 'D':
                                    if (strcmp(&(field_name[9]), "ays") == 0)
                                        return (flagHasEndDeltaDays ? extraEndDeltaDaysToJSON() : NULL);
                                    break;
                                case 'M':
                                    if (strcmp(&(field_name[9]), "onths") == 0)
                                        return (flagHasEndDeltaMonths ? extraEndDeltaMonthsToJSON() : NULL);
                                    break;
                                case 'S':
                                    if (strcmp(&(field_name[9]), "econds") == 0)
                                        return (flagHasEndDeltaSeconds ? extraEndDeltaSecondsToJSON() : NULL);
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'v':
                        if (strncmp(&(field_name[2]), "ent", 3) == 0)
                          {
                            switch ((unsigned char)(field_name[5]))
                              {
                                case 'I':
                                    if (strcmp(&(field_name[6]), "Ds") == 0)
                                        return (flagHasEventIDs ? extraEventIDsToJSON() : NULL);
                                    break;
                                case 's':
                                    if (strcmp(&(field_name[6]), "ConflictResult") == 0)
                                        return (flagHasEventsConflictResult ? extraEventsConflictResultToJSON() : NULL);
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
            case 'N':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'a':
                        if (strcmp(&(field_name[2]), "tiveData") == 0)
                            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
                        break;
                    case 'e':
                        if (strncmp(&(field_name[2]), "w", 1) == 0)
                          {
                            switch ((unsigned char)(field_name[3]))
                              {
                                case 'E':
                                    if (strcmp(&(field_name[4]), "nd") == 0)
                                        return (flagHasNewEnd ? extraNewEndToJSON() : NULL);
                                    break;
                                case 'F':
                                    if (strncmp(&(field_name[4]), "requency", 8) == 0)
                                      {
                                        switch ((unsigned char)(field_name[12]))
                                          {
                                            case 'M':
                                                if (strcmp(&(field_name[13]), "ultiplier") == 0)
                                                    return (flagHasNewFrequencyMultiplier ? extraNewFrequencyMultiplierToJSON() : NULL);
                                                break;
                                            case 'T':
                                                if (strcmp(&(field_name[13]), "ype") == 0)
                                                    return (flagHasNewFrequencyType ? extraNewFrequencyTypeToJSON() : NULL);
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 'I':
                                    if (strcmp(&(field_name[4]), "temType") == 0)
                                        return (flagHasNewItemType ? extraNewItemTypeToJSON() : NULL);
                                    break;
                                case 'L':
                                    if (strcmp(&(field_name[4]), "ocation") == 0)
                                        return (flagHasNewLocation ? extraNewLocationToJSON() : NULL);
                                    break;
                                case 'S':
                                    if (strcmp(&(field_name[4]), "tart") == 0)
                                        return (flagHasNewStart ? extraNewStartToJSON() : NULL);
                                    break;
                                case 'T':
                                    if (strcmp(&(field_name[4]), "itle") == 0)
                                        return (flagHasNewTitle ? extraNewTitleToJSON() : NULL);
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'o':
                        if (strcmp(&(field_name[2]), "MatchResult") == 0)
                            return (flagHasNoMatchResult ? extraNoMatchResultToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'Q':
                if (strcmp(&(field_name[1]), "uery") == 0)
                    return (flagHasQuery ? extraQueryToJSON() : NULL);
                break;
            case 'R':
                if (strcmp(&(field_name[1]), "emoveEventFields") == 0)
                    return (flagHasRemoveEventFields ? extraRemoveEventFieldsToJSON() : NULL);
                break;
            case 'S':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'e':
                        if (strcmp(&(field_name[2]), "tEventFields") == 0)
                            return (flagHasSetEventFields ? extraSetEventFieldsToJSON() : NULL);
                        break;
                    case 't':
                        if (strncmp(&(field_name[2]), "artDelta", 8) == 0)
                          {
                            switch ((unsigned char)(field_name[10]))
                              {
                                case 'D':
                                    if (strcmp(&(field_name[11]), "ays") == 0)
                                        return (flagHasStartDeltaDays ? extraStartDeltaDaysToJSON() : NULL);
                                    break;
                                case 'M':
                                    if (strcmp(&(field_name[11]), "onths") == 0)
                                        return (flagHasStartDeltaMonths ? extraStartDeltaMonthsToJSON() : NULL);
                                    break;
                                case 'S':
                                    if (strcmp(&(field_name[11]), "econds") == 0)
                                        return (flagHasStartDeltaSeconds ? extraStartDeltaSecondsToJSON() : NULL);
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
        return extraModifyCalendarItemCommandLookup(field_name);
      }

    void initEventIDs(void)
      {
        flagHasEventIDs = true;
        storeEventIDs.clear();
      }
    void appendEventIDs(std::string to_append)
      {
        if (!flagHasEventIDs)
          {
            flagHasEventIDs = true;
            storeEventIDs.clear();
          }
        assert(flagHasEventIDs);
        storeEventIDs.push_back(to_append);
      }
    void unsetEventIDs(void)
      {
        flagHasEventIDs = false;
        storeEventIDs.clear();
      }
    void setQuery(CalendarQueryJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasQuery)
          {
            storeQuery->remove_reference();
          }
        flagHasQuery = true;
        storeQuery = new_value;
      }
    void unsetQuery(void)
      {
        if (flagHasQuery)
          {
            storeQuery->remove_reference();
          }
        flagHasQuery = false;
      }
    void setNewItemType(std::string new_value)
      {
        flagHasNewItemType = true;
        storeNewItemType = new_value;
      }
    void unsetNewItemType(void)
      {
        flagHasNewItemType = false;
      }
    void setNewTitle(std::string new_value)
      {
        flagHasNewTitle = true;
        storeNewTitle = new_value;
      }
    void unsetNewTitle(void)
      {
        flagHasNewTitle = false;
      }
    void setNewLocation(std::string new_value)
      {
        flagHasNewLocation = true;
        storeNewLocation = new_value;
      }
    void unsetNewLocation(void)
      {
        flagHasNewLocation = false;
      }
    void setNewStart(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasNewStart)
          {
            storeNewStart->remove_reference();
          }
        flagHasNewStart = true;
        storeNewStart = new_value;
      }
    void unsetNewStart(void)
      {
        if (flagHasNewStart)
          {
            storeNewStart->remove_reference();
          }
        flagHasNewStart = false;
      }
    void setStartDeltaSeconds(double new_value)
      {
        flagHasStartDeltaSeconds = true;
        storeStartDeltaSeconds = new_value;
        textStoreStartDeltaSeconds = "";
      }
    void setStartDeltaSecondsText(std::string new_value)
      {
        flagHasStartDeltaSeconds = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field StartDeltaSeconds of ModifyCalendarItemCommandJSON is not a valid number.");
        textStoreStartDeltaSeconds = new_value;
      }
    void unsetStartDeltaSeconds(void)
      {
        flagHasStartDeltaSeconds = false;
      }
    void setStartDeltaDays(OInteger new_value)
      {
        flagHasStartDeltaDays = true;
        if (new_value < 0)
            throw("The value for field StartDeltaDays of ModifyCalendarItemCommandJSON is less than the lower bound (0) for that field.");
        storeStartDeltaDays = new_value;
      }
    void unsetStartDeltaDays(void)
      {
        flagHasStartDeltaDays = false;
      }
    void setStartDeltaMonths(OInteger new_value)
      {
        flagHasStartDeltaMonths = true;
        if (new_value < 0)
            throw("The value for field StartDeltaMonths of ModifyCalendarItemCommandJSON is less than the lower bound (0) for that field.");
        storeStartDeltaMonths = new_value;
      }
    void unsetStartDeltaMonths(void)
      {
        flagHasStartDeltaMonths = false;
      }
    void setNewEnd(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasNewEnd)
          {
            storeNewEnd->remove_reference();
          }
        flagHasNewEnd = true;
        storeNewEnd = new_value;
      }
    void unsetNewEnd(void)
      {
        if (flagHasNewEnd)
          {
            storeNewEnd->remove_reference();
          }
        flagHasNewEnd = false;
      }
    void setEndDeltaSeconds(double new_value)
      {
        flagHasEndDeltaSeconds = true;
        storeEndDeltaSeconds = new_value;
        textStoreEndDeltaSeconds = "";
      }
    void setEndDeltaSecondsText(std::string new_value)
      {
        flagHasEndDeltaSeconds = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field EndDeltaSeconds of ModifyCalendarItemCommandJSON is not a valid number.");
        textStoreEndDeltaSeconds = new_value;
      }
    void unsetEndDeltaSeconds(void)
      {
        flagHasEndDeltaSeconds = false;
      }
    void setEndDeltaDays(OInteger new_value)
      {
        flagHasEndDeltaDays = true;
        if (new_value < 0)
            throw("The value for field EndDeltaDays of ModifyCalendarItemCommandJSON is less than the lower bound (0) for that field.");
        storeEndDeltaDays = new_value;
      }
    void unsetEndDeltaDays(void)
      {
        flagHasEndDeltaDays = false;
      }
    void setEndDeltaMonths(OInteger new_value)
      {
        flagHasEndDeltaMonths = true;
        if (new_value < 0)
            throw("The value for field EndDeltaMonths of ModifyCalendarItemCommandJSON is less than the lower bound (0) for that field.");
        storeEndDeltaMonths = new_value;
      }
    void unsetEndDeltaMonths(void)
      {
        flagHasEndDeltaMonths = false;
      }
    void setNewFrequencyType(TypeNewFrequencyType new_value)
      {
        flagHasNewFrequencyType = true;
        storeNewFrequencyType = new_value;
      }
    void setNewFrequencyType(const char *chars)
      {
        setNewFrequencyType(stringToNewFrequencyType(chars));
      }
    void setNewFrequencyType(std::string the_string)
      {
        setNewFrequencyType(stringToNewFrequencyType(the_string.c_str()));
      }
    void unsetNewFrequencyType(void)
      {
        flagHasNewFrequencyType = false;
      }
    void setNewFrequencyMultiplier(OInteger new_value)
      {
        flagHasNewFrequencyMultiplier = true;
        if (new_value < 0)
            throw("The value for field NewFrequencyMultiplier of ModifyCalendarItemCommandJSON is less than the lower bound (0) for that field.");
        storeNewFrequencyMultiplier = new_value;
      }
    void unsetNewFrequencyMultiplier(void)
      {
        flagHasNewFrequencyMultiplier = false;
      }
    void initSetEventFields(void)
      {
        if (flagHasSetEventFields)
          {
            for (size_t num19 = 0; num19 < storeSetEventFields.size(); ++num19)
              {
                storeSetEventFields[num19]->remove_reference();
              }
          }
        flagHasSetEventFields = true;
        storeSetEventFields.clear();
      }
    void appendSetEventFields(TypeSetEventFieldsJSON * to_append)
      {
        if (!flagHasSetEventFields)
          {
            flagHasSetEventFields = true;
            storeSetEventFields.clear();
          }
        assert(flagHasSetEventFields);
        to_append->add_reference();
        storeSetEventFields.push_back(to_append);
      }
    void unsetSetEventFields(void)
      {
        if (flagHasSetEventFields)
          {
            for (size_t num20 = 0; num20 < storeSetEventFields.size(); ++num20)
              {
                storeSetEventFields[num20]->remove_reference();
              }
          }
        flagHasSetEventFields = false;
        storeSetEventFields.clear();
      }
    void initAppendEventFields(void)
      {
        if (flagHasAppendEventFields)
          {
            for (size_t num21 = 0; num21 < storeAppendEventFields.size(); ++num21)
              {
                storeAppendEventFields[num21]->remove_reference();
              }
          }
        flagHasAppendEventFields = true;
        storeAppendEventFields.clear();
      }
    void appendAppendEventFields(TypeAppendEventFieldsJSON * to_append)
      {
        if (!flagHasAppendEventFields)
          {
            flagHasAppendEventFields = true;
            storeAppendEventFields.clear();
          }
        assert(flagHasAppendEventFields);
        to_append->add_reference();
        storeAppendEventFields.push_back(to_append);
      }
    void unsetAppendEventFields(void)
      {
        if (flagHasAppendEventFields)
          {
            for (size_t num22 = 0; num22 < storeAppendEventFields.size(); ++num22)
              {
                storeAppendEventFields[num22]->remove_reference();
              }
          }
        flagHasAppendEventFields = false;
        storeAppendEventFields.clear();
      }
    void initRemoveEventFields(void)
      {
        flagHasRemoveEventFields = true;
        storeRemoveEventFields.clear();
      }
    void appendRemoveEventFields(std::string to_append)
      {
        if (!flagHasRemoveEventFields)
          {
            flagHasRemoveEventFields = true;
            storeRemoveEventFields.clear();
          }
        assert(flagHasRemoveEventFields);
        storeRemoveEventFields.push_back(to_append);
      }
    void unsetRemoveEventFields(void)
      {
        flagHasRemoveEventFields = false;
        storeRemoveEventFields.clear();
      }
    void initAddEventFields(void)
      {
        if (flagHasAddEventFields)
          {
            for (size_t num23 = 0; num23 < storeAddEventFields.size(); ++num23)
              {
                storeAddEventFields[num23]->remove_reference();
              }
          }
        flagHasAddEventFields = true;
        storeAddEventFields.clear();
      }
    void appendAddEventFields(TypeAddEventFieldsJSON * to_append)
      {
        if (!flagHasAddEventFields)
          {
            flagHasAddEventFields = true;
            storeAddEventFields.clear();
          }
        assert(flagHasAddEventFields);
        to_append->add_reference();
        storeAddEventFields.push_back(to_append);
      }
    void unsetAddEventFields(void)
      {
        if (flagHasAddEventFields)
          {
            for (size_t num24 = 0; num24 < storeAddEventFields.size(); ++num24)
              {
                storeAddEventFields[num24]->remove_reference();
              }
          }
        flagHasAddEventFields = false;
        storeAddEventFields.clear();
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
    void setEventsConflictResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasEventsConflictResult)
          {
            storeEventsConflictResult->remove_reference();
          }
        flagHasEventsConflictResult = true;
        storeEventsConflictResult = new_value;
      }
    void unsetEventsConflictResult(void)
      {
        if (flagHasEventsConflictResult)
          {
            storeEventsConflictResult->remove_reference();
          }
        flagHasEventsConflictResult = false;
      }
    void setCalendarPreferenceIsNotSetResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasCalendarPreferenceIsNotSetResult)
          {
            storeCalendarPreferenceIsNotSetResult->remove_reference();
          }
        flagHasCalendarPreferenceIsNotSetResult = true;
        storeCalendarPreferenceIsNotSetResult = new_value;
      }
    void unsetCalendarPreferenceIsNotSetResult(void)
      {
        if (flagHasCalendarPreferenceIsNotSetResult)
          {
            storeCalendarPreferenceIsNotSetResult->remove_reference();
          }
        flagHasCalendarPreferenceIsNotSetResult = false;
      }
    void setNoMatchResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasNoMatchResult)
          {
            storeNoMatchResult->remove_reference();
          }
        flagHasNoMatchResult = true;
        storeNoMatchResult = new_value;
      }
    void unsetNoMatchResult(void)
      {
        if (flagHasNoMatchResult)
          {
            storeNoMatchResult->remove_reference();
          }
        flagHasNoMatchResult = false;
      }

    virtual void extraModifyCalendarItemCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraModifyCalendarItemCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraModifyCalendarItemCommandLookup(key);
        if (old_field == NULL)
          {
            extraModifyCalendarItemCommandAppendPair(key, new_component);
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
    void extraCalendarCommandAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                switch ((unsigned char)(key[1]))
                  {
                    case 'd':
                        if (strcmp(&(key[2]), "dEventFields") == 0)
                            {
                            fromJSONAddEventFields(new_component, false);
                            return;
                            }
                        break;
                    case 'p':
                        if (strcmp(&(key[2]), "pendEventFields") == 0)
                            {
                            fromJSONAppendEventFields(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'C':
                if (strcmp(&(key[1]), "alendarPreferenceIsNotSetResult") == 0)
                    {
                    fromJSONCalendarPreferenceIsNotSetResult(new_component, false);
                    return;
                    }
                break;
            case 'E':
                switch ((unsigned char)(key[1]))
                  {
                    case 'n':
                        if (strncmp(&(key[2]), "dDelta", 6) == 0)
                          {
                            switch ((unsigned char)(key[8]))
                              {
                                case 'D':
                                    if (strcmp(&(key[9]), "ays") == 0)
                                        {
                                        fromJSONEndDeltaDays(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'M':
                                    if (strcmp(&(key[9]), "onths") == 0)
                                        {
                                        fromJSONEndDeltaMonths(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'S':
                                    if (strcmp(&(key[9]), "econds") == 0)
                                        {
                                        fromJSONEndDeltaSeconds(new_component, false);
                                        return;
                                        }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'v':
                        if (strncmp(&(key[2]), "ent", 3) == 0)
                          {
                            switch ((unsigned char)(key[5]))
                              {
                                case 'I':
                                    if (strcmp(&(key[6]), "Ds") == 0)
                                        {
                                        fromJSONEventIDs(new_component, false);
                                        return;
                                        }
                                    break;
                                case 's':
                                    if (strcmp(&(key[6]), "ConflictResult") == 0)
                                        {
                                        fromJSONEventsConflictResult(new_component, false);
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
                break;
            case 'N':
                switch ((unsigned char)(key[1]))
                  {
                    case 'a':
                        if (strcmp(&(key[2]), "tiveData") == 0)
                            {
                            fromJSONNativeData(new_component, false);
                            return;
                            }
                        break;
                    case 'e':
                        if (strncmp(&(key[2]), "w", 1) == 0)
                          {
                            switch ((unsigned char)(key[3]))
                              {
                                case 'E':
                                    if (strcmp(&(key[4]), "nd") == 0)
                                        {
                                        fromJSONNewEnd(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'F':
                                    if (strncmp(&(key[4]), "requency", 8) == 0)
                                      {
                                        switch ((unsigned char)(key[12]))
                                          {
                                            case 'M':
                                                if (strcmp(&(key[13]), "ultiplier") == 0)
                                                    {
                                                    fromJSONNewFrequencyMultiplier(new_component, false);
                                                    return;
                                                    }
                                                break;
                                            case 'T':
                                                if (strcmp(&(key[13]), "ype") == 0)
                                                    {
                                                    fromJSONNewFrequencyType(new_component, false);
                                                    return;
                                                    }
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 'I':
                                    if (strcmp(&(key[4]), "temType") == 0)
                                        {
                                        fromJSONNewItemType(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'L':
                                    if (strcmp(&(key[4]), "ocation") == 0)
                                        {
                                        fromJSONNewLocation(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'S':
                                    if (strcmp(&(key[4]), "tart") == 0)
                                        {
                                        fromJSONNewStart(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'T':
                                    if (strcmp(&(key[4]), "itle") == 0)
                                        {
                                        fromJSONNewTitle(new_component, false);
                                        return;
                                        }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'o':
                        if (strcmp(&(key[2]), "MatchResult") == 0)
                            {
                            fromJSONNoMatchResult(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'Q':
                if (strcmp(&(key[1]), "uery") == 0)
                    {
                    fromJSONQuery(new_component, false);
                    return;
                    }
                break;
            case 'R':
                if (strcmp(&(key[1]), "emoveEventFields") == 0)
                    {
                    fromJSONRemoveEventFields(new_component, false);
                    return;
                    }
                break;
            case 'S':
                switch ((unsigned char)(key[1]))
                  {
                    case 'e':
                        if (strcmp(&(key[2]), "tEventFields") == 0)
                            {
                            fromJSONSetEventFields(new_component, false);
                            return;
                            }
                        break;
                    case 't':
                        if (strncmp(&(key[2]), "artDelta", 8) == 0)
                          {
                            switch ((unsigned char)(key[10]))
                              {
                                case 'D':
                                    if (strcmp(&(key[11]), "ays") == 0)
                                        {
                                        fromJSONStartDeltaDays(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'M':
                                    if (strcmp(&(key[11]), "onths") == 0)
                                        {
                                        fromJSONStartDeltaMonths(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'S':
                                    if (strcmp(&(key[11]), "econds") == 0)
                                        {
                                        fromJSONStartDeltaSeconds(new_component, false);
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
                break;
            default:
                break;
          }
        extraModifyCalendarItemCommandAppendPair(key, new_component);
      }
    void extraCalendarCommandSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                switch ((unsigned char)(key[1]))
                  {
                    case 'd':
                        if (strcmp(&(key[2]), "dEventFields") == 0)
                            {
                            fromJSONAddEventFields(new_component, false);
                            return;
                            }
                        break;
                    case 'p':
                        if (strcmp(&(key[2]), "pendEventFields") == 0)
                            {
                            fromJSONAppendEventFields(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'C':
                if (strcmp(&(key[1]), "alendarPreferenceIsNotSetResult") == 0)
                    {
                    fromJSONCalendarPreferenceIsNotSetResult(new_component, false);
                    return;
                    }
                break;
            case 'E':
                switch ((unsigned char)(key[1]))
                  {
                    case 'n':
                        if (strncmp(&(key[2]), "dDelta", 6) == 0)
                          {
                            switch ((unsigned char)(key[8]))
                              {
                                case 'D':
                                    if (strcmp(&(key[9]), "ays") == 0)
                                        {
                                        fromJSONEndDeltaDays(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'M':
                                    if (strcmp(&(key[9]), "onths") == 0)
                                        {
                                        fromJSONEndDeltaMonths(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'S':
                                    if (strcmp(&(key[9]), "econds") == 0)
                                        {
                                        fromJSONEndDeltaSeconds(new_component, false);
                                        return;
                                        }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'v':
                        if (strncmp(&(key[2]), "ent", 3) == 0)
                          {
                            switch ((unsigned char)(key[5]))
                              {
                                case 'I':
                                    if (strcmp(&(key[6]), "Ds") == 0)
                                        {
                                        fromJSONEventIDs(new_component, false);
                                        return;
                                        }
                                    break;
                                case 's':
                                    if (strcmp(&(key[6]), "ConflictResult") == 0)
                                        {
                                        fromJSONEventsConflictResult(new_component, false);
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
                break;
            case 'N':
                switch ((unsigned char)(key[1]))
                  {
                    case 'a':
                        if (strcmp(&(key[2]), "tiveData") == 0)
                            {
                            fromJSONNativeData(new_component, false);
                            return;
                            }
                        break;
                    case 'e':
                        if (strncmp(&(key[2]), "w", 1) == 0)
                          {
                            switch ((unsigned char)(key[3]))
                              {
                                case 'E':
                                    if (strcmp(&(key[4]), "nd") == 0)
                                        {
                                        fromJSONNewEnd(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'F':
                                    if (strncmp(&(key[4]), "requency", 8) == 0)
                                      {
                                        switch ((unsigned char)(key[12]))
                                          {
                                            case 'M':
                                                if (strcmp(&(key[13]), "ultiplier") == 0)
                                                    {
                                                    fromJSONNewFrequencyMultiplier(new_component, false);
                                                    return;
                                                    }
                                                break;
                                            case 'T':
                                                if (strcmp(&(key[13]), "ype") == 0)
                                                    {
                                                    fromJSONNewFrequencyType(new_component, false);
                                                    return;
                                                    }
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 'I':
                                    if (strcmp(&(key[4]), "temType") == 0)
                                        {
                                        fromJSONNewItemType(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'L':
                                    if (strcmp(&(key[4]), "ocation") == 0)
                                        {
                                        fromJSONNewLocation(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'S':
                                    if (strcmp(&(key[4]), "tart") == 0)
                                        {
                                        fromJSONNewStart(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'T':
                                    if (strcmp(&(key[4]), "itle") == 0)
                                        {
                                        fromJSONNewTitle(new_component, false);
                                        return;
                                        }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'o':
                        if (strcmp(&(key[2]), "MatchResult") == 0)
                            {
                            fromJSONNoMatchResult(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'Q':
                if (strcmp(&(key[1]), "uery") == 0)
                    {
                    fromJSONQuery(new_component, false);
                    return;
                    }
                break;
            case 'R':
                if (strcmp(&(key[1]), "emoveEventFields") == 0)
                    {
                    fromJSONRemoveEventFields(new_component, false);
                    return;
                    }
                break;
            case 'S':
                switch ((unsigned char)(key[1]))
                  {
                    case 'e':
                        if (strcmp(&(key[2]), "tEventFields") == 0)
                            {
                            fromJSONSetEventFields(new_component, false);
                            return;
                            }
                        break;
                    case 't':
                        if (strncmp(&(key[2]), "artDelta", 8) == 0)
                          {
                            switch ((unsigned char)(key[10]))
                              {
                                case 'D':
                                    if (strcmp(&(key[11]), "ays") == 0)
                                        {
                                        fromJSONStartDeltaDays(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'M':
                                    if (strcmp(&(key[11]), "onths") == 0)
                                        {
                                        fromJSONStartDeltaMonths(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'S':
                                    if (strcmp(&(key[11]), "econds") == 0)
                                        {
                                        fromJSONStartDeltaSeconds(new_component, false);
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
                break;
            default:
                break;
          }
        extraModifyCalendarItemCommandSetField(key, new_component);
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
        CalendarCommandJSON::write_fields_as_json(handler);
        if (flagHasEventIDs)
          {
            handler->start_pair("EventIDs");
            assert(storeEventIDs.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeEventIDs.size(); ++num1)
              {
                handler->string_value(storeEventIDs[num1]);
              }
            handler->finish_array();
          }
        if (flagHasQuery)
          {
            handler->start_pair("Query");
            storeQuery->write_as_json(handler);
          }
        assert(flagHasNewItemType);
        handler->start_pair("NewItemType");
        handler->string_value(storeNewItemType);
        assert(flagHasNewTitle);
        handler->start_pair("NewTitle");
        handler->string_value(storeNewTitle);
        assert(flagHasNewLocation);
        handler->start_pair("NewLocation");
        handler->string_value(storeNewLocation);
        assert(flagHasNewStart);
        handler->start_pair("NewStart");
        storeNewStart->write_as_json(handler);
        assert(flagHasStartDeltaSeconds);
        handler->start_pair("StartDeltaSeconds");
        if (textStoreStartDeltaSeconds != "")
            handler->number_value(textStoreStartDeltaSeconds.c_str());
        else if (((double)(long int)storeStartDeltaSeconds) == storeStartDeltaSeconds)
            handler->number_value((long int)storeStartDeltaSeconds);
        else
            handler->number_value(storeStartDeltaSeconds);
        assert(flagHasStartDeltaDays);
        handler->start_pair("StartDeltaDays");
        handler->number_value(storeStartDeltaDays.get_o_integer());
        assert(flagHasStartDeltaMonths);
        handler->start_pair("StartDeltaMonths");
        handler->number_value(storeStartDeltaMonths.get_o_integer());
        assert(flagHasNewEnd);
        handler->start_pair("NewEnd");
        storeNewEnd->write_as_json(handler);
        assert(flagHasEndDeltaSeconds);
        handler->start_pair("EndDeltaSeconds");
        if (textStoreEndDeltaSeconds != "")
            handler->number_value(textStoreEndDeltaSeconds.c_str());
        else if (((double)(long int)storeEndDeltaSeconds) == storeEndDeltaSeconds)
            handler->number_value((long int)storeEndDeltaSeconds);
        else
            handler->number_value(storeEndDeltaSeconds);
        assert(flagHasEndDeltaDays);
        handler->start_pair("EndDeltaDays");
        handler->number_value(storeEndDeltaDays.get_o_integer());
        assert(flagHasEndDeltaMonths);
        handler->start_pair("EndDeltaMonths");
        handler->number_value(storeEndDeltaMonths.get_o_integer());
        assert(flagHasNewFrequencyType);
        handler->start_pair("NewFrequencyType");
        switch (storeNewFrequencyType)
          {
            case NewFrequencyType_unknown:
                handler->string_value("unknown");
                break;
            case NewFrequencyType_one_time:
                handler->string_value("one-time");
                break;
            case NewFrequencyType_daily:
                handler->string_value("daily");
                break;
            case NewFrequencyType_weekly:
                handler->string_value("weekly");
                break;
            case NewFrequencyType_monthly:
                handler->string_value("monthly");
                break;
            case NewFrequencyType_yearly:
                handler->string_value("yearly");
                break;
            default:
                assert(false);
          }
        assert(flagHasNewFrequencyMultiplier);
        handler->start_pair("NewFrequencyMultiplier");
        handler->number_value(storeNewFrequencyMultiplier.get_o_integer());
        if (flagHasSetEventFields)
          {
            handler->start_pair("SetEventFields");
            handler->start_array();
            for (size_t num2 = 0; num2 < storeSetEventFields.size(); ++num2)
              {
                storeSetEventFields[num2]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasAppendEventFields)
          {
            handler->start_pair("AppendEventFields");
            handler->start_array();
            for (size_t num3 = 0; num3 < storeAppendEventFields.size(); ++num3)
              {
                storeAppendEventFields[num3]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasRemoveEventFields)
          {
            handler->start_pair("RemoveEventFields");
            handler->start_array();
            for (size_t num4 = 0; num4 < storeRemoveEventFields.size(); ++num4)
              {
                handler->string_value(storeRemoveEventFields[num4]);
              }
            handler->finish_array();
          }
        if (flagHasAddEventFields)
          {
            handler->start_pair("AddEventFields");
            handler->start_array();
            for (size_t num5 = 0; num5 < storeAddEventFields.size(); ++num5)
              {
                storeAddEventFields[num5]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasNativeData)
          {
            handler->start_pair("NativeData");
            storeNativeData->write_as_json(handler);
          }
        if (flagHasEventsConflictResult)
          {
            handler->start_pair("EventsConflictResult");
            storeEventsConflictResult->write_as_json(handler);
          }
        if (flagHasCalendarPreferenceIsNotSetResult)
          {
            handler->start_pair("CalendarPreferenceIsNotSetResult");
            storeCalendarPreferenceIsNotSetResult->write_as_json(handler);
          }
        if (flagHasNoMatchResult)
          {
            handler->start_pair("NoMatchResult");
            storeNoMatchResult->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasNewItemType()))
          {
            return "When parsing the object for %what%, the \"NewItemType\" field was missing.";
          }
        if (!(hasNewTitle()))
          {
            return "When parsing the object for %what%, the \"NewTitle\" field was missing.";
          }
        if (!(hasNewLocation()))
          {
            return "When parsing the object for %what%, the \"NewLocation\" field was missing.";
          }
        if (!(hasNewStart()))
          {
            return "When parsing the object for %what%, the \"NewStart\" field was missing.";
          }
        if (!(hasStartDeltaSeconds()))
          {
            return "When parsing the object for %what%, the \"StartDeltaSeconds\" field was missing.";
          }
        if (!(hasStartDeltaDays()))
          {
            return "When parsing the object for %what%, the \"StartDeltaDays\" field was missing.";
          }
        if (!(hasStartDeltaMonths()))
          {
            return "When parsing the object for %what%, the \"StartDeltaMonths\" field was missing.";
          }
        if (!(hasNewEnd()))
          {
            return "When parsing the object for %what%, the \"NewEnd\" field was missing.";
          }
        if (!(hasEndDeltaSeconds()))
          {
            return "When parsing the object for %what%, the \"EndDeltaSeconds\" field was missing.";
          }
        if (!(hasEndDeltaDays()))
          {
            return "When parsing the object for %what%, the \"EndDeltaDays\" field was missing.";
          }
        if (!(hasEndDeltaMonths()))
          {
            return "When parsing the object for %what%, the \"EndDeltaMonths\" field was missing.";
          }
        if (!(hasNewFrequencyType()))
          {
            return "When parsing the object for %what%, the \"NewFrequencyType\" field was missing.";
          }
        if (!(hasNewFrequencyMultiplier()))
          {
            return "When parsing the object for %what%, the \"NewFrequencyMultiplier\" field was missing.";
          }
        return NULL;
      }

    static ModifyCalendarItemCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ModifyCalendarItemCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ModifyCalendarItemCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ModifyCalendarItemCommandJSON>, ModifyCalendarItemCommandJSON *, bool> generator("Type ModifyCalendarItemCommand", ignore_extras);
            parse_json_value(text, "Text for ModifyCalendarItemCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ModifyCalendarItemCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ModifyCalendarItemCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ModifyCalendarItemCommandJSON>, ModifyCalendarItemCommandJSON *, bool> generator("Type ModifyCalendarItemCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public CalendarCommandJSON::Generator
      {
      private:
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorEventIDs;
        JSONHoldingGenerator<CalendarQueryJSON::Generator, RCHandle<CalendarQueryJSON>, CalendarQueryJSON *, bool > fieldGeneratorQuery;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorNewItemType;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorNewTitle;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorNewLocation;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorNewStart;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorStartDeltaSeconds;
        static char lowerBoundStartDeltaDays[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundStartDeltaDays>, OInteger, o_integer > fieldGeneratorStartDeltaDays;
        static char lowerBoundStartDeltaMonths[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundStartDeltaMonths>, OInteger, o_integer > fieldGeneratorStartDeltaMonths;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorNewEnd;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorEndDeltaSeconds;
        static char lowerBoundEndDeltaDays[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundEndDeltaDays>, OInteger, o_integer > fieldGeneratorEndDeltaDays;
        static char lowerBoundEndDeltaMonths[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundEndDeltaMonths>, OInteger, o_integer > fieldGeneratorEndDeltaMonths;
    class FieldGeneratorNewFrequencyType : public JSONStringGenerator
          {
          protected:
            FieldGeneratorNewFrequencyType(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorNewFrequencyType(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToNewFrequencyType(result));
              }
            virtual void handle_result(TypeNewFrequencyType result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorNewFrequencyType, TypeNewFrequencyType, TypeNewFrequencyType > fieldGeneratorNewFrequencyType;
        static char lowerBoundNewFrequencyMultiplier[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundNewFrequencyMultiplier>, OInteger, o_integer > fieldGeneratorNewFrequencyMultiplier;
        JSONHoldingArrayGenerator<TypeSetEventFieldsJSON::Generator, RCHandle<TypeSetEventFieldsJSON>, TypeSetEventFieldsJSON *, bool > fieldGeneratorSetEventFields;
        JSONHoldingArrayGenerator<TypeAppendEventFieldsJSON::Generator, RCHandle<TypeAppendEventFieldsJSON>, TypeAppendEventFieldsJSON *, bool > fieldGeneratorAppendEventFields;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorRemoveEventFields;
        JSONHoldingArrayGenerator<TypeAddEventFieldsJSON::Generator, RCHandle<TypeAddEventFieldsJSON>, TypeAddEventFieldsJSON *, bool > fieldGeneratorAddEventFields;
        JSONHoldingGenerator<TypeNativeDataJSON::Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool > fieldGeneratorNativeData;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorEventsConflictResult;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorCalendarPreferenceIsNotSetResult;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorNoMatchResult;
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
            if (!(strcmp(getCalendarCommandJSONKey().c_str(), "ModifyItem") == 0))
                throw("The key field has a value other than `ModifyItem'.");
            ModifyCalendarItemCommandJSON *result = new ModifyCalendarItemCommandJSON();
            assert(result != NULL);
            RCHandle<ModifyCalendarItemCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraModifyCalendarItemCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(CalendarCommandJSON *new_result)
          {
            handle_result((ModifyCalendarItemCommandJSON *)new_result);
          }
        void finish(ModifyCalendarItemCommandJSON *result)
          {
            if (fieldGeneratorEventIDs.have_value)
              {
                result->initEventIDs();
                size_t count = fieldGeneratorEventIDs.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendEventIDs(fieldGeneratorEventIDs.value[num]);
                  }
                fieldGeneratorEventIDs.value.clear();
                fieldGeneratorEventIDs.have_value = false;
              }
            if (fieldGeneratorQuery.have_value)
              {
                result->setQuery(fieldGeneratorQuery.value.referenced());
                fieldGeneratorQuery.have_value = false;
              }
            if (fieldGeneratorNewItemType.have_value)
              {
                result->setNewItemType(fieldGeneratorNewItemType.value);
                fieldGeneratorNewItemType.have_value = false;
              }
            else if (!(result->hasNewItemType()))
              {
                error("When parsing the object for %what%, the \"NewItemType\" field was missing.");
              }
            if (fieldGeneratorNewTitle.have_value)
              {
                result->setNewTitle(fieldGeneratorNewTitle.value);
                fieldGeneratorNewTitle.have_value = false;
              }
            else if (!(result->hasNewTitle()))
              {
                error("When parsing the object for %what%, the \"NewTitle\" field was missing.");
              }
            if (fieldGeneratorNewLocation.have_value)
              {
                result->setNewLocation(fieldGeneratorNewLocation.value);
                fieldGeneratorNewLocation.have_value = false;
              }
            else if (!(result->hasNewLocation()))
              {
                error("When parsing the object for %what%, the \"NewLocation\" field was missing.");
              }
            if (fieldGeneratorNewStart.have_value)
              {
                result->setNewStart(fieldGeneratorNewStart.value.referenced());
                fieldGeneratorNewStart.have_value = false;
              }
            else if (!(result->hasNewStart()))
              {
                error("When parsing the object for %what%, the \"NewStart\" field was missing.");
              }
            if (fieldGeneratorStartDeltaSeconds.have_value)
              {
                result->setStartDeltaSecondsText(fieldGeneratorStartDeltaSeconds.value);
                fieldGeneratorStartDeltaSeconds.have_value = false;
              }
            else if (!(result->hasStartDeltaSeconds()))
              {
                error("When parsing the object for %what%, the \"StartDeltaSeconds\" field was missing.");
              }
            if (fieldGeneratorStartDeltaDays.have_value)
              {
                result->setStartDeltaDays(fieldGeneratorStartDeltaDays.value);
                fieldGeneratorStartDeltaDays.have_value = false;
              }
            else if (!(result->hasStartDeltaDays()))
              {
                error("When parsing the object for %what%, the \"StartDeltaDays\" field was missing.");
              }
            if (fieldGeneratorStartDeltaMonths.have_value)
              {
                result->setStartDeltaMonths(fieldGeneratorStartDeltaMonths.value);
                fieldGeneratorStartDeltaMonths.have_value = false;
              }
            else if (!(result->hasStartDeltaMonths()))
              {
                error("When parsing the object for %what%, the \"StartDeltaMonths\" field was missing.");
              }
            if (fieldGeneratorNewEnd.have_value)
              {
                result->setNewEnd(fieldGeneratorNewEnd.value.referenced());
                fieldGeneratorNewEnd.have_value = false;
              }
            else if (!(result->hasNewEnd()))
              {
                error("When parsing the object for %what%, the \"NewEnd\" field was missing.");
              }
            if (fieldGeneratorEndDeltaSeconds.have_value)
              {
                result->setEndDeltaSecondsText(fieldGeneratorEndDeltaSeconds.value);
                fieldGeneratorEndDeltaSeconds.have_value = false;
              }
            else if (!(result->hasEndDeltaSeconds()))
              {
                error("When parsing the object for %what%, the \"EndDeltaSeconds\" field was missing.");
              }
            if (fieldGeneratorEndDeltaDays.have_value)
              {
                result->setEndDeltaDays(fieldGeneratorEndDeltaDays.value);
                fieldGeneratorEndDeltaDays.have_value = false;
              }
            else if (!(result->hasEndDeltaDays()))
              {
                error("When parsing the object for %what%, the \"EndDeltaDays\" field was missing.");
              }
            if (fieldGeneratorEndDeltaMonths.have_value)
              {
                result->setEndDeltaMonths(fieldGeneratorEndDeltaMonths.value);
                fieldGeneratorEndDeltaMonths.have_value = false;
              }
            else if (!(result->hasEndDeltaMonths()))
              {
                error("When parsing the object for %what%, the \"EndDeltaMonths\" field was missing.");
              }
            if (fieldGeneratorNewFrequencyType.have_value)
              {
                result->setNewFrequencyType(fieldGeneratorNewFrequencyType.value);
                fieldGeneratorNewFrequencyType.have_value = false;
              }
            else if (!(result->hasNewFrequencyType()))
              {
                error("When parsing the object for %what%, the \"NewFrequencyType\" field was missing.");
              }
            if (fieldGeneratorNewFrequencyMultiplier.have_value)
              {
                result->setNewFrequencyMultiplier(fieldGeneratorNewFrequencyMultiplier.value);
                fieldGeneratorNewFrequencyMultiplier.have_value = false;
              }
            else if (!(result->hasNewFrequencyMultiplier()))
              {
                error("When parsing the object for %what%, the \"NewFrequencyMultiplier\" field was missing.");
              }
            if (fieldGeneratorSetEventFields.have_value)
              {
                result->initSetEventFields();
                size_t count = fieldGeneratorSetEventFields.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendSetEventFields(fieldGeneratorSetEventFields.value[num].referenced());
                  }
                fieldGeneratorSetEventFields.value.clear();
                fieldGeneratorSetEventFields.have_value = false;
              }
            if (fieldGeneratorAppendEventFields.have_value)
              {
                result->initAppendEventFields();
                size_t count = fieldGeneratorAppendEventFields.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAppendEventFields(fieldGeneratorAppendEventFields.value[num].referenced());
                  }
                fieldGeneratorAppendEventFields.value.clear();
                fieldGeneratorAppendEventFields.have_value = false;
              }
            if (fieldGeneratorRemoveEventFields.have_value)
              {
                result->initRemoveEventFields();
                size_t count = fieldGeneratorRemoveEventFields.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendRemoveEventFields(fieldGeneratorRemoveEventFields.value[num]);
                  }
                fieldGeneratorRemoveEventFields.value.clear();
                fieldGeneratorRemoveEventFields.have_value = false;
              }
            if (fieldGeneratorAddEventFields.have_value)
              {
                result->initAddEventFields();
                size_t count = fieldGeneratorAddEventFields.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAddEventFields(fieldGeneratorAddEventFields.value[num].referenced());
                  }
                fieldGeneratorAddEventFields.value.clear();
                fieldGeneratorAddEventFields.have_value = false;
              }
            if (fieldGeneratorNativeData.have_value)
              {
                result->setNativeData(fieldGeneratorNativeData.value.referenced());
                fieldGeneratorNativeData.have_value = false;
              }
            if (fieldGeneratorEventsConflictResult.have_value)
              {
                result->setEventsConflictResult(fieldGeneratorEventsConflictResult.value.referenced());
                fieldGeneratorEventsConflictResult.have_value = false;
              }
            if (fieldGeneratorCalendarPreferenceIsNotSetResult.have_value)
              {
                result->setCalendarPreferenceIsNotSetResult(fieldGeneratorCalendarPreferenceIsNotSetResult.value.referenced());
                fieldGeneratorCalendarPreferenceIsNotSetResult.have_value = false;
              }
            if (fieldGeneratorNoMatchResult.have_value)
              {
                result->setNoMatchResult(fieldGeneratorNoMatchResult.value.referenced());
                fieldGeneratorNoMatchResult.have_value = false;
              }
            CalendarCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(ModifyCalendarItemCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'd':
                            if (strcmp(&(field_name[2]), "dEventFields") == 0)
                                return &fieldGeneratorAddEventFields;
                            break;
                        case 'p':
                            if (strcmp(&(field_name[2]), "pendEventFields") == 0)
                                return &fieldGeneratorAppendEventFields;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'C':
                    if (strcmp(&(field_name[1]), "alendarPreferenceIsNotSetResult") == 0)
                        return &fieldGeneratorCalendarPreferenceIsNotSetResult;
                    break;
                case 'E':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'n':
                            if (strncmp(&(field_name[2]), "dDelta", 6) == 0)
                              {
                                switch ((unsigned char)(field_name[8]))
                                  {
                                    case 'D':
                                        if (strcmp(&(field_name[9]), "ays") == 0)
                                            return &fieldGeneratorEndDeltaDays;
                                        break;
                                    case 'M':
                                        if (strcmp(&(field_name[9]), "onths") == 0)
                                            return &fieldGeneratorEndDeltaMonths;
                                        break;
                                    case 'S':
                                        if (strcmp(&(field_name[9]), "econds") == 0)
                                            return &fieldGeneratorEndDeltaSeconds;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'v':
                            if (strncmp(&(field_name[2]), "ent", 3) == 0)
                              {
                                switch ((unsigned char)(field_name[5]))
                                  {
                                    case 'I':
                                        if (strcmp(&(field_name[6]), "Ds") == 0)
                                            return &fieldGeneratorEventIDs;
                                        break;
                                    case 's':
                                        if (strcmp(&(field_name[6]), "ConflictResult") == 0)
                                            return &fieldGeneratorEventsConflictResult;
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
                case 'N':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "tiveData") == 0)
                                return &fieldGeneratorNativeData;
                            break;
                        case 'e':
                            if (strncmp(&(field_name[2]), "w", 1) == 0)
                              {
                                switch ((unsigned char)(field_name[3]))
                                  {
                                    case 'E':
                                        if (strcmp(&(field_name[4]), "nd") == 0)
                                            return &fieldGeneratorNewEnd;
                                        break;
                                    case 'F':
                                        if (strncmp(&(field_name[4]), "requency", 8) == 0)
                                          {
                                            switch ((unsigned char)(field_name[12]))
                                              {
                                                case 'M':
                                                    if (strcmp(&(field_name[13]), "ultiplier") == 0)
                                                        return &fieldGeneratorNewFrequencyMultiplier;
                                                    break;
                                                case 'T':
                                                    if (strcmp(&(field_name[13]), "ype") == 0)
                                                        return &fieldGeneratorNewFrequencyType;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'I':
                                        if (strcmp(&(field_name[4]), "temType") == 0)
                                            return &fieldGeneratorNewItemType;
                                        break;
                                    case 'L':
                                        if (strcmp(&(field_name[4]), "ocation") == 0)
                                            return &fieldGeneratorNewLocation;
                                        break;
                                    case 'S':
                                        if (strcmp(&(field_name[4]), "tart") == 0)
                                            return &fieldGeneratorNewStart;
                                        break;
                                    case 'T':
                                        if (strcmp(&(field_name[4]), "itle") == 0)
                                            return &fieldGeneratorNewTitle;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "MatchResult") == 0)
                                return &fieldGeneratorNoMatchResult;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'Q':
                    if (strcmp(&(field_name[1]), "uery") == 0)
                        return &fieldGeneratorQuery;
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "emoveEventFields") == 0)
                        return &fieldGeneratorRemoveEventFields;
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            if (strcmp(&(field_name[2]), "tEventFields") == 0)
                                return &fieldGeneratorSetEventFields;
                            break;
                        case 't':
                            if (strncmp(&(field_name[2]), "artDelta", 8) == 0)
                              {
                                switch ((unsigned char)(field_name[10]))
                                  {
                                    case 'D':
                                        if (strcmp(&(field_name[11]), "ays") == 0)
                                            return &fieldGeneratorStartDeltaDays;
                                        break;
                                    case 'M':
                                        if (strcmp(&(field_name[11]), "onths") == 0)
                                            return &fieldGeneratorStartDeltaMonths;
                                        break;
                                    case 'S':
                                        if (strcmp(&(field_name[11]), "econds") == 0)
                                            return &fieldGeneratorStartDeltaSeconds;
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
            return CalendarCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CalendarCommandJSON::Generator(ignore_extras), fieldGeneratorEventIDs("field \"EventIDs\" of the ModifyCalendarItemCommand class"), fieldGeneratorQuery("field \"Query\" of the ModifyCalendarItemCommand class", ignore_extras), fieldGeneratorNewItemType("field \"NewItemType\" of the ModifyCalendarItemCommand class"), fieldGeneratorNewTitle("field \"NewTitle\" of the ModifyCalendarItemCommand class"), fieldGeneratorNewLocation("field \"NewLocation\" of the ModifyCalendarItemCommand class"), fieldGeneratorNewStart("field \"NewStart\" of the ModifyCalendarItemCommand class", ignore_extras), fieldGeneratorStartDeltaSeconds("field \"StartDeltaSeconds\" of the ModifyCalendarItemCommand class"), fieldGeneratorStartDeltaDays("field \"StartDeltaDays\" of the ModifyCalendarItemCommand class"), fieldGeneratorStartDeltaMonths("field \"StartDeltaMonths\" of the ModifyCalendarItemCommand class"), fieldGeneratorNewEnd("field \"NewEnd\" of the ModifyCalendarItemCommand class", ignore_extras), fieldGeneratorEndDeltaSeconds("field \"EndDeltaSeconds\" of the ModifyCalendarItemCommand class"), fieldGeneratorEndDeltaDays("field \"EndDeltaDays\" of the ModifyCalendarItemCommand class"), fieldGeneratorEndDeltaMonths("field \"EndDeltaMonths\" of the ModifyCalendarItemCommand class"), fieldGeneratorNewFrequencyType("field \"NewFrequencyType\" of the ModifyCalendarItemCommand class"), fieldGeneratorNewFrequencyMultiplier("field \"NewFrequencyMultiplier\" of the ModifyCalendarItemCommand class"), fieldGeneratorSetEventFields("field \"SetEventFields\" of the ModifyCalendarItemCommand class", ignore_extras), fieldGeneratorAppendEventFields("field \"AppendEventFields\" of the ModifyCalendarItemCommand class", ignore_extras), fieldGeneratorRemoveEventFields("field \"RemoveEventFields\" of the ModifyCalendarItemCommand class"), fieldGeneratorAddEventFields("field \"AddEventFields\" of the ModifyCalendarItemCommand class", ignore_extras), fieldGeneratorNativeData("field \"NativeData\" of the ModifyCalendarItemCommand class", ignore_extras), fieldGeneratorEventsConflictResult("field \"EventsConflictResult\" of the ModifyCalendarItemCommand class", ignore_extras), fieldGeneratorCalendarPreferenceIsNotSetResult("field \"CalendarPreferenceIsNotSetResult\" of the ModifyCalendarItemCommand class", ignore_extras), fieldGeneratorNoMatchResult("field \"NoMatchResult\" of the ModifyCalendarItemCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the ModifyCalendarItemCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorEventIDs.reset();
            fieldGeneratorQuery.reset();
            fieldGeneratorNewItemType.reset();
            fieldGeneratorNewTitle.reset();
            fieldGeneratorNewLocation.reset();
            fieldGeneratorNewStart.reset();
            fieldGeneratorStartDeltaSeconds.reset();
            fieldGeneratorStartDeltaDays.reset();
            fieldGeneratorStartDeltaMonths.reset();
            fieldGeneratorNewEnd.reset();
            fieldGeneratorEndDeltaSeconds.reset();
            fieldGeneratorEndDeltaDays.reset();
            fieldGeneratorEndDeltaMonths.reset();
            fieldGeneratorNewFrequencyType.reset();
            fieldGeneratorNewFrequencyMultiplier.reset();
            fieldGeneratorSetEventFields.reset();
            fieldGeneratorAppendEventFields.reset();
            fieldGeneratorRemoveEventFields.reset();
            fieldGeneratorAddEventFields.reset();
            fieldGeneratorNativeData.reset();
            fieldGeneratorEventsConflictResult.reset();
            fieldGeneratorCalendarPreferenceIsNotSetResult.reset();
            fieldGeneratorNoMatchResult.reset();
            CalendarCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* MODIFYCALENDARITEMCOMMANDJSON_H */
