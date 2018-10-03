/* file "CompoundStockAttributeJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef COMPOUNDSTOCKATTRIBUTEJSON_H
#define COMPOUNDSTOCKATTRIBUTEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "StockAttributeJSON.h"
#include "StockAttributeValueJSON.h"
#include "StockAttributeValueJSON.h"
#include "StockAttributeValueJSON.h"
#include "StockAttributeValueJSON.h"
#include "DateTimeRangeSpecJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class CompoundStockAttributeJSON : public ReferenceCounted
  {
  private:
    bool flagHasAttributeType;
    StockAttributeJSON * storeAttributeType;
    bool flagHasStockExchangeShortName;
    StockAttributeValueJSON * storeStockExchangeShortName;
    bool flagHasStockExchangeLongName;
    StockAttributeValueJSON * storeStockExchangeLongName;
    bool flagHasStockExchangeSymbol;
    StockAttributeValueJSON * storeStockExchangeSymbol;
    bool flagHasCountryName;
    StockAttributeValueJSON * storeCountryName;
    bool flagHasDateRange;
    DateTimeRangeSpecJSON * storeDateRange;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    CompoundStockAttributeJSON(const CompoundStockAttributeJSON &);
    CompoundStockAttributeJSON & operator=(const CompoundStockAttributeJSON &other);

    void  fromJSONAttributeType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStockExchangeShortName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStockExchangeLongName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStockExchangeSymbol(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCountryName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDateRange(JSONValue *json_value, bool ignore_extras = false);


  public:
    CompoundStockAttributeJSON(void);
    virtual ~CompoundStockAttributeJSON(void);
    bool  hasAttributeType(void) const;
    StockAttributeJSON *  getAttributeType(void);
    const StockAttributeJSON *  getAttributeType(void) const;
    StockAttributeJSON::TypeValue  getAttributeTypeValue(void);
    const StockAttributeJSON::TypeValue  getAttributeTypeValue(void) const;
    const char * getAttributeTypeAsChars(void) const;
    std::string  getAttributeTypeAsString(void) const;
    bool  hasStockExchangeShortName(void) const;
    StockAttributeValueJSON *  getStockExchangeShortName(void);
    const StockAttributeValueJSON *  getStockExchangeShortName(void) const;
    bool  hasStockExchangeLongName(void) const;
    StockAttributeValueJSON *  getStockExchangeLongName(void);
    const StockAttributeValueJSON *  getStockExchangeLongName(void) const;
    bool  hasStockExchangeSymbol(void) const;
    StockAttributeValueJSON *  getStockExchangeSymbol(void);
    const StockAttributeValueJSON *  getStockExchangeSymbol(void) const;
    bool  hasCountryName(void) const;
    StockAttributeValueJSON *  getCountryName(void);
    const StockAttributeValueJSON *  getCountryName(void) const;
    bool  hasDateRange(void) const;
    DateTimeRangeSpecJSON *  getDateRange(void);
    const DateTimeRangeSpecJSON *  getDateRange(void) const;

    virtual size_t extraCompoundStockAttributeComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraCompoundStockAttributeComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraCompoundStockAttributeComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraCompoundStockAttributeComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraCompoundStockAttributeLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraCompoundStockAttributeLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setAttributeType(StockAttributeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAttributeType)
          {
            storeAttributeType->remove_reference();
          }
        flagHasAttributeType = true;
        storeAttributeType = new_value;
      }
    void setAttributeType(StockAttributeJSON::TypeValue new_value)
      {
        setAttributeType(new StockAttributeJSON(new_value));
      }
    void setAttributeType(const char *chars)
      {
        StockAttributeJSON::TypeValueKnownValues known = StockAttributeJSON::stringToValue(chars);
        StockAttributeJSON::TypeValue new_value;
        if (known == StockAttributeJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setAttributeType(new_value);
      }
    void setAttributeType(std::string the_string)
      {
        setAttributeType(the_string.c_str());
      }
    void unsetAttributeType(void)
      {
        if (flagHasAttributeType)
          {
            storeAttributeType->remove_reference();
          }
        flagHasAttributeType = false;
      }
    void setStockExchangeShortName(StockAttributeValueJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStockExchangeShortName)
          {
            storeStockExchangeShortName->remove_reference();
          }
        flagHasStockExchangeShortName = true;
        storeStockExchangeShortName = new_value;
      }
    void unsetStockExchangeShortName(void)
      {
        if (flagHasStockExchangeShortName)
          {
            storeStockExchangeShortName->remove_reference();
          }
        flagHasStockExchangeShortName = false;
      }
    void setStockExchangeLongName(StockAttributeValueJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStockExchangeLongName)
          {
            storeStockExchangeLongName->remove_reference();
          }
        flagHasStockExchangeLongName = true;
        storeStockExchangeLongName = new_value;
      }
    void unsetStockExchangeLongName(void)
      {
        if (flagHasStockExchangeLongName)
          {
            storeStockExchangeLongName->remove_reference();
          }
        flagHasStockExchangeLongName = false;
      }
    void setStockExchangeSymbol(StockAttributeValueJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStockExchangeSymbol)
          {
            storeStockExchangeSymbol->remove_reference();
          }
        flagHasStockExchangeSymbol = true;
        storeStockExchangeSymbol = new_value;
      }
    void unsetStockExchangeSymbol(void)
      {
        if (flagHasStockExchangeSymbol)
          {
            storeStockExchangeSymbol->remove_reference();
          }
        flagHasStockExchangeSymbol = false;
      }
    void setCountryName(StockAttributeValueJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasCountryName)
          {
            storeCountryName->remove_reference();
          }
        flagHasCountryName = true;
        storeCountryName = new_value;
      }
    void unsetCountryName(void)
      {
        if (flagHasCountryName)
          {
            storeCountryName->remove_reference();
          }
        flagHasCountryName = false;
      }
    void setDateRange(DateTimeRangeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDateRange)
          {
            storeDateRange->remove_reference();
          }
        flagHasDateRange = true;
        storeDateRange = new_value;
      }
    void unsetDateRange(void)
      {
        if (flagHasDateRange)
          {
            storeDateRange->remove_reference();
          }
        flagHasDateRange = false;
      }

    virtual void extraCompoundStockAttributeAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraCompoundStockAttributeSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraCompoundStockAttributeLookup(key);
        if (old_field == NULL)
          {
            extraCompoundStockAttributeAppendPair(key, new_component);
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
        assert(flagHasAttributeType);
        handler->start_pair("AttributeType");
        storeAttributeType->write_as_json(handler);
        if (flagHasStockExchangeShortName)
          {
            handler->start_pair("StockExchangeShortName");
            storeStockExchangeShortName->write_as_json(handler);
          }
        if (flagHasStockExchangeLongName)
          {
            handler->start_pair("StockExchangeLongName");
            storeStockExchangeLongName->write_as_json(handler);
          }
        if (flagHasStockExchangeSymbol)
          {
            handler->start_pair("StockExchangeSymbol");
            storeStockExchangeSymbol->write_as_json(handler);
          }
        if (flagHasCountryName)
          {
            handler->start_pair("CountryName");
            storeCountryName->write_as_json(handler);
          }
        if (flagHasDateRange)
          {
            handler->start_pair("DateRange");
            storeDateRange->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasAttributeType()))
          {
            return "When parsing the object for %what%, the \"AttributeType\" field was missing.";
          }
        return NULL;
      }

    static CompoundStockAttributeJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static CompoundStockAttributeJSON *from_text(const char *text, bool ignore_extras = false)
      {
        CompoundStockAttributeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CompoundStockAttributeJSON>, CompoundStockAttributeJSON *, bool> generator("Type CompoundStockAttribute", ignore_extras);
            parse_json_value(text, "Text for CompoundStockAttributeJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static CompoundStockAttributeJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        CompoundStockAttributeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CompoundStockAttributeJSON>, CompoundStockAttributeJSON *, bool> generator("Type CompoundStockAttribute", ignore_extras);
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
        JSONHoldingGenerator<StockAttributeJSON::Generator, RCHandle<StockAttributeJSON>, StockAttributeJSON *, bool > fieldGeneratorAttributeType;
        JSONHoldingGenerator<StockAttributeValueJSON::Generator, RCHandle<StockAttributeValueJSON>, StockAttributeValueJSON *, bool > fieldGeneratorStockExchangeShortName;
        JSONHoldingGenerator<StockAttributeValueJSON::Generator, RCHandle<StockAttributeValueJSON>, StockAttributeValueJSON *, bool > fieldGeneratorStockExchangeLongName;
        JSONHoldingGenerator<StockAttributeValueJSON::Generator, RCHandle<StockAttributeValueJSON>, StockAttributeValueJSON *, bool > fieldGeneratorStockExchangeSymbol;
        JSONHoldingGenerator<StockAttributeValueJSON::Generator, RCHandle<StockAttributeValueJSON>, StockAttributeValueJSON *, bool > fieldGeneratorCountryName;
        JSONHoldingGenerator<DateTimeRangeSpecJSON::Generator, RCHandle<DateTimeRangeSpecJSON>, DateTimeRangeSpecJSON *, bool > fieldGeneratorDateRange;
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
            CompoundStockAttributeJSON *result = new CompoundStockAttributeJSON();
            assert(result != NULL);
            RCHandle<CompoundStockAttributeJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraCompoundStockAttributeAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(CompoundStockAttributeJSON *result)
          {
            if (fieldGeneratorAttributeType.have_value)
              {
                result->setAttributeType(fieldGeneratorAttributeType.value.referenced());
                fieldGeneratorAttributeType.have_value = false;
              }
            else if (!(result->hasAttributeType()))
              {
                error("When parsing the object for %what%, the \"AttributeType\" field was missing.");
              }
            if (fieldGeneratorStockExchangeShortName.have_value)
              {
                result->setStockExchangeShortName(fieldGeneratorStockExchangeShortName.value.referenced());
                fieldGeneratorStockExchangeShortName.have_value = false;
              }
            if (fieldGeneratorStockExchangeLongName.have_value)
              {
                result->setStockExchangeLongName(fieldGeneratorStockExchangeLongName.value.referenced());
                fieldGeneratorStockExchangeLongName.have_value = false;
              }
            if (fieldGeneratorStockExchangeSymbol.have_value)
              {
                result->setStockExchangeSymbol(fieldGeneratorStockExchangeSymbol.value.referenced());
                fieldGeneratorStockExchangeSymbol.have_value = false;
              }
            if (fieldGeneratorCountryName.have_value)
              {
                result->setCountryName(fieldGeneratorCountryName.value.referenced());
                fieldGeneratorCountryName.have_value = false;
              }
            if (fieldGeneratorDateRange.have_value)
              {
                result->setDateRange(fieldGeneratorDateRange.value.referenced());
                fieldGeneratorDateRange.have_value = false;
              }
          }
        virtual void handle_result(CompoundStockAttributeJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "ttributeType") == 0)
                        return &fieldGeneratorAttributeType;
                    break;
                case 'C':
                    if (strcmp(&(field_name[1]), "ountryName") == 0)
                        return &fieldGeneratorCountryName;
                    break;
                case 'D':
                    if (strcmp(&(field_name[1]), "ateRange") == 0)
                        return &fieldGeneratorDateRange;
                    break;
                case 'S':
                    if (strncmp(&(field_name[1]), "tockExchange", 12) == 0)
                      {
                        switch ((unsigned char)(field_name[13]))
                          {
                            case 'L':
                                if (strcmp(&(field_name[14]), "ongName") == 0)
                                    return &fieldGeneratorStockExchangeLongName;
                                break;
                            case 'S':
                                switch ((unsigned char)(field_name[14]))
                                  {
                                    case 'h':
                                        if (strcmp(&(field_name[15]), "ortName") == 0)
                                            return &fieldGeneratorStockExchangeShortName;
                                        break;
                                    case 'y':
                                        if (strcmp(&(field_name[15]), "mbol") == 0)
                                            return &fieldGeneratorStockExchangeSymbol;
                                        break;
                                    default:
                                        break;
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
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorAttributeType("field \"AttributeType\" of the CompoundStockAttribute class", ignore_extras), fieldGeneratorStockExchangeShortName("field \"StockExchangeShortName\" of the CompoundStockAttribute class", ignore_extras), fieldGeneratorStockExchangeLongName("field \"StockExchangeLongName\" of the CompoundStockAttribute class", ignore_extras), fieldGeneratorStockExchangeSymbol("field \"StockExchangeSymbol\" of the CompoundStockAttribute class", ignore_extras), fieldGeneratorCountryName("field \"CountryName\" of the CompoundStockAttribute class", ignore_extras), fieldGeneratorDateRange("field \"DateRange\" of the CompoundStockAttribute class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the CompoundStockAttribute class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorAttributeType.reset();
            fieldGeneratorStockExchangeShortName.reset();
            fieldGeneratorStockExchangeLongName.reset();
            fieldGeneratorStockExchangeSymbol.reset();
            fieldGeneratorCountryName.reset();
            fieldGeneratorDateRange.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* COMPOUNDSTOCKATTRIBUTEJSON_H */
