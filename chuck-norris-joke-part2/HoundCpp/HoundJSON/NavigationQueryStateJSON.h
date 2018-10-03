/* file "NavigationQueryStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef NAVIGATIONQUERYSTATEJSON_H
#define NAVIGATIONQUERYSTATEJSON_H

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


class NavigationQueryStateJSON : public ReferenceCounted
  {
  public:
    enum TypeNavigationCommandKind
      {
        NavigationCommandKind_Start,
        NavigationCommandKind_NotUnderstood,
        NavigationCommandKind_Cancel
      };

    static TypeNavigationCommandKind  stringToNavigationCommandKind(const char *chars);
    static const char * stringFromNavigationCommandKind(TypeNavigationCommandKind the_enum);

  private:
    bool flagHasNavigationCommandKind;
    TypeNavigationCommandKind storeNavigationCommandKind;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    NavigationQueryStateJSON(const NavigationQueryStateJSON &);
    NavigationQueryStateJSON & operator=(const NavigationQueryStateJSON &other);

    void  fromJSONNavigationCommandKind(JSONValue *json_value, bool ignore_extras = false);


  public:
    NavigationQueryStateJSON(void);
    virtual ~NavigationQueryStateJSON(void);
    bool  hasNavigationCommandKind(void) const;
    TypeNavigationCommandKind  getNavigationCommandKind(void);
    const TypeNavigationCommandKind  getNavigationCommandKind(void) const;
    const char * getNavigationCommandKindAsChars(void) const;
    std::string  getNavigationCommandKindAsString(void) const;

    virtual size_t extraNavigationQueryStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraNavigationQueryStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraNavigationQueryStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraNavigationQueryStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraNavigationQueryStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraNavigationQueryStateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setNavigationCommandKind(TypeNavigationCommandKind new_value)
      {
        flagHasNavigationCommandKind = true;
        storeNavigationCommandKind = new_value;
      }
    void setNavigationCommandKind(const char *chars)
      {
        setNavigationCommandKind(stringToNavigationCommandKind(chars));
      }
    void setNavigationCommandKind(std::string the_string)
      {
        setNavigationCommandKind(stringToNavigationCommandKind(the_string.c_str()));
      }
    void unsetNavigationCommandKind(void)
      {
        flagHasNavigationCommandKind = false;
      }

    virtual void extraNavigationQueryStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraNavigationQueryStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraNavigationQueryStateLookup(key);
        if (old_field == NULL)
          {
            extraNavigationQueryStateAppendPair(key, new_component);
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
        assert(flagHasNavigationCommandKind);
        handler->start_pair("NavigationCommandKind");
        switch (storeNavigationCommandKind)
          {
            case NavigationCommandKind_Start:
                handler->string_value("Start");
                break;
            case NavigationCommandKind_NotUnderstood:
                handler->string_value("NotUnderstood");
                break;
            case NavigationCommandKind_Cancel:
                handler->string_value("Cancel");
                break;
            default:
                assert(false);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasNavigationCommandKind()))
          {
            return "When parsing the object for %what%, the \"NavigationCommandKind\" field was missing.";
          }
        return NULL;
      }

    static NavigationQueryStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static NavigationQueryStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        NavigationQueryStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<NavigationQueryStateJSON>, NavigationQueryStateJSON *, bool> generator("Type NavigationQueryState", ignore_extras);
            parse_json_value(text, "Text for NavigationQueryStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static NavigationQueryStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        NavigationQueryStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<NavigationQueryStateJSON>, NavigationQueryStateJSON *, bool> generator("Type NavigationQueryState", ignore_extras);
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
    class FieldGeneratorNavigationCommandKind : public JSONStringGenerator
          {
          protected:
            FieldGeneratorNavigationCommandKind(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorNavigationCommandKind(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToNavigationCommandKind(result));
              }
            virtual void handle_result(TypeNavigationCommandKind result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorNavigationCommandKind, TypeNavigationCommandKind, TypeNavigationCommandKind > fieldGeneratorNavigationCommandKind;
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
            NavigationQueryStateJSON *result = new NavigationQueryStateJSON();
            assert(result != NULL);
            RCHandle<NavigationQueryStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraNavigationQueryStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(NavigationQueryStateJSON *result)
          {
            if (fieldGeneratorNavigationCommandKind.have_value)
              {
                result->setNavigationCommandKind(fieldGeneratorNavigationCommandKind.value);
                fieldGeneratorNavigationCommandKind.have_value = false;
              }
            else if (!(result->hasNavigationCommandKind()))
              {
                error("When parsing the object for %what%, the \"NavigationCommandKind\" field was missing.");
              }
          }
        virtual void handle_result(NavigationQueryStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "NavigationCommandKind") == 0)
                return &fieldGeneratorNavigationCommandKind;
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorNavigationCommandKind("field \"NavigationCommandKind\" of the NavigationQueryState class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the NavigationQueryState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNavigationCommandKind.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* NAVIGATIONQUERYSTATEJSON_H */
