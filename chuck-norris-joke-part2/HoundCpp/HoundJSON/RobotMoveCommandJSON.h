/* file "RobotMoveCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef ROBOTMOVECOMMANDJSON_H
#define ROBOTMOVECOMMANDJSON_H

#pragma interface

#include "RobotCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONIntegerRangeGenerator.h"
#include "OInteger.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class RobotMoveCommandJSON : public RobotCommandJSON
  {
  public:
    enum TypeDistanceUnitKnownValues
      {
        DistanceUnit_inch,
        DistanceUnit_foot,
        DistanceUnit_yard,
        DistanceUnit_millimeter,
        DistanceUnit_centimeter,
        DistanceUnit_meter,
        DistanceUnit__none
      };
    struct TypeDistanceUnit
      {
        bool in_known_list;
        std::string string_value;
        TypeDistanceUnitKnownValues list_value;

        TypeDistanceUnit(void);
        TypeDistanceUnit(const TypeDistanceUnit &other);
        TypeDistanceUnit(TypeDistanceUnitKnownValues other);
        bool  operator==(const TypeDistanceUnit &other) const;
        bool  operator!=(const TypeDistanceUnit &other) const;
        bool  operator<(const TypeDistanceUnit &other) const;
        bool  operator>(const TypeDistanceUnit &other) const;
        bool  operator>=(const TypeDistanceUnit &other) const;
        bool  operator<=(const TypeDistanceUnit &other) const;

      };

    static TypeDistanceUnitKnownValues  stringToDistanceUnit(const char *chars);
    static const char * stringFromDistanceUnit(TypeDistanceUnitKnownValues the_enum);

  private:
    bool flagHasDirection;
    OInteger storeDirection;
    bool flagHasDistance;
    double storeDistance;
    std::string textStoreDistance;
    bool flagHasDistanceUnit;
    TypeDistanceUnit storeDistanceUnit;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    RobotMoveCommandJSON(const RobotMoveCommandJSON &);
    RobotMoveCommandJSON & operator=(const RobotMoveCommandJSON &other);

    JSONValue * extraDirectionToJSON(void) const;
    JSONValue * extraDistanceToJSON(void) const;
    JSONValue * extraDistanceUnitToJSON(void) const;

    void  fromJSONDirection(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDistance(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDistanceUnit(JSONValue *json_value, bool ignore_extras = false);


  public:
    RobotMoveCommandJSON(void);
    virtual ~RobotMoveCommandJSON(void);
    const char * getRobotCommandKind(void) const;
    bool  hasDirection(void) const;
    OInteger  getDirection(void);
    const OInteger  getDirection(void) const;
    bool  hasDistance(void) const;
    double  getDistance(void);
    const double  getDistance(void) const;
    std::string  getDistanceAsText(void) const;
    bool  hasDistanceUnit(void) const;
    TypeDistanceUnit  getDistanceUnit(void);
    const TypeDistanceUnit  getDistanceUnit(void) const;
    const char * getDistanceUnitAsChars(void) const;
    std::string  getDistanceUnitAsString(void) const;

    virtual size_t extraRobotMoveCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraRobotMoveCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraRobotMoveCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraRobotMoveCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraRobotMoveCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraRobotMoveCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraRobotCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasDirection)
            ++result;
        if (flagHasDistance)
            ++result;
        if (flagHasDistanceUnit)
            ++result;
        result += extraRobotMoveCommandComponentCount();
        return result;
      }
    const char *extraRobotCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasDirection)
          {
            if (remainder == 0)
                return "Direction";
            --remainder;
          }
        if (flagHasDistance)
          {
            if (remainder == 0)
                return "Distance";
            --remainder;
          }
        if (flagHasDistanceUnit)
          {
            if (remainder == 0)
                return "DistanceUnit";
            --remainder;
          }
        return extraRobotMoveCommandComponentKey(remainder);
      }
    JSONValue *extraRobotCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasDirection)
          {
            if (remainder == 0)
                return extraDirectionToJSON();
            --remainder;
          }
        if (flagHasDistance)
          {
            if (remainder == 0)
                return extraDistanceToJSON();
            --remainder;
          }
        if (flagHasDistanceUnit)
          {
            if (remainder == 0)
                return extraDistanceUnitToJSON();
            --remainder;
          }
        return extraRobotMoveCommandComponentValue(remainder);
      }
    const JSONValue *extraRobotCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasDirection)
          {
            if (remainder == 0)
                return extraDirectionToJSON();
            --remainder;
          }
        if (flagHasDistance)
          {
            if (remainder == 0)
                return extraDistanceToJSON();
            --remainder;
          }
        if (flagHasDistanceUnit)
          {
            if (remainder == 0)
                return extraDistanceUnitToJSON();
            --remainder;
          }
        return extraRobotMoveCommandComponentValue(remainder);
      }
    JSONValue *extraRobotCommandLookup(const char *field_name)
      {
        if (strncmp(field_name, "Di", 2) == 0)
          {
            switch ((unsigned char)(field_name[2]))
              {
                case 'r':
                    if (strcmp(&(field_name[3]), "ection") == 0)
                        return (flagHasDirection ? extraDirectionToJSON() : NULL);
                    break;
                case 's':
                    if (strncmp(&(field_name[3]), "tance", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[8]))
                          {
                            case 0:
                                return (flagHasDistance ? extraDistanceToJSON() : NULL);
                            case 'U':
                                if (strcmp(&(field_name[9]), "nit") == 0)
                                    return (flagHasDistanceUnit ? extraDistanceUnitToJSON() : NULL);
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
          }
        return extraRobotMoveCommandLookup(field_name);
      }
    const JSONValue *extraRobotCommandLookup(const char *field_name) const
      {
        if (strncmp(field_name, "Di", 2) == 0)
          {
            switch ((unsigned char)(field_name[2]))
              {
                case 'r':
                    if (strcmp(&(field_name[3]), "ection") == 0)
                        return (flagHasDirection ? extraDirectionToJSON() : NULL);
                    break;
                case 's':
                    if (strncmp(&(field_name[3]), "tance", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[8]))
                          {
                            case 0:
                                return (flagHasDistance ? extraDistanceToJSON() : NULL);
                            case 'U':
                                if (strcmp(&(field_name[9]), "nit") == 0)
                                    return (flagHasDistanceUnit ? extraDistanceUnitToJSON() : NULL);
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
          }
        return extraRobotMoveCommandLookup(field_name);
      }

    void setDirection(OInteger new_value)
      {
        flagHasDirection = true;
        if (new_value < -180)
            throw("The value for field Direction of RobotMoveCommandJSON is less than the lower bound (-180) for that field.");
        if (new_value > 180)
            throw("The value for field Direction of RobotMoveCommandJSON is greater than the upper bound (180) for that field.");
        storeDirection = new_value;
      }
    void unsetDirection(void)
      {
        flagHasDirection = false;
      }
    void setDistance(double new_value)
      {
        flagHasDistance = true;
        if (new_value < 0)
            throw("The value for field Distance of RobotMoveCommandJSON is less than the lower bound (0) for that field.");
        storeDistance = new_value;
        textStoreDistance = "";
      }
    void setDistanceText(std::string new_value)
      {
        flagHasDistance = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Distance of RobotMoveCommandJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field Distance of RobotMoveCommandJSON is less than the lower bound (0) for that field.");
        textStoreDistance = new_value;
      }
    void unsetDistance(void)
      {
        flagHasDistance = false;
      }
    void setDistanceUnit(TypeDistanceUnit new_value)
      {
        flagHasDistanceUnit = true;
        storeDistanceUnit = new_value;
      }
    void setDistanceUnit(const char *chars)
      {
        TypeDistanceUnitKnownValues known = stringToDistanceUnit(chars);
        TypeDistanceUnit new_value;
        if (known == DistanceUnit__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setDistanceUnit(new_value);
      }
    void setDistanceUnit(std::string the_string)
      {
        setDistanceUnit(the_string.c_str());
      }
    void setDistanceUnit(TypeDistanceUnitKnownValues new_value)
      {
        TypeDistanceUnit new_full_value;
        assert(new_value != DistanceUnit__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setDistanceUnit(new_full_value);
      }
    void unsetDistanceUnit(void)
      {
        flagHasDistanceUnit = false;
      }

    virtual void extraRobotMoveCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraRobotMoveCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraRobotMoveCommandLookup(key);
        if (old_field == NULL)
          {
            extraRobotMoveCommandAppendPair(key, new_component);
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
    void extraRobotCommandAppendPair(const char *key, JSONValue *new_component)
      {
        if (strncmp(key, "Di", 2) == 0)
          {
            switch ((unsigned char)(key[2]))
              {
                case 'r':
                    if (strcmp(&(key[3]), "ection") == 0)
                        {
                        fromJSONDirection(new_component, false);
                        return;
                        }
                    break;
                case 's':
                    if (strncmp(&(key[3]), "tance", 5) == 0)
                      {
                        switch ((unsigned char)(key[8]))
                          {
                            case 0:
                                {
                                fromJSONDistance(new_component, false);
                                return;
                                }
                            case 'U':
                                if (strcmp(&(key[9]), "nit") == 0)
                                    {
                                    fromJSONDistanceUnit(new_component, false);
                                    return;
                                    }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
          }
        extraRobotMoveCommandAppendPair(key, new_component);
      }
    void extraRobotCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strncmp(key, "Di", 2) == 0)
          {
            switch ((unsigned char)(key[2]))
              {
                case 'r':
                    if (strcmp(&(key[3]), "ection") == 0)
                        {
                        fromJSONDirection(new_component, false);
                        return;
                        }
                    break;
                case 's':
                    if (strncmp(&(key[3]), "tance", 5) == 0)
                      {
                        switch ((unsigned char)(key[8]))
                          {
                            case 0:
                                {
                                fromJSONDistance(new_component, false);
                                return;
                                }
                            case 'U':
                                if (strcmp(&(key[9]), "nit") == 0)
                                    {
                                    fromJSONDistanceUnit(new_component, false);
                                    return;
                                    }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
          }
        extraRobotMoveCommandSetField(key, new_component);
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
        RobotCommandJSON::write_fields_as_json(handler);
        assert(flagHasDirection);
        handler->start_pair("Direction");
        handler->number_value(storeDirection.get_o_integer());
        assert(flagHasDistance);
        handler->start_pair("Distance");
        if (textStoreDistance != "")
            handler->number_value(textStoreDistance.c_str());
        else if (((double)(long int)storeDistance) == storeDistance)
            handler->number_value((long int)storeDistance);
        else
            handler->number_value(storeDistance);
        assert(flagHasDistanceUnit);
        handler->start_pair("DistanceUnit");
        if (storeDistanceUnit.in_known_list)
          {
            switch (storeDistanceUnit.list_value)
              {
                case DistanceUnit_inch:
                    handler->string_value("inch");
                    break;
                case DistanceUnit_foot:
                    handler->string_value("foot");
                    break;
                case DistanceUnit_yard:
                    handler->string_value("yard");
                    break;
                case DistanceUnit_millimeter:
                    handler->string_value("millimeter");
                    break;
                case DistanceUnit_centimeter:
                    handler->string_value("centimeter");
                    break;
                case DistanceUnit_meter:
                    handler->string_value("meter");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storeDistanceUnit.string_value);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasDirection()))
          {
            return "When parsing the object for %what%, the \"Direction\" field was missing.";
          }
        if (!(hasDistance()))
          {
            return "When parsing the object for %what%, the \"Distance\" field was missing.";
          }
        if (!(hasDistanceUnit()))
          {
            return "When parsing the object for %what%, the \"DistanceUnit\" field was missing.";
          }
        return NULL;
      }

    static RobotMoveCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static RobotMoveCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        RobotMoveCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RobotMoveCommandJSON>, RobotMoveCommandJSON *, bool> generator("Type RobotMoveCommand", ignore_extras);
            parse_json_value(text, "Text for RobotMoveCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static RobotMoveCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        RobotMoveCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RobotMoveCommandJSON>, RobotMoveCommandJSON *, bool> generator("Type RobotMoveCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public RobotCommandJSON::Generator
      {
      private:
        static char lowerBoundDirection[];
        static char upperBoundDirection[];
        JSONHoldingGenerator<JSONIntegerBigRangeGenerator<lowerBoundDirection, upperBoundDirection>, OInteger, o_integer > fieldGeneratorDirection;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorDistance;
    class FieldGeneratorDistanceUnit : public JSONStringGenerator
          {
          protected:
            FieldGeneratorDistanceUnit(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorDistanceUnit(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeDistanceUnitKnownValues known = stringToDistanceUnit(result);
                TypeDistanceUnit new_value;
                if (known == DistanceUnit__none)
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
            virtual void handle_result(TypeDistanceUnit result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorDistanceUnit, TypeDistanceUnit, TypeDistanceUnit > fieldGeneratorDistanceUnit;
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
            if (!(strcmp(getRobotCommandJSONKey().c_str(), "MoveCommand") == 0))
                throw("The key field has a value other than `MoveCommand'.");
            RobotMoveCommandJSON *result = new RobotMoveCommandJSON();
            assert(result != NULL);
            RCHandle<RobotMoveCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraRobotMoveCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(RobotCommandJSON *new_result)
          {
            handle_result((RobotMoveCommandJSON *)new_result);
          }
        void finish(RobotMoveCommandJSON *result)
          {
            if (fieldGeneratorDirection.have_value)
              {
                result->setDirection(fieldGeneratorDirection.value);
                fieldGeneratorDirection.have_value = false;
              }
            else if (!(result->hasDirection()))
              {
                error("When parsing the object for %what%, the \"Direction\" field was missing.");
              }
            if (fieldGeneratorDistance.have_value)
              {
                result->setDistanceText(fieldGeneratorDistance.value);
                fieldGeneratorDistance.have_value = false;
              }
            else if (!(result->hasDistance()))
              {
                error("When parsing the object for %what%, the \"Distance\" field was missing.");
              }
            if (fieldGeneratorDistanceUnit.have_value)
              {
                result->setDistanceUnit(fieldGeneratorDistanceUnit.value);
                fieldGeneratorDistanceUnit.have_value = false;
              }
            else if (!(result->hasDistanceUnit()))
              {
                error("When parsing the object for %what%, the \"DistanceUnit\" field was missing.");
              }
            RobotCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(RobotMoveCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strncmp(field_name, "Di", 2) == 0)
              {
                switch ((unsigned char)(field_name[2]))
                  {
                    case 'r':
                        if (strcmp(&(field_name[3]), "ection") == 0)
                            return &fieldGeneratorDirection;
                        break;
                    case 's':
                        if (strncmp(&(field_name[3]), "tance", 5) == 0)
                          {
                            switch ((unsigned char)(field_name[8]))
                              {
                                case 0:
                                    return &fieldGeneratorDistance;
                                case 'U':
                                    if (strcmp(&(field_name[9]), "nit") == 0)
                                        return &fieldGeneratorDistanceUnit;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    default:
                        break;
                  }
              }
            return RobotCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : RobotCommandJSON::Generator(ignore_extras), fieldGeneratorDirection("field \"Direction\" of the RobotMoveCommand class"), fieldGeneratorDistance("field \"Distance\" of the RobotMoveCommand class"), fieldGeneratorDistanceUnit("field \"DistanceUnit\" of the RobotMoveCommand class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the RobotMoveCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorDirection.reset();
            fieldGeneratorDistance.reset();
            fieldGeneratorDistanceUnit.reset();
            RobotCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* ROBOTMOVECOMMANDJSON_H */
