/* file "BattleshipQueryStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef BATTLESHIPQUERYSTATEJSON_H
#define BATTLESHIPQUERYSTATEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include "BattleshipCoordinateJSON.h"
#include "BattleshipCoordinateJSON.h"
#include "DateAndOrTimeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class BattleshipQueryStateJSON : public ReferenceCounted
  {
  public:
    enum TypeBattleshipCommandKind
      {
        BattleshipCommandKind_BattleshipPlayCommand,
        BattleshipCommandKind_BattleshipInvalidCoordinatesCommand,
        BattleshipCommandKind_BattleshipNotUnderstoodCommand,
        BattleshipCommandKind_BattleshipDictateCoordinatesCommand
      };

    static TypeBattleshipCommandKind  stringToBattleshipCommandKind(const char *chars);
    static const char * stringFromBattleshipCommandKind(TypeBattleshipCommandKind the_enum);

  private:
    bool flagHasUserCoordinates;
    std::vector< BattleshipCoordinateJSON * > storeUserCoordinates;
    bool flagHasComputerCoordinates;
    std::vector< BattleshipCoordinateJSON * > storeComputerCoordinates;
    bool flagHasStartDatetime;
    DateAndOrTimeJSON * storeStartDatetime;
    bool flagHasBattleshipCommandKind;
    TypeBattleshipCommandKind storeBattleshipCommandKind;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    BattleshipQueryStateJSON(const BattleshipQueryStateJSON &);
    BattleshipQueryStateJSON & operator=(const BattleshipQueryStateJSON &other);

    void  fromJSONUserCoordinates(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONComputerCoordinates(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStartDatetime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBattleshipCommandKind(JSONValue *json_value, bool ignore_extras = false);


  public:
    BattleshipQueryStateJSON(void);
    virtual ~BattleshipQueryStateJSON(void);
    bool  hasUserCoordinates(void) const;
    size_t  countOfUserCoordinates(void) const;
    BattleshipCoordinateJSON *  elementOfUserCoordinates(size_t element_num);
    const BattleshipCoordinateJSON *  elementOfUserCoordinates(size_t element_num) const;
    std::vector< BattleshipCoordinateJSON * >  getUserCoordinates(void);
    const std::vector< BattleshipCoordinateJSON * >  getUserCoordinates(void) const;
    bool  hasComputerCoordinates(void) const;
    size_t  countOfComputerCoordinates(void) const;
    BattleshipCoordinateJSON *  elementOfComputerCoordinates(size_t element_num);
    const BattleshipCoordinateJSON *  elementOfComputerCoordinates(size_t element_num) const;
    std::vector< BattleshipCoordinateJSON * >  getComputerCoordinates(void);
    const std::vector< BattleshipCoordinateJSON * >  getComputerCoordinates(void) const;
    bool  hasStartDatetime(void) const;
    DateAndOrTimeJSON *  getStartDatetime(void);
    const DateAndOrTimeJSON *  getStartDatetime(void) const;
    bool  hasBattleshipCommandKind(void) const;
    TypeBattleshipCommandKind  getBattleshipCommandKind(void);
    const TypeBattleshipCommandKind  getBattleshipCommandKind(void) const;
    const char * getBattleshipCommandKindAsChars(void) const;
    std::string  getBattleshipCommandKindAsString(void) const;

    virtual size_t extraBattleshipQueryStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraBattleshipQueryStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraBattleshipQueryStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraBattleshipQueryStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraBattleshipQueryStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraBattleshipQueryStateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void initUserCoordinates(void)
      {
        if (flagHasUserCoordinates)
          {
            for (size_t num3 = 0; num3 < storeUserCoordinates.size(); ++num3)
              {
                storeUserCoordinates[num3]->remove_reference();
              }
          }
        flagHasUserCoordinates = true;
        storeUserCoordinates.clear();
      }
    void appendUserCoordinates(BattleshipCoordinateJSON * to_append)
      {
        if (!flagHasUserCoordinates)
          {
            flagHasUserCoordinates = true;
            storeUserCoordinates.clear();
          }
        assert(flagHasUserCoordinates);
        to_append->add_reference();
        storeUserCoordinates.push_back(to_append);
      }
    void unsetUserCoordinates(void)
      {
        if (flagHasUserCoordinates)
          {
            for (size_t num4 = 0; num4 < storeUserCoordinates.size(); ++num4)
              {
                storeUserCoordinates[num4]->remove_reference();
              }
          }
        flagHasUserCoordinates = false;
        storeUserCoordinates.clear();
      }
    void initComputerCoordinates(void)
      {
        if (flagHasComputerCoordinates)
          {
            for (size_t num5 = 0; num5 < storeComputerCoordinates.size(); ++num5)
              {
                storeComputerCoordinates[num5]->remove_reference();
              }
          }
        flagHasComputerCoordinates = true;
        storeComputerCoordinates.clear();
      }
    void appendComputerCoordinates(BattleshipCoordinateJSON * to_append)
      {
        if (!flagHasComputerCoordinates)
          {
            flagHasComputerCoordinates = true;
            storeComputerCoordinates.clear();
          }
        assert(flagHasComputerCoordinates);
        to_append->add_reference();
        storeComputerCoordinates.push_back(to_append);
      }
    void unsetComputerCoordinates(void)
      {
        if (flagHasComputerCoordinates)
          {
            for (size_t num6 = 0; num6 < storeComputerCoordinates.size(); ++num6)
              {
                storeComputerCoordinates[num6]->remove_reference();
              }
          }
        flagHasComputerCoordinates = false;
        storeComputerCoordinates.clear();
      }
    void setStartDatetime(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStartDatetime)
          {
            storeStartDatetime->remove_reference();
          }
        flagHasStartDatetime = true;
        storeStartDatetime = new_value;
      }
    void unsetStartDatetime(void)
      {
        if (flagHasStartDatetime)
          {
            storeStartDatetime->remove_reference();
          }
        flagHasStartDatetime = false;
      }
    void setBattleshipCommandKind(TypeBattleshipCommandKind new_value)
      {
        flagHasBattleshipCommandKind = true;
        storeBattleshipCommandKind = new_value;
      }
    void setBattleshipCommandKind(const char *chars)
      {
        setBattleshipCommandKind(stringToBattleshipCommandKind(chars));
      }
    void setBattleshipCommandKind(std::string the_string)
      {
        setBattleshipCommandKind(stringToBattleshipCommandKind(the_string.c_str()));
      }
    void unsetBattleshipCommandKind(void)
      {
        flagHasBattleshipCommandKind = false;
      }

    virtual void extraBattleshipQueryStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraBattleshipQueryStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraBattleshipQueryStateLookup(key);
        if (old_field == NULL)
          {
            extraBattleshipQueryStateAppendPair(key, new_component);
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
        assert(flagHasUserCoordinates);
        handler->start_pair("UserCoordinates");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeUserCoordinates.size(); ++num1)
          {
            storeUserCoordinates[num1]->write_as_json(handler);
          }
        handler->finish_array();
        assert(flagHasComputerCoordinates);
        handler->start_pair("ComputerCoordinates");
        handler->start_array();
        for (size_t num2 = 0; num2 < storeComputerCoordinates.size(); ++num2)
          {
            storeComputerCoordinates[num2]->write_as_json(handler);
          }
        handler->finish_array();
        if (flagHasStartDatetime)
          {
            handler->start_pair("StartDatetime");
            storeStartDatetime->write_as_json(handler);
          }
        if (flagHasBattleshipCommandKind)
          {
            handler->start_pair("BattleshipCommandKind");
            switch (storeBattleshipCommandKind)
              {
                case BattleshipCommandKind_BattleshipPlayCommand:
                    handler->string_value("BattleshipPlayCommand");
                    break;
                case BattleshipCommandKind_BattleshipInvalidCoordinatesCommand:
                    handler->string_value("BattleshipInvalidCoordinatesCommand");
                    break;
                case BattleshipCommandKind_BattleshipNotUnderstoodCommand:
                    handler->string_value("BattleshipNotUnderstoodCommand");
                    break;
                case BattleshipCommandKind_BattleshipDictateCoordinatesCommand:
                    handler->string_value("BattleshipDictateCoordinatesCommand");
                    break;
                default:
                    assert(false);
              }
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasUserCoordinates()))
          {
            return "When parsing the object for %what%, the \"UserCoordinates\" field was missing.";
          }
        if (!(hasComputerCoordinates()))
          {
            return "When parsing the object for %what%, the \"ComputerCoordinates\" field was missing.";
          }
        return NULL;
      }

    static BattleshipQueryStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static BattleshipQueryStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        BattleshipQueryStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<BattleshipQueryStateJSON>, BattleshipQueryStateJSON *, bool> generator("Type BattleshipQueryState", ignore_extras);
            parse_json_value(text, "Text for BattleshipQueryStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static BattleshipQueryStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        BattleshipQueryStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<BattleshipQueryStateJSON>, BattleshipQueryStateJSON *, bool> generator("Type BattleshipQueryState", ignore_extras);
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
        JSONHoldingArrayGenerator<BattleshipCoordinateJSON::Generator, RCHandle<BattleshipCoordinateJSON>, BattleshipCoordinateJSON *, bool > fieldGeneratorUserCoordinates;
        JSONHoldingArrayGenerator<BattleshipCoordinateJSON::Generator, RCHandle<BattleshipCoordinateJSON>, BattleshipCoordinateJSON *, bool > fieldGeneratorComputerCoordinates;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorStartDatetime;
    class FieldGeneratorBattleshipCommandKind : public JSONStringGenerator
          {
          protected:
            FieldGeneratorBattleshipCommandKind(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorBattleshipCommandKind(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToBattleshipCommandKind(result));
              }
            virtual void handle_result(TypeBattleshipCommandKind result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorBattleshipCommandKind, TypeBattleshipCommandKind, TypeBattleshipCommandKind > fieldGeneratorBattleshipCommandKind;
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
            BattleshipQueryStateJSON *result = new BattleshipQueryStateJSON();
            assert(result != NULL);
            RCHandle<BattleshipQueryStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraBattleshipQueryStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(BattleshipQueryStateJSON *result)
          {
            if (fieldGeneratorUserCoordinates.have_value)
              {
                result->initUserCoordinates();
                size_t count = fieldGeneratorUserCoordinates.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendUserCoordinates(fieldGeneratorUserCoordinates.value[num].referenced());
                  }
                fieldGeneratorUserCoordinates.value.clear();
                fieldGeneratorUserCoordinates.have_value = false;
              }
            else if (!(result->hasUserCoordinates()))
              {
                error("When parsing the object for %what%, the \"UserCoordinates\" field was missing.");
              }
            if (fieldGeneratorComputerCoordinates.have_value)
              {
                result->initComputerCoordinates();
                size_t count = fieldGeneratorComputerCoordinates.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendComputerCoordinates(fieldGeneratorComputerCoordinates.value[num].referenced());
                  }
                fieldGeneratorComputerCoordinates.value.clear();
                fieldGeneratorComputerCoordinates.have_value = false;
              }
            else if (!(result->hasComputerCoordinates()))
              {
                error("When parsing the object for %what%, the \"ComputerCoordinates\" field was missing.");
              }
            if (fieldGeneratorStartDatetime.have_value)
              {
                result->setStartDatetime(fieldGeneratorStartDatetime.value.referenced());
                fieldGeneratorStartDatetime.have_value = false;
              }
            if (fieldGeneratorBattleshipCommandKind.have_value)
              {
                result->setBattleshipCommandKind(fieldGeneratorBattleshipCommandKind.value);
                fieldGeneratorBattleshipCommandKind.have_value = false;
              }
          }
        virtual void handle_result(BattleshipQueryStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'B':
                    if (strcmp(&(field_name[1]), "attleshipCommandKind") == 0)
                        return &fieldGeneratorBattleshipCommandKind;
                    break;
                case 'C':
                    if (strcmp(&(field_name[1]), "omputerCoordinates") == 0)
                        return &fieldGeneratorComputerCoordinates;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "tartDatetime") == 0)
                        return &fieldGeneratorStartDatetime;
                    break;
                case 'U':
                    if (strcmp(&(field_name[1]), "serCoordinates") == 0)
                        return &fieldGeneratorUserCoordinates;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorUserCoordinates("field \"UserCoordinates\" of the BattleshipQueryState class", ignore_extras), fieldGeneratorComputerCoordinates("field \"ComputerCoordinates\" of the BattleshipQueryState class", ignore_extras), fieldGeneratorStartDatetime("field \"StartDatetime\" of the BattleshipQueryState class", ignore_extras), fieldGeneratorBattleshipCommandKind("field \"BattleshipCommandKind\" of the BattleshipQueryState class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the BattleshipQueryState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorUserCoordinates.reset();
            fieldGeneratorComputerCoordinates.reset();
            fieldGeneratorStartDatetime.reset();
            fieldGeneratorBattleshipCommandKind.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* BATTLESHIPQUERYSTATEJSON_H */
