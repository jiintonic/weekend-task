/* file "UserParsingDataJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef USERPARSINGDATAJSON_H
#define USERPARSINGDATAJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONObjectValueGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UserParsingDataJSON : public ReferenceCounted
  {
  private:
    bool flagHasWhatUserCallsUs;
    std::string storeWhatUserCallsUs;
    bool flagHasRealmData;
    JSONObjectValue * storeRealmData;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UserParsingDataJSON(const UserParsingDataJSON &);
    UserParsingDataJSON & operator=(const UserParsingDataJSON &other);

    void  fromJSONWhatUserCallsUs(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRealmData(JSONValue *json_value, bool ignore_extras = false);


  public:
    UserParsingDataJSON(void);
    virtual ~UserParsingDataJSON(void);
    bool  hasWhatUserCallsUs(void) const;
    std::string  getWhatUserCallsUs(void);
    const std::string  getWhatUserCallsUs(void) const;
    bool  hasRealmData(void) const;
    JSONObjectValue *  getRealmData(void);
    const JSONObjectValue *  getRealmData(void) const;

    virtual size_t extraUserParsingDataComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUserParsingDataComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUserParsingDataComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUserParsingDataComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUserParsingDataLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUserParsingDataLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setWhatUserCallsUs(std::string new_value)
      {
        flagHasWhatUserCallsUs = true;
        storeWhatUserCallsUs = new_value;
      }
    void unsetWhatUserCallsUs(void)
      {
        flagHasWhatUserCallsUs = false;
      }
    void setRealmData(JSONObjectValue * new_value)
      {
        new_value->add_reference();
        if (flagHasRealmData)
          {
            storeRealmData->remove_reference();
          }
        flagHasRealmData = true;
        storeRealmData = new_value;
      }
    void unsetRealmData(void)
      {
        if (flagHasRealmData)
          {
            storeRealmData->remove_reference();
          }
        flagHasRealmData = false;
      }

    virtual void extraUserParsingDataAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUserParsingDataSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUserParsingDataLookup(key);
        if (old_field == NULL)
          {
            extraUserParsingDataAppendPair(key, new_component);
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
        if (flagHasWhatUserCallsUs)
          {
            handler->start_pair("WhatUserCallsUs");
            handler->string_value(storeWhatUserCallsUs);
          }
        if (flagHasRealmData)
          {
            handler->start_pair("RealmData");
            storeRealmData->write(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static UserParsingDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UserParsingDataJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UserParsingDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UserParsingDataJSON>, UserParsingDataJSON *, bool> generator("Type UserParsingData", ignore_extras);
            parse_json_value(text, "Text for UserParsingDataJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UserParsingDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UserParsingDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UserParsingDataJSON>, UserParsingDataJSON *, bool> generator("Type UserParsingData", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWhatUserCallsUs;
        JSONHoldingGenerator<JSONObjectValueGenerator, RCHandle<JSONObjectValue>, JSONObjectValue * > fieldGeneratorRealmData;
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
            UserParsingDataJSON *result = new UserParsingDataJSON();
            assert(result != NULL);
            RCHandle<UserParsingDataJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUserParsingDataAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(UserParsingDataJSON *result)
          {
            if (fieldGeneratorWhatUserCallsUs.have_value)
              {
                result->setWhatUserCallsUs(fieldGeneratorWhatUserCallsUs.value);
                fieldGeneratorWhatUserCallsUs.have_value = false;
              }
            if (fieldGeneratorRealmData.have_value)
              {
                result->setRealmData(fieldGeneratorRealmData.value.referenced());
                fieldGeneratorRealmData.have_value = false;
              }
          }
        virtual void handle_result(UserParsingDataJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'R':
                    if (strcmp(&(field_name[1]), "ealmData") == 0)
                        return &fieldGeneratorRealmData;
                    break;
                case 'W':
                    if (strcmp(&(field_name[1]), "hatUserCallsUs") == 0)
                        return &fieldGeneratorWhatUserCallsUs;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorWhatUserCallsUs("field \"WhatUserCallsUs\" of the UserParsingData class"), fieldGeneratorRealmData("field \"RealmData\" of the UserParsingData class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UserParsingData class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorWhatUserCallsUs.reset();
            fieldGeneratorRealmData.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* USERPARSINGDATAJSON_H */
