/* file "CabinClassFilterJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CABINCLASSFILTERJSON_H
#define CABINCLASSFILTERJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "CabinClassJSON.h"
#include "CabinClassJSON.h"
#include "IncludeExcludeStateJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class CabinClassFilterJSON : public ReferenceCounted
  {
  private:
    bool flagHasIncludes;
    std::vector< CabinClassJSON * > storeIncludes;
    bool flagHasExcludes;
    std::vector< CabinClassJSON * > storeExcludes;
    bool flagHasDefaultForOthers;
    IncludeExcludeStateJSON * storeDefaultForOthers;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    CabinClassFilterJSON(const CabinClassFilterJSON &);
    CabinClassFilterJSON & operator=(const CabinClassFilterJSON &other);

    void  fromJSONIncludes(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONExcludes(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDefaultForOthers(JSONValue *json_value, bool ignore_extras = false);


  public:
    CabinClassFilterJSON(void);
    virtual ~CabinClassFilterJSON(void);
    bool  hasIncludes(void) const;
    size_t  countOfIncludes(void) const;
    CabinClassJSON *  elementOfIncludes(size_t element_num);
    const CabinClassJSON *  elementOfIncludes(size_t element_num) const;
    std::vector< CabinClassJSON * >  getIncludes(void);
    const std::vector< CabinClassJSON * >  getIncludes(void) const;
    bool  hasExcludes(void) const;
    size_t  countOfExcludes(void) const;
    CabinClassJSON *  elementOfExcludes(size_t element_num);
    const CabinClassJSON *  elementOfExcludes(size_t element_num) const;
    std::vector< CabinClassJSON * >  getExcludes(void);
    const std::vector< CabinClassJSON * >  getExcludes(void) const;
    bool  hasDefaultForOthers(void) const;
    IncludeExcludeStateJSON *  getDefaultForOthers(void);
    const IncludeExcludeStateJSON *  getDefaultForOthers(void) const;
    IncludeExcludeStateJSON::TypeValue  getDefaultForOthersValue(void);
    const IncludeExcludeStateJSON::TypeValue  getDefaultForOthersValue(void) const;
    const char * getDefaultForOthersAsChars(void) const;
    std::string  getDefaultForOthersAsString(void) const;

    virtual size_t extraCabinClassFilterComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraCabinClassFilterComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraCabinClassFilterComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraCabinClassFilterComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraCabinClassFilterLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraCabinClassFilterLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void initIncludes(void)
      {
        if (flagHasIncludes)
          {
            for (size_t num3 = 0; num3 < storeIncludes.size(); ++num3)
              {
                storeIncludes[num3]->remove_reference();
              }
          }
        flagHasIncludes = true;
        storeIncludes.clear();
      }
    void appendIncludes(CabinClassJSON * to_append)
      {
        if (!flagHasIncludes)
          {
            flagHasIncludes = true;
            storeIncludes.clear();
          }
        assert(flagHasIncludes);
        to_append->add_reference();
        storeIncludes.push_back(to_append);
      }
    void appendIncludes(CabinClassJSON::TypeValue new_value)
      {
        appendIncludes(new CabinClassJSON(new_value));
      }
    void appendIncludes(const char *chars)
      {
        CabinClassJSON::TypeValueKnownValues known = CabinClassJSON::stringToValue(chars);
        CabinClassJSON::TypeValue new_value;
        if (known == CabinClassJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        appendIncludes(new_value);
      }
    void appendIncludes(std::string the_string)
      {
        appendIncludes(the_string.c_str());
      }
    void unsetIncludes(void)
      {
        if (flagHasIncludes)
          {
            for (size_t num4 = 0; num4 < storeIncludes.size(); ++num4)
              {
                storeIncludes[num4]->remove_reference();
              }
          }
        flagHasIncludes = false;
        storeIncludes.clear();
      }
    void initExcludes(void)
      {
        if (flagHasExcludes)
          {
            for (size_t num5 = 0; num5 < storeExcludes.size(); ++num5)
              {
                storeExcludes[num5]->remove_reference();
              }
          }
        flagHasExcludes = true;
        storeExcludes.clear();
      }
    void appendExcludes(CabinClassJSON * to_append)
      {
        if (!flagHasExcludes)
          {
            flagHasExcludes = true;
            storeExcludes.clear();
          }
        assert(flagHasExcludes);
        to_append->add_reference();
        storeExcludes.push_back(to_append);
      }
    void appendExcludes(CabinClassJSON::TypeValue new_value)
      {
        appendExcludes(new CabinClassJSON(new_value));
      }
    void appendExcludes(const char *chars)
      {
        CabinClassJSON::TypeValueKnownValues known = CabinClassJSON::stringToValue(chars);
        CabinClassJSON::TypeValue new_value;
        if (known == CabinClassJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        appendExcludes(new_value);
      }
    void appendExcludes(std::string the_string)
      {
        appendExcludes(the_string.c_str());
      }
    void unsetExcludes(void)
      {
        if (flagHasExcludes)
          {
            for (size_t num6 = 0; num6 < storeExcludes.size(); ++num6)
              {
                storeExcludes[num6]->remove_reference();
              }
          }
        flagHasExcludes = false;
        storeExcludes.clear();
      }
    void setDefaultForOthers(IncludeExcludeStateJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDefaultForOthers)
          {
            storeDefaultForOthers->remove_reference();
          }
        flagHasDefaultForOthers = true;
        storeDefaultForOthers = new_value;
      }
    void setDefaultForOthers(IncludeExcludeStateJSON::TypeValue new_value)
      {
        setDefaultForOthers(new IncludeExcludeStateJSON(new_value));
      }
    void setDefaultForOthers(const char *chars)
      {
        setDefaultForOthers(new IncludeExcludeStateJSON(chars));
      }
    void setDefaultForOthers(std::string the_string)
      {
        setDefaultForOthers(new IncludeExcludeStateJSON(the_string));
      }
    void unsetDefaultForOthers(void)
      {
        if (flagHasDefaultForOthers)
          {
            storeDefaultForOthers->remove_reference();
          }
        flagHasDefaultForOthers = false;
      }

    virtual void extraCabinClassFilterAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraCabinClassFilterSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraCabinClassFilterLookup(key);
        if (old_field == NULL)
          {
            extraCabinClassFilterAppendPair(key, new_component);
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
        if (flagHasIncludes)
          {
            handler->start_pair("Includes");
            assert(storeIncludes.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeIncludes.size(); ++num1)
              {
                storeIncludes[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasExcludes)
          {
            handler->start_pair("Excludes");
            assert(storeExcludes.size() >= 1);
            handler->start_array();
            for (size_t num2 = 0; num2 < storeExcludes.size(); ++num2)
              {
                storeExcludes[num2]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasDefaultForOthers)
          {
            handler->start_pair("DefaultForOthers");
            storeDefaultForOthers->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static CabinClassFilterJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static CabinClassFilterJSON *from_text(const char *text, bool ignore_extras = false)
      {
        CabinClassFilterJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CabinClassFilterJSON>, CabinClassFilterJSON *, bool> generator("Type CabinClassFilter", ignore_extras);
            parse_json_value(text, "Text for CabinClassFilterJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static CabinClassFilterJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        CabinClassFilterJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CabinClassFilterJSON>, CabinClassFilterJSON *, bool> generator("Type CabinClassFilter", ignore_extras);
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
        JSONHoldingArrayGenerator<CabinClassJSON::Generator, RCHandle<CabinClassJSON>, CabinClassJSON *, bool > fieldGeneratorIncludes;
        JSONHoldingArrayGenerator<CabinClassJSON::Generator, RCHandle<CabinClassJSON>, CabinClassJSON *, bool > fieldGeneratorExcludes;
        JSONHoldingGenerator<IncludeExcludeStateJSON::Generator, RCHandle<IncludeExcludeStateJSON>, IncludeExcludeStateJSON *, bool > fieldGeneratorDefaultForOthers;
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
            CabinClassFilterJSON *result = new CabinClassFilterJSON();
            assert(result != NULL);
            RCHandle<CabinClassFilterJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraCabinClassFilterAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(CabinClassFilterJSON *result)
          {
            if (fieldGeneratorIncludes.have_value)
              {
                result->initIncludes();
                size_t count = fieldGeneratorIncludes.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendIncludes(fieldGeneratorIncludes.value[num].referenced());
                  }
                fieldGeneratorIncludes.value.clear();
                fieldGeneratorIncludes.have_value = false;
              }
            if (fieldGeneratorExcludes.have_value)
              {
                result->initExcludes();
                size_t count = fieldGeneratorExcludes.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendExcludes(fieldGeneratorExcludes.value[num].referenced());
                  }
                fieldGeneratorExcludes.value.clear();
                fieldGeneratorExcludes.have_value = false;
              }
            if (fieldGeneratorDefaultForOthers.have_value)
              {
                result->setDefaultForOthers(fieldGeneratorDefaultForOthers.value.referenced());
                fieldGeneratorDefaultForOthers.have_value = false;
              }
          }
        virtual void handle_result(CabinClassFilterJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strcmp(&(field_name[1]), "efaultForOthers") == 0)
                        return &fieldGeneratorDefaultForOthers;
                    break;
                case 'E':
                    if (strcmp(&(field_name[1]), "xcludes") == 0)
                        return &fieldGeneratorExcludes;
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "ncludes") == 0)
                        return &fieldGeneratorIncludes;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorIncludes("field \"Includes\" of the CabinClassFilter class", ignore_extras), fieldGeneratorExcludes("field \"Excludes\" of the CabinClassFilter class", ignore_extras), fieldGeneratorDefaultForOthers("field \"DefaultForOthers\" of the CabinClassFilter class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the CabinClassFilter class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorIncludes.reset();
            fieldGeneratorExcludes.reset();
            fieldGeneratorDefaultForOthers.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* CABINCLASSFILTERJSON_H */
