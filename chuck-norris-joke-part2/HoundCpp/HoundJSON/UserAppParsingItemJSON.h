/* file "UserAppParsingItemJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef USERAPPPARSINGITEMJSON_H
#define USERAPPPARSINGITEMJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONBooleanGenerator.h"
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


class UserAppParsingItemJSON : public ReferenceCounted
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
    bool flagHasIndex;
    OInteger storeIndex;
    bool flagHasPlatform;
    TypePlatform storePlatform;
    bool flagHasAppID;
    std::string storeAppID;
    bool flagHasAliasMatched;
    bool storeAliasMatched;
    bool flagHasPopularityMeasure;
    double storePopularityMeasure;
    std::string textStorePopularityMeasure;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UserAppParsingItemJSON(const UserAppParsingItemJSON &);
    UserAppParsingItemJSON & operator=(const UserAppParsingItemJSON &other);

    void  fromJSONIndex(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPlatform(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAppID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAliasMatched(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPopularityMeasure(JSONValue *json_value, bool ignore_extras = false);


  public:
    UserAppParsingItemJSON(void);
    virtual ~UserAppParsingItemJSON(void);
    bool  hasIndex(void) const;
    OInteger  getIndex(void);
    const OInteger  getIndex(void) const;
    bool  hasPlatform(void) const;
    TypePlatform  getPlatform(void);
    const TypePlatform  getPlatform(void) const;
    const char * getPlatformAsChars(void) const;
    std::string  getPlatformAsString(void) const;
    bool  hasAppID(void) const;
    std::string  getAppID(void);
    const std::string  getAppID(void) const;
    bool  hasAliasMatched(void) const;
    bool  getAliasMatched(void);
    const bool  getAliasMatched(void) const;
    bool  hasPopularityMeasure(void) const;
    double  getPopularityMeasure(void);
    const double  getPopularityMeasure(void) const;
    std::string  getPopularityMeasureAsText(void) const;

    virtual size_t extraUserAppParsingItemComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUserAppParsingItemComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUserAppParsingItemComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUserAppParsingItemComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUserAppParsingItemLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUserAppParsingItemLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setIndex(OInteger new_value)
      {
        flagHasIndex = true;
        if (new_value < 0)
            throw("The value for field Index of UserAppParsingItemJSON is less than the lower bound (0) for that field.");
        storeIndex = new_value;
      }
    void unsetIndex(void)
      {
        flagHasIndex = false;
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
    void setAliasMatched(bool new_value)
      {
        flagHasAliasMatched = true;
        storeAliasMatched = new_value;
      }
    void unsetAliasMatched(void)
      {
        flagHasAliasMatched = false;
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
            throw("The text value for field PopularityMeasure of UserAppParsingItemJSON is not a valid number.");
        textStorePopularityMeasure = new_value;
      }
    void unsetPopularityMeasure(void)
      {
        flagHasPopularityMeasure = false;
      }

    virtual void extraUserAppParsingItemAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUserAppParsingItemSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUserAppParsingItemLookup(key);
        if (old_field == NULL)
          {
            extraUserAppParsingItemAppendPair(key, new_component);
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
        assert(flagHasIndex);
        handler->start_pair("Index");
        handler->number_value(storeIndex.get_o_integer());
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
        assert(flagHasAliasMatched);
        handler->start_pair("AliasMatched");
        handler->boolean_value(storeAliasMatched);
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
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasIndex()))
          {
            return "When parsing the object for %what%, the \"Index\" field was missing.";
          }
        if (!(hasPlatform()))
          {
            return "When parsing the object for %what%, the \"Platform\" field was missing.";
          }
        if (!(hasAppID()))
          {
            return "When parsing the object for %what%, the \"AppID\" field was missing.";
          }
        if (!(hasAliasMatched()))
          {
            return "When parsing the object for %what%, the \"AliasMatched\" field was missing.";
          }
        return NULL;
      }

    static UserAppParsingItemJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UserAppParsingItemJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UserAppParsingItemJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UserAppParsingItemJSON>, UserAppParsingItemJSON *, bool> generator("Type UserAppParsingItem", ignore_extras);
            parse_json_value(text, "Text for UserAppParsingItemJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UserAppParsingItemJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UserAppParsingItemJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UserAppParsingItemJSON>, UserAppParsingItemJSON *, bool> generator("Type UserAppParsingItem", ignore_extras);
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
        static char lowerBoundIndex[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundIndex>, OInteger, o_integer > fieldGeneratorIndex;
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
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorAliasMatched;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorPopularityMeasure;
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
            UserAppParsingItemJSON *result = new UserAppParsingItemJSON();
            assert(result != NULL);
            RCHandle<UserAppParsingItemJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUserAppParsingItemAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(UserAppParsingItemJSON *result)
          {
            if (fieldGeneratorIndex.have_value)
              {
                result->setIndex(fieldGeneratorIndex.value);
                fieldGeneratorIndex.have_value = false;
              }
            else if (!(result->hasIndex()))
              {
                error("When parsing the object for %what%, the \"Index\" field was missing.");
              }
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
            if (fieldGeneratorAliasMatched.have_value)
              {
                result->setAliasMatched(fieldGeneratorAliasMatched.value);
                fieldGeneratorAliasMatched.have_value = false;
              }
            else if (!(result->hasAliasMatched()))
              {
                error("When parsing the object for %what%, the \"AliasMatched\" field was missing.");
              }
            if (fieldGeneratorPopularityMeasure.have_value)
              {
                result->setPopularityMeasureText(fieldGeneratorPopularityMeasure.value);
                fieldGeneratorPopularityMeasure.have_value = false;
              }
          }
        virtual void handle_result(UserAppParsingItemJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'l':
                            if (strcmp(&(field_name[2]), "iasMatched") == 0)
                                return &fieldGeneratorAliasMatched;
                            break;
                        case 'p':
                            if (strcmp(&(field_name[2]), "pID") == 0)
                                return &fieldGeneratorAppID;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "ndex") == 0)
                        return &fieldGeneratorIndex;
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
        Generator(bool ignore_extras = false) : fieldGeneratorIndex("field \"Index\" of the UserAppParsingItem class"), fieldGeneratorPlatform("field \"Platform\" of the UserAppParsingItem class"), fieldGeneratorAppID("field \"AppID\" of the UserAppParsingItem class"), fieldGeneratorAliasMatched("field \"AliasMatched\" of the UserAppParsingItem class"), fieldGeneratorPopularityMeasure("field \"PopularityMeasure\" of the UserAppParsingItem class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UserAppParsingItem class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorIndex.reset();
            fieldGeneratorPlatform.reset();
            fieldGeneratorAppID.reset();
            fieldGeneratorAliasMatched.reset();
            fieldGeneratorPopularityMeasure.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* USERAPPPARSINGITEMJSON_H */
