/* file "SportsPlayersQueryDataJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSPLAYERSQUERYDATAJSON_H
#define SPORTSPLAYERSQUERYDATAJSON_H

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
#include "SportsTeamNewJSON.h"
#include "SportsPlayerDetailJSON.h"
#include "SportsPlayerPositionJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsPlayersQueryDataJSON : public ReferenceCounted
  {
  public:
    enum TypeTypeKnownValues
      {
        Type_PlayerInfo,
        Type_Who,
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
    enum TypeErrorKnownValues
      {
        Error_TooManyPlayers,
        Error__none
      };
    struct TypeError
      {
        bool in_known_list;
        std::string string_value;
        TypeErrorKnownValues list_value;

        TypeError(void);
        TypeError(const TypeError &other);
        TypeError(TypeErrorKnownValues other);
        bool  operator==(const TypeError &other) const;
        bool  operator!=(const TypeError &other) const;
        bool  operator<(const TypeError &other) const;
        bool  operator>(const TypeError &other) const;
        bool  operator>=(const TypeError &other) const;
        bool  operator<=(const TypeError &other) const;

      };

    static TypeErrorKnownValues  stringToError(const char *chars);
    static const char * stringFromError(TypeErrorKnownValues the_enum);

  private:
    bool flagHasType;
    TypeType storeType;
    bool flagHasPlayerID;
    std::string storePlayerID;
    bool flagHasTeam;
    SportsTeamNewJSON * storeTeam;
    bool flagHasDetail;
    SportsPlayerDetailJSON * storeDetail;
    bool flagHasPositions;
    std::vector< SportsPlayerPositionJSON * > storePositions;
    bool flagHasJerseyNumber;
    OInteger storeJerseyNumber;
    bool flagHasPlayersIndices;
    std::vector< OInteger > storePlayersIndices;
    bool flagHasError;
    TypeError storeError;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsPlayersQueryDataJSON(const SportsPlayersQueryDataJSON &);
    SportsPlayersQueryDataJSON & operator=(const SportsPlayersQueryDataJSON &other);

    void  fromJSONType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPlayerID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTeam(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDetail(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPositions(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONJerseyNumber(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPlayersIndices(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONError(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsPlayersQueryDataJSON(void);
    virtual ~SportsPlayersQueryDataJSON(void);
    bool  hasType(void) const;
    TypeType  getType(void);
    const TypeType  getType(void) const;
    const char * getTypeAsChars(void) const;
    std::string  getTypeAsString(void) const;
    bool  hasPlayerID(void) const;
    std::string  getPlayerID(void);
    const std::string  getPlayerID(void) const;
    bool  hasTeam(void) const;
    SportsTeamNewJSON *  getTeam(void);
    const SportsTeamNewJSON *  getTeam(void) const;
    bool  hasDetail(void) const;
    SportsPlayerDetailJSON *  getDetail(void);
    const SportsPlayerDetailJSON *  getDetail(void) const;
    SportsPlayerDetailJSON::TypeValue  getDetailValue(void);
    const SportsPlayerDetailJSON::TypeValue  getDetailValue(void) const;
    const char * getDetailAsChars(void) const;
    std::string  getDetailAsString(void) const;
    bool  hasPositions(void) const;
    size_t  countOfPositions(void) const;
    SportsPlayerPositionJSON *  elementOfPositions(size_t element_num);
    const SportsPlayerPositionJSON *  elementOfPositions(size_t element_num) const;
    std::vector< SportsPlayerPositionJSON * >  getPositions(void);
    const std::vector< SportsPlayerPositionJSON * >  getPositions(void) const;
    bool  hasJerseyNumber(void) const;
    OInteger  getJerseyNumber(void);
    const OInteger  getJerseyNumber(void) const;
    bool  hasPlayersIndices(void) const;
    size_t  countOfPlayersIndices(void) const;
    OInteger  elementOfPlayersIndices(size_t element_num);
    const OInteger  elementOfPlayersIndices(size_t element_num) const;
    std::vector< OInteger >  getPlayersIndices(void);
    const std::vector< OInteger >  getPlayersIndices(void) const;
    bool  hasError(void) const;
    TypeError  getError(void);
    const TypeError  getError(void) const;
    const char * getErrorAsChars(void) const;
    std::string  getErrorAsString(void) const;

    virtual size_t extraSportsPlayersQueryDataComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsPlayersQueryDataComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsPlayersQueryDataComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsPlayersQueryDataComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsPlayersQueryDataLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsPlayersQueryDataLookup(const char *field_name) const
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
    void setPlayerID(std::string new_value)
      {
        flagHasPlayerID = true;
        storePlayerID = new_value;
      }
    void unsetPlayerID(void)
      {
        flagHasPlayerID = false;
      }
    void setTeam(SportsTeamNewJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasTeam)
          {
            storeTeam->remove_reference();
          }
        flagHasTeam = true;
        storeTeam = new_value;
      }
    void unsetTeam(void)
      {
        if (flagHasTeam)
          {
            storeTeam->remove_reference();
          }
        flagHasTeam = false;
      }
    void setDetail(SportsPlayerDetailJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDetail)
          {
            storeDetail->remove_reference();
          }
        flagHasDetail = true;
        storeDetail = new_value;
      }
    void setDetail(SportsPlayerDetailJSON::TypeValue new_value)
      {
        setDetail(new SportsPlayerDetailJSON(new_value));
      }
    void setDetail(const char *chars)
      {
        SportsPlayerDetailJSON::TypeValueKnownValues known = SportsPlayerDetailJSON::stringToValue(chars);
        SportsPlayerDetailJSON::TypeValue new_value;
        if (known == SportsPlayerDetailJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setDetail(new_value);
      }
    void setDetail(std::string the_string)
      {
        setDetail(the_string.c_str());
      }
    void unsetDetail(void)
      {
        if (flagHasDetail)
          {
            storeDetail->remove_reference();
          }
        flagHasDetail = false;
      }
    void initPositions(void)
      {
        if (flagHasPositions)
          {
            for (size_t num2 = 0; num2 < storePositions.size(); ++num2)
              {
                storePositions[num2]->remove_reference();
              }
          }
        flagHasPositions = true;
        storePositions.clear();
      }
    void appendPositions(SportsPlayerPositionJSON * to_append)
      {
        if (!flagHasPositions)
          {
            flagHasPositions = true;
            storePositions.clear();
          }
        assert(flagHasPositions);
        to_append->add_reference();
        storePositions.push_back(to_append);
      }
    void appendPositions(SportsPlayerPositionJSON::TypeValue new_value)
      {
        appendPositions(new SportsPlayerPositionJSON(new_value));
      }
    void appendPositions(const char *chars)
      {
        SportsPlayerPositionJSON::TypeValueKnownValues known = SportsPlayerPositionJSON::stringToValue(chars);
        SportsPlayerPositionJSON::TypeValue new_value;
        if (known == SportsPlayerPositionJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        appendPositions(new_value);
      }
    void appendPositions(std::string the_string)
      {
        appendPositions(the_string.c_str());
      }
    void unsetPositions(void)
      {
        if (flagHasPositions)
          {
            for (size_t num3 = 0; num3 < storePositions.size(); ++num3)
              {
                storePositions[num3]->remove_reference();
              }
          }
        flagHasPositions = false;
        storePositions.clear();
      }
    void setJerseyNumber(OInteger new_value)
      {
        flagHasJerseyNumber = true;
        if (new_value < 0)
            throw("The value for field JerseyNumber of SportsPlayersQueryDataJSON is less than the lower bound (0) for that field.");
        storeJerseyNumber = new_value;
      }
    void unsetJerseyNumber(void)
      {
        flagHasJerseyNumber = false;
      }
    void initPlayersIndices(void)
      {
        flagHasPlayersIndices = true;
        storePlayersIndices.clear();
      }
    void appendPlayersIndices(OInteger to_append)
      {
        if (!flagHasPlayersIndices)
          {
            flagHasPlayersIndices = true;
            storePlayersIndices.clear();
          }
        assert(flagHasPlayersIndices);
        storePlayersIndices.push_back(to_append);
      }
    void unsetPlayersIndices(void)
      {
        flagHasPlayersIndices = false;
        storePlayersIndices.clear();
      }
    void setError(TypeError new_value)
      {
        flagHasError = true;
        storeError = new_value;
      }
    void setError(const char *chars)
      {
        TypeErrorKnownValues known = stringToError(chars);
        TypeError new_value;
        if (known == Error__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setError(new_value);
      }
    void setError(std::string the_string)
      {
        setError(the_string.c_str());
      }
    void setError(TypeErrorKnownValues new_value)
      {
        TypeError new_full_value;
        assert(new_value != Error__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setError(new_full_value);
      }
    void unsetError(void)
      {
        flagHasError = false;
      }

    virtual void extraSportsPlayersQueryDataAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsPlayersQueryDataSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsPlayersQueryDataLookup(key);
        if (old_field == NULL)
          {
            extraSportsPlayersQueryDataAppendPair(key, new_component);
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
                case Type_PlayerInfo:
                    handler->string_value("PlayerInfo");
                    break;
                case Type_Who:
                    handler->string_value("Who");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storeType.string_value);
          }
        if (flagHasPlayerID)
          {
            handler->start_pair("PlayerID");
            handler->string_value(storePlayerID);
          }
        if (flagHasTeam)
          {
            handler->start_pair("Team");
            storeTeam->write_as_json(handler);
          }
        if (flagHasDetail)
          {
            handler->start_pair("Detail");
            storeDetail->write_as_json(handler);
          }
        if (flagHasPositions)
          {
            handler->start_pair("Positions");
            assert(storePositions.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storePositions.size(); ++num1)
              {
                storePositions[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasJerseyNumber)
          {
            handler->start_pair("JerseyNumber");
            handler->number_value(storeJerseyNumber.get_o_integer());
          }
        if (flagHasPlayersIndices)
          {
            handler->start_pair("PlayersIndices");
            assert(storePlayersIndices.size() >= 1);
            handler->start_array();
            for (size_t num2 = 0; num2 < storePlayersIndices.size(); ++num2)
              {
                handler->number_value(storePlayersIndices[num2].get_o_integer());
              }
            handler->finish_array();
          }
        if (flagHasError)
          {
            handler->start_pair("Error");
            if (storeError.in_known_list)
              {
                switch (storeError.list_value)
                  {
                    case Error_TooManyPlayers:
                        handler->string_value("TooManyPlayers");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeError.string_value);
              }
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasType()))
          {
            return "When parsing the object for %what%, the \"Type\" field was missing.";
          }
        return NULL;
      }

    static SportsPlayersQueryDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsPlayersQueryDataJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsPlayersQueryDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsPlayersQueryDataJSON>, SportsPlayersQueryDataJSON *, bool> generator("Type SportsPlayersQueryData", ignore_extras);
            parse_json_value(text, "Text for SportsPlayersQueryDataJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsPlayersQueryDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsPlayersQueryDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsPlayersQueryDataJSON>, SportsPlayersQueryDataJSON *, bool> generator("Type SportsPlayersQueryData", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPlayerID;
        JSONHoldingGenerator<SportsTeamNewJSON::Generator, RCHandle<SportsTeamNewJSON>, SportsTeamNewJSON *, bool > fieldGeneratorTeam;
        JSONHoldingGenerator<SportsPlayerDetailJSON::Generator, RCHandle<SportsPlayerDetailJSON>, SportsPlayerDetailJSON *, bool > fieldGeneratorDetail;
        JSONHoldingArrayGenerator<SportsPlayerPositionJSON::Generator, RCHandle<SportsPlayerPositionJSON>, SportsPlayerPositionJSON *, bool > fieldGeneratorPositions;
        static char lowerBoundJerseyNumber[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundJerseyNumber>, OInteger, o_integer > fieldGeneratorJerseyNumber;
        static char lowerBoundPlayersIndices[];
        JSONHoldingArrayGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundPlayersIndices>, OInteger, o_integer > fieldGeneratorPlayersIndices;
    class FieldGeneratorError : public JSONStringGenerator
          {
          protected:
            FieldGeneratorError(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorError(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeErrorKnownValues known = stringToError(result);
                TypeError new_value;
                if (known == Error__none)
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
            virtual void handle_result(TypeError result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorError, TypeError, TypeError > fieldGeneratorError;
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
            SportsPlayersQueryDataJSON *result = new SportsPlayersQueryDataJSON();
            assert(result != NULL);
            RCHandle<SportsPlayersQueryDataJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsPlayersQueryDataAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsPlayersQueryDataJSON *result)
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
            if (fieldGeneratorPlayerID.have_value)
              {
                result->setPlayerID(fieldGeneratorPlayerID.value);
                fieldGeneratorPlayerID.have_value = false;
              }
            if (fieldGeneratorTeam.have_value)
              {
                result->setTeam(fieldGeneratorTeam.value.referenced());
                fieldGeneratorTeam.have_value = false;
              }
            if (fieldGeneratorDetail.have_value)
              {
                result->setDetail(fieldGeneratorDetail.value.referenced());
                fieldGeneratorDetail.have_value = false;
              }
            if (fieldGeneratorPositions.have_value)
              {
                result->initPositions();
                size_t count = fieldGeneratorPositions.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendPositions(fieldGeneratorPositions.value[num].referenced());
                  }
                fieldGeneratorPositions.value.clear();
                fieldGeneratorPositions.have_value = false;
              }
            if (fieldGeneratorJerseyNumber.have_value)
              {
                result->setJerseyNumber(fieldGeneratorJerseyNumber.value);
                fieldGeneratorJerseyNumber.have_value = false;
              }
            if (fieldGeneratorPlayersIndices.have_value)
              {
                result->initPlayersIndices();
                size_t count = fieldGeneratorPlayersIndices.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendPlayersIndices(fieldGeneratorPlayersIndices.value[num]);
                  }
                fieldGeneratorPlayersIndices.value.clear();
                fieldGeneratorPlayersIndices.have_value = false;
              }
            if (fieldGeneratorError.have_value)
              {
                result->setError(fieldGeneratorError.value);
                fieldGeneratorError.have_value = false;
              }
          }
        virtual void handle_result(SportsPlayersQueryDataJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strcmp(&(field_name[1]), "etail") == 0)
                        return &fieldGeneratorDetail;
                    break;
                case 'E':
                    if (strcmp(&(field_name[1]), "rror") == 0)
                        return &fieldGeneratorError;
                    break;
                case 'J':
                    if (strcmp(&(field_name[1]), "erseyNumber") == 0)
                        return &fieldGeneratorJerseyNumber;
                    break;
                case 'P':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'l':
                            if (strncmp(&(field_name[2]), "ayer", 4) == 0)
                              {
                                switch ((unsigned char)(field_name[6]))
                                  {
                                    case 'I':
                                        if (strcmp(&(field_name[7]), "D") == 0)
                                            return &fieldGeneratorPlayerID;
                                        break;
                                    case 's':
                                        if (strcmp(&(field_name[7]), "Indices") == 0)
                                            return &fieldGeneratorPlayersIndices;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "sitions") == 0)
                                return &fieldGeneratorPositions;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'T':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            if (strcmp(&(field_name[2]), "am") == 0)
                                return &fieldGeneratorTeam;
                            break;
                        case 'y':
                            if (strcmp(&(field_name[2]), "pe") == 0)
                                return &fieldGeneratorType;
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
        Generator(bool ignore_extras = false) : fieldGeneratorType("field \"Type\" of the SportsPlayersQueryData class"), fieldGeneratorPlayerID("field \"PlayerID\" of the SportsPlayersQueryData class"), fieldGeneratorTeam("field \"Team\" of the SportsPlayersQueryData class", ignore_extras), fieldGeneratorDetail("field \"Detail\" of the SportsPlayersQueryData class", ignore_extras), fieldGeneratorPositions("field \"Positions\" of the SportsPlayersQueryData class", ignore_extras), fieldGeneratorJerseyNumber("field \"JerseyNumber\" of the SportsPlayersQueryData class"), fieldGeneratorPlayersIndices("field \"PlayersIndices\" of the SportsPlayersQueryData class"), fieldGeneratorError("field \"Error\" of the SportsPlayersQueryData class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsPlayersQueryData class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorType.reset();
            fieldGeneratorPlayerID.reset();
            fieldGeneratorTeam.reset();
            fieldGeneratorDetail.reset();
            fieldGeneratorPositions.reset();
            fieldGeneratorJerseyNumber.reset();
            fieldGeneratorPlayersIndices.reset();
            fieldGeneratorError.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSPLAYERSQUERYDATAJSON_H */
