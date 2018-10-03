/* file "RockPaperScissorsPickObjectCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef ROCKPAPERSCISSORSPICKOBJECTCOMMANDJSON_H
#define ROCKPAPERSCISSORSPICKOBJECTCOMMANDJSON_H

#pragma interface

#include "RockPaperScissorsCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONBooleanGenerator.h"
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


class RockPaperScissorsPickObjectCommandJSON : public RockPaperScissorsCommandJSON
  {
  public:
    class TypeNativeDataJSON : public ReferenceCounted
      {
      private:
        bool flagHasServerScore;
        OInteger storeServerScore;
        bool flagHasPlayerScore;
        OInteger storePlayerScore;
        bool flagHasGameState;
        std::string storeGameState;
        bool flagHasLastPlayerObject;
        std::string storeLastPlayerObject;
        bool flagHasLastServerObject;
        std::string storeLastServerObject;
        bool flagHasMatchImageURL;
        std::string storeMatchImageURL;
        bool flagHasIsRoundOver;
        bool storeIsRoundOver;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeNativeDataJSON(const TypeNativeDataJSON &);
        TypeNativeDataJSON & operator=(const TypeNativeDataJSON &other);

        void  fromJSONServerScore(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONPlayerScore(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONGameState(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONLastPlayerObject(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONLastServerObject(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONMatchImageURL(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONIsRoundOver(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeNativeDataJSON(void);
        virtual ~TypeNativeDataJSON(void);
        bool  hasServerScore(void) const;
        OInteger  getServerScore(void);
        const OInteger  getServerScore(void) const;
        bool  hasPlayerScore(void) const;
        OInteger  getPlayerScore(void);
        const OInteger  getPlayerScore(void) const;
        bool  hasGameState(void) const;
        std::string  getGameState(void);
        const std::string  getGameState(void) const;
        bool  hasLastPlayerObject(void) const;
        std::string  getLastPlayerObject(void);
        const std::string  getLastPlayerObject(void) const;
        bool  hasLastServerObject(void) const;
        std::string  getLastServerObject(void);
        const std::string  getLastServerObject(void) const;
        bool  hasMatchImageURL(void) const;
        std::string  getMatchImageURL(void);
        const std::string  getMatchImageURL(void) const;
        bool  hasIsRoundOver(void) const;
        bool  getIsRoundOver(void);
        const bool  getIsRoundOver(void) const;

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

        void setServerScore(OInteger new_value)
          {
            flagHasServerScore = true;
            if (new_value < 0)
                throw("The value for field ServerScore of TypeNativeDataJSON is less than the lower bound (0) for that field.");
            storeServerScore = new_value;
          }
        void unsetServerScore(void)
          {
            flagHasServerScore = false;
          }
        void setPlayerScore(OInteger new_value)
          {
            flagHasPlayerScore = true;
            if (new_value < 0)
                throw("The value for field PlayerScore of TypeNativeDataJSON is less than the lower bound (0) for that field.");
            storePlayerScore = new_value;
          }
        void unsetPlayerScore(void)
          {
            flagHasPlayerScore = false;
          }
        void setGameState(std::string new_value)
          {
            flagHasGameState = true;
            storeGameState = new_value;
          }
        void unsetGameState(void)
          {
            flagHasGameState = false;
          }
        void setLastPlayerObject(std::string new_value)
          {
            flagHasLastPlayerObject = true;
            storeLastPlayerObject = new_value;
          }
        void unsetLastPlayerObject(void)
          {
            flagHasLastPlayerObject = false;
          }
        void setLastServerObject(std::string new_value)
          {
            flagHasLastServerObject = true;
            storeLastServerObject = new_value;
          }
        void unsetLastServerObject(void)
          {
            flagHasLastServerObject = false;
          }
        void setMatchImageURL(std::string new_value)
          {
            flagHasMatchImageURL = true;
            storeMatchImageURL = new_value;
          }
        void unsetMatchImageURL(void)
          {
            flagHasMatchImageURL = false;
          }
        void setIsRoundOver(bool new_value)
          {
            flagHasIsRoundOver = true;
            storeIsRoundOver = new_value;
          }
        void unsetIsRoundOver(void)
          {
            flagHasIsRoundOver = false;
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
            if (flagHasServerScore)
              {
                handler->start_pair("ServerScore");
                handler->number_value(storeServerScore.get_o_integer());
              }
            if (flagHasPlayerScore)
              {
                handler->start_pair("PlayerScore");
                handler->number_value(storePlayerScore.get_o_integer());
              }
            assert(flagHasGameState);
            handler->start_pair("GameState");
            handler->string_value(storeGameState);
            assert(flagHasLastPlayerObject);
            handler->start_pair("LastPlayerObject");
            handler->string_value(storeLastPlayerObject);
            assert(flagHasLastServerObject);
            handler->start_pair("LastServerObject");
            handler->string_value(storeLastServerObject);
            if (flagHasMatchImageURL)
              {
                handler->start_pair("MatchImageURL");
                handler->string_value(storeMatchImageURL);
              }
            assert(flagHasIsRoundOver);
            handler->start_pair("IsRoundOver");
            handler->boolean_value(storeIsRoundOver);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasGameState()))
              {
                return "When parsing the object for %what%, the \"GameState\" field was missing.";
              }
            if (!(hasLastPlayerObject()))
              {
                return "When parsing the object for %what%, the \"LastPlayerObject\" field was missing.";
              }
            if (!(hasLastServerObject()))
              {
                return "When parsing the object for %what%, the \"LastServerObject\" field was missing.";
              }
            if (!(hasIsRoundOver()))
              {
                return "When parsing the object for %what%, the \"IsRoundOver\" field was missing.";
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
            static char lowerBoundServerScore[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundServerScore>, OInteger, o_integer > fieldGeneratorServerScore;
            static char lowerBoundPlayerScore[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundPlayerScore>, OInteger, o_integer > fieldGeneratorPlayerScore;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorGameState;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLastPlayerObject;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLastServerObject;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorMatchImageURL;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsRoundOver;
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
                if (fieldGeneratorServerScore.have_value)
                  {
                    result->setServerScore(fieldGeneratorServerScore.value);
                    fieldGeneratorServerScore.have_value = false;
                  }
                if (fieldGeneratorPlayerScore.have_value)
                  {
                    result->setPlayerScore(fieldGeneratorPlayerScore.value);
                    fieldGeneratorPlayerScore.have_value = false;
                  }
                if (fieldGeneratorGameState.have_value)
                  {
                    result->setGameState(fieldGeneratorGameState.value);
                    fieldGeneratorGameState.have_value = false;
                  }
                else if (!(result->hasGameState()))
                  {
                    error("When parsing the object for %what%, the \"GameState\" field was missing.");
                  }
                if (fieldGeneratorLastPlayerObject.have_value)
                  {
                    result->setLastPlayerObject(fieldGeneratorLastPlayerObject.value);
                    fieldGeneratorLastPlayerObject.have_value = false;
                  }
                else if (!(result->hasLastPlayerObject()))
                  {
                    error("When parsing the object for %what%, the \"LastPlayerObject\" field was missing.");
                  }
                if (fieldGeneratorLastServerObject.have_value)
                  {
                    result->setLastServerObject(fieldGeneratorLastServerObject.value);
                    fieldGeneratorLastServerObject.have_value = false;
                  }
                else if (!(result->hasLastServerObject()))
                  {
                    error("When parsing the object for %what%, the \"LastServerObject\" field was missing.");
                  }
                if (fieldGeneratorMatchImageURL.have_value)
                  {
                    result->setMatchImageURL(fieldGeneratorMatchImageURL.value);
                    fieldGeneratorMatchImageURL.have_value = false;
                  }
                if (fieldGeneratorIsRoundOver.have_value)
                  {
                    result->setIsRoundOver(fieldGeneratorIsRoundOver.value);
                    fieldGeneratorIsRoundOver.have_value = false;
                  }
                else if (!(result->hasIsRoundOver()))
                  {
                    error("When parsing the object for %what%, the \"IsRoundOver\" field was missing.");
                  }
              }
            virtual void handle_result(TypeNativeDataJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'G':
                        if (strcmp(&(field_name[1]), "ameState") == 0)
                            return &fieldGeneratorGameState;
                        break;
                    case 'I':
                        if (strcmp(&(field_name[1]), "sRoundOver") == 0)
                            return &fieldGeneratorIsRoundOver;
                        break;
                    case 'L':
                        if (strncmp(&(field_name[1]), "ast", 3) == 0)
                          {
                            switch ((unsigned char)(field_name[4]))
                              {
                                case 'P':
                                    if (strcmp(&(field_name[5]), "layerObject") == 0)
                                        return &fieldGeneratorLastPlayerObject;
                                    break;
                                case 'S':
                                    if (strcmp(&(field_name[5]), "erverObject") == 0)
                                        return &fieldGeneratorLastServerObject;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'M':
                        if (strcmp(&(field_name[1]), "atchImageURL") == 0)
                            return &fieldGeneratorMatchImageURL;
                        break;
                    case 'P':
                        if (strcmp(&(field_name[1]), "layerScore") == 0)
                            return &fieldGeneratorPlayerScore;
                        break;
                    case 'S':
                        if (strcmp(&(field_name[1]), "erverScore") == 0)
                            return &fieldGeneratorServerScore;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorServerScore("field \"ServerScore\" of the TypeNativeData class"), fieldGeneratorPlayerScore("field \"PlayerScore\" of the TypeNativeData class"), fieldGeneratorGameState("field \"GameState\" of the TypeNativeData class"), fieldGeneratorLastPlayerObject("field \"LastPlayerObject\" of the TypeNativeData class"), fieldGeneratorLastServerObject("field \"LastServerObject\" of the TypeNativeData class"), fieldGeneratorMatchImageURL("field \"MatchImageURL\" of the TypeNativeData class"), fieldGeneratorIsRoundOver("field \"IsRoundOver\" of the TypeNativeData class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeNativeData class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorServerScore.reset();
                fieldGeneratorPlayerScore.reset();
                fieldGeneratorGameState.reset();
                fieldGeneratorLastPlayerObject.reset();
                fieldGeneratorLastServerObject.reset();
                fieldGeneratorMatchImageURL.reset();
                fieldGeneratorIsRoundOver.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasNativeData;
    TypeNativeDataJSON * storeNativeData;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    RockPaperScissorsPickObjectCommandJSON(const RockPaperScissorsPickObjectCommandJSON &);
    RockPaperScissorsPickObjectCommandJSON & operator=(const RockPaperScissorsPickObjectCommandJSON &other);

    JSONValue * extraNativeDataToJSON(void) const;

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);


  public:
    RockPaperScissorsPickObjectCommandJSON(void);
    virtual ~RockPaperScissorsPickObjectCommandJSON(void);
    const char * getRockPaperScissorsCommandKind(void) const;
    bool  hasNativeData(void) const;
    TypeNativeDataJSON *  getNativeData(void);
    const TypeNativeDataJSON *  getNativeData(void) const;

    virtual size_t extraRockPaperScissorsPickObjectCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraRockPaperScissorsPickObjectCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraRockPaperScissorsPickObjectCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraRockPaperScissorsPickObjectCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraRockPaperScissorsPickObjectCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraRockPaperScissorsPickObjectCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraRockPaperScissorsCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasNativeData)
            ++result;
        result += extraRockPaperScissorsPickObjectCommandComponentCount();
        return result;
      }
    const char *extraRockPaperScissorsCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return "NativeData";
            --remainder;
          }
        return extraRockPaperScissorsPickObjectCommandComponentKey(remainder);
      }
    JSONValue *extraRockPaperScissorsCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        return extraRockPaperScissorsPickObjectCommandComponentValue(remainder);
      }
    const JSONValue *extraRockPaperScissorsCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        return extraRockPaperScissorsPickObjectCommandComponentValue(remainder);
      }
    JSONValue *extraRockPaperScissorsCommandLookup(const char *field_name)
      {
        if (strcmp(field_name, "NativeData") == 0)
            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
        return extraRockPaperScissorsPickObjectCommandLookup(field_name);
      }
    const JSONValue *extraRockPaperScissorsCommandLookup(const char *field_name) const
      {
        if (strcmp(field_name, "NativeData") == 0)
            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
        return extraRockPaperScissorsPickObjectCommandLookup(field_name);
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

    virtual void extraRockPaperScissorsPickObjectCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraRockPaperScissorsPickObjectCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraRockPaperScissorsPickObjectCommandLookup(key);
        if (old_field == NULL)
          {
            extraRockPaperScissorsPickObjectCommandAppendPair(key, new_component);
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
    void extraRockPaperScissorsCommandAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "NativeData") == 0)
            {
            fromJSONNativeData(new_component, false);
            return;
            }
        extraRockPaperScissorsPickObjectCommandAppendPair(key, new_component);
      }
    void extraRockPaperScissorsCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "NativeData") == 0)
            {
            fromJSONNativeData(new_component, false);
            return;
            }
        extraRockPaperScissorsPickObjectCommandSetField(key, new_component);
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
        RockPaperScissorsCommandJSON::write_fields_as_json(handler);
        assert(flagHasNativeData);
        handler->start_pair("NativeData");
        storeNativeData->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasNativeData()))
          {
            return "When parsing the object for %what%, the \"NativeData\" field was missing.";
          }
        return NULL;
      }

    static RockPaperScissorsPickObjectCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static RockPaperScissorsPickObjectCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        RockPaperScissorsPickObjectCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RockPaperScissorsPickObjectCommandJSON>, RockPaperScissorsPickObjectCommandJSON *, bool> generator("Type RockPaperScissorsPickObjectCommand", ignore_extras);
            parse_json_value(text, "Text for RockPaperScissorsPickObjectCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static RockPaperScissorsPickObjectCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        RockPaperScissorsPickObjectCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RockPaperScissorsPickObjectCommandJSON>, RockPaperScissorsPickObjectCommandJSON *, bool> generator("Type RockPaperScissorsPickObjectCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public RockPaperScissorsCommandJSON::Generator
      {
      private:
        JSONHoldingGenerator<TypeNativeDataJSON::Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool > fieldGeneratorNativeData;
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
            if (!(strcmp(getRockPaperScissorsCommandJSONKey().c_str(), "RockPaperScissorsPickObjectCommand") == 0))
                throw("The key field has a value other than `RockPaperScissorsPickObjectCommand'.");
            RockPaperScissorsPickObjectCommandJSON *result = new RockPaperScissorsPickObjectCommandJSON();
            assert(result != NULL);
            RCHandle<RockPaperScissorsPickObjectCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraRockPaperScissorsPickObjectCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(RockPaperScissorsCommandJSON *new_result)
          {
            handle_result((RockPaperScissorsPickObjectCommandJSON *)new_result);
          }
        void finish(RockPaperScissorsPickObjectCommandJSON *result)
          {
            if (fieldGeneratorNativeData.have_value)
              {
                result->setNativeData(fieldGeneratorNativeData.value.referenced());
                fieldGeneratorNativeData.have_value = false;
              }
            else if (!(result->hasNativeData()))
              {
                error("When parsing the object for %what%, the \"NativeData\" field was missing.");
              }
            RockPaperScissorsCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(RockPaperScissorsPickObjectCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "NativeData") == 0)
                return &fieldGeneratorNativeData;
            return RockPaperScissorsCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : RockPaperScissorsCommandJSON::Generator(ignore_extras), fieldGeneratorNativeData("field \"NativeData\" of the RockPaperScissorsPickObjectCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the RockPaperScissorsPickObjectCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNativeData.reset();
            RockPaperScissorsCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* ROCKPAPERSCISSORSPICKOBJECTCOMMANDJSON_H */
