/* file "BattleshipShipTypeJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef BATTLESHIPSHIPTYPEJSON_H
#define BATTLESHIPSHIPTYPEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "OInteger.h"
#include "BattleshipCoordinateJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class BattleshipShipTypeJSON : public ReferenceCounted
  {
  public:
    enum TypeShipName
      {
        ShipName_Carrier,
        ShipName_Battleship,
        ShipName_Submarine,
        ShipName_Cruiser,
        ShipName_Destroyer
      };

    static TypeShipName  stringToShipName(const char *chars);
    static const char * stringFromShipName(TypeShipName the_enum);
    enum TypeDirection
      {
        Direction_North,
        Direction_East,
        Direction_South,
        Direction_West,
        Direction_None
      };

    static TypeDirection  stringToDirection(const char *chars);
    static const char * stringFromDirection(TypeDirection the_enum);

  private:
    bool flagHasShipName;
    TypeShipName storeShipName;
    bool flagHasDirection;
    TypeDirection storeDirection;
    bool flagHasLength;
    OInteger storeLength;
    bool flagHasShipCoordinate;
    BattleshipCoordinateJSON * storeShipCoordinate;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    BattleshipShipTypeJSON(const BattleshipShipTypeJSON &);
    BattleshipShipTypeJSON & operator=(const BattleshipShipTypeJSON &other);

    void  fromJSONShipName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDirection(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLength(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONShipCoordinate(JSONValue *json_value, bool ignore_extras = false);


  public:
    BattleshipShipTypeJSON(void);
    virtual ~BattleshipShipTypeJSON(void);
    bool  hasShipName(void) const;
    TypeShipName  getShipName(void);
    const TypeShipName  getShipName(void) const;
    const char * getShipNameAsChars(void) const;
    std::string  getShipNameAsString(void) const;
    bool  hasDirection(void) const;
    TypeDirection  getDirection(void);
    const TypeDirection  getDirection(void) const;
    const char * getDirectionAsChars(void) const;
    std::string  getDirectionAsString(void) const;
    bool  hasLength(void) const;
    OInteger  getLength(void);
    const OInteger  getLength(void) const;
    bool  hasShipCoordinate(void) const;
    BattleshipCoordinateJSON *  getShipCoordinate(void);
    const BattleshipCoordinateJSON *  getShipCoordinate(void) const;

    virtual size_t extraBattleshipShipTypeComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraBattleshipShipTypeComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraBattleshipShipTypeComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraBattleshipShipTypeComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraBattleshipShipTypeLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraBattleshipShipTypeLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setShipName(TypeShipName new_value)
      {
        flagHasShipName = true;
        storeShipName = new_value;
      }
    void setShipName(const char *chars)
      {
        setShipName(stringToShipName(chars));
      }
    void setShipName(std::string the_string)
      {
        setShipName(stringToShipName(the_string.c_str()));
      }
    void unsetShipName(void)
      {
        flagHasShipName = false;
      }
    void setDirection(TypeDirection new_value)
      {
        flagHasDirection = true;
        storeDirection = new_value;
      }
    void setDirection(const char *chars)
      {
        setDirection(stringToDirection(chars));
      }
    void setDirection(std::string the_string)
      {
        setDirection(stringToDirection(the_string.c_str()));
      }
    void unsetDirection(void)
      {
        flagHasDirection = false;
      }
    void setLength(OInteger new_value)
      {
        flagHasLength = true;
        if (new_value < 0)
            throw("The value for field Length of BattleshipShipTypeJSON is less than the lower bound (0) for that field.");
        storeLength = new_value;
      }
    void unsetLength(void)
      {
        flagHasLength = false;
      }
    void setShipCoordinate(BattleshipCoordinateJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasShipCoordinate)
          {
            storeShipCoordinate->remove_reference();
          }
        flagHasShipCoordinate = true;
        storeShipCoordinate = new_value;
      }
    void unsetShipCoordinate(void)
      {
        if (flagHasShipCoordinate)
          {
            storeShipCoordinate->remove_reference();
          }
        flagHasShipCoordinate = false;
      }

    virtual void extraBattleshipShipTypeAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraBattleshipShipTypeSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraBattleshipShipTypeLookup(key);
        if (old_field == NULL)
          {
            extraBattleshipShipTypeAppendPair(key, new_component);
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
        assert(flagHasShipName);
        handler->start_pair("ShipName");
        switch (storeShipName)
          {
            case ShipName_Carrier:
                handler->string_value("Carrier");
                break;
            case ShipName_Battleship:
                handler->string_value("Battleship");
                break;
            case ShipName_Submarine:
                handler->string_value("Submarine");
                break;
            case ShipName_Cruiser:
                handler->string_value("Cruiser");
                break;
            case ShipName_Destroyer:
                handler->string_value("Destroyer");
                break;
            default:
                assert(false);
          }
        if (flagHasDirection)
          {
            handler->start_pair("Direction");
            switch (storeDirection)
              {
                case Direction_North:
                    handler->string_value("North");
                    break;
                case Direction_East:
                    handler->string_value("East");
                    break;
                case Direction_South:
                    handler->string_value("South");
                    break;
                case Direction_West:
                    handler->string_value("West");
                    break;
                case Direction_None:
                    handler->string_value("None");
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasLength)
          {
            handler->start_pair("Length");
            handler->number_value(storeLength.get_o_integer());
          }
        if (flagHasShipCoordinate)
          {
            handler->start_pair("ShipCoordinate");
            storeShipCoordinate->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasShipName()))
          {
            return "When parsing the object for %what%, the \"ShipName\" field was missing.";
          }
        return NULL;
      }

    static BattleshipShipTypeJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static BattleshipShipTypeJSON *from_text(const char *text, bool ignore_extras = false)
      {
        BattleshipShipTypeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<BattleshipShipTypeJSON>, BattleshipShipTypeJSON *, bool> generator("Type BattleshipShipType", ignore_extras);
            parse_json_value(text, "Text for BattleshipShipTypeJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static BattleshipShipTypeJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        BattleshipShipTypeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<BattleshipShipTypeJSON>, BattleshipShipTypeJSON *, bool> generator("Type BattleshipShipType", ignore_extras);
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
    class FieldGeneratorShipName : public JSONStringGenerator
          {
          protected:
            FieldGeneratorShipName(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorShipName(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToShipName(result));
              }
            virtual void handle_result(TypeShipName result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorShipName, TypeShipName, TypeShipName > fieldGeneratorShipName;
    class FieldGeneratorDirection : public JSONStringGenerator
          {
          protected:
            FieldGeneratorDirection(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorDirection(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToDirection(result));
              }
            virtual void handle_result(TypeDirection result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorDirection, TypeDirection, TypeDirection > fieldGeneratorDirection;
        static char lowerBoundLength[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundLength>, OInteger, o_integer > fieldGeneratorLength;
        JSONHoldingGenerator<BattleshipCoordinateJSON::Generator, RCHandle<BattleshipCoordinateJSON>, BattleshipCoordinateJSON *, bool > fieldGeneratorShipCoordinate;
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
            BattleshipShipTypeJSON *result = new BattleshipShipTypeJSON();
            assert(result != NULL);
            RCHandle<BattleshipShipTypeJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraBattleshipShipTypeAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(BattleshipShipTypeJSON *result)
          {
            if (fieldGeneratorShipName.have_value)
              {
                result->setShipName(fieldGeneratorShipName.value);
                fieldGeneratorShipName.have_value = false;
              }
            else if (!(result->hasShipName()))
              {
                error("When parsing the object for %what%, the \"ShipName\" field was missing.");
              }
            if (fieldGeneratorDirection.have_value)
              {
                result->setDirection(fieldGeneratorDirection.value);
                fieldGeneratorDirection.have_value = false;
              }
            if (fieldGeneratorLength.have_value)
              {
                result->setLength(fieldGeneratorLength.value);
                fieldGeneratorLength.have_value = false;
              }
            if (fieldGeneratorShipCoordinate.have_value)
              {
                result->setShipCoordinate(fieldGeneratorShipCoordinate.value.referenced());
                fieldGeneratorShipCoordinate.have_value = false;
              }
          }
        virtual void handle_result(BattleshipShipTypeJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strcmp(&(field_name[1]), "irection") == 0)
                        return &fieldGeneratorDirection;
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "ength") == 0)
                        return &fieldGeneratorLength;
                    break;
                case 'S':
                    if (strncmp(&(field_name[1]), "hip", 3) == 0)
                      {
                        switch ((unsigned char)(field_name[4]))
                          {
                            case 'C':
                                if (strcmp(&(field_name[5]), "oordinate") == 0)
                                    return &fieldGeneratorShipCoordinate;
                                break;
                            case 'N':
                                if (strcmp(&(field_name[5]), "ame") == 0)
                                    return &fieldGeneratorShipName;
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
        Generator(bool ignore_extras = false) : fieldGeneratorShipName("field \"ShipName\" of the BattleshipShipType class"), fieldGeneratorDirection("field \"Direction\" of the BattleshipShipType class"), fieldGeneratorLength("field \"Length\" of the BattleshipShipType class"), fieldGeneratorShipCoordinate("field \"ShipCoordinate\" of the BattleshipShipType class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the BattleshipShipType class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorShipName.reset();
            fieldGeneratorDirection.reset();
            fieldGeneratorLength.reset();
            fieldGeneratorShipCoordinate.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* BATTLESHIPSHIPTYPEJSON_H */
