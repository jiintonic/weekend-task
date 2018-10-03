/* file "WhoJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef WHOJSON_H
#define WHOJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include <string>
#include "DateAndOrTimeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class WhoJSON : public ReferenceCounted
  {
  public:
    enum TypeSex
      {
        Sex_Female,
        Sex_Male
      };

    static TypeSex  stringToSex(const char *chars);
    static const char * stringFromSex(TypeSex the_enum);

  private:
    bool flagHasFullName;
    std::string storeFullName;
    bool flagHasSpokenName;
    std::string storeSpokenName;
    bool flagHasFullNamePronunciation;
    std::string storeFullNamePronunciation;
    bool flagHasAliases;
    std::vector< std::string > storeAliases;
    bool flagHasAliasPronunciations;
    std::vector< std::string > storeAliasPronunciations;
    bool flagHasFirstName;
    std::string storeFirstName;
    bool flagHasLastName;
    std::string storeLastName;
    bool flagHasReferredToAs;
    std::string storeReferredToAs;
    bool flagHasSex;
    TypeSex storeSex;
    bool flagHasBirthday;
    DateAndOrTimeJSON * storeBirthday;
    bool flagHasWikipediaArticleTitle;
    std::string storeWikipediaArticleTitle;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    WhoJSON(const WhoJSON &);
    WhoJSON & operator=(const WhoJSON &other);

    void  fromJSONFullName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFullNamePronunciation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAliases(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAliasPronunciations(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFirstName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLastName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONReferredToAs(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSex(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBirthday(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWikipediaArticleTitle(JSONValue *json_value, bool ignore_extras = false);


  public:
    WhoJSON(void);
    virtual ~WhoJSON(void);
    bool  hasFullName(void) const;
    std::string  getFullName(void);
    const std::string  getFullName(void) const;
    bool  hasSpokenName(void) const;
    std::string  getSpokenName(void);
    const std::string  getSpokenName(void) const;
    bool  hasFullNamePronunciation(void) const;
    std::string  getFullNamePronunciation(void);
    const std::string  getFullNamePronunciation(void) const;
    bool  hasAliases(void) const;
    size_t  countOfAliases(void) const;
    std::string  elementOfAliases(size_t element_num);
    const std::string  elementOfAliases(size_t element_num) const;
    std::vector< std::string >  getAliases(void);
    const std::vector< std::string >  getAliases(void) const;
    bool  hasAliasPronunciations(void) const;
    size_t  countOfAliasPronunciations(void) const;
    std::string  elementOfAliasPronunciations(size_t element_num);
    const std::string  elementOfAliasPronunciations(size_t element_num) const;
    std::vector< std::string >  getAliasPronunciations(void);
    const std::vector< std::string >  getAliasPronunciations(void) const;
    bool  hasFirstName(void) const;
    std::string  getFirstName(void);
    const std::string  getFirstName(void) const;
    bool  hasLastName(void) const;
    std::string  getLastName(void);
    const std::string  getLastName(void) const;
    bool  hasReferredToAs(void) const;
    std::string  getReferredToAs(void);
    const std::string  getReferredToAs(void) const;
    bool  hasSex(void) const;
    TypeSex  getSex(void);
    const TypeSex  getSex(void) const;
    const char * getSexAsChars(void) const;
    std::string  getSexAsString(void) const;
    bool  hasBirthday(void) const;
    DateAndOrTimeJSON *  getBirthday(void);
    const DateAndOrTimeJSON *  getBirthday(void) const;
    bool  hasWikipediaArticleTitle(void) const;
    std::string  getWikipediaArticleTitle(void);
    const std::string  getWikipediaArticleTitle(void) const;

    virtual size_t extraWhoComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraWhoComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraWhoComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraWhoComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraWhoLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraWhoLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setFullName(std::string new_value)
      {
        flagHasFullName = true;
        storeFullName = new_value;
      }
    void unsetFullName(void)
      {
        flagHasFullName = false;
      }
    void setSpokenName(std::string new_value)
      {
        flagHasSpokenName = true;
        storeSpokenName = new_value;
      }
    void unsetSpokenName(void)
      {
        flagHasSpokenName = false;
      }
    void setFullNamePronunciation(std::string new_value)
      {
        flagHasFullNamePronunciation = true;
        storeFullNamePronunciation = new_value;
      }
    void unsetFullNamePronunciation(void)
      {
        flagHasFullNamePronunciation = false;
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
    void initAliasPronunciations(void)
      {
        flagHasAliasPronunciations = true;
        storeAliasPronunciations.clear();
      }
    void appendAliasPronunciations(std::string to_append)
      {
        if (!flagHasAliasPronunciations)
          {
            flagHasAliasPronunciations = true;
            storeAliasPronunciations.clear();
          }
        assert(flagHasAliasPronunciations);
        storeAliasPronunciations.push_back(to_append);
      }
    void unsetAliasPronunciations(void)
      {
        flagHasAliasPronunciations = false;
        storeAliasPronunciations.clear();
      }
    void setFirstName(std::string new_value)
      {
        flagHasFirstName = true;
        storeFirstName = new_value;
      }
    void unsetFirstName(void)
      {
        flagHasFirstName = false;
      }
    void setLastName(std::string new_value)
      {
        flagHasLastName = true;
        storeLastName = new_value;
      }
    void unsetLastName(void)
      {
        flagHasLastName = false;
      }
    void setReferredToAs(std::string new_value)
      {
        flagHasReferredToAs = true;
        storeReferredToAs = new_value;
      }
    void unsetReferredToAs(void)
      {
        flagHasReferredToAs = false;
      }
    void setSex(TypeSex new_value)
      {
        flagHasSex = true;
        storeSex = new_value;
      }
    void setSex(const char *chars)
      {
        setSex(stringToSex(chars));
      }
    void setSex(std::string the_string)
      {
        setSex(stringToSex(the_string.c_str()));
      }
    void unsetSex(void)
      {
        flagHasSex = false;
      }
    void setBirthday(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasBirthday)
          {
            storeBirthday->remove_reference();
          }
        flagHasBirthday = true;
        storeBirthday = new_value;
      }
    void unsetBirthday(void)
      {
        if (flagHasBirthday)
          {
            storeBirthday->remove_reference();
          }
        flagHasBirthday = false;
      }
    void setWikipediaArticleTitle(std::string new_value)
      {
        flagHasWikipediaArticleTitle = true;
        storeWikipediaArticleTitle = new_value;
      }
    void unsetWikipediaArticleTitle(void)
      {
        flagHasWikipediaArticleTitle = false;
      }

    virtual void extraWhoAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraWhoSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraWhoLookup(key);
        if (old_field == NULL)
          {
            extraWhoAppendPair(key, new_component);
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
        if (flagHasFullName)
          {
            handler->start_pair("FullName");
            handler->string_value(storeFullName);
          }
        if (flagHasSpokenName)
          {
            handler->start_pair("SpokenName");
            handler->string_value(storeSpokenName);
          }
        if (flagHasFullNamePronunciation)
          {
            handler->start_pair("FullNamePronunciation");
            handler->string_value(storeFullNamePronunciation);
          }
        if (flagHasAliases)
          {
            handler->start_pair("Aliases");
            assert(storeAliases.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeAliases.size(); ++num1)
              {
                handler->string_value(storeAliases[num1]);
              }
            handler->finish_array();
          }
        if (flagHasAliasPronunciations)
          {
            handler->start_pair("AliasPronunciations");
            assert(storeAliasPronunciations.size() >= 1);
            handler->start_array();
            for (size_t num2 = 0; num2 < storeAliasPronunciations.size(); ++num2)
              {
                handler->string_value(storeAliasPronunciations[num2]);
              }
            handler->finish_array();
          }
        if (flagHasFirstName)
          {
            handler->start_pair("FirstName");
            handler->string_value(storeFirstName);
          }
        if (flagHasLastName)
          {
            handler->start_pair("LastName");
            handler->string_value(storeLastName);
          }
        if (flagHasReferredToAs)
          {
            handler->start_pair("ReferredToAs");
            handler->string_value(storeReferredToAs);
          }
        if (flagHasSex)
          {
            handler->start_pair("Sex");
            switch (storeSex)
              {
                case Sex_Female:
                    handler->string_value("Female");
                    break;
                case Sex_Male:
                    handler->string_value("Male");
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasBirthday)
          {
            handler->start_pair("Birthday");
            storeBirthday->write_as_json(handler);
          }
        if (flagHasWikipediaArticleTitle)
          {
            handler->start_pair("WikipediaArticleTitle");
            handler->string_value(storeWikipediaArticleTitle);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static WhoJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static WhoJSON *from_text(const char *text, bool ignore_extras = false)
      {
        WhoJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<WhoJSON>, WhoJSON *, bool> generator("Type Who", ignore_extras);
            parse_json_value(text, "Text for WhoJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static WhoJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        WhoJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<WhoJSON>, WhoJSON *, bool> generator("Type Who", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorFullName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorFullNamePronunciation;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAliases;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAliasPronunciations;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorFirstName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLastName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorReferredToAs;
    class FieldGeneratorSex : public JSONStringGenerator
          {
          protected:
            FieldGeneratorSex(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorSex(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToSex(result));
              }
            virtual void handle_result(TypeSex result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorSex, TypeSex, TypeSex > fieldGeneratorSex;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorBirthday;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWikipediaArticleTitle;
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
            WhoJSON *result = new WhoJSON();
            assert(result != NULL);
            RCHandle<WhoJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraWhoAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(WhoJSON *result)
          {
            if (fieldGeneratorFullName.have_value)
              {
                result->setFullName(fieldGeneratorFullName.value);
                fieldGeneratorFullName.have_value = false;
              }
            if (fieldGeneratorSpokenName.have_value)
              {
                result->setSpokenName(fieldGeneratorSpokenName.value);
                fieldGeneratorSpokenName.have_value = false;
              }
            if (fieldGeneratorFullNamePronunciation.have_value)
              {
                result->setFullNamePronunciation(fieldGeneratorFullNamePronunciation.value);
                fieldGeneratorFullNamePronunciation.have_value = false;
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
            if (fieldGeneratorAliasPronunciations.have_value)
              {
                result->initAliasPronunciations();
                size_t count = fieldGeneratorAliasPronunciations.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAliasPronunciations(fieldGeneratorAliasPronunciations.value[num]);
                  }
                fieldGeneratorAliasPronunciations.value.clear();
                fieldGeneratorAliasPronunciations.have_value = false;
              }
            if (fieldGeneratorFirstName.have_value)
              {
                result->setFirstName(fieldGeneratorFirstName.value);
                fieldGeneratorFirstName.have_value = false;
              }
            if (fieldGeneratorLastName.have_value)
              {
                result->setLastName(fieldGeneratorLastName.value);
                fieldGeneratorLastName.have_value = false;
              }
            if (fieldGeneratorReferredToAs.have_value)
              {
                result->setReferredToAs(fieldGeneratorReferredToAs.value);
                fieldGeneratorReferredToAs.have_value = false;
              }
            if (fieldGeneratorSex.have_value)
              {
                result->setSex(fieldGeneratorSex.value);
                fieldGeneratorSex.have_value = false;
              }
            if (fieldGeneratorBirthday.have_value)
              {
                result->setBirthday(fieldGeneratorBirthday.value.referenced());
                fieldGeneratorBirthday.have_value = false;
              }
            if (fieldGeneratorWikipediaArticleTitle.have_value)
              {
                result->setWikipediaArticleTitle(fieldGeneratorWikipediaArticleTitle.value);
                fieldGeneratorWikipediaArticleTitle.have_value = false;
              }
          }
        virtual void handle_result(WhoJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strncmp(&(field_name[1]), "lias", 4) == 0)
                      {
                        switch ((unsigned char)(field_name[5]))
                          {
                            case 'P':
                                if (strcmp(&(field_name[6]), "ronunciations") == 0)
                                    return &fieldGeneratorAliasPronunciations;
                                break;
                            case 'e':
                                if (strcmp(&(field_name[6]), "s") == 0)
                                    return &fieldGeneratorAliases;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'B':
                    if (strcmp(&(field_name[1]), "irthday") == 0)
                        return &fieldGeneratorBirthday;
                    break;
                case 'F':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'i':
                            if (strcmp(&(field_name[2]), "rstName") == 0)
                                return &fieldGeneratorFirstName;
                            break;
                        case 'u':
                            if (strncmp(&(field_name[2]), "llName", 6) == 0)
                              {
                                switch ((unsigned char)(field_name[8]))
                                  {
                                    case 0:
                                        return &fieldGeneratorFullName;
                                    case 'P':
                                        if (strcmp(&(field_name[9]), "ronunciation") == 0)
                                            return &fieldGeneratorFullNamePronunciation;
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
                case 'L':
                    if (strcmp(&(field_name[1]), "astName") == 0)
                        return &fieldGeneratorLastName;
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "eferredToAs") == 0)
                        return &fieldGeneratorReferredToAs;
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            if (strcmp(&(field_name[2]), "x") == 0)
                                return &fieldGeneratorSex;
                            break;
                        case 'p':
                            if (strcmp(&(field_name[2]), "okenName") == 0)
                                return &fieldGeneratorSpokenName;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'W':
                    if (strcmp(&(field_name[1]), "ikipediaArticleTitle") == 0)
                        return &fieldGeneratorWikipediaArticleTitle;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorFullName("field \"FullName\" of the Who class"), fieldGeneratorSpokenName("field \"SpokenName\" of the Who class"), fieldGeneratorFullNamePronunciation("field \"FullNamePronunciation\" of the Who class"), fieldGeneratorAliases("field \"Aliases\" of the Who class"), fieldGeneratorAliasPronunciations("field \"AliasPronunciations\" of the Who class"), fieldGeneratorFirstName("field \"FirstName\" of the Who class"), fieldGeneratorLastName("field \"LastName\" of the Who class"), fieldGeneratorReferredToAs("field \"ReferredToAs\" of the Who class"), fieldGeneratorSex("field \"Sex\" of the Who class"), fieldGeneratorBirthday("field \"Birthday\" of the Who class", ignore_extras), fieldGeneratorWikipediaArticleTitle("field \"WikipediaArticleTitle\" of the Who class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the Who class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorFullName.reset();
            fieldGeneratorSpokenName.reset();
            fieldGeneratorFullNamePronunciation.reset();
            fieldGeneratorAliases.reset();
            fieldGeneratorAliasPronunciations.reset();
            fieldGeneratorFirstName.reset();
            fieldGeneratorLastName.reset();
            fieldGeneratorReferredToAs.reset();
            fieldGeneratorSex.reset();
            fieldGeneratorBirthday.reset();
            fieldGeneratorWikipediaArticleTitle.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* WHOJSON_H */
