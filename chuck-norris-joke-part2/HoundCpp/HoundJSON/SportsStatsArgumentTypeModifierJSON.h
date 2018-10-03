/* file "SportsStatsArgumentTypeModifierJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSSTATSARGUMENTTYPEMODIFIERJSON_H
#define SPORTSSTATSARGUMENTTYPEMODIFIERJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsStatsArgumentTypeModifierJSON : public ReferenceCounted
  {
  public:
    enum TypeArgumentType
      {
        ArgumentType_SportsStatsArgumentTypeModifier
      };

    static TypeArgumentType  stringToArgumentType(const char *chars);
    static const char * stringFromArgumentType(TypeArgumentType the_enum);
    enum TypeModifierNameKnownValues
      {
        ModifierName_Unknown,
        ModifierName_PerGame,
        ModifierName_NHLEvenStrength,
        ModifierName_NHLPowerPlay,
        ModifierName_NHLShortHanded,
        ModifierName_NHLPenalty,
        ModifierName_NHLEmptyNet,
        ModifierName_NHLShootout,
        ModifierName__none
      };
    struct TypeModifierName
      {
        bool in_known_list;
        std::string string_value;
        TypeModifierNameKnownValues list_value;

        TypeModifierName(void);
        TypeModifierName(const TypeModifierName &other);
        TypeModifierName(TypeModifierNameKnownValues other);
        bool  operator==(const TypeModifierName &other) const;
        bool  operator!=(const TypeModifierName &other) const;
        bool  operator<(const TypeModifierName &other) const;
        bool  operator>(const TypeModifierName &other) const;
        bool  operator>=(const TypeModifierName &other) const;
        bool  operator<=(const TypeModifierName &other) const;

      };

    static TypeModifierNameKnownValues  stringToModifierName(const char *chars);
    static const char * stringFromModifierName(TypeModifierNameKnownValues the_enum);

  private:
    bool flagHasArgumentType;
    bool flagHasModifierName;
    TypeModifierName storeModifierName;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsStatsArgumentTypeModifierJSON(const SportsStatsArgumentTypeModifierJSON &);
    SportsStatsArgumentTypeModifierJSON & operator=(const SportsStatsArgumentTypeModifierJSON &other);

    void  fromJSONArgumentType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONModifierName(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsStatsArgumentTypeModifierJSON(void);
    virtual ~SportsStatsArgumentTypeModifierJSON(void);
    bool  hasArgumentType(void) const;
    TypeArgumentType  getArgumentType(void);
    const TypeArgumentType  getArgumentType(void) const;
    const char * getArgumentTypeAsChars(void) const;
    std::string  getArgumentTypeAsString(void) const;
    bool  hasModifierName(void) const;
    TypeModifierName  getModifierName(void);
    const TypeModifierName  getModifierName(void) const;
    const char * getModifierNameAsChars(void) const;
    std::string  getModifierNameAsString(void) const;

    virtual size_t extraSportsStatsArgumentTypeModifierComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsStatsArgumentTypeModifierComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsStatsArgumentTypeModifierComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsStatsArgumentTypeModifierComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsStatsArgumentTypeModifierLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsStatsArgumentTypeModifierLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setArgumentType(void)
      {
        flagHasArgumentType = true;
      }
    void setArgumentType(TypeArgumentType new_value)
      {
        setArgumentType();
      }
    void setArgumentType(const char *chars)
      {
        setArgumentType(stringToArgumentType(chars));
      }
    void setArgumentType(std::string the_string)
      {
        setArgumentType(stringToArgumentType(the_string.c_str()));
      }
    void unsetArgumentType(void)
      {
        flagHasArgumentType = false;
      }
    void setModifierName(TypeModifierName new_value)
      {
        flagHasModifierName = true;
        storeModifierName = new_value;
      }
    void setModifierName(const char *chars)
      {
        TypeModifierNameKnownValues known = stringToModifierName(chars);
        TypeModifierName new_value;
        if (known == ModifierName__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setModifierName(new_value);
      }
    void setModifierName(std::string the_string)
      {
        setModifierName(the_string.c_str());
      }
    void setModifierName(TypeModifierNameKnownValues new_value)
      {
        TypeModifierName new_full_value;
        assert(new_value != ModifierName__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setModifierName(new_full_value);
      }
    void unsetModifierName(void)
      {
        flagHasModifierName = false;
      }

    virtual void extraSportsStatsArgumentTypeModifierAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsStatsArgumentTypeModifierSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsStatsArgumentTypeModifierLookup(key);
        if (old_field == NULL)
          {
            extraSportsStatsArgumentTypeModifierAppendPair(key, new_component);
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
        assert(flagHasArgumentType);
        handler->start_pair("ArgumentType");
        handler->string_value("SportsStatsArgumentTypeModifier");
        assert(flagHasModifierName);
        handler->start_pair("ModifierName");
        if (storeModifierName.in_known_list)
          {
            switch (storeModifierName.list_value)
              {
                case ModifierName_Unknown:
                    handler->string_value("Unknown");
                    break;
                case ModifierName_PerGame:
                    handler->string_value("PerGame");
                    break;
                case ModifierName_NHLEvenStrength:
                    handler->string_value("NHLEvenStrength");
                    break;
                case ModifierName_NHLPowerPlay:
                    handler->string_value("NHLPowerPlay");
                    break;
                case ModifierName_NHLShortHanded:
                    handler->string_value("NHLShortHanded");
                    break;
                case ModifierName_NHLPenalty:
                    handler->string_value("NHLPenalty");
                    break;
                case ModifierName_NHLEmptyNet:
                    handler->string_value("NHLEmptyNet");
                    break;
                case ModifierName_NHLShootout:
                    handler->string_value("NHLShootout");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storeModifierName.string_value);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasArgumentType()))
          {
            return "When parsing the object for %what%, the \"ArgumentType\" field was missing.";
          }
        if (!(hasModifierName()))
          {
            return "When parsing the object for %what%, the \"ModifierName\" field was missing.";
          }
        return NULL;
      }

    static SportsStatsArgumentTypeModifierJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsStatsArgumentTypeModifierJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsStatsArgumentTypeModifierJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsStatsArgumentTypeModifierJSON>, SportsStatsArgumentTypeModifierJSON *, bool> generator("Type SportsStatsArgumentTypeModifier", ignore_extras);
            parse_json_value(text, "Text for SportsStatsArgumentTypeModifierJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsStatsArgumentTypeModifierJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsStatsArgumentTypeModifierJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsStatsArgumentTypeModifierJSON>, SportsStatsArgumentTypeModifierJSON *, bool> generator("Type SportsStatsArgumentTypeModifier", ignore_extras);
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
    class FieldGeneratorArgumentType : public JSONStringGenerator
          {
          protected:
            FieldGeneratorArgumentType(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorArgumentType(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToArgumentType(result));
              }
            virtual void handle_result(TypeArgumentType result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorArgumentType, TypeArgumentType, TypeArgumentType > fieldGeneratorArgumentType;
    class FieldGeneratorModifierName : public JSONStringGenerator
          {
          protected:
            FieldGeneratorModifierName(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorModifierName(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeModifierNameKnownValues known = stringToModifierName(result);
                TypeModifierName new_value;
                if (known == ModifierName__none)
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
            virtual void handle_result(TypeModifierName result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorModifierName, TypeModifierName, TypeModifierName > fieldGeneratorModifierName;
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
            SportsStatsArgumentTypeModifierJSON *result = new SportsStatsArgumentTypeModifierJSON();
            assert(result != NULL);
            RCHandle<SportsStatsArgumentTypeModifierJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsStatsArgumentTypeModifierAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsStatsArgumentTypeModifierJSON *result)
          {
            if (fieldGeneratorArgumentType.have_value)
              {
                result->setArgumentType();
                fieldGeneratorArgumentType.have_value = false;
              }
            else if (!(result->hasArgumentType()))
              {
                error("When parsing the object for %what%, the \"ArgumentType\" field was missing.");
              }
            if (fieldGeneratorModifierName.have_value)
              {
                result->setModifierName(fieldGeneratorModifierName.value);
                fieldGeneratorModifierName.have_value = false;
              }
            else if (!(result->hasModifierName()))
              {
                error("When parsing the object for %what%, the \"ModifierName\" field was missing.");
              }
          }
        virtual void handle_result(SportsStatsArgumentTypeModifierJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "rgumentType") == 0)
                        return &fieldGeneratorArgumentType;
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "odifierName") == 0)
                        return &fieldGeneratorModifierName;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorArgumentType("field \"ArgumentType\" of the SportsStatsArgumentTypeModifier class"), fieldGeneratorModifierName("field \"ModifierName\" of the SportsStatsArgumentTypeModifier class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsStatsArgumentTypeModifier class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorArgumentType.reset();
            fieldGeneratorModifierName.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSSTATSARGUMENTTYPEMODIFIERJSON_H */
