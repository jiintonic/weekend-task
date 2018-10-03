/* file "AppSpecJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef APPSPECJSON_H
#define APPSPECJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include <vector>
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class AppSpecJSON : public ReferenceCounted
  {
  public:
    enum TypePlatformKnownValues
      {
        Platform_Android,
        Platform_iOS,
        Platform__none
      };
    struct TypePlatform
      {
        bool in_known_list;
        std::string string_value;
        TypePlatformKnownValues list_value;

        TypePlatform(void);
        TypePlatform(const TypePlatform &other);
        TypePlatform(TypePlatformKnownValues other);
        bool  operator==(const TypePlatform &other) const;
        bool  operator!=(const TypePlatform &other) const;
        bool  operator<(const TypePlatform &other) const;
        bool  operator>(const TypePlatform &other) const;
        bool  operator>=(const TypePlatform &other) const;
        bool  operator<=(const TypePlatform &other) const;

      };

    static TypePlatformKnownValues  stringToPlatform(const char *chars);
    static const char * stringFromPlatform(TypePlatformKnownValues the_enum);

  private:
    bool flagHasPlatform;
    TypePlatform storePlatform;
    bool flagHasAppID;
    std::string storeAppID;
    bool flagHasLaunchURLScheme;
    std::string storeLaunchURLScheme;
    bool flagHasAppName;
    std::string storeAppName;
    bool flagHasAppSpokenName;
    std::string storeAppSpokenName;
    bool flagHasAliases;
    std::vector< std::string > storeAliases;
    bool flagHasPopularityMeasure;
    double storePopularityMeasure;
    std::string textStorePopularityMeasure;
    bool flagHasCompanyName;
    std::string storeCompanyName;
    bool flagHasAppPrice;
    double storeAppPrice;
    std::string textStoreAppPrice;
    bool flagHasAppRating;
    double storeAppRating;
    std::string textStoreAppRating;
    bool flagHasAppURL;
    std::string storeAppURL;
    bool flagHasAppIconURL;
    std::string storeAppIconURL;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    AppSpecJSON(const AppSpecJSON &);
    AppSpecJSON & operator=(const AppSpecJSON &other);

    void  fromJSONPlatform(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAppID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLaunchURLScheme(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAppName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAppSpokenName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAliases(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPopularityMeasure(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCompanyName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAppPrice(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAppRating(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAppURL(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAppIconURL(JSONValue *json_value, bool ignore_extras = false);


  public:
    AppSpecJSON(void);
    virtual ~AppSpecJSON(void);
    bool  hasPlatform(void) const;
    TypePlatform  getPlatform(void);
    const TypePlatform  getPlatform(void) const;
    const char * getPlatformAsChars(void) const;
    std::string  getPlatformAsString(void) const;
    bool  hasAppID(void) const;
    std::string  getAppID(void);
    const std::string  getAppID(void) const;
    bool  hasLaunchURLScheme(void) const;
    std::string  getLaunchURLScheme(void);
    const std::string  getLaunchURLScheme(void) const;
    bool  hasAppName(void) const;
    std::string  getAppName(void);
    const std::string  getAppName(void) const;
    bool  hasAppSpokenName(void) const;
    std::string  getAppSpokenName(void);
    const std::string  getAppSpokenName(void) const;
    bool  hasAliases(void) const;
    size_t  countOfAliases(void) const;
    std::string  elementOfAliases(size_t element_num);
    const std::string  elementOfAliases(size_t element_num) const;
    std::vector< std::string >  getAliases(void);
    const std::vector< std::string >  getAliases(void) const;
    bool  hasPopularityMeasure(void) const;
    double  getPopularityMeasure(void);
    const double  getPopularityMeasure(void) const;
    std::string  getPopularityMeasureAsText(void) const;
    bool  hasCompanyName(void) const;
    std::string  getCompanyName(void);
    const std::string  getCompanyName(void) const;
    bool  hasAppPrice(void) const;
    double  getAppPrice(void);
    const double  getAppPrice(void) const;
    std::string  getAppPriceAsText(void) const;
    bool  hasAppRating(void) const;
    double  getAppRating(void);
    const double  getAppRating(void) const;
    std::string  getAppRatingAsText(void) const;
    bool  hasAppURL(void) const;
    std::string  getAppURL(void);
    const std::string  getAppURL(void) const;
    bool  hasAppIconURL(void) const;
    std::string  getAppIconURL(void);
    const std::string  getAppIconURL(void) const;

    virtual size_t extraAppSpecComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraAppSpecComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraAppSpecComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraAppSpecComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraAppSpecLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraAppSpecLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setPlatform(TypePlatform new_value)
      {
        flagHasPlatform = true;
        storePlatform = new_value;
      }
    void setPlatform(const char *chars)
      {
        TypePlatformKnownValues known = stringToPlatform(chars);
        TypePlatform new_value;
        if (known == Platform__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setPlatform(new_value);
      }
    void setPlatform(std::string the_string)
      {
        setPlatform(the_string.c_str());
      }
    void setPlatform(TypePlatformKnownValues new_value)
      {
        TypePlatform new_full_value;
        assert(new_value != Platform__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setPlatform(new_full_value);
      }
    void unsetPlatform(void)
      {
        flagHasPlatform = false;
      }
    void setAppID(std::string new_value)
      {
        flagHasAppID = true;
        storeAppID = new_value;
      }
    void unsetAppID(void)
      {
        flagHasAppID = false;
      }
    void setLaunchURLScheme(std::string new_value)
      {
        flagHasLaunchURLScheme = true;
        storeLaunchURLScheme = new_value;
      }
    void unsetLaunchURLScheme(void)
      {
        flagHasLaunchURLScheme = false;
      }
    void setAppName(std::string new_value)
      {
        flagHasAppName = true;
        storeAppName = new_value;
      }
    void unsetAppName(void)
      {
        flagHasAppName = false;
      }
    void setAppSpokenName(std::string new_value)
      {
        flagHasAppSpokenName = true;
        storeAppSpokenName = new_value;
      }
    void unsetAppSpokenName(void)
      {
        flagHasAppSpokenName = false;
      }
    void initAliases(void)
      {
        flagHasAliases = true;
        storeAliases.clear();
      }
    void appendAliases(std::string to_append)
      {
        if (!flagHasAliases)
          {
            flagHasAliases = true;
            storeAliases.clear();
          }
        assert(flagHasAliases);
        storeAliases.push_back(to_append);
      }
    void unsetAliases(void)
      {
        flagHasAliases = false;
        storeAliases.clear();
      }
    void setPopularityMeasure(double new_value)
      {
        flagHasPopularityMeasure = true;
        storePopularityMeasure = new_value;
        textStorePopularityMeasure = "";
      }
    void setPopularityMeasureText(std::string new_value)
      {
        flagHasPopularityMeasure = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field PopularityMeasure of AppSpecJSON is not a valid number.");
        textStorePopularityMeasure = new_value;
      }
    void unsetPopularityMeasure(void)
      {
        flagHasPopularityMeasure = false;
      }
    void setCompanyName(std::string new_value)
      {
        flagHasCompanyName = true;
        storeCompanyName = new_value;
      }
    void unsetCompanyName(void)
      {
        flagHasCompanyName = false;
      }
    void setAppPrice(double new_value)
      {
        flagHasAppPrice = true;
        storeAppPrice = new_value;
        textStoreAppPrice = "";
      }
    void setAppPriceText(std::string new_value)
      {
        flagHasAppPrice = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field AppPrice of AppSpecJSON is not a valid number.");
        textStoreAppPrice = new_value;
      }
    void unsetAppPrice(void)
      {
        flagHasAppPrice = false;
      }
    void setAppRating(double new_value)
      {
        flagHasAppRating = true;
        storeAppRating = new_value;
        textStoreAppRating = "";
      }
    void setAppRatingText(std::string new_value)
      {
        flagHasAppRating = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field AppRating of AppSpecJSON is not a valid number.");
        textStoreAppRating = new_value;
      }
    void unsetAppRating(void)
      {
        flagHasAppRating = false;
      }
    void setAppURL(std::string new_value)
      {
        flagHasAppURL = true;
        storeAppURL = new_value;
      }
    void unsetAppURL(void)
      {
        flagHasAppURL = false;
      }
    void setAppIconURL(std::string new_value)
      {
        flagHasAppIconURL = true;
        storeAppIconURL = new_value;
      }
    void unsetAppIconURL(void)
      {
        flagHasAppIconURL = false;
      }

    virtual void extraAppSpecAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraAppSpecSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraAppSpecLookup(key);
        if (old_field == NULL)
          {
            extraAppSpecAppendPair(key, new_component);
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
        assert(flagHasPlatform);
        handler->start_pair("Platform");
        if (storePlatform.in_known_list)
          {
            switch (storePlatform.list_value)
              {
                case Platform_Android:
                    handler->string_value("Android");
                    break;
                case Platform_iOS:
                    handler->string_value("iOS");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storePlatform.string_value);
          }
        assert(flagHasAppID);
        handler->start_pair("AppID");
        handler->string_value(storeAppID);
        assert(flagHasLaunchURLScheme);
        handler->start_pair("LaunchURLScheme");
        handler->string_value(storeLaunchURLScheme);
        assert(flagHasAppName);
        handler->start_pair("AppName");
        handler->string_value(storeAppName);
        assert(flagHasAppSpokenName);
        handler->start_pair("AppSpokenName");
        handler->string_value(storeAppSpokenName);
        if (flagHasAliases)
          {
            handler->start_pair("Aliases");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeAliases.size(); ++num1)
              {
                handler->string_value(storeAliases[num1]);
              }
            handler->finish_array();
          }
        if (flagHasPopularityMeasure)
          {
            handler->start_pair("PopularityMeasure");
            if (textStorePopularityMeasure != "")
                handler->number_value(textStorePopularityMeasure.c_str());
            else if (((double)(long int)storePopularityMeasure) == storePopularityMeasure)
                handler->number_value((long int)storePopularityMeasure);
            else
                handler->number_value(storePopularityMeasure);
          }
        if (flagHasCompanyName)
          {
            handler->start_pair("CompanyName");
            handler->string_value(storeCompanyName);
          }
        if (flagHasAppPrice)
          {
            handler->start_pair("AppPrice");
            if (textStoreAppPrice != "")
                handler->number_value(textStoreAppPrice.c_str());
            else if (((double)(long int)storeAppPrice) == storeAppPrice)
                handler->number_value((long int)storeAppPrice);
            else
                handler->number_value(storeAppPrice);
          }
        if (flagHasAppRating)
          {
            handler->start_pair("AppRating");
            if (textStoreAppRating != "")
                handler->number_value(textStoreAppRating.c_str());
            else if (((double)(long int)storeAppRating) == storeAppRating)
                handler->number_value((long int)storeAppRating);
            else
                handler->number_value(storeAppRating);
          }
        if (flagHasAppURL)
          {
            handler->start_pair("AppURL");
            handler->string_value(storeAppURL);
          }
        if (flagHasAppIconURL)
          {
            handler->start_pair("AppIconURL");
            handler->string_value(storeAppIconURL);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasPlatform()))
          {
            return "When parsing the object for %what%, the \"Platform\" field was missing.";
          }
        if (!(hasAppID()))
          {
            return "When parsing the object for %what%, the \"AppID\" field was missing.";
          }
        if (!(hasLaunchURLScheme()))
          {
            return "When parsing the object for %what%, the \"LaunchURLScheme\" field was missing.";
          }
        if (!(hasAppName()))
          {
            return "When parsing the object for %what%, the \"AppName\" field was missing.";
          }
        if (!(hasAppSpokenName()))
          {
            return "When parsing the object for %what%, the \"AppSpokenName\" field was missing.";
          }
        return NULL;
      }

    static AppSpecJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static AppSpecJSON *from_text(const char *text, bool ignore_extras = false)
      {
        AppSpecJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AppSpecJSON>, AppSpecJSON *, bool> generator("Type AppSpec", ignore_extras);
            parse_json_value(text, "Text for AppSpecJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static AppSpecJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        AppSpecJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AppSpecJSON>, AppSpecJSON *, bool> generator("Type AppSpec", ignore_extras);
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
    class FieldGeneratorPlatform : public JSONStringGenerator
          {
          protected:
            FieldGeneratorPlatform(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorPlatform(void)
              {
              }
            void handle_result(const char *result)
              {
                TypePlatformKnownValues known = stringToPlatform(result);
                TypePlatform new_value;
                if (known == Platform__none)
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
            virtual void handle_result(TypePlatform result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorPlatform, TypePlatform, TypePlatform > fieldGeneratorPlatform;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAppID;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLaunchURLScheme;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAppName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAppSpokenName;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAliases;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorPopularityMeasure;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCompanyName;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorAppPrice;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorAppRating;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAppURL;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAppIconURL;
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
            AppSpecJSON *result = new AppSpecJSON();
            assert(result != NULL);
            RCHandle<AppSpecJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraAppSpecAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(AppSpecJSON *result)
          {
            if (fieldGeneratorPlatform.have_value)
              {
                result->setPlatform(fieldGeneratorPlatform.value);
                fieldGeneratorPlatform.have_value = false;
              }
            else if (!(result->hasPlatform()))
              {
                error("When parsing the object for %what%, the \"Platform\" field was missing.");
              }
            if (fieldGeneratorAppID.have_value)
              {
                result->setAppID(fieldGeneratorAppID.value);
                fieldGeneratorAppID.have_value = false;
              }
            else if (!(result->hasAppID()))
              {
                error("When parsing the object for %what%, the \"AppID\" field was missing.");
              }
            if (fieldGeneratorLaunchURLScheme.have_value)
              {
                result->setLaunchURLScheme(fieldGeneratorLaunchURLScheme.value);
                fieldGeneratorLaunchURLScheme.have_value = false;
              }
            else if (!(result->hasLaunchURLScheme()))
              {
                error("When parsing the object for %what%, the \"LaunchURLScheme\" field was missing.");
              }
            if (fieldGeneratorAppName.have_value)
              {
                result->setAppName(fieldGeneratorAppName.value);
                fieldGeneratorAppName.have_value = false;
              }
            else if (!(result->hasAppName()))
              {
                error("When parsing the object for %what%, the \"AppName\" field was missing.");
              }
            if (fieldGeneratorAppSpokenName.have_value)
              {
                result->setAppSpokenName(fieldGeneratorAppSpokenName.value);
                fieldGeneratorAppSpokenName.have_value = false;
              }
            else if (!(result->hasAppSpokenName()))
              {
                error("When parsing the object for %what%, the \"AppSpokenName\" field was missing.");
              }
            if (fieldGeneratorAliases.have_value)
              {
                result->initAliases();
                size_t count = fieldGeneratorAliases.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAliases(fieldGeneratorAliases.value[num]);
                  }
                fieldGeneratorAliases.value.clear();
                fieldGeneratorAliases.have_value = false;
              }
            if (fieldGeneratorPopularityMeasure.have_value)
              {
                result->setPopularityMeasureText(fieldGeneratorPopularityMeasure.value);
                fieldGeneratorPopularityMeasure.have_value = false;
              }
            if (fieldGeneratorCompanyName.have_value)
              {
                result->setCompanyName(fieldGeneratorCompanyName.value);
                fieldGeneratorCompanyName.have_value = false;
              }
            if (fieldGeneratorAppPrice.have_value)
              {
                result->setAppPriceText(fieldGeneratorAppPrice.value);
                fieldGeneratorAppPrice.have_value = false;
              }
            if (fieldGeneratorAppRating.have_value)
              {
                result->setAppRatingText(fieldGeneratorAppRating.value);
                fieldGeneratorAppRating.have_value = false;
              }
            if (fieldGeneratorAppURL.have_value)
              {
                result->setAppURL(fieldGeneratorAppURL.value);
                fieldGeneratorAppURL.have_value = false;
              }
            if (fieldGeneratorAppIconURL.have_value)
              {
                result->setAppIconURL(fieldGeneratorAppIconURL.value);
                fieldGeneratorAppIconURL.have_value = false;
              }
          }
        virtual void handle_result(AppSpecJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'l':
                            if (strcmp(&(field_name[2]), "iases") == 0)
                                return &fieldGeneratorAliases;
                            break;
                        case 'p':
                            if (strncmp(&(field_name[2]), "p", 1) == 0)
                              {
                                switch ((unsigned char)(field_name[3]))
                                  {
                                    case 'I':
                                        switch ((unsigned char)(field_name[4]))
                                          {
                                            case 'D':
                                                if (field_name[5] == 0)
                                                    return &fieldGeneratorAppID;
                                                break;
                                            case 'c':
                                                if (strcmp(&(field_name[5]), "onURL") == 0)
                                                    return &fieldGeneratorAppIconURL;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'N':
                                        if (strcmp(&(field_name[4]), "ame") == 0)
                                            return &fieldGeneratorAppName;
                                        break;
                                    case 'P':
                                        if (strcmp(&(field_name[4]), "rice") == 0)
                                            return &fieldGeneratorAppPrice;
                                        break;
                                    case 'R':
                                        if (strcmp(&(field_name[4]), "ating") == 0)
                                            return &fieldGeneratorAppRating;
                                        break;
                                    case 'S':
                                        if (strcmp(&(field_name[4]), "pokenName") == 0)
                                            return &fieldGeneratorAppSpokenName;
                                        break;
                                    case 'U':
                                        if (strcmp(&(field_name[4]), "RL") == 0)
                                            return &fieldGeneratorAppURL;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'C':
                    if (strcmp(&(field_name[1]), "ompanyName") == 0)
                        return &fieldGeneratorCompanyName;
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "aunchURLScheme") == 0)
                        return &fieldGeneratorLaunchURLScheme;
                    break;
                case 'P':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'l':
                            if (strcmp(&(field_name[2]), "atform") == 0)
                                return &fieldGeneratorPlatform;
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "pularityMeasure") == 0)
                                return &fieldGeneratorPopularityMeasure;
                            break;
                        default:
                            break;
                      }
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorPlatform("field \"Platform\" of the AppSpec class"), fieldGeneratorAppID("field \"AppID\" of the AppSpec class"), fieldGeneratorLaunchURLScheme("field \"LaunchURLScheme\" of the AppSpec class"), fieldGeneratorAppName("field \"AppName\" of the AppSpec class"), fieldGeneratorAppSpokenName("field \"AppSpokenName\" of the AppSpec class"), fieldGeneratorAliases("field \"Aliases\" of the AppSpec class"), fieldGeneratorPopularityMeasure("field \"PopularityMeasure\" of the AppSpec class"), fieldGeneratorCompanyName("field \"CompanyName\" of the AppSpec class"), fieldGeneratorAppPrice("field \"AppPrice\" of the AppSpec class"), fieldGeneratorAppRating("field \"AppRating\" of the AppSpec class"), fieldGeneratorAppURL("field \"AppURL\" of the AppSpec class"), fieldGeneratorAppIconURL("field \"AppIconURL\" of the AppSpec class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the AppSpec class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorPlatform.reset();
            fieldGeneratorAppID.reset();
            fieldGeneratorLaunchURLScheme.reset();
            fieldGeneratorAppName.reset();
            fieldGeneratorAppSpokenName.reset();
            fieldGeneratorAliases.reset();
            fieldGeneratorPopularityMeasure.reset();
            fieldGeneratorCompanyName.reset();
            fieldGeneratorAppPrice.reset();
            fieldGeneratorAppRating.reset();
            fieldGeneratorAppURL.reset();
            fieldGeneratorAppIconURL.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* APPSPECJSON_H */
