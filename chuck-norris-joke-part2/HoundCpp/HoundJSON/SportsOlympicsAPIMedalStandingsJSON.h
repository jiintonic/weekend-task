/* file "SportsOlympicsAPIMedalStandingsJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSOLYMPICSAPIMEDALSTANDINGSJSON_H
#define SPORTSOLYMPICSAPIMEDALSTANDINGSJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include <vector>
#include <string>
#include "OInteger.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsOlympicsAPIMedalStandingsJSON : public ReferenceCounted
  {
  public:
    class Typemedals_by_countryJSON : public ReferenceCounted
      {
      public:
        class Typemedal_infoJSON : public ReferenceCounted
          {
          private:
            bool flagHascountry;
            std::string storecountry;
            bool flagHascountry_code;
            std::string storecountry_code;
            bool flagHasioc_code;
            std::string storeioc_code;
            bool flagHastotal_ranking;
            OInteger storetotal_ranking;
            bool flagHasgold_ranking;
            OInteger storegold_ranking;
            bool flagHastotal;
            OInteger storetotal;
            bool flagHasgold;
            OInteger storegold;
            bool flagHassilver;
            OInteger storesilver;
            bool flagHasbronze;
            OInteger storebronze;
            std::vector<std::string> extraKeys;
            std::vector<JSONValue *> extraValues;
            string_index *extraIndex;

            Typemedal_infoJSON(const Typemedal_infoJSON &);
            Typemedal_infoJSON & operator=(const Typemedal_infoJSON &other);

            void  fromJSONcountry(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONcountry_code(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONioc_code(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONtotal_ranking(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONgold_ranking(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONtotal(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONgold(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONsilver(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONbronze(JSONValue *json_value, bool ignore_extras = false);


          public:
            Typemedal_infoJSON(void);
            virtual ~Typemedal_infoJSON(void);
            bool  hascountry(void) const;
            std::string  getcountry(void);
            const std::string  getcountry(void) const;
            bool  hascountry_code(void) const;
            std::string  getcountry_code(void);
            const std::string  getcountry_code(void) const;
            bool  hasioc_code(void) const;
            std::string  getioc_code(void);
            const std::string  getioc_code(void) const;
            bool  hastotal_ranking(void) const;
            OInteger  gettotal_ranking(void);
            const OInteger  gettotal_ranking(void) const;
            bool  hasgold_ranking(void) const;
            OInteger  getgold_ranking(void);
            const OInteger  getgold_ranking(void) const;
            bool  hastotal(void) const;
            OInteger  gettotal(void);
            const OInteger  gettotal(void) const;
            bool  hasgold(void) const;
            OInteger  getgold(void);
            const OInteger  getgold(void) const;
            bool  hassilver(void) const;
            OInteger  getsilver(void);
            const OInteger  getsilver(void) const;
            bool  hasbronze(void) const;
            OInteger  getbronze(void);
            const OInteger  getbronze(void) const;

            virtual size_t extraTypemedal_infoComponentCount(void) const
              {
                assert(extraKeys.size() == extraValues.size());
                return extraKeys.size();
              }
            virtual const char *extraTypemedal_infoComponentKey(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraKeys[component_num].c_str();
              }
            virtual JSONValue *extraTypemedal_infoComponentValue(size_t component_num)
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual const JSONValue *extraTypemedal_infoComponentValue(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual JSONValue *extraTypemedal_infoLookup(const char *field_name)
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }
            virtual const JSONValue *extraTypemedal_infoLookup(const char *field_name) const
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }

            void setcountry(std::string new_value)
              {
                flagHascountry = true;
                storecountry = new_value;
              }
            void unsetcountry(void)
              {
                flagHascountry = false;
              }
            void setcountry_code(std::string new_value)
              {
                flagHascountry_code = true;
                storecountry_code = new_value;
              }
            void unsetcountry_code(void)
              {
                flagHascountry_code = false;
              }
            void setioc_code(std::string new_value)
              {
                flagHasioc_code = true;
                storeioc_code = new_value;
              }
            void unsetioc_code(void)
              {
                flagHasioc_code = false;
              }
            void settotal_ranking(OInteger new_value)
              {
                flagHastotal_ranking = true;
                if (new_value < 0)
                    throw("The value for field total_ranking of Typemedal_infoJSON is less than the lower bound (0) for that field.");
                storetotal_ranking = new_value;
              }
            void unsettotal_ranking(void)
              {
                flagHastotal_ranking = false;
              }
            void setgold_ranking(OInteger new_value)
              {
                flagHasgold_ranking = true;
                if (new_value < 0)
                    throw("The value for field gold_ranking of Typemedal_infoJSON is less than the lower bound (0) for that field.");
                storegold_ranking = new_value;
              }
            void unsetgold_ranking(void)
              {
                flagHasgold_ranking = false;
              }
            void settotal(OInteger new_value)
              {
                flagHastotal = true;
                if (new_value < 0)
                    throw("The value for field total of Typemedal_infoJSON is less than the lower bound (0) for that field.");
                storetotal = new_value;
              }
            void unsettotal(void)
              {
                flagHastotal = false;
              }
            void setgold(OInteger new_value)
              {
                flagHasgold = true;
                if (new_value < 0)
                    throw("The value for field gold of Typemedal_infoJSON is less than the lower bound (0) for that field.");
                storegold = new_value;
              }
            void unsetgold(void)
              {
                flagHasgold = false;
              }
            void setsilver(OInteger new_value)
              {
                flagHassilver = true;
                if (new_value < 0)
                    throw("The value for field silver of Typemedal_infoJSON is less than the lower bound (0) for that field.");
                storesilver = new_value;
              }
            void unsetsilver(void)
              {
                flagHassilver = false;
              }
            void setbronze(OInteger new_value)
              {
                flagHasbronze = true;
                if (new_value < 0)
                    throw("The value for field bronze of Typemedal_infoJSON is less than the lower bound (0) for that field.");
                storebronze = new_value;
              }
            void unsetbronze(void)
              {
                flagHasbronze = false;
              }

            virtual void extraTypemedal_infoAppendPair(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                assert(extraKeys.size() == extraValues.size());
                extraKeys.push_back(key);
                extraValues.push_back(new_component);
                enter_into_string_index(extraIndex, key, new_component);
                new_component->add_reference();
              }
            virtual void extraTypemedal_infoSetField(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                JSONValue *old_field = extraTypemedal_infoLookup(key);
                if (old_field == NULL)
                  {
                    extraTypemedal_infoAppendPair(key, new_component);
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
                if (flagHascountry)
                  {
                    handler->start_pair("country");
                    handler->string_value(storecountry);
                  }
                if (flagHascountry_code)
                  {
                    handler->start_pair("country_code");
                    handler->string_value(storecountry_code);
                  }
                if (flagHasioc_code)
                  {
                    handler->start_pair("ioc_code");
                    handler->string_value(storeioc_code);
                  }
                if (flagHastotal_ranking)
                  {
                    handler->start_pair("total_ranking");
                    handler->number_value(storetotal_ranking.get_o_integer());
                  }
                if (flagHasgold_ranking)
                  {
                    handler->start_pair("gold_ranking");
                    handler->number_value(storegold_ranking.get_o_integer());
                  }
                if (flagHastotal)
                  {
                    handler->start_pair("total");
                    handler->number_value(storetotal.get_o_integer());
                  }
                if (flagHasgold)
                  {
                    handler->start_pair("gold");
                    handler->number_value(storegold.get_o_integer());
                  }
                if (flagHassilver)
                  {
                    handler->start_pair("silver");
                    handler->number_value(storesilver.get_o_integer());
                  }
                if (flagHasbronze)
                  {
                    handler->start_pair("bronze");
                    handler->number_value(storebronze.get_o_integer());
                  }
              }
            virtual const char *missing_field_error(void) const
              {
                return NULL;
              }

            static Typemedal_infoJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static Typemedal_infoJSON *from_text(const char *text, bool ignore_extras = false)
              {
                Typemedal_infoJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<Typemedal_infoJSON>, Typemedal_infoJSON *, bool> generator("Type Typemedal_info", ignore_extras);
                    parse_json_value(text, "Text for Typemedal_infoJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static Typemedal_infoJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                Typemedal_infoJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<Typemedal_infoJSON>, Typemedal_infoJSON *, bool> generator("Type Typemedal_info", ignore_extras);
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
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorcountry;
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorcountry_code;
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorioc_code;
                static char lowerBoundtotal_ranking[];
                JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundtotal_ranking>, OInteger, o_integer > fieldGeneratortotal_ranking;
                static char lowerBoundgold_ranking[];
                JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundgold_ranking>, OInteger, o_integer > fieldGeneratorgold_ranking;
                static char lowerBoundtotal[];
                JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundtotal>, OInteger, o_integer > fieldGeneratortotal;
                static char lowerBoundgold[];
                JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundgold>, OInteger, o_integer > fieldGeneratorgold;
                static char lowerBoundsilver[];
                JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundsilver>, OInteger, o_integer > fieldGeneratorsilver;
                static char lowerBoundbronze[];
                JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundbronze>, OInteger, o_integer > fieldGeneratorbronze;
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
                    Typemedal_infoJSON *result = new Typemedal_infoJSON();
                    assert(result != NULL);
                    RCHandle<Typemedal_infoJSON> result_holder = result;
                    finish(result);
                    size_t extra_count = unknownFieldGenerator.field_names.size();
                    assert(extra_count == unknownFieldGenerator.field_values.size());
                    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                      {
                        result->extraTypemedal_infoAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                      }
                    unknownFieldGenerator.field_names.clear();
                    unknownFieldGenerator.field_values.clear();
                    destroy_string_index(unknownFieldGenerator.index);
                unknownFieldGenerator.index = create_string_index();
                    handle_result(result);
                  }
                void finish(Typemedal_infoJSON *result)
                  {
                    if (fieldGeneratorcountry.have_value)
                      {
                        result->setcountry(fieldGeneratorcountry.value);
                        fieldGeneratorcountry.have_value = false;
                      }
                    if (fieldGeneratorcountry_code.have_value)
                      {
                        result->setcountry_code(fieldGeneratorcountry_code.value);
                        fieldGeneratorcountry_code.have_value = false;
                      }
                    if (fieldGeneratorioc_code.have_value)
                      {
                        result->setioc_code(fieldGeneratorioc_code.value);
                        fieldGeneratorioc_code.have_value = false;
                      }
                    if (fieldGeneratortotal_ranking.have_value)
                      {
                        result->settotal_ranking(fieldGeneratortotal_ranking.value);
                        fieldGeneratortotal_ranking.have_value = false;
                      }
                    if (fieldGeneratorgold_ranking.have_value)
                      {
                        result->setgold_ranking(fieldGeneratorgold_ranking.value);
                        fieldGeneratorgold_ranking.have_value = false;
                      }
                    if (fieldGeneratortotal.have_value)
                      {
                        result->settotal(fieldGeneratortotal.value);
                        fieldGeneratortotal.have_value = false;
                      }
                    if (fieldGeneratorgold.have_value)
                      {
                        result->setgold(fieldGeneratorgold.value);
                        fieldGeneratorgold.have_value = false;
                      }
                    if (fieldGeneratorsilver.have_value)
                      {
                        result->setsilver(fieldGeneratorsilver.value);
                        fieldGeneratorsilver.have_value = false;
                      }
                    if (fieldGeneratorbronze.have_value)
                      {
                        result->setbronze(fieldGeneratorbronze.value);
                        fieldGeneratorbronze.have_value = false;
                      }
                  }
                virtual void handle_result(Typemedal_infoJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    switch ((unsigned char)(field_name[0]))
                      {
                        case 'b':
                            if (strcmp(&(field_name[1]), "ronze") == 0)
                                return &fieldGeneratorbronze;
                            break;
                        case 'c':
                            if (strncmp(&(field_name[1]), "ountry", 6) == 0)
                              {
                                switch ((unsigned char)(field_name[7]))
                                  {
                                    case 0:
                                        return &fieldGeneratorcountry;
                                    case '_':
                                        if (strcmp(&(field_name[8]), "code") == 0)
                                            return &fieldGeneratorcountry_code;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'g':
                            if (strncmp(&(field_name[1]), "old", 3) == 0)
                              {
                                switch ((unsigned char)(field_name[4]))
                                  {
                                    case 0:
                                        return &fieldGeneratorgold;
                                    case '_':
                                        if (strcmp(&(field_name[5]), "ranking") == 0)
                                            return &fieldGeneratorgold_ranking;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'i':
                            if (strcmp(&(field_name[1]), "oc_code") == 0)
                                return &fieldGeneratorioc_code;
                            break;
                        case 's':
                            if (strcmp(&(field_name[1]), "ilver") == 0)
                                return &fieldGeneratorsilver;
                            break;
                        case 't':
                            if (strncmp(&(field_name[1]), "otal", 4) == 0)
                              {
                                switch ((unsigned char)(field_name[5]))
                                  {
                                    case 0:
                                        return &fieldGeneratortotal;
                                    case '_':
                                        if (strcmp(&(field_name[6]), "ranking") == 0)
                                            return &fieldGeneratortotal_ranking;
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
                Generator(bool ignore_extras = false) : fieldGeneratorcountry("field \"country\" of the Typemedal_info class"), fieldGeneratorcountry_code("field \"country_code\" of the Typemedal_info class"), fieldGeneratorioc_code("field \"ioc_code\" of the Typemedal_info class"), fieldGeneratortotal_ranking("field \"total_ranking\" of the Typemedal_info class"), fieldGeneratorgold_ranking("field \"gold_ranking\" of the Typemedal_info class"), fieldGeneratortotal("field \"total\" of the Typemedal_info class"), fieldGeneratorgold("field \"gold\" of the Typemedal_info class"), fieldGeneratorsilver("field \"silver\" of the Typemedal_info class"), fieldGeneratorbronze("field \"bronze\" of the Typemedal_info class"), unknownFieldGenerator(ignore_extras)
                  {
                    set_what("the Typemedal_info class");
                  }
                ~Generator(void)
                  {
                  }

                void reset(void)
                  {
                    fieldGeneratorcountry.reset();
                    fieldGeneratorcountry_code.reset();
                    fieldGeneratorioc_code.reset();
                    fieldGeneratortotal_ranking.reset();
                    fieldGeneratorgold_ranking.reset();
                    fieldGeneratortotal.reset();
                    fieldGeneratorgold.reset();
                    fieldGeneratorsilver.reset();
                    fieldGeneratorbronze.reset();
                    JSONObjectGenerator::reset();
                    unknownFieldGenerator.reset();
                  }
              };
          };

      private:
        bool flagHasmedal_info;
        Typemedal_infoJSON * storemedal_info;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        Typemedals_by_countryJSON(const Typemedals_by_countryJSON &);
        Typemedals_by_countryJSON & operator=(const Typemedals_by_countryJSON &other);

        void  fromJSONmedal_info(JSONValue *json_value, bool ignore_extras = false);


      public:
        Typemedals_by_countryJSON(void);
        virtual ~Typemedals_by_countryJSON(void);
        bool  hasmedal_info(void) const;
        Typemedal_infoJSON *  getmedal_info(void);
        const Typemedal_infoJSON *  getmedal_info(void) const;

        virtual size_t extraTypemedals_by_countryComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypemedals_by_countryComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypemedals_by_countryComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypemedals_by_countryComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypemedals_by_countryLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypemedals_by_countryLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setmedal_info(Typemedal_infoJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasmedal_info)
              {
                storemedal_info->remove_reference();
              }
            flagHasmedal_info = true;
            storemedal_info = new_value;
          }
        void unsetmedal_info(void)
          {
            if (flagHasmedal_info)
              {
                storemedal_info->remove_reference();
              }
            flagHasmedal_info = false;
          }

        virtual void extraTypemedals_by_countryAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypemedals_by_countrySetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypemedals_by_countryLookup(key);
            if (old_field == NULL)
              {
                extraTypemedals_by_countryAppendPair(key, new_component);
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
            if (flagHasmedal_info)
              {
                handler->start_pair("medal_info");
                storemedal_info->write_as_json(handler);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            return NULL;
          }

        static Typemedals_by_countryJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static Typemedals_by_countryJSON *from_text(const char *text, bool ignore_extras = false)
          {
            Typemedals_by_countryJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<Typemedals_by_countryJSON>, Typemedals_by_countryJSON *, bool> generator("Type Typemedals_by_country", ignore_extras);
                parse_json_value(text, "Text for Typemedals_by_countryJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static Typemedals_by_countryJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            Typemedals_by_countryJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<Typemedals_by_countryJSON>, Typemedals_by_countryJSON *, bool> generator("Type Typemedals_by_country", ignore_extras);
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
            JSONHoldingGenerator<Typemedal_infoJSON::Generator, RCHandle<Typemedal_infoJSON>, Typemedal_infoJSON *, bool > fieldGeneratormedal_info;
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
                Typemedals_by_countryJSON *result = new Typemedals_by_countryJSON();
                assert(result != NULL);
                RCHandle<Typemedals_by_countryJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypemedals_by_countryAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(Typemedals_by_countryJSON *result)
              {
                if (fieldGeneratormedal_info.have_value)
                  {
                    result->setmedal_info(fieldGeneratormedal_info.value.referenced());
                    fieldGeneratormedal_info.have_value = false;
                  }
              }
            virtual void handle_result(Typemedals_by_countryJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "medal_info") == 0)
                    return &fieldGeneratormedal_info;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratormedal_info("field \"medal_info\" of the Typemedals_by_country class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the Typemedals_by_country class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratormedal_info.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasmedals_by_country;
    std::vector< Typemedals_by_countryJSON * > storemedals_by_country;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsOlympicsAPIMedalStandingsJSON(const SportsOlympicsAPIMedalStandingsJSON &);
    SportsOlympicsAPIMedalStandingsJSON & operator=(const SportsOlympicsAPIMedalStandingsJSON &other);

    void  fromJSONmedals_by_country(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsOlympicsAPIMedalStandingsJSON(void);
    virtual ~SportsOlympicsAPIMedalStandingsJSON(void);
    bool  hasmedals_by_country(void) const;
    size_t  countOfmedals_by_country(void) const;
    Typemedals_by_countryJSON *  elementOfmedals_by_country(size_t element_num);
    const Typemedals_by_countryJSON *  elementOfmedals_by_country(size_t element_num) const;
    std::vector< Typemedals_by_countryJSON * >  getmedals_by_country(void);
    const std::vector< Typemedals_by_countryJSON * >  getmedals_by_country(void) const;

    virtual size_t extraSportsOlympicsAPIMedalStandingsComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsOlympicsAPIMedalStandingsComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsOlympicsAPIMedalStandingsComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsOlympicsAPIMedalStandingsComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsOlympicsAPIMedalStandingsLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsOlympicsAPIMedalStandingsLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void initmedals_by_country(void)
      {
        if (flagHasmedals_by_country)
          {
            for (size_t num2 = 0; num2 < storemedals_by_country.size(); ++num2)
              {
                storemedals_by_country[num2]->remove_reference();
              }
          }
        flagHasmedals_by_country = true;
        storemedals_by_country.clear();
      }
    void appendmedals_by_country(Typemedals_by_countryJSON * to_append)
      {
        if (!flagHasmedals_by_country)
          {
            flagHasmedals_by_country = true;
            storemedals_by_country.clear();
          }
        assert(flagHasmedals_by_country);
        to_append->add_reference();
        storemedals_by_country.push_back(to_append);
      }
    void unsetmedals_by_country(void)
      {
        if (flagHasmedals_by_country)
          {
            for (size_t num3 = 0; num3 < storemedals_by_country.size(); ++num3)
              {
                storemedals_by_country[num3]->remove_reference();
              }
          }
        flagHasmedals_by_country = false;
        storemedals_by_country.clear();
      }

    virtual void extraSportsOlympicsAPIMedalStandingsAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsOlympicsAPIMedalStandingsSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsOlympicsAPIMedalStandingsLookup(key);
        if (old_field == NULL)
          {
            extraSportsOlympicsAPIMedalStandingsAppendPair(key, new_component);
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
        if (flagHasmedals_by_country)
          {
            handler->start_pair("medals_by_country");
            handler->start_array();
            for (size_t num1 = 0; num1 < storemedals_by_country.size(); ++num1)
              {
                storemedals_by_country[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SportsOlympicsAPIMedalStandingsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsOlympicsAPIMedalStandingsJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsOlympicsAPIMedalStandingsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsAPIMedalStandingsJSON>, SportsOlympicsAPIMedalStandingsJSON *, bool> generator("Type SportsOlympicsAPIMedalStandings", ignore_extras);
            parse_json_value(text, "Text for SportsOlympicsAPIMedalStandingsJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsOlympicsAPIMedalStandingsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsOlympicsAPIMedalStandingsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsAPIMedalStandingsJSON>, SportsOlympicsAPIMedalStandingsJSON *, bool> generator("Type SportsOlympicsAPIMedalStandings", ignore_extras);
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
        JSONHoldingArrayGenerator<Typemedals_by_countryJSON::Generator, RCHandle<Typemedals_by_countryJSON>, Typemedals_by_countryJSON *, bool > fieldGeneratormedals_by_country;
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
            SportsOlympicsAPIMedalStandingsJSON *result = new SportsOlympicsAPIMedalStandingsJSON();
            assert(result != NULL);
            RCHandle<SportsOlympicsAPIMedalStandingsJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsOlympicsAPIMedalStandingsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsOlympicsAPIMedalStandingsJSON *result)
          {
            if (fieldGeneratormedals_by_country.have_value)
              {
                result->initmedals_by_country();
                size_t count = fieldGeneratormedals_by_country.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendmedals_by_country(fieldGeneratormedals_by_country.value[num].referenced());
                  }
                fieldGeneratormedals_by_country.value.clear();
                fieldGeneratormedals_by_country.have_value = false;
              }
          }
        virtual void handle_result(SportsOlympicsAPIMedalStandingsJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "medals_by_country") == 0)
                return &fieldGeneratormedals_by_country;
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratormedals_by_country("field \"medals_by_country\" of the SportsOlympicsAPIMedalStandings class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsOlympicsAPIMedalStandings class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratormedals_by_country.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSOLYMPICSAPIMEDALSTANDINGSJSON_H */
