/* file "DescriptiveTextTemplateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef DESCRIPTIVETEXTTEMPLATEJSON_H
#define DESCRIPTIVETEXTTEMPLATEJSON_H

#pragma interface

#include "TemplateJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include <string>
#include "AndroidIntentJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class DescriptiveTextTemplateJSON : public TemplateJSON
  {
  private:
    bool flagHasTitle;
    std::string storeTitle;
    bool flagHasSecondaryTitle;
    std::string storeSecondaryTitle;
    bool flagHasSection1;
    std::string storeSection1;
    bool flagHasSection2;
    std::string storeSection2;
    bool flagHasFooter;
    std::string storeFooter;
    bool flagHasActionAndroidIntent;
    AndroidIntentJSON * storeActionAndroidIntent;
    bool flagHasActionURIs;
    std::vector< std::string > storeActionURIs;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    DescriptiveTextTemplateJSON(const DescriptiveTextTemplateJSON &);
    DescriptiveTextTemplateJSON & operator=(const DescriptiveTextTemplateJSON &other);

    JSONValue * extraTitleToJSON(void) const;
    JSONValue * extraSecondaryTitleToJSON(void) const;
    JSONValue * extraSection1ToJSON(void) const;
    JSONValue * extraSection2ToJSON(void) const;
    JSONValue * extraFooterToJSON(void) const;
    JSONValue * extraActionAndroidIntentToJSON(void) const;
    JSONValue * extraActionURIsToJSON(void) const;

    void  fromJSONTitle(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSecondaryTitle(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSection1(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSection2(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFooter(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONActionAndroidIntent(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONActionURIs(JSONValue *json_value, bool ignore_extras = false);


  public:
    DescriptiveTextTemplateJSON(void);
    virtual ~DescriptiveTextTemplateJSON(void);
    const char * getTemplateName(void) const;
    bool  hasTitle(void) const;
    std::string  getTitle(void);
    const std::string  getTitle(void) const;
    bool  hasSecondaryTitle(void) const;
    std::string  getSecondaryTitle(void);
    const std::string  getSecondaryTitle(void) const;
    bool  hasSection1(void) const;
    std::string  getSection1(void);
    const std::string  getSection1(void) const;
    bool  hasSection2(void) const;
    std::string  getSection2(void);
    const std::string  getSection2(void) const;
    bool  hasFooter(void) const;
    std::string  getFooter(void);
    const std::string  getFooter(void) const;
    bool  hasActionAndroidIntent(void) const;
    AndroidIntentJSON *  getActionAndroidIntent(void);
    const AndroidIntentJSON *  getActionAndroidIntent(void) const;
    bool  hasActionURIs(void) const;
    size_t  countOfActionURIs(void) const;
    std::string  elementOfActionURIs(size_t element_num);
    const std::string  elementOfActionURIs(size_t element_num) const;
    std::vector< std::string >  getActionURIs(void);
    const std::vector< std::string >  getActionURIs(void) const;

    virtual size_t extraDescriptiveTextTemplateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraDescriptiveTextTemplateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraDescriptiveTextTemplateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraDescriptiveTextTemplateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraDescriptiveTextTemplateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraDescriptiveTextTemplateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraTemplateComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasTitle)
            ++result;
        if (flagHasSecondaryTitle)
            ++result;
        if (flagHasSection1)
            ++result;
        if (flagHasSection2)
            ++result;
        if (flagHasFooter)
            ++result;
        if (flagHasActionAndroidIntent)
            ++result;
        if (flagHasActionURIs)
            ++result;
        result += extraDescriptiveTextTemplateComponentCount();
        return result;
      }
    const char *extraTemplateComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasTitle)
          {
            if (remainder == 0)
                return "Title";
            --remainder;
          }
        if (flagHasSecondaryTitle)
          {
            if (remainder == 0)
                return "SecondaryTitle";
            --remainder;
          }
        if (flagHasSection1)
          {
            if (remainder == 0)
                return "Section1";
            --remainder;
          }
        if (flagHasSection2)
          {
            if (remainder == 0)
                return "Section2";
            --remainder;
          }
        if (flagHasFooter)
          {
            if (remainder == 0)
                return "Footer";
            --remainder;
          }
        if (flagHasActionAndroidIntent)
          {
            if (remainder == 0)
                return "ActionAndroidIntent";
            --remainder;
          }
        if (flagHasActionURIs)
          {
            if (remainder == 0)
                return "ActionURIs";
            --remainder;
          }
        return extraDescriptiveTextTemplateComponentKey(remainder);
      }
    JSONValue *extraTemplateComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasTitle)
          {
            if (remainder == 0)
                return extraTitleToJSON();
            --remainder;
          }
        if (flagHasSecondaryTitle)
          {
            if (remainder == 0)
                return extraSecondaryTitleToJSON();
            --remainder;
          }
        if (flagHasSection1)
          {
            if (remainder == 0)
                return extraSection1ToJSON();
            --remainder;
          }
        if (flagHasSection2)
          {
            if (remainder == 0)
                return extraSection2ToJSON();
            --remainder;
          }
        if (flagHasFooter)
          {
            if (remainder == 0)
                return extraFooterToJSON();
            --remainder;
          }
        if (flagHasActionAndroidIntent)
          {
            if (remainder == 0)
                return extraActionAndroidIntentToJSON();
            --remainder;
          }
        if (flagHasActionURIs)
          {
            if (remainder == 0)
                return extraActionURIsToJSON();
            --remainder;
          }
        return extraDescriptiveTextTemplateComponentValue(remainder);
      }
    const JSONValue *extraTemplateComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasTitle)
          {
            if (remainder == 0)
                return extraTitleToJSON();
            --remainder;
          }
        if (flagHasSecondaryTitle)
          {
            if (remainder == 0)
                return extraSecondaryTitleToJSON();
            --remainder;
          }
        if (flagHasSection1)
          {
            if (remainder == 0)
                return extraSection1ToJSON();
            --remainder;
          }
        if (flagHasSection2)
          {
            if (remainder == 0)
                return extraSection2ToJSON();
            --remainder;
          }
        if (flagHasFooter)
          {
            if (remainder == 0)
                return extraFooterToJSON();
            --remainder;
          }
        if (flagHasActionAndroidIntent)
          {
            if (remainder == 0)
                return extraActionAndroidIntentToJSON();
            --remainder;
          }
        if (flagHasActionURIs)
          {
            if (remainder == 0)
                return extraActionURIsToJSON();
            --remainder;
          }
        return extraDescriptiveTextTemplateComponentValue(remainder);
      }
    JSONValue *extraTemplateLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strncmp(&(field_name[1]), "ction", 5) == 0)
                  {
                    switch ((unsigned char)(field_name[6]))
                      {
                        case 'A':
                            if (strcmp(&(field_name[7]), "ndroidIntent") == 0)
                                return (flagHasActionAndroidIntent ? extraActionAndroidIntentToJSON() : NULL);
                            break;
                        case 'U':
                            if (strcmp(&(field_name[7]), "RIs") == 0)
                                return (flagHasActionURIs ? extraActionURIsToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'F':
                if (strcmp(&(field_name[1]), "ooter") == 0)
                    return (flagHasFooter ? extraFooterToJSON() : NULL);
                break;
            case 'S':
                if (strncmp(&(field_name[1]), "ec", 2) == 0)
                  {
                    switch ((unsigned char)(field_name[3]))
                      {
                        case 'o':
                            if (strcmp(&(field_name[4]), "ndaryTitle") == 0)
                                return (flagHasSecondaryTitle ? extraSecondaryTitleToJSON() : NULL);
                            break;
                        case 't':
                            if (strncmp(&(field_name[4]), "ion", 3) == 0)
                              {
                                switch ((unsigned char)(field_name[7]))
                                  {
                                    case '1':
                                        if (field_name[8] == 0)
                                            return (flagHasSection1 ? extraSection1ToJSON() : NULL);
                                        break;
                                    case '2':
                                        if (field_name[8] == 0)
                                            return (flagHasSection2 ? extraSection2ToJSON() : NULL);
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'T':
                if (strcmp(&(field_name[1]), "itle") == 0)
                    return (flagHasTitle ? extraTitleToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraDescriptiveTextTemplateLookup(field_name);
      }
    const JSONValue *extraTemplateLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strncmp(&(field_name[1]), "ction", 5) == 0)
                  {
                    switch ((unsigned char)(field_name[6]))
                      {
                        case 'A':
                            if (strcmp(&(field_name[7]), "ndroidIntent") == 0)
                                return (flagHasActionAndroidIntent ? extraActionAndroidIntentToJSON() : NULL);
                            break;
                        case 'U':
                            if (strcmp(&(field_name[7]), "RIs") == 0)
                                return (flagHasActionURIs ? extraActionURIsToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'F':
                if (strcmp(&(field_name[1]), "ooter") == 0)
                    return (flagHasFooter ? extraFooterToJSON() : NULL);
                break;
            case 'S':
                if (strncmp(&(field_name[1]), "ec", 2) == 0)
                  {
                    switch ((unsigned char)(field_name[3]))
                      {
                        case 'o':
                            if (strcmp(&(field_name[4]), "ndaryTitle") == 0)
                                return (flagHasSecondaryTitle ? extraSecondaryTitleToJSON() : NULL);
                            break;
                        case 't':
                            if (strncmp(&(field_name[4]), "ion", 3) == 0)
                              {
                                switch ((unsigned char)(field_name[7]))
                                  {
                                    case '1':
                                        if (field_name[8] == 0)
                                            return (flagHasSection1 ? extraSection1ToJSON() : NULL);
                                        break;
                                    case '2':
                                        if (field_name[8] == 0)
                                            return (flagHasSection2 ? extraSection2ToJSON() : NULL);
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'T':
                if (strcmp(&(field_name[1]), "itle") == 0)
                    return (flagHasTitle ? extraTitleToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraDescriptiveTextTemplateLookup(field_name);
      }

    void setTitle(std::string new_value)
      {
        flagHasTitle = true;
        storeTitle = new_value;
      }
    void unsetTitle(void)
      {
        flagHasTitle = false;
      }
    void setSecondaryTitle(std::string new_value)
      {
        flagHasSecondaryTitle = true;
        storeSecondaryTitle = new_value;
      }
    void unsetSecondaryTitle(void)
      {
        flagHasSecondaryTitle = false;
      }
    void setSection1(std::string new_value)
      {
        flagHasSection1 = true;
        storeSection1 = new_value;
      }
    void unsetSection1(void)
      {
        flagHasSection1 = false;
      }
    void setSection2(std::string new_value)
      {
        flagHasSection2 = true;
        storeSection2 = new_value;
      }
    void unsetSection2(void)
      {
        flagHasSection2 = false;
      }
    void setFooter(std::string new_value)
      {
        flagHasFooter = true;
        storeFooter = new_value;
      }
    void unsetFooter(void)
      {
        flagHasFooter = false;
      }
    void setActionAndroidIntent(AndroidIntentJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasActionAndroidIntent)
          {
            storeActionAndroidIntent->remove_reference();
          }
        flagHasActionAndroidIntent = true;
        storeActionAndroidIntent = new_value;
      }
    void unsetActionAndroidIntent(void)
      {
        if (flagHasActionAndroidIntent)
          {
            storeActionAndroidIntent->remove_reference();
          }
        flagHasActionAndroidIntent = false;
      }
    void initActionURIs(void)
      {
        flagHasActionURIs = true;
        storeActionURIs.clear();
      }
    void appendActionURIs(std::string to_append)
      {
        if (!flagHasActionURIs)
          {
            flagHasActionURIs = true;
            storeActionURIs.clear();
          }
        assert(flagHasActionURIs);
        storeActionURIs.push_back(to_append);
      }
    void unsetActionURIs(void)
      {
        flagHasActionURIs = false;
        storeActionURIs.clear();
      }

    virtual void extraDescriptiveTextTemplateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraDescriptiveTextTemplateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraDescriptiveTextTemplateLookup(key);
        if (old_field == NULL)
          {
            extraDescriptiveTextTemplateAppendPair(key, new_component);
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
    void extraTemplateAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                if (strncmp(&(key[1]), "ction", 5) == 0)
                  {
                    switch ((unsigned char)(key[6]))
                      {
                        case 'A':
                            if (strcmp(&(key[7]), "ndroidIntent") == 0)
                                {
                                fromJSONActionAndroidIntent(new_component, false);
                                return;
                                }
                            break;
                        case 'U':
                            if (strcmp(&(key[7]), "RIs") == 0)
                                {
                                fromJSONActionURIs(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'F':
                if (strcmp(&(key[1]), "ooter") == 0)
                    {
                    fromJSONFooter(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strncmp(&(key[1]), "ec", 2) == 0)
                  {
                    switch ((unsigned char)(key[3]))
                      {
                        case 'o':
                            if (strcmp(&(key[4]), "ndaryTitle") == 0)
                                {
                                fromJSONSecondaryTitle(new_component, false);
                                return;
                                }
                            break;
                        case 't':
                            if (strncmp(&(key[4]), "ion", 3) == 0)
                              {
                                switch ((unsigned char)(key[7]))
                                  {
                                    case '1':
                                        if (key[8] == 0)
                                            {
                                            fromJSONSection1(new_component, false);
                                            return;
                                            }
                                        break;
                                    case '2':
                                        if (key[8] == 0)
                                            {
                                            fromJSONSection2(new_component, false);
                                            return;
                                            }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'T':
                if (strcmp(&(key[1]), "itle") == 0)
                    {
                    fromJSONTitle(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraDescriptiveTextTemplateAppendPair(key, new_component);
      }
    void extraTemplateSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                if (strncmp(&(key[1]), "ction", 5) == 0)
                  {
                    switch ((unsigned char)(key[6]))
                      {
                        case 'A':
                            if (strcmp(&(key[7]), "ndroidIntent") == 0)
                                {
                                fromJSONActionAndroidIntent(new_component, false);
                                return;
                                }
                            break;
                        case 'U':
                            if (strcmp(&(key[7]), "RIs") == 0)
                                {
                                fromJSONActionURIs(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'F':
                if (strcmp(&(key[1]), "ooter") == 0)
                    {
                    fromJSONFooter(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strncmp(&(key[1]), "ec", 2) == 0)
                  {
                    switch ((unsigned char)(key[3]))
                      {
                        case 'o':
                            if (strcmp(&(key[4]), "ndaryTitle") == 0)
                                {
                                fromJSONSecondaryTitle(new_component, false);
                                return;
                                }
                            break;
                        case 't':
                            if (strncmp(&(key[4]), "ion", 3) == 0)
                              {
                                switch ((unsigned char)(key[7]))
                                  {
                                    case '1':
                                        if (key[8] == 0)
                                            {
                                            fromJSONSection1(new_component, false);
                                            return;
                                            }
                                        break;
                                    case '2':
                                        if (key[8] == 0)
                                            {
                                            fromJSONSection2(new_component, false);
                                            return;
                                            }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'T':
                if (strcmp(&(key[1]), "itle") == 0)
                    {
                    fromJSONTitle(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraDescriptiveTextTemplateSetField(key, new_component);
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
        TemplateJSON::write_fields_as_json(handler);
        assert(flagHasTitle);
        handler->start_pair("Title");
        handler->string_value(storeTitle);
        if (flagHasSecondaryTitle)
          {
            handler->start_pair("SecondaryTitle");
            handler->string_value(storeSecondaryTitle);
          }
        if (flagHasSection1)
          {
            handler->start_pair("Section1");
            handler->string_value(storeSection1);
          }
        if (flagHasSection2)
          {
            handler->start_pair("Section2");
            handler->string_value(storeSection2);
          }
        if (flagHasFooter)
          {
            handler->start_pair("Footer");
            handler->string_value(storeFooter);
          }
        if (flagHasActionAndroidIntent)
          {
            handler->start_pair("ActionAndroidIntent");
            storeActionAndroidIntent->write_as_json(handler);
          }
        if (flagHasActionURIs)
          {
            handler->start_pair("ActionURIs");
            assert(storeActionURIs.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeActionURIs.size(); ++num1)
              {
                handler->string_value(storeActionURIs[num1]);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasTitle()))
          {
            return "When parsing the object for %what%, the \"Title\" field was missing.";
          }
        return NULL;
      }

    static DescriptiveTextTemplateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static DescriptiveTextTemplateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        DescriptiveTextTemplateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DescriptiveTextTemplateJSON>, DescriptiveTextTemplateJSON *, bool> generator("Type DescriptiveTextTemplate", ignore_extras);
            parse_json_value(text, "Text for DescriptiveTextTemplateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static DescriptiveTextTemplateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        DescriptiveTextTemplateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DescriptiveTextTemplateJSON>, DescriptiveTextTemplateJSON *, bool> generator("Type DescriptiveTextTemplate", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public TemplateJSON::Generator
      {
      private:
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTitle;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSecondaryTitle;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSection1;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSection2;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorFooter;
        JSONHoldingGenerator<AndroidIntentJSON::Generator, RCHandle<AndroidIntentJSON>, AndroidIntentJSON *, bool > fieldGeneratorActionAndroidIntent;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorActionURIs;
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
            if (!(strcmp(getTemplateJSONKey().c_str(), "DescriptiveText") == 0))
                throw("The key field has a value other than `DescriptiveText'.");
            DescriptiveTextTemplateJSON *result = new DescriptiveTextTemplateJSON();
            assert(result != NULL);
            RCHandle<DescriptiveTextTemplateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraDescriptiveTextTemplateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(TemplateJSON *new_result)
          {
            handle_result((DescriptiveTextTemplateJSON *)new_result);
          }
        void finish(DescriptiveTextTemplateJSON *result)
          {
            if (fieldGeneratorTitle.have_value)
              {
                result->setTitle(fieldGeneratorTitle.value);
                fieldGeneratorTitle.have_value = false;
              }
            else if (!(result->hasTitle()))
              {
                error("When parsing the object for %what%, the \"Title\" field was missing.");
              }
            if (fieldGeneratorSecondaryTitle.have_value)
              {
                result->setSecondaryTitle(fieldGeneratorSecondaryTitle.value);
                fieldGeneratorSecondaryTitle.have_value = false;
              }
            if (fieldGeneratorSection1.have_value)
              {
                result->setSection1(fieldGeneratorSection1.value);
                fieldGeneratorSection1.have_value = false;
              }
            if (fieldGeneratorSection2.have_value)
              {
                result->setSection2(fieldGeneratorSection2.value);
                fieldGeneratorSection2.have_value = false;
              }
            if (fieldGeneratorFooter.have_value)
              {
                result->setFooter(fieldGeneratorFooter.value);
                fieldGeneratorFooter.have_value = false;
              }
            if (fieldGeneratorActionAndroidIntent.have_value)
              {
                result->setActionAndroidIntent(fieldGeneratorActionAndroidIntent.value.referenced());
                fieldGeneratorActionAndroidIntent.have_value = false;
              }
            if (fieldGeneratorActionURIs.have_value)
              {
                result->initActionURIs();
                size_t count = fieldGeneratorActionURIs.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendActionURIs(fieldGeneratorActionURIs.value[num]);
                  }
                fieldGeneratorActionURIs.value.clear();
                fieldGeneratorActionURIs.have_value = false;
              }
            TemplateJSON::Generator::finish(result);
          }
        virtual void handle_result(DescriptiveTextTemplateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strncmp(&(field_name[1]), "ction", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 'A':
                                if (strcmp(&(field_name[7]), "ndroidIntent") == 0)
                                    return &fieldGeneratorActionAndroidIntent;
                                break;
                            case 'U':
                                if (strcmp(&(field_name[7]), "RIs") == 0)
                                    return &fieldGeneratorActionURIs;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'F':
                    if (strcmp(&(field_name[1]), "ooter") == 0)
                        return &fieldGeneratorFooter;
                    break;
                case 'S':
                    if (strncmp(&(field_name[1]), "ec", 2) == 0)
                      {
                        switch ((unsigned char)(field_name[3]))
                          {
                            case 'o':
                                if (strcmp(&(field_name[4]), "ndaryTitle") == 0)
                                    return &fieldGeneratorSecondaryTitle;
                                break;
                            case 't':
                                if (strncmp(&(field_name[4]), "ion", 3) == 0)
                                  {
                                    switch ((unsigned char)(field_name[7]))
                                      {
                                        case '1':
                                            if (field_name[8] == 0)
                                                return &fieldGeneratorSection1;
                                            break;
                                        case '2':
                                            if (field_name[8] == 0)
                                                return &fieldGeneratorSection2;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "itle") == 0)
                        return &fieldGeneratorTitle;
                    break;
                default:
                    break;
              }
            return TemplateJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : TemplateJSON::Generator(ignore_extras), fieldGeneratorTitle("field \"Title\" of the DescriptiveTextTemplate class"), fieldGeneratorSecondaryTitle("field \"SecondaryTitle\" of the DescriptiveTextTemplate class"), fieldGeneratorSection1("field \"Section1\" of the DescriptiveTextTemplate class"), fieldGeneratorSection2("field \"Section2\" of the DescriptiveTextTemplate class"), fieldGeneratorFooter("field \"Footer\" of the DescriptiveTextTemplate class"), fieldGeneratorActionAndroidIntent("field \"ActionAndroidIntent\" of the DescriptiveTextTemplate class", ignore_extras), fieldGeneratorActionURIs("field \"ActionURIs\" of the DescriptiveTextTemplate class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the DescriptiveTextTemplate class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorTitle.reset();
            fieldGeneratorSecondaryTitle.reset();
            fieldGeneratorSection1.reset();
            fieldGeneratorSection2.reset();
            fieldGeneratorFooter.reset();
            fieldGeneratorActionAndroidIntent.reset();
            fieldGeneratorActionURIs.reset();
            TemplateJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* DESCRIPTIVETEXTTEMPLATEJSON_H */
