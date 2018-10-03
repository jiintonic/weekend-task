/* file "TipCalculatorQueryStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef TIPCALCULATORQUERYSTATEJSON_H
#define TIPCALCULATORQUERYSTATEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "TipCalculatorInputDataJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class TipCalculatorQueryStateJSON : public ReferenceCounted
  {
  public:
    enum TypeTipCalculatorCommandKind
      {
        TipCalculatorCommandKind_TipCalculatorShowResultsCommand,
        TipCalculatorCommandKind_TipCalculatorCancelInformationNugget
      };

    static TypeTipCalculatorCommandKind  stringToTipCalculatorCommandKind(const char *chars);
    static const char * stringFromTipCalculatorCommandKind(TypeTipCalculatorCommandKind the_enum);

  private:
    bool flagHasTipCalculatorCommandKind;
    TypeTipCalculatorCommandKind storeTipCalculatorCommandKind;
    bool flagHasTipCalculatorInputData;
    TipCalculatorInputDataJSON * storeTipCalculatorInputData;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    TipCalculatorQueryStateJSON(const TipCalculatorQueryStateJSON &);
    TipCalculatorQueryStateJSON & operator=(const TipCalculatorQueryStateJSON &other);

    void  fromJSONTipCalculatorCommandKind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTipCalculatorInputData(JSONValue *json_value, bool ignore_extras = false);


  public:
    TipCalculatorQueryStateJSON(void);
    virtual ~TipCalculatorQueryStateJSON(void);
    bool  hasTipCalculatorCommandKind(void) const;
    TypeTipCalculatorCommandKind  getTipCalculatorCommandKind(void);
    const TypeTipCalculatorCommandKind  getTipCalculatorCommandKind(void) const;
    const char * getTipCalculatorCommandKindAsChars(void) const;
    std::string  getTipCalculatorCommandKindAsString(void) const;
    bool  hasTipCalculatorInputData(void) const;
    TipCalculatorInputDataJSON *  getTipCalculatorInputData(void);
    const TipCalculatorInputDataJSON *  getTipCalculatorInputData(void) const;

    virtual size_t extraTipCalculatorQueryStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraTipCalculatorQueryStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraTipCalculatorQueryStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraTipCalculatorQueryStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraTipCalculatorQueryStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraTipCalculatorQueryStateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setTipCalculatorCommandKind(TypeTipCalculatorCommandKind new_value)
      {
        flagHasTipCalculatorCommandKind = true;
        storeTipCalculatorCommandKind = new_value;
      }
    void setTipCalculatorCommandKind(const char *chars)
      {
        setTipCalculatorCommandKind(stringToTipCalculatorCommandKind(chars));
      }
    void setTipCalculatorCommandKind(std::string the_string)
      {
        setTipCalculatorCommandKind(stringToTipCalculatorCommandKind(the_string.c_str()));
      }
    void unsetTipCalculatorCommandKind(void)
      {
        flagHasTipCalculatorCommandKind = false;
      }
    void setTipCalculatorInputData(TipCalculatorInputDataJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasTipCalculatorInputData)
          {
            storeTipCalculatorInputData->remove_reference();
          }
        flagHasTipCalculatorInputData = true;
        storeTipCalculatorInputData = new_value;
      }
    void unsetTipCalculatorInputData(void)
      {
        if (flagHasTipCalculatorInputData)
          {
            storeTipCalculatorInputData->remove_reference();
          }
        flagHasTipCalculatorInputData = false;
      }

    virtual void extraTipCalculatorQueryStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraTipCalculatorQueryStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraTipCalculatorQueryStateLookup(key);
        if (old_field == NULL)
          {
            extraTipCalculatorQueryStateAppendPair(key, new_component);
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
        assert(flagHasTipCalculatorCommandKind);
        handler->start_pair("TipCalculatorCommandKind");
        switch (storeTipCalculatorCommandKind)
          {
            case TipCalculatorCommandKind_TipCalculatorShowResultsCommand:
                handler->string_value("TipCalculatorShowResultsCommand");
                break;
            case TipCalculatorCommandKind_TipCalculatorCancelInformationNugget:
                handler->string_value("TipCalculatorCancelInformationNugget");
                break;
            default:
                assert(false);
          }
        if (flagHasTipCalculatorInputData)
          {
            handler->start_pair("TipCalculatorInputData");
            storeTipCalculatorInputData->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasTipCalculatorCommandKind()))
          {
            return "When parsing the object for %what%, the \"TipCalculatorCommandKind\" field was missing.";
          }
        return NULL;
      }

    static TipCalculatorQueryStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static TipCalculatorQueryStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        TipCalculatorQueryStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TipCalculatorQueryStateJSON>, TipCalculatorQueryStateJSON *, bool> generator("Type TipCalculatorQueryState", ignore_extras);
            parse_json_value(text, "Text for TipCalculatorQueryStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static TipCalculatorQueryStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        TipCalculatorQueryStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TipCalculatorQueryStateJSON>, TipCalculatorQueryStateJSON *, bool> generator("Type TipCalculatorQueryState", ignore_extras);
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
    class FieldGeneratorTipCalculatorCommandKind : public JSONStringGenerator
          {
          protected:
            FieldGeneratorTipCalculatorCommandKind(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorTipCalculatorCommandKind(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToTipCalculatorCommandKind(result));
              }
            virtual void handle_result(TypeTipCalculatorCommandKind result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorTipCalculatorCommandKind, TypeTipCalculatorCommandKind, TypeTipCalculatorCommandKind > fieldGeneratorTipCalculatorCommandKind;
        JSONHoldingGenerator<TipCalculatorInputDataJSON::Generator, RCHandle<TipCalculatorInputDataJSON>, TipCalculatorInputDataJSON *, bool > fieldGeneratorTipCalculatorInputData;
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
            TipCalculatorQueryStateJSON *result = new TipCalculatorQueryStateJSON();
            assert(result != NULL);
            RCHandle<TipCalculatorQueryStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraTipCalculatorQueryStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(TipCalculatorQueryStateJSON *result)
          {
            if (fieldGeneratorTipCalculatorCommandKind.have_value)
              {
                result->setTipCalculatorCommandKind(fieldGeneratorTipCalculatorCommandKind.value);
                fieldGeneratorTipCalculatorCommandKind.have_value = false;
              }
            else if (!(result->hasTipCalculatorCommandKind()))
              {
                error("When parsing the object for %what%, the \"TipCalculatorCommandKind\" field was missing.");
              }
            if (fieldGeneratorTipCalculatorInputData.have_value)
              {
                result->setTipCalculatorInputData(fieldGeneratorTipCalculatorInputData.value.referenced());
                fieldGeneratorTipCalculatorInputData.have_value = false;
              }
          }
        virtual void handle_result(TipCalculatorQueryStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strncmp(field_name, "TipCalculator", 13) == 0)
              {
                switch ((unsigned char)(field_name[13]))
                  {
                    case 'C':
                        if (strcmp(&(field_name[14]), "ommandKind") == 0)
                            return &fieldGeneratorTipCalculatorCommandKind;
                        break;
                    case 'I':
                        if (strcmp(&(field_name[14]), "nputData") == 0)
                            return &fieldGeneratorTipCalculatorInputData;
                        break;
                    default:
                        break;
                  }
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorTipCalculatorCommandKind("field \"TipCalculatorCommandKind\" of the TipCalculatorQueryState class"), fieldGeneratorTipCalculatorInputData("field \"TipCalculatorInputData\" of the TipCalculatorQueryState class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the TipCalculatorQueryState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorTipCalculatorCommandKind.reset();
            fieldGeneratorTipCalculatorInputData.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* TIPCALCULATORQUERYSTATEJSON_H */
