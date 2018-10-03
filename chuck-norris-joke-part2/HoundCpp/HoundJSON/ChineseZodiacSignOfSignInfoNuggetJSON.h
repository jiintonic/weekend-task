/* file "ChineseZodiacSignOfSignInfoNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CHINESEZODIACSIGNOFSIGNINFONUGGETJSON_H
#define CHINESEZODIACSIGNOFSIGNINFONUGGETJSON_H

#pragma interface

#include "ChineseZodiacInfoNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerUnboundRangeGenerator.h"
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


class ChineseZodiacSignOfSignInfoNuggetJSON : public ChineseZodiacInfoNuggetJSON
  {
  private:
    bool flagHasResultSign;
    std::string storeResultSign;
    bool flagHasQuerySign;
    std::string storeQuerySign;
    bool flagHasOrdinal;
    OInteger storeOrdinal;
    bool flagHasCycled;
    bool storeCycled;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    ChineseZodiacSignOfSignInfoNuggetJSON(const ChineseZodiacSignOfSignInfoNuggetJSON &);
    ChineseZodiacSignOfSignInfoNuggetJSON & operator=(const ChineseZodiacSignOfSignInfoNuggetJSON &other);

    JSONValue * extraResultSignToJSON(void) const;
    JSONValue * extraQuerySignToJSON(void) const;
    JSONValue * extraOrdinalToJSON(void) const;
    JSONValue * extraCycledToJSON(void) const;

    void  fromJSONResultSign(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONQuerySign(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOrdinal(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCycled(JSONValue *json_value, bool ignore_extras = false);


  public:
    ChineseZodiacSignOfSignInfoNuggetJSON(void);
    virtual ~ChineseZodiacSignOfSignInfoNuggetJSON(void);
    const char * getChineseZodiacInfoNuggetKind(void) const;
    bool  hasResultSign(void) const;
    std::string  getResultSign(void);
    const std::string  getResultSign(void) const;
    bool  hasQuerySign(void) const;
    std::string  getQuerySign(void);
    const std::string  getQuerySign(void) const;
    bool  hasOrdinal(void) const;
    OInteger  getOrdinal(void);
    const OInteger  getOrdinal(void) const;
    bool  hasCycled(void) const;
    bool  getCycled(void);
    const bool  getCycled(void) const;

    virtual size_t extraChineseZodiacSignOfSignInfoNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraChineseZodiacSignOfSignInfoNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraChineseZodiacSignOfSignInfoNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraChineseZodiacSignOfSignInfoNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraChineseZodiacSignOfSignInfoNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraChineseZodiacSignOfSignInfoNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraChineseZodiacInfoNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasResultSign)
            ++result;
        if (flagHasQuerySign)
            ++result;
        if (flagHasOrdinal)
            ++result;
        if (flagHasCycled)
            ++result;
        result += extraChineseZodiacSignOfSignInfoNuggetComponentCount();
        return result;
      }
    const char *extraChineseZodiacInfoNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasResultSign)
          {
            if (remainder == 0)
                return "ResultSign";
            --remainder;
          }
        if (flagHasQuerySign)
          {
            if (remainder == 0)
                return "QuerySign";
            --remainder;
          }
        if (flagHasOrdinal)
          {
            if (remainder == 0)
                return "Ordinal";
            --remainder;
          }
        if (flagHasCycled)
          {
            if (remainder == 0)
                return "Cycled";
            --remainder;
          }
        return extraChineseZodiacSignOfSignInfoNuggetComponentKey(remainder);
      }
    JSONValue *extraChineseZodiacInfoNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasResultSign)
          {
            if (remainder == 0)
                return extraResultSignToJSON();
            --remainder;
          }
        if (flagHasQuerySign)
          {
            if (remainder == 0)
                return extraQuerySignToJSON();
            --remainder;
          }
        if (flagHasOrdinal)
          {
            if (remainder == 0)
                return extraOrdinalToJSON();
            --remainder;
          }
        if (flagHasCycled)
          {
            if (remainder == 0)
                return extraCycledToJSON();
            --remainder;
          }
        return extraChineseZodiacSignOfSignInfoNuggetComponentValue(remainder);
      }
    const JSONValue *extraChineseZodiacInfoNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasResultSign)
          {
            if (remainder == 0)
                return extraResultSignToJSON();
            --remainder;
          }
        if (flagHasQuerySign)
          {
            if (remainder == 0)
                return extraQuerySignToJSON();
            --remainder;
          }
        if (flagHasOrdinal)
          {
            if (remainder == 0)
                return extraOrdinalToJSON();
            --remainder;
          }
        if (flagHasCycled)
          {
            if (remainder == 0)
                return extraCycledToJSON();
            --remainder;
          }
        return extraChineseZodiacSignOfSignInfoNuggetComponentValue(remainder);
      }
    JSONValue *extraChineseZodiacInfoNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "ycled") == 0)
                    return (flagHasCycled ? extraCycledToJSON() : NULL);
                break;
            case 'O':
                if (strcmp(&(field_name[1]), "rdinal") == 0)
                    return (flagHasOrdinal ? extraOrdinalToJSON() : NULL);
                break;
            case 'Q':
                if (strcmp(&(field_name[1]), "uerySign") == 0)
                    return (flagHasQuerySign ? extraQuerySignToJSON() : NULL);
                break;
            case 'R':
                if (strcmp(&(field_name[1]), "esultSign") == 0)
                    return (flagHasResultSign ? extraResultSignToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraChineseZodiacSignOfSignInfoNuggetLookup(field_name);
      }
    const JSONValue *extraChineseZodiacInfoNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "ycled") == 0)
                    return (flagHasCycled ? extraCycledToJSON() : NULL);
                break;
            case 'O':
                if (strcmp(&(field_name[1]), "rdinal") == 0)
                    return (flagHasOrdinal ? extraOrdinalToJSON() : NULL);
                break;
            case 'Q':
                if (strcmp(&(field_name[1]), "uerySign") == 0)
                    return (flagHasQuerySign ? extraQuerySignToJSON() : NULL);
                break;
            case 'R':
                if (strcmp(&(field_name[1]), "esultSign") == 0)
                    return (flagHasResultSign ? extraResultSignToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraChineseZodiacSignOfSignInfoNuggetLookup(field_name);
      }

    void setResultSign(std::string new_value)
      {
        flagHasResultSign = true;
        storeResultSign = new_value;
      }
    void unsetResultSign(void)
      {
        flagHasResultSign = false;
      }
    void setQuerySign(std::string new_value)
      {
        flagHasQuerySign = true;
        storeQuerySign = new_value;
      }
    void unsetQuerySign(void)
      {
        flagHasQuerySign = false;
      }
    void setOrdinal(OInteger new_value)
      {
        flagHasOrdinal = true;
        storeOrdinal = new_value;
      }
    void unsetOrdinal(void)
      {
        flagHasOrdinal = false;
      }
    void setCycled(bool new_value)
      {
        flagHasCycled = true;
        storeCycled = new_value;
      }
    void unsetCycled(void)
      {
        flagHasCycled = false;
      }

    virtual void extraChineseZodiacSignOfSignInfoNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraChineseZodiacSignOfSignInfoNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraChineseZodiacSignOfSignInfoNuggetLookup(key);
        if (old_field == NULL)
          {
            extraChineseZodiacSignOfSignInfoNuggetAppendPair(key, new_component);
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
    void extraChineseZodiacInfoNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "ycled") == 0)
                    {
                    fromJSONCycled(new_component, false);
                    return;
                    }
                break;
            case 'O':
                if (strcmp(&(key[1]), "rdinal") == 0)
                    {
                    fromJSONOrdinal(new_component, false);
                    return;
                    }
                break;
            case 'Q':
                if (strcmp(&(key[1]), "uerySign") == 0)
                    {
                    fromJSONQuerySign(new_component, false);
                    return;
                    }
                break;
            case 'R':
                if (strcmp(&(key[1]), "esultSign") == 0)
                    {
                    fromJSONResultSign(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraChineseZodiacSignOfSignInfoNuggetAppendPair(key, new_component);
      }
    void extraChineseZodiacInfoNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "ycled") == 0)
                    {
                    fromJSONCycled(new_component, false);
                    return;
                    }
                break;
            case 'O':
                if (strcmp(&(key[1]), "rdinal") == 0)
                    {
                    fromJSONOrdinal(new_component, false);
                    return;
                    }
                break;
            case 'Q':
                if (strcmp(&(key[1]), "uerySign") == 0)
                    {
                    fromJSONQuerySign(new_component, false);
                    return;
                    }
                break;
            case 'R':
                if (strcmp(&(key[1]), "esultSign") == 0)
                    {
                    fromJSONResultSign(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraChineseZodiacSignOfSignInfoNuggetSetField(key, new_component);
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
        ChineseZodiacInfoNuggetJSON::write_fields_as_json(handler);
        assert(flagHasResultSign);
        handler->start_pair("ResultSign");
        handler->string_value(storeResultSign);
        assert(flagHasQuerySign);
        handler->start_pair("QuerySign");
        handler->string_value(storeQuerySign);
        assert(flagHasOrdinal);
        handler->start_pair("Ordinal");
        handler->number_value(storeOrdinal.get_o_integer());
        assert(flagHasCycled);
        handler->start_pair("Cycled");
        handler->boolean_value(storeCycled);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasResultSign()))
          {
            return "When parsing the object for %what%, the \"ResultSign\" field was missing.";
          }
        if (!(hasQuerySign()))
          {
            return "When parsing the object for %what%, the \"QuerySign\" field was missing.";
          }
        if (!(hasOrdinal()))
          {
            return "When parsing the object for %what%, the \"Ordinal\" field was missing.";
          }
        if (!(hasCycled()))
          {
            return "When parsing the object for %what%, the \"Cycled\" field was missing.";
          }
        return NULL;
      }

    static ChineseZodiacSignOfSignInfoNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ChineseZodiacSignOfSignInfoNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ChineseZodiacSignOfSignInfoNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ChineseZodiacSignOfSignInfoNuggetJSON>, ChineseZodiacSignOfSignInfoNuggetJSON *, bool> generator("Type ChineseZodiacSignOfSignInfoNugget", ignore_extras);
            parse_json_value(text, "Text for ChineseZodiacSignOfSignInfoNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ChineseZodiacSignOfSignInfoNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ChineseZodiacSignOfSignInfoNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ChineseZodiacSignOfSignInfoNuggetJSON>, ChineseZodiacSignOfSignInfoNuggetJSON *, bool> generator("Type ChineseZodiacSignOfSignInfoNugget", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public ChineseZodiacInfoNuggetJSON::Generator
      {
      private:
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorResultSign;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorQuerySign;
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorOrdinal;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorCycled;
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
            if (!(strcmp(getChineseZodiacInfoNuggetJSONKey().c_str(), "ChineseZodiacSignOfSignInfoNugget") == 0))
                throw("The key field has a value other than `ChineseZodiacSignOfSignInfoNugget'.");
            ChineseZodiacSignOfSignInfoNuggetJSON *result = new ChineseZodiacSignOfSignInfoNuggetJSON();
            assert(result != NULL);
            RCHandle<ChineseZodiacSignOfSignInfoNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraChineseZodiacSignOfSignInfoNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(ChineseZodiacInfoNuggetJSON *new_result)
          {
            handle_result((ChineseZodiacSignOfSignInfoNuggetJSON *)new_result);
          }
        void finish(ChineseZodiacSignOfSignInfoNuggetJSON *result)
          {
            if (fieldGeneratorResultSign.have_value)
              {
                result->setResultSign(fieldGeneratorResultSign.value);
                fieldGeneratorResultSign.have_value = false;
              }
            else if (!(result->hasResultSign()))
              {
                error("When parsing the object for %what%, the \"ResultSign\" field was missing.");
              }
            if (fieldGeneratorQuerySign.have_value)
              {
                result->setQuerySign(fieldGeneratorQuerySign.value);
                fieldGeneratorQuerySign.have_value = false;
              }
            else if (!(result->hasQuerySign()))
              {
                error("When parsing the object for %what%, the \"QuerySign\" field was missing.");
              }
            if (fieldGeneratorOrdinal.have_value)
              {
                result->setOrdinal(fieldGeneratorOrdinal.value);
                fieldGeneratorOrdinal.have_value = false;
              }
            else if (!(result->hasOrdinal()))
              {
                error("When parsing the object for %what%, the \"Ordinal\" field was missing.");
              }
            if (fieldGeneratorCycled.have_value)
              {
                result->setCycled(fieldGeneratorCycled.value);
                fieldGeneratorCycled.have_value = false;
              }
            else if (!(result->hasCycled()))
              {
                error("When parsing the object for %what%, the \"Cycled\" field was missing.");
              }
            ChineseZodiacInfoNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(ChineseZodiacSignOfSignInfoNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "ycled") == 0)
                        return &fieldGeneratorCycled;
                    break;
                case 'O':
                    if (strcmp(&(field_name[1]), "rdinal") == 0)
                        return &fieldGeneratorOrdinal;
                    break;
                case 'Q':
                    if (strcmp(&(field_name[1]), "uerySign") == 0)
                        return &fieldGeneratorQuerySign;
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "esultSign") == 0)
                        return &fieldGeneratorResultSign;
                    break;
                default:
                    break;
              }
            return ChineseZodiacInfoNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : ChineseZodiacInfoNuggetJSON::Generator(ignore_extras), fieldGeneratorResultSign("field \"ResultSign\" of the ChineseZodiacSignOfSignInfoNugget class"), fieldGeneratorQuerySign("field \"QuerySign\" of the ChineseZodiacSignOfSignInfoNugget class"), fieldGeneratorOrdinal("field \"Ordinal\" of the ChineseZodiacSignOfSignInfoNugget class"), fieldGeneratorCycled("field \"Cycled\" of the ChineseZodiacSignOfSignInfoNugget class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the ChineseZodiacSignOfSignInfoNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorResultSign.reset();
            fieldGeneratorQuerySign.reset();
            fieldGeneratorOrdinal.reset();
            fieldGeneratorCycled.reset();
            ChineseZodiacInfoNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* CHINESEZODIACSIGNOFSIGNINFONUGGETJSON_H */
