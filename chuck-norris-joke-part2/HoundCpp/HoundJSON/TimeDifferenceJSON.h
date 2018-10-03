/* file "TimeDifferenceJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef TIMEDIFFERENCEJSON_H
#define TIMEDIFFERENCEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerUnboundRangeGenerator.h"
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


class TimeDifferenceJSON : public ReferenceCounted
  {
  private:
    bool flagHasAmount;
    OInteger storeAmount;
    bool flagHasText;
    std::string storeText;
    bool flagHasSpokenText;
    std::string storeSpokenText;
    bool flagHasShortText;
    std::string storeShortText;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    TimeDifferenceJSON(const TimeDifferenceJSON &);
    TimeDifferenceJSON & operator=(const TimeDifferenceJSON &other);

    void  fromJSONAmount(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONText(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenText(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONShortText(JSONValue *json_value, bool ignore_extras = false);


  public:
    TimeDifferenceJSON(void);
    virtual ~TimeDifferenceJSON(void);
    bool  hasAmount(void) const;
    OInteger  getAmount(void);
    const OInteger  getAmount(void) const;
    bool  hasText(void) const;
    std::string  getText(void);
    const std::string  getText(void) const;
    bool  hasSpokenText(void) const;
    std::string  getSpokenText(void);
    const std::string  getSpokenText(void) const;
    bool  hasShortText(void) const;
    std::string  getShortText(void);
    const std::string  getShortText(void) const;

    virtual size_t extraTimeDifferenceComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraTimeDifferenceComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraTimeDifferenceComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraTimeDifferenceComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraTimeDifferenceLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraTimeDifferenceLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setAmount(OInteger new_value)
      {
        flagHasAmount = true;
        storeAmount = new_value;
      }
    void unsetAmount(void)
      {
        flagHasAmount = false;
      }
    void setText(std::string new_value)
      {
        flagHasText = true;
        storeText = new_value;
      }
    void unsetText(void)
      {
        flagHasText = false;
      }
    void setSpokenText(std::string new_value)
      {
        flagHasSpokenText = true;
        storeSpokenText = new_value;
      }
    void unsetSpokenText(void)
      {
        flagHasSpokenText = false;
      }
    void setShortText(std::string new_value)
      {
        flagHasShortText = true;
        storeShortText = new_value;
      }
    void unsetShortText(void)
      {
        flagHasShortText = false;
      }

    virtual void extraTimeDifferenceAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraTimeDifferenceSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraTimeDifferenceLookup(key);
        if (old_field == NULL)
          {
            extraTimeDifferenceAppendPair(key, new_component);
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
        assert(flagHasAmount);
        handler->start_pair("Amount");
        handler->number_value(storeAmount.get_o_integer());
        assert(flagHasText);
        handler->start_pair("Text");
        handler->string_value(storeText);
        assert(flagHasSpokenText);
        handler->start_pair("SpokenText");
        handler->string_value(storeSpokenText);
        assert(flagHasShortText);
        handler->start_pair("ShortText");
        handler->string_value(storeShortText);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasAmount()))
          {
            return "When parsing the object for %what%, the \"Amount\" field was missing.";
          }
        if (!(hasText()))
          {
            return "When parsing the object for %what%, the \"Text\" field was missing.";
          }
        if (!(hasSpokenText()))
          {
            return "When parsing the object for %what%, the \"SpokenText\" field was missing.";
          }
        if (!(hasShortText()))
          {
            return "When parsing the object for %what%, the \"ShortText\" field was missing.";
          }
        return NULL;
      }

    static TimeDifferenceJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static TimeDifferenceJSON *from_text(const char *text, bool ignore_extras = false)
      {
        TimeDifferenceJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TimeDifferenceJSON>, TimeDifferenceJSON *, bool> generator("Type TimeDifference", ignore_extras);
            parse_json_value(text, "Text for TimeDifferenceJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static TimeDifferenceJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        TimeDifferenceJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TimeDifferenceJSON>, TimeDifferenceJSON *, bool> generator("Type TimeDifference", ignore_extras);
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
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorAmount;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorText;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenText;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorShortText;
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
            TimeDifferenceJSON *result = new TimeDifferenceJSON();
            assert(result != NULL);
            RCHandle<TimeDifferenceJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraTimeDifferenceAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(TimeDifferenceJSON *result)
          {
            if (fieldGeneratorAmount.have_value)
              {
                result->setAmount(fieldGeneratorAmount.value);
                fieldGeneratorAmount.have_value = false;
              }
            else if (!(result->hasAmount()))
              {
                error("When parsing the object for %what%, the \"Amount\" field was missing.");
              }
            if (fieldGeneratorText.have_value)
              {
                result->setText(fieldGeneratorText.value);
                fieldGeneratorText.have_value = false;
              }
            else if (!(result->hasText()))
              {
                error("When parsing the object for %what%, the \"Text\" field was missing.");
              }
            if (fieldGeneratorSpokenText.have_value)
              {
                result->setSpokenText(fieldGeneratorSpokenText.value);
                fieldGeneratorSpokenText.have_value = false;
              }
            else if (!(result->hasSpokenText()))
              {
                error("When parsing the object for %what%, the \"SpokenText\" field was missing.");
              }
            if (fieldGeneratorShortText.have_value)
              {
                result->setShortText(fieldGeneratorShortText.value);
                fieldGeneratorShortText.have_value = false;
              }
            else if (!(result->hasShortText()))
              {
                error("When parsing the object for %what%, the \"ShortText\" field was missing.");
              }
          }
        virtual void handle_result(TimeDifferenceJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "mount") == 0)
                        return &fieldGeneratorAmount;
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'h':
                            if (strcmp(&(field_name[2]), "ortText") == 0)
                                return &fieldGeneratorShortText;
                            break;
                        case 'p':
                            if (strcmp(&(field_name[2]), "okenText") == 0)
                                return &fieldGeneratorSpokenText;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "ext") == 0)
                        return &fieldGeneratorText;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorAmount("field \"Amount\" of the TimeDifference class"), fieldGeneratorText("field \"Text\" of the TimeDifference class"), fieldGeneratorSpokenText("field \"SpokenText\" of the TimeDifference class"), fieldGeneratorShortText("field \"ShortText\" of the TimeDifference class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the TimeDifference class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorAmount.reset();
            fieldGeneratorText.reset();
            fieldGeneratorSpokenText.reset();
            fieldGeneratorShortText.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* TIMEDIFFERENCEJSON_H */
