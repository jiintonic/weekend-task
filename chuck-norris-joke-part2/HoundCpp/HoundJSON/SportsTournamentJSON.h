/* file "SportsTournamentJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSTOURNAMENTJSON_H
#define SPORTSTOURNAMENTJSON_H

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


class SportsTournamentJSON : public ReferenceCounted
  {
  public:
    enum TypeTournamentNameKnownValues
      {
        TournamentName_NCAAMBTournament,
        TournamentName_NCAAMBCIT,
        TournamentName_NCAAMBCBI,
        TournamentName_NCAAMBNIT,
        TournamentName_SoccerInternationalMensWorldCup,
        TournamentName__none
      };
    struct TypeTournamentName
      {
        bool in_known_list;
        std::string string_value;
        TypeTournamentNameKnownValues list_value;

        TypeTournamentName(void);
        TypeTournamentName(const TypeTournamentName &other);
        TypeTournamentName(TypeTournamentNameKnownValues other);
        bool  operator==(const TypeTournamentName &other) const;
        bool  operator!=(const TypeTournamentName &other) const;
        bool  operator<(const TypeTournamentName &other) const;
        bool  operator>(const TypeTournamentName &other) const;
        bool  operator>=(const TypeTournamentName &other) const;
        bool  operator<=(const TypeTournamentName &other) const;

      };

    static TypeTournamentNameKnownValues  stringToTournamentName(const char *chars);
    static const char * stringFromTournamentName(TypeTournamentNameKnownValues the_enum);

  private:
    bool flagHasTournamentName;
    TypeTournamentName storeTournamentName;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsTournamentJSON(const SportsTournamentJSON &);
    SportsTournamentJSON & operator=(const SportsTournamentJSON &other);

    void  fromJSONTournamentName(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsTournamentJSON(void);
    virtual ~SportsTournamentJSON(void);
    bool  hasTournamentName(void) const;
    TypeTournamentName  getTournamentName(void);
    const TypeTournamentName  getTournamentName(void) const;
    const char * getTournamentNameAsChars(void) const;
    std::string  getTournamentNameAsString(void) const;

    virtual size_t extraSportsTournamentComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsTournamentComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsTournamentComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsTournamentComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsTournamentLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsTournamentLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setTournamentName(TypeTournamentName new_value)
      {
        flagHasTournamentName = true;
        storeTournamentName = new_value;
      }
    void setTournamentName(const char *chars)
      {
        TypeTournamentNameKnownValues known = stringToTournamentName(chars);
        TypeTournamentName new_value;
        if (known == TournamentName__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setTournamentName(new_value);
      }
    void setTournamentName(std::string the_string)
      {
        setTournamentName(the_string.c_str());
      }
    void setTournamentName(TypeTournamentNameKnownValues new_value)
      {
        TypeTournamentName new_full_value;
        assert(new_value != TournamentName__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setTournamentName(new_full_value);
      }
    void unsetTournamentName(void)
      {
        flagHasTournamentName = false;
      }

    virtual void extraSportsTournamentAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsTournamentSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsTournamentLookup(key);
        if (old_field == NULL)
          {
            extraSportsTournamentAppendPair(key, new_component);
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
        if (flagHasTournamentName)
          {
            handler->start_pair("TournamentName");
            if (storeTournamentName.in_known_list)
              {
                switch (storeTournamentName.list_value)
                  {
                    case TournamentName_NCAAMBTournament:
                        handler->string_value("NCAAMBTournament");
                        break;
                    case TournamentName_NCAAMBCIT:
                        handler->string_value("NCAAMBCIT");
                        break;
                    case TournamentName_NCAAMBCBI:
                        handler->string_value("NCAAMBCBI");
                        break;
                    case TournamentName_NCAAMBNIT:
                        handler->string_value("NCAAMBNIT");
                        break;
                    case TournamentName_SoccerInternationalMensWorldCup:
                        handler->string_value("SoccerInternationalMensWorldCup");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeTournamentName.string_value);
              }
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SportsTournamentJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsTournamentJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsTournamentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsTournamentJSON>, SportsTournamentJSON *, bool> generator("Type SportsTournament", ignore_extras);
            parse_json_value(text, "Text for SportsTournamentJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsTournamentJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsTournamentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsTournamentJSON>, SportsTournamentJSON *, bool> generator("Type SportsTournament", ignore_extras);
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
    class FieldGeneratorTournamentName : public JSONStringGenerator
          {
          protected:
            FieldGeneratorTournamentName(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorTournamentName(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeTournamentNameKnownValues known = stringToTournamentName(result);
                TypeTournamentName new_value;
                if (known == TournamentName__none)
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
            virtual void handle_result(TypeTournamentName result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorTournamentName, TypeTournamentName, TypeTournamentName > fieldGeneratorTournamentName;
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
            SportsTournamentJSON *result = new SportsTournamentJSON();
            assert(result != NULL);
            RCHandle<SportsTournamentJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsTournamentAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsTournamentJSON *result)
          {
            if (fieldGeneratorTournamentName.have_value)
              {
                result->setTournamentName(fieldGeneratorTournamentName.value);
                fieldGeneratorTournamentName.have_value = false;
              }
          }
        virtual void handle_result(SportsTournamentJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "TournamentName") == 0)
                return &fieldGeneratorTournamentName;
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorTournamentName("field \"TournamentName\" of the SportsTournament class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsTournament class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorTournamentName.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSTOURNAMENTJSON_H */
