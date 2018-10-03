/* file "HomeAutomationDomainSettingsJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOMEAUTOMATIONDOMAINSETTINGSJSON_H
#define HOMEAUTOMATIONDOMAINSETTINGSJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "HomeAutomationDeviceListJSON.h"
#include "HomeAutomationGroupListJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HomeAutomationDomainSettingsJSON : public ReferenceCounted
  {
  public:
    enum TypeHereBehaviorKnownValues
      {
        HereBehavior_UseHere,
        HereBehavior_AskWhenNoHere,
        HereBehavior_AskAlways,
        HereBehavior_DoNotMatch,
        HereBehavior__none
      };
    struct TypeHereBehavior
      {
        bool in_known_list;
        std::string string_value;
        TypeHereBehaviorKnownValues list_value;

        TypeHereBehavior(void);
        TypeHereBehavior(const TypeHereBehavior &other);
        TypeHereBehavior(TypeHereBehaviorKnownValues other);
        bool  operator==(const TypeHereBehavior &other) const;
        bool  operator!=(const TypeHereBehavior &other) const;
        bool  operator<(const TypeHereBehavior &other) const;
        bool  operator>(const TypeHereBehavior &other) const;
        bool  operator>=(const TypeHereBehavior &other) const;
        bool  operator<=(const TypeHereBehavior &other) const;

      };

    static TypeHereBehaviorKnownValues  stringToHereBehavior(const char *chars);
    static const char * stringFromHereBehavior(TypeHereBehaviorKnownValues the_enum);
    enum TypeAmbiguousMatchBehaviorKnownValues
      {
        AmbiguousMatchBehavior_ReturnAllMatches,
        AmbiguousMatchBehavior_AskAlways,
        AmbiguousMatchBehavior__none
      };
    struct TypeAmbiguousMatchBehavior
      {
        bool in_known_list;
        std::string string_value;
        TypeAmbiguousMatchBehaviorKnownValues list_value;

        TypeAmbiguousMatchBehavior(void);
        TypeAmbiguousMatchBehavior(const TypeAmbiguousMatchBehavior &other);
        TypeAmbiguousMatchBehavior(TypeAmbiguousMatchBehaviorKnownValues other);
        bool  operator==(const TypeAmbiguousMatchBehavior &other) const;
        bool  operator!=(const TypeAmbiguousMatchBehavior &other) const;
        bool  operator<(const TypeAmbiguousMatchBehavior &other) const;
        bool  operator>(const TypeAmbiguousMatchBehavior &other) const;
        bool  operator>=(const TypeAmbiguousMatchBehavior &other) const;
        bool  operator<=(const TypeAmbiguousMatchBehavior &other) const;

      };

    static TypeAmbiguousMatchBehaviorKnownValues  stringToAmbiguousMatchBehavior(const char *chars);
    static const char * stringFromAmbiguousMatchBehavior(TypeAmbiguousMatchBehaviorKnownValues the_enum);

  private:
    bool flagHasHereBehavior;
    TypeHereBehavior storeHereBehavior;
    bool flagHasHereDevices;
    HomeAutomationDeviceListJSON * storeHereDevices;
    bool flagHasHereGroups;
    HomeAutomationGroupListJSON * storeHereGroups;
    bool flagHasAmbiguousMatchBehavior;
    TypeAmbiguousMatchBehavior storeAmbiguousMatchBehavior;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HomeAutomationDomainSettingsJSON(const HomeAutomationDomainSettingsJSON &);
    HomeAutomationDomainSettingsJSON & operator=(const HomeAutomationDomainSettingsJSON &other);

    void  fromJSONHereBehavior(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHereDevices(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHereGroups(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAmbiguousMatchBehavior(JSONValue *json_value, bool ignore_extras = false);


  public:
    HomeAutomationDomainSettingsJSON(void);
    virtual ~HomeAutomationDomainSettingsJSON(void);
    bool  hasHereBehavior(void) const;
    TypeHereBehavior  getHereBehavior(void);
    const TypeHereBehavior  getHereBehavior(void) const;
    const char * getHereBehaviorAsChars(void) const;
    std::string  getHereBehaviorAsString(void) const;
    bool  hasHereDevices(void) const;
    HomeAutomationDeviceListJSON *  getHereDevices(void);
    const HomeAutomationDeviceListJSON *  getHereDevices(void) const;
    bool  hasHereGroups(void) const;
    HomeAutomationGroupListJSON *  getHereGroups(void);
    const HomeAutomationGroupListJSON *  getHereGroups(void) const;
    bool  hasAmbiguousMatchBehavior(void) const;
    TypeAmbiguousMatchBehavior  getAmbiguousMatchBehavior(void);
    const TypeAmbiguousMatchBehavior  getAmbiguousMatchBehavior(void) const;
    const char * getAmbiguousMatchBehaviorAsChars(void) const;
    std::string  getAmbiguousMatchBehaviorAsString(void) const;

    virtual size_t extraHomeAutomationDomainSettingsComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHomeAutomationDomainSettingsComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHomeAutomationDomainSettingsComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHomeAutomationDomainSettingsComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHomeAutomationDomainSettingsLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHomeAutomationDomainSettingsLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setHereBehavior(TypeHereBehavior new_value)
      {
        flagHasHereBehavior = true;
        storeHereBehavior = new_value;
      }
    void setHereBehavior(const char *chars)
      {
        TypeHereBehaviorKnownValues known = stringToHereBehavior(chars);
        TypeHereBehavior new_value;
        if (known == HereBehavior__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setHereBehavior(new_value);
      }
    void setHereBehavior(std::string the_string)
      {
        setHereBehavior(the_string.c_str());
      }
    void setHereBehavior(TypeHereBehaviorKnownValues new_value)
      {
        TypeHereBehavior new_full_value;
        assert(new_value != HereBehavior__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setHereBehavior(new_full_value);
      }
    void unsetHereBehavior(void)
      {
        flagHasHereBehavior = false;
      }
    void setHereDevices(HomeAutomationDeviceListJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasHereDevices)
          {
            storeHereDevices->remove_reference();
          }
        flagHasHereDevices = true;
        storeHereDevices = new_value;
      }
    void unsetHereDevices(void)
      {
        if (flagHasHereDevices)
          {
            storeHereDevices->remove_reference();
          }
        flagHasHereDevices = false;
      }
    void setHereGroups(HomeAutomationGroupListJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasHereGroups)
          {
            storeHereGroups->remove_reference();
          }
        flagHasHereGroups = true;
        storeHereGroups = new_value;
      }
    void unsetHereGroups(void)
      {
        if (flagHasHereGroups)
          {
            storeHereGroups->remove_reference();
          }
        flagHasHereGroups = false;
      }
    void setAmbiguousMatchBehavior(TypeAmbiguousMatchBehavior new_value)
      {
        flagHasAmbiguousMatchBehavior = true;
        storeAmbiguousMatchBehavior = new_value;
      }
    void setAmbiguousMatchBehavior(const char *chars)
      {
        TypeAmbiguousMatchBehaviorKnownValues known = stringToAmbiguousMatchBehavior(chars);
        TypeAmbiguousMatchBehavior new_value;
        if (known == AmbiguousMatchBehavior__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setAmbiguousMatchBehavior(new_value);
      }
    void setAmbiguousMatchBehavior(std::string the_string)
      {
        setAmbiguousMatchBehavior(the_string.c_str());
      }
    void setAmbiguousMatchBehavior(TypeAmbiguousMatchBehaviorKnownValues new_value)
      {
        TypeAmbiguousMatchBehavior new_full_value;
        assert(new_value != AmbiguousMatchBehavior__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setAmbiguousMatchBehavior(new_full_value);
      }
    void unsetAmbiguousMatchBehavior(void)
      {
        flagHasAmbiguousMatchBehavior = false;
      }

    virtual void extraHomeAutomationDomainSettingsAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHomeAutomationDomainSettingsSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHomeAutomationDomainSettingsLookup(key);
        if (old_field == NULL)
          {
            extraHomeAutomationDomainSettingsAppendPair(key, new_component);
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
        if (flagHasHereBehavior)
          {
            handler->start_pair("HereBehavior");
            if (storeHereBehavior.in_known_list)
              {
                switch (storeHereBehavior.list_value)
                  {
                    case HereBehavior_UseHere:
                        handler->string_value("UseHere");
                        break;
                    case HereBehavior_AskWhenNoHere:
                        handler->string_value("AskWhenNoHere");
                        break;
                    case HereBehavior_AskAlways:
                        handler->string_value("AskAlways");
                        break;
                    case HereBehavior_DoNotMatch:
                        handler->string_value("DoNotMatch");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeHereBehavior.string_value);
              }
          }
        if (flagHasHereDevices)
          {
            handler->start_pair("HereDevices");
            storeHereDevices->write_as_json(handler);
          }
        if (flagHasHereGroups)
          {
            handler->start_pair("HereGroups");
            storeHereGroups->write_as_json(handler);
          }
        if (flagHasAmbiguousMatchBehavior)
          {
            handler->start_pair("AmbiguousMatchBehavior");
            if (storeAmbiguousMatchBehavior.in_known_list)
              {
                switch (storeAmbiguousMatchBehavior.list_value)
                  {
                    case AmbiguousMatchBehavior_ReturnAllMatches:
                        handler->string_value("ReturnAllMatches");
                        break;
                    case AmbiguousMatchBehavior_AskAlways:
                        handler->string_value("AskAlways");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeAmbiguousMatchBehavior.string_value);
              }
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static HomeAutomationDomainSettingsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HomeAutomationDomainSettingsJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HomeAutomationDomainSettingsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationDomainSettingsJSON>, HomeAutomationDomainSettingsJSON *, bool> generator("Type HomeAutomationDomainSettings", ignore_extras);
            parse_json_value(text, "Text for HomeAutomationDomainSettingsJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HomeAutomationDomainSettingsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HomeAutomationDomainSettingsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationDomainSettingsJSON>, HomeAutomationDomainSettingsJSON *, bool> generator("Type HomeAutomationDomainSettings", ignore_extras);
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
    class FieldGeneratorHereBehavior : public JSONStringGenerator
          {
          protected:
            FieldGeneratorHereBehavior(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorHereBehavior(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeHereBehaviorKnownValues known = stringToHereBehavior(result);
                TypeHereBehavior new_value;
                if (known == HereBehavior__none)
                  {
                    new_value.in_known_list = false;
                    new_value.string_value = result;
                  }
                else
                  {
                    new_value.in_known_list = true;
                    new_value.list_value = known;
                  }
                handle_result(new_value);
              }
            virtual void handle_result(TypeHereBehavior result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorHereBehavior, TypeHereBehavior, TypeHereBehavior > fieldGeneratorHereBehavior;
        JSONHoldingGenerator<HomeAutomationDeviceListJSON::Generator, RCHandle<HomeAutomationDeviceListJSON>, HomeAutomationDeviceListJSON *, bool > fieldGeneratorHereDevices;
        JSONHoldingGenerator<HomeAutomationGroupListJSON::Generator, RCHandle<HomeAutomationGroupListJSON>, HomeAutomationGroupListJSON *, bool > fieldGeneratorHereGroups;
    class FieldGeneratorAmbiguousMatchBehavior : public JSONStringGenerator
          {
          protected:
            FieldGeneratorAmbiguousMatchBehavior(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorAmbiguousMatchBehavior(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeAmbiguousMatchBehaviorKnownValues known = stringToAmbiguousMatchBehavior(result);
                TypeAmbiguousMatchBehavior new_value;
                if (known == AmbiguousMatchBehavior__none)
                  {
                    new_value.in_known_list = false;
                    new_value.string_value = result;
                  }
                else
                  {
                    new_value.in_known_list = true;
                    new_value.list_value = known;
                  }
                handle_result(new_value);
              }
            virtual void handle_result(TypeAmbiguousMatchBehavior result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorAmbiguousMatchBehavior, TypeAmbiguousMatchBehavior, TypeAmbiguousMatchBehavior > fieldGeneratorAmbiguousMatchBehavior;
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
            HomeAutomationDomainSettingsJSON *result = new HomeAutomationDomainSettingsJSON();
            assert(result != NULL);
            RCHandle<HomeAutomationDomainSettingsJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHomeAutomationDomainSettingsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(HomeAutomationDomainSettingsJSON *result)
          {
            if (fieldGeneratorHereBehavior.have_value)
              {
                result->setHereBehavior(fieldGeneratorHereBehavior.value);
                fieldGeneratorHereBehavior.have_value = false;
              }
            if (fieldGeneratorHereDevices.have_value)
              {
                result->setHereDevices(fieldGeneratorHereDevices.value.referenced());
                fieldGeneratorHereDevices.have_value = false;
              }
            if (fieldGeneratorHereGroups.have_value)
              {
                result->setHereGroups(fieldGeneratorHereGroups.value.referenced());
                fieldGeneratorHereGroups.have_value = false;
              }
            if (fieldGeneratorAmbiguousMatchBehavior.have_value)
              {
                result->setAmbiguousMatchBehavior(fieldGeneratorAmbiguousMatchBehavior.value);
                fieldGeneratorAmbiguousMatchBehavior.have_value = false;
              }
          }
        virtual void handle_result(HomeAutomationDomainSettingsJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "mbiguousMatchBehavior") == 0)
                        return &fieldGeneratorAmbiguousMatchBehavior;
                    break;
                case 'H':
                    if (strncmp(&(field_name[1]), "ere", 3) == 0)
                      {
                        switch ((unsigned char)(field_name[4]))
                          {
                            case 'B':
                                if (strcmp(&(field_name[5]), "ehavior") == 0)
                                    return &fieldGeneratorHereBehavior;
                                break;
                            case 'D':
                                if (strcmp(&(field_name[5]), "evices") == 0)
                                    return &fieldGeneratorHereDevices;
                                break;
                            case 'G':
                                if (strcmp(&(field_name[5]), "roups") == 0)
                                    return &fieldGeneratorHereGroups;
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
        Generator(bool ignore_extras = false) : fieldGeneratorHereBehavior("field \"HereBehavior\" of the HomeAutomationDomainSettings class"), fieldGeneratorHereDevices("field \"HereDevices\" of the HomeAutomationDomainSettings class", ignore_extras), fieldGeneratorHereGroups("field \"HereGroups\" of the HomeAutomationDomainSettings class", ignore_extras), fieldGeneratorAmbiguousMatchBehavior("field \"AmbiguousMatchBehavior\" of the HomeAutomationDomainSettings class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HomeAutomationDomainSettings class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorHereBehavior.reset();
            fieldGeneratorHereDevices.reset();
            fieldGeneratorHereGroups.reset();
            fieldGeneratorAmbiguousMatchBehavior.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HOMEAUTOMATIONDOMAINSETTINGSJSON_H */
