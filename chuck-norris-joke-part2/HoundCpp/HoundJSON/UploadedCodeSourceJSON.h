/* file "UploadedCodeSourceJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UPLOADEDCODESOURCEJSON_H
#define UPLOADEDCODESOURCEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
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


class UploadedCodeSourceJSON : public ReferenceCounted
  {
  private:
    bool flagHasFileName;
    std::string storeFileName;
    bool flagHasStartLineNumber;
    OInteger storeStartLineNumber;
    bool flagHasStartColumnNumber;
    OInteger storeStartColumnNumber;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UploadedCodeSourceJSON(const UploadedCodeSourceJSON &);
    UploadedCodeSourceJSON & operator=(const UploadedCodeSourceJSON &other);

    void  fromJSONFileName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStartLineNumber(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStartColumnNumber(JSONValue *json_value, bool ignore_extras = false);


  public:
    UploadedCodeSourceJSON(void);
    virtual ~UploadedCodeSourceJSON(void);
    bool  hasFileName(void) const;
    std::string  getFileName(void);
    const std::string  getFileName(void) const;
    bool  hasStartLineNumber(void) const;
    OInteger  getStartLineNumber(void);
    const OInteger  getStartLineNumber(void) const;
    bool  hasStartColumnNumber(void) const;
    OInteger  getStartColumnNumber(void);
    const OInteger  getStartColumnNumber(void) const;

    virtual size_t extraUploadedCodeSourceComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUploadedCodeSourceComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUploadedCodeSourceComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUploadedCodeSourceComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUploadedCodeSourceLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUploadedCodeSourceLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setFileName(std::string new_value)
      {
        flagHasFileName = true;
        storeFileName = new_value;
      }
    void unsetFileName(void)
      {
        flagHasFileName = false;
      }
    void setStartLineNumber(OInteger new_value)
      {
        flagHasStartLineNumber = true;
        if (new_value < 1)
            throw("The value for field StartLineNumber of UploadedCodeSourceJSON is less than the lower bound (1) for that field.");
        storeStartLineNumber = new_value;
      }
    void unsetStartLineNumber(void)
      {
        flagHasStartLineNumber = false;
      }
    void setStartColumnNumber(OInteger new_value)
      {
        flagHasStartColumnNumber = true;
        if (new_value < 1)
            throw("The value for field StartColumnNumber of UploadedCodeSourceJSON is less than the lower bound (1) for that field.");
        storeStartColumnNumber = new_value;
      }
    void unsetStartColumnNumber(void)
      {
        flagHasStartColumnNumber = false;
      }

    virtual void extraUploadedCodeSourceAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUploadedCodeSourceSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUploadedCodeSourceLookup(key);
        if (old_field == NULL)
          {
            extraUploadedCodeSourceAppendPair(key, new_component);
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
        assert(flagHasFileName);
        handler->start_pair("FileName");
        handler->string_value(storeFileName);
        if (flagHasStartLineNumber)
          {
            handler->start_pair("StartLineNumber");
            handler->number_value(storeStartLineNumber.get_o_integer());
          }
        if (flagHasStartColumnNumber)
          {
            handler->start_pair("StartColumnNumber");
            handler->number_value(storeStartColumnNumber.get_o_integer());
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasFileName()))
          {
            return "When parsing the object for %what%, the \"FileName\" field was missing.";
          }
        return NULL;
      }

    static UploadedCodeSourceJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UploadedCodeSourceJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UploadedCodeSourceJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UploadedCodeSourceJSON>, UploadedCodeSourceJSON *, bool> generator("Type UploadedCodeSource", ignore_extras);
            parse_json_value(text, "Text for UploadedCodeSourceJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UploadedCodeSourceJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UploadedCodeSourceJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UploadedCodeSourceJSON>, UploadedCodeSourceJSON *, bool> generator("Type UploadedCodeSource", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorFileName;
        static char lowerBoundStartLineNumber[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundStartLineNumber>, OInteger, o_integer > fieldGeneratorStartLineNumber;
        static char lowerBoundStartColumnNumber[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundStartColumnNumber>, OInteger, o_integer > fieldGeneratorStartColumnNumber;
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
            UploadedCodeSourceJSON *result = new UploadedCodeSourceJSON();
            assert(result != NULL);
            RCHandle<UploadedCodeSourceJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUploadedCodeSourceAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(UploadedCodeSourceJSON *result)
          {
            if (fieldGeneratorFileName.have_value)
              {
                result->setFileName(fieldGeneratorFileName.value);
                fieldGeneratorFileName.have_value = false;
              }
            else if (!(result->hasFileName()))
              {
                error("When parsing the object for %what%, the \"FileName\" field was missing.");
              }
            if (fieldGeneratorStartLineNumber.have_value)
              {
                result->setStartLineNumber(fieldGeneratorStartLineNumber.value);
                fieldGeneratorStartLineNumber.have_value = false;
              }
            if (fieldGeneratorStartColumnNumber.have_value)
              {
                result->setStartColumnNumber(fieldGeneratorStartColumnNumber.value);
                fieldGeneratorStartColumnNumber.have_value = false;
              }
          }
        virtual void handle_result(UploadedCodeSourceJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'F':
                    if (strcmp(&(field_name[1]), "ileName") == 0)
                        return &fieldGeneratorFileName;
                    break;
                case 'S':
                    if (strncmp(&(field_name[1]), "tart", 4) == 0)
                      {
                        switch ((unsigned char)(field_name[5]))
                          {
                            case 'C':
                                if (strcmp(&(field_name[6]), "olumnNumber") == 0)
                                    return &fieldGeneratorStartColumnNumber;
                                break;
                            case 'L':
                                if (strcmp(&(field_name[6]), "ineNumber") == 0)
                                    return &fieldGeneratorStartLineNumber;
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
        Generator(bool ignore_extras = false) : fieldGeneratorFileName("field \"FileName\" of the UploadedCodeSource class"), fieldGeneratorStartLineNumber("field \"StartLineNumber\" of the UploadedCodeSource class"), fieldGeneratorStartColumnNumber("field \"StartColumnNumber\" of the UploadedCodeSource class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UploadedCodeSource class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorFileName.reset();
            fieldGeneratorStartLineNumber.reset();
            fieldGeneratorStartColumnNumber.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UPLOADEDCODESOURCEJSON_H */
