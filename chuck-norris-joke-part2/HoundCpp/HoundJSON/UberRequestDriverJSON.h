/* file "UberRequestDriverJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERREQUESTDRIVERJSON_H
#define UBERREQUESTDRIVERJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONNullGenerator.h"
#include "JSONParallelGenerator.h"
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UberRequestDriverJSON : public ReferenceCounted
  {
  public:
    struct Typepicture_url
      {
        size_t key;
        std::string choice0;
        bool choice1;
      };

  private:
    bool flagHasname;
    std::string storename;
    bool flagHasphone_number;
    std::string storephone_number;
    bool flagHasrating;
    double storerating;
    std::string textStorerating;
    bool flagHaspicture_url;
    Typepicture_url storepicture_url;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UberRequestDriverJSON(const UberRequestDriverJSON &);
    UberRequestDriverJSON & operator=(const UberRequestDriverJSON &other);

    void  fromJSONname(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONphone_number(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONrating(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONpicture_url(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberRequestDriverJSON(void);
    virtual ~UberRequestDriverJSON(void);
    bool  hasname(void) const;
    std::string  getname(void);
    const std::string  getname(void) const;
    bool  hasphone_number(void) const;
    std::string  getphone_number(void);
    const std::string  getphone_number(void) const;
    bool  hasrating(void) const;
    double  getrating(void);
    const double  getrating(void) const;
    std::string  getratingAsText(void) const;
    bool  haspicture_url(void) const;
    Typepicture_url  getpicture_url(void);
    const Typepicture_url  getpicture_url(void) const;

    virtual size_t extraUberRequestDriverComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberRequestDriverComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberRequestDriverComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberRequestDriverComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberRequestDriverLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberRequestDriverLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setname(std::string new_value)
      {
        flagHasname = true;
        storename = new_value;
      }
    void unsetname(void)
      {
        flagHasname = false;
      }
    void setphone_number(std::string new_value)
      {
        flagHasphone_number = true;
        storephone_number = new_value;
      }
    void unsetphone_number(void)
      {
        flagHasphone_number = false;
      }
    void setrating(double new_value)
      {
        flagHasrating = true;
        storerating = new_value;
        textStorerating = "";
      }
    void setratingText(std::string new_value)
      {
        flagHasrating = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field rating of UberRequestDriverJSON is not a valid number.");
        textStorerating = new_value;
      }
    void unsetrating(void)
      {
        flagHasrating = false;
      }
    void setpicture_url(Typepicture_url new_value)
      {
        flagHaspicture_url = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storepicture_url = new_value;
      }
    void unsetpicture_url(void)
      {
        flagHaspicture_url = false;
      }

    virtual void extraUberRequestDriverAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberRequestDriverSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberRequestDriverLookup(key);
        if (old_field == NULL)
          {
            extraUberRequestDriverAppendPair(key, new_component);
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
        assert(flagHasname);
        handler->start_pair("name");
        handler->string_value(storename);
        assert(flagHasphone_number);
        handler->start_pair("phone_number");
        handler->string_value(storephone_number);
        assert(flagHasrating);
        handler->start_pair("rating");
        if (textStorerating != "")
            handler->number_value(textStorerating.c_str());
        else if (((double)(long int)storerating) == storerating)
            handler->number_value((long int)storerating);
        else
            handler->number_value(storerating);
        assert(flagHaspicture_url);
        handler->start_pair("picture_url");
        switch (storepicture_url.key)
          {
            case 0:
                handler->string_value(storepicture_url.choice0);
                break;
            case 1:
                handler->null_value();
                break;
            default:
                assert(false);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasname()))
          {
            return "When parsing the object for %what%, the \"name\" field was missing.";
          }
        if (!(hasphone_number()))
          {
            return "When parsing the object for %what%, the \"phone_number\" field was missing.";
          }
        if (!(hasrating()))
          {
            return "When parsing the object for %what%, the \"rating\" field was missing.";
          }
        if (!(haspicture_url()))
          {
            return "When parsing the object for %what%, the \"picture_url\" field was missing.";
          }
        return NULL;
      }

    static UberRequestDriverJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberRequestDriverJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberRequestDriverJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberRequestDriverJSON>, UberRequestDriverJSON *, bool> generator("Type UberRequestDriver", ignore_extras);
            parse_json_value(text, "Text for UberRequestDriverJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberRequestDriverJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberRequestDriverJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberRequestDriverJSON>, UberRequestDriverJSON *, bool> generator("Type UberRequestDriver", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorname;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorphone_number;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorrating;
    class FieldGeneratorpicture_url : public JSONParallelGenerator
          {
          private:
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > field0;
            JSONHoldingGenerator<JSONNullGenerator, bool, bool > field1;
            JSONHandler *all_handlers[2];

          protected:
            size_t start(JSONHandler ***parallel_handlers_location)
              {
                *parallel_handlers_location = &(all_handlers[0]);
                return 2;
              }
            void finish(size_t winning_index)
              {
                Typepicture_url result;
                result.key = winning_index;
                switch (winning_index)
                  {
                    case 0:
                      {
                        assert(field0.have_value);
                        result.choice0 = field0.value;
                        break;
                      }
                    case 1:
                      {
                        assert(field1.have_value);
                        result.choice1 = field1.value;
                        break;
                      }
                    default:
                      {
                        assert(false);
                      }
                  }
                handle_result(result);
              }
            virtual void handle_result(Typepicture_url result) = 0;

          public:
            FieldGeneratorpicture_url(bool ignore_extras) : field0("option 0 of field \"picture_url\""), field1("option 1 of field \"picture_url\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorpicture_url(std::string what, bool ignore_extras) : field0("option 0 of field \"picture_url\""), field1("option 1 of field \"picture_url\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorpicture_url(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class Holderpicture_url
          {
          private:
            bool have_data;
            Typepicture_url data;

          public:
            Holderpicture_url(void) : have_data(false)  { }
            Holderpicture_url(Typepicture_url init_data) : have_data(true), data(init_data)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            Holderpicture_url(const Holderpicture_url &other) : have_data(other.haveData()), data(other.referenced())
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            ~Holderpicture_url(void)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }

            void operator=(const Holderpicture_url &other)
              {
                Typepicture_url new_data;
                if (other.haveData())
                  {
                    new_data = other.referenced();
                    switch (new_data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                have_data = other.haveData();
                if (have_data)
                    data = new_data;
              }
            bool haveData(void) const
              {
                return have_data;
              }
            Typepicture_url referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorpicture_url, Holderpicture_url, Typepicture_url, bool > fieldGeneratorpicture_url;
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
            UberRequestDriverJSON *result = new UberRequestDriverJSON();
            assert(result != NULL);
            RCHandle<UberRequestDriverJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberRequestDriverAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(UberRequestDriverJSON *result)
          {
            if (fieldGeneratorname.have_value)
              {
                result->setname(fieldGeneratorname.value);
                fieldGeneratorname.have_value = false;
              }
            else if (!(result->hasname()))
              {
                error("When parsing the object for %what%, the \"name\" field was missing.");
              }
            if (fieldGeneratorphone_number.have_value)
              {
                result->setphone_number(fieldGeneratorphone_number.value);
                fieldGeneratorphone_number.have_value = false;
              }
            else if (!(result->hasphone_number()))
              {
                error("When parsing the object for %what%, the \"phone_number\" field was missing.");
              }
            if (fieldGeneratorrating.have_value)
              {
                result->setratingText(fieldGeneratorrating.value);
                fieldGeneratorrating.have_value = false;
              }
            else if (!(result->hasrating()))
              {
                error("When parsing the object for %what%, the \"rating\" field was missing.");
              }
            if (fieldGeneratorpicture_url.have_value)
              {
                result->setpicture_url(fieldGeneratorpicture_url.value.referenced());
                fieldGeneratorpicture_url.have_value = false;
              }
            else if (!(result->haspicture_url()))
              {
                error("When parsing the object for %what%, the \"picture_url\" field was missing.");
              }
          }
        virtual void handle_result(UberRequestDriverJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'n':
                    if (strcmp(&(field_name[1]), "ame") == 0)
                        return &fieldGeneratorname;
                    break;
                case 'p':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'h':
                            if (strcmp(&(field_name[2]), "one_number") == 0)
                                return &fieldGeneratorphone_number;
                            break;
                        case 'i':
                            if (strcmp(&(field_name[2]), "cture_url") == 0)
                                return &fieldGeneratorpicture_url;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'r':
                    if (strcmp(&(field_name[1]), "ating") == 0)
                        return &fieldGeneratorrating;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorname("field \"name\" of the UberRequestDriver class"), fieldGeneratorphone_number("field \"phone_number\" of the UberRequestDriver class"), fieldGeneratorrating("field \"rating\" of the UberRequestDriver class"), fieldGeneratorpicture_url("field \"picture_url\" of the UberRequestDriver class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberRequestDriver class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorname.reset();
            fieldGeneratorphone_number.reset();
            fieldGeneratorrating.reset();
            fieldGeneratorpicture_url.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UBERREQUESTDRIVERJSON_H */
