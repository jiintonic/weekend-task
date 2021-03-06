/* file "HomeAutomationMovementStatusJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOMEAUTOMATIONMOVEMENTSTATUSJSON_H
#define HOMEAUTOMATIONMOVEMENTSTATUSJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HomeAutomationMovementStatusJSON : public ReferenceCounted
  {
  public:
    enum TypeRecentStatusKnownValues
      {
        RecentStatus_NoMovementDetected,
        RecentStatus_MovementDetected,
        RecentStatus__none
      };
    struct TypeRecentStatus
      {
        bool in_known_list;
        std::string string_value;
        TypeRecentStatusKnownValues list_value;

        TypeRecentStatus(void);
        TypeRecentStatus(const TypeRecentStatus &other);
        TypeRecentStatus(TypeRecentStatusKnownValues other);
        bool  operator==(const TypeRecentStatus &other) const;
        bool  operator!=(const TypeRecentStatus &other) const;
        bool  operator<(const TypeRecentStatus &other) const;
        bool  operator>(const TypeRecentStatus &other) const;
        bool  operator>=(const TypeRecentStatus &other) const;
        bool  operator<=(const TypeRecentStatus &other) const;

      };

    static TypeRecentStatusKnownValues  stringToRecentStatus(const char *chars);
    static const char * stringFromRecentStatus(TypeRecentStatusKnownValues the_enum);

  private:
    bool flagHasRecentStatus;
    TypeRecentStatus storeRecentStatus;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HomeAutomationMovementStatusJSON(const HomeAutomationMovementStatusJSON &);
    HomeAutomationMovementStatusJSON & operator=(const HomeAutomationMovementStatusJSON &other);

    void  fromJSONRecentStatus(JSONValue *json_value, bool ignore_extras = false);


  public:
    HomeAutomationMovementStatusJSON(void);
    virtual ~HomeAutomationMovementStatusJSON(void);
    bool  hasRecentStatus(void) const;
    TypeRecentStatus  getRecentStatus(void);
    const TypeRecentStatus  getRecentStatus(void) const;
    const char * getRecentStatusAsChars(void) const;
    std::string  getRecentStatusAsString(void) const;

    virtual size_t extraHomeAutomationMovementStatusComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHomeAutomationMovementStatusComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHomeAutomationMovementStatusComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHomeAutomationMovementStatusComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHomeAutomationMovementStatusLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHomeAutomationMovementStatusLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setRecentStatus(TypeRecentStatus new_value)
      {
        flagHasRecentStatus = true;
        storeRecentStatus = new_value;
      }
    void setRecentStatus(const char *chars)
      {
        TypeRecentStatusKnownValues known = stringToRecentStatus(chars);
        TypeRecentStatus new_value;
        if (known == RecentStatus__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setRecentStatus(new_value);
      }
    void setRecentStatus(std::string the_string)
      {
        setRecentStatus(the_string.c_str());
      }
    void setRecentStatus(TypeRecentStatusKnownValues new_value)
      {
        TypeRecentStatus new_full_value;
        assert(new_value != RecentStatus__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setRecentStatus(new_full_value);
      }
    void unsetRecentStatus(void)
      {
        flagHasRecentStatus = false;
      }

    virtual void extraHomeAutomationMovementStatusAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHomeAutomationMovementStatusSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHomeAutomationMovementStatusLookup(key);
        if (old_field == NULL)
          {
            extraHomeAutomationMovementStatusAppendPair(key, new_component);
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
        if (flagHasRecentStatus)
          {
            handler->start_pair("RecentStatus");
            if (storeRecentStatus.in_known_list)
              {
                switch (storeRecentStatus.list_value)
                  {
                    case RecentStatus_NoMovementDetected:
                        handler->string_value("NoMovementDetected");
                        break;
                    case RecentStatus_MovementDetected:
                        handler->string_value("MovementDetected");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeRecentStatus.string_value);
              }
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static HomeAutomationMovementStatusJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HomeAutomationMovementStatusJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HomeAutomationMovementStatusJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationMovementStatusJSON>, HomeAutomationMovementStatusJSON *, bool> generator("Type HomeAutomationMovementStatus", ignore_extras);
            parse_json_value(text, "Text for HomeAutomationMovementStatusJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HomeAutomationMovementStatusJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HomeAutomationMovementStatusJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationMovementStatusJSON>, HomeAutomationMovementStatusJSON *, bool> generator("Type HomeAutomationMovementStatus", ignore_extras);
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
    class FieldGeneratorRecentStatus : public JSONStringGenerator
          {
          protected:
            FieldGeneratorRecentStatus(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorRecentStatus(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeRecentStatusKnownValues known = stringToRecentStatus(result);
                TypeRecentStatus new_value;
                if (known == RecentStatus__none)
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
            virtual void handle_result(TypeRecentStatus result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorRecentStatus, TypeRecentStatus, TypeRecentStatus > fieldGeneratorRecentStatus;
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
            HomeAutomationMovementStatusJSON *result = new HomeAutomationMovementStatusJSON();
            assert(result != NULL);
            RCHandle<HomeAutomationMovementStatusJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHomeAutomationMovementStatusAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(HomeAutomationMovementStatusJSON *result)
          {
            if (fieldGeneratorRecentStatus.have_value)
              {
                result->setRecentStatus(fieldGeneratorRecentStatus.value);
                fieldGeneratorRecentStatus.have_value = false;
              }
          }
        virtual void handle_result(HomeAutomationMovementStatusJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "RecentStatus") == 0)
                return &fieldGeneratorRecentStatus;
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorRecentStatus("field \"RecentStatus\" of the HomeAutomationMovementStatus class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HomeAutomationMovementStatus class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorRecentStatus.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HOMEAUTOMATIONMOVEMENTSTATUSJSON_H */
