/* file "WikipediaConversationStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef WIKIPEDIACONVERSATIONSTATEJSON_H
#define WIKIPEDIACONVERSATIONSTATEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerUnboundRangeGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
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


class WikipediaConversationStateJSON : public ReferenceCounted
  {
  public:
    class TypeEntriesJSON : public ReferenceCounted
      {
      private:
        bool flagHasURI;
        std::string storeURI;
        bool flagHasOriginalID;
        OInteger storeOriginalID;
        bool flagHasResolvedID;
        OInteger storeResolvedID;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeEntriesJSON(const TypeEntriesJSON &);
        TypeEntriesJSON & operator=(const TypeEntriesJSON &other);

        void  fromJSONURI(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONOriginalID(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONResolvedID(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeEntriesJSON(void);
        virtual ~TypeEntriesJSON(void);
        bool  hasURI(void) const;
        std::string  getURI(void);
        const std::string  getURI(void) const;
        bool  hasOriginalID(void) const;
        OInteger  getOriginalID(void);
        const OInteger  getOriginalID(void) const;
        bool  hasResolvedID(void) const;
        OInteger  getResolvedID(void);
        const OInteger  getResolvedID(void) const;

        virtual size_t extraTypeEntriesComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeEntriesComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeEntriesComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeEntriesComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeEntriesLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeEntriesLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setURI(std::string new_value)
          {
            flagHasURI = true;
            storeURI = new_value;
          }
        void unsetURI(void)
          {
            flagHasURI = false;
          }
        void setOriginalID(OInteger new_value)
          {
            flagHasOriginalID = true;
            storeOriginalID = new_value;
          }
        void unsetOriginalID(void)
          {
            flagHasOriginalID = false;
          }
        void setResolvedID(OInteger new_value)
          {
            flagHasResolvedID = true;
            storeResolvedID = new_value;
          }
        void unsetResolvedID(void)
          {
            flagHasResolvedID = false;
          }

        virtual void extraTypeEntriesAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeEntriesSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeEntriesLookup(key);
            if (old_field == NULL)
              {
                extraTypeEntriesAppendPair(key, new_component);
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
            if (flagHasURI)
              {
                handler->start_pair("URI");
                handler->string_value(storeURI);
              }
            assert(flagHasOriginalID);
            handler->start_pair("OriginalID");
            handler->number_value(storeOriginalID.get_o_integer());
            assert(flagHasResolvedID);
            handler->start_pair("ResolvedID");
            handler->number_value(storeResolvedID.get_o_integer());
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasOriginalID()))
              {
                return "When parsing the object for %what%, the \"OriginalID\" field was missing.";
              }
            if (!(hasResolvedID()))
              {
                return "When parsing the object for %what%, the \"ResolvedID\" field was missing.";
              }
            return NULL;
          }

        static TypeEntriesJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeEntriesJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeEntriesJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeEntriesJSON>, TypeEntriesJSON *, bool> generator("Type TypeEntries", ignore_extras);
                parse_json_value(text, "Text for TypeEntriesJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeEntriesJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeEntriesJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeEntriesJSON>, TypeEntriesJSON *, bool> generator("Type TypeEntries", ignore_extras);
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorURI;
            JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorOriginalID;
            JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorResolvedID;
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
                TypeEntriesJSON *result = new TypeEntriesJSON();
                assert(result != NULL);
                RCHandle<TypeEntriesJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeEntriesAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeEntriesJSON *result)
              {
                if (fieldGeneratorURI.have_value)
                  {
                    result->setURI(fieldGeneratorURI.value);
                    fieldGeneratorURI.have_value = false;
                  }
                if (fieldGeneratorOriginalID.have_value)
                  {
                    result->setOriginalID(fieldGeneratorOriginalID.value);
                    fieldGeneratorOriginalID.have_value = false;
                  }
                else if (!(result->hasOriginalID()))
                  {
                    error("When parsing the object for %what%, the \"OriginalID\" field was missing.");
                  }
                if (fieldGeneratorResolvedID.have_value)
                  {
                    result->setResolvedID(fieldGeneratorResolvedID.value);
                    fieldGeneratorResolvedID.have_value = false;
                  }
                else if (!(result->hasResolvedID()))
                  {
                    error("When parsing the object for %what%, the \"ResolvedID\" field was missing.");
                  }
              }
            virtual void handle_result(TypeEntriesJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'O':
                        if (strcmp(&(field_name[1]), "riginalID") == 0)
                            return &fieldGeneratorOriginalID;
                        break;
                    case 'R':
                        if (strcmp(&(field_name[1]), "esolvedID") == 0)
                            return &fieldGeneratorResolvedID;
                        break;
                    case 'U':
                        if (strcmp(&(field_name[1]), "RI") == 0)
                            return &fieldGeneratorURI;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorURI("field \"URI\" of the TypeEntries class"), fieldGeneratorOriginalID("field \"OriginalID\" of the TypeEntries class"), fieldGeneratorResolvedID("field \"ResolvedID\" of the TypeEntries class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeEntries class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorURI.reset();
                fieldGeneratorOriginalID.reset();
                fieldGeneratorResolvedID.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasShortResponseOnly;
    bool storeShortResponseOnly;
    bool flagHasEntries;
    std::vector< TypeEntriesJSON * > storeEntries;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    WikipediaConversationStateJSON(const WikipediaConversationStateJSON &);
    WikipediaConversationStateJSON & operator=(const WikipediaConversationStateJSON &other);

    void  fromJSONShortResponseOnly(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEntries(JSONValue *json_value, bool ignore_extras = false);


  public:
    WikipediaConversationStateJSON(void);
    virtual ~WikipediaConversationStateJSON(void);
    bool  hasShortResponseOnly(void) const;
    bool  getShortResponseOnly(void);
    const bool  getShortResponseOnly(void) const;
    bool  hasEntries(void) const;
    size_t  countOfEntries(void) const;
    TypeEntriesJSON *  elementOfEntries(size_t element_num);
    const TypeEntriesJSON *  elementOfEntries(size_t element_num) const;
    std::vector< TypeEntriesJSON * >  getEntries(void);
    const std::vector< TypeEntriesJSON * >  getEntries(void) const;

    virtual size_t extraWikipediaConversationStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraWikipediaConversationStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraWikipediaConversationStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraWikipediaConversationStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraWikipediaConversationStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraWikipediaConversationStateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setShortResponseOnly(bool new_value)
      {
        flagHasShortResponseOnly = true;
        storeShortResponseOnly = new_value;
      }
    void unsetShortResponseOnly(void)
      {
        flagHasShortResponseOnly = false;
      }
    void initEntries(void)
      {
        if (flagHasEntries)
          {
            for (size_t num2 = 0; num2 < storeEntries.size(); ++num2)
              {
                storeEntries[num2]->remove_reference();
              }
          }
        flagHasEntries = true;
        storeEntries.clear();
      }
    void appendEntries(TypeEntriesJSON * to_append)
      {
        if (!flagHasEntries)
          {
            flagHasEntries = true;
            storeEntries.clear();
          }
        assert(flagHasEntries);
        to_append->add_reference();
        storeEntries.push_back(to_append);
      }
    void unsetEntries(void)
      {
        if (flagHasEntries)
          {
            for (size_t num3 = 0; num3 < storeEntries.size(); ++num3)
              {
                storeEntries[num3]->remove_reference();
              }
          }
        flagHasEntries = false;
        storeEntries.clear();
      }

    virtual void extraWikipediaConversationStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraWikipediaConversationStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraWikipediaConversationStateLookup(key);
        if (old_field == NULL)
          {
            extraWikipediaConversationStateAppendPair(key, new_component);
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
        if (flagHasShortResponseOnly)
          {
            handler->start_pair("ShortResponseOnly");
            handler->boolean_value(storeShortResponseOnly);
          }
        assert(flagHasEntries);
        handler->start_pair("Entries");
        assert(storeEntries.size() >= 1);
        handler->start_array();
        for (size_t num1 = 0; num1 < storeEntries.size(); ++num1)
          {
            storeEntries[num1]->write_as_json(handler);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasEntries()))
          {
            return "When parsing the object for %what%, the \"Entries\" field was missing.";
          }
        return NULL;
      }

    static WikipediaConversationStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static WikipediaConversationStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        WikipediaConversationStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<WikipediaConversationStateJSON>, WikipediaConversationStateJSON *, bool> generator("Type WikipediaConversationState", ignore_extras);
            parse_json_value(text, "Text for WikipediaConversationStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static WikipediaConversationStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        WikipediaConversationStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<WikipediaConversationStateJSON>, WikipediaConversationStateJSON *, bool> generator("Type WikipediaConversationState", ignore_extras);
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
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorShortResponseOnly;
        JSONHoldingArrayGenerator<TypeEntriesJSON::Generator, RCHandle<TypeEntriesJSON>, TypeEntriesJSON *, bool > fieldGeneratorEntries;
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
            WikipediaConversationStateJSON *result = new WikipediaConversationStateJSON();
            assert(result != NULL);
            RCHandle<WikipediaConversationStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraWikipediaConversationStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(WikipediaConversationStateJSON *result)
          {
            if (fieldGeneratorShortResponseOnly.have_value)
              {
                result->setShortResponseOnly(fieldGeneratorShortResponseOnly.value);
                fieldGeneratorShortResponseOnly.have_value = false;
              }
            if (fieldGeneratorEntries.have_value)
              {
                result->initEntries();
                size_t count = fieldGeneratorEntries.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendEntries(fieldGeneratorEntries.value[num].referenced());
                  }
                fieldGeneratorEntries.value.clear();
                fieldGeneratorEntries.have_value = false;
              }
            else if (!(result->hasEntries()))
              {
                error("When parsing the object for %what%, the \"Entries\" field was missing.");
              }
          }
        virtual void handle_result(WikipediaConversationStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'E':
                    if (strcmp(&(field_name[1]), "ntries") == 0)
                        return &fieldGeneratorEntries;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "hortResponseOnly") == 0)
                        return &fieldGeneratorShortResponseOnly;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorShortResponseOnly("field \"ShortResponseOnly\" of the WikipediaConversationState class"), fieldGeneratorEntries("field \"Entries\" of the WikipediaConversationState class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the WikipediaConversationState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorShortResponseOnly.reset();
            fieldGeneratorEntries.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* WIKIPEDIACONVERSATIONSTATEJSON_H */
