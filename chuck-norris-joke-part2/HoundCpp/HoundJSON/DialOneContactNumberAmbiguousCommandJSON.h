/* file "DialOneContactNumberAmbiguousCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef DIALONECONTACTNUMBERAMBIGUOUSCOMMANDJSON_H
#define DIALONECONTACTNUMBERAMBIGUOUSCOMMANDJSON_H

#pragma interface

#include "DisambiguateCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "ContactNumberChoicesJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class DialOneContactNumberAmbiguousCommandJSON : public DisambiguateCommandJSON
  {
  private:
    bool flagHasChoices;
    ContactNumberChoicesJSON * storeChoices;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    DialOneContactNumberAmbiguousCommandJSON(const DialOneContactNumberAmbiguousCommandJSON &);
    DialOneContactNumberAmbiguousCommandJSON & operator=(const DialOneContactNumberAmbiguousCommandJSON &other);

    JSONValue * extraChoicesToJSON(void) const;

    void  fromJSONChoices(JSONValue *json_value, bool ignore_extras = false);


  public:
    DialOneContactNumberAmbiguousCommandJSON(void);
    virtual ~DialOneContactNumberAmbiguousCommandJSON(void);
    const char * getDisambiguateCommandKind(void) const;
    bool  hasChoices(void) const;
    ContactNumberChoicesJSON *  getChoices(void);
    const ContactNumberChoicesJSON *  getChoices(void) const;

    virtual size_t extraDialOneContactNumberAmbiguousCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraDialOneContactNumberAmbiguousCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraDialOneContactNumberAmbiguousCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraDialOneContactNumberAmbiguousCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraDialOneContactNumberAmbiguousCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraDialOneContactNumberAmbiguousCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraDisambiguateCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasChoices)
            ++result;
        result += extraDialOneContactNumberAmbiguousCommandComponentCount();
        return result;
      }
    const char *extraDisambiguateCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasChoices)
          {
            if (remainder == 0)
                return "Choices";
            --remainder;
          }
        return extraDialOneContactNumberAmbiguousCommandComponentKey(remainder);
      }
    JSONValue *extraDisambiguateCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasChoices)
          {
            if (remainder == 0)
                return extraChoicesToJSON();
            --remainder;
          }
        return extraDialOneContactNumberAmbiguousCommandComponentValue(remainder);
      }
    const JSONValue *extraDisambiguateCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasChoices)
          {
            if (remainder == 0)
                return extraChoicesToJSON();
            --remainder;
          }
        return extraDialOneContactNumberAmbiguousCommandComponentValue(remainder);
      }
    JSONValue *extraDisambiguateCommandLookup(const char *field_name)
      {
        if (strcmp(field_name, "Choices") == 0)
            return (flagHasChoices ? extraChoicesToJSON() : NULL);
        return extraDialOneContactNumberAmbiguousCommandLookup(field_name);
      }
    const JSONValue *extraDisambiguateCommandLookup(const char *field_name) const
      {
        if (strcmp(field_name, "Choices") == 0)
            return (flagHasChoices ? extraChoicesToJSON() : NULL);
        return extraDialOneContactNumberAmbiguousCommandLookup(field_name);
      }

    void setChoices(ContactNumberChoicesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasChoices)
          {
            storeChoices->remove_reference();
          }
        flagHasChoices = true;
        storeChoices = new_value;
      }
    void unsetChoices(void)
      {
        if (flagHasChoices)
          {
            storeChoices->remove_reference();
          }
        flagHasChoices = false;
      }

    virtual void extraDialOneContactNumberAmbiguousCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraDialOneContactNumberAmbiguousCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraDialOneContactNumberAmbiguousCommandLookup(key);
        if (old_field == NULL)
          {
            extraDialOneContactNumberAmbiguousCommandAppendPair(key, new_component);
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
    void extraDisambiguateCommandAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Choices") == 0)
            {
            fromJSONChoices(new_component, false);
            return;
            }
        extraDialOneContactNumberAmbiguousCommandAppendPair(key, new_component);
      }
    void extraDisambiguateCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Choices") == 0)
            {
            fromJSONChoices(new_component, false);
            return;
            }
        extraDialOneContactNumberAmbiguousCommandSetField(key, new_component);
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
        DisambiguateCommandJSON::write_fields_as_json(handler);
        assert(flagHasChoices);
        handler->start_pair("Choices");
        storeChoices->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasChoices()))
          {
            return "When parsing the object for %what%, the \"Choices\" field was missing.";
          }
        return NULL;
      }

    static DialOneContactNumberAmbiguousCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static DialOneContactNumberAmbiguousCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        DialOneContactNumberAmbiguousCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DialOneContactNumberAmbiguousCommandJSON>, DialOneContactNumberAmbiguousCommandJSON *, bool> generator("Type DialOneContactNumberAmbiguousCommand", ignore_extras);
            parse_json_value(text, "Text for DialOneContactNumberAmbiguousCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static DialOneContactNumberAmbiguousCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        DialOneContactNumberAmbiguousCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DialOneContactNumberAmbiguousCommandJSON>, DialOneContactNumberAmbiguousCommandJSON *, bool> generator("Type DialOneContactNumberAmbiguousCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public DisambiguateCommandJSON::Generator
      {
      private:
        JSONHoldingGenerator<ContactNumberChoicesJSON::Generator, RCHandle<ContactNumberChoicesJSON>, ContactNumberChoicesJSON *, bool > fieldGeneratorChoices;
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
            if (!(strcmp(getDisambiguateCommandJSONKey().c_str(), "DialOneContactNumberAmbiguous") == 0))
                throw("The key field has a value other than `DialOneContactNumberAmbiguous'.");
            DialOneContactNumberAmbiguousCommandJSON *result = new DialOneContactNumberAmbiguousCommandJSON();
            assert(result != NULL);
            RCHandle<DialOneContactNumberAmbiguousCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraDialOneContactNumberAmbiguousCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(DisambiguateCommandJSON *new_result)
          {
            handle_result((DialOneContactNumberAmbiguousCommandJSON *)new_result);
          }
        void finish(DialOneContactNumberAmbiguousCommandJSON *result)
          {
            if (fieldGeneratorChoices.have_value)
              {
                result->setChoices(fieldGeneratorChoices.value.referenced());
                fieldGeneratorChoices.have_value = false;
              }
            else if (!(result->hasChoices()))
              {
                error("When parsing the object for %what%, the \"Choices\" field was missing.");
              }
            DisambiguateCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(DialOneContactNumberAmbiguousCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Choices") == 0)
                return &fieldGeneratorChoices;
            return DisambiguateCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : DisambiguateCommandJSON::Generator(ignore_extras), fieldGeneratorChoices("field \"Choices\" of the DialOneContactNumberAmbiguousCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the DialOneContactNumberAmbiguousCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorChoices.reset();
            DisambiguateCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* DIALONECONTACTNUMBERAMBIGUOUSCOMMANDJSON_H */
