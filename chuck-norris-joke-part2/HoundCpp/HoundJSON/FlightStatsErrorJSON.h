/* file "FlightStatsErrorJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FLIGHTSTATSERRORJSON_H
#define FLIGHTSTATSERRORJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerUnboundRangeGenerator.h"
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


class FlightStatsErrorJSON : public ReferenceCounted
  {
  private:
    bool flagHashttpStatusCode;
    OInteger storehttpStatusCode;
    bool flagHaserrorCode;
    std::string storeerrorCode;
    bool flagHaserrorId;
    std::string storeerrorId;
    bool flagHaserrorMessage;
    std::string storeerrorMessage;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    FlightStatsErrorJSON(const FlightStatsErrorJSON &);
    FlightStatsErrorJSON & operator=(const FlightStatsErrorJSON &other);

    void  fromJSONhttpStatusCode(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONerrorCode(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONerrorId(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONerrorMessage(JSONValue *json_value, bool ignore_extras = false);


  public:
    FlightStatsErrorJSON(void);
    virtual ~FlightStatsErrorJSON(void);
    bool  hashttpStatusCode(void) const;
    OInteger  gethttpStatusCode(void);
    const OInteger  gethttpStatusCode(void) const;
    bool  haserrorCode(void) const;
    std::string  geterrorCode(void);
    const std::string  geterrorCode(void) const;
    bool  haserrorId(void) const;
    std::string  geterrorId(void);
    const std::string  geterrorId(void) const;
    bool  haserrorMessage(void) const;
    std::string  geterrorMessage(void);
    const std::string  geterrorMessage(void) const;

    virtual size_t extraFlightStatsErrorComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraFlightStatsErrorComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraFlightStatsErrorComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraFlightStatsErrorComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraFlightStatsErrorLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraFlightStatsErrorLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void sethttpStatusCode(OInteger new_value)
      {
        flagHashttpStatusCode = true;
        storehttpStatusCode = new_value;
      }
    void unsethttpStatusCode(void)
      {
        flagHashttpStatusCode = false;
      }
    void seterrorCode(std::string new_value)
      {
        flagHaserrorCode = true;
        storeerrorCode = new_value;
      }
    void unseterrorCode(void)
      {
        flagHaserrorCode = false;
      }
    void seterrorId(std::string new_value)
      {
        flagHaserrorId = true;
        storeerrorId = new_value;
      }
    void unseterrorId(void)
      {
        flagHaserrorId = false;
      }
    void seterrorMessage(std::string new_value)
      {
        flagHaserrorMessage = true;
        storeerrorMessage = new_value;
      }
    void unseterrorMessage(void)
      {
        flagHaserrorMessage = false;
      }

    virtual void extraFlightStatsErrorAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraFlightStatsErrorSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraFlightStatsErrorLookup(key);
        if (old_field == NULL)
          {
            extraFlightStatsErrorAppendPair(key, new_component);
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
        if (flagHashttpStatusCode)
          {
            handler->start_pair("httpStatusCode");
            handler->number_value(storehttpStatusCode.get_o_integer());
          }
        if (flagHaserrorCode)
          {
            handler->start_pair("errorCode");
            handler->string_value(storeerrorCode);
          }
        if (flagHaserrorId)
          {
            handler->start_pair("errorId");
            handler->string_value(storeerrorId);
          }
        if (flagHaserrorMessage)
          {
            handler->start_pair("errorMessage");
            handler->string_value(storeerrorMessage);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static FlightStatsErrorJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FlightStatsErrorJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FlightStatsErrorJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightStatsErrorJSON>, FlightStatsErrorJSON *, bool> generator("Type FlightStatsError", ignore_extras);
            parse_json_value(text, "Text for FlightStatsErrorJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FlightStatsErrorJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FlightStatsErrorJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightStatsErrorJSON>, FlightStatsErrorJSON *, bool> generator("Type FlightStatsError", ignore_extras);
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
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorhttpStatusCode;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorerrorCode;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorerrorId;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorerrorMessage;
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
            FlightStatsErrorJSON *result = new FlightStatsErrorJSON();
            assert(result != NULL);
            RCHandle<FlightStatsErrorJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraFlightStatsErrorAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(FlightStatsErrorJSON *result)
          {
            if (fieldGeneratorhttpStatusCode.have_value)
              {
                result->sethttpStatusCode(fieldGeneratorhttpStatusCode.value);
                fieldGeneratorhttpStatusCode.have_value = false;
              }
            if (fieldGeneratorerrorCode.have_value)
              {
                result->seterrorCode(fieldGeneratorerrorCode.value);
                fieldGeneratorerrorCode.have_value = false;
              }
            if (fieldGeneratorerrorId.have_value)
              {
                result->seterrorId(fieldGeneratorerrorId.value);
                fieldGeneratorerrorId.have_value = false;
              }
            if (fieldGeneratorerrorMessage.have_value)
              {
                result->seterrorMessage(fieldGeneratorerrorMessage.value);
                fieldGeneratorerrorMessage.have_value = false;
              }
          }
        virtual void handle_result(FlightStatsErrorJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'e':
                    if (strncmp(&(field_name[1]), "rror", 4) == 0)
                      {
                        switch ((unsigned char)(field_name[5]))
                          {
                            case 'C':
                                if (strcmp(&(field_name[6]), "ode") == 0)
                                    return &fieldGeneratorerrorCode;
                                break;
                            case 'I':
                                if (strcmp(&(field_name[6]), "d") == 0)
                                    return &fieldGeneratorerrorId;
                                break;
                            case 'M':
                                if (strcmp(&(field_name[6]), "essage") == 0)
                                    return &fieldGeneratorerrorMessage;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'h':
                    if (strcmp(&(field_name[1]), "ttpStatusCode") == 0)
                        return &fieldGeneratorhttpStatusCode;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorhttpStatusCode("field \"httpStatusCode\" of the FlightStatsError class"), fieldGeneratorerrorCode("field \"errorCode\" of the FlightStatsError class"), fieldGeneratorerrorId("field \"errorId\" of the FlightStatsError class"), fieldGeneratorerrorMessage("field \"errorMessage\" of the FlightStatsError class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the FlightStatsError class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorhttpStatusCode.reset();
            fieldGeneratorerrorCode.reset();
            fieldGeneratorerrorId.reset();
            fieldGeneratorerrorMessage.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* FLIGHTSTATSERRORJSON_H */
