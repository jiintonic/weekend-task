/* file "SportsStandingsDataJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSSTANDINGSDATAJSON_H
#define SPORTSSTANDINGSDATAJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONIntegerUnboundRangeGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONBooleanGenerator.h"
#include "OInteger.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsStandingsDataJSON : public ReferenceCounted
  {
  public:
    class TypeConferenceRecordJSON : public ReferenceCounted
      {
      private:
        bool flagHasWins;
        OInteger storeWins;
        bool flagHasLosses;
        OInteger storeLosses;
        bool flagHasWinningPercentage;
        double storeWinningPercentage;
        std::string textStoreWinningPercentage;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeConferenceRecordJSON(const TypeConferenceRecordJSON &);
        TypeConferenceRecordJSON & operator=(const TypeConferenceRecordJSON &other);

        void  fromJSONWins(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONLosses(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONWinningPercentage(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeConferenceRecordJSON(void);
        virtual ~TypeConferenceRecordJSON(void);
        bool  hasWins(void) const;
        OInteger  getWins(void);
        const OInteger  getWins(void) const;
        bool  hasLosses(void) const;
        OInteger  getLosses(void);
        const OInteger  getLosses(void) const;
        bool  hasWinningPercentage(void) const;
        double  getWinningPercentage(void);
        const double  getWinningPercentage(void) const;
        std::string  getWinningPercentageAsText(void) const;

        virtual size_t extraTypeConferenceRecordComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeConferenceRecordComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeConferenceRecordComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeConferenceRecordComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeConferenceRecordLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeConferenceRecordLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setWins(OInteger new_value)
          {
            flagHasWins = true;
            if (new_value < 0)
                throw("The value for field Wins of TypeConferenceRecordJSON is less than the lower bound (0) for that field.");
            storeWins = new_value;
          }
        void unsetWins(void)
          {
            flagHasWins = false;
          }
        void setLosses(OInteger new_value)
          {
            flagHasLosses = true;
            if (new_value < 0)
                throw("The value for field Losses of TypeConferenceRecordJSON is less than the lower bound (0) for that field.");
            storeLosses = new_value;
          }
        void unsetLosses(void)
          {
            flagHasLosses = false;
          }
        void setWinningPercentage(double new_value)
          {
            flagHasWinningPercentage = true;
            if (new_value < 0)
                throw("The value for field WinningPercentage of TypeConferenceRecordJSON is less than the lower bound (0) for that field.");
            if (new_value > 1)
                throw("The value for field WinningPercentage of TypeConferenceRecordJSON is greater than the upper bound (1) for that field.");
            storeWinningPercentage = new_value;
            textStoreWinningPercentage = "";
          }
        void setWinningPercentageText(std::string new_value)
          {
            flagHasWinningPercentage = true;
            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                throw("The text value for field WinningPercentage of TypeConferenceRecordJSON is not a valid number.");
            if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
                throw("The value for field WinningPercentage of TypeConferenceRecordJSON is less than the lower bound (0) for that field.");
            if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "1", "", false, "1") > 0)
                throw("The value for field WinningPercentage of TypeConferenceRecordJSON is greater than the upper bound (1) for that field.");
            textStoreWinningPercentage = new_value;
          }
        void unsetWinningPercentage(void)
          {
            flagHasWinningPercentage = false;
          }

        virtual void extraTypeConferenceRecordAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeConferenceRecordSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeConferenceRecordLookup(key);
            if (old_field == NULL)
              {
                extraTypeConferenceRecordAppendPair(key, new_component);
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
            assert(flagHasWins);
            handler->start_pair("Wins");
            handler->number_value(storeWins.get_o_integer());
            assert(flagHasLosses);
            handler->start_pair("Losses");
            handler->number_value(storeLosses.get_o_integer());
            if (flagHasWinningPercentage)
              {
                handler->start_pair("WinningPercentage");
                if (textStoreWinningPercentage != "")
                    handler->number_value(textStoreWinningPercentage.c_str());
                else if (((double)(long int)storeWinningPercentage) == storeWinningPercentage)
                    handler->number_value((long int)storeWinningPercentage);
                else
                    handler->number_value(storeWinningPercentage);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasWins()))
              {
                return "When parsing the object for %what%, the \"Wins\" field was missing.";
              }
            if (!(hasLosses()))
              {
                return "When parsing the object for %what%, the \"Losses\" field was missing.";
              }
            return NULL;
          }

        static TypeConferenceRecordJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeConferenceRecordJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeConferenceRecordJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeConferenceRecordJSON>, TypeConferenceRecordJSON *, bool> generator("Type TypeConferenceRecord", ignore_extras);
                parse_json_value(text, "Text for TypeConferenceRecordJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeConferenceRecordJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeConferenceRecordJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeConferenceRecordJSON>, TypeConferenceRecordJSON *, bool> generator("Type TypeConferenceRecord", ignore_extras);
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
            static char lowerBoundWins[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundWins>, OInteger, o_integer > fieldGeneratorWins;
            static char lowerBoundLosses[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundLosses>, OInteger, o_integer > fieldGeneratorLosses;
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorWinningPercentage;
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
                TypeConferenceRecordJSON *result = new TypeConferenceRecordJSON();
                assert(result != NULL);
                RCHandle<TypeConferenceRecordJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeConferenceRecordAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeConferenceRecordJSON *result)
              {
                if (fieldGeneratorWins.have_value)
                  {
                    result->setWins(fieldGeneratorWins.value);
                    fieldGeneratorWins.have_value = false;
                  }
                else if (!(result->hasWins()))
                  {
                    error("When parsing the object for %what%, the \"Wins\" field was missing.");
                  }
                if (fieldGeneratorLosses.have_value)
                  {
                    result->setLosses(fieldGeneratorLosses.value);
                    fieldGeneratorLosses.have_value = false;
                  }
                else if (!(result->hasLosses()))
                  {
                    error("When parsing the object for %what%, the \"Losses\" field was missing.");
                  }
                if (fieldGeneratorWinningPercentage.have_value)
                  {
                    result->setWinningPercentageText(fieldGeneratorWinningPercentage.value);
                    fieldGeneratorWinningPercentage.have_value = false;
                  }
              }
            virtual void handle_result(TypeConferenceRecordJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'L':
                        if (strcmp(&(field_name[1]), "osses") == 0)
                            return &fieldGeneratorLosses;
                        break;
                    case 'W':
                        if (strncmp(&(field_name[1]), "in", 2) == 0)
                          {
                            switch ((unsigned char)(field_name[3]))
                              {
                                case 'n':
                                    if (strcmp(&(field_name[4]), "ingPercentage") == 0)
                                        return &fieldGeneratorWinningPercentage;
                                    break;
                                case 's':
                                    if (field_name[4] == 0)
                                        return &fieldGeneratorWins;
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
            Generator(bool ignore_extras = false) : fieldGeneratorWins("field \"Wins\" of the TypeConferenceRecord class"), fieldGeneratorLosses("field \"Losses\" of the TypeConferenceRecord class"), fieldGeneratorWinningPercentage("field \"WinningPercentage\" of the TypeConferenceRecord class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeConferenceRecord class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorWins.reset();
                fieldGeneratorLosses.reset();
                fieldGeneratorWinningPercentage.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };
    class TypeStreakJSON : public ReferenceCounted
      {
      public:
        enum TypeTypeKnownValues
          {
            Type_Wins,
            Type_Losses,
            Type_OvertimeLosses,
            Type_Ties,
            Type__none
          };
        struct TypeType
          {
            bool in_known_list;
            std::string string_value;
            TypeTypeKnownValues list_value;

            TypeType(void);
            TypeType(const TypeType &other);
            TypeType(TypeTypeKnownValues other);
            bool  operator==(const TypeType &other) const;
            bool  operator!=(const TypeType &other) const;
            bool  operator<(const TypeType &other) const;
            bool  operator>(const TypeType &other) const;
            bool  operator>=(const TypeType &other) const;
            bool  operator<=(const TypeType &other) const;

          };

        static TypeTypeKnownValues  stringToType(const char *chars);
        static const char * stringFromType(TypeTypeKnownValues the_enum);

      private:
        bool flagHasType;
        TypeType storeType;
        bool flagHasLength;
        OInteger storeLength;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeStreakJSON(const TypeStreakJSON &);
        TypeStreakJSON & operator=(const TypeStreakJSON &other);

        void  fromJSONType(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONLength(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeStreakJSON(void);
        virtual ~TypeStreakJSON(void);
        bool  hasType(void) const;
        TypeType  getType(void);
        const TypeType  getType(void) const;
        const char * getTypeAsChars(void) const;
        std::string  getTypeAsString(void) const;
        bool  hasLength(void) const;
        OInteger  getLength(void);
        const OInteger  getLength(void) const;

        virtual size_t extraTypeStreakComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeStreakComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeStreakComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeStreakComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeStreakLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeStreakLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setType(TypeType new_value)
          {
            flagHasType = true;
            storeType = new_value;
          }
        void setType(const char *chars)
          {
            TypeTypeKnownValues known = stringToType(chars);
            TypeType new_value;
            if (known == Type__none)
              {
                new_value.in_known_list = false;
                new_value.string_value = chars;
              }
            else
              {
                new_value.in_known_list = true;
                new_value.list_value = known;
              }
            setType(new_value);
          }
        void setType(std::string the_string)
          {
            setType(the_string.c_str());
          }
        void setType(TypeTypeKnownValues new_value)
          {
            TypeType new_full_value;
            assert(new_value != Type__none);
            new_full_value.in_known_list = true;
            new_full_value.list_value = new_value;
            setType(new_full_value);
          }
        void unsetType(void)
          {
            flagHasType = false;
          }
        void setLength(OInteger new_value)
          {
            flagHasLength = true;
            if (new_value < 0)
                throw("The value for field Length of TypeStreakJSON is less than the lower bound (0) for that field.");
            storeLength = new_value;
          }
        void unsetLength(void)
          {
            flagHasLength = false;
          }

        virtual void extraTypeStreakAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeStreakSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeStreakLookup(key);
            if (old_field == NULL)
              {
                extraTypeStreakAppendPair(key, new_component);
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
            assert(flagHasType);
            handler->start_pair("Type");
            if (storeType.in_known_list)
              {
                switch (storeType.list_value)
                  {
                    case Type_Wins:
                        handler->string_value("Wins");
                        break;
                    case Type_Losses:
                        handler->string_value("Losses");
                        break;
                    case Type_OvertimeLosses:
                        handler->string_value("OvertimeLosses");
                        break;
                    case Type_Ties:
                        handler->string_value("Ties");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeType.string_value);
              }
            assert(flagHasLength);
            handler->start_pair("Length");
            handler->number_value(storeLength.get_o_integer());
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasType()))
              {
                return "When parsing the object for %what%, the \"Type\" field was missing.";
              }
            if (!(hasLength()))
              {
                return "When parsing the object for %what%, the \"Length\" field was missing.";
              }
            return NULL;
          }

        static TypeStreakJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeStreakJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeStreakJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeStreakJSON>, TypeStreakJSON *, bool> generator("Type TypeStreak", ignore_extras);
                parse_json_value(text, "Text for TypeStreakJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeStreakJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeStreakJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeStreakJSON>, TypeStreakJSON *, bool> generator("Type TypeStreak", ignore_extras);
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
        class FieldGeneratorType : public JSONStringGenerator
              {
              protected:
                FieldGeneratorType(const char *what)
                  {
                    set_what(what);
                  }
                FieldGeneratorType(void)
                  {
                  }
                void handle_result(const char *result)
                  {
                    TypeTypeKnownValues known = stringToType(result);
                    TypeType new_value;
                    if (known == Type__none)
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
                virtual void handle_result(TypeType result) = 0;
              };
            JSONHoldingGenerator<FieldGeneratorType, TypeType, TypeType > fieldGeneratorType;
            static char lowerBoundLength[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundLength>, OInteger, o_integer > fieldGeneratorLength;
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
                TypeStreakJSON *result = new TypeStreakJSON();
                assert(result != NULL);
                RCHandle<TypeStreakJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeStreakAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeStreakJSON *result)
              {
                if (fieldGeneratorType.have_value)
                  {
                    result->setType(fieldGeneratorType.value);
                    fieldGeneratorType.have_value = false;
                  }
                else if (!(result->hasType()))
                  {
                    error("When parsing the object for %what%, the \"Type\" field was missing.");
                  }
                if (fieldGeneratorLength.have_value)
                  {
                    result->setLength(fieldGeneratorLength.value);
                    fieldGeneratorLength.have_value = false;
                  }
                else if (!(result->hasLength()))
                  {
                    error("When parsing the object for %what%, the \"Length\" field was missing.");
                  }
              }
            virtual void handle_result(TypeStreakJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'L':
                        if (strcmp(&(field_name[1]), "ength") == 0)
                            return &fieldGeneratorLength;
                        break;
                    case 'T':
                        if (strcmp(&(field_name[1]), "ype") == 0)
                            return &fieldGeneratorType;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorType("field \"Type\" of the TypeStreak class"), fieldGeneratorLength("field \"Length\" of the TypeStreak class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeStreak class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorType.reset();
                fieldGeneratorLength.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };
    class TypeLastTenJSON : public ReferenceCounted
      {
      private:
        bool flagHasWins;
        OInteger storeWins;
        bool flagHasLosses;
        OInteger storeLosses;
        bool flagHasOvertimeLosses;
        OInteger storeOvertimeLosses;
        bool flagHasTies;
        OInteger storeTies;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeLastTenJSON(const TypeLastTenJSON &);
        TypeLastTenJSON & operator=(const TypeLastTenJSON &other);

        void  fromJSONWins(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONLosses(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONOvertimeLosses(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONTies(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeLastTenJSON(void);
        virtual ~TypeLastTenJSON(void);
        bool  hasWins(void) const;
        OInteger  getWins(void);
        const OInteger  getWins(void) const;
        bool  hasLosses(void) const;
        OInteger  getLosses(void);
        const OInteger  getLosses(void) const;
        bool  hasOvertimeLosses(void) const;
        OInteger  getOvertimeLosses(void);
        const OInteger  getOvertimeLosses(void) const;
        bool  hasTies(void) const;
        OInteger  getTies(void);
        const OInteger  getTies(void) const;

        virtual size_t extraTypeLastTenComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeLastTenComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeLastTenComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeLastTenComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeLastTenLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeLastTenLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setWins(OInteger new_value)
          {
            flagHasWins = true;
            if (new_value < 0)
                throw("The value for field Wins of TypeLastTenJSON is less than the lower bound (0) for that field.");
            storeWins = new_value;
          }
        void unsetWins(void)
          {
            flagHasWins = false;
          }
        void setLosses(OInteger new_value)
          {
            flagHasLosses = true;
            if (new_value < 0)
                throw("The value for field Losses of TypeLastTenJSON is less than the lower bound (0) for that field.");
            storeLosses = new_value;
          }
        void unsetLosses(void)
          {
            flagHasLosses = false;
          }
        void setOvertimeLosses(OInteger new_value)
          {
            flagHasOvertimeLosses = true;
            if (new_value < 0)
                throw("The value for field OvertimeLosses of TypeLastTenJSON is less than the lower bound (0) for that field.");
            storeOvertimeLosses = new_value;
          }
        void unsetOvertimeLosses(void)
          {
            flagHasOvertimeLosses = false;
          }
        void setTies(OInteger new_value)
          {
            flagHasTies = true;
            if (new_value < 0)
                throw("The value for field Ties of TypeLastTenJSON is less than the lower bound (0) for that field.");
            storeTies = new_value;
          }
        void unsetTies(void)
          {
            flagHasTies = false;
          }

        virtual void extraTypeLastTenAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeLastTenSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeLastTenLookup(key);
            if (old_field == NULL)
              {
                extraTypeLastTenAppendPair(key, new_component);
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
            assert(flagHasWins);
            handler->start_pair("Wins");
            handler->number_value(storeWins.get_o_integer());
            assert(flagHasLosses);
            handler->start_pair("Losses");
            handler->number_value(storeLosses.get_o_integer());
            if (flagHasOvertimeLosses)
              {
                handler->start_pair("OvertimeLosses");
                handler->number_value(storeOvertimeLosses.get_o_integer());
              }
            if (flagHasTies)
              {
                handler->start_pair("Ties");
                handler->number_value(storeTies.get_o_integer());
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasWins()))
              {
                return "When parsing the object for %what%, the \"Wins\" field was missing.";
              }
            if (!(hasLosses()))
              {
                return "When parsing the object for %what%, the \"Losses\" field was missing.";
              }
            return NULL;
          }

        static TypeLastTenJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeLastTenJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeLastTenJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeLastTenJSON>, TypeLastTenJSON *, bool> generator("Type TypeLastTen", ignore_extras);
                parse_json_value(text, "Text for TypeLastTenJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeLastTenJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeLastTenJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeLastTenJSON>, TypeLastTenJSON *, bool> generator("Type TypeLastTen", ignore_extras);
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
            static char lowerBoundWins[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundWins>, OInteger, o_integer > fieldGeneratorWins;
            static char lowerBoundLosses[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundLosses>, OInteger, o_integer > fieldGeneratorLosses;
            static char lowerBoundOvertimeLosses[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundOvertimeLosses>, OInteger, o_integer > fieldGeneratorOvertimeLosses;
            static char lowerBoundTies[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundTies>, OInteger, o_integer > fieldGeneratorTies;
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
                TypeLastTenJSON *result = new TypeLastTenJSON();
                assert(result != NULL);
                RCHandle<TypeLastTenJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeLastTenAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeLastTenJSON *result)
              {
                if (fieldGeneratorWins.have_value)
                  {
                    result->setWins(fieldGeneratorWins.value);
                    fieldGeneratorWins.have_value = false;
                  }
                else if (!(result->hasWins()))
                  {
                    error("When parsing the object for %what%, the \"Wins\" field was missing.");
                  }
                if (fieldGeneratorLosses.have_value)
                  {
                    result->setLosses(fieldGeneratorLosses.value);
                    fieldGeneratorLosses.have_value = false;
                  }
                else if (!(result->hasLosses()))
                  {
                    error("When parsing the object for %what%, the \"Losses\" field was missing.");
                  }
                if (fieldGeneratorOvertimeLosses.have_value)
                  {
                    result->setOvertimeLosses(fieldGeneratorOvertimeLosses.value);
                    fieldGeneratorOvertimeLosses.have_value = false;
                  }
                if (fieldGeneratorTies.have_value)
                  {
                    result->setTies(fieldGeneratorTies.value);
                    fieldGeneratorTies.have_value = false;
                  }
              }
            virtual void handle_result(TypeLastTenJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'L':
                        if (strcmp(&(field_name[1]), "osses") == 0)
                            return &fieldGeneratorLosses;
                        break;
                    case 'O':
                        if (strcmp(&(field_name[1]), "vertimeLosses") == 0)
                            return &fieldGeneratorOvertimeLosses;
                        break;
                    case 'T':
                        if (strcmp(&(field_name[1]), "ies") == 0)
                            return &fieldGeneratorTies;
                        break;
                    case 'W':
                        if (strcmp(&(field_name[1]), "ins") == 0)
                            return &fieldGeneratorWins;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorWins("field \"Wins\" of the TypeLastTen class"), fieldGeneratorLosses("field \"Losses\" of the TypeLastTen class"), fieldGeneratorOvertimeLosses("field \"OvertimeLosses\" of the TypeLastTen class"), fieldGeneratorTies("field \"Ties\" of the TypeLastTen class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeLastTen class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorWins.reset();
                fieldGeneratorLosses.reset();
                fieldGeneratorOvertimeLosses.reset();
                fieldGeneratorTies.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasWins;
    OInteger storeWins;
    bool flagHasLosses;
    OInteger storeLosses;
    bool flagHasOvertimeLosses;
    OInteger storeOvertimeLosses;
    bool flagHasTies;
    OInteger storeTies;
    bool flagHasPoints;
    double storePoints;
    std::string textStorePoints;
    bool flagHasWinningPercentage;
    double storeWinningPercentage;
    std::string textStoreWinningPercentage;
    bool flagHasConferenceRecord;
    TypeConferenceRecordJSON * storeConferenceRecord;
    bool flagHasStreak;
    TypeStreakJSON * storeStreak;
    bool flagHasLastTen;
    TypeLastTenJSON * storeLastTen;
    bool flagHasGamesBehind;
    double storeGamesBehind;
    std::string textStoreGamesBehind;
    bool flagHasGamesBehindWildCard;
    double storeGamesBehindWildCard;
    std::string textStoreGamesBehindWildCard;
    bool flagHasGamesAheadWildCard;
    double storeGamesAheadWildCard;
    std::string textStoreGamesAheadWildCard;
    bool flagHasEliminationNumber;
    OInteger storeEliminationNumber;
    bool flagHasRank;
    OInteger storeRank;
    bool flagHasRankTied;
    bool storeRankTied;
    bool flagHasDivisionLeader;
    bool storeDivisionLeader;
    bool flagHasDivisionLeaderTied;
    bool storeDivisionLeaderTied;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsStandingsDataJSON(const SportsStandingsDataJSON &);
    SportsStandingsDataJSON & operator=(const SportsStandingsDataJSON &other);

    void  fromJSONWins(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLosses(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOvertimeLosses(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTies(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPoints(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWinningPercentage(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONConferenceRecord(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStreak(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLastTen(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGamesBehind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGamesBehindWildCard(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGamesAheadWildCard(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEliminationNumber(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRank(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRankTied(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDivisionLeader(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDivisionLeaderTied(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsStandingsDataJSON(void);
    virtual ~SportsStandingsDataJSON(void);
    bool  hasWins(void) const;
    OInteger  getWins(void);
    const OInteger  getWins(void) const;
    bool  hasLosses(void) const;
    OInteger  getLosses(void);
    const OInteger  getLosses(void) const;
    bool  hasOvertimeLosses(void) const;
    OInteger  getOvertimeLosses(void);
    const OInteger  getOvertimeLosses(void) const;
    bool  hasTies(void) const;
    OInteger  getTies(void);
    const OInteger  getTies(void) const;
    bool  hasPoints(void) const;
    double  getPoints(void);
    const double  getPoints(void) const;
    std::string  getPointsAsText(void) const;
    bool  hasWinningPercentage(void) const;
    double  getWinningPercentage(void);
    const double  getWinningPercentage(void) const;
    std::string  getWinningPercentageAsText(void) const;
    bool  hasConferenceRecord(void) const;
    TypeConferenceRecordJSON *  getConferenceRecord(void);
    const TypeConferenceRecordJSON *  getConferenceRecord(void) const;
    bool  hasStreak(void) const;
    TypeStreakJSON *  getStreak(void);
    const TypeStreakJSON *  getStreak(void) const;
    bool  hasLastTen(void) const;
    TypeLastTenJSON *  getLastTen(void);
    const TypeLastTenJSON *  getLastTen(void) const;
    bool  hasGamesBehind(void) const;
    double  getGamesBehind(void);
    const double  getGamesBehind(void) const;
    std::string  getGamesBehindAsText(void) const;
    bool  hasGamesBehindWildCard(void) const;
    double  getGamesBehindWildCard(void);
    const double  getGamesBehindWildCard(void) const;
    std::string  getGamesBehindWildCardAsText(void) const;
    bool  hasGamesAheadWildCard(void) const;
    double  getGamesAheadWildCard(void);
    const double  getGamesAheadWildCard(void) const;
    std::string  getGamesAheadWildCardAsText(void) const;
    bool  hasEliminationNumber(void) const;
    OInteger  getEliminationNumber(void);
    const OInteger  getEliminationNumber(void) const;
    bool  hasRank(void) const;
    OInteger  getRank(void);
    const OInteger  getRank(void) const;
    bool  hasRankTied(void) const;
    bool  getRankTied(void);
    const bool  getRankTied(void) const;
    bool  hasDivisionLeader(void) const;
    bool  getDivisionLeader(void);
    const bool  getDivisionLeader(void) const;
    bool  hasDivisionLeaderTied(void) const;
    bool  getDivisionLeaderTied(void);
    const bool  getDivisionLeaderTied(void) const;

    virtual size_t extraSportsStandingsDataComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsStandingsDataComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsStandingsDataComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsStandingsDataComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsStandingsDataLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsStandingsDataLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setWins(OInteger new_value)
      {
        flagHasWins = true;
        if (new_value < 0)
            throw("The value for field Wins of SportsStandingsDataJSON is less than the lower bound (0) for that field.");
        storeWins = new_value;
      }
    void unsetWins(void)
      {
        flagHasWins = false;
      }
    void setLosses(OInteger new_value)
      {
        flagHasLosses = true;
        if (new_value < 0)
            throw("The value for field Losses of SportsStandingsDataJSON is less than the lower bound (0) for that field.");
        storeLosses = new_value;
      }
    void unsetLosses(void)
      {
        flagHasLosses = false;
      }
    void setOvertimeLosses(OInteger new_value)
      {
        flagHasOvertimeLosses = true;
        if (new_value < 0)
            throw("The value for field OvertimeLosses of SportsStandingsDataJSON is less than the lower bound (0) for that field.");
        storeOvertimeLosses = new_value;
      }
    void unsetOvertimeLosses(void)
      {
        flagHasOvertimeLosses = false;
      }
    void setTies(OInteger new_value)
      {
        flagHasTies = true;
        if (new_value < 0)
            throw("The value for field Ties of SportsStandingsDataJSON is less than the lower bound (0) for that field.");
        storeTies = new_value;
      }
    void unsetTies(void)
      {
        flagHasTies = false;
      }
    void setPoints(double new_value)
      {
        flagHasPoints = true;
        if (new_value < 0)
            throw("The value for field Points of SportsStandingsDataJSON is less than the lower bound (0) for that field.");
        storePoints = new_value;
        textStorePoints = "";
      }
    void setPointsText(std::string new_value)
      {
        flagHasPoints = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Points of SportsStandingsDataJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field Points of SportsStandingsDataJSON is less than the lower bound (0) for that field.");
        textStorePoints = new_value;
      }
    void unsetPoints(void)
      {
        flagHasPoints = false;
      }
    void setWinningPercentage(double new_value)
      {
        flagHasWinningPercentage = true;
        if (new_value < 0)
            throw("The value for field WinningPercentage of SportsStandingsDataJSON is less than the lower bound (0) for that field.");
        if (new_value > 1)
            throw("The value for field WinningPercentage of SportsStandingsDataJSON is greater than the upper bound (1) for that field.");
        storeWinningPercentage = new_value;
        textStoreWinningPercentage = "";
      }
    void setWinningPercentageText(std::string new_value)
      {
        flagHasWinningPercentage = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field WinningPercentage of SportsStandingsDataJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field WinningPercentage of SportsStandingsDataJSON is less than the lower bound (0) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "1", "", false, "1") > 0)
            throw("The value for field WinningPercentage of SportsStandingsDataJSON is greater than the upper bound (1) for that field.");
        textStoreWinningPercentage = new_value;
      }
    void unsetWinningPercentage(void)
      {
        flagHasWinningPercentage = false;
      }
    void setConferenceRecord(TypeConferenceRecordJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasConferenceRecord)
          {
            storeConferenceRecord->remove_reference();
          }
        flagHasConferenceRecord = true;
        storeConferenceRecord = new_value;
      }
    void unsetConferenceRecord(void)
      {
        if (flagHasConferenceRecord)
          {
            storeConferenceRecord->remove_reference();
          }
        flagHasConferenceRecord = false;
      }
    void setStreak(TypeStreakJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStreak)
          {
            storeStreak->remove_reference();
          }
        flagHasStreak = true;
        storeStreak = new_value;
      }
    void unsetStreak(void)
      {
        if (flagHasStreak)
          {
            storeStreak->remove_reference();
          }
        flagHasStreak = false;
      }
    void setLastTen(TypeLastTenJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasLastTen)
          {
            storeLastTen->remove_reference();
          }
        flagHasLastTen = true;
        storeLastTen = new_value;
      }
    void unsetLastTen(void)
      {
        if (flagHasLastTen)
          {
            storeLastTen->remove_reference();
          }
        flagHasLastTen = false;
      }
    void setGamesBehind(double new_value)
      {
        flagHasGamesBehind = true;
        if (new_value < 0)
            throw("The value for field GamesBehind of SportsStandingsDataJSON is less than the lower bound (0) for that field.");
        storeGamesBehind = new_value;
        textStoreGamesBehind = "";
      }
    void setGamesBehindText(std::string new_value)
      {
        flagHasGamesBehind = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field GamesBehind of SportsStandingsDataJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field GamesBehind of SportsStandingsDataJSON is less than the lower bound (0) for that field.");
        textStoreGamesBehind = new_value;
      }
    void unsetGamesBehind(void)
      {
        flagHasGamesBehind = false;
      }
    void setGamesBehindWildCard(double new_value)
      {
        flagHasGamesBehindWildCard = true;
        if (new_value < 0)
            throw("The value for field GamesBehindWildCard of SportsStandingsDataJSON is less than the lower bound (0) for that field.");
        storeGamesBehindWildCard = new_value;
        textStoreGamesBehindWildCard = "";
      }
    void setGamesBehindWildCardText(std::string new_value)
      {
        flagHasGamesBehindWildCard = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field GamesBehindWildCard of SportsStandingsDataJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field GamesBehindWildCard of SportsStandingsDataJSON is less than the lower bound (0) for that field.");
        textStoreGamesBehindWildCard = new_value;
      }
    void unsetGamesBehindWildCard(void)
      {
        flagHasGamesBehindWildCard = false;
      }
    void setGamesAheadWildCard(double new_value)
      {
        flagHasGamesAheadWildCard = true;
        if (new_value < 0)
            throw("The value for field GamesAheadWildCard of SportsStandingsDataJSON is less than the lower bound (0) for that field.");
        storeGamesAheadWildCard = new_value;
        textStoreGamesAheadWildCard = "";
      }
    void setGamesAheadWildCardText(std::string new_value)
      {
        flagHasGamesAheadWildCard = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field GamesAheadWildCard of SportsStandingsDataJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field GamesAheadWildCard of SportsStandingsDataJSON is less than the lower bound (0) for that field.");
        textStoreGamesAheadWildCard = new_value;
      }
    void unsetGamesAheadWildCard(void)
      {
        flagHasGamesAheadWildCard = false;
      }
    void setEliminationNumber(OInteger new_value)
      {
        flagHasEliminationNumber = true;
        storeEliminationNumber = new_value;
      }
    void unsetEliminationNumber(void)
      {
        flagHasEliminationNumber = false;
      }
    void setRank(OInteger new_value)
      {
        flagHasRank = true;
        if (new_value < 1)
            throw("The value for field Rank of SportsStandingsDataJSON is less than the lower bound (1) for that field.");
        storeRank = new_value;
      }
    void unsetRank(void)
      {
        flagHasRank = false;
      }
    void setRankTied(bool new_value)
      {
        flagHasRankTied = true;
        storeRankTied = new_value;
      }
    void unsetRankTied(void)
      {
        flagHasRankTied = false;
      }
    void setDivisionLeader(bool new_value)
      {
        flagHasDivisionLeader = true;
        storeDivisionLeader = new_value;
      }
    void unsetDivisionLeader(void)
      {
        flagHasDivisionLeader = false;
      }
    void setDivisionLeaderTied(bool new_value)
      {
        flagHasDivisionLeaderTied = true;
        storeDivisionLeaderTied = new_value;
      }
    void unsetDivisionLeaderTied(void)
      {
        flagHasDivisionLeaderTied = false;
      }

    virtual void extraSportsStandingsDataAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsStandingsDataSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsStandingsDataLookup(key);
        if (old_field == NULL)
          {
            extraSportsStandingsDataAppendPair(key, new_component);
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
        assert(flagHasWins);
        handler->start_pair("Wins");
        handler->number_value(storeWins.get_o_integer());
        assert(flagHasLosses);
        handler->start_pair("Losses");
        handler->number_value(storeLosses.get_o_integer());
        if (flagHasOvertimeLosses)
          {
            handler->start_pair("OvertimeLosses");
            handler->number_value(storeOvertimeLosses.get_o_integer());
          }
        if (flagHasTies)
          {
            handler->start_pair("Ties");
            handler->number_value(storeTies.get_o_integer());
          }
        if (flagHasPoints)
          {
            handler->start_pair("Points");
            if (textStorePoints != "")
                handler->number_value(textStorePoints.c_str());
            else if (((double)(long int)storePoints) == storePoints)
                handler->number_value((long int)storePoints);
            else
                handler->number_value(storePoints);
          }
        if (flagHasWinningPercentage)
          {
            handler->start_pair("WinningPercentage");
            if (textStoreWinningPercentage != "")
                handler->number_value(textStoreWinningPercentage.c_str());
            else if (((double)(long int)storeWinningPercentage) == storeWinningPercentage)
                handler->number_value((long int)storeWinningPercentage);
            else
                handler->number_value(storeWinningPercentage);
          }
        if (flagHasConferenceRecord)
          {
            handler->start_pair("ConferenceRecord");
            storeConferenceRecord->write_as_json(handler);
          }
        if (flagHasStreak)
          {
            handler->start_pair("Streak");
            storeStreak->write_as_json(handler);
          }
        if (flagHasLastTen)
          {
            handler->start_pair("LastTen");
            storeLastTen->write_as_json(handler);
          }
        if (flagHasGamesBehind)
          {
            handler->start_pair("GamesBehind");
            if (textStoreGamesBehind != "")
                handler->number_value(textStoreGamesBehind.c_str());
            else if (((double)(long int)storeGamesBehind) == storeGamesBehind)
                handler->number_value((long int)storeGamesBehind);
            else
                handler->number_value(storeGamesBehind);
          }
        if (flagHasGamesBehindWildCard)
          {
            handler->start_pair("GamesBehindWildCard");
            if (textStoreGamesBehindWildCard != "")
                handler->number_value(textStoreGamesBehindWildCard.c_str());
            else if (((double)(long int)storeGamesBehindWildCard) == storeGamesBehindWildCard)
                handler->number_value((long int)storeGamesBehindWildCard);
            else
                handler->number_value(storeGamesBehindWildCard);
          }
        if (flagHasGamesAheadWildCard)
          {
            handler->start_pair("GamesAheadWildCard");
            if (textStoreGamesAheadWildCard != "")
                handler->number_value(textStoreGamesAheadWildCard.c_str());
            else if (((double)(long int)storeGamesAheadWildCard) == storeGamesAheadWildCard)
                handler->number_value((long int)storeGamesAheadWildCard);
            else
                handler->number_value(storeGamesAheadWildCard);
          }
        if (flagHasEliminationNumber)
          {
            handler->start_pair("EliminationNumber");
            handler->number_value(storeEliminationNumber.get_o_integer());
          }
        if (flagHasRank)
          {
            handler->start_pair("Rank");
            handler->number_value(storeRank.get_o_integer());
          }
        if (flagHasRankTied)
          {
            handler->start_pair("RankTied");
            handler->boolean_value(storeRankTied);
          }
        if (flagHasDivisionLeader)
          {
            handler->start_pair("DivisionLeader");
            handler->boolean_value(storeDivisionLeader);
          }
        if (flagHasDivisionLeaderTied)
          {
            handler->start_pair("DivisionLeaderTied");
            handler->boolean_value(storeDivisionLeaderTied);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasWins()))
          {
            return "When parsing the object for %what%, the \"Wins\" field was missing.";
          }
        if (!(hasLosses()))
          {
            return "When parsing the object for %what%, the \"Losses\" field was missing.";
          }
        return NULL;
      }

    static SportsStandingsDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsStandingsDataJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsStandingsDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsStandingsDataJSON>, SportsStandingsDataJSON *, bool> generator("Type SportsStandingsData", ignore_extras);
            parse_json_value(text, "Text for SportsStandingsDataJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsStandingsDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsStandingsDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsStandingsDataJSON>, SportsStandingsDataJSON *, bool> generator("Type SportsStandingsData", ignore_extras);
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
        static char lowerBoundWins[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundWins>, OInteger, o_integer > fieldGeneratorWins;
        static char lowerBoundLosses[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundLosses>, OInteger, o_integer > fieldGeneratorLosses;
        static char lowerBoundOvertimeLosses[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundOvertimeLosses>, OInteger, o_integer > fieldGeneratorOvertimeLosses;
        static char lowerBoundTies[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundTies>, OInteger, o_integer > fieldGeneratorTies;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorPoints;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorWinningPercentage;
        JSONHoldingGenerator<TypeConferenceRecordJSON::Generator, RCHandle<TypeConferenceRecordJSON>, TypeConferenceRecordJSON *, bool > fieldGeneratorConferenceRecord;
        JSONHoldingGenerator<TypeStreakJSON::Generator, RCHandle<TypeStreakJSON>, TypeStreakJSON *, bool > fieldGeneratorStreak;
        JSONHoldingGenerator<TypeLastTenJSON::Generator, RCHandle<TypeLastTenJSON>, TypeLastTenJSON *, bool > fieldGeneratorLastTen;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorGamesBehind;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorGamesBehindWildCard;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorGamesAheadWildCard;
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorEliminationNumber;
        static char lowerBoundRank[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundRank>, OInteger, o_integer > fieldGeneratorRank;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorRankTied;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorDivisionLeader;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorDivisionLeaderTied;
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
            SportsStandingsDataJSON *result = new SportsStandingsDataJSON();
            assert(result != NULL);
            RCHandle<SportsStandingsDataJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsStandingsDataAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsStandingsDataJSON *result)
          {
            if (fieldGeneratorWins.have_value)
              {
                result->setWins(fieldGeneratorWins.value);
                fieldGeneratorWins.have_value = false;
              }
            else if (!(result->hasWins()))
              {
                error("When parsing the object for %what%, the \"Wins\" field was missing.");
              }
            if (fieldGeneratorLosses.have_value)
              {
                result->setLosses(fieldGeneratorLosses.value);
                fieldGeneratorLosses.have_value = false;
              }
            else if (!(result->hasLosses()))
              {
                error("When parsing the object for %what%, the \"Losses\" field was missing.");
              }
            if (fieldGeneratorOvertimeLosses.have_value)
              {
                result->setOvertimeLosses(fieldGeneratorOvertimeLosses.value);
                fieldGeneratorOvertimeLosses.have_value = false;
              }
            if (fieldGeneratorTies.have_value)
              {
                result->setTies(fieldGeneratorTies.value);
                fieldGeneratorTies.have_value = false;
              }
            if (fieldGeneratorPoints.have_value)
              {
                result->setPointsText(fieldGeneratorPoints.value);
                fieldGeneratorPoints.have_value = false;
              }
            if (fieldGeneratorWinningPercentage.have_value)
              {
                result->setWinningPercentageText(fieldGeneratorWinningPercentage.value);
                fieldGeneratorWinningPercentage.have_value = false;
              }
            if (fieldGeneratorConferenceRecord.have_value)
              {
                result->setConferenceRecord(fieldGeneratorConferenceRecord.value.referenced());
                fieldGeneratorConferenceRecord.have_value = false;
              }
            if (fieldGeneratorStreak.have_value)
              {
                result->setStreak(fieldGeneratorStreak.value.referenced());
                fieldGeneratorStreak.have_value = false;
              }
            if (fieldGeneratorLastTen.have_value)
              {
                result->setLastTen(fieldGeneratorLastTen.value.referenced());
                fieldGeneratorLastTen.have_value = false;
              }
            if (fieldGeneratorGamesBehind.have_value)
              {
                result->setGamesBehindText(fieldGeneratorGamesBehind.value);
                fieldGeneratorGamesBehind.have_value = false;
              }
            if (fieldGeneratorGamesBehindWildCard.have_value)
              {
                result->setGamesBehindWildCardText(fieldGeneratorGamesBehindWildCard.value);
                fieldGeneratorGamesBehindWildCard.have_value = false;
              }
            if (fieldGeneratorGamesAheadWildCard.have_value)
              {
                result->setGamesAheadWildCardText(fieldGeneratorGamesAheadWildCard.value);
                fieldGeneratorGamesAheadWildCard.have_value = false;
              }
            if (fieldGeneratorEliminationNumber.have_value)
              {
                result->setEliminationNumber(fieldGeneratorEliminationNumber.value);
                fieldGeneratorEliminationNumber.have_value = false;
              }
            if (fieldGeneratorRank.have_value)
              {
                result->setRank(fieldGeneratorRank.value);
                fieldGeneratorRank.have_value = false;
              }
            if (fieldGeneratorRankTied.have_value)
              {
                result->setRankTied(fieldGeneratorRankTied.value);
                fieldGeneratorRankTied.have_value = false;
              }
            if (fieldGeneratorDivisionLeader.have_value)
              {
                result->setDivisionLeader(fieldGeneratorDivisionLeader.value);
                fieldGeneratorDivisionLeader.have_value = false;
              }
            if (fieldGeneratorDivisionLeaderTied.have_value)
              {
                result->setDivisionLeaderTied(fieldGeneratorDivisionLeaderTied.value);
                fieldGeneratorDivisionLeaderTied.have_value = false;
              }
          }
        virtual void handle_result(SportsStandingsDataJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "onferenceRecord") == 0)
                        return &fieldGeneratorConferenceRecord;
                    break;
                case 'D':
                    if (strncmp(&(field_name[1]), "ivisionLeader", 13) == 0)
                      {
                        switch ((unsigned char)(field_name[14]))
                          {
                            case 0:
                                return &fieldGeneratorDivisionLeader;
                            case 'T':
                                if (strcmp(&(field_name[15]), "ied") == 0)
                                    return &fieldGeneratorDivisionLeaderTied;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'E':
                    if (strcmp(&(field_name[1]), "liminationNumber") == 0)
                        return &fieldGeneratorEliminationNumber;
                    break;
                case 'G':
                    if (strncmp(&(field_name[1]), "ames", 4) == 0)
                      {
                        switch ((unsigned char)(field_name[5]))
                          {
                            case 'A':
                                if (strcmp(&(field_name[6]), "headWildCard") == 0)
                                    return &fieldGeneratorGamesAheadWildCard;
                                break;
                            case 'B':
                                if (strncmp(&(field_name[6]), "ehind", 5) == 0)
                                  {
                                    switch ((unsigned char)(field_name[11]))
                                      {
                                        case 0:
                                            return &fieldGeneratorGamesBehind;
                                        case 'W':
                                            if (strcmp(&(field_name[12]), "ildCard") == 0)
                                                return &fieldGeneratorGamesBehindWildCard;
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
                case 'L':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "stTen") == 0)
                                return &fieldGeneratorLastTen;
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "sses") == 0)
                                return &fieldGeneratorLosses;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'O':
                    if (strcmp(&(field_name[1]), "vertimeLosses") == 0)
                        return &fieldGeneratorOvertimeLosses;
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "oints") == 0)
                        return &fieldGeneratorPoints;
                    break;
                case 'R':
                    if (strncmp(&(field_name[1]), "ank", 3) == 0)
                      {
                        switch ((unsigned char)(field_name[4]))
                          {
                            case 0:
                                return &fieldGeneratorRank;
                            case 'T':
                                if (strcmp(&(field_name[5]), "ied") == 0)
                                    return &fieldGeneratorRankTied;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "treak") == 0)
                        return &fieldGeneratorStreak;
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "ies") == 0)
                        return &fieldGeneratorTies;
                    break;
                case 'W':
                    if (strncmp(&(field_name[1]), "in", 2) == 0)
                      {
                        switch ((unsigned char)(field_name[3]))
                          {
                            case 'n':
                                if (strcmp(&(field_name[4]), "ingPercentage") == 0)
                                    return &fieldGeneratorWinningPercentage;
                                break;
                            case 's':
                                if (field_name[4] == 0)
                                    return &fieldGeneratorWins;
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
        Generator(bool ignore_extras = false) : fieldGeneratorWins("field \"Wins\" of the SportsStandingsData class"), fieldGeneratorLosses("field \"Losses\" of the SportsStandingsData class"), fieldGeneratorOvertimeLosses("field \"OvertimeLosses\" of the SportsStandingsData class"), fieldGeneratorTies("field \"Ties\" of the SportsStandingsData class"), fieldGeneratorPoints("field \"Points\" of the SportsStandingsData class"), fieldGeneratorWinningPercentage("field \"WinningPercentage\" of the SportsStandingsData class"), fieldGeneratorConferenceRecord("field \"ConferenceRecord\" of the SportsStandingsData class", ignore_extras), fieldGeneratorStreak("field \"Streak\" of the SportsStandingsData class", ignore_extras), fieldGeneratorLastTen("field \"LastTen\" of the SportsStandingsData class", ignore_extras), fieldGeneratorGamesBehind("field \"GamesBehind\" of the SportsStandingsData class"), fieldGeneratorGamesBehindWildCard("field \"GamesBehindWildCard\" of the SportsStandingsData class"), fieldGeneratorGamesAheadWildCard("field \"GamesAheadWildCard\" of the SportsStandingsData class"), fieldGeneratorEliminationNumber("field \"EliminationNumber\" of the SportsStandingsData class"), fieldGeneratorRank("field \"Rank\" of the SportsStandingsData class"), fieldGeneratorRankTied("field \"RankTied\" of the SportsStandingsData class"), fieldGeneratorDivisionLeader("field \"DivisionLeader\" of the SportsStandingsData class"), fieldGeneratorDivisionLeaderTied("field \"DivisionLeaderTied\" of the SportsStandingsData class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsStandingsData class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorWins.reset();
            fieldGeneratorLosses.reset();
            fieldGeneratorOvertimeLosses.reset();
            fieldGeneratorTies.reset();
            fieldGeneratorPoints.reset();
            fieldGeneratorWinningPercentage.reset();
            fieldGeneratorConferenceRecord.reset();
            fieldGeneratorStreak.reset();
            fieldGeneratorLastTen.reset();
            fieldGeneratorGamesBehind.reset();
            fieldGeneratorGamesBehindWildCard.reset();
            fieldGeneratorGamesAheadWildCard.reset();
            fieldGeneratorEliminationNumber.reset();
            fieldGeneratorRank.reset();
            fieldGeneratorRankTied.reset();
            fieldGeneratorDivisionLeader.reset();
            fieldGeneratorDivisionLeaderTied.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSSTANDINGSDATAJSON_H */
