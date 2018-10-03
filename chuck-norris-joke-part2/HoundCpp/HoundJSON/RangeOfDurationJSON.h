/* file "RangeOfDurationJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef RANGEOFDURATIONJSON_H
#define RANGEOFDURATIONJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "DurationEndpointJSON.h"
#include "DurationEndpointJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class RangeOfDurationJSON : public ReferenceCounted
  {
  private:
    bool flagHasLeftEndpoint;
    DurationEndpointJSON * storeLeftEndpoint;
    bool flagHasRightEndpoint;
    DurationEndpointJSON * storeRightEndpoint;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    RangeOfDurationJSON(const RangeOfDurationJSON &);
    RangeOfDurationJSON & operator=(const RangeOfDurationJSON &other);

    void  fromJSONLeftEndpoint(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRightEndpoint(JSONValue *json_value, bool ignore_extras = false);


  public:
    RangeOfDurationJSON(void);
    virtual ~RangeOfDurationJSON(void);
    bool  hasLeftEndpoint(void) const;
    DurationEndpointJSON *  getLeftEndpoint(void);
    const DurationEndpointJSON *  getLeftEndpoint(void) const;
    bool  hasRightEndpoint(void) const;
    DurationEndpointJSON *  getRightEndpoint(void);
    const DurationEndpointJSON *  getRightEndpoint(void) const;

    virtual size_t extraRangeOfDurationComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraRangeOfDurationComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraRangeOfDurationComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraRangeOfDurationComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraRangeOfDurationLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraRangeOfDurationLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setLeftEndpoint(DurationEndpointJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasLeftEndpoint)
          {
            storeLeftEndpoint->remove_reference();
          }
        flagHasLeftEndpoint = true;
        storeLeftEndpoint = new_value;
      }
    void unsetLeftEndpoint(void)
      {
        if (flagHasLeftEndpoint)
          {
            storeLeftEndpoint->remove_reference();
          }
        flagHasLeftEndpoint = false;
      }
    void setRightEndpoint(DurationEndpointJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasRightEndpoint)
          {
            storeRightEndpoint->remove_reference();
          }
        flagHasRightEndpoint = true;
        storeRightEndpoint = new_value;
      }
    void unsetRightEndpoint(void)
      {
        if (flagHasRightEndpoint)
          {
            storeRightEndpoint->remove_reference();
          }
        flagHasRightEndpoint = false;
      }

    virtual void extraRangeOfDurationAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraRangeOfDurationSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraRangeOfDurationLookup(key);
        if (old_field == NULL)
          {
            extraRangeOfDurationAppendPair(key, new_component);
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
        if (flagHasLeftEndpoint)
          {
            handler->start_pair("LeftEndpoint");
            storeLeftEndpoint->write_as_json(handler);
          }
        if (flagHasRightEndpoint)
          {
            handler->start_pair("RightEndpoint");
            storeRightEndpoint->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static RangeOfDurationJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static RangeOfDurationJSON *from_text(const char *text, bool ignore_extras = false)
      {
        RangeOfDurationJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RangeOfDurationJSON>, RangeOfDurationJSON *, bool> generator("Type RangeOfDuration", ignore_extras);
            parse_json_value(text, "Text for RangeOfDurationJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static RangeOfDurationJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        RangeOfDurationJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RangeOfDurationJSON>, RangeOfDurationJSON *, bool> generator("Type RangeOfDuration", ignore_extras);
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
        JSONHoldingGenerator<DurationEndpointJSON::Generator, RCHandle<DurationEndpointJSON>, DurationEndpointJSON *, bool > fieldGeneratorLeftEndpoint;
        JSONHoldingGenerator<DurationEndpointJSON::Generator, RCHandle<DurationEndpointJSON>, DurationEndpointJSON *, bool > fieldGeneratorRightEndpoint;
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
            RangeOfDurationJSON *result = new RangeOfDurationJSON();
            assert(result != NULL);
            RCHandle<RangeOfDurationJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraRangeOfDurationAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(RangeOfDurationJSON *result)
          {
            if (fieldGeneratorLeftEndpoint.have_value)
              {
                result->setLeftEndpoint(fieldGeneratorLeftEndpoint.value.referenced());
                fieldGeneratorLeftEndpoint.have_value = false;
              }
            if (fieldGeneratorRightEndpoint.have_value)
              {
                result->setRightEndpoint(fieldGeneratorRightEndpoint.value.referenced());
                fieldGeneratorRightEndpoint.have_value = false;
              }
          }
        virtual void handle_result(RangeOfDurationJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'L':
                    if (strcmp(&(field_name[1]), "eftEndpoint") == 0)
                        return &fieldGeneratorLeftEndpoint;
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "ightEndpoint") == 0)
                        return &fieldGeneratorRightEndpoint;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorLeftEndpoint("field \"LeftEndpoint\" of the RangeOfDuration class", ignore_extras), fieldGeneratorRightEndpoint("field \"RightEndpoint\" of the RangeOfDuration class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the RangeOfDuration class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorLeftEndpoint.reset();
            fieldGeneratorRightEndpoint.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* RANGEOFDURATIONJSON_H */
