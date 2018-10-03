/* file "LocalSearchQuestionsSpecJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef LOCALSEARCHQUESTIONSSPECJSON_H
#define LOCALSEARCHQUESTIONSSPECJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include <string>
#include "OpenHoursSpecJSON.h"
#include "AmenityGroupSpecJSON.h"
#include "AmenityGroupSpecJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class LocalSearchQuestionsSpecJSON : public ReferenceCounted
  {
  public:
    enum TypeQuestionTypesKnownValues
      {
        QuestionTypes_Name,
        QuestionTypes_Information,
        QuestionTypes_IsItOpen,
        QuestionTypes_IsItClosed,
        QuestionTypes_HoursOfOperation,
        QuestionTypes_Phone,
        QuestionTypes_Fax,
        QuestionTypes_Address,
        QuestionTypes_Rating,
        QuestionTypes_Reviews,
        QuestionTypes_Price,
        QuestionTypes_Amenities,
        QuestionTypes_Cuisine,
        QuestionTypes_Category,
        QuestionTypes_Products,
        QuestionTypes_Distance,
        QuestionTypes__none
      };
    struct TypeQuestionTypes
      {
        bool in_known_list;
        std::string string_value;
        TypeQuestionTypesKnownValues list_value;

        TypeQuestionTypes(void);
        TypeQuestionTypes(const TypeQuestionTypes &other);
        TypeQuestionTypes(TypeQuestionTypesKnownValues other);
        bool  operator==(const TypeQuestionTypes &other) const;
        bool  operator!=(const TypeQuestionTypes &other) const;
        bool  operator<(const TypeQuestionTypes &other) const;
        bool  operator>(const TypeQuestionTypes &other) const;
        bool  operator>=(const TypeQuestionTypes &other) const;
        bool  operator<=(const TypeQuestionTypes &other) const;

      };

    static TypeQuestionTypesKnownValues  stringToQuestionTypes(const char *chars);
    static const char * stringFromQuestionTypes(TypeQuestionTypesKnownValues the_enum);

  private:
    bool flagHasQuestionTypes;
    std::vector< TypeQuestionTypes > storeQuestionTypes;
    bool flagHasOpenHours;
    OpenHoursSpecJSON * storeOpenHours;
    bool flagHasProductsInclude;
    std::vector< std::string > storeProductsInclude;
    bool flagHasAmenitiesInclude;
    std::vector< AmenityGroupSpecJSON * > storeAmenitiesInclude;
    bool flagHasAmenitiesIncludeSupported;
    std::vector< AmenityGroupSpecJSON * > storeAmenitiesIncludeSupported;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    LocalSearchQuestionsSpecJSON(const LocalSearchQuestionsSpecJSON &);
    LocalSearchQuestionsSpecJSON & operator=(const LocalSearchQuestionsSpecJSON &other);

    void  fromJSONQuestionTypes(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOpenHours(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONProductsInclude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAmenitiesInclude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAmenitiesIncludeSupported(JSONValue *json_value, bool ignore_extras = false);


  public:
    LocalSearchQuestionsSpecJSON(void);
    virtual ~LocalSearchQuestionsSpecJSON(void);
    bool  hasQuestionTypes(void) const;
    size_t  countOfQuestionTypes(void) const;
    TypeQuestionTypes  elementOfQuestionTypes(size_t element_num);
    const TypeQuestionTypes  elementOfQuestionTypes(size_t element_num) const;
    std::vector< TypeQuestionTypes >  getQuestionTypes(void);
    const std::vector< TypeQuestionTypes >  getQuestionTypes(void) const;
    bool  hasOpenHours(void) const;
    OpenHoursSpecJSON *  getOpenHours(void);
    const OpenHoursSpecJSON *  getOpenHours(void) const;
    bool  hasProductsInclude(void) const;
    size_t  countOfProductsInclude(void) const;
    std::string  elementOfProductsInclude(size_t element_num);
    const std::string  elementOfProductsInclude(size_t element_num) const;
    std::vector< std::string >  getProductsInclude(void);
    const std::vector< std::string >  getProductsInclude(void) const;
    bool  hasAmenitiesInclude(void) const;
    size_t  countOfAmenitiesInclude(void) const;
    AmenityGroupSpecJSON *  elementOfAmenitiesInclude(size_t element_num);
    const AmenityGroupSpecJSON *  elementOfAmenitiesInclude(size_t element_num) const;
    std::vector< AmenityGroupSpecJSON * >  getAmenitiesInclude(void);
    const std::vector< AmenityGroupSpecJSON * >  getAmenitiesInclude(void) const;
    bool  hasAmenitiesIncludeSupported(void) const;
    size_t  countOfAmenitiesIncludeSupported(void) const;
    AmenityGroupSpecJSON *  elementOfAmenitiesIncludeSupported(size_t element_num);
    const AmenityGroupSpecJSON *  elementOfAmenitiesIncludeSupported(size_t element_num) const;
    std::vector< AmenityGroupSpecJSON * >  getAmenitiesIncludeSupported(void);
    const std::vector< AmenityGroupSpecJSON * >  getAmenitiesIncludeSupported(void) const;

    virtual size_t extraLocalSearchQuestionsSpecComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraLocalSearchQuestionsSpecComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraLocalSearchQuestionsSpecComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraLocalSearchQuestionsSpecComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraLocalSearchQuestionsSpecLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraLocalSearchQuestionsSpecLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void initQuestionTypes(void)
      {
        flagHasQuestionTypes = true;
        storeQuestionTypes.clear();
      }
    void appendQuestionTypes(TypeQuestionTypes to_append)
      {
        if (!flagHasQuestionTypes)
          {
            flagHasQuestionTypes = true;
            storeQuestionTypes.clear();
          }
        assert(flagHasQuestionTypes);
        storeQuestionTypes.push_back(to_append);
      }
    void appendQuestionTypes(const char *chars)
      {
        TypeQuestionTypesKnownValues known = stringToQuestionTypes(chars);
        TypeQuestionTypes new_value;
        if (known == QuestionTypes__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        appendQuestionTypes(new_value);
      }
    void appendQuestionTypes(std::string the_string)
      {
        appendQuestionTypes(the_string.c_str());
      }
    void appendQuestionTypes(TypeQuestionTypesKnownValues new_value)
      {
        TypeQuestionTypes new_full_value;
        assert(new_value != QuestionTypes__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        appendQuestionTypes(new_full_value);
      }
    void unsetQuestionTypes(void)
      {
        flagHasQuestionTypes = false;
        storeQuestionTypes.clear();
      }
    void setOpenHours(OpenHoursSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasOpenHours)
          {
            storeOpenHours->remove_reference();
          }
        flagHasOpenHours = true;
        storeOpenHours = new_value;
      }
    void unsetOpenHours(void)
      {
        if (flagHasOpenHours)
          {
            storeOpenHours->remove_reference();
          }
        flagHasOpenHours = false;
      }
    void initProductsInclude(void)
      {
        flagHasProductsInclude = true;
        storeProductsInclude.clear();
      }
    void appendProductsInclude(std::string to_append)
      {
        if (!flagHasProductsInclude)
          {
            flagHasProductsInclude = true;
            storeProductsInclude.clear();
          }
        assert(flagHasProductsInclude);
        storeProductsInclude.push_back(to_append);
      }
    void unsetProductsInclude(void)
      {
        flagHasProductsInclude = false;
        storeProductsInclude.clear();
      }
    void initAmenitiesInclude(void)
      {
        if (flagHasAmenitiesInclude)
          {
            for (size_t num3 = 0; num3 < storeAmenitiesInclude.size(); ++num3)
              {
                storeAmenitiesInclude[num3]->remove_reference();
              }
          }
        flagHasAmenitiesInclude = true;
        storeAmenitiesInclude.clear();
      }
    void appendAmenitiesInclude(AmenityGroupSpecJSON * to_append)
      {
        if (!flagHasAmenitiesInclude)
          {
            flagHasAmenitiesInclude = true;
            storeAmenitiesInclude.clear();
          }
        assert(flagHasAmenitiesInclude);
        to_append->add_reference();
        storeAmenitiesInclude.push_back(to_append);
      }
    void unsetAmenitiesInclude(void)
      {
        if (flagHasAmenitiesInclude)
          {
            for (size_t num4 = 0; num4 < storeAmenitiesInclude.size(); ++num4)
              {
                storeAmenitiesInclude[num4]->remove_reference();
              }
          }
        flagHasAmenitiesInclude = false;
        storeAmenitiesInclude.clear();
      }
    void initAmenitiesIncludeSupported(void)
      {
        if (flagHasAmenitiesIncludeSupported)
          {
            for (size_t num5 = 0; num5 < storeAmenitiesIncludeSupported.size(); ++num5)
              {
                storeAmenitiesIncludeSupported[num5]->remove_reference();
              }
          }
        flagHasAmenitiesIncludeSupported = true;
        storeAmenitiesIncludeSupported.clear();
      }
    void appendAmenitiesIncludeSupported(AmenityGroupSpecJSON * to_append)
      {
        if (!flagHasAmenitiesIncludeSupported)
          {
            flagHasAmenitiesIncludeSupported = true;
            storeAmenitiesIncludeSupported.clear();
          }
        assert(flagHasAmenitiesIncludeSupported);
        to_append->add_reference();
        storeAmenitiesIncludeSupported.push_back(to_append);
      }
    void unsetAmenitiesIncludeSupported(void)
      {
        if (flagHasAmenitiesIncludeSupported)
          {
            for (size_t num6 = 0; num6 < storeAmenitiesIncludeSupported.size(); ++num6)
              {
                storeAmenitiesIncludeSupported[num6]->remove_reference();
              }
          }
        flagHasAmenitiesIncludeSupported = false;
        storeAmenitiesIncludeSupported.clear();
      }

    virtual void extraLocalSearchQuestionsSpecAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraLocalSearchQuestionsSpecSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraLocalSearchQuestionsSpecLookup(key);
        if (old_field == NULL)
          {
            extraLocalSearchQuestionsSpecAppendPair(key, new_component);
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
        assert(flagHasQuestionTypes);
        handler->start_pair("QuestionTypes");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeQuestionTypes.size(); ++num1)
          {
            if (storeQuestionTypes[num1].in_known_list)
              {
                switch (storeQuestionTypes[num1].list_value)
                  {
                    case QuestionTypes_Name:
                        handler->string_value("Name");
                        break;
                    case QuestionTypes_Information:
                        handler->string_value("Information");
                        break;
                    case QuestionTypes_IsItOpen:
                        handler->string_value("IsItOpen");
                        break;
                    case QuestionTypes_IsItClosed:
                        handler->string_value("IsItClosed");
                        break;
                    case QuestionTypes_HoursOfOperation:
                        handler->string_value("HoursOfOperation");
                        break;
                    case QuestionTypes_Phone:
                        handler->string_value("Phone");
                        break;
                    case QuestionTypes_Fax:
                        handler->string_value("Fax");
                        break;
                    case QuestionTypes_Address:
                        handler->string_value("Address");
                        break;
                    case QuestionTypes_Rating:
                        handler->string_value("Rating");
                        break;
                    case QuestionTypes_Reviews:
                        handler->string_value("Reviews");
                        break;
                    case QuestionTypes_Price:
                        handler->string_value("Price");
                        break;
                    case QuestionTypes_Amenities:
                        handler->string_value("Amenities");
                        break;
                    case QuestionTypes_Cuisine:
                        handler->string_value("Cuisine");
                        break;
                    case QuestionTypes_Category:
                        handler->string_value("Category");
                        break;
                    case QuestionTypes_Products:
                        handler->string_value("Products");
                        break;
                    case QuestionTypes_Distance:
                        handler->string_value("Distance");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeQuestionTypes[num1].string_value);
              }
          }
        handler->finish_array();
        if (flagHasOpenHours)
          {
            handler->start_pair("OpenHours");
            storeOpenHours->write_as_json(handler);
          }
        if (flagHasProductsInclude)
          {
            handler->start_pair("ProductsInclude");
            handler->start_array();
            for (size_t num2 = 0; num2 < storeProductsInclude.size(); ++num2)
              {
                handler->string_value(storeProductsInclude[num2]);
              }
            handler->finish_array();
          }
        if (flagHasAmenitiesInclude)
          {
            handler->start_pair("AmenitiesInclude");
            handler->start_array();
            for (size_t num3 = 0; num3 < storeAmenitiesInclude.size(); ++num3)
              {
                storeAmenitiesInclude[num3]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasAmenitiesIncludeSupported)
          {
            handler->start_pair("AmenitiesIncludeSupported");
            handler->start_array();
            for (size_t num4 = 0; num4 < storeAmenitiesIncludeSupported.size(); ++num4)
              {
                storeAmenitiesIncludeSupported[num4]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasQuestionTypes()))
          {
            return "When parsing the object for %what%, the \"QuestionTypes\" field was missing.";
          }
        return NULL;
      }

    static LocalSearchQuestionsSpecJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static LocalSearchQuestionsSpecJSON *from_text(const char *text, bool ignore_extras = false)
      {
        LocalSearchQuestionsSpecJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<LocalSearchQuestionsSpecJSON>, LocalSearchQuestionsSpecJSON *, bool> generator("Type LocalSearchQuestionsSpec", ignore_extras);
            parse_json_value(text, "Text for LocalSearchQuestionsSpecJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static LocalSearchQuestionsSpecJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        LocalSearchQuestionsSpecJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<LocalSearchQuestionsSpecJSON>, LocalSearchQuestionsSpecJSON *, bool> generator("Type LocalSearchQuestionsSpec", ignore_extras);
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
    class FieldGeneratorQuestionTypes : public JSONStringGenerator
          {
          protected:
            FieldGeneratorQuestionTypes(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorQuestionTypes(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeQuestionTypesKnownValues known = stringToQuestionTypes(result);
                TypeQuestionTypes new_value;
                if (known == QuestionTypes__none)
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
            virtual void handle_result(TypeQuestionTypes result) = 0;
          };
        JSONHoldingArrayGenerator<FieldGeneratorQuestionTypes, TypeQuestionTypes, TypeQuestionTypes > fieldGeneratorQuestionTypes;
        JSONHoldingGenerator<OpenHoursSpecJSON::Generator, RCHandle<OpenHoursSpecJSON>, OpenHoursSpecJSON *, bool > fieldGeneratorOpenHours;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorProductsInclude;
        JSONHoldingArrayGenerator<AmenityGroupSpecJSON::Generator, RCHandle<AmenityGroupSpecJSON>, AmenityGroupSpecJSON *, bool > fieldGeneratorAmenitiesInclude;
        JSONHoldingArrayGenerator<AmenityGroupSpecJSON::Generator, RCHandle<AmenityGroupSpecJSON>, AmenityGroupSpecJSON *, bool > fieldGeneratorAmenitiesIncludeSupported;
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
            LocalSearchQuestionsSpecJSON *result = new LocalSearchQuestionsSpecJSON();
            assert(result != NULL);
            RCHandle<LocalSearchQuestionsSpecJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraLocalSearchQuestionsSpecAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(LocalSearchQuestionsSpecJSON *result)
          {
            if (fieldGeneratorQuestionTypes.have_value)
              {
                result->initQuestionTypes();
                size_t count = fieldGeneratorQuestionTypes.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendQuestionTypes(fieldGeneratorQuestionTypes.value[num]);
                  }
                fieldGeneratorQuestionTypes.value.clear();
                fieldGeneratorQuestionTypes.have_value = false;
              }
            else if (!(result->hasQuestionTypes()))
              {
                error("When parsing the object for %what%, the \"QuestionTypes\" field was missing.");
              }
            if (fieldGeneratorOpenHours.have_value)
              {
                result->setOpenHours(fieldGeneratorOpenHours.value.referenced());
                fieldGeneratorOpenHours.have_value = false;
              }
            if (fieldGeneratorProductsInclude.have_value)
              {
                result->initProductsInclude();
                size_t count = fieldGeneratorProductsInclude.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendProductsInclude(fieldGeneratorProductsInclude.value[num]);
                  }
                fieldGeneratorProductsInclude.value.clear();
                fieldGeneratorProductsInclude.have_value = false;
              }
            if (fieldGeneratorAmenitiesInclude.have_value)
              {
                result->initAmenitiesInclude();
                size_t count = fieldGeneratorAmenitiesInclude.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAmenitiesInclude(fieldGeneratorAmenitiesInclude.value[num].referenced());
                  }
                fieldGeneratorAmenitiesInclude.value.clear();
                fieldGeneratorAmenitiesInclude.have_value = false;
              }
            if (fieldGeneratorAmenitiesIncludeSupported.have_value)
              {
                result->initAmenitiesIncludeSupported();
                size_t count = fieldGeneratorAmenitiesIncludeSupported.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAmenitiesIncludeSupported(fieldGeneratorAmenitiesIncludeSupported.value[num].referenced());
                  }
                fieldGeneratorAmenitiesIncludeSupported.value.clear();
                fieldGeneratorAmenitiesIncludeSupported.have_value = false;
              }
          }
        virtual void handle_result(LocalSearchQuestionsSpecJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strncmp(&(field_name[1]), "menitiesInclude", 15) == 0)
                      {
                        switch ((unsigned char)(field_name[16]))
                          {
                            case 0:
                                return &fieldGeneratorAmenitiesInclude;
                            case 'S':
                                if (strcmp(&(field_name[17]), "upported") == 0)
                                    return &fieldGeneratorAmenitiesIncludeSupported;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'O':
                    if (strcmp(&(field_name[1]), "penHours") == 0)
                        return &fieldGeneratorOpenHours;
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "roductsInclude") == 0)
                        return &fieldGeneratorProductsInclude;
                    break;
                case 'Q':
                    if (strcmp(&(field_name[1]), "uestionTypes") == 0)
                        return &fieldGeneratorQuestionTypes;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorQuestionTypes("field \"QuestionTypes\" of the LocalSearchQuestionsSpec class"), fieldGeneratorOpenHours("field \"OpenHours\" of the LocalSearchQuestionsSpec class", ignore_extras), fieldGeneratorProductsInclude("field \"ProductsInclude\" of the LocalSearchQuestionsSpec class"), fieldGeneratorAmenitiesInclude("field \"AmenitiesInclude\" of the LocalSearchQuestionsSpec class", ignore_extras), fieldGeneratorAmenitiesIncludeSupported("field \"AmenitiesIncludeSupported\" of the LocalSearchQuestionsSpec class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the LocalSearchQuestionsSpec class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorQuestionTypes.reset();
            fieldGeneratorOpenHours.reset();
            fieldGeneratorProductsInclude.reset();
            fieldGeneratorAmenitiesInclude.reset();
            fieldGeneratorAmenitiesIncludeSupported.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* LOCALSEARCHQUESTIONSSPECJSON_H */
