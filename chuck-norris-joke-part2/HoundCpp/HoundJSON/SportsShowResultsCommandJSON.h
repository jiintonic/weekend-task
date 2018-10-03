/* file "SportsShowResultsCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSSHOWRESULTSCOMMANDJSON_H
#define SPORTSSHOWRESULTSCOMMANDJSON_H

#pragma interface

#include "SportsCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include "SportsResultScoreJSON.h"
#include "SportsSeriesStatusJSON.h"
#include "SportsInputDataJSON.h"
#include "DateAndOrTimeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsShowResultsCommandJSON : public SportsCommandJSON
  {
  public:
    class TypeNativeDataJSON : public ReferenceCounted
      {
      public:
        enum TypeResultsTypeKnownValues
          {
            ResultsType_Unknown,
            ResultsType_SameTeam,
            ResultsType_Generic,
            ResultsType_Series,
            ResultsType_PlayoffsComplete,
            ResultsType__none
          };
        struct TypeResultsType
          {
            bool in_known_list;
            std::string string_value;
            TypeResultsTypeKnownValues list_value;

            TypeResultsType(void);
            TypeResultsType(const TypeResultsType &other);
            TypeResultsType(TypeResultsTypeKnownValues other);
            bool  operator==(const TypeResultsType &other) const;
            bool  operator!=(const TypeResultsType &other) const;
            bool  operator<(const TypeResultsType &other) const;
            bool  operator>(const TypeResultsType &other) const;
            bool  operator>=(const TypeResultsType &other) const;
            bool  operator<=(const TypeResultsType &other) const;

          };

        static TypeResultsTypeKnownValues  stringToResultsType(const char *chars);
        static const char * stringFromResultsType(TypeResultsTypeKnownValues the_enum);
        enum TypeResultErrorKnownValues
          {
            ResultError_None,
            ResultError_ScoreNotFound,
            ResultError_NotSupported,
            ResultError_LocationUnavailable,
            ResultError__none
          };
        struct TypeResultError
          {
            bool in_known_list;
            std::string string_value;
            TypeResultErrorKnownValues list_value;

            TypeResultError(void);
            TypeResultError(const TypeResultError &other);
            TypeResultError(TypeResultErrorKnownValues other);
            bool  operator==(const TypeResultError &other) const;
            bool  operator!=(const TypeResultError &other) const;
            bool  operator<(const TypeResultError &other) const;
            bool  operator>(const TypeResultError &other) const;
            bool  operator>=(const TypeResultError &other) const;
            bool  operator<=(const TypeResultError &other) const;

          };

        static TypeResultErrorKnownValues  stringToResultError(const char *chars);
        static const char * stringFromResultError(TypeResultErrorKnownValues the_enum);

      private:
        bool flagHasSportsResultScore;
        std::vector< SportsResultScoreJSON * > storeSportsResultScore;
        bool flagHasSeriesStatus;
        SportsSeriesStatusJSON * storeSeriesStatus;
        bool flagHasResultsType;
        TypeResultsType storeResultsType;
        bool flagHasResultError;
        TypeResultError storeResultError;
        bool flagHasSportsInputData;
        SportsInputDataJSON * storeSportsInputData;
        bool flagHasNow;
        DateAndOrTimeJSON * storeNow;
        bool flagHasLatitude;
        double storeLatitude;
        std::string textStoreLatitude;
        bool flagHasLongitude;
        double storeLongitude;
        std::string textStoreLongitude;
        bool flagHasDateLocationConstraintsDropped;
        bool storeDateLocationConstraintsDropped;
        bool flagHasWebCommandEnabled;
        bool storeWebCommandEnabled;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeNativeDataJSON(const TypeNativeDataJSON &);
        TypeNativeDataJSON & operator=(const TypeNativeDataJSON &other);

        void  fromJSONSportsResultScore(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONSeriesStatus(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONResultsType(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONResultError(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONSportsInputData(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONNow(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONLatitude(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONLongitude(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONDateLocationConstraintsDropped(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONWebCommandEnabled(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeNativeDataJSON(void);
        virtual ~TypeNativeDataJSON(void);
        bool  hasSportsResultScore(void) const;
        size_t  countOfSportsResultScore(void) const;
        SportsResultScoreJSON *  elementOfSportsResultScore(size_t element_num);
        const SportsResultScoreJSON *  elementOfSportsResultScore(size_t element_num) const;
        std::vector< SportsResultScoreJSON * >  getSportsResultScore(void);
        const std::vector< SportsResultScoreJSON * >  getSportsResultScore(void) const;
        bool  hasSeriesStatus(void) const;
        SportsSeriesStatusJSON *  getSeriesStatus(void);
        const SportsSeriesStatusJSON *  getSeriesStatus(void) const;
        bool  hasResultsType(void) const;
        TypeResultsType  getResultsType(void);
        const TypeResultsType  getResultsType(void) const;
        const char * getResultsTypeAsChars(void) const;
        std::string  getResultsTypeAsString(void) const;
        bool  hasResultError(void) const;
        TypeResultError  getResultError(void);
        const TypeResultError  getResultError(void) const;
        const char * getResultErrorAsChars(void) const;
        std::string  getResultErrorAsString(void) const;
        bool  hasSportsInputData(void) const;
        SportsInputDataJSON *  getSportsInputData(void);
        const SportsInputDataJSON *  getSportsInputData(void) const;
        bool  hasNow(void) const;
        DateAndOrTimeJSON *  getNow(void);
        const DateAndOrTimeJSON *  getNow(void) const;
        bool  hasLatitude(void) const;
        double  getLatitude(void);
        const double  getLatitude(void) const;
        std::string  getLatitudeAsText(void) const;
        bool  hasLongitude(void) const;
        double  getLongitude(void);
        const double  getLongitude(void) const;
        std::string  getLongitudeAsText(void) const;
        bool  hasDateLocationConstraintsDropped(void) const;
        bool  getDateLocationConstraintsDropped(void);
        const bool  getDateLocationConstraintsDropped(void) const;
        bool  hasWebCommandEnabled(void) const;
        bool  getWebCommandEnabled(void);
        const bool  getWebCommandEnabled(void) const;

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

        void initSportsResultScore(void)
          {
            if (flagHasSportsResultScore)
              {
                for (size_t num2 = 0; num2 < storeSportsResultScore.size(); ++num2)
                  {
                    storeSportsResultScore[num2]->remove_reference();
                  }
              }
            flagHasSportsResultScore = true;
            storeSportsResultScore.clear();
          }
        void appendSportsResultScore(SportsResultScoreJSON * to_append)
          {
            if (!flagHasSportsResultScore)
              {
                flagHasSportsResultScore = true;
                storeSportsResultScore.clear();
              }
            assert(flagHasSportsResultScore);
            to_append->add_reference();
            storeSportsResultScore.push_back(to_append);
          }
        void unsetSportsResultScore(void)
          {
            if (flagHasSportsResultScore)
              {
                for (size_t num3 = 0; num3 < storeSportsResultScore.size(); ++num3)
                  {
                    storeSportsResultScore[num3]->remove_reference();
                  }
              }
            flagHasSportsResultScore = false;
            storeSportsResultScore.clear();
          }
        void setSeriesStatus(SportsSeriesStatusJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasSeriesStatus)
              {
                storeSeriesStatus->remove_reference();
              }
            flagHasSeriesStatus = true;
            storeSeriesStatus = new_value;
          }
        void unsetSeriesStatus(void)
          {
            if (flagHasSeriesStatus)
              {
                storeSeriesStatus->remove_reference();
              }
            flagHasSeriesStatus = false;
          }
        void setResultsType(TypeResultsType new_value)
          {
            flagHasResultsType = true;
            storeResultsType = new_value;
          }
        void setResultsType(const char *chars)
          {
            TypeResultsTypeKnownValues known = stringToResultsType(chars);
            TypeResultsType new_value;
            if (known == ResultsType__none)
              {
                new_value.in_known_list = false;
                new_value.string_value = chars;
              }
            else
              {
                new_value.in_known_list = true;
                new_value.list_value = known;
              }
            setResultsType(new_value);
          }
        void setResultsType(std::string the_string)
          {
            setResultsType(the_string.c_str());
          }
        void setResultsType(TypeResultsTypeKnownValues new_value)
          {
            TypeResultsType new_full_value;
            assert(new_value != ResultsType__none);
            new_full_value.in_known_list = true;
            new_full_value.list_value = new_value;
            setResultsType(new_full_value);
          }
        void unsetResultsType(void)
          {
            flagHasResultsType = false;
          }
        void setResultError(TypeResultError new_value)
          {
            flagHasResultError = true;
            storeResultError = new_value;
          }
        void setResultError(const char *chars)
          {
            TypeResultErrorKnownValues known = stringToResultError(chars);
            TypeResultError new_value;
            if (known == ResultError__none)
              {
                new_value.in_known_list = false;
                new_value.string_value = chars;
              }
            else
              {
                new_value.in_known_list = true;
                new_value.list_value = known;
              }
            setResultError(new_value);
          }
        void setResultError(std::string the_string)
          {
            setResultError(the_string.c_str());
          }
        void setResultError(TypeResultErrorKnownValues new_value)
          {
            TypeResultError new_full_value;
            assert(new_value != ResultError__none);
            new_full_value.in_known_list = true;
            new_full_value.list_value = new_value;
            setResultError(new_full_value);
          }
        void unsetResultError(void)
          {
            flagHasResultError = false;
          }
        void setSportsInputData(SportsInputDataJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasSportsInputData)
              {
                storeSportsInputData->remove_reference();
              }
            flagHasSportsInputData = true;
            storeSportsInputData = new_value;
          }
        void unsetSportsInputData(void)
          {
            if (flagHasSportsInputData)
              {
                storeSportsInputData->remove_reference();
              }
            flagHasSportsInputData = false;
          }
        void setNow(DateAndOrTimeJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasNow)
              {
                storeNow->remove_reference();
              }
            flagHasNow = true;
            storeNow = new_value;
          }
        void unsetNow(void)
          {
            if (flagHasNow)
              {
                storeNow->remove_reference();
              }
            flagHasNow = false;
          }
        void setLatitude(double new_value)
          {
            flagHasLatitude = true;
            if (new_value < -90)
                throw("The value for field Latitude of TypeNativeDataJSON is less than the lower bound (-90) for that field.");
            if (new_value > 90)
                throw("The value for field Latitude of TypeNativeDataJSON is greater than the upper bound (90) for that field.");
            storeLatitude = new_value;
            textStoreLatitude = "";
          }
        void setLatitudeText(std::string new_value)
          {
            flagHasLatitude = true;
            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                throw("The text value for field Latitude of TypeNativeDataJSON is not a valid number.");
            if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), true, "90", "", false, "2") < 0)
                throw("The value for field Latitude of TypeNativeDataJSON is less than the lower bound (-90) for that field.");
            if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "90", "", false, "2") > 0)
                throw("The value for field Latitude of TypeNativeDataJSON is greater than the upper bound (90) for that field.");
            textStoreLatitude = new_value;
          }
        void unsetLatitude(void)
          {
            flagHasLatitude = false;
          }
        void setLongitude(double new_value)
          {
            flagHasLongitude = true;
            if (new_value < -180)
                throw("The value for field Longitude of TypeNativeDataJSON is less than the lower bound (-180) for that field.");
            if (new_value > 180)
                throw("The value for field Longitude of TypeNativeDataJSON is greater than the upper bound (180) for that field.");
            storeLongitude = new_value;
            textStoreLongitude = "";
          }
        void setLongitudeText(std::string new_value)
          {
            flagHasLongitude = true;
            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                throw("The text value for field Longitude of TypeNativeDataJSON is not a valid number.");
            if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), true, "180", "", false, "3") < 0)
                throw("The value for field Longitude of TypeNativeDataJSON is less than the lower bound (-180) for that field.");
            if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "180", "", false, "3") > 0)
                throw("The value for field Longitude of TypeNativeDataJSON is greater than the upper bound (180) for that field.");
            textStoreLongitude = new_value;
          }
        void unsetLongitude(void)
          {
            flagHasLongitude = false;
          }
        void setDateLocationConstraintsDropped(bool new_value)
          {
            flagHasDateLocationConstraintsDropped = true;
            storeDateLocationConstraintsDropped = new_value;
          }
        void unsetDateLocationConstraintsDropped(void)
          {
            flagHasDateLocationConstraintsDropped = false;
          }
        void setWebCommandEnabled(bool new_value)
          {
            flagHasWebCommandEnabled = true;
            storeWebCommandEnabled = new_value;
          }
        void unsetWebCommandEnabled(void)
          {
            flagHasWebCommandEnabled = false;
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
            if (flagHasSportsResultScore)
              {
                handler->start_pair("SportsResultScore");
                assert(storeSportsResultScore.size() >= 1);
                handler->start_array();
                for (size_t num1 = 0; num1 < storeSportsResultScore.size(); ++num1)
                  {
                    storeSportsResultScore[num1]->write_as_json(handler);
                  }
                handler->finish_array();
              }
            if (flagHasSeriesStatus)
              {
                handler->start_pair("SeriesStatus");
                storeSeriesStatus->write_as_json(handler);
              }
            if (flagHasResultsType)
              {
                handler->start_pair("ResultsType");
                if (storeResultsType.in_known_list)
                  {
                    switch (storeResultsType.list_value)
                      {
                        case ResultsType_Unknown:
                            handler->string_value("Unknown");
                            break;
                        case ResultsType_SameTeam:
                            handler->string_value("SameTeam");
                            break;
                        case ResultsType_Generic:
                            handler->string_value("Generic");
                            break;
                        case ResultsType_Series:
                            handler->string_value("Series");
                            break;
                        case ResultsType_PlayoffsComplete:
                            handler->string_value("PlayoffsComplete");
                            break;
                        default:
                            assert(false);
                      }
                  }
                else
                  {
                            handler->string_value(storeResultsType.string_value);
                  }
              }
            if (flagHasResultError)
              {
                handler->start_pair("ResultError");
                if (storeResultError.in_known_list)
                  {
                    switch (storeResultError.list_value)
                      {
                        case ResultError_None:
                            handler->string_value("None");
                            break;
                        case ResultError_ScoreNotFound:
                            handler->string_value("ScoreNotFound");
                            break;
                        case ResultError_NotSupported:
                            handler->string_value("NotSupported");
                            break;
                        case ResultError_LocationUnavailable:
                            handler->string_value("LocationUnavailable");
                            break;
                        default:
                            assert(false);
                      }
                  }
                else
                  {
                            handler->string_value(storeResultError.string_value);
                  }
              }
            assert(flagHasSportsInputData);
            handler->start_pair("SportsInputData");
            storeSportsInputData->write_as_json(handler);
            assert(flagHasNow);
            handler->start_pair("Now");
            storeNow->write_as_json(handler);
            if (flagHasLatitude)
              {
                handler->start_pair("Latitude");
                if (textStoreLatitude != "")
                    handler->number_value(textStoreLatitude.c_str());
                else if (((double)(long int)storeLatitude) == storeLatitude)
                    handler->number_value((long int)storeLatitude);
                else
                    handler->number_value(storeLatitude);
              }
            if (flagHasLongitude)
              {
                handler->start_pair("Longitude");
                if (textStoreLongitude != "")
                    handler->number_value(textStoreLongitude.c_str());
                else if (((double)(long int)storeLongitude) == storeLongitude)
                    handler->number_value((long int)storeLongitude);
                else
                    handler->number_value(storeLongitude);
              }
            if (flagHasDateLocationConstraintsDropped)
              {
                handler->start_pair("DateLocationConstraintsDropped");
                handler->boolean_value(storeDateLocationConstraintsDropped);
              }
            if (flagHasWebCommandEnabled)
              {
                handler->start_pair("WebCommandEnabled");
                handler->boolean_value(storeWebCommandEnabled);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasSportsInputData()))
              {
                return "When parsing the object for %what%, the \"SportsInputData\" field was missing.";
              }
            if (!(hasNow()))
              {
                return "When parsing the object for %what%, the \"Now\" field was missing.";
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
            JSONHoldingArrayGenerator<SportsResultScoreJSON::Generator, RCHandle<SportsResultScoreJSON>, SportsResultScoreJSON *, bool > fieldGeneratorSportsResultScore;
            JSONHoldingGenerator<SportsSeriesStatusJSON::Generator, RCHandle<SportsSeriesStatusJSON>, SportsSeriesStatusJSON *, bool > fieldGeneratorSeriesStatus;
        class FieldGeneratorResultsType : public JSONStringGenerator
              {
              protected:
                FieldGeneratorResultsType(const char *what)
                  {
                    set_what(what);
                  }
                FieldGeneratorResultsType(void)
                  {
                  }
                void handle_result(const char *result)
                  {
                    TypeResultsTypeKnownValues known = stringToResultsType(result);
                    TypeResultsType new_value;
                    if (known == ResultsType__none)
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
                virtual void handle_result(TypeResultsType result) = 0;
              };
            JSONHoldingGenerator<FieldGeneratorResultsType, TypeResultsType, TypeResultsType > fieldGeneratorResultsType;
        class FieldGeneratorResultError : public JSONStringGenerator
              {
              protected:
                FieldGeneratorResultError(const char *what)
                  {
                    set_what(what);
                  }
                FieldGeneratorResultError(void)
                  {
                  }
                void handle_result(const char *result)
                  {
                    TypeResultErrorKnownValues known = stringToResultError(result);
                    TypeResultError new_value;
                    if (known == ResultError__none)
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
                virtual void handle_result(TypeResultError result) = 0;
              };
            JSONHoldingGenerator<FieldGeneratorResultError, TypeResultError, TypeResultError > fieldGeneratorResultError;
            JSONHoldingGenerator<SportsInputDataJSON::Generator, RCHandle<SportsInputDataJSON>, SportsInputDataJSON *, bool > fieldGeneratorSportsInputData;
            JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorNow;
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorLatitude;
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorLongitude;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorDateLocationConstraintsDropped;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorWebCommandEnabled;
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
                if (fieldGeneratorSportsResultScore.have_value)
                  {
                    result->initSportsResultScore();
                    size_t count = fieldGeneratorSportsResultScore.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendSportsResultScore(fieldGeneratorSportsResultScore.value[num].referenced());
                      }
                    fieldGeneratorSportsResultScore.value.clear();
                    fieldGeneratorSportsResultScore.have_value = false;
                  }
                if (fieldGeneratorSeriesStatus.have_value)
                  {
                    result->setSeriesStatus(fieldGeneratorSeriesStatus.value.referenced());
                    fieldGeneratorSeriesStatus.have_value = false;
                  }
                if (fieldGeneratorResultsType.have_value)
                  {
                    result->setResultsType(fieldGeneratorResultsType.value);
                    fieldGeneratorResultsType.have_value = false;
                  }
                if (fieldGeneratorResultError.have_value)
                  {
                    result->setResultError(fieldGeneratorResultError.value);
                    fieldGeneratorResultError.have_value = false;
                  }
                if (fieldGeneratorSportsInputData.have_value)
                  {
                    result->setSportsInputData(fieldGeneratorSportsInputData.value.referenced());
                    fieldGeneratorSportsInputData.have_value = false;
                  }
                else if (!(result->hasSportsInputData()))
                  {
                    error("When parsing the object for %what%, the \"SportsInputData\" field was missing.");
                  }
                if (fieldGeneratorNow.have_value)
                  {
                    result->setNow(fieldGeneratorNow.value.referenced());
                    fieldGeneratorNow.have_value = false;
                  }
                else if (!(result->hasNow()))
                  {
                    error("When parsing the object for %what%, the \"Now\" field was missing.");
                  }
                if (fieldGeneratorLatitude.have_value)
                  {
                    result->setLatitudeText(fieldGeneratorLatitude.value);
                    fieldGeneratorLatitude.have_value = false;
                  }
                if (fieldGeneratorLongitude.have_value)
                  {
                    result->setLongitudeText(fieldGeneratorLongitude.value);
                    fieldGeneratorLongitude.have_value = false;
                  }
                if (fieldGeneratorDateLocationConstraintsDropped.have_value)
                  {
                    result->setDateLocationConstraintsDropped(fieldGeneratorDateLocationConstraintsDropped.value);
                    fieldGeneratorDateLocationConstraintsDropped.have_value = false;
                  }
                if (fieldGeneratorWebCommandEnabled.have_value)
                  {
                    result->setWebCommandEnabled(fieldGeneratorWebCommandEnabled.value);
                    fieldGeneratorWebCommandEnabled.have_value = false;
                  }
              }
            virtual void handle_result(TypeNativeDataJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'D':
                        if (strcmp(&(field_name[1]), "ateLocationConstraintsDropped") == 0)
                            return &fieldGeneratorDateLocationConstraintsDropped;
                        break;
                    case 'L':
                        switch ((unsigned char)(field_name[1]))
                          {
                            case 'a':
                                if (strcmp(&(field_name[2]), "titude") == 0)
                                    return &fieldGeneratorLatitude;
                                break;
                            case 'o':
                                if (strcmp(&(field_name[2]), "ngitude") == 0)
                                    return &fieldGeneratorLongitude;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'N':
                        if (strcmp(&(field_name[1]), "ow") == 0)
                            return &fieldGeneratorNow;
                        break;
                    case 'R':
                        if (strncmp(&(field_name[1]), "esult", 5) == 0)
                          {
                            switch ((unsigned char)(field_name[6]))
                              {
                                case 'E':
                                    if (strcmp(&(field_name[7]), "rror") == 0)
                                        return &fieldGeneratorResultError;
                                    break;
                                case 's':
                                    if (strcmp(&(field_name[7]), "Type") == 0)
                                        return &fieldGeneratorResultsType;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'S':
                        switch ((unsigned char)(field_name[1]))
                          {
                            case 'e':
                                if (strcmp(&(field_name[2]), "riesStatus") == 0)
                                    return &fieldGeneratorSeriesStatus;
                                break;
                            case 'p':
                                if (strncmp(&(field_name[2]), "orts", 4) == 0)
                                  {
                                    switch ((unsigned char)(field_name[6]))
                                      {
                                        case 'I':
                                            if (strcmp(&(field_name[7]), "nputData") == 0)
                                                return &fieldGeneratorSportsInputData;
                                            break;
                                        case 'R':
                                            if (strcmp(&(field_name[7]), "esultScore") == 0)
                                                return &fieldGeneratorSportsResultScore;
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
                    case 'W':
                        if (strcmp(&(field_name[1]), "ebCommandEnabled") == 0)
                            return &fieldGeneratorWebCommandEnabled;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorSportsResultScore("field \"SportsResultScore\" of the TypeNativeData class", ignore_extras), fieldGeneratorSeriesStatus("field \"SeriesStatus\" of the TypeNativeData class", ignore_extras), fieldGeneratorResultsType("field \"ResultsType\" of the TypeNativeData class"), fieldGeneratorResultError("field \"ResultError\" of the TypeNativeData class"), fieldGeneratorSportsInputData("field \"SportsInputData\" of the TypeNativeData class", ignore_extras), fieldGeneratorNow("field \"Now\" of the TypeNativeData class", ignore_extras), fieldGeneratorLatitude("field \"Latitude\" of the TypeNativeData class"), fieldGeneratorLongitude("field \"Longitude\" of the TypeNativeData class"), fieldGeneratorDateLocationConstraintsDropped("field \"DateLocationConstraintsDropped\" of the TypeNativeData class"), fieldGeneratorWebCommandEnabled("field \"WebCommandEnabled\" of the TypeNativeData class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeNativeData class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorSportsResultScore.reset();
                fieldGeneratorSeriesStatus.reset();
                fieldGeneratorResultsType.reset();
                fieldGeneratorResultError.reset();
                fieldGeneratorSportsInputData.reset();
                fieldGeneratorNow.reset();
                fieldGeneratorLatitude.reset();
                fieldGeneratorLongitude.reset();
                fieldGeneratorDateLocationConstraintsDropped.reset();
                fieldGeneratorWebCommandEnabled.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasNativeData;
    TypeNativeDataJSON * storeNativeData;

    SportsShowResultsCommandJSON(const SportsShowResultsCommandJSON &);
    SportsShowResultsCommandJSON & operator=(const SportsShowResultsCommandJSON &other);

    JSONValue * extraNativeDataToJSON(void) const;

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsShowResultsCommandJSON(void);
    virtual ~SportsShowResultsCommandJSON(void);
    const char * getSportsCommandKind(void) const;
    bool  hasNativeData(void) const;
    TypeNativeDataJSON *  getNativeData(void);
    const TypeNativeDataJSON *  getNativeData(void) const;

    size_t extraSportsCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasNativeData)
            ++result;
        return result;
      }
    const char *extraSportsCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return "NativeData";
            --remainder;
          }
        assert(false);
        return NULL;
      }
    JSONValue *extraSportsCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        assert(false);
        return NULL;
      }
    const JSONValue *extraSportsCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        assert(false);
        return NULL;
      }
    JSONValue *extraSportsCommandLookup(const char *field_name)
      {
        if (strcmp(field_name, "NativeData") == 0)
            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
        return NULL;
      }
    const JSONValue *extraSportsCommandLookup(const char *field_name) const
      {
        if (strcmp(field_name, "NativeData") == 0)
            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
        return NULL;
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

    void extraSportsCommandAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "NativeData") == 0)
            {
            fromJSONNativeData(new_component, false);
            return;
            }
      }
    void extraSportsCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "NativeData") == 0)
            {
            fromJSONNativeData(new_component, false);
            return;
            }
      }

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        SportsCommandJSON::write_fields_as_json(handler);
        if (flagHasNativeData)
          {
            handler->start_pair("NativeData");
            storeNativeData->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SportsShowResultsCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsShowResultsCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsShowResultsCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsShowResultsCommandJSON>, SportsShowResultsCommandJSON *, bool> generator("Type SportsShowResultsCommand", ignore_extras);
            parse_json_value(text, "Text for SportsShowResultsCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsShowResultsCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsShowResultsCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsShowResultsCommandJSON>, SportsShowResultsCommandJSON *, bool> generator("Type SportsShowResultsCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public SportsCommandJSON::Generator
      {
      private:
        JSONHoldingGenerator<TypeNativeDataJSON::Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool > fieldGeneratorNativeData;


      protected:
        void start(void)
          {
          }
        JSONHandler *start_field(const char *field_name)
          {
            JSONHandler *result = start_known_field(field_name);
            if (result != NULL)
                return result;
            std::string message("");
            message = message + "Field \"" + field_name + "\" found for a type that doesn't allow extra fields.";
            char *message_chars = (char *)(malloc(strlen(message.c_str()) + 1));
            strcpy(message_chars, message.c_str());
            throw(message_chars);
          }
        void finish_field(const char *field_name, JSONHandler *field_handler)
          {
          }
        void finish(void)
          {
            if (!(strcmp(getSportsCommandJSONKey().c_str(), "SportsShowResultsCommand") == 0))
                throw("The key field has a value other than `SportsShowResultsCommand'.");
            SportsShowResultsCommandJSON *result = new SportsShowResultsCommandJSON();
            assert(result != NULL);
            RCHandle<SportsShowResultsCommandJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void handle_result(SportsCommandJSON *new_result)
          {
            handle_result((SportsShowResultsCommandJSON *)new_result);
          }
        void finish(SportsShowResultsCommandJSON *result)
          {
            if (fieldGeneratorNativeData.have_value)
              {
                result->setNativeData(fieldGeneratorNativeData.value.referenced());
                fieldGeneratorNativeData.have_value = false;
              }
            SportsCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(SportsShowResultsCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "NativeData") == 0)
                return &fieldGeneratorNativeData;
            return SportsCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : SportsCommandJSON::Generator(ignore_extras), fieldGeneratorNativeData("field \"NativeData\" of the SportsShowResultsCommand class", ignore_extras)
          {
            set_what("the SportsShowResultsCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNativeData.reset();
            SportsCommandJSON::Generator::reset();
          }
      };
  };

#endif /* SPORTSSHOWRESULTSCOMMANDJSON_H */
