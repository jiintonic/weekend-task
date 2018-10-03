/* file "UncertainDateAndOrTimeJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UNCERTAINDATEANDORTIMEJSON_H
#define UNCERTAINDATEANDORTIMEJSON_H

#pragma interface

#include "DateAndOrTimeJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONIntegerUnboundRangeGenerator.h"
#include "JSONIntegerRangeGenerator.h"
#include "JSONBooleanGenerator.h"
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


class UncertainDateAndOrTimeJSON : public DateAndOrTimeJSON
  {
  public:
    class TypeUncertainDateJSON : public ReferenceCounted
      {
      private:
        bool flagHasCentury;
        OInteger storeCentury;
        bool flagHasColloquialDecade;
        OInteger storeColloquialDecade;
        bool flagHasYear;
        OInteger storeYear;
        bool flagHasMonth;
        uint8_t storeMonth;
        bool flagHasDayOfMonth;
        uint8_t storeDayOfMonth;
        bool flagHasIsCirca;
        bool storeIsCirca;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeUncertainDateJSON(const TypeUncertainDateJSON &);
        TypeUncertainDateJSON & operator=(const TypeUncertainDateJSON &other);

        void  fromJSONCentury(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONColloquialDecade(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONYear(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONMonth(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONDayOfMonth(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONIsCirca(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeUncertainDateJSON(void);
        virtual ~TypeUncertainDateJSON(void);
        bool  hasCentury(void) const;
        OInteger  getCentury(void);
        const OInteger  getCentury(void) const;
        bool  hasColloquialDecade(void) const;
        OInteger  getColloquialDecade(void);
        const OInteger  getColloquialDecade(void) const;
        bool  hasYear(void) const;
        OInteger  getYear(void);
        const OInteger  getYear(void) const;
        bool  hasMonth(void) const;
        uint8_t  getMonth(void);
        const uint8_t  getMonth(void) const;
        bool  hasDayOfMonth(void) const;
        uint8_t  getDayOfMonth(void);
        const uint8_t  getDayOfMonth(void) const;
        bool  hasIsCirca(void) const;
        bool  getIsCirca(void);
        const bool  getIsCirca(void) const;

        virtual size_t extraTypeUncertainDateComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeUncertainDateComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeUncertainDateComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeUncertainDateComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeUncertainDateLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeUncertainDateLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setCentury(OInteger new_value)
          {
            flagHasCentury = true;
            storeCentury = new_value;
          }
        void unsetCentury(void)
          {
            flagHasCentury = false;
          }
        void setColloquialDecade(OInteger new_value)
          {
            flagHasColloquialDecade = true;
            storeColloquialDecade = new_value;
          }
        void unsetColloquialDecade(void)
          {
            flagHasColloquialDecade = false;
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
                throw("The value for field Month of TypeUncertainDateJSON is less than the lower bound (1) for that field.");
            if (new_value > 12)
                throw("The value for field Month of TypeUncertainDateJSON is greater than the upper bound (12) for that field.");
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
                throw("The value for field DayOfMonth of TypeUncertainDateJSON is less than the lower bound (1) for that field.");
            if (new_value > 31)
                throw("The value for field DayOfMonth of TypeUncertainDateJSON is greater than the upper bound (31) for that field.");
            storeDayOfMonth = new_value;
          }
        void unsetDayOfMonth(void)
          {
            flagHasDayOfMonth = false;
          }
        void setIsCirca(bool new_value)
          {
            flagHasIsCirca = true;
            storeIsCirca = new_value;
          }
        void unsetIsCirca(void)
          {
            flagHasIsCirca = false;
          }

        virtual void extraTypeUncertainDateAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeUncertainDateSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeUncertainDateLookup(key);
            if (old_field == NULL)
              {
                extraTypeUncertainDateAppendPair(key, new_component);
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
            if (flagHasCentury)
              {
                handler->start_pair("Century");
                handler->number_value(storeCentury.get_o_integer());
              }
            if (flagHasColloquialDecade)
              {
                handler->start_pair("ColloquialDecade");
                handler->number_value(storeColloquialDecade.get_o_integer());
              }
            if (flagHasYear)
              {
                handler->start_pair("Year");
                handler->number_value(storeYear.get_o_integer());
              }
            if (flagHasMonth)
              {
                handler->start_pair("Month");
                handler->number_value(storeMonth);
              }
            if (flagHasDayOfMonth)
              {
                handler->start_pair("DayOfMonth");
                handler->number_value(storeDayOfMonth);
              }
            if (flagHasIsCirca)
              {
                handler->start_pair("IsCirca");
                handler->boolean_value(storeIsCirca);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            return NULL;
          }

        static TypeUncertainDateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeUncertainDateJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeUncertainDateJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeUncertainDateJSON>, TypeUncertainDateJSON *, bool> generator("Type TypeUncertainDate", ignore_extras);
                parse_json_value(text, "Text for TypeUncertainDateJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeUncertainDateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeUncertainDateJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeUncertainDateJSON>, TypeUncertainDateJSON *, bool> generator("Type TypeUncertainDate", ignore_extras);
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
            JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorCentury;
            JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorColloquialDecade;
            JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorYear;
            JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 1, 12>, uint8_t, uint8_t > fieldGeneratorMonth;
            JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 1, 31>, uint8_t, uint8_t > fieldGeneratorDayOfMonth;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsCirca;
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
                TypeUncertainDateJSON *result = new TypeUncertainDateJSON();
                assert(result != NULL);
                RCHandle<TypeUncertainDateJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeUncertainDateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeUncertainDateJSON *result)
              {
                if (fieldGeneratorCentury.have_value)
                  {
                    result->setCentury(fieldGeneratorCentury.value);
                    fieldGeneratorCentury.have_value = false;
                  }
                if (fieldGeneratorColloquialDecade.have_value)
                  {
                    result->setColloquialDecade(fieldGeneratorColloquialDecade.value);
                    fieldGeneratorColloquialDecade.have_value = false;
                  }
                if (fieldGeneratorYear.have_value)
                  {
                    result->setYear(fieldGeneratorYear.value);
                    fieldGeneratorYear.have_value = false;
                  }
                if (fieldGeneratorMonth.have_value)
                  {
                    result->setMonth(fieldGeneratorMonth.value);
                    fieldGeneratorMonth.have_value = false;
                  }
                if (fieldGeneratorDayOfMonth.have_value)
                  {
                    result->setDayOfMonth(fieldGeneratorDayOfMonth.value);
                    fieldGeneratorDayOfMonth.have_value = false;
                  }
                if (fieldGeneratorIsCirca.have_value)
                  {
                    result->setIsCirca(fieldGeneratorIsCirca.value);
                    fieldGeneratorIsCirca.have_value = false;
                  }
              }
            virtual void handle_result(TypeUncertainDateJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'C':
                        switch ((unsigned char)(field_name[1]))
                          {
                            case 'e':
                                if (strcmp(&(field_name[2]), "ntury") == 0)
                                    return &fieldGeneratorCentury;
                                break;
                            case 'o':
                                if (strcmp(&(field_name[2]), "lloquialDecade") == 0)
                                    return &fieldGeneratorColloquialDecade;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'D':
                        if (strcmp(&(field_name[1]), "ayOfMonth") == 0)
                            return &fieldGeneratorDayOfMonth;
                        break;
                    case 'I':
                        if (strcmp(&(field_name[1]), "sCirca") == 0)
                            return &fieldGeneratorIsCirca;
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
            Generator(bool ignore_extras = false) : fieldGeneratorCentury("field \"Century\" of the TypeUncertainDate class"), fieldGeneratorColloquialDecade("field \"ColloquialDecade\" of the TypeUncertainDate class"), fieldGeneratorYear("field \"Year\" of the TypeUncertainDate class"), fieldGeneratorMonth("field \"Month\" of the TypeUncertainDate class"), fieldGeneratorDayOfMonth("field \"DayOfMonth\" of the TypeUncertainDate class"), fieldGeneratorIsCirca("field \"IsCirca\" of the TypeUncertainDate class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeUncertainDate class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorCentury.reset();
                fieldGeneratorColloquialDecade.reset();
                fieldGeneratorYear.reset();
                fieldGeneratorMonth.reset();
                fieldGeneratorDayOfMonth.reset();
                fieldGeneratorIsCirca.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };
    class TypeUncertainTimeJSON : public ReferenceCounted
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

        TypeUncertainTimeJSON(const TypeUncertainTimeJSON &);
        TypeUncertainTimeJSON & operator=(const TypeUncertainTimeJSON &other);

        void  fromJSONHour(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAmPmUnknown(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONMinute(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONSecond(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeUncertainTimeJSON(void);
        virtual ~TypeUncertainTimeJSON(void);
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

        virtual size_t extraTypeUncertainTimeComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeUncertainTimeComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeUncertainTimeComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeUncertainTimeComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeUncertainTimeLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeUncertainTimeLookup(const char *field_name) const
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
                throw("The value for field Hour of TypeUncertainTimeJSON is less than the lower bound (0) for that field.");
            if (new_value > 23)
                throw("The value for field Hour of TypeUncertainTimeJSON is greater than the upper bound (23) for that field.");
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
                throw("The value for field Minute of TypeUncertainTimeJSON is less than the lower bound (0) for that field.");
            if (new_value > 59)
                throw("The value for field Minute of TypeUncertainTimeJSON is greater than the upper bound (59) for that field.");
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
                throw("The value for field Second of TypeUncertainTimeJSON is less than the lower bound (0) for that field.");
            if (new_value > 61)
                throw("The value for field Second of TypeUncertainTimeJSON is greater than the upper bound (61) for that field.");
            storeSecond = new_value;
            textStoreSecond = "";
          }
        void setSecondText(std::string new_value)
          {
            flagHasSecond = true;
            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                throw("The text value for field Second of TypeUncertainTimeJSON is not a valid number.");
            if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
                throw("The value for field Second of TypeUncertainTimeJSON is less than the lower bound (0) for that field.");
            if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "61", "", false, "2") > 0)
                throw("The value for field Second of TypeUncertainTimeJSON is greater than the upper bound (61) for that field.");
            textStoreSecond = new_value;
          }
        void unsetSecond(void)
          {
            flagHasSecond = false;
          }

        virtual void extraTypeUncertainTimeAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeUncertainTimeSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeUncertainTimeLookup(key);
            if (old_field == NULL)
              {
                extraTypeUncertainTimeAppendPair(key, new_component);
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
            if (flagHasMinute)
              {
                handler->start_pair("Minute");
                handler->number_value(storeMinute);
              }
            if (flagHasSecond)
              {
                handler->start_pair("Second");
                if (textStoreSecond != "")
                    handler->number_value(textStoreSecond.c_str());
                else if (((double)(long int)storeSecond) == storeSecond)
                    handler->number_value((long int)storeSecond);
                else
                    handler->number_value(storeSecond);
              }
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
            return NULL;
          }

        static TypeUncertainTimeJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeUncertainTimeJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeUncertainTimeJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeUncertainTimeJSON>, TypeUncertainTimeJSON *, bool> generator("Type TypeUncertainTime", ignore_extras);
                parse_json_value(text, "Text for TypeUncertainTimeJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeUncertainTimeJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeUncertainTimeJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeUncertainTimeJSON>, TypeUncertainTimeJSON *, bool> generator("Type TypeUncertainTime", ignore_extras);
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
                TypeUncertainTimeJSON *result = new TypeUncertainTimeJSON();
                assert(result != NULL);
                RCHandle<TypeUncertainTimeJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeUncertainTimeAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeUncertainTimeJSON *result)
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
                if (fieldGeneratorSecond.have_value)
                  {
                    result->setSecondText(fieldGeneratorSecond.value);
                    fieldGeneratorSecond.have_value = false;
                  }
              }
            virtual void handle_result(TypeUncertainTimeJSON *new_result) = 0;
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
            Generator(bool ignore_extras = false) : fieldGeneratorHour("field \"Hour\" of the TypeUncertainTime class"), fieldGeneratorAmPmUnknown("field \"AmPmUnknown\" of the TypeUncertainTime class"), fieldGeneratorMinute("field \"Minute\" of the TypeUncertainTime class"), fieldGeneratorSecond("field \"Second\" of the TypeUncertainTime class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeUncertainTime class");
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

  private:
    bool flagHasUncertainDate;
    TypeUncertainDateJSON * storeUncertainDate;
    bool flagHasUncertainTime;
    TypeUncertainTimeJSON * storeUncertainTime;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UncertainDateAndOrTimeJSON(const UncertainDateAndOrTimeJSON &);
    UncertainDateAndOrTimeJSON & operator=(const UncertainDateAndOrTimeJSON &other);

    JSONValue * extraUncertainDateToJSON(void) const;
    JSONValue * extraUncertainTimeToJSON(void) const;

    void  fromJSONUncertainDate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUncertainTime(JSONValue *json_value, bool ignore_extras = false);


  public:
    UncertainDateAndOrTimeJSON(void);
    virtual ~UncertainDateAndOrTimeJSON(void);
    bool  hasUncertainDate(void) const;
    TypeUncertainDateJSON *  getUncertainDate(void);
    const TypeUncertainDateJSON *  getUncertainDate(void) const;
    bool  hasUncertainTime(void) const;
    TypeUncertainTimeJSON *  getUncertainTime(void);
    const TypeUncertainTimeJSON *  getUncertainTime(void) const;

    virtual size_t extraUncertainDateAndOrTimeComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUncertainDateAndOrTimeComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUncertainDateAndOrTimeComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUncertainDateAndOrTimeComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUncertainDateAndOrTimeLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUncertainDateAndOrTimeLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraDateAndOrTimeComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasUncertainDate)
            ++result;
        if (flagHasUncertainTime)
            ++result;
        result += extraUncertainDateAndOrTimeComponentCount();
        return result;
      }
    const char *extraDateAndOrTimeComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasUncertainDate)
          {
            if (remainder == 0)
                return "UncertainDate";
            --remainder;
          }
        if (flagHasUncertainTime)
          {
            if (remainder == 0)
                return "UncertainTime";
            --remainder;
          }
        return extraUncertainDateAndOrTimeComponentKey(remainder);
      }
    JSONValue *extraDateAndOrTimeComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasUncertainDate)
          {
            if (remainder == 0)
                return extraUncertainDateToJSON();
            --remainder;
          }
        if (flagHasUncertainTime)
          {
            if (remainder == 0)
                return extraUncertainTimeToJSON();
            --remainder;
          }
        return extraUncertainDateAndOrTimeComponentValue(remainder);
      }
    const JSONValue *extraDateAndOrTimeComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasUncertainDate)
          {
            if (remainder == 0)
                return extraUncertainDateToJSON();
            --remainder;
          }
        if (flagHasUncertainTime)
          {
            if (remainder == 0)
                return extraUncertainTimeToJSON();
            --remainder;
          }
        return extraUncertainDateAndOrTimeComponentValue(remainder);
      }
    JSONValue *extraDateAndOrTimeLookup(const char *field_name)
      {
        if (strncmp(field_name, "Uncertain", 9) == 0)
          {
            switch ((unsigned char)(field_name[9]))
              {
                case 'D':
                    if (strcmp(&(field_name[10]), "ate") == 0)
                        return (flagHasUncertainDate ? extraUncertainDateToJSON() : NULL);
                    break;
                case 'T':
                    if (strcmp(&(field_name[10]), "ime") == 0)
                        return (flagHasUncertainTime ? extraUncertainTimeToJSON() : NULL);
                    break;
                default:
                    break;
              }
          }
        return extraUncertainDateAndOrTimeLookup(field_name);
      }
    const JSONValue *extraDateAndOrTimeLookup(const char *field_name) const
      {
        if (strncmp(field_name, "Uncertain", 9) == 0)
          {
            switch ((unsigned char)(field_name[9]))
              {
                case 'D':
                    if (strcmp(&(field_name[10]), "ate") == 0)
                        return (flagHasUncertainDate ? extraUncertainDateToJSON() : NULL);
                    break;
                case 'T':
                    if (strcmp(&(field_name[10]), "ime") == 0)
                        return (flagHasUncertainTime ? extraUncertainTimeToJSON() : NULL);
                    break;
                default:
                    break;
              }
          }
        return extraUncertainDateAndOrTimeLookup(field_name);
      }

    void setUncertainDate(TypeUncertainDateJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasUncertainDate)
          {
            storeUncertainDate->remove_reference();
          }
        flagHasUncertainDate = true;
        storeUncertainDate = new_value;
      }
    void unsetUncertainDate(void)
      {
        if (flagHasUncertainDate)
          {
            storeUncertainDate->remove_reference();
          }
        flagHasUncertainDate = false;
      }
    void setUncertainTime(TypeUncertainTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasUncertainTime)
          {
            storeUncertainTime->remove_reference();
          }
        flagHasUncertainTime = true;
        storeUncertainTime = new_value;
      }
    void unsetUncertainTime(void)
      {
        if (flagHasUncertainTime)
          {
            storeUncertainTime->remove_reference();
          }
        flagHasUncertainTime = false;
      }

    virtual void extraUncertainDateAndOrTimeAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUncertainDateAndOrTimeSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUncertainDateAndOrTimeLookup(key);
        if (old_field == NULL)
          {
            extraUncertainDateAndOrTimeAppendPair(key, new_component);
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
    void extraDateAndOrTimeAppendPair(const char *key, JSONValue *new_component)
      {
        if (strncmp(key, "Uncertain", 9) == 0)
          {
            switch ((unsigned char)(key[9]))
              {
                case 'D':
                    if (strcmp(&(key[10]), "ate") == 0)
                        {
                        fromJSONUncertainDate(new_component, false);
                        return;
                        }
                    break;
                case 'T':
                    if (strcmp(&(key[10]), "ime") == 0)
                        {
                        fromJSONUncertainTime(new_component, false);
                        return;
                        }
                    break;
                default:
                    break;
              }
          }
        extraUncertainDateAndOrTimeAppendPair(key, new_component);
      }
    void extraDateAndOrTimeSetField(const char *key, JSONValue *new_component)
      {
        if (strncmp(key, "Uncertain", 9) == 0)
          {
            switch ((unsigned char)(key[9]))
              {
                case 'D':
                    if (strcmp(&(key[10]), "ate") == 0)
                        {
                        fromJSONUncertainDate(new_component, false);
                        return;
                        }
                    break;
                case 'T':
                    if (strcmp(&(key[10]), "ime") == 0)
                        {
                        fromJSONUncertainTime(new_component, false);
                        return;
                        }
                    break;
                default:
                    break;
              }
          }
        extraUncertainDateAndOrTimeSetField(key, new_component);
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
        DateAndOrTimeJSON::write_fields_as_json(handler);
        if (flagHasUncertainDate)
          {
            handler->start_pair("UncertainDate");
            storeUncertainDate->write_as_json(handler);
          }
        if (flagHasUncertainTime)
          {
            handler->start_pair("UncertainTime");
            storeUncertainTime->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static UncertainDateAndOrTimeJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UncertainDateAndOrTimeJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UncertainDateAndOrTimeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UncertainDateAndOrTimeJSON>, UncertainDateAndOrTimeJSON *, bool> generator("Type UncertainDateAndOrTime", ignore_extras);
            parse_json_value(text, "Text for UncertainDateAndOrTimeJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UncertainDateAndOrTimeJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UncertainDateAndOrTimeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UncertainDateAndOrTimeJSON>, UncertainDateAndOrTimeJSON *, bool> generator("Type UncertainDateAndOrTime", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public DateAndOrTimeJSON::Generator
      {
      private:
        JSONHoldingGenerator<TypeUncertainDateJSON::Generator, RCHandle<TypeUncertainDateJSON>, TypeUncertainDateJSON *, bool > fieldGeneratorUncertainDate;
        JSONHoldingGenerator<TypeUncertainTimeJSON::Generator, RCHandle<TypeUncertainTimeJSON>, TypeUncertainTimeJSON *, bool > fieldGeneratorUncertainTime;
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
            UncertainDateAndOrTimeJSON *result = new UncertainDateAndOrTimeJSON();
            assert(result != NULL);
            RCHandle<UncertainDateAndOrTimeJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUncertainDateAndOrTimeAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(DateAndOrTimeJSON *new_result)
          {
            handle_result((UncertainDateAndOrTimeJSON *)new_result);
          }
        void finish(UncertainDateAndOrTimeJSON *result)
          {
            if (fieldGeneratorUncertainDate.have_value)
              {
                result->setUncertainDate(fieldGeneratorUncertainDate.value.referenced());
                fieldGeneratorUncertainDate.have_value = false;
              }
            if (fieldGeneratorUncertainTime.have_value)
              {
                result->setUncertainTime(fieldGeneratorUncertainTime.value.referenced());
                fieldGeneratorUncertainTime.have_value = false;
              }
            DateAndOrTimeJSON::Generator::finish(result);
          }
        virtual void handle_result(UncertainDateAndOrTimeJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strncmp(field_name, "Uncertain", 9) == 0)
              {
                switch ((unsigned char)(field_name[9]))
                  {
                    case 'D':
                        if (strcmp(&(field_name[10]), "ate") == 0)
                            return &fieldGeneratorUncertainDate;
                        break;
                    case 'T':
                        if (strcmp(&(field_name[10]), "ime") == 0)
                            return &fieldGeneratorUncertainTime;
                        break;
                    default:
                        break;
                  }
              }
            return DateAndOrTimeJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : DateAndOrTimeJSON::Generator(ignore_extras), fieldGeneratorUncertainDate("field \"UncertainDate\" of the UncertainDateAndOrTime class", ignore_extras), fieldGeneratorUncertainTime("field \"UncertainTime\" of the UncertainDateAndOrTime class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UncertainDateAndOrTime class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorUncertainDate.reset();
            fieldGeneratorUncertainTime.reset();
            DateAndOrTimeJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
    static UncertainDateAndOrTimeJSON *from_DateAndOrTimeJSON_json(const DateAndOrTimeJSON * ancestor, bool ignore_extras = false)
      {
        assert(ancestor != NULL);
        UncertainDateAndOrTimeJSON * result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UncertainDateAndOrTimeJSON>, UncertainDateAndOrTimeJSON *, bool> handler("Type UncertainDateAndOrTime", ignore_extras);
            ancestor->write_as_json(&handler);
            result = handler.value.referenced();
            result->add_reference();
          }
        result->remove_reference_no_delete();
        return result;
      }
  };

#endif /* UNCERTAINDATEANDORTIMEJSON_H */
