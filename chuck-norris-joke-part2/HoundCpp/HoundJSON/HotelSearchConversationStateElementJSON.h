/* file "HotelSearchConversationStateElementJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOTELSEARCHCONVERSATIONSTATEELEMENTJSON_H
#define HOTELSEARCHCONVERSATIONSTATEELEMENTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include <vector>
#include "OInteger.h"
#include "HotelFilterSpecJSON.h"
#include "HotelJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HotelSearchConversationStateElementJSON : public ReferenceCounted
  {
  public:
    enum TypeHotelKind
      {
        HotelKind_Hotel,
        HotelKind_ShowList
      };

    static TypeHotelKind  stringToHotelKind(const char *chars);
    static const char * stringFromHotelKind(TypeHotelKind the_enum);

  private:
    bool flagHasHotelKind;
    TypeHotelKind storeHotelKind;
    bool flagHasHotelFilterSpec;
    HotelFilterSpecJSON * storeHotelFilterSpec;
    bool flagHasHotelSearchResults;
    std::vector< HotelJSON * > storeHotelSearchResults;
    bool flagHasResultIndexReferenced;
    OInteger storeResultIndexReferenced;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HotelSearchConversationStateElementJSON(const HotelSearchConversationStateElementJSON &);
    HotelSearchConversationStateElementJSON & operator=(const HotelSearchConversationStateElementJSON &other);

    void  fromJSONHotelKind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHotelFilterSpec(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHotelSearchResults(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResultIndexReferenced(JSONValue *json_value, bool ignore_extras = false);


  public:
    HotelSearchConversationStateElementJSON(void);
    virtual ~HotelSearchConversationStateElementJSON(void);
    bool  hasHotelKind(void) const;
    TypeHotelKind  getHotelKind(void);
    const TypeHotelKind  getHotelKind(void) const;
    const char * getHotelKindAsChars(void) const;
    std::string  getHotelKindAsString(void) const;
    bool  hasHotelFilterSpec(void) const;
    HotelFilterSpecJSON *  getHotelFilterSpec(void);
    const HotelFilterSpecJSON *  getHotelFilterSpec(void) const;
    bool  hasHotelSearchResults(void) const;
    size_t  countOfHotelSearchResults(void) const;
    HotelJSON *  elementOfHotelSearchResults(size_t element_num);
    const HotelJSON *  elementOfHotelSearchResults(size_t element_num) const;
    std::vector< HotelJSON * >  getHotelSearchResults(void);
    const std::vector< HotelJSON * >  getHotelSearchResults(void) const;
    bool  hasResultIndexReferenced(void) const;
    OInteger  getResultIndexReferenced(void);
    const OInteger  getResultIndexReferenced(void) const;

    virtual size_t extraHotelSearchConversationStateElementComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHotelSearchConversationStateElementComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHotelSearchConversationStateElementComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHotelSearchConversationStateElementComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHotelSearchConversationStateElementLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHotelSearchConversationStateElementLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setHotelKind(TypeHotelKind new_value)
      {
        flagHasHotelKind = true;
        storeHotelKind = new_value;
      }
    void setHotelKind(const char *chars)
      {
        setHotelKind(stringToHotelKind(chars));
      }
    void setHotelKind(std::string the_string)
      {
        setHotelKind(stringToHotelKind(the_string.c_str()));
      }
    void unsetHotelKind(void)
      {
        flagHasHotelKind = false;
      }
    void setHotelFilterSpec(HotelFilterSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasHotelFilterSpec)
          {
            storeHotelFilterSpec->remove_reference();
          }
        flagHasHotelFilterSpec = true;
        storeHotelFilterSpec = new_value;
      }
    void unsetHotelFilterSpec(void)
      {
        if (flagHasHotelFilterSpec)
          {
            storeHotelFilterSpec->remove_reference();
          }
        flagHasHotelFilterSpec = false;
      }
    void initHotelSearchResults(void)
      {
        if (flagHasHotelSearchResults)
          {
            for (size_t num2 = 0; num2 < storeHotelSearchResults.size(); ++num2)
              {
                storeHotelSearchResults[num2]->remove_reference();
              }
          }
        flagHasHotelSearchResults = true;
        storeHotelSearchResults.clear();
      }
    void appendHotelSearchResults(HotelJSON * to_append)
      {
        if (!flagHasHotelSearchResults)
          {
            flagHasHotelSearchResults = true;
            storeHotelSearchResults.clear();
          }
        assert(flagHasHotelSearchResults);
        to_append->add_reference();
        storeHotelSearchResults.push_back(to_append);
      }
    void unsetHotelSearchResults(void)
      {
        if (flagHasHotelSearchResults)
          {
            for (size_t num3 = 0; num3 < storeHotelSearchResults.size(); ++num3)
              {
                storeHotelSearchResults[num3]->remove_reference();
              }
          }
        flagHasHotelSearchResults = false;
        storeHotelSearchResults.clear();
      }
    void setResultIndexReferenced(OInteger new_value)
      {
        flagHasResultIndexReferenced = true;
        if (new_value < 0)
            throw("The value for field ResultIndexReferenced of HotelSearchConversationStateElementJSON is less than the lower bound (0) for that field.");
        storeResultIndexReferenced = new_value;
      }
    void unsetResultIndexReferenced(void)
      {
        flagHasResultIndexReferenced = false;
      }

    virtual void extraHotelSearchConversationStateElementAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHotelSearchConversationStateElementSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHotelSearchConversationStateElementLookup(key);
        if (old_field == NULL)
          {
            extraHotelSearchConversationStateElementAppendPair(key, new_component);
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
        assert(flagHasHotelKind);
        handler->start_pair("HotelKind");
        switch (storeHotelKind)
          {
            case HotelKind_Hotel:
                handler->string_value("Hotel");
                break;
            case HotelKind_ShowList:
                handler->string_value("ShowList");
                break;
            default:
                assert(false);
          }
        if (flagHasHotelFilterSpec)
          {
            handler->start_pair("HotelFilterSpec");
            storeHotelFilterSpec->write_as_json(handler);
          }
        if (flagHasHotelSearchResults)
          {
            handler->start_pair("HotelSearchResults");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeHotelSearchResults.size(); ++num1)
              {
                storeHotelSearchResults[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasResultIndexReferenced)
          {
            handler->start_pair("ResultIndexReferenced");
            handler->number_value(storeResultIndexReferenced.get_o_integer());
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasHotelKind()))
          {
            return "When parsing the object for %what%, the \"HotelKind\" field was missing.";
          }
        return NULL;
      }

    static HotelSearchConversationStateElementJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HotelSearchConversationStateElementJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HotelSearchConversationStateElementJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HotelSearchConversationStateElementJSON>, HotelSearchConversationStateElementJSON *, bool> generator("Type HotelSearchConversationStateElement", ignore_extras);
            parse_json_value(text, "Text for HotelSearchConversationStateElementJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HotelSearchConversationStateElementJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HotelSearchConversationStateElementJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HotelSearchConversationStateElementJSON>, HotelSearchConversationStateElementJSON *, bool> generator("Type HotelSearchConversationStateElement", ignore_extras);
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
    class FieldGeneratorHotelKind : public JSONStringGenerator
          {
          protected:
            FieldGeneratorHotelKind(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorHotelKind(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToHotelKind(result));
              }
            virtual void handle_result(TypeHotelKind result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorHotelKind, TypeHotelKind, TypeHotelKind > fieldGeneratorHotelKind;
        JSONHoldingGenerator<HotelFilterSpecJSON::Generator, RCHandle<HotelFilterSpecJSON>, HotelFilterSpecJSON *, bool > fieldGeneratorHotelFilterSpec;
        JSONHoldingArrayGenerator<HotelJSON::Generator, RCHandle<HotelJSON>, HotelJSON *, bool > fieldGeneratorHotelSearchResults;
        static char lowerBoundResultIndexReferenced[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundResultIndexReferenced>, OInteger, o_integer > fieldGeneratorResultIndexReferenced;
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
            HotelSearchConversationStateElementJSON *result = new HotelSearchConversationStateElementJSON();
            assert(result != NULL);
            RCHandle<HotelSearchConversationStateElementJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHotelSearchConversationStateElementAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(HotelSearchConversationStateElementJSON *result)
          {
            if (fieldGeneratorHotelKind.have_value)
              {
                result->setHotelKind(fieldGeneratorHotelKind.value);
                fieldGeneratorHotelKind.have_value = false;
              }
            else if (!(result->hasHotelKind()))
              {
                error("When parsing the object for %what%, the \"HotelKind\" field was missing.");
              }
            if (fieldGeneratorHotelFilterSpec.have_value)
              {
                result->setHotelFilterSpec(fieldGeneratorHotelFilterSpec.value.referenced());
                fieldGeneratorHotelFilterSpec.have_value = false;
              }
            if (fieldGeneratorHotelSearchResults.have_value)
              {
                result->initHotelSearchResults();
                size_t count = fieldGeneratorHotelSearchResults.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendHotelSearchResults(fieldGeneratorHotelSearchResults.value[num].referenced());
                  }
                fieldGeneratorHotelSearchResults.value.clear();
                fieldGeneratorHotelSearchResults.have_value = false;
              }
            if (fieldGeneratorResultIndexReferenced.have_value)
              {
                result->setResultIndexReferenced(fieldGeneratorResultIndexReferenced.value);
                fieldGeneratorResultIndexReferenced.have_value = false;
              }
          }
        virtual void handle_result(HotelSearchConversationStateElementJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'H':
                    if (strncmp(&(field_name[1]), "otel", 4) == 0)
                      {
                        switch ((unsigned char)(field_name[5]))
                          {
                            case 'F':
                                if (strcmp(&(field_name[6]), "ilterSpec") == 0)
                                    return &fieldGeneratorHotelFilterSpec;
                                break;
                            case 'K':
                                if (strcmp(&(field_name[6]), "ind") == 0)
                                    return &fieldGeneratorHotelKind;
                                break;
                            case 'S':
                                if (strcmp(&(field_name[6]), "earchResults") == 0)
                                    return &fieldGeneratorHotelSearchResults;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "esultIndexReferenced") == 0)
                        return &fieldGeneratorResultIndexReferenced;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorHotelKind("field \"HotelKind\" of the HotelSearchConversationStateElement class"), fieldGeneratorHotelFilterSpec("field \"HotelFilterSpec\" of the HotelSearchConversationStateElement class", ignore_extras), fieldGeneratorHotelSearchResults("field \"HotelSearchResults\" of the HotelSearchConversationStateElement class", ignore_extras), fieldGeneratorResultIndexReferenced("field \"ResultIndexReferenced\" of the HotelSearchConversationStateElement class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HotelSearchConversationStateElement class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorHotelKind.reset();
            fieldGeneratorHotelFilterSpec.reset();
            fieldGeneratorHotelSearchResults.reset();
            fieldGeneratorResultIndexReferenced.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HOTELSEARCHCONVERSATIONSTATEELEMENTJSON_H */
