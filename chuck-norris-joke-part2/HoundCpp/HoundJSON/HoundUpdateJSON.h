/* file "HoundUpdateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOUNDUPDATEJSON_H
#define HOUNDUPDATEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONBooleanGenerator.h"
#include "OInteger.h"
#include "CommandResultJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HoundUpdateJSON : public ReferenceCounted
  {
  public:
    enum TypeFormat
      {
        Format_HoundQueryUpdate
      };

    static TypeFormat  stringToFormat(const char *chars);
    static const char * stringFromFormat(TypeFormat the_enum);
    enum TypeFormatVersion
      {
        FormatVersion_1_x2e_0
      };

    static TypeFormatVersion  stringToFormatVersion(const char *chars);
    static const char * stringFromFormatVersion(TypeFormatVersion the_enum);

  private:
    bool flagHasFormat;
    bool flagHasFormatVersion;
    bool flagHasIndex;
    OInteger storeIndex;
    bool flagHasResult;
    CommandResultJSON * storeResult;
    bool flagHasIsFinal;
    bool storeIsFinal;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HoundUpdateJSON(const HoundUpdateJSON &);
    HoundUpdateJSON & operator=(const HoundUpdateJSON &other);

    void  fromJSONFormat(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFormatVersion(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIndex(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsFinal(JSONValue *json_value, bool ignore_extras = false);


  public:
    HoundUpdateJSON(void);
    virtual ~HoundUpdateJSON(void);
    bool  hasFormat(void) const;
    TypeFormat  getFormat(void);
    const TypeFormat  getFormat(void) const;
    const char * getFormatAsChars(void) const;
    std::string  getFormatAsString(void) const;
    bool  hasFormatVersion(void) const;
    TypeFormatVersion  getFormatVersion(void);
    const TypeFormatVersion  getFormatVersion(void) const;
    const char * getFormatVersionAsChars(void) const;
    std::string  getFormatVersionAsString(void) const;
    bool  hasIndex(void) const;
    OInteger  getIndex(void);
    const OInteger  getIndex(void) const;
    bool  hasResult(void) const;
    CommandResultJSON *  getResult(void);
    const CommandResultJSON *  getResult(void) const;
    bool  hasIsFinal(void) const;
    bool  getIsFinal(void);
    const bool  getIsFinal(void) const;

    virtual size_t extraHoundUpdateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHoundUpdateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHoundUpdateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHoundUpdateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHoundUpdateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHoundUpdateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setFormat(void)
      {
        flagHasFormat = true;
      }
    void setFormat(TypeFormat new_value)
      {
        setFormat();
      }
    void setFormat(const char *chars)
      {
        setFormat(stringToFormat(chars));
      }
    void setFormat(std::string the_string)
      {
        setFormat(stringToFormat(the_string.c_str()));
      }
    void unsetFormat(void)
      {
        flagHasFormat = false;
      }
    void setFormatVersion(void)
      {
        flagHasFormatVersion = true;
      }
    void setFormatVersion(TypeFormatVersion new_value)
      {
        setFormatVersion();
      }
    void setFormatVersion(const char *chars)
      {
        setFormatVersion(stringToFormatVersion(chars));
      }
    void setFormatVersion(std::string the_string)
      {
        setFormatVersion(stringToFormatVersion(the_string.c_str()));
      }
    void unsetFormatVersion(void)
      {
        flagHasFormatVersion = false;
      }
    void setIndex(OInteger new_value)
      {
        flagHasIndex = true;
        if (new_value < 0)
            throw("The value for field Index of HoundUpdateJSON is less than the lower bound (0) for that field.");
        storeIndex = new_value;
      }
    void unsetIndex(void)
      {
        flagHasIndex = false;
      }
    void setResult(CommandResultJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasResult)
          {
            storeResult->remove_reference();
          }
        flagHasResult = true;
        storeResult = new_value;
      }
    void unsetResult(void)
      {
        if (flagHasResult)
          {
            storeResult->remove_reference();
          }
        flagHasResult = false;
      }
    void setIsFinal(bool new_value)
      {
        flagHasIsFinal = true;
        storeIsFinal = new_value;
      }
    void unsetIsFinal(void)
      {
        flagHasIsFinal = false;
      }

    virtual void extraHoundUpdateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHoundUpdateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHoundUpdateLookup(key);
        if (old_field == NULL)
          {
            extraHoundUpdateAppendPair(key, new_component);
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
        assert(flagHasFormat);
        handler->start_pair("Format");
        handler->string_value("HoundQueryUpdate");
        assert(flagHasFormatVersion);
        handler->start_pair("FormatVersion");
        handler->string_value("1.0");
        assert(flagHasIndex);
        handler->start_pair("Index");
        handler->number_value(storeIndex.get_o_integer());
        assert(flagHasResult);
        handler->start_pair("Result");
        storeResult->write_as_json(handler);
        assert(flagHasIsFinal);
        handler->start_pair("IsFinal");
        handler->boolean_value(storeIsFinal);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasFormat()))
          {
            return "When parsing the object for %what%, the \"Format\" field was missing.";
          }
        if (!(hasFormatVersion()))
          {
            return "When parsing the object for %what%, the \"FormatVersion\" field was missing.";
          }
        if (!(hasIndex()))
          {
            return "When parsing the object for %what%, the \"Index\" field was missing.";
          }
        if (!(hasResult()))
          {
            return "When parsing the object for %what%, the \"Result\" field was missing.";
          }
        if (!(hasIsFinal()))
          {
            return "When parsing the object for %what%, the \"IsFinal\" field was missing.";
          }
        return NULL;
      }

    static HoundUpdateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HoundUpdateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HoundUpdateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HoundUpdateJSON>, HoundUpdateJSON *, bool> generator("Type HoundUpdate", ignore_extras);
            parse_json_value(text, "Text for HoundUpdateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HoundUpdateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HoundUpdateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HoundUpdateJSON>, HoundUpdateJSON *, bool> generator("Type HoundUpdate", ignore_extras);
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
    class FieldGeneratorFormat : public JSONStringGenerator
          {
          protected:
            FieldGeneratorFormat(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorFormat(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToFormat(result));
              }
            virtual void handle_result(TypeFormat result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorFormat, TypeFormat, TypeFormat > fieldGeneratorFormat;
    class FieldGeneratorFormatVersion : public JSONStringGenerator
          {
          protected:
            FieldGeneratorFormatVersion(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorFormatVersion(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToFormatVersion(result));
              }
            virtual void handle_result(TypeFormatVersion result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorFormatVersion, TypeFormatVersion, TypeFormatVersion > fieldGeneratorFormatVersion;
        static char lowerBoundIndex[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundIndex>, OInteger, o_integer > fieldGeneratorIndex;
        JSONHoldingGenerator<CommandResultJSON::Generator, RCHandle<CommandResultJSON>, CommandResultJSON *, bool > fieldGeneratorResult;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsFinal;
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
            HoundUpdateJSON *result = new HoundUpdateJSON();
            assert(result != NULL);
            RCHandle<HoundUpdateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHoundUpdateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(HoundUpdateJSON *result)
          {
            if (fieldGeneratorFormat.have_value)
              {
                result->setFormat();
                fieldGeneratorFormat.have_value = false;
              }
            else if (!(result->hasFormat()))
              {
                error("When parsing the object for %what%, the \"Format\" field was missing.");
              }
            if (fieldGeneratorFormatVersion.have_value)
              {
                result->setFormatVersion();
                fieldGeneratorFormatVersion.have_value = false;
              }
            else if (!(result->hasFormatVersion()))
              {
                error("When parsing the object for %what%, the \"FormatVersion\" field was missing.");
              }
            if (fieldGeneratorIndex.have_value)
              {
                result->setIndex(fieldGeneratorIndex.value);
                fieldGeneratorIndex.have_value = false;
              }
            else if (!(result->hasIndex()))
              {
                error("When parsing the object for %what%, the \"Index\" field was missing.");
              }
            if (fieldGeneratorResult.have_value)
              {
                result->setResult(fieldGeneratorResult.value.referenced());
                fieldGeneratorResult.have_value = false;
              }
            else if (!(result->hasResult()))
              {
                error("When parsing the object for %what%, the \"Result\" field was missing.");
              }
            if (fieldGeneratorIsFinal.have_value)
              {
                result->setIsFinal(fieldGeneratorIsFinal.value);
                fieldGeneratorIsFinal.have_value = false;
              }
            else if (!(result->hasIsFinal()))
              {
                error("When parsing the object for %what%, the \"IsFinal\" field was missing.");
              }
          }
        virtual void handle_result(HoundUpdateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'F':
                    if (strncmp(&(field_name[1]), "ormat", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 0:
                                return &fieldGeneratorFormat;
                            case 'V':
                                if (strcmp(&(field_name[7]), "ersion") == 0)
                                    return &fieldGeneratorFormatVersion;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'I':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'n':
                            if (strcmp(&(field_name[2]), "dex") == 0)
                                return &fieldGeneratorIndex;
                            break;
                        case 's':
                            if (strcmp(&(field_name[2]), "Final") == 0)
                                return &fieldGeneratorIsFinal;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "esult") == 0)
                        return &fieldGeneratorResult;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorFormat("field \"Format\" of the HoundUpdate class"), fieldGeneratorFormatVersion("field \"FormatVersion\" of the HoundUpdate class"), fieldGeneratorIndex("field \"Index\" of the HoundUpdate class"), fieldGeneratorResult("field \"Result\" of the HoundUpdate class", ignore_extras), fieldGeneratorIsFinal("field \"IsFinal\" of the HoundUpdate class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HoundUpdate class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorFormat.reset();
            fieldGeneratorFormatVersion.reset();
            fieldGeneratorIndex.reset();
            fieldGeneratorResult.reset();
            fieldGeneratorIsFinal.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HOUNDUPDATEJSON_H */
