/* file "PriceRangeJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef PRICERANGEJSON_H
#define PRICERANGEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONBooleanGenerator.h"
#include "MonetaryAmountJSON.h"
#include "MonetaryAmountJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class PriceRangeJSON : public ReferenceCounted
  {
  private:
    bool flagHasFrom;
    MonetaryAmountJSON * storeFrom;
    bool flagHasIsFromInclusive;
    bool storeIsFromInclusive;
    bool flagHasTo;
    MonetaryAmountJSON * storeTo;
    bool flagHasIsToInclusive;
    bool storeIsToInclusive;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    PriceRangeJSON(const PriceRangeJSON &);
    PriceRangeJSON & operator=(const PriceRangeJSON &other);

    void  fromJSONFrom(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsFromInclusive(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTo(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsToInclusive(JSONValue *json_value, bool ignore_extras = false);


  public:
    PriceRangeJSON(void);
    virtual ~PriceRangeJSON(void);
    bool  hasFrom(void) const;
    MonetaryAmountJSON *  getFrom(void);
    const MonetaryAmountJSON *  getFrom(void) const;
    bool  hasIsFromInclusive(void) const;
    bool  getIsFromInclusive(void);
    const bool  getIsFromInclusive(void) const;
    bool  hasTo(void) const;
    MonetaryAmountJSON *  getTo(void);
    const MonetaryAmountJSON *  getTo(void) const;
    bool  hasIsToInclusive(void) const;
    bool  getIsToInclusive(void);
    const bool  getIsToInclusive(void) const;

    virtual size_t extraPriceRangeComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraPriceRangeComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraPriceRangeComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraPriceRangeComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraPriceRangeLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraPriceRangeLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setFrom(MonetaryAmountJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasFrom)
          {
            storeFrom->remove_reference();
          }
        flagHasFrom = true;
        storeFrom = new_value;
      }
    void unsetFrom(void)
      {
        if (flagHasFrom)
          {
            storeFrom->remove_reference();
          }
        flagHasFrom = false;
      }
    void setIsFromInclusive(bool new_value)
      {
        flagHasIsFromInclusive = true;
        storeIsFromInclusive = new_value;
      }
    void unsetIsFromInclusive(void)
      {
        flagHasIsFromInclusive = false;
      }
    void setTo(MonetaryAmountJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasTo)
          {
            storeTo->remove_reference();
          }
        flagHasTo = true;
        storeTo = new_value;
      }
    void unsetTo(void)
      {
        if (flagHasTo)
          {
            storeTo->remove_reference();
          }
        flagHasTo = false;
      }
    void setIsToInclusive(bool new_value)
      {
        flagHasIsToInclusive = true;
        storeIsToInclusive = new_value;
      }
    void unsetIsToInclusive(void)
      {
        flagHasIsToInclusive = false;
      }

    virtual void extraPriceRangeAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraPriceRangeSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraPriceRangeLookup(key);
        if (old_field == NULL)
          {
            extraPriceRangeAppendPair(key, new_component);
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
        if (flagHasFrom)
          {
            handler->start_pair("From");
            storeFrom->write_as_json(handler);
          }
        if (flagHasIsFromInclusive)
          {
            handler->start_pair("IsFromInclusive");
            handler->boolean_value(storeIsFromInclusive);
          }
        if (flagHasTo)
          {
            handler->start_pair("To");
            storeTo->write_as_json(handler);
          }
        if (flagHasIsToInclusive)
          {
            handler->start_pair("IsToInclusive");
            handler->boolean_value(storeIsToInclusive);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static PriceRangeJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static PriceRangeJSON *from_text(const char *text, bool ignore_extras = false)
      {
        PriceRangeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<PriceRangeJSON>, PriceRangeJSON *, bool> generator("Type PriceRange", ignore_extras);
            parse_json_value(text, "Text for PriceRangeJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static PriceRangeJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        PriceRangeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<PriceRangeJSON>, PriceRangeJSON *, bool> generator("Type PriceRange", ignore_extras);
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
        JSONHoldingGenerator<MonetaryAmountJSON::Generator, RCHandle<MonetaryAmountJSON>, MonetaryAmountJSON *, bool > fieldGeneratorFrom;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsFromInclusive;
        JSONHoldingGenerator<MonetaryAmountJSON::Generator, RCHandle<MonetaryAmountJSON>, MonetaryAmountJSON *, bool > fieldGeneratorTo;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsToInclusive;
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
            PriceRangeJSON *result = new PriceRangeJSON();
            assert(result != NULL);
            RCHandle<PriceRangeJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraPriceRangeAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(PriceRangeJSON *result)
          {
            if (fieldGeneratorFrom.have_value)
              {
                result->setFrom(fieldGeneratorFrom.value.referenced());
                fieldGeneratorFrom.have_value = false;
              }
            if (fieldGeneratorIsFromInclusive.have_value)
              {
                result->setIsFromInclusive(fieldGeneratorIsFromInclusive.value);
                fieldGeneratorIsFromInclusive.have_value = false;
              }
            if (fieldGeneratorTo.have_value)
              {
                result->setTo(fieldGeneratorTo.value.referenced());
                fieldGeneratorTo.have_value = false;
              }
            if (fieldGeneratorIsToInclusive.have_value)
              {
                result->setIsToInclusive(fieldGeneratorIsToInclusive.value);
                fieldGeneratorIsToInclusive.have_value = false;
              }
          }
        virtual void handle_result(PriceRangeJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'F':
                    if (strcmp(&(field_name[1]), "rom") == 0)
                        return &fieldGeneratorFrom;
                    break;
                case 'I':
                    if (strncmp(&(field_name[1]), "s", 1) == 0)
                      {
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'F':
                                if (strcmp(&(field_name[3]), "romInclusive") == 0)
                                    return &fieldGeneratorIsFromInclusive;
                                break;
                            case 'T':
                                if (strcmp(&(field_name[3]), "oInclusive") == 0)
                                    return &fieldGeneratorIsToInclusive;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "o") == 0)
                        return &fieldGeneratorTo;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorFrom("field \"From\" of the PriceRange class", ignore_extras), fieldGeneratorIsFromInclusive("field \"IsFromInclusive\" of the PriceRange class"), fieldGeneratorTo("field \"To\" of the PriceRange class", ignore_extras), fieldGeneratorIsToInclusive("field \"IsToInclusive\" of the PriceRange class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the PriceRange class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorFrom.reset();
            fieldGeneratorIsFromInclusive.reset();
            fieldGeneratorTo.reset();
            fieldGeneratorIsToInclusive.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* PRICERANGEJSON_H */
