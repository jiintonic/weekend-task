/* file "HomeAutomationConversationStateDataJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOMEAUTOMATIONCONVERSATIONSTATEDATAJSON_H
#define HOMEAUTOMATIONCONVERSATIONSTATEDATAJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
#include "HomeAutomationCompactDeviceSpecifierJSON.h"
#include "HomeAutomationQueryHintJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HomeAutomationConversationStateDataJSON : public ReferenceCounted
  {
  public:
    enum TypeCommandKind
      {
        CommandKind_HomeAutomationControlCommand,
        CommandKind_HomeAutomationListUserDataCommand,
        CommandKind_HomeAutomationQueryCommand
      };

    static TypeCommandKind  stringToCommandKind(const char *chars);
    static const char * stringFromCommandKind(TypeCommandKind the_enum);

  private:
    bool flagHasCommandKind;
    TypeCommandKind storeCommandKind;
    bool flagHasCompactDeviceSpecifier;
    HomeAutomationCompactDeviceSpecifierJSON * storeCompactDeviceSpecifier;
    bool flagHasFilter;
    HomeAutomationQueryHintJSON * storeFilter;
    bool flagHasNegativeDelta;
    bool storeNegativeDelta;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HomeAutomationConversationStateDataJSON(const HomeAutomationConversationStateDataJSON &);
    HomeAutomationConversationStateDataJSON & operator=(const HomeAutomationConversationStateDataJSON &other);

    void  fromJSONCommandKind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCompactDeviceSpecifier(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFilter(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNegativeDelta(JSONValue *json_value, bool ignore_extras = false);


  public:
    HomeAutomationConversationStateDataJSON(void);
    virtual ~HomeAutomationConversationStateDataJSON(void);
    bool  hasCommandKind(void) const;
    TypeCommandKind  getCommandKind(void);
    const TypeCommandKind  getCommandKind(void) const;
    const char * getCommandKindAsChars(void) const;
    std::string  getCommandKindAsString(void) const;
    bool  hasCompactDeviceSpecifier(void) const;
    HomeAutomationCompactDeviceSpecifierJSON *  getCompactDeviceSpecifier(void);
    const HomeAutomationCompactDeviceSpecifierJSON *  getCompactDeviceSpecifier(void) const;
    bool  hasFilter(void) const;
    HomeAutomationQueryHintJSON *  getFilter(void);
    const HomeAutomationQueryHintJSON *  getFilter(void) const;
    bool  hasNegativeDelta(void) const;
    bool  getNegativeDelta(void);
    const bool  getNegativeDelta(void) const;

    virtual size_t extraHomeAutomationConversationStateDataComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHomeAutomationConversationStateDataComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHomeAutomationConversationStateDataComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHomeAutomationConversationStateDataComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHomeAutomationConversationStateDataLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHomeAutomationConversationStateDataLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setCommandKind(TypeCommandKind new_value)
      {
        flagHasCommandKind = true;
        storeCommandKind = new_value;
      }
    void setCommandKind(const char *chars)
      {
        setCommandKind(stringToCommandKind(chars));
      }
    void setCommandKind(std::string the_string)
      {
        setCommandKind(stringToCommandKind(the_string.c_str()));
      }
    void unsetCommandKind(void)
      {
        flagHasCommandKind = false;
      }
    void setCompactDeviceSpecifier(HomeAutomationCompactDeviceSpecifierJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasCompactDeviceSpecifier)
          {
            storeCompactDeviceSpecifier->remove_reference();
          }
        flagHasCompactDeviceSpecifier = true;
        storeCompactDeviceSpecifier = new_value;
      }
    void unsetCompactDeviceSpecifier(void)
      {
        if (flagHasCompactDeviceSpecifier)
          {
            storeCompactDeviceSpecifier->remove_reference();
          }
        flagHasCompactDeviceSpecifier = false;
      }
    void setFilter(HomeAutomationQueryHintJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasFilter)
          {
            storeFilter->remove_reference();
          }
        flagHasFilter = true;
        storeFilter = new_value;
      }
    void unsetFilter(void)
      {
        if (flagHasFilter)
          {
            storeFilter->remove_reference();
          }
        flagHasFilter = false;
      }
    void setNegativeDelta(bool new_value)
      {
        flagHasNegativeDelta = true;
        storeNegativeDelta = new_value;
      }
    void unsetNegativeDelta(void)
      {
        flagHasNegativeDelta = false;
      }

    virtual void extraHomeAutomationConversationStateDataAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHomeAutomationConversationStateDataSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHomeAutomationConversationStateDataLookup(key);
        if (old_field == NULL)
          {
            extraHomeAutomationConversationStateDataAppendPair(key, new_component);
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
        assert(flagHasCommandKind);
        handler->start_pair("CommandKind");
        switch (storeCommandKind)
          {
            case CommandKind_HomeAutomationControlCommand:
                handler->string_value("HomeAutomationControlCommand");
                break;
            case CommandKind_HomeAutomationListUserDataCommand:
                handler->string_value("HomeAutomationListUserDataCommand");
                break;
            case CommandKind_HomeAutomationQueryCommand:
                handler->string_value("HomeAutomationQueryCommand");
                break;
            default:
                assert(false);
          }
        assert(flagHasCompactDeviceSpecifier);
        handler->start_pair("CompactDeviceSpecifier");
        storeCompactDeviceSpecifier->write_as_json(handler);
        if (flagHasFilter)
          {
            handler->start_pair("Filter");
            storeFilter->write_as_json(handler);
          }
        if (flagHasNegativeDelta)
          {
            handler->start_pair("NegativeDelta");
            handler->boolean_value(storeNegativeDelta);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasCommandKind()))
          {
            return "When parsing the object for %what%, the \"CommandKind\" field was missing.";
          }
        if (!(hasCompactDeviceSpecifier()))
          {
            return "When parsing the object for %what%, the \"CompactDeviceSpecifier\" field was missing.";
          }
        return NULL;
      }

    static HomeAutomationConversationStateDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HomeAutomationConversationStateDataJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HomeAutomationConversationStateDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationConversationStateDataJSON>, HomeAutomationConversationStateDataJSON *, bool> generator("Type HomeAutomationConversationStateData", ignore_extras);
            parse_json_value(text, "Text for HomeAutomationConversationStateDataJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HomeAutomationConversationStateDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HomeAutomationConversationStateDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationConversationStateDataJSON>, HomeAutomationConversationStateDataJSON *, bool> generator("Type HomeAutomationConversationStateData", ignore_extras);
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
    class FieldGeneratorCommandKind : public JSONStringGenerator
          {
          protected:
            FieldGeneratorCommandKind(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorCommandKind(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToCommandKind(result));
              }
            virtual void handle_result(TypeCommandKind result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorCommandKind, TypeCommandKind, TypeCommandKind > fieldGeneratorCommandKind;
        JSONHoldingGenerator<HomeAutomationCompactDeviceSpecifierJSON::Generator, RCHandle<HomeAutomationCompactDeviceSpecifierJSON>, HomeAutomationCompactDeviceSpecifierJSON *, bool > fieldGeneratorCompactDeviceSpecifier;
        JSONHoldingGenerator<HomeAutomationQueryHintJSON::Generator, RCHandle<HomeAutomationQueryHintJSON>, HomeAutomationQueryHintJSON *, bool > fieldGeneratorFilter;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorNegativeDelta;
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
            HomeAutomationConversationStateDataJSON *result = new HomeAutomationConversationStateDataJSON();
            assert(result != NULL);
            RCHandle<HomeAutomationConversationStateDataJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHomeAutomationConversationStateDataAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(HomeAutomationConversationStateDataJSON *result)
          {
            if (fieldGeneratorCommandKind.have_value)
              {
                result->setCommandKind(fieldGeneratorCommandKind.value);
                fieldGeneratorCommandKind.have_value = false;
              }
            else if (!(result->hasCommandKind()))
              {
                error("When parsing the object for %what%, the \"CommandKind\" field was missing.");
              }
            if (fieldGeneratorCompactDeviceSpecifier.have_value)
              {
                result->setCompactDeviceSpecifier(fieldGeneratorCompactDeviceSpecifier.value.referenced());
                fieldGeneratorCompactDeviceSpecifier.have_value = false;
              }
            else if (!(result->hasCompactDeviceSpecifier()))
              {
                error("When parsing the object for %what%, the \"CompactDeviceSpecifier\" field was missing.");
              }
            if (fieldGeneratorFilter.have_value)
              {
                result->setFilter(fieldGeneratorFilter.value.referenced());
                fieldGeneratorFilter.have_value = false;
              }
            if (fieldGeneratorNegativeDelta.have_value)
              {
                result->setNegativeDelta(fieldGeneratorNegativeDelta.value);
                fieldGeneratorNegativeDelta.have_value = false;
              }
          }
        virtual void handle_result(HomeAutomationConversationStateDataJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strncmp(&(field_name[1]), "om", 2) == 0)
                      {
                        switch ((unsigned char)(field_name[3]))
                          {
                            case 'm':
                                if (strcmp(&(field_name[4]), "andKind") == 0)
                                    return &fieldGeneratorCommandKind;
                                break;
                            case 'p':
                                if (strcmp(&(field_name[4]), "actDeviceSpecifier") == 0)
                                    return &fieldGeneratorCompactDeviceSpecifier;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'F':
                    if (strcmp(&(field_name[1]), "ilter") == 0)
                        return &fieldGeneratorFilter;
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "egativeDelta") == 0)
                        return &fieldGeneratorNegativeDelta;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorCommandKind("field \"CommandKind\" of the HomeAutomationConversationStateData class"), fieldGeneratorCompactDeviceSpecifier("field \"CompactDeviceSpecifier\" of the HomeAutomationConversationStateData class", ignore_extras), fieldGeneratorFilter("field \"Filter\" of the HomeAutomationConversationStateData class", ignore_extras), fieldGeneratorNegativeDelta("field \"NegativeDelta\" of the HomeAutomationConversationStateData class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HomeAutomationConversationStateData class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorCommandKind.reset();
            fieldGeneratorCompactDeviceSpecifier.reset();
            fieldGeneratorFilter.reset();
            fieldGeneratorNegativeDelta.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HOMEAUTOMATIONCONVERSATIONSTATEDATAJSON_H */
