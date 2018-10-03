/* file "SportsOlympicsInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSOLYMPICSINFORMATIONNUGGETJSON_H
#define SPORTSOLYMPICSINFORMATIONNUGGETJSON_H

#pragma interface

#include "InformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "AttributionJSON.h"
#include "DateAndOrTimeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsOlympicsInformationNuggetJSON : public InformationNuggetJSON
  {
  private:
    bool flagHasAttribution;
    AttributionJSON * storeAttribution;
    bool flagHasNow;
    DateAndOrTimeJSON * storeNow;

    SportsOlympicsInformationNuggetJSON(const SportsOlympicsInformationNuggetJSON &);
    SportsOlympicsInformationNuggetJSON & operator=(const SportsOlympicsInformationNuggetJSON &other);

    JSONValue * extraAttributionToJSON(void) const;
    JSONValue * extraNowToJSON(void) const;

    void  fromJSONAttribution(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNow(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsOlympicsInformationNuggetJSON(void);
    virtual ~SportsOlympicsInformationNuggetJSON(void);
    const char * getNuggetKind(void) const;
    virtual const char *getSportsOlympicsInformationNuggetKind(void) const = 0;
    bool  hasAttribution(void) const;
    AttributionJSON *  getAttribution(void);
    const AttributionJSON *  getAttribution(void) const;
    bool  hasNow(void) const;
    DateAndOrTimeJSON *  getNow(void);
    const DateAndOrTimeJSON *  getNow(void) const;

    virtual size_t extraSportsOlympicsInformationNuggetComponentCount(void) const = 0;
    virtual const char *extraSportsOlympicsInformationNuggetComponentKey(size_t component_num) const = 0;
    virtual JSONValue *extraSportsOlympicsInformationNuggetComponentValue(size_t component_num) = 0;
    virtual const JSONValue *extraSportsOlympicsInformationNuggetComponentValue(size_t component_num) const = 0;
    virtual JSONValue *extraSportsOlympicsInformationNuggetLookup(const char *field_name) = 0;
    virtual const JSONValue *extraSportsOlympicsInformationNuggetLookup(const char *field_name) const = 0;
    size_t extraInformationNuggetComponentCount(void) const
      {
        size_t result = 1;
        if (flagHasAttribution)
            ++result;
        if (flagHasNow)
            ++result;
        result += extraSportsOlympicsInformationNuggetComponentCount();
        return result;
      }
    const char *extraInformationNuggetComponentKey(size_t component_num) const
      {
        if (component_num == 0)
            return "SportsOlympicsInformationNuggetKind";
        size_t remainder = (component_num - 1);
        if (flagHasAttribution)
          {
            if (remainder == 0)
                return "Attribution";
            --remainder;
          }
        if (flagHasNow)
          {
            if (remainder == 0)
                return "Now";
            --remainder;
          }
        return extraSportsOlympicsInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraInformationNuggetComponentValue(size_t component_num)
      {
        if (component_num == 0)
            return new JSONStringValue(getSportsOlympicsInformationNuggetKind());
        size_t remainder = (component_num - 1);
        if (flagHasAttribution)
          {
            if (remainder == 0)
                return extraAttributionToJSON();
            --remainder;
          }
        if (flagHasNow)
          {
            if (remainder == 0)
                return extraNowToJSON();
            --remainder;
          }
        return extraSportsOlympicsInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraInformationNuggetComponentValue(size_t component_num) const
      {
        if (component_num == 0)
            return new JSONStringValue(getSportsOlympicsInformationNuggetKind());
        size_t remainder = (component_num - 1);
        if (flagHasAttribution)
          {
            if (remainder == 0)
                return extraAttributionToJSON();
            --remainder;
          }
        if (flagHasNow)
          {
            if (remainder == 0)
                return extraNowToJSON();
            --remainder;
          }
        return extraSportsOlympicsInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strcmp(&(field_name[1]), "ttribution") == 0)
                    return (flagHasAttribution ? extraAttributionToJSON() : NULL);
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "ow") == 0)
                    return (flagHasNow ? extraNowToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "portsOlympicsInformationNuggetKind") == 0)
                    return new JSONStringValue(getSportsOlympicsInformationNuggetKind());
                break;
            default:
                break;
          }
        return extraSportsOlympicsInformationNuggetLookup(field_name);
      }
    const JSONValue *extraInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strcmp(&(field_name[1]), "ttribution") == 0)
                    return (flagHasAttribution ? extraAttributionToJSON() : NULL);
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "ow") == 0)
                    return (flagHasNow ? extraNowToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "portsOlympicsInformationNuggetKind") == 0)
                    return new JSONStringValue(getSportsOlympicsInformationNuggetKind());
                break;
            default:
                break;
          }
        return extraSportsOlympicsInformationNuggetLookup(field_name);
      }

    void setAttribution(AttributionJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAttribution)
          {
            storeAttribution->remove_reference();
          }
        flagHasAttribution = true;
        storeAttribution = new_value;
      }
    void unsetAttribution(void)
      {
        if (flagHasAttribution)
          {
            storeAttribution->remove_reference();
          }
        flagHasAttribution = false;
      }
    void setNow(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasNow)
          {
            storeNow->remove_reference();
          }
        flagHasNow = true;
        storeNow = new_value;
      }
    void unsetNow(void)
      {
        if (flagHasNow)
          {
            storeNow->remove_reference();
          }
        flagHasNow = false;
      }

    virtual void extraSportsOlympicsInformationNuggetAppendPair(const char *key, JSONValue *new_component) = 0;
    virtual void extraSportsOlympicsInformationNuggetSetField(const char *key, JSONValue *new_component) = 0;
    void extraInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                if (strcmp(&(key[1]), "ttribution") == 0)
                    {
                    fromJSONAttribution(new_component, false);
                    return;
                    }
                break;
            case 'N':
                if (strcmp(&(key[1]), "ow") == 0)
                    {
                    fromJSONNow(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strcmp(&(key[1]), "portsOlympicsInformationNuggetKind") == 0)
                    return;
                break;
            default:
                break;
          }
        extraSportsOlympicsInformationNuggetAppendPair(key, new_component);
      }
    void extraInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                if (strcmp(&(key[1]), "ttribution") == 0)
                    {
                    fromJSONAttribution(new_component, false);
                    return;
                    }
                break;
            case 'N':
                if (strcmp(&(key[1]), "ow") == 0)
                    {
                    fromJSONNow(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strcmp(&(key[1]), "portsOlympicsInformationNuggetKind") == 0)
                    return;
                break;
            default:
                break;
          }
        extraSportsOlympicsInformationNuggetSetField(key, new_component);
      }

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        InformationNuggetJSON::write_fields_as_json(handler);
        handler->pair("SportsOlympicsInformationNuggetKind", getSportsOlympicsInformationNuggetKind());
        if (flagHasAttribution)
          {
            handler->start_pair("Attribution");
            storeAttribution->write_as_json(handler);
          }
        if (flagHasNow)
          {
            handler->start_pair("Now");
            storeNow->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SportsOlympicsInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsOlympicsInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsOlympicsInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsInformationNuggetJSON>, SportsOlympicsInformationNuggetJSON *, bool> generator("Type SportsOlympicsInformationNugget", ignore_extras);
            parse_json_value(text, "Text for SportsOlympicsInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsOlympicsInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsOlympicsInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsInformationNuggetJSON>, SportsOlympicsInformationNuggetJSON *, bool> generator("Type SportsOlympicsInformationNugget", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public InformationNuggetJSON::Generator
      {
      private:
        JSONHoldingGenerator<AttributionJSON::Generator, RCHandle<AttributionJSON>, AttributionJSON *, bool > fieldGeneratorAttribution;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorNow;
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char *> keyGenerator;


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
            if (!(keyGenerator.have_value))
                throw("The `SportsOlympicsInformationNuggetKind' field is missing.");
            if (!(strcmp(getInformationNuggetJSONKey().c_str(), "SportsOlympicsInformationNugget") == 0))
                throw("The key field has a value other than `SportsOlympicsInformationNugget'.");
            SportsOlympicsInformationNuggetJSON *result = createForKey(keyGenerator.value.c_str(), unknownFieldGenerator.index);
            assert(result != NULL);
            RCHandle<SportsOlympicsInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsOlympicsInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            const char *missing_field_error = result->missing_field_error();
            if (missing_field_error != NULL)
                error(missing_field_error);
            handle_result(result);
          }
        std::string getSportsOlympicsInformationNuggetJSONKey(void)
          {
            if (!(keyGenerator.have_value))
                throw("The `SportsOlympicsInformationNuggetKind' field is missing.");
            return keyGenerator.value;
          }
        void handle_result(InformationNuggetJSON *new_result)
          {
            handle_result((SportsOlympicsInformationNuggetJSON *)new_result);
          }
        void finish(SportsOlympicsInformationNuggetJSON *result)
          {
            if (fieldGeneratorAttribution.have_value)
              {
                result->setAttribution(fieldGeneratorAttribution.value.referenced());
                fieldGeneratorAttribution.have_value = false;
              }
            if (fieldGeneratorNow.have_value)
              {
                result->setNow(fieldGeneratorNow.value.referenced());
                fieldGeneratorNow.have_value = false;
              }
            InformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(SportsOlympicsInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "ttribution") == 0)
                        return &fieldGeneratorAttribution;
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "ow") == 0)
                        return &fieldGeneratorNow;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "portsOlympicsInformationNuggetKind") == 0)
                        {
                        keyGenerator.reset();
                        return &keyGenerator;
                        }
                    break;
                default:
                    break;
              }
            return InformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : InformationNuggetJSON::Generator(ignore_extras), fieldGeneratorAttribution("field \"Attribution\" of the SportsOlympicsInformationNugget class", ignore_extras), fieldGeneratorNow("field \"Now\" of the SportsOlympicsInformationNugget class", ignore_extras), unknownFieldGenerator(ignore_extras), keyGenerator("key field \"SportsOlympicsInformationNuggetKind\" of the SportsOlympicsInformationNugget class")
          {
            set_what("the SportsOlympicsInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorAttribution.reset();
            fieldGeneratorNow.reset();
            InformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
    static SportsOlympicsInformationNuggetJSON *createForKey(const char *key, string_index *other_field_index);
  };

#endif /* SPORTSOLYMPICSINFORMATIONNUGGETJSON_H */
