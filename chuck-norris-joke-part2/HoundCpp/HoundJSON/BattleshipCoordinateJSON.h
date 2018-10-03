/* file "BattleshipCoordinateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef BATTLESHIPCOORDINATEJSON_H
#define BATTLESHIPCOORDINATEJSON_H

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


class BattleshipCoordinateJSON : public ReferenceCounted
  {
  public:
    enum TypeYCoordinate
      {
        YCoordinate_A,
        YCoordinate_B,
        YCoordinate_C,
        YCoordinate_D,
        YCoordinate_E,
        YCoordinate_F,
        YCoordinate_G,
        YCoordinate_H,
        YCoordinate_I,
        YCoordinate_J,
        YCoordinate_K,
        YCoordinate_L,
        YCoordinate_M,
        YCoordinate_O,
        YCoordinate_P,
        YCoordinate_Q,
        YCoordinate_R,
        YCoordinate_S,
        YCoordinate_T,
        YCoordinate_U,
        YCoordinate_V,
        YCoordinate_W,
        YCoordinate_X,
        YCoordinate_Y,
        YCoordinate_Z
      };

    static TypeYCoordinate  stringToYCoordinate(const char *chars);
    static const char * stringFromYCoordinate(TypeYCoordinate the_enum);
    enum TypeResult
      {
        Result_Hit,
        Result_Miss,
        Result_InvalidCoordinate,
        Result_NotUnderstood,
        Result_None
      };

    static TypeResult  stringToResult(const char *chars);
    static const char * stringFromResult(TypeResult the_enum);

  private:
    bool flagHasYCoordinate;
    TypeYCoordinate storeYCoordinate;
    bool flagHasXCoordinate;
    uint8_t storeXCoordinate;
    bool flagHasResult;
    TypeResult storeResult;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    BattleshipCoordinateJSON(const BattleshipCoordinateJSON &);
    BattleshipCoordinateJSON & operator=(const BattleshipCoordinateJSON &other);

    void  fromJSONYCoordinate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONXCoordinate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResult(JSONValue *json_value, bool ignore_extras = false);


  public:
    BattleshipCoordinateJSON(void);
    virtual ~BattleshipCoordinateJSON(void);
    bool  hasYCoordinate(void) const;
    TypeYCoordinate  getYCoordinate(void);
    const TypeYCoordinate  getYCoordinate(void) const;
    const char * getYCoordinateAsChars(void) const;
    std::string  getYCoordinateAsString(void) const;
    bool  hasXCoordinate(void) const;
    uint8_t  getXCoordinate(void);
    const uint8_t  getXCoordinate(void) const;
    bool  hasResult(void) const;
    TypeResult  getResult(void);
    const TypeResult  getResult(void) const;
    const char * getResultAsChars(void) const;
    std::string  getResultAsString(void) const;

    virtual size_t extraBattleshipCoordinateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraBattleshipCoordinateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraBattleshipCoordinateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraBattleshipCoordinateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraBattleshipCoordinateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraBattleshipCoordinateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setYCoordinate(TypeYCoordinate new_value)
      {
        flagHasYCoordinate = true;
        storeYCoordinate = new_value;
      }
    void setYCoordinate(const char *chars)
      {
        setYCoordinate(stringToYCoordinate(chars));
      }
    void setYCoordinate(std::string the_string)
      {
        setYCoordinate(stringToYCoordinate(the_string.c_str()));
      }
    void unsetYCoordinate(void)
      {
        flagHasYCoordinate = false;
      }
    void setXCoordinate(uint8_t new_value)
      {
        flagHasXCoordinate = true;
        if (new_value < 1)
            throw("The value for field XCoordinate of BattleshipCoordinateJSON is less than the lower bound (1) for that field.");
        if (new_value > 10)
            throw("The value for field XCoordinate of BattleshipCoordinateJSON is greater than the upper bound (10) for that field.");
        storeXCoordinate = new_value;
      }
    void unsetXCoordinate(void)
      {
        flagHasXCoordinate = false;
      }
    void setResult(TypeResult new_value)
      {
        flagHasResult = true;
        storeResult = new_value;
      }
    void setResult(const char *chars)
      {
        setResult(stringToResult(chars));
      }
    void setResult(std::string the_string)
      {
        setResult(stringToResult(the_string.c_str()));
      }
    void unsetResult(void)
      {
        flagHasResult = false;
      }

    virtual void extraBattleshipCoordinateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraBattleshipCoordinateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraBattleshipCoordinateLookup(key);
        if (old_field == NULL)
          {
            extraBattleshipCoordinateAppendPair(key, new_component);
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
        assert(flagHasYCoordinate);
        handler->start_pair("YCoordinate");
        switch (storeYCoordinate)
          {
            case YCoordinate_A:
                handler->string_value("A");
                break;
            case YCoordinate_B:
                handler->string_value("B");
                break;
            case YCoordinate_C:
                handler->string_value("C");
                break;
            case YCoordinate_D:
                handler->string_value("D");
                break;
            case YCoordinate_E:
                handler->string_value("E");
                break;
            case YCoordinate_F:
                handler->string_value("F");
                break;
            case YCoordinate_G:
                handler->string_value("G");
                break;
            case YCoordinate_H:
                handler->string_value("H");
                break;
            case YCoordinate_I:
                handler->string_value("I");
                break;
            case YCoordinate_J:
                handler->string_value("J");
                break;
            case YCoordinate_K:
                handler->string_value("K");
                break;
            case YCoordinate_L:
                handler->string_value("L");
                break;
            case YCoordinate_M:
                handler->string_value("M");
                break;
            case YCoordinate_O:
                handler->string_value("O");
                break;
            case YCoordinate_P:
                handler->string_value("P");
                break;
            case YCoordinate_Q:
                handler->string_value("Q");
                break;
            case YCoordinate_R:
                handler->string_value("R");
                break;
            case YCoordinate_S:
                handler->string_value("S");
                break;
            case YCoordinate_T:
                handler->string_value("T");
                break;
            case YCoordinate_U:
                handler->string_value("U");
                break;
            case YCoordinate_V:
                handler->string_value("V");
                break;
            case YCoordinate_W:
                handler->string_value("W");
                break;
            case YCoordinate_X:
                handler->string_value("X");
                break;
            case YCoordinate_Y:
                handler->string_value("Y");
                break;
            case YCoordinate_Z:
                handler->string_value("Z");
                break;
            default:
                assert(false);
          }
        assert(flagHasXCoordinate);
        handler->start_pair("XCoordinate");
        handler->number_value(storeXCoordinate);
        if (flagHasResult)
          {
            handler->start_pair("Result");
            switch (storeResult)
              {
                case Result_Hit:
                    handler->string_value("Hit");
                    break;
                case Result_Miss:
                    handler->string_value("Miss");
                    break;
                case Result_InvalidCoordinate:
                    handler->string_value("InvalidCoordinate");
                    break;
                case Result_NotUnderstood:
                    handler->string_value("NotUnderstood");
                    break;
                case Result_None:
                    handler->string_value("None");
                    break;
                default:
                    assert(false);
              }
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasYCoordinate()))
          {
            return "When parsing the object for %what%, the \"YCoordinate\" field was missing.";
          }
        if (!(hasXCoordinate()))
          {
            return "When parsing the object for %what%, the \"XCoordinate\" field was missing.";
          }
        return NULL;
      }

    static BattleshipCoordinateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static BattleshipCoordinateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        BattleshipCoordinateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<BattleshipCoordinateJSON>, BattleshipCoordinateJSON *, bool> generator("Type BattleshipCoordinate", ignore_extras);
            parse_json_value(text, "Text for BattleshipCoordinateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static BattleshipCoordinateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        BattleshipCoordinateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<BattleshipCoordinateJSON>, BattleshipCoordinateJSON *, bool> generator("Type BattleshipCoordinate", ignore_extras);
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
    class FieldGeneratorYCoordinate : public JSONStringGenerator
          {
          protected:
            FieldGeneratorYCoordinate(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorYCoordinate(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToYCoordinate(result));
              }
            virtual void handle_result(TypeYCoordinate result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorYCoordinate, TypeYCoordinate, TypeYCoordinate > fieldGeneratorYCoordinate;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 1, 10>, uint8_t, uint8_t > fieldGeneratorXCoordinate;
    class FieldGeneratorResult : public JSONStringGenerator
          {
          protected:
            FieldGeneratorResult(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorResult(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToResult(result));
              }
            virtual void handle_result(TypeResult result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorResult, TypeResult, TypeResult > fieldGeneratorResult;
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
            BattleshipCoordinateJSON *result = new BattleshipCoordinateJSON();
            assert(result != NULL);
            RCHandle<BattleshipCoordinateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraBattleshipCoordinateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(BattleshipCoordinateJSON *result)
          {
            if (fieldGeneratorYCoordinate.have_value)
              {
                result->setYCoordinate(fieldGeneratorYCoordinate.value);
                fieldGeneratorYCoordinate.have_value = false;
              }
            else if (!(result->hasYCoordinate()))
              {
                error("When parsing the object for %what%, the \"YCoordinate\" field was missing.");
              }
            if (fieldGeneratorXCoordinate.have_value)
              {
                result->setXCoordinate(fieldGeneratorXCoordinate.value);
                fieldGeneratorXCoordinate.have_value = false;
              }
            else if (!(result->hasXCoordinate()))
              {
                error("When parsing the object for %what%, the \"XCoordinate\" field was missing.");
              }
            if (fieldGeneratorResult.have_value)
              {
                result->setResult(fieldGeneratorResult.value);
                fieldGeneratorResult.have_value = false;
              }
          }
        virtual void handle_result(BattleshipCoordinateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'R':
                    if (strcmp(&(field_name[1]), "esult") == 0)
                        return &fieldGeneratorResult;
                    break;
                case 'X':
                    if (strcmp(&(field_name[1]), "Coordinate") == 0)
                        return &fieldGeneratorXCoordinate;
                    break;
                case 'Y':
                    if (strcmp(&(field_name[1]), "Coordinate") == 0)
                        return &fieldGeneratorYCoordinate;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorYCoordinate("field \"YCoordinate\" of the BattleshipCoordinate class"), fieldGeneratorXCoordinate("field \"XCoordinate\" of the BattleshipCoordinate class"), fieldGeneratorResult("field \"Result\" of the BattleshipCoordinate class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the BattleshipCoordinate class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorYCoordinate.reset();
            fieldGeneratorXCoordinate.reset();
            fieldGeneratorResult.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* BATTLESHIPCOORDINATEJSON_H */
