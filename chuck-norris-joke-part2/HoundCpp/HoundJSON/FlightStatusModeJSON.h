/* file "FlightStatusModeJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FLIGHTSTATUSMODEJSON_H
#define FLIGHTSTATUSMODEJSON_H

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
#include "FlightStatusLookupParameterJSON.h"
#include "FlightStatusLookupParameterJSON.h"
#include "ResponseTypesJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class FlightStatusModeJSON : public ReferenceCounted
  {
  public:
    enum TypeLastUserResponse
      {
        LastUserResponse_InitiatedMode,
        LastUserResponse_Understood,
        LastUserResponse_NotUnderstood,
        LastUserResponse_DoesNotKnow,
        LastUserResponse_WantsToKnow,
        LastUserResponse_Cancel
      };

    static TypeLastUserResponse  stringToLastUserResponse(const char *chars);
    static const char * stringFromLastUserResponse(TypeLastUserResponse the_enum);

  private:
    bool flagHasFlightSpecIndex;
    OInteger storeFlightSpecIndex;
    bool flagHasAskingUserFor;
    FlightStatusLookupParameterJSON * storeAskingUserFor;
    bool flagHasAlreadyAskedUser;
    std::vector< FlightStatusLookupParameterJSON * > storeAlreadyAskedUser;
    bool flagHasNotUnderstoodCount;
    OInteger storeNotUnderstoodCount;
    bool flagHasTextForUser;
    ResponseTypesJSON * storeTextForUser;
    bool flagHasLastUserResponse;
    TypeLastUserResponse storeLastUserResponse;
    bool flagHasWrittenHints;
    std::vector< std::string > storeWrittenHints;
    bool flagHasSpokenHints;
    std::vector< std::string > storeSpokenHints;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    FlightStatusModeJSON(const FlightStatusModeJSON &);
    FlightStatusModeJSON & operator=(const FlightStatusModeJSON &other);

    void  fromJSONFlightSpecIndex(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAskingUserFor(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlreadyAskedUser(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNotUnderstoodCount(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTextForUser(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLastUserResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWrittenHints(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenHints(JSONValue *json_value, bool ignore_extras = false);


  public:
    FlightStatusModeJSON(void);
    virtual ~FlightStatusModeJSON(void);
    bool  hasFlightSpecIndex(void) const;
    OInteger  getFlightSpecIndex(void);
    const OInteger  getFlightSpecIndex(void) const;
    bool  hasAskingUserFor(void) const;
    FlightStatusLookupParameterJSON *  getAskingUserFor(void);
    const FlightStatusLookupParameterJSON *  getAskingUserFor(void) const;
    FlightStatusLookupParameterJSON::TypeValue  getAskingUserForValue(void);
    const FlightStatusLookupParameterJSON::TypeValue  getAskingUserForValue(void) const;
    const char * getAskingUserForAsChars(void) const;
    std::string  getAskingUserForAsString(void) const;
    bool  hasAlreadyAskedUser(void) const;
    size_t  countOfAlreadyAskedUser(void) const;
    FlightStatusLookupParameterJSON *  elementOfAlreadyAskedUser(size_t element_num);
    const FlightStatusLookupParameterJSON *  elementOfAlreadyAskedUser(size_t element_num) const;
    std::vector< FlightStatusLookupParameterJSON * >  getAlreadyAskedUser(void);
    const std::vector< FlightStatusLookupParameterJSON * >  getAlreadyAskedUser(void) const;
    bool  hasNotUnderstoodCount(void) const;
    OInteger  getNotUnderstoodCount(void);
    const OInteger  getNotUnderstoodCount(void) const;
    bool  hasTextForUser(void) const;
    ResponseTypesJSON *  getTextForUser(void);
    const ResponseTypesJSON *  getTextForUser(void) const;
    bool  hasLastUserResponse(void) const;
    TypeLastUserResponse  getLastUserResponse(void);
    const TypeLastUserResponse  getLastUserResponse(void) const;
    const char * getLastUserResponseAsChars(void) const;
    std::string  getLastUserResponseAsString(void) const;
    bool  hasWrittenHints(void) const;
    size_t  countOfWrittenHints(void) const;
    std::string  elementOfWrittenHints(size_t element_num);
    const std::string  elementOfWrittenHints(size_t element_num) const;
    std::vector< std::string >  getWrittenHints(void);
    const std::vector< std::string >  getWrittenHints(void) const;
    bool  hasSpokenHints(void) const;
    size_t  countOfSpokenHints(void) const;
    std::string  elementOfSpokenHints(size_t element_num);
    const std::string  elementOfSpokenHints(size_t element_num) const;
    std::vector< std::string >  getSpokenHints(void);
    const std::vector< std::string >  getSpokenHints(void) const;

    virtual size_t extraFlightStatusModeComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraFlightStatusModeComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraFlightStatusModeComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraFlightStatusModeComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraFlightStatusModeLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraFlightStatusModeLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setFlightSpecIndex(OInteger new_value)
      {
        flagHasFlightSpecIndex = true;
        if (new_value < 0)
            throw("The value for field FlightSpecIndex of FlightStatusModeJSON is less than the lower bound (0) for that field.");
        storeFlightSpecIndex = new_value;
      }
    void unsetFlightSpecIndex(void)
      {
        flagHasFlightSpecIndex = false;
      }
    void setAskingUserFor(FlightStatusLookupParameterJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAskingUserFor)
          {
            storeAskingUserFor->remove_reference();
          }
        flagHasAskingUserFor = true;
        storeAskingUserFor = new_value;
      }
    void setAskingUserFor(FlightStatusLookupParameterJSON::TypeValue new_value)
      {
        setAskingUserFor(new FlightStatusLookupParameterJSON(new_value));
      }
    void setAskingUserFor(const char *chars)
      {
        setAskingUserFor(new FlightStatusLookupParameterJSON(chars));
      }
    void setAskingUserFor(std::string the_string)
      {
        setAskingUserFor(new FlightStatusLookupParameterJSON(the_string));
      }
    void unsetAskingUserFor(void)
      {
        if (flagHasAskingUserFor)
          {
            storeAskingUserFor->remove_reference();
          }
        flagHasAskingUserFor = false;
      }
    void initAlreadyAskedUser(void)
      {
        if (flagHasAlreadyAskedUser)
          {
            for (size_t num2 = 0; num2 < storeAlreadyAskedUser.size(); ++num2)
              {
                storeAlreadyAskedUser[num2]->remove_reference();
              }
          }
        flagHasAlreadyAskedUser = true;
        storeAlreadyAskedUser.clear();
      }
    void appendAlreadyAskedUser(FlightStatusLookupParameterJSON * to_append)
      {
        if (!flagHasAlreadyAskedUser)
          {
            flagHasAlreadyAskedUser = true;
            storeAlreadyAskedUser.clear();
          }
        assert(flagHasAlreadyAskedUser);
        to_append->add_reference();
        storeAlreadyAskedUser.push_back(to_append);
      }
    void appendAlreadyAskedUser(FlightStatusLookupParameterJSON::TypeValue new_value)
      {
        appendAlreadyAskedUser(new FlightStatusLookupParameterJSON(new_value));
      }
    void appendAlreadyAskedUser(const char *chars)
      {
        appendAlreadyAskedUser(new FlightStatusLookupParameterJSON(chars));
      }
    void appendAlreadyAskedUser(std::string the_string)
      {
        appendAlreadyAskedUser(new FlightStatusLookupParameterJSON(the_string));
      }
    void unsetAlreadyAskedUser(void)
      {
        if (flagHasAlreadyAskedUser)
          {
            for (size_t num3 = 0; num3 < storeAlreadyAskedUser.size(); ++num3)
              {
                storeAlreadyAskedUser[num3]->remove_reference();
              }
          }
        flagHasAlreadyAskedUser = false;
        storeAlreadyAskedUser.clear();
      }
    void setNotUnderstoodCount(OInteger new_value)
      {
        flagHasNotUnderstoodCount = true;
        if (new_value < 0)
            throw("The value for field NotUnderstoodCount of FlightStatusModeJSON is less than the lower bound (0) for that field.");
        storeNotUnderstoodCount = new_value;
      }
    void unsetNotUnderstoodCount(void)
      {
        flagHasNotUnderstoodCount = false;
      }
    void setTextForUser(ResponseTypesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasTextForUser)
          {
            storeTextForUser->remove_reference();
          }
        flagHasTextForUser = true;
        storeTextForUser = new_value;
      }
    void unsetTextForUser(void)
      {
        if (flagHasTextForUser)
          {
            storeTextForUser->remove_reference();
          }
        flagHasTextForUser = false;
      }
    void setLastUserResponse(TypeLastUserResponse new_value)
      {
        flagHasLastUserResponse = true;
        storeLastUserResponse = new_value;
      }
    void setLastUserResponse(const char *chars)
      {
        setLastUserResponse(stringToLastUserResponse(chars));
      }
    void setLastUserResponse(std::string the_string)
      {
        setLastUserResponse(stringToLastUserResponse(the_string.c_str()));
      }
    void unsetLastUserResponse(void)
      {
        flagHasLastUserResponse = false;
      }
    void initWrittenHints(void)
      {
        flagHasWrittenHints = true;
        storeWrittenHints.clear();
      }
    void appendWrittenHints(std::string to_append)
      {
        if (!flagHasWrittenHints)
          {
            flagHasWrittenHints = true;
            storeWrittenHints.clear();
          }
        assert(flagHasWrittenHints);
        storeWrittenHints.push_back(to_append);
      }
    void unsetWrittenHints(void)
      {
        flagHasWrittenHints = false;
        storeWrittenHints.clear();
      }
    void initSpokenHints(void)
      {
        flagHasSpokenHints = true;
        storeSpokenHints.clear();
      }
    void appendSpokenHints(std::string to_append)
      {
        if (!flagHasSpokenHints)
          {
            flagHasSpokenHints = true;
            storeSpokenHints.clear();
          }
        assert(flagHasSpokenHints);
        storeSpokenHints.push_back(to_append);
      }
    void unsetSpokenHints(void)
      {
        flagHasSpokenHints = false;
        storeSpokenHints.clear();
      }

    virtual void extraFlightStatusModeAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraFlightStatusModeSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraFlightStatusModeLookup(key);
        if (old_field == NULL)
          {
            extraFlightStatusModeAppendPair(key, new_component);
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
        assert(flagHasFlightSpecIndex);
        handler->start_pair("FlightSpecIndex");
        handler->number_value(storeFlightSpecIndex.get_o_integer());
        assert(flagHasAskingUserFor);
        handler->start_pair("AskingUserFor");
        storeAskingUserFor->write_as_json(handler);
        if (flagHasAlreadyAskedUser)
          {
            handler->start_pair("AlreadyAskedUser");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeAlreadyAskedUser.size(); ++num1)
              {
                storeAlreadyAskedUser[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasNotUnderstoodCount)
          {
            handler->start_pair("NotUnderstoodCount");
            handler->number_value(storeNotUnderstoodCount.get_o_integer());
          }
        if (flagHasTextForUser)
          {
            handler->start_pair("TextForUser");
            storeTextForUser->write_as_json(handler);
          }
        assert(flagHasLastUserResponse);
        handler->start_pair("LastUserResponse");
        switch (storeLastUserResponse)
          {
            case LastUserResponse_InitiatedMode:
                handler->string_value("InitiatedMode");
                break;
            case LastUserResponse_Understood:
                handler->string_value("Understood");
                break;
            case LastUserResponse_NotUnderstood:
                handler->string_value("NotUnderstood");
                break;
            case LastUserResponse_DoesNotKnow:
                handler->string_value("DoesNotKnow");
                break;
            case LastUserResponse_WantsToKnow:
                handler->string_value("WantsToKnow");
                break;
            case LastUserResponse_Cancel:
                handler->string_value("Cancel");
                break;
            default:
                assert(false);
          }
        if (flagHasWrittenHints)
          {
            handler->start_pair("WrittenHints");
            handler->start_array();
            for (size_t num2 = 0; num2 < storeWrittenHints.size(); ++num2)
              {
                handler->string_value(storeWrittenHints[num2]);
              }
            handler->finish_array();
          }
        if (flagHasSpokenHints)
          {
            handler->start_pair("SpokenHints");
            handler->start_array();
            for (size_t num3 = 0; num3 < storeSpokenHints.size(); ++num3)
              {
                handler->string_value(storeSpokenHints[num3]);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasFlightSpecIndex()))
          {
            return "When parsing the object for %what%, the \"FlightSpecIndex\" field was missing.";
          }
        if (!(hasAskingUserFor()))
          {
            return "When parsing the object for %what%, the \"AskingUserFor\" field was missing.";
          }
        if (!(hasLastUserResponse()))
          {
            return "When parsing the object for %what%, the \"LastUserResponse\" field was missing.";
          }
        return NULL;
      }

    static FlightStatusModeJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FlightStatusModeJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FlightStatusModeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightStatusModeJSON>, FlightStatusModeJSON *, bool> generator("Type FlightStatusMode", ignore_extras);
            parse_json_value(text, "Text for FlightStatusModeJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FlightStatusModeJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FlightStatusModeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightStatusModeJSON>, FlightStatusModeJSON *, bool> generator("Type FlightStatusMode", ignore_extras);
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
        static char lowerBoundFlightSpecIndex[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundFlightSpecIndex>, OInteger, o_integer > fieldGeneratorFlightSpecIndex;
        JSONHoldingGenerator<FlightStatusLookupParameterJSON::Generator, RCHandle<FlightStatusLookupParameterJSON>, FlightStatusLookupParameterJSON *, bool > fieldGeneratorAskingUserFor;
        JSONHoldingArrayGenerator<FlightStatusLookupParameterJSON::Generator, RCHandle<FlightStatusLookupParameterJSON>, FlightStatusLookupParameterJSON *, bool > fieldGeneratorAlreadyAskedUser;
        static char lowerBoundNotUnderstoodCount[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundNotUnderstoodCount>, OInteger, o_integer > fieldGeneratorNotUnderstoodCount;
        JSONHoldingGenerator<ResponseTypesJSON::Generator, RCHandle<ResponseTypesJSON>, ResponseTypesJSON *, bool > fieldGeneratorTextForUser;
    class FieldGeneratorLastUserResponse : public JSONStringGenerator
          {
          protected:
            FieldGeneratorLastUserResponse(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorLastUserResponse(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToLastUserResponse(result));
              }
            virtual void handle_result(TypeLastUserResponse result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorLastUserResponse, TypeLastUserResponse, TypeLastUserResponse > fieldGeneratorLastUserResponse;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWrittenHints;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenHints;
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
            FlightStatusModeJSON *result = new FlightStatusModeJSON();
            assert(result != NULL);
            RCHandle<FlightStatusModeJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraFlightStatusModeAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(FlightStatusModeJSON *result)
          {
            if (fieldGeneratorFlightSpecIndex.have_value)
              {
                result->setFlightSpecIndex(fieldGeneratorFlightSpecIndex.value);
                fieldGeneratorFlightSpecIndex.have_value = false;
              }
            else if (!(result->hasFlightSpecIndex()))
              {
                error("When parsing the object for %what%, the \"FlightSpecIndex\" field was missing.");
              }
            if (fieldGeneratorAskingUserFor.have_value)
              {
                result->setAskingUserFor(fieldGeneratorAskingUserFor.value.referenced());
                fieldGeneratorAskingUserFor.have_value = false;
              }
            else if (!(result->hasAskingUserFor()))
              {
                error("When parsing the object for %what%, the \"AskingUserFor\" field was missing.");
              }
            if (fieldGeneratorAlreadyAskedUser.have_value)
              {
                result->initAlreadyAskedUser();
                size_t count = fieldGeneratorAlreadyAskedUser.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAlreadyAskedUser(fieldGeneratorAlreadyAskedUser.value[num].referenced());
                  }
                fieldGeneratorAlreadyAskedUser.value.clear();
                fieldGeneratorAlreadyAskedUser.have_value = false;
              }
            if (fieldGeneratorNotUnderstoodCount.have_value)
              {
                result->setNotUnderstoodCount(fieldGeneratorNotUnderstoodCount.value);
                fieldGeneratorNotUnderstoodCount.have_value = false;
              }
            if (fieldGeneratorTextForUser.have_value)
              {
                result->setTextForUser(fieldGeneratorTextForUser.value.referenced());
                fieldGeneratorTextForUser.have_value = false;
              }
            if (fieldGeneratorLastUserResponse.have_value)
              {
                result->setLastUserResponse(fieldGeneratorLastUserResponse.value);
                fieldGeneratorLastUserResponse.have_value = false;
              }
            else if (!(result->hasLastUserResponse()))
              {
                error("When parsing the object for %what%, the \"LastUserResponse\" field was missing.");
              }
            if (fieldGeneratorWrittenHints.have_value)
              {
                result->initWrittenHints();
                size_t count = fieldGeneratorWrittenHints.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendWrittenHints(fieldGeneratorWrittenHints.value[num]);
                  }
                fieldGeneratorWrittenHints.value.clear();
                fieldGeneratorWrittenHints.have_value = false;
              }
            if (fieldGeneratorSpokenHints.have_value)
              {
                result->initSpokenHints();
                size_t count = fieldGeneratorSpokenHints.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendSpokenHints(fieldGeneratorSpokenHints.value[num]);
                  }
                fieldGeneratorSpokenHints.value.clear();
                fieldGeneratorSpokenHints.have_value = false;
              }
          }
        virtual void handle_result(FlightStatusModeJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'l':
                            if (strcmp(&(field_name[2]), "readyAskedUser") == 0)
                                return &fieldGeneratorAlreadyAskedUser;
                            break;
                        case 's':
                            if (strcmp(&(field_name[2]), "kingUserFor") == 0)
                                return &fieldGeneratorAskingUserFor;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'F':
                    if (strcmp(&(field_name[1]), "lightSpecIndex") == 0)
                        return &fieldGeneratorFlightSpecIndex;
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "astUserResponse") == 0)
                        return &fieldGeneratorLastUserResponse;
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "otUnderstoodCount") == 0)
                        return &fieldGeneratorNotUnderstoodCount;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "pokenHints") == 0)
                        return &fieldGeneratorSpokenHints;
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "extForUser") == 0)
                        return &fieldGeneratorTextForUser;
                    break;
                case 'W':
                    if (strcmp(&(field_name[1]), "rittenHints") == 0)
                        return &fieldGeneratorWrittenHints;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorFlightSpecIndex("field \"FlightSpecIndex\" of the FlightStatusMode class"), fieldGeneratorAskingUserFor("field \"AskingUserFor\" of the FlightStatusMode class", ignore_extras), fieldGeneratorAlreadyAskedUser("field \"AlreadyAskedUser\" of the FlightStatusMode class", ignore_extras), fieldGeneratorNotUnderstoodCount("field \"NotUnderstoodCount\" of the FlightStatusMode class"), fieldGeneratorTextForUser("field \"TextForUser\" of the FlightStatusMode class", ignore_extras), fieldGeneratorLastUserResponse("field \"LastUserResponse\" of the FlightStatusMode class"), fieldGeneratorWrittenHints("field \"WrittenHints\" of the FlightStatusMode class"), fieldGeneratorSpokenHints("field \"SpokenHints\" of the FlightStatusMode class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the FlightStatusMode class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorFlightSpecIndex.reset();
            fieldGeneratorAskingUserFor.reset();
            fieldGeneratorAlreadyAskedUser.reset();
            fieldGeneratorNotUnderstoodCount.reset();
            fieldGeneratorTextForUser.reset();
            fieldGeneratorLastUserResponse.reset();
            fieldGeneratorWrittenHints.reset();
            fieldGeneratorSpokenHints.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* FLIGHTSTATUSMODEJSON_H */
