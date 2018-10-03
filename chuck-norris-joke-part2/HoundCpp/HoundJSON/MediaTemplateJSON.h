/* file "MediaTemplateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MEDIATEMPLATEJSON_H
#define MEDIATEMPLATEJSON_H

#pragma interface

#include "TemplateJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerRangeGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include <stdint.h>
#include "AndroidIntentJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class MediaTemplateJSON : public TemplateJSON
  {
  public:
    class TypeImageJSON : public ReferenceCounted
      {
      public:
        enum TypeShape
          {
            Shape_Rectangle,
            Shape_Square
          };

        static TypeShape  stringToShape(const char *chars);
        static const char * stringFromShape(TypeShape the_enum);
        enum TypeSize
          {
            Size_Small,
            Size_Medium
          };

        static TypeSize  stringToSize(const char *chars);
        static const char * stringFromSize(TypeSize the_enum);

      private:
        bool flagHasURL;
        std::string storeURL;
        bool flagHasShape;
        TypeShape storeShape;
        bool flagHasSize;
        TypeSize storeSize;
        bool flagHasCenterCrop;
        bool storeCenterCrop;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeImageJSON(const TypeImageJSON &);
        TypeImageJSON & operator=(const TypeImageJSON &other);

        void  fromJSONURL(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONShape(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONSize(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONCenterCrop(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeImageJSON(void);
        virtual ~TypeImageJSON(void);
        bool  hasURL(void) const;
        std::string  getURL(void);
        const std::string  getURL(void) const;
        bool  hasShape(void) const;
        TypeShape  getShape(void);
        const TypeShape  getShape(void) const;
        const char * getShapeAsChars(void) const;
        std::string  getShapeAsString(void) const;
        bool  hasSize(void) const;
        TypeSize  getSize(void);
        const TypeSize  getSize(void) const;
        const char * getSizeAsChars(void) const;
        std::string  getSizeAsString(void) const;
        bool  hasCenterCrop(void) const;
        bool  getCenterCrop(void);
        const bool  getCenterCrop(void) const;

        virtual size_t extraTypeImageComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeImageComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeImageComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeImageComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeImageLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeImageLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setURL(std::string new_value)
          {
            flagHasURL = true;
            storeURL = new_value;
          }
        void unsetURL(void)
          {
            flagHasURL = false;
          }
        void setShape(TypeShape new_value)
          {
            flagHasShape = true;
            storeShape = new_value;
          }
        void setShape(const char *chars)
          {
            setShape(stringToShape(chars));
          }
        void setShape(std::string the_string)
          {
            setShape(stringToShape(the_string.c_str()));
          }
        void unsetShape(void)
          {
            flagHasShape = false;
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
        void setCenterCrop(bool new_value)
          {
            flagHasCenterCrop = true;
            storeCenterCrop = new_value;
          }
        void unsetCenterCrop(void)
          {
            flagHasCenterCrop = false;
          }

        virtual void extraTypeImageAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeImageSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeImageLookup(key);
            if (old_field == NULL)
              {
                extraTypeImageAppendPair(key, new_component);
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
            assert(flagHasURL);
            handler->start_pair("URL");
            handler->string_value(storeURL);
            if (flagHasShape)
              {
                handler->start_pair("Shape");
                switch (storeShape)
                  {
                    case Shape_Rectangle:
                        handler->string_value("Rectangle");
                        break;
                    case Shape_Square:
                        handler->string_value("Square");
                        break;
                    default:
                        assert(false);
                  }
              }
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
                    default:
                        assert(false);
                  }
              }
            if (flagHasCenterCrop)
              {
                handler->start_pair("CenterCrop");
                handler->boolean_value(storeCenterCrop);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasURL()))
              {
                return "When parsing the object for %what%, the \"URL\" field was missing.";
              }
            return NULL;
          }

        static TypeImageJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeImageJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeImageJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeImageJSON>, TypeImageJSON *, bool> generator("Type TypeImage", ignore_extras);
                parse_json_value(text, "Text for TypeImageJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeImageJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeImageJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeImageJSON>, TypeImageJSON *, bool> generator("Type TypeImage", ignore_extras);
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorURL;
        class FieldGeneratorShape : public JSONStringGenerator
              {
              protected:
                FieldGeneratorShape(const char *what)
                  {
                    set_what(what);
                  }
                FieldGeneratorShape(void)
                  {
                  }
                void handle_result(const char *result)
                  {
                    handle_result(stringToShape(result));
                  }
                virtual void handle_result(TypeShape result) = 0;
              };
            JSONHoldingGenerator<FieldGeneratorShape, TypeShape, TypeShape > fieldGeneratorShape;
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
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorCenterCrop;
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
                TypeImageJSON *result = new TypeImageJSON();
                assert(result != NULL);
                RCHandle<TypeImageJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeImageAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeImageJSON *result)
              {
                if (fieldGeneratorURL.have_value)
                  {
                    result->setURL(fieldGeneratorURL.value);
                    fieldGeneratorURL.have_value = false;
                  }
                else if (!(result->hasURL()))
                  {
                    error("When parsing the object for %what%, the \"URL\" field was missing.");
                  }
                if (fieldGeneratorShape.have_value)
                  {
                    result->setShape(fieldGeneratorShape.value);
                    fieldGeneratorShape.have_value = false;
                  }
                if (fieldGeneratorSize.have_value)
                  {
                    result->setSize(fieldGeneratorSize.value);
                    fieldGeneratorSize.have_value = false;
                  }
                if (fieldGeneratorCenterCrop.have_value)
                  {
                    result->setCenterCrop(fieldGeneratorCenterCrop.value);
                    fieldGeneratorCenterCrop.have_value = false;
                  }
              }
            virtual void handle_result(TypeImageJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'C':
                        if (strcmp(&(field_name[1]), "enterCrop") == 0)
                            return &fieldGeneratorCenterCrop;
                        break;
                    case 'S':
                        switch ((unsigned char)(field_name[1]))
                          {
                            case 'h':
                                if (strcmp(&(field_name[2]), "ape") == 0)
                                    return &fieldGeneratorShape;
                                break;
                            case 'i':
                                if (strcmp(&(field_name[2]), "ze") == 0)
                                    return &fieldGeneratorSize;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'U':
                        if (strcmp(&(field_name[1]), "RL") == 0)
                            return &fieldGeneratorURL;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorURL("field \"URL\" of the TypeImage class"), fieldGeneratorShape("field \"Shape\" of the TypeImage class"), fieldGeneratorSize("field \"Size\" of the TypeImage class"), fieldGeneratorCenterCrop("field \"CenterCrop\" of the TypeImage class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeImage class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorURL.reset();
                fieldGeneratorShape.reset();
                fieldGeneratorSize.reset();
                fieldGeneratorCenterCrop.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasTitle;
    std::string storeTitle;
    bool flagHasSubtitle;
    std::string storeSubtitle;
    bool flagHasRating;
    uint8_t storeRating;
    bool flagHasBodyText;
    std::string storeBodyText;
    bool flagHasFooter;
    std::string storeFooter;
    bool flagHasAudioPreviewURI;
    std::string storeAudioPreviewURI;
    bool flagHasImage;
    TypeImageJSON * storeImage;
    bool flagHasActionAndroidIntent;
    AndroidIntentJSON * storeActionAndroidIntent;
    bool flagHasActionURIs;
    std::vector< std::string > storeActionURIs;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    MediaTemplateJSON(const MediaTemplateJSON &);
    MediaTemplateJSON & operator=(const MediaTemplateJSON &other);

    JSONValue * extraTitleToJSON(void) const;
    JSONValue * extraSubtitleToJSON(void) const;
    JSONValue * extraRatingToJSON(void) const;
    JSONValue * extraBodyTextToJSON(void) const;
    JSONValue * extraFooterToJSON(void) const;
    JSONValue * extraAudioPreviewURIToJSON(void) const;
    JSONValue * extraImageToJSON(void) const;
    JSONValue * extraActionAndroidIntentToJSON(void) const;
    JSONValue * extraActionURIsToJSON(void) const;

    void  fromJSONTitle(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSubtitle(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRating(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBodyText(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFooter(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAudioPreviewURI(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONImage(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONActionAndroidIntent(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONActionURIs(JSONValue *json_value, bool ignore_extras = false);


  public:
    MediaTemplateJSON(void);
    virtual ~MediaTemplateJSON(void);
    const char * getTemplateName(void) const;
    bool  hasTitle(void) const;
    std::string  getTitle(void);
    const std::string  getTitle(void) const;
    bool  hasSubtitle(void) const;
    std::string  getSubtitle(void);
    const std::string  getSubtitle(void) const;
    bool  hasRating(void) const;
    uint8_t  getRating(void);
    const uint8_t  getRating(void) const;
    bool  hasBodyText(void) const;
    std::string  getBodyText(void);
    const std::string  getBodyText(void) const;
    bool  hasFooter(void) const;
    std::string  getFooter(void);
    const std::string  getFooter(void) const;
    bool  hasAudioPreviewURI(void) const;
    std::string  getAudioPreviewURI(void);
    const std::string  getAudioPreviewURI(void) const;
    bool  hasImage(void) const;
    TypeImageJSON *  getImage(void);
    const TypeImageJSON *  getImage(void) const;
    bool  hasActionAndroidIntent(void) const;
    AndroidIntentJSON *  getActionAndroidIntent(void);
    const AndroidIntentJSON *  getActionAndroidIntent(void) const;
    bool  hasActionURIs(void) const;
    size_t  countOfActionURIs(void) const;
    std::string  elementOfActionURIs(size_t element_num);
    const std::string  elementOfActionURIs(size_t element_num) const;
    std::vector< std::string >  getActionURIs(void);
    const std::vector< std::string >  getActionURIs(void) const;

    virtual size_t extraMediaTemplateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraMediaTemplateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraMediaTemplateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraMediaTemplateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraMediaTemplateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraMediaTemplateLookup(const char *field_name) const
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
        if (flagHasSubtitle)
            ++result;
        if (flagHasRating)
            ++result;
        if (flagHasBodyText)
            ++result;
        if (flagHasFooter)
            ++result;
        if (flagHasAudioPreviewURI)
            ++result;
        if (flagHasImage)
            ++result;
        if (flagHasActionAndroidIntent)
            ++result;
        if (flagHasActionURIs)
            ++result;
        result += extraMediaTemplateComponentCount();
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
        if (flagHasSubtitle)
          {
            if (remainder == 0)
                return "Subtitle";
            --remainder;
          }
        if (flagHasRating)
          {
            if (remainder == 0)
                return "Rating";
            --remainder;
          }
        if (flagHasBodyText)
          {
            if (remainder == 0)
                return "BodyText";
            --remainder;
          }
        if (flagHasFooter)
          {
            if (remainder == 0)
                return "Footer";
            --remainder;
          }
        if (flagHasAudioPreviewURI)
          {
            if (remainder == 0)
                return "AudioPreviewURI";
            --remainder;
          }
        if (flagHasImage)
          {
            if (remainder == 0)
                return "Image";
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
        return extraMediaTemplateComponentKey(remainder);
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
        if (flagHasSubtitle)
          {
            if (remainder == 0)
                return extraSubtitleToJSON();
            --remainder;
          }
        if (flagHasRating)
          {
            if (remainder == 0)
                return extraRatingToJSON();
            --remainder;
          }
        if (flagHasBodyText)
          {
            if (remainder == 0)
                return extraBodyTextToJSON();
            --remainder;
          }
        if (flagHasFooter)
          {
            if (remainder == 0)
                return extraFooterToJSON();
            --remainder;
          }
        if (flagHasAudioPreviewURI)
          {
            if (remainder == 0)
                return extraAudioPreviewURIToJSON();
            --remainder;
          }
        if (flagHasImage)
          {
            if (remainder == 0)
                return extraImageToJSON();
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
        return extraMediaTemplateComponentValue(remainder);
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
        if (flagHasSubtitle)
          {
            if (remainder == 0)
                return extraSubtitleToJSON();
            --remainder;
          }
        if (flagHasRating)
          {
            if (remainder == 0)
                return extraRatingToJSON();
            --remainder;
          }
        if (flagHasBodyText)
          {
            if (remainder == 0)
                return extraBodyTextToJSON();
            --remainder;
          }
        if (flagHasFooter)
          {
            if (remainder == 0)
                return extraFooterToJSON();
            --remainder;
          }
        if (flagHasAudioPreviewURI)
          {
            if (remainder == 0)
                return extraAudioPreviewURIToJSON();
            --remainder;
          }
        if (flagHasImage)
          {
            if (remainder == 0)
                return extraImageToJSON();
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
        return extraMediaTemplateComponentValue(remainder);
      }
    JSONValue *extraTemplateLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'c':
                        if (strncmp(&(field_name[2]), "tion", 4) == 0)
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
                    case 'u':
                        if (strcmp(&(field_name[2]), "dioPreviewURI") == 0)
                            return (flagHasAudioPreviewURI ? extraAudioPreviewURIToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'B':
                if (strcmp(&(field_name[1]), "odyText") == 0)
                    return (flagHasBodyText ? extraBodyTextToJSON() : NULL);
                break;
            case 'F':
                if (strcmp(&(field_name[1]), "ooter") == 0)
                    return (flagHasFooter ? extraFooterToJSON() : NULL);
                break;
            case 'I':
                if (strcmp(&(field_name[1]), "mage") == 0)
                    return (flagHasImage ? extraImageToJSON() : NULL);
                break;
            case 'R':
                if (strcmp(&(field_name[1]), "ating") == 0)
                    return (flagHasRating ? extraRatingToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "ubtitle") == 0)
                    return (flagHasSubtitle ? extraSubtitleToJSON() : NULL);
                break;
            case 'T':
                if (strcmp(&(field_name[1]), "itle") == 0)
                    return (flagHasTitle ? extraTitleToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraMediaTemplateLookup(field_name);
      }
    const JSONValue *extraTemplateLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'c':
                        if (strncmp(&(field_name[2]), "tion", 4) == 0)
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
                    case 'u':
                        if (strcmp(&(field_name[2]), "dioPreviewURI") == 0)
                            return (flagHasAudioPreviewURI ? extraAudioPreviewURIToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'B':
                if (strcmp(&(field_name[1]), "odyText") == 0)
                    return (flagHasBodyText ? extraBodyTextToJSON() : NULL);
                break;
            case 'F':
                if (strcmp(&(field_name[1]), "ooter") == 0)
                    return (flagHasFooter ? extraFooterToJSON() : NULL);
                break;
            case 'I':
                if (strcmp(&(field_name[1]), "mage") == 0)
                    return (flagHasImage ? extraImageToJSON() : NULL);
                break;
            case 'R':
                if (strcmp(&(field_name[1]), "ating") == 0)
                    return (flagHasRating ? extraRatingToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "ubtitle") == 0)
                    return (flagHasSubtitle ? extraSubtitleToJSON() : NULL);
                break;
            case 'T':
                if (strcmp(&(field_name[1]), "itle") == 0)
                    return (flagHasTitle ? extraTitleToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraMediaTemplateLookup(field_name);
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
    void setSubtitle(std::string new_value)
      {
        flagHasSubtitle = true;
        storeSubtitle = new_value;
      }
    void unsetSubtitle(void)
      {
        flagHasSubtitle = false;
      }
    void setRating(uint8_t new_value)
      {
        flagHasRating = true;
        if (new_value < 0)
            throw("The value for field Rating of MediaTemplateJSON is less than the lower bound (0) for that field.");
        if (new_value > 5)
            throw("The value for field Rating of MediaTemplateJSON is greater than the upper bound (5) for that field.");
        storeRating = new_value;
      }
    void unsetRating(void)
      {
        flagHasRating = false;
      }
    void setBodyText(std::string new_value)
      {
        flagHasBodyText = true;
        storeBodyText = new_value;
      }
    void unsetBodyText(void)
      {
        flagHasBodyText = false;
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
    void setAudioPreviewURI(std::string new_value)
      {
        flagHasAudioPreviewURI = true;
        storeAudioPreviewURI = new_value;
      }
    void unsetAudioPreviewURI(void)
      {
        flagHasAudioPreviewURI = false;
      }
    void setImage(TypeImageJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasImage)
          {
            storeImage->remove_reference();
          }
        flagHasImage = true;
        storeImage = new_value;
      }
    void unsetImage(void)
      {
        if (flagHasImage)
          {
            storeImage->remove_reference();
          }
        flagHasImage = false;
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

    virtual void extraMediaTemplateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraMediaTemplateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraMediaTemplateLookup(key);
        if (old_field == NULL)
          {
            extraMediaTemplateAppendPair(key, new_component);
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
                switch ((unsigned char)(key[1]))
                  {
                    case 'c':
                        if (strncmp(&(key[2]), "tion", 4) == 0)
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
                    case 'u':
                        if (strcmp(&(key[2]), "dioPreviewURI") == 0)
                            {
                            fromJSONAudioPreviewURI(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'B':
                if (strcmp(&(key[1]), "odyText") == 0)
                    {
                    fromJSONBodyText(new_component, false);
                    return;
                    }
                break;
            case 'F':
                if (strcmp(&(key[1]), "ooter") == 0)
                    {
                    fromJSONFooter(new_component, false);
                    return;
                    }
                break;
            case 'I':
                if (strcmp(&(key[1]), "mage") == 0)
                    {
                    fromJSONImage(new_component, false);
                    return;
                    }
                break;
            case 'R':
                if (strcmp(&(key[1]), "ating") == 0)
                    {
                    fromJSONRating(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strcmp(&(key[1]), "ubtitle") == 0)
                    {
                    fromJSONSubtitle(new_component, false);
                    return;
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
        extraMediaTemplateAppendPair(key, new_component);
      }
    void extraTemplateSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                switch ((unsigned char)(key[1]))
                  {
                    case 'c':
                        if (strncmp(&(key[2]), "tion", 4) == 0)
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
                    case 'u':
                        if (strcmp(&(key[2]), "dioPreviewURI") == 0)
                            {
                            fromJSONAudioPreviewURI(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'B':
                if (strcmp(&(key[1]), "odyText") == 0)
                    {
                    fromJSONBodyText(new_component, false);
                    return;
                    }
                break;
            case 'F':
                if (strcmp(&(key[1]), "ooter") == 0)
                    {
                    fromJSONFooter(new_component, false);
                    return;
                    }
                break;
            case 'I':
                if (strcmp(&(key[1]), "mage") == 0)
                    {
                    fromJSONImage(new_component, false);
                    return;
                    }
                break;
            case 'R':
                if (strcmp(&(key[1]), "ating") == 0)
                    {
                    fromJSONRating(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strcmp(&(key[1]), "ubtitle") == 0)
                    {
                    fromJSONSubtitle(new_component, false);
                    return;
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
        extraMediaTemplateSetField(key, new_component);
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
        if (flagHasSubtitle)
          {
            handler->start_pair("Subtitle");
            handler->string_value(storeSubtitle);
          }
        if (flagHasRating)
          {
            handler->start_pair("Rating");
            handler->number_value(storeRating);
          }
        if (flagHasBodyText)
          {
            handler->start_pair("BodyText");
            handler->string_value(storeBodyText);
          }
        if (flagHasFooter)
          {
            handler->start_pair("Footer");
            handler->string_value(storeFooter);
          }
        if (flagHasAudioPreviewURI)
          {
            handler->start_pair("AudioPreviewURI");
            handler->string_value(storeAudioPreviewURI);
          }
        if (flagHasImage)
          {
            handler->start_pair("Image");
            storeImage->write_as_json(handler);
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

    static MediaTemplateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MediaTemplateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MediaTemplateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MediaTemplateJSON>, MediaTemplateJSON *, bool> generator("Type MediaTemplate", ignore_extras);
            parse_json_value(text, "Text for MediaTemplateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MediaTemplateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MediaTemplateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MediaTemplateJSON>, MediaTemplateJSON *, bool> generator("Type MediaTemplate", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSubtitle;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 5>, uint8_t, uint8_t > fieldGeneratorRating;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorBodyText;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorFooter;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAudioPreviewURI;
        JSONHoldingGenerator<TypeImageJSON::Generator, RCHandle<TypeImageJSON>, TypeImageJSON *, bool > fieldGeneratorImage;
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
            if (!(strcmp(getTemplateJSONKey().c_str(), "Media") == 0))
                throw("The key field has a value other than `Media'.");
            MediaTemplateJSON *result = new MediaTemplateJSON();
            assert(result != NULL);
            RCHandle<MediaTemplateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraMediaTemplateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(TemplateJSON *new_result)
          {
            handle_result((MediaTemplateJSON *)new_result);
          }
        void finish(MediaTemplateJSON *result)
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
            if (fieldGeneratorSubtitle.have_value)
              {
                result->setSubtitle(fieldGeneratorSubtitle.value);
                fieldGeneratorSubtitle.have_value = false;
              }
            if (fieldGeneratorRating.have_value)
              {
                result->setRating(fieldGeneratorRating.value);
                fieldGeneratorRating.have_value = false;
              }
            if (fieldGeneratorBodyText.have_value)
              {
                result->setBodyText(fieldGeneratorBodyText.value);
                fieldGeneratorBodyText.have_value = false;
              }
            if (fieldGeneratorFooter.have_value)
              {
                result->setFooter(fieldGeneratorFooter.value);
                fieldGeneratorFooter.have_value = false;
              }
            if (fieldGeneratorAudioPreviewURI.have_value)
              {
                result->setAudioPreviewURI(fieldGeneratorAudioPreviewURI.value);
                fieldGeneratorAudioPreviewURI.have_value = false;
              }
            if (fieldGeneratorImage.have_value)
              {
                result->setImage(fieldGeneratorImage.value.referenced());
                fieldGeneratorImage.have_value = false;
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
        virtual void handle_result(MediaTemplateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'c':
                            if (strncmp(&(field_name[2]), "tion", 4) == 0)
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
                        case 'u':
                            if (strcmp(&(field_name[2]), "dioPreviewURI") == 0)
                                return &fieldGeneratorAudioPreviewURI;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'B':
                    if (strcmp(&(field_name[1]), "odyText") == 0)
                        return &fieldGeneratorBodyText;
                    break;
                case 'F':
                    if (strcmp(&(field_name[1]), "ooter") == 0)
                        return &fieldGeneratorFooter;
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "mage") == 0)
                        return &fieldGeneratorImage;
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "ating") == 0)
                        return &fieldGeneratorRating;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "ubtitle") == 0)
                        return &fieldGeneratorSubtitle;
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
        Generator(bool ignore_extras = false) : TemplateJSON::Generator(ignore_extras), fieldGeneratorTitle("field \"Title\" of the MediaTemplate class"), fieldGeneratorSubtitle("field \"Subtitle\" of the MediaTemplate class"), fieldGeneratorRating("field \"Rating\" of the MediaTemplate class"), fieldGeneratorBodyText("field \"BodyText\" of the MediaTemplate class"), fieldGeneratorFooter("field \"Footer\" of the MediaTemplate class"), fieldGeneratorAudioPreviewURI("field \"AudioPreviewURI\" of the MediaTemplate class"), fieldGeneratorImage("field \"Image\" of the MediaTemplate class", ignore_extras), fieldGeneratorActionAndroidIntent("field \"ActionAndroidIntent\" of the MediaTemplate class", ignore_extras), fieldGeneratorActionURIs("field \"ActionURIs\" of the MediaTemplate class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the MediaTemplate class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorTitle.reset();
            fieldGeneratorSubtitle.reset();
            fieldGeneratorRating.reset();
            fieldGeneratorBodyText.reset();
            fieldGeneratorFooter.reset();
            fieldGeneratorAudioPreviewURI.reset();
            fieldGeneratorImage.reset();
            fieldGeneratorActionAndroidIntent.reset();
            fieldGeneratorActionURIs.reset();
            TemplateJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* MEDIATEMPLATEJSON_H */
