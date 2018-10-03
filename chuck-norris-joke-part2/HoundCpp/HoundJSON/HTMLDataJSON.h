/* file "HTMLDataJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HTMLDATAJSON_H
#define HTMLDATAJSON_H

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


class HTMLDataJSON : public ReferenceCounted
  {
  public:
    class TypeHTMLHeadJSON : public ReferenceCounted
      {
      private:
        bool flagHasCSS;
        std::string storeCSS;
        bool flagHasJS;
        std::string storeJS;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeHTMLHeadJSON(const TypeHTMLHeadJSON &);
        TypeHTMLHeadJSON & operator=(const TypeHTMLHeadJSON &other);

        void  fromJSONCSS(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONJS(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeHTMLHeadJSON(void);
        virtual ~TypeHTMLHeadJSON(void);
        bool  hasCSS(void) const;
        std::string  getCSS(void);
        const std::string  getCSS(void) const;
        bool  hasJS(void) const;
        std::string  getJS(void);
        const std::string  getJS(void) const;

        virtual size_t extraTypeHTMLHeadComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeHTMLHeadComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeHTMLHeadComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeHTMLHeadComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeHTMLHeadLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeHTMLHeadLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setCSS(std::string new_value)
          {
            flagHasCSS = true;
            storeCSS = new_value;
          }
        void unsetCSS(void)
          {
            flagHasCSS = false;
          }
        void setJS(std::string new_value)
          {
            flagHasJS = true;
            storeJS = new_value;
          }
        void unsetJS(void)
          {
            flagHasJS = false;
          }

        virtual void extraTypeHTMLHeadAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeHTMLHeadSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeHTMLHeadLookup(key);
            if (old_field == NULL)
              {
                extraTypeHTMLHeadAppendPair(key, new_component);
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
            assert(flagHasCSS);
            handler->start_pair("CSS");
            handler->string_value(storeCSS);
            assert(flagHasJS);
            handler->start_pair("JS");
            handler->string_value(storeJS);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasCSS()))
              {
                return "When parsing the object for %what%, the \"CSS\" field was missing.";
              }
            if (!(hasJS()))
              {
                return "When parsing the object for %what%, the \"JS\" field was missing.";
              }
            return NULL;
          }

        static TypeHTMLHeadJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeHTMLHeadJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeHTMLHeadJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeHTMLHeadJSON>, TypeHTMLHeadJSON *, bool> generator("Type TypeHTMLHead", ignore_extras);
                parse_json_value(text, "Text for TypeHTMLHeadJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeHTMLHeadJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeHTMLHeadJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeHTMLHeadJSON>, TypeHTMLHeadJSON *, bool> generator("Type TypeHTMLHead", ignore_extras);
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCSS;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorJS;
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
                TypeHTMLHeadJSON *result = new TypeHTMLHeadJSON();
                assert(result != NULL);
                RCHandle<TypeHTMLHeadJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeHTMLHeadAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeHTMLHeadJSON *result)
              {
                if (fieldGeneratorCSS.have_value)
                  {
                    result->setCSS(fieldGeneratorCSS.value);
                    fieldGeneratorCSS.have_value = false;
                  }
                else if (!(result->hasCSS()))
                  {
                    error("When parsing the object for %what%, the \"CSS\" field was missing.");
                  }
                if (fieldGeneratorJS.have_value)
                  {
                    result->setJS(fieldGeneratorJS.value);
                    fieldGeneratorJS.have_value = false;
                  }
                else if (!(result->hasJS()))
                  {
                    error("When parsing the object for %what%, the \"JS\" field was missing.");
                  }
              }
            virtual void handle_result(TypeHTMLHeadJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'C':
                        if (strcmp(&(field_name[1]), "SS") == 0)
                            return &fieldGeneratorCSS;
                        break;
                    case 'J':
                        if (strcmp(&(field_name[1]), "S") == 0)
                            return &fieldGeneratorJS;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorCSS("field \"CSS\" of the TypeHTMLHead class"), fieldGeneratorJS("field \"JS\" of the TypeHTMLHead class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeHTMLHead class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorCSS.reset();
                fieldGeneratorJS.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasHTMLHead;
    TypeHTMLHeadJSON * storeHTMLHead;
    bool flagHasSmallScreenHTML;
    std::string storeSmallScreenHTML;
    bool flagHasLargeScreenHTML;
    std::string storeLargeScreenHTML;
    bool flagHasSmallScreenURL;
    std::string storeSmallScreenURL;
    bool flagHasLargeScreenURL;
    std::string storeLargeScreenURL;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HTMLDataJSON(const HTMLDataJSON &);
    HTMLDataJSON & operator=(const HTMLDataJSON &other);

    void  fromJSONHTMLHead(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSmallScreenHTML(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLargeScreenHTML(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSmallScreenURL(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLargeScreenURL(JSONValue *json_value, bool ignore_extras = false);


  public:
    HTMLDataJSON(void);
    virtual ~HTMLDataJSON(void);
    bool  hasHTMLHead(void) const;
    TypeHTMLHeadJSON *  getHTMLHead(void);
    const TypeHTMLHeadJSON *  getHTMLHead(void) const;
    bool  hasSmallScreenHTML(void) const;
    std::string  getSmallScreenHTML(void);
    const std::string  getSmallScreenHTML(void) const;
    bool  hasLargeScreenHTML(void) const;
    std::string  getLargeScreenHTML(void);
    const std::string  getLargeScreenHTML(void) const;
    bool  hasSmallScreenURL(void) const;
    std::string  getSmallScreenURL(void);
    const std::string  getSmallScreenURL(void) const;
    bool  hasLargeScreenURL(void) const;
    std::string  getLargeScreenURL(void);
    const std::string  getLargeScreenURL(void) const;

    virtual size_t extraHTMLDataComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHTMLDataComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHTMLDataComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHTMLDataComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHTMLDataLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHTMLDataLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setHTMLHead(TypeHTMLHeadJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasHTMLHead)
          {
            storeHTMLHead->remove_reference();
          }
        flagHasHTMLHead = true;
        storeHTMLHead = new_value;
      }
    void unsetHTMLHead(void)
      {
        if (flagHasHTMLHead)
          {
            storeHTMLHead->remove_reference();
          }
        flagHasHTMLHead = false;
      }
    void setSmallScreenHTML(std::string new_value)
      {
        flagHasSmallScreenHTML = true;
        storeSmallScreenHTML = new_value;
      }
    void unsetSmallScreenHTML(void)
      {
        flagHasSmallScreenHTML = false;
      }
    void setLargeScreenHTML(std::string new_value)
      {
        flagHasLargeScreenHTML = true;
        storeLargeScreenHTML = new_value;
      }
    void unsetLargeScreenHTML(void)
      {
        flagHasLargeScreenHTML = false;
      }
    void setSmallScreenURL(std::string new_value)
      {
        flagHasSmallScreenURL = true;
        storeSmallScreenURL = new_value;
      }
    void unsetSmallScreenURL(void)
      {
        flagHasSmallScreenURL = false;
      }
    void setLargeScreenURL(std::string new_value)
      {
        flagHasLargeScreenURL = true;
        storeLargeScreenURL = new_value;
      }
    void unsetLargeScreenURL(void)
      {
        flagHasLargeScreenURL = false;
      }

    virtual void extraHTMLDataAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHTMLDataSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHTMLDataLookup(key);
        if (old_field == NULL)
          {
            extraHTMLDataAppendPair(key, new_component);
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
        assert(flagHasHTMLHead);
        handler->start_pair("HTMLHead");
        storeHTMLHead->write_as_json(handler);
        if (flagHasSmallScreenHTML)
          {
            handler->start_pair("SmallScreenHTML");
            handler->string_value(storeSmallScreenHTML);
          }
        if (flagHasLargeScreenHTML)
          {
            handler->start_pair("LargeScreenHTML");
            handler->string_value(storeLargeScreenHTML);
          }
        if (flagHasSmallScreenURL)
          {
            handler->start_pair("SmallScreenURL");
            handler->string_value(storeSmallScreenURL);
          }
        if (flagHasLargeScreenURL)
          {
            handler->start_pair("LargeScreenURL");
            handler->string_value(storeLargeScreenURL);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasHTMLHead()))
          {
            return "When parsing the object for %what%, the \"HTMLHead\" field was missing.";
          }
        return NULL;
      }

    static HTMLDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HTMLDataJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HTMLDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HTMLDataJSON>, HTMLDataJSON *, bool> generator("Type HTMLData", ignore_extras);
            parse_json_value(text, "Text for HTMLDataJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HTMLDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HTMLDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HTMLDataJSON>, HTMLDataJSON *, bool> generator("Type HTMLData", ignore_extras);
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
        JSONHoldingGenerator<TypeHTMLHeadJSON::Generator, RCHandle<TypeHTMLHeadJSON>, TypeHTMLHeadJSON *, bool > fieldGeneratorHTMLHead;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSmallScreenHTML;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLargeScreenHTML;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSmallScreenURL;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLargeScreenURL;
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
            HTMLDataJSON *result = new HTMLDataJSON();
            assert(result != NULL);
            RCHandle<HTMLDataJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHTMLDataAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(HTMLDataJSON *result)
          {
            if (fieldGeneratorHTMLHead.have_value)
              {
                result->setHTMLHead(fieldGeneratorHTMLHead.value.referenced());
                fieldGeneratorHTMLHead.have_value = false;
              }
            else if (!(result->hasHTMLHead()))
              {
                error("When parsing the object for %what%, the \"HTMLHead\" field was missing.");
              }
            if (fieldGeneratorSmallScreenHTML.have_value)
              {
                result->setSmallScreenHTML(fieldGeneratorSmallScreenHTML.value);
                fieldGeneratorSmallScreenHTML.have_value = false;
              }
            if (fieldGeneratorLargeScreenHTML.have_value)
              {
                result->setLargeScreenHTML(fieldGeneratorLargeScreenHTML.value);
                fieldGeneratorLargeScreenHTML.have_value = false;
              }
            if (fieldGeneratorSmallScreenURL.have_value)
              {
                result->setSmallScreenURL(fieldGeneratorSmallScreenURL.value);
                fieldGeneratorSmallScreenURL.have_value = false;
              }
            if (fieldGeneratorLargeScreenURL.have_value)
              {
                result->setLargeScreenURL(fieldGeneratorLargeScreenURL.value);
                fieldGeneratorLargeScreenURL.have_value = false;
              }
          }
        virtual void handle_result(HTMLDataJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'H':
                    if (strcmp(&(field_name[1]), "TMLHead") == 0)
                        return &fieldGeneratorHTMLHead;
                    break;
                case 'L':
                    if (strncmp(&(field_name[1]), "argeScreen", 10) == 0)
                      {
                        switch ((unsigned char)(field_name[11]))
                          {
                            case 'H':
                                if (strcmp(&(field_name[12]), "TML") == 0)
                                    return &fieldGeneratorLargeScreenHTML;
                                break;
                            case 'U':
                                if (strcmp(&(field_name[12]), "RL") == 0)
                                    return &fieldGeneratorLargeScreenURL;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'S':
                    if (strncmp(&(field_name[1]), "mallScreen", 10) == 0)
                      {
                        switch ((unsigned char)(field_name[11]))
                          {
                            case 'H':
                                if (strcmp(&(field_name[12]), "TML") == 0)
                                    return &fieldGeneratorSmallScreenHTML;
                                break;
                            case 'U':
                                if (strcmp(&(field_name[12]), "RL") == 0)
                                    return &fieldGeneratorSmallScreenURL;
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
        Generator(bool ignore_extras = false) : fieldGeneratorHTMLHead("field \"HTMLHead\" of the HTMLData class", ignore_extras), fieldGeneratorSmallScreenHTML("field \"SmallScreenHTML\" of the HTMLData class"), fieldGeneratorLargeScreenHTML("field \"LargeScreenHTML\" of the HTMLData class"), fieldGeneratorSmallScreenURL("field \"SmallScreenURL\" of the HTMLData class"), fieldGeneratorLargeScreenURL("field \"LargeScreenURL\" of the HTMLData class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HTMLData class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorHTMLHead.reset();
            fieldGeneratorSmallScreenHTML.reset();
            fieldGeneratorLargeScreenHTML.reset();
            fieldGeneratorSmallScreenURL.reset();
            fieldGeneratorLargeScreenURL.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HTMLDATAJSON_H */
