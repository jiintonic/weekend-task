/* file "MusicChartsCommandNativeDataJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MUSICCHARTSCOMMANDNATIVEDATAJSON_H
#define MUSICCHARTSCOMMANDNATIVEDATAJSON_H

#pragma interface

#include "MusicCommandNativeDataJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include <string>
#include "MusicChartsSearchCriteriaJSON.h"
#include "MusicVideoJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class MusicChartsCommandNativeDataJSON : public MusicCommandNativeDataJSON
  {
  private:
    bool flagHasSearchCriteria;
    MusicChartsSearchCriteriaJSON * storeSearchCriteria;
    bool flagHasChartTitle;
    std::string storeChartTitle;
    bool flagHasVideos;
    std::vector< MusicVideoJSON * > storeVideos;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    MusicChartsCommandNativeDataJSON(const MusicChartsCommandNativeDataJSON &);
    MusicChartsCommandNativeDataJSON & operator=(const MusicChartsCommandNativeDataJSON &other);

    JSONValue * extraSearchCriteriaToJSON(void) const;
    JSONValue * extraChartTitleToJSON(void) const;
    JSONValue * extraVideosToJSON(void) const;

    void  fromJSONSearchCriteria(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONChartTitle(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONVideos(JSONValue *json_value, bool ignore_extras = false);


  public:
    MusicChartsCommandNativeDataJSON(void);
    virtual ~MusicChartsCommandNativeDataJSON(void);
    const char * getMusicCommandNativeDataKind(void) const;
    bool  hasSearchCriteria(void) const;
    MusicChartsSearchCriteriaJSON *  getSearchCriteria(void);
    const MusicChartsSearchCriteriaJSON *  getSearchCriteria(void) const;
    bool  hasChartTitle(void) const;
    std::string  getChartTitle(void);
    const std::string  getChartTitle(void) const;
    bool  hasVideos(void) const;
    size_t  countOfVideos(void) const;
    MusicVideoJSON *  elementOfVideos(size_t element_num);
    const MusicVideoJSON *  elementOfVideos(size_t element_num) const;
    std::vector< MusicVideoJSON * >  getVideos(void);
    const std::vector< MusicVideoJSON * >  getVideos(void) const;

    virtual size_t extraMusicChartsCommandNativeDataComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraMusicChartsCommandNativeDataComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraMusicChartsCommandNativeDataComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraMusicChartsCommandNativeDataComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraMusicChartsCommandNativeDataLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraMusicChartsCommandNativeDataLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraMusicCommandNativeDataComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasSearchCriteria)
            ++result;
        if (flagHasChartTitle)
            ++result;
        if (flagHasVideos)
            ++result;
        result += extraMusicChartsCommandNativeDataComponentCount();
        return result;
      }
    const char *extraMusicCommandNativeDataComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasSearchCriteria)
          {
            if (remainder == 0)
                return "SearchCriteria";
            --remainder;
          }
        if (flagHasChartTitle)
          {
            if (remainder == 0)
                return "ChartTitle";
            --remainder;
          }
        if (flagHasVideos)
          {
            if (remainder == 0)
                return "Videos";
            --remainder;
          }
        return extraMusicChartsCommandNativeDataComponentKey(remainder);
      }
    JSONValue *extraMusicCommandNativeDataComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasSearchCriteria)
          {
            if (remainder == 0)
                return extraSearchCriteriaToJSON();
            --remainder;
          }
        if (flagHasChartTitle)
          {
            if (remainder == 0)
                return extraChartTitleToJSON();
            --remainder;
          }
        if (flagHasVideos)
          {
            if (remainder == 0)
                return extraVideosToJSON();
            --remainder;
          }
        return extraMusicChartsCommandNativeDataComponentValue(remainder);
      }
    const JSONValue *extraMusicCommandNativeDataComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasSearchCriteria)
          {
            if (remainder == 0)
                return extraSearchCriteriaToJSON();
            --remainder;
          }
        if (flagHasChartTitle)
          {
            if (remainder == 0)
                return extraChartTitleToJSON();
            --remainder;
          }
        if (flagHasVideos)
          {
            if (remainder == 0)
                return extraVideosToJSON();
            --remainder;
          }
        return extraMusicChartsCommandNativeDataComponentValue(remainder);
      }
    JSONValue *extraMusicCommandNativeDataLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "hartTitle") == 0)
                    return (flagHasChartTitle ? extraChartTitleToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "earchCriteria") == 0)
                    return (flagHasSearchCriteria ? extraSearchCriteriaToJSON() : NULL);
                break;
            case 'V':
                if (strcmp(&(field_name[1]), "ideos") == 0)
                    return (flagHasVideos ? extraVideosToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraMusicChartsCommandNativeDataLookup(field_name);
      }
    const JSONValue *extraMusicCommandNativeDataLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "hartTitle") == 0)
                    return (flagHasChartTitle ? extraChartTitleToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "earchCriteria") == 0)
                    return (flagHasSearchCriteria ? extraSearchCriteriaToJSON() : NULL);
                break;
            case 'V':
                if (strcmp(&(field_name[1]), "ideos") == 0)
                    return (flagHasVideos ? extraVideosToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraMusicChartsCommandNativeDataLookup(field_name);
      }

    void setSearchCriteria(MusicChartsSearchCriteriaJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSearchCriteria)
          {
            storeSearchCriteria->remove_reference();
          }
        flagHasSearchCriteria = true;
        storeSearchCriteria = new_value;
      }
    void unsetSearchCriteria(void)
      {
        if (flagHasSearchCriteria)
          {
            storeSearchCriteria->remove_reference();
          }
        flagHasSearchCriteria = false;
      }
    void setChartTitle(std::string new_value)
      {
        flagHasChartTitle = true;
        storeChartTitle = new_value;
      }
    void unsetChartTitle(void)
      {
        flagHasChartTitle = false;
      }
    void initVideos(void)
      {
        if (flagHasVideos)
          {
            for (size_t num2 = 0; num2 < storeVideos.size(); ++num2)
              {
                storeVideos[num2]->remove_reference();
              }
          }
        flagHasVideos = true;
        storeVideos.clear();
      }
    void appendVideos(MusicVideoJSON * to_append)
      {
        if (!flagHasVideos)
          {
            flagHasVideos = true;
            storeVideos.clear();
          }
        assert(flagHasVideos);
        to_append->add_reference();
        storeVideos.push_back(to_append);
      }
    void unsetVideos(void)
      {
        if (flagHasVideos)
          {
            for (size_t num3 = 0; num3 < storeVideos.size(); ++num3)
              {
                storeVideos[num3]->remove_reference();
              }
          }
        flagHasVideos = false;
        storeVideos.clear();
      }

    virtual void extraMusicChartsCommandNativeDataAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraMusicChartsCommandNativeDataSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraMusicChartsCommandNativeDataLookup(key);
        if (old_field == NULL)
          {
            extraMusicChartsCommandNativeDataAppendPair(key, new_component);
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
    void extraMusicCommandNativeDataAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "hartTitle") == 0)
                    {
                    fromJSONChartTitle(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strcmp(&(key[1]), "earchCriteria") == 0)
                    {
                    fromJSONSearchCriteria(new_component, false);
                    return;
                    }
                break;
            case 'V':
                if (strcmp(&(key[1]), "ideos") == 0)
                    {
                    fromJSONVideos(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraMusicChartsCommandNativeDataAppendPair(key, new_component);
      }
    void extraMusicCommandNativeDataSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "hartTitle") == 0)
                    {
                    fromJSONChartTitle(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strcmp(&(key[1]), "earchCriteria") == 0)
                    {
                    fromJSONSearchCriteria(new_component, false);
                    return;
                    }
                break;
            case 'V':
                if (strcmp(&(key[1]), "ideos") == 0)
                    {
                    fromJSONVideos(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraMusicChartsCommandNativeDataSetField(key, new_component);
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
        MusicCommandNativeDataJSON::write_fields_as_json(handler);
        assert(flagHasSearchCriteria);
        handler->start_pair("SearchCriteria");
        storeSearchCriteria->write_as_json(handler);
        if (flagHasChartTitle)
          {
            handler->start_pair("ChartTitle");
            handler->string_value(storeChartTitle);
          }
        if (flagHasVideos)
          {
            handler->start_pair("Videos");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeVideos.size(); ++num1)
              {
                storeVideos[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasSearchCriteria()))
          {
            return "When parsing the object for %what%, the \"SearchCriteria\" field was missing.";
          }
        return NULL;
      }

    static MusicChartsCommandNativeDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MusicChartsCommandNativeDataJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MusicChartsCommandNativeDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicChartsCommandNativeDataJSON>, MusicChartsCommandNativeDataJSON *, bool> generator("Type MusicChartsCommandNativeData", ignore_extras);
            parse_json_value(text, "Text for MusicChartsCommandNativeDataJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MusicChartsCommandNativeDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MusicChartsCommandNativeDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicChartsCommandNativeDataJSON>, MusicChartsCommandNativeDataJSON *, bool> generator("Type MusicChartsCommandNativeData", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public MusicCommandNativeDataJSON::Generator
      {
      private:
        JSONHoldingGenerator<MusicChartsSearchCriteriaJSON::Generator, RCHandle<MusicChartsSearchCriteriaJSON>, MusicChartsSearchCriteriaJSON *, bool > fieldGeneratorSearchCriteria;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorChartTitle;
        JSONHoldingArrayGenerator<MusicVideoJSON::Generator, RCHandle<MusicVideoJSON>, MusicVideoJSON *, bool > fieldGeneratorVideos;
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
            if (!(strcmp(getMusicCommandNativeDataJSONKey().c_str(), "MusicChartsCommandNativeData") == 0))
                throw("The key field has a value other than `MusicChartsCommandNativeData'.");
            MusicChartsCommandNativeDataJSON *result = new MusicChartsCommandNativeDataJSON();
            assert(result != NULL);
            RCHandle<MusicChartsCommandNativeDataJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraMusicChartsCommandNativeDataAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(MusicCommandNativeDataJSON *new_result)
          {
            handle_result((MusicChartsCommandNativeDataJSON *)new_result);
          }
        void finish(MusicChartsCommandNativeDataJSON *result)
          {
            if (fieldGeneratorSearchCriteria.have_value)
              {
                result->setSearchCriteria(fieldGeneratorSearchCriteria.value.referenced());
                fieldGeneratorSearchCriteria.have_value = false;
              }
            else if (!(result->hasSearchCriteria()))
              {
                error("When parsing the object for %what%, the \"SearchCriteria\" field was missing.");
              }
            if (fieldGeneratorChartTitle.have_value)
              {
                result->setChartTitle(fieldGeneratorChartTitle.value);
                fieldGeneratorChartTitle.have_value = false;
              }
            if (fieldGeneratorVideos.have_value)
              {
                result->initVideos();
                size_t count = fieldGeneratorVideos.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendVideos(fieldGeneratorVideos.value[num].referenced());
                  }
                fieldGeneratorVideos.value.clear();
                fieldGeneratorVideos.have_value = false;
              }
            MusicCommandNativeDataJSON::Generator::finish(result);
          }
        virtual void handle_result(MusicChartsCommandNativeDataJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "hartTitle") == 0)
                        return &fieldGeneratorChartTitle;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "earchCriteria") == 0)
                        return &fieldGeneratorSearchCriteria;
                    break;
                case 'V':
                    if (strcmp(&(field_name[1]), "ideos") == 0)
                        return &fieldGeneratorVideos;
                    break;
                default:
                    break;
              }
            return MusicCommandNativeDataJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : MusicCommandNativeDataJSON::Generator(ignore_extras), fieldGeneratorSearchCriteria("field \"SearchCriteria\" of the MusicChartsCommandNativeData class", ignore_extras), fieldGeneratorChartTitle("field \"ChartTitle\" of the MusicChartsCommandNativeData class"), fieldGeneratorVideos("field \"Videos\" of the MusicChartsCommandNativeData class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the MusicChartsCommandNativeData class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorSearchCriteria.reset();
            fieldGeneratorChartTitle.reset();
            fieldGeneratorVideos.reset();
            MusicCommandNativeDataJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* MUSICCHARTSCOMMANDNATIVEDATAJSON_H */
