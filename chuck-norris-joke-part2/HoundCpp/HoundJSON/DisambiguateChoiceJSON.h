/* file "DisambiguateChoiceJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef DISAMBIGUATECHOICEJSON_H
#define DISAMBIGUATECHOICEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
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


class DisambiguateChoiceJSON : public ReferenceCounted
  {
  private:
    bool flagHasQueryText;
    std::string storeQueryText;
    bool flagHasPrimaryText;
    std::string storePrimaryText;
    bool flagHasPrimaryTextLabel;
    std::string storePrimaryTextLabel;
    bool flagHasSecondaryText;
    std::string storeSecondaryText;
    bool flagHasSecondaryTextLabel;
    std::string storeSecondaryTextLabel;
    bool flagHasImageURL;
    std::string storeImageURL;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    DisambiguateChoiceJSON(const DisambiguateChoiceJSON &);
    DisambiguateChoiceJSON & operator=(const DisambiguateChoiceJSON &other);

    void  fromJSONQueryText(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPrimaryText(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPrimaryTextLabel(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSecondaryText(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSecondaryTextLabel(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONImageURL(JSONValue *json_value, bool ignore_extras = false);


  public:
    DisambiguateChoiceJSON(void);
    virtual ~DisambiguateChoiceJSON(void);
    bool  hasQueryText(void) const;
    std::string  getQueryText(void);
    const std::string  getQueryText(void) const;
    bool  hasPrimaryText(void) const;
    std::string  getPrimaryText(void);
    const std::string  getPrimaryText(void) const;
    bool  hasPrimaryTextLabel(void) const;
    std::string  getPrimaryTextLabel(void);
    const std::string  getPrimaryTextLabel(void) const;
    bool  hasSecondaryText(void) const;
    std::string  getSecondaryText(void);
    const std::string  getSecondaryText(void) const;
    bool  hasSecondaryTextLabel(void) const;
    std::string  getSecondaryTextLabel(void);
    const std::string  getSecondaryTextLabel(void) const;
    bool  hasImageURL(void) const;
    std::string  getImageURL(void);
    const std::string  getImageURL(void) const;

    virtual size_t extraDisambiguateChoiceComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraDisambiguateChoiceComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraDisambiguateChoiceComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraDisambiguateChoiceComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraDisambiguateChoiceLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraDisambiguateChoiceLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setQueryText(std::string new_value)
      {
        flagHasQueryText = true;
        storeQueryText = new_value;
      }
    void unsetQueryText(void)
      {
        flagHasQueryText = false;
      }
    void setPrimaryText(std::string new_value)
      {
        flagHasPrimaryText = true;
        storePrimaryText = new_value;
      }
    void unsetPrimaryText(void)
      {
        flagHasPrimaryText = false;
      }
    void setPrimaryTextLabel(std::string new_value)
      {
        flagHasPrimaryTextLabel = true;
        storePrimaryTextLabel = new_value;
      }
    void unsetPrimaryTextLabel(void)
      {
        flagHasPrimaryTextLabel = false;
      }
    void setSecondaryText(std::string new_value)
      {
        flagHasSecondaryText = true;
        storeSecondaryText = new_value;
      }
    void unsetSecondaryText(void)
      {
        flagHasSecondaryText = false;
      }
    void setSecondaryTextLabel(std::string new_value)
      {
        flagHasSecondaryTextLabel = true;
        storeSecondaryTextLabel = new_value;
      }
    void unsetSecondaryTextLabel(void)
      {
        flagHasSecondaryTextLabel = false;
      }
    void setImageURL(std::string new_value)
      {
        flagHasImageURL = true;
        storeImageURL = new_value;
      }
    void unsetImageURL(void)
      {
        flagHasImageURL = false;
      }

    virtual void extraDisambiguateChoiceAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraDisambiguateChoiceSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraDisambiguateChoiceLookup(key);
        if (old_field == NULL)
          {
            extraDisambiguateChoiceAppendPair(key, new_component);
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
        assert(flagHasQueryText);
        handler->start_pair("QueryText");
        handler->string_value(storeQueryText);
        assert(flagHasPrimaryText);
        handler->start_pair("PrimaryText");
        handler->string_value(storePrimaryText);
        if (flagHasPrimaryTextLabel)
          {
            handler->start_pair("PrimaryTextLabel");
            handler->string_value(storePrimaryTextLabel);
          }
        if (flagHasSecondaryText)
          {
            handler->start_pair("SecondaryText");
            handler->string_value(storeSecondaryText);
          }
        if (flagHasSecondaryTextLabel)
          {
            handler->start_pair("SecondaryTextLabel");
            handler->string_value(storeSecondaryTextLabel);
          }
        if (flagHasImageURL)
          {
            handler->start_pair("ImageURL");
            handler->string_value(storeImageURL);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasQueryText()))
          {
            return "When parsing the object for %what%, the \"QueryText\" field was missing.";
          }
        if (!(hasPrimaryText()))
          {
            return "When parsing the object for %what%, the \"PrimaryText\" field was missing.";
          }
        return NULL;
      }

    static DisambiguateChoiceJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static DisambiguateChoiceJSON *from_text(const char *text, bool ignore_extras = false)
      {
        DisambiguateChoiceJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DisambiguateChoiceJSON>, DisambiguateChoiceJSON *, bool> generator("Type DisambiguateChoice", ignore_extras);
            parse_json_value(text, "Text for DisambiguateChoiceJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static DisambiguateChoiceJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        DisambiguateChoiceJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DisambiguateChoiceJSON>, DisambiguateChoiceJSON *, bool> generator("Type DisambiguateChoice", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorQueryText;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPrimaryText;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPrimaryTextLabel;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSecondaryText;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSecondaryTextLabel;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorImageURL;
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
            DisambiguateChoiceJSON *result = new DisambiguateChoiceJSON();
            assert(result != NULL);
            RCHandle<DisambiguateChoiceJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraDisambiguateChoiceAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(DisambiguateChoiceJSON *result)
          {
            if (fieldGeneratorQueryText.have_value)
              {
                result->setQueryText(fieldGeneratorQueryText.value);
                fieldGeneratorQueryText.have_value = false;
              }
            else if (!(result->hasQueryText()))
              {
                error("When parsing the object for %what%, the \"QueryText\" field was missing.");
              }
            if (fieldGeneratorPrimaryText.have_value)
              {
                result->setPrimaryText(fieldGeneratorPrimaryText.value);
                fieldGeneratorPrimaryText.have_value = false;
              }
            else if (!(result->hasPrimaryText()))
              {
                error("When parsing the object for %what%, the \"PrimaryText\" field was missing.");
              }
            if (fieldGeneratorPrimaryTextLabel.have_value)
              {
                result->setPrimaryTextLabel(fieldGeneratorPrimaryTextLabel.value);
                fieldGeneratorPrimaryTextLabel.have_value = false;
              }
            if (fieldGeneratorSecondaryText.have_value)
              {
                result->setSecondaryText(fieldGeneratorSecondaryText.value);
                fieldGeneratorSecondaryText.have_value = false;
              }
            if (fieldGeneratorSecondaryTextLabel.have_value)
              {
                result->setSecondaryTextLabel(fieldGeneratorSecondaryTextLabel.value);
                fieldGeneratorSecondaryTextLabel.have_value = false;
              }
            if (fieldGeneratorImageURL.have_value)
              {
                result->setImageURL(fieldGeneratorImageURL.value);
                fieldGeneratorImageURL.have_value = false;
              }
          }
        virtual void handle_result(DisambiguateChoiceJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'I':
                    if (strcmp(&(field_name[1]), "mageURL") == 0)
                        return &fieldGeneratorImageURL;
                    break;
                case 'P':
                    if (strncmp(&(field_name[1]), "rimaryText", 10) == 0)
                      {
                        switch ((unsigned char)(field_name[11]))
                          {
                            case 0:
                                return &fieldGeneratorPrimaryText;
                            case 'L':
                                if (strcmp(&(field_name[12]), "abel") == 0)
                                    return &fieldGeneratorPrimaryTextLabel;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'Q':
                    if (strcmp(&(field_name[1]), "ueryText") == 0)
                        return &fieldGeneratorQueryText;
                    break;
                case 'S':
                    if (strncmp(&(field_name[1]), "econdaryText", 12) == 0)
                      {
                        switch ((unsigned char)(field_name[13]))
                          {
                            case 0:
                                return &fieldGeneratorSecondaryText;
                            case 'L':
                                if (strcmp(&(field_name[14]), "abel") == 0)
                                    return &fieldGeneratorSecondaryTextLabel;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorQueryText("field \"QueryText\" of the DisambiguateChoice class"), fieldGeneratorPrimaryText("field \"PrimaryText\" of the DisambiguateChoice class"), fieldGeneratorPrimaryTextLabel("field \"PrimaryTextLabel\" of the DisambiguateChoice class"), fieldGeneratorSecondaryText("field \"SecondaryText\" of the DisambiguateChoice class"), fieldGeneratorSecondaryTextLabel("field \"SecondaryTextLabel\" of the DisambiguateChoice class"), fieldGeneratorImageURL("field \"ImageURL\" of the DisambiguateChoice class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the DisambiguateChoice class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorQueryText.reset();
            fieldGeneratorPrimaryText.reset();
            fieldGeneratorPrimaryTextLabel.reset();
            fieldGeneratorSecondaryText.reset();
            fieldGeneratorSecondaryTextLabel.reset();
            fieldGeneratorImageURL.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* DISAMBIGUATECHOICEJSON_H */
