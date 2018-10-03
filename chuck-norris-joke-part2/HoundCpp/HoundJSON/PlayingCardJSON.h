/* file "PlayingCardJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef PLAYINGCARDJSON_H
#define PLAYINGCARDJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerRangeGenerator.h"
#include <stdint.h>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class PlayingCardJSON : public ReferenceCounted
  {
  public:
    enum TypeWrittenRankKnownValues
      {
        WrittenRank_A,
        WrittenRank_2,
        WrittenRank_3,
        WrittenRank_4,
        WrittenRank_5,
        WrittenRank_6,
        WrittenRank_7,
        WrittenRank_8,
        WrittenRank_9,
        WrittenRank_10,
        WrittenRank_J,
        WrittenRank_Q,
        WrittenRank_K,
        WrittenRank__none
      };
    struct TypeWrittenRank
      {
        bool in_known_list;
        std::string string_value;
        TypeWrittenRankKnownValues list_value;

        TypeWrittenRank(void);
        TypeWrittenRank(const TypeWrittenRank &other);
        TypeWrittenRank(TypeWrittenRankKnownValues other);
        bool  operator==(const TypeWrittenRank &other) const;
        bool  operator!=(const TypeWrittenRank &other) const;
        bool  operator<(const TypeWrittenRank &other) const;
        bool  operator>(const TypeWrittenRank &other) const;
        bool  operator>=(const TypeWrittenRank &other) const;
        bool  operator<=(const TypeWrittenRank &other) const;

      };

    static TypeWrittenRankKnownValues  stringToWrittenRank(const char *chars);
    static const char * stringFromWrittenRank(TypeWrittenRankKnownValues the_enum);
    enum TypeSpokenRankKnownValues
      {
        SpokenRank_Ace,
        SpokenRank_Two,
        SpokenRank_Three,
        SpokenRank_Four,
        SpokenRank_Five,
        SpokenRank_Six,
        SpokenRank_Seven,
        SpokenRank_Eight,
        SpokenRank_Nine,
        SpokenRank_Ten,
        SpokenRank_Jack,
        SpokenRank_Queen,
        SpokenRank_King,
        SpokenRank__none
      };
    struct TypeSpokenRank
      {
        bool in_known_list;
        std::string string_value;
        TypeSpokenRankKnownValues list_value;

        TypeSpokenRank(void);
        TypeSpokenRank(const TypeSpokenRank &other);
        TypeSpokenRank(TypeSpokenRankKnownValues other);
        bool  operator==(const TypeSpokenRank &other) const;
        bool  operator!=(const TypeSpokenRank &other) const;
        bool  operator<(const TypeSpokenRank &other) const;
        bool  operator>(const TypeSpokenRank &other) const;
        bool  operator>=(const TypeSpokenRank &other) const;
        bool  operator<=(const TypeSpokenRank &other) const;

      };

    static TypeSpokenRankKnownValues  stringToSpokenRank(const char *chars);
    static const char * stringFromSpokenRank(TypeSpokenRankKnownValues the_enum);
    enum TypeWrittenSuitKnownValues
      {
        WrittenSuit__x2663_,
        WrittenSuit__x2666_,
        WrittenSuit__x2665_,
        WrittenSuit__x2660_,
        WrittenSuit__none
      };
    struct TypeWrittenSuit
      {
        bool in_known_list;
        std::string string_value;
        TypeWrittenSuitKnownValues list_value;

        TypeWrittenSuit(void);
        TypeWrittenSuit(const TypeWrittenSuit &other);
        TypeWrittenSuit(TypeWrittenSuitKnownValues other);
        bool  operator==(const TypeWrittenSuit &other) const;
        bool  operator!=(const TypeWrittenSuit &other) const;
        bool  operator<(const TypeWrittenSuit &other) const;
        bool  operator>(const TypeWrittenSuit &other) const;
        bool  operator>=(const TypeWrittenSuit &other) const;
        bool  operator<=(const TypeWrittenSuit &other) const;

      };

    static TypeWrittenSuitKnownValues  stringToWrittenSuit(const char *chars);
    static const char * stringFromWrittenSuit(TypeWrittenSuitKnownValues the_enum);
    enum TypeSpokenSuitKnownValues
      {
        SpokenSuit_Clubs,
        SpokenSuit_Diamonds,
        SpokenSuit_Hearts,
        SpokenSuit_Spades,
        SpokenSuit__none
      };
    struct TypeSpokenSuit
      {
        bool in_known_list;
        std::string string_value;
        TypeSpokenSuitKnownValues list_value;

        TypeSpokenSuit(void);
        TypeSpokenSuit(const TypeSpokenSuit &other);
        TypeSpokenSuit(TypeSpokenSuitKnownValues other);
        bool  operator==(const TypeSpokenSuit &other) const;
        bool  operator!=(const TypeSpokenSuit &other) const;
        bool  operator<(const TypeSpokenSuit &other) const;
        bool  operator>(const TypeSpokenSuit &other) const;
        bool  operator>=(const TypeSpokenSuit &other) const;
        bool  operator<=(const TypeSpokenSuit &other) const;

      };

    static TypeSpokenSuitKnownValues  stringToSpokenSuit(const char *chars);
    static const char * stringFromSpokenSuit(TypeSpokenSuitKnownValues the_enum);

  private:
    bool flagHasWrittenRank;
    TypeWrittenRank storeWrittenRank;
    bool flagHasSpokenRank;
    TypeSpokenRank storeSpokenRank;
    bool flagHasWrittenSuit;
    TypeWrittenSuit storeWrittenSuit;
    bool flagHasSpokenSuit;
    TypeSpokenSuit storeSpokenSuit;
    bool flagHasIndex;
    uint8_t storeIndex;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    PlayingCardJSON(const PlayingCardJSON &);
    PlayingCardJSON & operator=(const PlayingCardJSON &other);

    void  fromJSONWrittenRank(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenRank(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWrittenSuit(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenSuit(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIndex(JSONValue *json_value, bool ignore_extras = false);


  public:
    PlayingCardJSON(void);
    virtual ~PlayingCardJSON(void);
    bool  hasWrittenRank(void) const;
    TypeWrittenRank  getWrittenRank(void);
    const TypeWrittenRank  getWrittenRank(void) const;
    const char * getWrittenRankAsChars(void) const;
    std::string  getWrittenRankAsString(void) const;
    bool  hasSpokenRank(void) const;
    TypeSpokenRank  getSpokenRank(void);
    const TypeSpokenRank  getSpokenRank(void) const;
    const char * getSpokenRankAsChars(void) const;
    std::string  getSpokenRankAsString(void) const;
    bool  hasWrittenSuit(void) const;
    TypeWrittenSuit  getWrittenSuit(void);
    const TypeWrittenSuit  getWrittenSuit(void) const;
    const char * getWrittenSuitAsChars(void) const;
    std::string  getWrittenSuitAsString(void) const;
    bool  hasSpokenSuit(void) const;
    TypeSpokenSuit  getSpokenSuit(void);
    const TypeSpokenSuit  getSpokenSuit(void) const;
    const char * getSpokenSuitAsChars(void) const;
    std::string  getSpokenSuitAsString(void) const;
    bool  hasIndex(void) const;
    uint8_t  getIndex(void);
    const uint8_t  getIndex(void) const;

    virtual size_t extraPlayingCardComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraPlayingCardComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraPlayingCardComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraPlayingCardComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraPlayingCardLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraPlayingCardLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setWrittenRank(TypeWrittenRank new_value)
      {
        flagHasWrittenRank = true;
        storeWrittenRank = new_value;
      }
    void setWrittenRank(const char *chars)
      {
        TypeWrittenRankKnownValues known = stringToWrittenRank(chars);
        TypeWrittenRank new_value;
        if (known == WrittenRank__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setWrittenRank(new_value);
      }
    void setWrittenRank(std::string the_string)
      {
        setWrittenRank(the_string.c_str());
      }
    void setWrittenRank(TypeWrittenRankKnownValues new_value)
      {
        TypeWrittenRank new_full_value;
        assert(new_value != WrittenRank__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setWrittenRank(new_full_value);
      }
    void unsetWrittenRank(void)
      {
        flagHasWrittenRank = false;
      }
    void setSpokenRank(TypeSpokenRank new_value)
      {
        flagHasSpokenRank = true;
        storeSpokenRank = new_value;
      }
    void setSpokenRank(const char *chars)
      {
        TypeSpokenRankKnownValues known = stringToSpokenRank(chars);
        TypeSpokenRank new_value;
        if (known == SpokenRank__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setSpokenRank(new_value);
      }
    void setSpokenRank(std::string the_string)
      {
        setSpokenRank(the_string.c_str());
      }
    void setSpokenRank(TypeSpokenRankKnownValues new_value)
      {
        TypeSpokenRank new_full_value;
        assert(new_value != SpokenRank__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setSpokenRank(new_full_value);
      }
    void unsetSpokenRank(void)
      {
        flagHasSpokenRank = false;
      }
    void setWrittenSuit(TypeWrittenSuit new_value)
      {
        flagHasWrittenSuit = true;
        storeWrittenSuit = new_value;
      }
    void setWrittenSuit(const char *chars)
      {
        TypeWrittenSuitKnownValues known = stringToWrittenSuit(chars);
        TypeWrittenSuit new_value;
        if (known == WrittenSuit__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setWrittenSuit(new_value);
      }
    void setWrittenSuit(std::string the_string)
      {
        setWrittenSuit(the_string.c_str());
      }
    void setWrittenSuit(TypeWrittenSuitKnownValues new_value)
      {
        TypeWrittenSuit new_full_value;
        assert(new_value != WrittenSuit__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setWrittenSuit(new_full_value);
      }
    void unsetWrittenSuit(void)
      {
        flagHasWrittenSuit = false;
      }
    void setSpokenSuit(TypeSpokenSuit new_value)
      {
        flagHasSpokenSuit = true;
        storeSpokenSuit = new_value;
      }
    void setSpokenSuit(const char *chars)
      {
        TypeSpokenSuitKnownValues known = stringToSpokenSuit(chars);
        TypeSpokenSuit new_value;
        if (known == SpokenSuit__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setSpokenSuit(new_value);
      }
    void setSpokenSuit(std::string the_string)
      {
        setSpokenSuit(the_string.c_str());
      }
    void setSpokenSuit(TypeSpokenSuitKnownValues new_value)
      {
        TypeSpokenSuit new_full_value;
        assert(new_value != SpokenSuit__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setSpokenSuit(new_full_value);
      }
    void unsetSpokenSuit(void)
      {
        flagHasSpokenSuit = false;
      }
    void setIndex(uint8_t new_value)
      {
        flagHasIndex = true;
        if (new_value < 0)
            throw("The value for field Index of PlayingCardJSON is less than the lower bound (0) for that field.");
        if (new_value > 51)
            throw("The value for field Index of PlayingCardJSON is greater than the upper bound (51) for that field.");
        storeIndex = new_value;
      }
    void unsetIndex(void)
      {
        flagHasIndex = false;
      }

    virtual void extraPlayingCardAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraPlayingCardSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraPlayingCardLookup(key);
        if (old_field == NULL)
          {
            extraPlayingCardAppendPair(key, new_component);
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
        assert(flagHasWrittenRank);
        handler->start_pair("WrittenRank");
        if (storeWrittenRank.in_known_list)
          {
            switch (storeWrittenRank.list_value)
              {
                case WrittenRank_A:
                    handler->string_value("A");
                    break;
                case WrittenRank_2:
                    handler->string_value("2");
                    break;
                case WrittenRank_3:
                    handler->string_value("3");
                    break;
                case WrittenRank_4:
                    handler->string_value("4");
                    break;
                case WrittenRank_5:
                    handler->string_value("5");
                    break;
                case WrittenRank_6:
                    handler->string_value("6");
                    break;
                case WrittenRank_7:
                    handler->string_value("7");
                    break;
                case WrittenRank_8:
                    handler->string_value("8");
                    break;
                case WrittenRank_9:
                    handler->string_value("9");
                    break;
                case WrittenRank_10:
                    handler->string_value("10");
                    break;
                case WrittenRank_J:
                    handler->string_value("J");
                    break;
                case WrittenRank_Q:
                    handler->string_value("Q");
                    break;
                case WrittenRank_K:
                    handler->string_value("K");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storeWrittenRank.string_value);
          }
        assert(flagHasSpokenRank);
        handler->start_pair("SpokenRank");
        if (storeSpokenRank.in_known_list)
          {
            switch (storeSpokenRank.list_value)
              {
                case SpokenRank_Ace:
                    handler->string_value("Ace");
                    break;
                case SpokenRank_Two:
                    handler->string_value("Two");
                    break;
                case SpokenRank_Three:
                    handler->string_value("Three");
                    break;
                case SpokenRank_Four:
                    handler->string_value("Four");
                    break;
                case SpokenRank_Five:
                    handler->string_value("Five");
                    break;
                case SpokenRank_Six:
                    handler->string_value("Six");
                    break;
                case SpokenRank_Seven:
                    handler->string_value("Seven");
                    break;
                case SpokenRank_Eight:
                    handler->string_value("Eight");
                    break;
                case SpokenRank_Nine:
                    handler->string_value("Nine");
                    break;
                case SpokenRank_Ten:
                    handler->string_value("Ten");
                    break;
                case SpokenRank_Jack:
                    handler->string_value("Jack");
                    break;
                case SpokenRank_Queen:
                    handler->string_value("Queen");
                    break;
                case SpokenRank_King:
                    handler->string_value("King");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storeSpokenRank.string_value);
          }
        assert(flagHasWrittenSuit);
        handler->start_pair("WrittenSuit");
        if (storeWrittenSuit.in_known_list)
          {
            switch (storeWrittenSuit.list_value)
              {
                case WrittenSuit__x2663_:
                    handler->string_value("♣");
                    break;
                case WrittenSuit__x2666_:
                    handler->string_value("♦");
                    break;
                case WrittenSuit__x2665_:
                    handler->string_value("♥");
                    break;
                case WrittenSuit__x2660_:
                    handler->string_value("♠");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storeWrittenSuit.string_value);
          }
        assert(flagHasSpokenSuit);
        handler->start_pair("SpokenSuit");
        if (storeSpokenSuit.in_known_list)
          {
            switch (storeSpokenSuit.list_value)
              {
                case SpokenSuit_Clubs:
                    handler->string_value("Clubs");
                    break;
                case SpokenSuit_Diamonds:
                    handler->string_value("Diamonds");
                    break;
                case SpokenSuit_Hearts:
                    handler->string_value("Hearts");
                    break;
                case SpokenSuit_Spades:
                    handler->string_value("Spades");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storeSpokenSuit.string_value);
          }
        assert(flagHasIndex);
        handler->start_pair("Index");
        handler->number_value(storeIndex);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasWrittenRank()))
          {
            return "When parsing the object for %what%, the \"WrittenRank\" field was missing.";
          }
        if (!(hasSpokenRank()))
          {
            return "When parsing the object for %what%, the \"SpokenRank\" field was missing.";
          }
        if (!(hasWrittenSuit()))
          {
            return "When parsing the object for %what%, the \"WrittenSuit\" field was missing.";
          }
        if (!(hasSpokenSuit()))
          {
            return "When parsing the object for %what%, the \"SpokenSuit\" field was missing.";
          }
        if (!(hasIndex()))
          {
            return "When parsing the object for %what%, the \"Index\" field was missing.";
          }
        return NULL;
      }

    static PlayingCardJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static PlayingCardJSON *from_text(const char *text, bool ignore_extras = false)
      {
        PlayingCardJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<PlayingCardJSON>, PlayingCardJSON *, bool> generator("Type PlayingCard", ignore_extras);
            parse_json_value(text, "Text for PlayingCardJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static PlayingCardJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        PlayingCardJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<PlayingCardJSON>, PlayingCardJSON *, bool> generator("Type PlayingCard", ignore_extras);
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
    class FieldGeneratorWrittenRank : public JSONStringGenerator
          {
          protected:
            FieldGeneratorWrittenRank(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorWrittenRank(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeWrittenRankKnownValues known = stringToWrittenRank(result);
                TypeWrittenRank new_value;
                if (known == WrittenRank__none)
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
            virtual void handle_result(TypeWrittenRank result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorWrittenRank, TypeWrittenRank, TypeWrittenRank > fieldGeneratorWrittenRank;
    class FieldGeneratorSpokenRank : public JSONStringGenerator
          {
          protected:
            FieldGeneratorSpokenRank(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorSpokenRank(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeSpokenRankKnownValues known = stringToSpokenRank(result);
                TypeSpokenRank new_value;
                if (known == SpokenRank__none)
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
            virtual void handle_result(TypeSpokenRank result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorSpokenRank, TypeSpokenRank, TypeSpokenRank > fieldGeneratorSpokenRank;
    class FieldGeneratorWrittenSuit : public JSONStringGenerator
          {
          protected:
            FieldGeneratorWrittenSuit(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorWrittenSuit(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeWrittenSuitKnownValues known = stringToWrittenSuit(result);
                TypeWrittenSuit new_value;
                if (known == WrittenSuit__none)
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
            virtual void handle_result(TypeWrittenSuit result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorWrittenSuit, TypeWrittenSuit, TypeWrittenSuit > fieldGeneratorWrittenSuit;
    class FieldGeneratorSpokenSuit : public JSONStringGenerator
          {
          protected:
            FieldGeneratorSpokenSuit(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorSpokenSuit(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeSpokenSuitKnownValues known = stringToSpokenSuit(result);
                TypeSpokenSuit new_value;
                if (known == SpokenSuit__none)
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
            virtual void handle_result(TypeSpokenSuit result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorSpokenSuit, TypeSpokenSuit, TypeSpokenSuit > fieldGeneratorSpokenSuit;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 51>, uint8_t, uint8_t > fieldGeneratorIndex;
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
            PlayingCardJSON *result = new PlayingCardJSON();
            assert(result != NULL);
            RCHandle<PlayingCardJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraPlayingCardAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(PlayingCardJSON *result)
          {
            if (fieldGeneratorWrittenRank.have_value)
              {
                result->setWrittenRank(fieldGeneratorWrittenRank.value);
                fieldGeneratorWrittenRank.have_value = false;
              }
            else if (!(result->hasWrittenRank()))
              {
                error("When parsing the object for %what%, the \"WrittenRank\" field was missing.");
              }
            if (fieldGeneratorSpokenRank.have_value)
              {
                result->setSpokenRank(fieldGeneratorSpokenRank.value);
                fieldGeneratorSpokenRank.have_value = false;
              }
            else if (!(result->hasSpokenRank()))
              {
                error("When parsing the object for %what%, the \"SpokenRank\" field was missing.");
              }
            if (fieldGeneratorWrittenSuit.have_value)
              {
                result->setWrittenSuit(fieldGeneratorWrittenSuit.value);
                fieldGeneratorWrittenSuit.have_value = false;
              }
            else if (!(result->hasWrittenSuit()))
              {
                error("When parsing the object for %what%, the \"WrittenSuit\" field was missing.");
              }
            if (fieldGeneratorSpokenSuit.have_value)
              {
                result->setSpokenSuit(fieldGeneratorSpokenSuit.value);
                fieldGeneratorSpokenSuit.have_value = false;
              }
            else if (!(result->hasSpokenSuit()))
              {
                error("When parsing the object for %what%, the \"SpokenSuit\" field was missing.");
              }
            if (fieldGeneratorIndex.have_value)
              {
                result->setIndex(fieldGeneratorIndex.value);
                fieldGeneratorIndex.have_value = false;
              }
            else if (!(result->hasIndex()))
              {
                error("When parsing the object for %what%, the \"Index\" field was missing.");
              }
          }
        virtual void handle_result(PlayingCardJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'I':
                    if (strcmp(&(field_name[1]), "ndex") == 0)
                        return &fieldGeneratorIndex;
                    break;
                case 'S':
                    if (strncmp(&(field_name[1]), "poken", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 'R':
                                if (strcmp(&(field_name[7]), "ank") == 0)
                                    return &fieldGeneratorSpokenRank;
                                break;
                            case 'S':
                                if (strcmp(&(field_name[7]), "uit") == 0)
                                    return &fieldGeneratorSpokenSuit;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'W':
                    if (strncmp(&(field_name[1]), "ritten", 6) == 0)
                      {
                        switch ((unsigned char)(field_name[7]))
                          {
                            case 'R':
                                if (strcmp(&(field_name[8]), "ank") == 0)
                                    return &fieldGeneratorWrittenRank;
                                break;
                            case 'S':
                                if (strcmp(&(field_name[8]), "uit") == 0)
                                    return &fieldGeneratorWrittenSuit;
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
        Generator(bool ignore_extras = false) : fieldGeneratorWrittenRank("field \"WrittenRank\" of the PlayingCard class"), fieldGeneratorSpokenRank("field \"SpokenRank\" of the PlayingCard class"), fieldGeneratorWrittenSuit("field \"WrittenSuit\" of the PlayingCard class"), fieldGeneratorSpokenSuit("field \"SpokenSuit\" of the PlayingCard class"), fieldGeneratorIndex("field \"Index\" of the PlayingCard class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the PlayingCard class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorWrittenRank.reset();
            fieldGeneratorSpokenRank.reset();
            fieldGeneratorWrittenSuit.reset();
            fieldGeneratorSpokenSuit.reset();
            fieldGeneratorIndex.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* PLAYINGCARDJSON_H */
