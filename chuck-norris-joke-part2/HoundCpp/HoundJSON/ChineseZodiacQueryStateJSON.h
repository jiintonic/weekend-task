/* file "ChineseZodiacQueryStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CHINESEZODIACQUERYSTATEJSON_H
#define CHINESEZODIACQUERYSTATEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerUnboundRangeGenerator.h"
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


class ChineseZodiacQueryStateJSON : public ReferenceCounted
  {
  public:
    enum TypeQueryType
      {
        QueryType_GeneralInformation,
        QueryType_SignOfGivenYear,
        QueryType_YearOfGivenSign,
        QueryType_SignOfGivenSign
      };

    static TypeQueryType  stringToQueryType(const char *chars);
    static const char * stringFromQueryType(TypeQueryType the_enum);

  private:
    bool flagHasQueryType;
    TypeQueryType storeQueryType;
    bool flagHasYear;
    OInteger storeYear;
    bool flagHasZodiacSign;
    std::string storeZodiacSign;
    bool flagHasOrdinal;
    OInteger storeOrdinal;
    bool flagHasYesOrNo;
    bool storeYesOrNo;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    ChineseZodiacQueryStateJSON(const ChineseZodiacQueryStateJSON &);
    ChineseZodiacQueryStateJSON & operator=(const ChineseZodiacQueryStateJSON &other);

    void  fromJSONQueryType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONYear(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONZodiacSign(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOrdinal(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONYesOrNo(JSONValue *json_value, bool ignore_extras = false);


  public:
    ChineseZodiacQueryStateJSON(void);
    virtual ~ChineseZodiacQueryStateJSON(void);
    bool  hasQueryType(void) const;
    TypeQueryType  getQueryType(void);
    const TypeQueryType  getQueryType(void) const;
    const char * getQueryTypeAsChars(void) const;
    std::string  getQueryTypeAsString(void) const;
    bool  hasYear(void) const;
    OInteger  getYear(void);
    const OInteger  getYear(void) const;
    bool  hasZodiacSign(void) const;
    std::string  getZodiacSign(void);
    const std::string  getZodiacSign(void) const;
    bool  hasOrdinal(void) const;
    OInteger  getOrdinal(void);
    const OInteger  getOrdinal(void) const;
    bool  hasYesOrNo(void) const;
    bool  getYesOrNo(void);
    const bool  getYesOrNo(void) const;

    virtual size_t extraChineseZodiacQueryStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraChineseZodiacQueryStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraChineseZodiacQueryStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraChineseZodiacQueryStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraChineseZodiacQueryStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraChineseZodiacQueryStateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setQueryType(TypeQueryType new_value)
      {
        flagHasQueryType = true;
        storeQueryType = new_value;
      }
    void setQueryType(const char *chars)
      {
        setQueryType(stringToQueryType(chars));
      }
    void setQueryType(std::string the_string)
      {
        setQueryType(stringToQueryType(the_string.c_str()));
      }
    void unsetQueryType(void)
      {
        flagHasQueryType = false;
      }
    void setYear(OInteger new_value)
      {
        flagHasYear = true;
        storeYear = new_value;
      }
    void unsetYear(void)
      {
        flagHasYear = false;
      }
    void setZodiacSign(std::string new_value)
      {
        flagHasZodiacSign = true;
        storeZodiacSign = new_value;
      }
    void unsetZodiacSign(void)
      {
        flagHasZodiacSign = false;
      }
    void setOrdinal(OInteger new_value)
      {
        flagHasOrdinal = true;
        storeOrdinal = new_value;
      }
    void unsetOrdinal(void)
      {
        flagHasOrdinal = false;
      }
    void setYesOrNo(bool new_value)
      {
        flagHasYesOrNo = true;
        storeYesOrNo = new_value;
      }
    void unsetYesOrNo(void)
      {
        flagHasYesOrNo = false;
      }

    virtual void extraChineseZodiacQueryStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraChineseZodiacQueryStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraChineseZodiacQueryStateLookup(key);
        if (old_field == NULL)
          {
            extraChineseZodiacQueryStateAppendPair(key, new_component);
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
        assert(flagHasQueryType);
        handler->start_pair("QueryType");
        switch (storeQueryType)
          {
            case QueryType_GeneralInformation:
                handler->string_value("GeneralInformation");
                break;
            case QueryType_SignOfGivenYear:
                handler->string_value("SignOfGivenYear");
                break;
            case QueryType_YearOfGivenSign:
                handler->string_value("YearOfGivenSign");
                break;
            case QueryType_SignOfGivenSign:
                handler->string_value("SignOfGivenSign");
                break;
            default:
                assert(false);
          }
        if (flagHasYear)
          {
            handler->start_pair("Year");
            handler->number_value(storeYear.get_o_integer());
          }
        if (flagHasZodiacSign)
          {
            handler->start_pair("ZodiacSign");
            handler->string_value(storeZodiacSign);
          }
        if (flagHasOrdinal)
          {
            handler->start_pair("Ordinal");
            handler->number_value(storeOrdinal.get_o_integer());
          }
        if (flagHasYesOrNo)
          {
            handler->start_pair("YesOrNo");
            handler->boolean_value(storeYesOrNo);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasQueryType()))
          {
            return "When parsing the object for %what%, the \"QueryType\" field was missing.";
          }
        return NULL;
      }

    static ChineseZodiacQueryStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ChineseZodiacQueryStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ChineseZodiacQueryStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ChineseZodiacQueryStateJSON>, ChineseZodiacQueryStateJSON *, bool> generator("Type ChineseZodiacQueryState", ignore_extras);
            parse_json_value(text, "Text for ChineseZodiacQueryStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ChineseZodiacQueryStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ChineseZodiacQueryStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ChineseZodiacQueryStateJSON>, ChineseZodiacQueryStateJSON *, bool> generator("Type ChineseZodiacQueryState", ignore_extras);
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
    class FieldGeneratorQueryType : public JSONStringGenerator
          {
          protected:
            FieldGeneratorQueryType(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorQueryType(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToQueryType(result));
              }
            virtual void handle_result(TypeQueryType result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorQueryType, TypeQueryType, TypeQueryType > fieldGeneratorQueryType;
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorYear;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorZodiacSign;
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorOrdinal;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorYesOrNo;
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
            ChineseZodiacQueryStateJSON *result = new ChineseZodiacQueryStateJSON();
            assert(result != NULL);
            RCHandle<ChineseZodiacQueryStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraChineseZodiacQueryStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(ChineseZodiacQueryStateJSON *result)
          {
            if (fieldGeneratorQueryType.have_value)
              {
                result->setQueryType(fieldGeneratorQueryType.value);
                fieldGeneratorQueryType.have_value = false;
              }
            else if (!(result->hasQueryType()))
              {
                error("When parsing the object for %what%, the \"QueryType\" field was missing.");
              }
            if (fieldGeneratorYear.have_value)
              {
                result->setYear(fieldGeneratorYear.value);
                fieldGeneratorYear.have_value = false;
              }
            if (fieldGeneratorZodiacSign.have_value)
              {
                result->setZodiacSign(fieldGeneratorZodiacSign.value);
                fieldGeneratorZodiacSign.have_value = false;
              }
            if (fieldGeneratorOrdinal.have_value)
              {
                result->setOrdinal(fieldGeneratorOrdinal.value);
                fieldGeneratorOrdinal.have_value = false;
              }
            if (fieldGeneratorYesOrNo.have_value)
              {
                result->setYesOrNo(fieldGeneratorYesOrNo.value);
                fieldGeneratorYesOrNo.have_value = false;
              }
          }
        virtual void handle_result(ChineseZodiacQueryStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'O':
                    if (strcmp(&(field_name[1]), "rdinal") == 0)
                        return &fieldGeneratorOrdinal;
                    break;
                case 'Q':
                    if (strcmp(&(field_name[1]), "ueryType") == 0)
                        return &fieldGeneratorQueryType;
                    break;
                case 'Y':
                    if (strncmp(&(field_name[1]), "e", 1) == 0)
                      {
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'a':
                                if (strcmp(&(field_name[3]), "r") == 0)
                                    return &fieldGeneratorYear;
                                break;
                            case 's':
                                if (strcmp(&(field_name[3]), "OrNo") == 0)
                                    return &fieldGeneratorYesOrNo;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'Z':
                    if (strcmp(&(field_name[1]), "odiacSign") == 0)
                        return &fieldGeneratorZodiacSign;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorQueryType("field \"QueryType\" of the ChineseZodiacQueryState class"), fieldGeneratorYear("field \"Year\" of the ChineseZodiacQueryState class"), fieldGeneratorZodiacSign("field \"ZodiacSign\" of the ChineseZodiacQueryState class"), fieldGeneratorOrdinal("field \"Ordinal\" of the ChineseZodiacQueryState class"), fieldGeneratorYesOrNo("field \"YesOrNo\" of the ChineseZodiacQueryState class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the ChineseZodiacQueryState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorQueryType.reset();
            fieldGeneratorYear.reset();
            fieldGeneratorZodiacSign.reset();
            fieldGeneratorOrdinal.reset();
            fieldGeneratorYesOrNo.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* CHINESEZODIACQUERYSTATEJSON_H */
