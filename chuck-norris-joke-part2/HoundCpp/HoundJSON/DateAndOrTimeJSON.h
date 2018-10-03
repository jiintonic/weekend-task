/* file "DateAndOrTimeJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef DATEANDORTIMEJSON_H
#define DATEANDORTIMEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONIntegerUnboundRangeGenerator.h"
#include "JSONIntegerRangeGenerator.h"
#include "JSONBooleanGenerator.h"
#include "JSONParallelGenerator.h"
#include <string>
#include <stdint.h>
#include "OInteger.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class DateAndOrTimeJSON : public ReferenceCounted
  {
  public:
    class TypeDate_0JSON : public ReferenceCounted
      {
      private:
        bool flagHasYear;
        OInteger storeYear;
        bool flagHasMonth;
        uint8_t storeMonth;
        bool flagHasDayOfMonth;
        uint8_t storeDayOfMonth;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeDate_0JSON(const TypeDate_0JSON &);
        TypeDate_0JSON & operator=(const TypeDate_0JSON &other);

        void  fromJSONYear(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONMonth(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONDayOfMonth(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeDate_0JSON(void);
        virtual ~TypeDate_0JSON(void);
        bool  hasYear(void) const;
        OInteger  getYear(void);
        const OInteger  getYear(void) const;
        bool  hasMonth(void) const;
        uint8_t  getMonth(void);
        const uint8_t  getMonth(void) const;
        bool  hasDayOfMonth(void) const;
        uint8_t  getDayOfMonth(void);
        const uint8_t  getDayOfMonth(void) const;

        virtual size_t extraTypeDate_0ComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeDate_0ComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeDate_0ComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeDate_0ComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeDate_0Lookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeDate_0Lookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setYear(OInteger new_value)
          {
            flagHasYear = true;
            storeYear = new_value;
          }
        void unsetYear(void)
          {
            flagHasYear = false;
          }
        void setMonth(uint8_t new_value)
          {
            flagHasMonth = true;
            if (new_value < 1)
                throw("The value for field Month of TypeDate_0JSON is less than the lower bound (1) for that field.");
            if (new_value > 12)
                throw("The value for field Month of TypeDate_0JSON is greater than the upper bound (12) for that field.");
            storeMonth = new_value;
          }
        void unsetMonth(void)
          {
            flagHasMonth = false;
          }
        void setDayOfMonth(uint8_t new_value)
          {
            flagHasDayOfMonth = true;
            if (new_value < 1)
                throw("The value for field DayOfMonth of TypeDate_0JSON is less than the lower bound (1) for that field.");
            if (new_value > 31)
                throw("The value for field DayOfMonth of TypeDate_0JSON is greater than the upper bound (31) for that field.");
            storeDayOfMonth = new_value;
          }
        void unsetDayOfMonth(void)
          {
            flagHasDayOfMonth = false;
          }

        virtual void extraTypeDate_0AppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeDate_0SetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeDate_0Lookup(key);
            if (old_field == NULL)
              {
                extraTypeDate_0AppendPair(key, new_component);
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
            assert(flagHasYear);
            handler->start_pair("Year");
            handler->number_value(storeYear.get_o_integer());
            assert(flagHasMonth);
            handler->start_pair("Month");
            handler->number_value(storeMonth);
            assert(flagHasDayOfMonth);
            handler->start_pair("DayOfMonth");
            handler->number_value(storeDayOfMonth);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasYear()))
              {
                return "When parsing the object for %what%, the \"Year\" field was missing.";
              }
            if (!(hasMonth()))
              {
                return "When parsing the object for %what%, the \"Month\" field was missing.";
              }
            if (!(hasDayOfMonth()))
              {
                return "When parsing the object for %what%, the \"DayOfMonth\" field was missing.";
              }
            return NULL;
          }

        static TypeDate_0JSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeDate_0JSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeDate_0JSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeDate_0JSON>, TypeDate_0JSON *, bool> generator("Type TypeDate_0", ignore_extras);
                parse_json_value(text, "Text for TypeDate_0JSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeDate_0JSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeDate_0JSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeDate_0JSON>, TypeDate_0JSON *, bool> generator("Type TypeDate_0", ignore_extras);
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
            JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorYear;
            JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 1, 12>, uint8_t, uint8_t > fieldGeneratorMonth;
            JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 1, 31>, uint8_t, uint8_t > fieldGeneratorDayOfMonth;
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
                TypeDate_0JSON *result = new TypeDate_0JSON();
                assert(result != NULL);
                RCHandle<TypeDate_0JSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeDate_0AppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeDate_0JSON *result)
              {
                if (fieldGeneratorYear.have_value)
                  {
                    result->setYear(fieldGeneratorYear.value);
                    fieldGeneratorYear.have_value = false;
                  }
                else if (!(result->hasYear()))
                  {
                    error("When parsing the object for %what%, the \"Year\" field was missing.");
                  }
                if (fieldGeneratorMonth.have_value)
                  {
                    result->setMonth(fieldGeneratorMonth.value);
                    fieldGeneratorMonth.have_value = false;
                  }
                else if (!(result->hasMonth()))
                  {
                    error("When parsing the object for %what%, the \"Month\" field was missing.");
                  }
                if (fieldGeneratorDayOfMonth.have_value)
                  {
                    result->setDayOfMonth(fieldGeneratorDayOfMonth.value);
                    fieldGeneratorDayOfMonth.have_value = false;
                  }
                else if (!(result->hasDayOfMonth()))
                  {
                    error("When parsing the object for %what%, the \"DayOfMonth\" field was missing.");
                  }
              }
            virtual void handle_result(TypeDate_0JSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'D':
                        if (strcmp(&(field_name[1]), "ayOfMonth") == 0)
                            return &fieldGeneratorDayOfMonth;
                        break;
                    case 'M':
                        if (strcmp(&(field_name[1]), "onth") == 0)
                            return &fieldGeneratorMonth;
                        break;
                    case 'Y':
                        if (strcmp(&(field_name[1]), "ear") == 0)
                            return &fieldGeneratorYear;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorYear("field \"Year\" of the TypeDate_0 class"), fieldGeneratorMonth("field \"Month\" of the TypeDate_0 class"), fieldGeneratorDayOfMonth("field \"DayOfMonth\" of the TypeDate_0 class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeDate_0 class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorYear.reset();
                fieldGeneratorMonth.reset();
                fieldGeneratorDayOfMonth.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };
    class TypeDate_1JSON : public ReferenceCounted
      {
      public:
        enum TypeSymbolic
          {
            Symbolic_unknown
          };

        static TypeSymbolic  stringToSymbolic(const char *chars);
        static const char * stringFromSymbolic(TypeSymbolic the_enum);

      private:
        bool flagHasSymbolic;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeDate_1JSON(const TypeDate_1JSON &);
        TypeDate_1JSON & operator=(const TypeDate_1JSON &other);

        void  fromJSONSymbolic(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeDate_1JSON(void);
        virtual ~TypeDate_1JSON(void);
        bool  hasSymbolic(void) const;
        TypeSymbolic  getSymbolic(void);
        const TypeSymbolic  getSymbolic(void) const;
        const char * getSymbolicAsChars(void) const;
        std::string  getSymbolicAsString(void) const;

        virtual size_t extraTypeDate_1ComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeDate_1ComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeDate_1ComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeDate_1ComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeDate_1Lookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeDate_1Lookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setSymbolic(void)
          {
            flagHasSymbolic = true;
          }
        void setSymbolic(TypeSymbolic new_value)
          {
            setSymbolic();
          }
        void setSymbolic(const char *chars)
          {
            setSymbolic(stringToSymbolic(chars));
          }
        void setSymbolic(std::string the_string)
          {
            setSymbolic(stringToSymbolic(the_string.c_str()));
          }
        void unsetSymbolic(void)
          {
            flagHasSymbolic = false;
          }

        virtual void extraTypeDate_1AppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeDate_1SetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeDate_1Lookup(key);
            if (old_field == NULL)
              {
                extraTypeDate_1AppendPair(key, new_component);
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
            assert(flagHasSymbolic);
            handler->start_pair("Symbolic");
            handler->string_value("unknown");
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasSymbolic()))
              {
                return "When parsing the object for %what%, the \"Symbolic\" field was missing.";
              }
            return NULL;
          }

        static TypeDate_1JSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeDate_1JSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeDate_1JSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeDate_1JSON>, TypeDate_1JSON *, bool> generator("Type TypeDate_1", ignore_extras);
                parse_json_value(text, "Text for TypeDate_1JSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeDate_1JSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeDate_1JSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeDate_1JSON>, TypeDate_1JSON *, bool> generator("Type TypeDate_1", ignore_extras);
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
        class FieldGeneratorSymbolic : public JSONStringGenerator
              {
              protected:
                FieldGeneratorSymbolic(const char *what)
                  {
                    set_what(what);
                  }
                FieldGeneratorSymbolic(void)
                  {
                  }
                void handle_result(const char *result)
                  {
                    handle_result(stringToSymbolic(result));
                  }
                virtual void handle_result(TypeSymbolic result) = 0;
              };
            JSONHoldingGenerator<FieldGeneratorSymbolic, TypeSymbolic, TypeSymbolic > fieldGeneratorSymbolic;
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
                TypeDate_1JSON *result = new TypeDate_1JSON();
                assert(result != NULL);
                RCHandle<TypeDate_1JSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeDate_1AppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeDate_1JSON *result)
              {
                if (fieldGeneratorSymbolic.have_value)
                  {
                    result->setSymbolic();
                    fieldGeneratorSymbolic.have_value = false;
                  }
                else if (!(result->hasSymbolic()))
                  {
                    error("When parsing the object for %what%, the \"Symbolic\" field was missing.");
                  }
              }
            virtual void handle_result(TypeDate_1JSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Symbolic") == 0)
                    return &fieldGeneratorSymbolic;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorSymbolic("field \"Symbolic\" of the TypeDate_1 class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeDate_1 class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorSymbolic.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };
    struct TypeDate
      {
        size_t key;
        union
          {
            TypeDate_0JSON * choice0;
            TypeDate_1JSON * choice1;
          } u;
      };
    class TypeTime_0JSON : public ReferenceCounted
      {
      private:
        bool flagHasHour;
        uint8_t storeHour;
        bool flagHasAmPmUnknown;
        bool storeAmPmUnknown;
        bool flagHasMinute;
        uint8_t storeMinute;
        bool flagHasSecond;
        double storeSecond;
        std::string textStoreSecond;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeTime_0JSON(const TypeTime_0JSON &);
        TypeTime_0JSON & operator=(const TypeTime_0JSON &other);

        void  fromJSONHour(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAmPmUnknown(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONMinute(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONSecond(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeTime_0JSON(void);
        virtual ~TypeTime_0JSON(void);
        bool  hasHour(void) const;
        uint8_t  getHour(void);
        const uint8_t  getHour(void) const;
        bool  hasAmPmUnknown(void) const;
        bool  getAmPmUnknown(void);
        const bool  getAmPmUnknown(void) const;
        bool  hasMinute(void) const;
        uint8_t  getMinute(void);
        const uint8_t  getMinute(void) const;
        bool  hasSecond(void) const;
        double  getSecond(void);
        const double  getSecond(void) const;
        std::string  getSecondAsText(void) const;

        virtual size_t extraTypeTime_0ComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeTime_0ComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeTime_0ComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeTime_0ComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeTime_0Lookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeTime_0Lookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setHour(uint8_t new_value)
          {
            flagHasHour = true;
            if (new_value < 0)
                throw("The value for field Hour of TypeTime_0JSON is less than the lower bound (0) for that field.");
            if (new_value > 23)
                throw("The value for field Hour of TypeTime_0JSON is greater than the upper bound (23) for that field.");
            storeHour = new_value;
          }
        void unsetHour(void)
          {
            flagHasHour = false;
          }
        void setAmPmUnknown(bool new_value)
          {
            flagHasAmPmUnknown = true;
            storeAmPmUnknown = new_value;
          }
        void unsetAmPmUnknown(void)
          {
            flagHasAmPmUnknown = false;
          }
        void setMinute(uint8_t new_value)
          {
            flagHasMinute = true;
            if (new_value < 0)
                throw("The value for field Minute of TypeTime_0JSON is less than the lower bound (0) for that field.");
            if (new_value > 59)
                throw("The value for field Minute of TypeTime_0JSON is greater than the upper bound (59) for that field.");
            storeMinute = new_value;
          }
        void unsetMinute(void)
          {
            flagHasMinute = false;
          }
        void setSecond(double new_value)
          {
            flagHasSecond = true;
            if (new_value < 0)
                throw("The value for field Second of TypeTime_0JSON is less than the lower bound (0) for that field.");
            if (new_value > 61)
                throw("The value for field Second of TypeTime_0JSON is greater than the upper bound (61) for that field.");
            storeSecond = new_value;
            textStoreSecond = "";
          }
        void setSecondText(std::string new_value)
          {
            flagHasSecond = true;
            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                throw("The text value for field Second of TypeTime_0JSON is not a valid number.");
            if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
                throw("The value for field Second of TypeTime_0JSON is less than the lower bound (0) for that field.");
            if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "61", "", false, "2") > 0)
                throw("The value for field Second of TypeTime_0JSON is greater than the upper bound (61) for that field.");
            textStoreSecond = new_value;
          }
        void unsetSecond(void)
          {
            flagHasSecond = false;
          }

        virtual void extraTypeTime_0AppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeTime_0SetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeTime_0Lookup(key);
            if (old_field == NULL)
              {
                extraTypeTime_0AppendPair(key, new_component);
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
            assert(flagHasHour);
            handler->start_pair("Hour");
            handler->number_value(storeHour);
            assert(flagHasAmPmUnknown);
            handler->start_pair("AmPmUnknown");
            handler->boolean_value(storeAmPmUnknown);
            assert(flagHasMinute);
            handler->start_pair("Minute");
            handler->number_value(storeMinute);
            assert(flagHasSecond);
            handler->start_pair("Second");
            if (textStoreSecond != "")
                handler->number_value(textStoreSecond.c_str());
            else if (((double)(long int)storeSecond) == storeSecond)
                handler->number_value((long int)storeSecond);
            else
                handler->number_value(storeSecond);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasHour()))
              {
                return "When parsing the object for %what%, the \"Hour\" field was missing.";
              }
            if (!(hasAmPmUnknown()))
              {
                return "When parsing the object for %what%, the \"AmPmUnknown\" field was missing.";
              }
            if (!(hasMinute()))
              {
                return "When parsing the object for %what%, the \"Minute\" field was missing.";
              }
            if (!(hasSecond()))
              {
                return "When parsing the object for %what%, the \"Second\" field was missing.";
              }
            return NULL;
          }

        static TypeTime_0JSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeTime_0JSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeTime_0JSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeTime_0JSON>, TypeTime_0JSON *, bool> generator("Type TypeTime_0", ignore_extras);
                parse_json_value(text, "Text for TypeTime_0JSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeTime_0JSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeTime_0JSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeTime_0JSON>, TypeTime_0JSON *, bool> generator("Type TypeTime_0", ignore_extras);
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
            JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 23>, uint8_t, uint8_t > fieldGeneratorHour;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorAmPmUnknown;
            JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 59>, uint8_t, uint8_t > fieldGeneratorMinute;
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorSecond;
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
                TypeTime_0JSON *result = new TypeTime_0JSON();
                assert(result != NULL);
                RCHandle<TypeTime_0JSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeTime_0AppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeTime_0JSON *result)
              {
                if (fieldGeneratorHour.have_value)
                  {
                    result->setHour(fieldGeneratorHour.value);
                    fieldGeneratorHour.have_value = false;
                  }
                else if (!(result->hasHour()))
                  {
                    error("When parsing the object for %what%, the \"Hour\" field was missing.");
                  }
                if (fieldGeneratorAmPmUnknown.have_value)
                  {
                    result->setAmPmUnknown(fieldGeneratorAmPmUnknown.value);
                    fieldGeneratorAmPmUnknown.have_value = false;
                  }
                else if (!(result->hasAmPmUnknown()))
                  {
                    error("When parsing the object for %what%, the \"AmPmUnknown\" field was missing.");
                  }
                if (fieldGeneratorMinute.have_value)
                  {
                    result->setMinute(fieldGeneratorMinute.value);
                    fieldGeneratorMinute.have_value = false;
                  }
                else if (!(result->hasMinute()))
                  {
                    error("When parsing the object for %what%, the \"Minute\" field was missing.");
                  }
                if (fieldGeneratorSecond.have_value)
                  {
                    result->setSecondText(fieldGeneratorSecond.value);
                    fieldGeneratorSecond.have_value = false;
                  }
                else if (!(result->hasSecond()))
                  {
                    error("When parsing the object for %what%, the \"Second\" field was missing.");
                  }
              }
            virtual void handle_result(TypeTime_0JSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'A':
                        if (strcmp(&(field_name[1]), "mPmUnknown") == 0)
                            return &fieldGeneratorAmPmUnknown;
                        break;
                    case 'H':
                        if (strcmp(&(field_name[1]), "our") == 0)
                            return &fieldGeneratorHour;
                        break;
                    case 'M':
                        if (strcmp(&(field_name[1]), "inute") == 0)
                            return &fieldGeneratorMinute;
                        break;
                    case 'S':
                        if (strcmp(&(field_name[1]), "econd") == 0)
                            return &fieldGeneratorSecond;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorHour("field \"Hour\" of the TypeTime_0 class"), fieldGeneratorAmPmUnknown("field \"AmPmUnknown\" of the TypeTime_0 class"), fieldGeneratorMinute("field \"Minute\" of the TypeTime_0 class"), fieldGeneratorSecond("field \"Second\" of the TypeTime_0 class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeTime_0 class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorHour.reset();
                fieldGeneratorAmPmUnknown.reset();
                fieldGeneratorMinute.reset();
                fieldGeneratorSecond.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };
    class TypeTime_1JSON : public ReferenceCounted
      {
      public:
        enum TypeSymbolic
          {
            Symbolic_start_of_day,
            Symbolic_end_of_day,
            Symbolic_unknown
          };

        static TypeSymbolic  stringToSymbolic(const char *chars);
        static const char * stringFromSymbolic(TypeSymbolic the_enum);

      private:
        bool flagHasSymbolic;
        TypeSymbolic storeSymbolic;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeTime_1JSON(const TypeTime_1JSON &);
        TypeTime_1JSON & operator=(const TypeTime_1JSON &other);

        void  fromJSONSymbolic(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeTime_1JSON(void);
        virtual ~TypeTime_1JSON(void);
        bool  hasSymbolic(void) const;
        TypeSymbolic  getSymbolic(void);
        const TypeSymbolic  getSymbolic(void) const;
        const char * getSymbolicAsChars(void) const;
        std::string  getSymbolicAsString(void) const;

        virtual size_t extraTypeTime_1ComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeTime_1ComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeTime_1ComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeTime_1ComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeTime_1Lookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeTime_1Lookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setSymbolic(TypeSymbolic new_value)
          {
            flagHasSymbolic = true;
            storeSymbolic = new_value;
          }
        void setSymbolic(const char *chars)
          {
            setSymbolic(stringToSymbolic(chars));
          }
        void setSymbolic(std::string the_string)
          {
            setSymbolic(stringToSymbolic(the_string.c_str()));
          }
        void unsetSymbolic(void)
          {
            flagHasSymbolic = false;
          }

        virtual void extraTypeTime_1AppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeTime_1SetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeTime_1Lookup(key);
            if (old_field == NULL)
              {
                extraTypeTime_1AppendPair(key, new_component);
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
            assert(flagHasSymbolic);
            handler->start_pair("Symbolic");
            switch (storeSymbolic)
              {
                case Symbolic_start_of_day:
                    handler->string_value("start-of-day");
                    break;
                case Symbolic_end_of_day:
                    handler->string_value("end-of-day");
                    break;
                case Symbolic_unknown:
                    handler->string_value("unknown");
                    break;
                default:
                    assert(false);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasSymbolic()))
              {
                return "When parsing the object for %what%, the \"Symbolic\" field was missing.";
              }
            return NULL;
          }

        static TypeTime_1JSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeTime_1JSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeTime_1JSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeTime_1JSON>, TypeTime_1JSON *, bool> generator("Type TypeTime_1", ignore_extras);
                parse_json_value(text, "Text for TypeTime_1JSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeTime_1JSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeTime_1JSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeTime_1JSON>, TypeTime_1JSON *, bool> generator("Type TypeTime_1", ignore_extras);
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
        class FieldGeneratorSymbolic : public JSONStringGenerator
              {
              protected:
                FieldGeneratorSymbolic(const char *what)
                  {
                    set_what(what);
                  }
                FieldGeneratorSymbolic(void)
                  {
                  }
                void handle_result(const char *result)
                  {
                    handle_result(stringToSymbolic(result));
                  }
                virtual void handle_result(TypeSymbolic result) = 0;
              };
            JSONHoldingGenerator<FieldGeneratorSymbolic, TypeSymbolic, TypeSymbolic > fieldGeneratorSymbolic;
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
                TypeTime_1JSON *result = new TypeTime_1JSON();
                assert(result != NULL);
                RCHandle<TypeTime_1JSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeTime_1AppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeTime_1JSON *result)
              {
                if (fieldGeneratorSymbolic.have_value)
                  {
                    result->setSymbolic(fieldGeneratorSymbolic.value);
                    fieldGeneratorSymbolic.have_value = false;
                  }
                else if (!(result->hasSymbolic()))
                  {
                    error("When parsing the object for %what%, the \"Symbolic\" field was missing.");
                  }
              }
            virtual void handle_result(TypeTime_1JSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Symbolic") == 0)
                    return &fieldGeneratorSymbolic;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorSymbolic("field \"Symbolic\" of the TypeTime_1 class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeTime_1 class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorSymbolic.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };
    struct TypeTime
      {
        size_t key;
        union
          {
            TypeTime_0JSON * choice0;
            TypeTime_1JSON * choice1;
          } u;
      };

  private:
    bool flagHasDate;
    TypeDate storeDate;
    bool flagHasTime;
    TypeTime storeTime;
    bool flagHasTimeZone;
    std::string storeTimeZone;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    DateAndOrTimeJSON(const DateAndOrTimeJSON &);
    DateAndOrTimeJSON & operator=(const DateAndOrTimeJSON &other);

    void  fromJSONDate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTimeZone(JSONValue *json_value, bool ignore_extras = false);


  public:
    DateAndOrTimeJSON(void);
    virtual ~DateAndOrTimeJSON(void);
    bool  hasDate(void) const;
    TypeDate  getDate(void);
    const TypeDate  getDate(void) const;
    bool  hasTime(void) const;
    TypeTime  getTime(void);
    const TypeTime  getTime(void) const;
    bool  hasTimeZone(void) const;
    std::string  getTimeZone(void);
    const std::string  getTimeZone(void) const;

    virtual size_t extraDateAndOrTimeComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraDateAndOrTimeComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraDateAndOrTimeComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraDateAndOrTimeComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraDateAndOrTimeLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraDateAndOrTimeLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setDate(TypeDate new_value)
      {
        switch (new_value.key)
          {
            case 0:
                new_value.u.choice0->add_reference();
                break;
            case 1:
                new_value.u.choice1->add_reference();
                break;
            default:
                assert(false);
          }
        if (flagHasDate)
          {
            switch (storeDate.key)
              {
                case 0:
                    storeDate.u.choice0->remove_reference();
                    break;
                case 1:
                    storeDate.u.choice1->remove_reference();
                    break;
                default:
                    assert(false);
              }
          }
        flagHasDate = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeDate = new_value;
      }
    void unsetDate(void)
      {
        if (flagHasDate)
          {
            switch (storeDate.key)
              {
                case 0:
                    storeDate.u.choice0->remove_reference();
                    break;
                case 1:
                    storeDate.u.choice1->remove_reference();
                    break;
                default:
                    assert(false);
              }
          }
        flagHasDate = false;
      }
    void setTime(TypeTime new_value)
      {
        switch (new_value.key)
          {
            case 0:
                new_value.u.choice0->add_reference();
                break;
            case 1:
                new_value.u.choice1->add_reference();
                break;
            default:
                assert(false);
          }
        if (flagHasTime)
          {
            switch (storeTime.key)
              {
                case 0:
                    storeTime.u.choice0->remove_reference();
                    break;
                case 1:
                    storeTime.u.choice1->remove_reference();
                    break;
                default:
                    assert(false);
              }
          }
        flagHasTime = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeTime = new_value;
      }
    void unsetTime(void)
      {
        if (flagHasTime)
          {
            switch (storeTime.key)
              {
                case 0:
                    storeTime.u.choice0->remove_reference();
                    break;
                case 1:
                    storeTime.u.choice1->remove_reference();
                    break;
                default:
                    assert(false);
              }
          }
        flagHasTime = false;
      }
    void setTimeZone(std::string new_value)
      {
        flagHasTimeZone = true;
        storeTimeZone = new_value;
      }
    void unsetTimeZone(void)
      {
        flagHasTimeZone = false;
      }

    virtual void extraDateAndOrTimeAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraDateAndOrTimeSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraDateAndOrTimeLookup(key);
        if (old_field == NULL)
          {
            extraDateAndOrTimeAppendPair(key, new_component);
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
        assert(flagHasDate);
        handler->start_pair("Date");
        switch (storeDate.key)
          {
            case 0:
                storeDate.u.choice0->write_as_json(handler);
                break;
            case 1:
                storeDate.u.choice1->write_as_json(handler);
                break;
            default:
                assert(false);
          }
        assert(flagHasTime);
        handler->start_pair("Time");
        switch (storeTime.key)
          {
            case 0:
                storeTime.u.choice0->write_as_json(handler);
                break;
            case 1:
                storeTime.u.choice1->write_as_json(handler);
                break;
            default:
                assert(false);
          }
        if (flagHasTimeZone)
          {
            handler->start_pair("TimeZone");
            handler->string_value(storeTimeZone);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasDate()))
          {
            return "When parsing the object for %what%, the \"Date\" field was missing.";
          }
        if (!(hasTime()))
          {
            return "When parsing the object for %what%, the \"Time\" field was missing.";
          }
        return NULL;
      }

    static DateAndOrTimeJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static DateAndOrTimeJSON *from_text(const char *text, bool ignore_extras = false)
      {
        DateAndOrTimeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool> generator("Type DateAndOrTime", ignore_extras);
            parse_json_value(text, "Text for DateAndOrTimeJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static DateAndOrTimeJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        DateAndOrTimeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool> generator("Type DateAndOrTime", ignore_extras);
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
    class FieldGeneratorDate : public JSONParallelGenerator
          {
          private:
            JSONHoldingGenerator<TypeDate_0JSON::Generator, RCHandle<TypeDate_0JSON>, TypeDate_0JSON *, bool > field0;
            JSONHoldingGenerator<TypeDate_1JSON::Generator, RCHandle<TypeDate_1JSON>, TypeDate_1JSON *, bool > field1;
            JSONHandler *all_handlers[2];

          protected:
            size_t start(JSONHandler ***parallel_handlers_location)
              {
                *parallel_handlers_location = &(all_handlers[0]);
                return 2;
              }
            void finish(size_t winning_index)
              {
                TypeDate result;
                result.key = winning_index;
                switch (winning_index)
                  {
                    case 0:
                      {
                        assert(field0.have_value);
                        result.u.choice0 = field0.value.referenced();
                        break;
                      }
                    case 1:
                      {
                        assert(field1.have_value);
                        result.u.choice1 = field1.value.referenced();
                        break;
                      }
                    default:
                      {
                        assert(false);
                      }
                  }
                handle_result(result);
              }
            virtual void handle_result(TypeDate result) = 0;

          public:
            FieldGeneratorDate(bool ignore_extras) : field0("option 0 of field \"Date\"", ignore_extras), field1("option 1 of field \"Date\"", ignore_extras)
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorDate(std::string what, bool ignore_extras) : field0("option 0 of field \"Date\"", ignore_extras), field1("option 1 of field \"Date\"", ignore_extras)
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorDate(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderDate
          {
          private:
            bool have_data;
            TypeDate data;

          public:
            HolderDate(void) : have_data(false)  { }
            HolderDate(TypeDate init_data) : have_data(true), data(init_data)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          data.u.choice0->add_reference();
                          break;
                        case 1:
                          data.u.choice1->add_reference();
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            HolderDate(const HolderDate &other) : have_data(other.haveData()), data(other.referenced())
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          data.u.choice0->add_reference();
                          break;
                        case 1:
                          data.u.choice1->add_reference();
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            ~HolderDate(void)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          data.u.choice0->remove_reference();
                          break;
                        case 1:
                          data.u.choice1->remove_reference();
                          break;
                        default:
                          assert(false);
                      }
                  }
              }

            void operator=(const HolderDate &other)
              {
                TypeDate new_data;
                if (other.haveData())
                  {
                    new_data = other.referenced();
                    switch (new_data.key)
                      {
                        case 0:
                          new_data.u.choice0->add_reference();
                          break;
                        case 1:
                          new_data.u.choice1->add_reference();
                          break;
                        default:
                          assert(false);
                      }
                  }
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          data.u.choice0->remove_reference();
                          break;
                        case 1:
                          data.u.choice1->remove_reference();
                          break;
                        default:
                          assert(false);
                      }
                  }
                have_data = other.haveData();
                if (have_data)
                    data = new_data;
              }
            bool haveData(void) const
              {
                return have_data;
              }
            TypeDate referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorDate, HolderDate, TypeDate, bool > fieldGeneratorDate;
    class FieldGeneratorTime : public JSONParallelGenerator
          {
          private:
            JSONHoldingGenerator<TypeTime_0JSON::Generator, RCHandle<TypeTime_0JSON>, TypeTime_0JSON *, bool > field0;
            JSONHoldingGenerator<TypeTime_1JSON::Generator, RCHandle<TypeTime_1JSON>, TypeTime_1JSON *, bool > field1;
            JSONHandler *all_handlers[2];

          protected:
            size_t start(JSONHandler ***parallel_handlers_location)
              {
                *parallel_handlers_location = &(all_handlers[0]);
                return 2;
              }
            void finish(size_t winning_index)
              {
                TypeTime result;
                result.key = winning_index;
                switch (winning_index)
                  {
                    case 0:
                      {
                        assert(field0.have_value);
                        result.u.choice0 = field0.value.referenced();
                        break;
                      }
                    case 1:
                      {
                        assert(field1.have_value);
                        result.u.choice1 = field1.value.referenced();
                        break;
                      }
                    default:
                      {
                        assert(false);
                      }
                  }
                handle_result(result);
              }
            virtual void handle_result(TypeTime result) = 0;

          public:
            FieldGeneratorTime(bool ignore_extras) : field0("option 0 of field \"Time\"", ignore_extras), field1("option 1 of field \"Time\"", ignore_extras)
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorTime(std::string what, bool ignore_extras) : field0("option 0 of field \"Time\"", ignore_extras), field1("option 1 of field \"Time\"", ignore_extras)
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorTime(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderTime
          {
          private:
            bool have_data;
            TypeTime data;

          public:
            HolderTime(void) : have_data(false)  { }
            HolderTime(TypeTime init_data) : have_data(true), data(init_data)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          data.u.choice0->add_reference();
                          break;
                        case 1:
                          data.u.choice1->add_reference();
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            HolderTime(const HolderTime &other) : have_data(other.haveData()), data(other.referenced())
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          data.u.choice0->add_reference();
                          break;
                        case 1:
                          data.u.choice1->add_reference();
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            ~HolderTime(void)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          data.u.choice0->remove_reference();
                          break;
                        case 1:
                          data.u.choice1->remove_reference();
                          break;
                        default:
                          assert(false);
                      }
                  }
              }

            void operator=(const HolderTime &other)
              {
                TypeTime new_data;
                if (other.haveData())
                  {
                    new_data = other.referenced();
                    switch (new_data.key)
                      {
                        case 0:
                          new_data.u.choice0->add_reference();
                          break;
                        case 1:
                          new_data.u.choice1->add_reference();
                          break;
                        default:
                          assert(false);
                      }
                  }
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          data.u.choice0->remove_reference();
                          break;
                        case 1:
                          data.u.choice1->remove_reference();
                          break;
                        default:
                          assert(false);
                      }
                  }
                have_data = other.haveData();
                if (have_data)
                    data = new_data;
              }
            bool haveData(void) const
              {
                return have_data;
              }
            TypeTime referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorTime, HolderTime, TypeTime, bool > fieldGeneratorTime;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTimeZone;
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
            DateAndOrTimeJSON *result = new DateAndOrTimeJSON();
            assert(result != NULL);
            RCHandle<DateAndOrTimeJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraDateAndOrTimeAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(DateAndOrTimeJSON *result)
          {
            if (fieldGeneratorDate.have_value)
              {
                result->setDate(fieldGeneratorDate.value.referenced());
                fieldGeneratorDate.have_value = false;
              }
            else if (!(result->hasDate()))
              {
                error("When parsing the object for %what%, the \"Date\" field was missing.");
              }
            if (fieldGeneratorTime.have_value)
              {
                result->setTime(fieldGeneratorTime.value.referenced());
                fieldGeneratorTime.have_value = false;
              }
            else if (!(result->hasTime()))
              {
                error("When parsing the object for %what%, the \"Time\" field was missing.");
              }
            if (fieldGeneratorTimeZone.have_value)
              {
                result->setTimeZone(fieldGeneratorTimeZone.value);
                fieldGeneratorTimeZone.have_value = false;
              }
          }
        virtual void handle_result(DateAndOrTimeJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strcmp(&(field_name[1]), "ate") == 0)
                        return &fieldGeneratorDate;
                    break;
                case 'T':
                    if (strncmp(&(field_name[1]), "ime", 3) == 0)
                      {
                        switch ((unsigned char)(field_name[4]))
                          {
                            case 0:
                                return &fieldGeneratorTime;
                            case 'Z':
                                if (strcmp(&(field_name[5]), "one") == 0)
                                    return &fieldGeneratorTimeZone;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorDate("field \"Date\" of the DateAndOrTime class", ignore_extras), fieldGeneratorTime("field \"Time\" of the DateAndOrTime class", ignore_extras), fieldGeneratorTimeZone("field \"TimeZone\" of the DateAndOrTime class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the DateAndOrTime class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorDate.reset();
            fieldGeneratorTime.reset();
            fieldGeneratorTimeZone.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* DATEANDORTIMEJSON_H */
