/* file "ImageCarouselTemplateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef IMAGECAROUSELTEMPLATEJSON_H
#define IMAGECAROUSELTEMPLATEJSON_H

#pragma interface

#include "TemplateJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
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


class ImageCarouselTemplateJSON : public TemplateJSON
  {
  public:
    enum TypeSize
      {
        Size_Small,
        Size_Medium,
        Size_Large
      };

    static TypeSize  stringToSize(const char *chars);
    static const char * stringFromSize(TypeSize the_enum);
    class TypeSlidesJSON : public ReferenceCounted
      {
      private:
        bool flagHasImageURL;
        std::string storeImageURL;
        bool flagHasDescription;
        std::string storeDescription;
        bool flagHasCenterCrop;
        bool storeCenterCrop;
        bool flagHasActionAndroidIntent;
        AndroidIntentJSON * storeActionAndroidIntent;
        bool flagHasActionURIs;
        std::vector< std::string > storeActionURIs;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeSlidesJSON(const TypeSlidesJSON &);
        TypeSlidesJSON & operator=(const TypeSlidesJSON &other);

        void  fromJSONImageURL(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONDescription(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONCenterCrop(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONActionAndroidIntent(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONActionURIs(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeSlidesJSON(void);
        virtual ~TypeSlidesJSON(void);
        bool  hasImageURL(void) const;
        std::string  getImageURL(void);
        const std::string  getImageURL(void) const;
        bool  hasDescription(void) const;
        std::string  getDescription(void);
        const std::string  getDescription(void) const;
        bool  hasCenterCrop(void) const;
        bool  getCenterCrop(void);
        const bool  getCenterCrop(void) const;
        bool  hasActionAndroidIntent(void) const;
        AndroidIntentJSON *  getActionAndroidIntent(void);
        const AndroidIntentJSON *  getActionAndroidIntent(void) const;
        bool  hasActionURIs(void) const;
        size_t  countOfActionURIs(void) const;
        std::string  elementOfActionURIs(size_t element_num);
        const std::string  elementOfActionURIs(size_t element_num) const;
        std::vector< std::string >  getActionURIs(void);
        const std::vector< std::string >  getActionURIs(void) const;

        virtual size_t extraTypeSlidesComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeSlidesComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeSlidesComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeSlidesComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeSlidesLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeSlidesLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setImageURL(std::string new_value)
          {
            flagHasImageURL = true;
            storeImageURL = new_value;
          }
        void unsetImageURL(void)
          {
            flagHasImageURL = false;
          }
        void setDescription(std::string new_value)
          {
            flagHasDescription = true;
            storeDescription = new_value;
          }
        void unsetDescription(void)
          {
            flagHasDescription = false;
          }
        void setCenterCrop(bool new_value)
          {
            flagHasCenterCrop = true;
            storeCenterCrop = new_value;
          }
        void unsetCenterCrop(void)
          {
            flagHasCenterCrop = false;
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

        virtual void extraTypeSlidesAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeSlidesSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeSlidesLookup(key);
            if (old_field == NULL)
              {
                extraTypeSlidesAppendPair(key, new_component);
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
            assert(flagHasImageURL);
            handler->start_pair("ImageURL");
            handler->string_value(storeImageURL);
            if (flagHasDescription)
              {
                handler->start_pair("Description");
                handler->string_value(storeDescription);
              }
            if (flagHasCenterCrop)
              {
                handler->start_pair("CenterCrop");
                handler->boolean_value(storeCenterCrop);
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
            if (!(hasImageURL()))
              {
                return "When parsing the object for %what%, the \"ImageURL\" field was missing.";
              }
            return NULL;
          }

        static TypeSlidesJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeSlidesJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeSlidesJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeSlidesJSON>, TypeSlidesJSON *, bool> generator("Type TypeSlides", ignore_extras);
                parse_json_value(text, "Text for TypeSlidesJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeSlidesJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeSlidesJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeSlidesJSON>, TypeSlidesJSON *, bool> generator("Type TypeSlides", ignore_extras);
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorImageURL;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDescription;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorCenterCrop;
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
                TypeSlidesJSON *result = new TypeSlidesJSON();
                assert(result != NULL);
                RCHandle<TypeSlidesJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeSlidesAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeSlidesJSON *result)
              {
                if (fieldGeneratorImageURL.have_value)
                  {
                    result->setImageURL(fieldGeneratorImageURL.value);
                    fieldGeneratorImageURL.have_value = false;
                  }
                else if (!(result->hasImageURL()))
                  {
                    error("When parsing the object for %what%, the \"ImageURL\" field was missing.");
                  }
                if (fieldGeneratorDescription.have_value)
                  {
                    result->setDescription(fieldGeneratorDescription.value);
                    fieldGeneratorDescription.have_value = false;
                  }
                if (fieldGeneratorCenterCrop.have_value)
                  {
                    result->setCenterCrop(fieldGeneratorCenterCrop.value);
                    fieldGeneratorCenterCrop.have_value = false;
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
              }
            virtual void handle_result(TypeSlidesJSON *new_result) = 0;
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
                    case 'C':
                        if (strcmp(&(field_name[1]), "enterCrop") == 0)
                            return &fieldGeneratorCenterCrop;
                        break;
                    case 'D':
                        if (strcmp(&(field_name[1]), "escription") == 0)
                            return &fieldGeneratorDescription;
                        break;
                    case 'I':
                        if (strcmp(&(field_name[1]), "mageURL") == 0)
                            return &fieldGeneratorImageURL;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorImageURL("field \"ImageURL\" of the TypeSlides class"), fieldGeneratorDescription("field \"Description\" of the TypeSlides class"), fieldGeneratorCenterCrop("field \"CenterCrop\" of the TypeSlides class"), fieldGeneratorActionAndroidIntent("field \"ActionAndroidIntent\" of the TypeSlides class", ignore_extras), fieldGeneratorActionURIs("field \"ActionURIs\" of the TypeSlides class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeSlides class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorImageURL.reset();
                fieldGeneratorDescription.reset();
                fieldGeneratorCenterCrop.reset();
                fieldGeneratorActionAndroidIntent.reset();
                fieldGeneratorActionURIs.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasSize;
    TypeSize storeSize;
    bool flagHasAutoScroll;
    bool storeAutoScroll;
    bool flagHasSlides;
    std::vector< TypeSlidesJSON * > storeSlides;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    ImageCarouselTemplateJSON(const ImageCarouselTemplateJSON &);
    ImageCarouselTemplateJSON & operator=(const ImageCarouselTemplateJSON &other);

    JSONValue * extraSizeToJSON(void) const;
    JSONValue * extraAutoScrollToJSON(void) const;
    JSONValue * extraSlidesToJSON(void) const;

    void  fromJSONSize(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAutoScroll(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSlides(JSONValue *json_value, bool ignore_extras = false);


  public:
    ImageCarouselTemplateJSON(void);
    virtual ~ImageCarouselTemplateJSON(void);
    const char * getTemplateName(void) const;
    bool  hasSize(void) const;
    TypeSize  getSize(void);
    const TypeSize  getSize(void) const;
    const char * getSizeAsChars(void) const;
    std::string  getSizeAsString(void) const;
    bool  hasAutoScroll(void) const;
    bool  getAutoScroll(void);
    const bool  getAutoScroll(void) const;
    bool  hasSlides(void) const;
    size_t  countOfSlides(void) const;
    TypeSlidesJSON *  elementOfSlides(size_t element_num);
    const TypeSlidesJSON *  elementOfSlides(size_t element_num) const;
    std::vector< TypeSlidesJSON * >  getSlides(void);
    const std::vector< TypeSlidesJSON * >  getSlides(void) const;

    virtual size_t extraImageCarouselTemplateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraImageCarouselTemplateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraImageCarouselTemplateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraImageCarouselTemplateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraImageCarouselTemplateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraImageCarouselTemplateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraTemplateComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasSize)
            ++result;
        if (flagHasAutoScroll)
            ++result;
        if (flagHasSlides)
            ++result;
        result += extraImageCarouselTemplateComponentCount();
        return result;
      }
    const char *extraTemplateComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasSize)
          {
            if (remainder == 0)
                return "Size";
            --remainder;
          }
        if (flagHasAutoScroll)
          {
            if (remainder == 0)
                return "AutoScroll";
            --remainder;
          }
        if (flagHasSlides)
          {
            if (remainder == 0)
                return "Slides";
            --remainder;
          }
        return extraImageCarouselTemplateComponentKey(remainder);
      }
    JSONValue *extraTemplateComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasSize)
          {
            if (remainder == 0)
                return extraSizeToJSON();
            --remainder;
          }
        if (flagHasAutoScroll)
          {
            if (remainder == 0)
                return extraAutoScrollToJSON();
            --remainder;
          }
        if (flagHasSlides)
          {
            if (remainder == 0)
                return extraSlidesToJSON();
            --remainder;
          }
        return extraImageCarouselTemplateComponentValue(remainder);
      }
    const JSONValue *extraTemplateComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasSize)
          {
            if (remainder == 0)
                return extraSizeToJSON();
            --remainder;
          }
        if (flagHasAutoScroll)
          {
            if (remainder == 0)
                return extraAutoScrollToJSON();
            --remainder;
          }
        if (flagHasSlides)
          {
            if (remainder == 0)
                return extraSlidesToJSON();
            --remainder;
          }
        return extraImageCarouselTemplateComponentValue(remainder);
      }
    JSONValue *extraTemplateLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strcmp(&(field_name[1]), "utoScroll") == 0)
                    return (flagHasAutoScroll ? extraAutoScrollToJSON() : NULL);
                break;
            case 'S':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'i':
                        if (strcmp(&(field_name[2]), "ze") == 0)
                            return (flagHasSize ? extraSizeToJSON() : NULL);
                        break;
                    case 'l':
                        if (strcmp(&(field_name[2]), "ides") == 0)
                            return (flagHasSlides ? extraSlidesToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            default:
                break;
          }
        return extraImageCarouselTemplateLookup(field_name);
      }
    const JSONValue *extraTemplateLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strcmp(&(field_name[1]), "utoScroll") == 0)
                    return (flagHasAutoScroll ? extraAutoScrollToJSON() : NULL);
                break;
            case 'S':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'i':
                        if (strcmp(&(field_name[2]), "ze") == 0)
                            return (flagHasSize ? extraSizeToJSON() : NULL);
                        break;
                    case 'l':
                        if (strcmp(&(field_name[2]), "ides") == 0)
                            return (flagHasSlides ? extraSlidesToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            default:
                break;
          }
        return extraImageCarouselTemplateLookup(field_name);
      }

    void setSize(TypeSize new_value)
      {
        flagHasSize = true;
        storeSize = new_value;
      }
    void setSize(const char *chars)
      {
        setSize(stringToSize(chars));
      }
    void setSize(std::string the_string)
      {
        setSize(stringToSize(the_string.c_str()));
      }
    void unsetSize(void)
      {
        flagHasSize = false;
      }
    void setAutoScroll(bool new_value)
      {
        flagHasAutoScroll = true;
        storeAutoScroll = new_value;
      }
    void unsetAutoScroll(void)
      {
        flagHasAutoScroll = false;
      }
    void initSlides(void)
      {
        if (flagHasSlides)
          {
            for (size_t num2 = 0; num2 < storeSlides.size(); ++num2)
              {
                storeSlides[num2]->remove_reference();
              }
          }
        flagHasSlides = true;
        storeSlides.clear();
      }
    void appendSlides(TypeSlidesJSON * to_append)
      {
        if (!flagHasSlides)
          {
            flagHasSlides = true;
            storeSlides.clear();
          }
        assert(flagHasSlides);
        to_append->add_reference();
        storeSlides.push_back(to_append);
      }
    void unsetSlides(void)
      {
        if (flagHasSlides)
          {
            for (size_t num3 = 0; num3 < storeSlides.size(); ++num3)
              {
                storeSlides[num3]->remove_reference();
              }
          }
        flagHasSlides = false;
        storeSlides.clear();
      }

    virtual void extraImageCarouselTemplateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraImageCarouselTemplateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraImageCarouselTemplateLookup(key);
        if (old_field == NULL)
          {
            extraImageCarouselTemplateAppendPair(key, new_component);
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
                if (strcmp(&(key[1]), "utoScroll") == 0)
                    {
                    fromJSONAutoScroll(new_component, false);
                    return;
                    }
                break;
            case 'S':
                switch ((unsigned char)(key[1]))
                  {
                    case 'i':
                        if (strcmp(&(key[2]), "ze") == 0)
                            {
                            fromJSONSize(new_component, false);
                            return;
                            }
                        break;
                    case 'l':
                        if (strcmp(&(key[2]), "ides") == 0)
                            {
                            fromJSONSlides(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            default:
                break;
          }
        extraImageCarouselTemplateAppendPair(key, new_component);
      }
    void extraTemplateSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                if (strcmp(&(key[1]), "utoScroll") == 0)
                    {
                    fromJSONAutoScroll(new_component, false);
                    return;
                    }
                break;
            case 'S':
                switch ((unsigned char)(key[1]))
                  {
                    case 'i':
                        if (strcmp(&(key[2]), "ze") == 0)
                            {
                            fromJSONSize(new_component, false);
                            return;
                            }
                        break;
                    case 'l':
                        if (strcmp(&(key[2]), "ides") == 0)
                            {
                            fromJSONSlides(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            default:
                break;
          }
        extraImageCarouselTemplateSetField(key, new_component);
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
        if (flagHasSize)
          {
            handler->start_pair("Size");
            switch (storeSize)
              {
                case Size_Small:
                    handler->string_value("Small");
                    break;
                case Size_Medium:
                    handler->string_value("Medium");
                    break;
                case Size_Large:
                    handler->string_value("Large");
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasAutoScroll)
          {
            handler->start_pair("AutoScroll");
            handler->boolean_value(storeAutoScroll);
          }
        if (flagHasSlides)
          {
            handler->start_pair("Slides");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeSlides.size(); ++num1)
              {
                storeSlides[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static ImageCarouselTemplateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ImageCarouselTemplateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ImageCarouselTemplateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ImageCarouselTemplateJSON>, ImageCarouselTemplateJSON *, bool> generator("Type ImageCarouselTemplate", ignore_extras);
            parse_json_value(text, "Text for ImageCarouselTemplateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ImageCarouselTemplateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ImageCarouselTemplateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ImageCarouselTemplateJSON>, ImageCarouselTemplateJSON *, bool> generator("Type ImageCarouselTemplate", ignore_extras);
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
    class FieldGeneratorSize : public JSONStringGenerator
          {
          protected:
            FieldGeneratorSize(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorSize(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToSize(result));
              }
            virtual void handle_result(TypeSize result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorSize, TypeSize, TypeSize > fieldGeneratorSize;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorAutoScroll;
        JSONHoldingArrayGenerator<TypeSlidesJSON::Generator, RCHandle<TypeSlidesJSON>, TypeSlidesJSON *, bool > fieldGeneratorSlides;
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
            if (!(strcmp(getTemplateJSONKey().c_str(), "ImageCarousel") == 0))
                throw("The key field has a value other than `ImageCarousel'.");
            ImageCarouselTemplateJSON *result = new ImageCarouselTemplateJSON();
            assert(result != NULL);
            RCHandle<ImageCarouselTemplateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraImageCarouselTemplateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(TemplateJSON *new_result)
          {
            handle_result((ImageCarouselTemplateJSON *)new_result);
          }
        void finish(ImageCarouselTemplateJSON *result)
          {
            if (fieldGeneratorSize.have_value)
              {
                result->setSize(fieldGeneratorSize.value);
                fieldGeneratorSize.have_value = false;
              }
            if (fieldGeneratorAutoScroll.have_value)
              {
                result->setAutoScroll(fieldGeneratorAutoScroll.value);
                fieldGeneratorAutoScroll.have_value = false;
              }
            if (fieldGeneratorSlides.have_value)
              {
                result->initSlides();
                size_t count = fieldGeneratorSlides.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendSlides(fieldGeneratorSlides.value[num].referenced());
                  }
                fieldGeneratorSlides.value.clear();
                fieldGeneratorSlides.have_value = false;
              }
            TemplateJSON::Generator::finish(result);
          }
        virtual void handle_result(ImageCarouselTemplateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "utoScroll") == 0)
                        return &fieldGeneratorAutoScroll;
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'i':
                            if (strcmp(&(field_name[2]), "ze") == 0)
                                return &fieldGeneratorSize;
                            break;
                        case 'l':
                            if (strcmp(&(field_name[2]), "ides") == 0)
                                return &fieldGeneratorSlides;
                            break;
                        default:
                            break;
                      }
                    break;
                default:
                    break;
              }
            return TemplateJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : TemplateJSON::Generator(ignore_extras), fieldGeneratorSize("field \"Size\" of the ImageCarouselTemplate class"), fieldGeneratorAutoScroll("field \"AutoScroll\" of the ImageCarouselTemplate class"), fieldGeneratorSlides("field \"Slides\" of the ImageCarouselTemplate class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the ImageCarouselTemplate class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorSize.reset();
            fieldGeneratorAutoScroll.reset();
            fieldGeneratorSlides.reset();
            TemplateJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* IMAGECAROUSELTEMPLATEJSON_H */
