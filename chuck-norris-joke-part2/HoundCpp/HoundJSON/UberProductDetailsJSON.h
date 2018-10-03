/* file "UberProductDetailsJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERPRODUCTDETAILSJSON_H
#define UBERPRODUCTDETAILSJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONBooleanGenerator.h"
#include "JSONNullGenerator.h"
#include "JSONParallelGenerator.h"
#include <string>
#include "OInteger.h"
#include "UberPriceDetailsJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UberProductDetailsJSON : public ReferenceCounted
  {
  public:
    struct Typeprice_details
      {
        size_t key;
        union
          {
            UberPriceDetailsJSON * choice0;
            bool choice1;
          } u;
      };

  private:
    bool flagHasproduct_id;
    std::string storeproduct_id;
    bool flagHasdescription;
    std::string storedescription;
    bool flagHasdisplay_name;
    std::string storedisplay_name;
    bool flagHascapacity;
    OInteger storecapacity;
    bool flagHasprice_details;
    Typeprice_details storeprice_details;
    bool flagHasimage;
    std::string storeimage;
    bool flagHasshared;
    bool storeshared;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UberProductDetailsJSON(const UberProductDetailsJSON &);
    UberProductDetailsJSON & operator=(const UberProductDetailsJSON &other);

    void  fromJSONproduct_id(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONdescription(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONdisplay_name(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONcapacity(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONprice_details(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONimage(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONshared(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberProductDetailsJSON(void);
    virtual ~UberProductDetailsJSON(void);
    bool  hasproduct_id(void) const;
    std::string  getproduct_id(void);
    const std::string  getproduct_id(void) const;
    bool  hasdescription(void) const;
    std::string  getdescription(void);
    const std::string  getdescription(void) const;
    bool  hasdisplay_name(void) const;
    std::string  getdisplay_name(void);
    const std::string  getdisplay_name(void) const;
    bool  hascapacity(void) const;
    OInteger  getcapacity(void);
    const OInteger  getcapacity(void) const;
    bool  hasprice_details(void) const;
    Typeprice_details  getprice_details(void);
    const Typeprice_details  getprice_details(void) const;
    bool  hasimage(void) const;
    std::string  getimage(void);
    const std::string  getimage(void) const;
    bool  hasshared(void) const;
    bool  getshared(void);
    const bool  getshared(void) const;

    virtual size_t extraUberProductDetailsComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberProductDetailsComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberProductDetailsComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberProductDetailsComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberProductDetailsLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberProductDetailsLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setproduct_id(std::string new_value)
      {
        flagHasproduct_id = true;
        storeproduct_id = new_value;
      }
    void unsetproduct_id(void)
      {
        flagHasproduct_id = false;
      }
    void setdescription(std::string new_value)
      {
        flagHasdescription = true;
        storedescription = new_value;
      }
    void unsetdescription(void)
      {
        flagHasdescription = false;
      }
    void setdisplay_name(std::string new_value)
      {
        flagHasdisplay_name = true;
        storedisplay_name = new_value;
      }
    void unsetdisplay_name(void)
      {
        flagHasdisplay_name = false;
      }
    void setcapacity(OInteger new_value)
      {
        flagHascapacity = true;
        if (new_value < 0)
            throw("The value for field capacity of UberProductDetailsJSON is less than the lower bound (0) for that field.");
        storecapacity = new_value;
      }
    void unsetcapacity(void)
      {
        flagHascapacity = false;
      }
    void setprice_details(Typeprice_details new_value)
      {
        switch (new_value.key)
          {
            case 0:
                new_value.u.choice0->add_reference();
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        if (flagHasprice_details)
          {
            switch (storeprice_details.key)
              {
                case 0:
                    storeprice_details.u.choice0->remove_reference();
                    break;
                case 1:
                    break;
                default:
                    assert(false);
              }
          }
        flagHasprice_details = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeprice_details = new_value;
      }
    void unsetprice_details(void)
      {
        if (flagHasprice_details)
          {
            switch (storeprice_details.key)
              {
                case 0:
                    storeprice_details.u.choice0->remove_reference();
                    break;
                case 1:
                    break;
                default:
                    assert(false);
              }
          }
        flagHasprice_details = false;
      }
    void setimage(std::string new_value)
      {
        flagHasimage = true;
        storeimage = new_value;
      }
    void unsetimage(void)
      {
        flagHasimage = false;
      }
    void setshared(bool new_value)
      {
        flagHasshared = true;
        storeshared = new_value;
      }
    void unsetshared(void)
      {
        flagHasshared = false;
      }

    virtual void extraUberProductDetailsAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberProductDetailsSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberProductDetailsLookup(key);
        if (old_field == NULL)
          {
            extraUberProductDetailsAppendPair(key, new_component);
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
        assert(flagHasproduct_id);
        handler->start_pair("product_id");
        handler->string_value(storeproduct_id);
        assert(flagHasdescription);
        handler->start_pair("description");
        handler->string_value(storedescription);
        assert(flagHasdisplay_name);
        handler->start_pair("display_name");
        handler->string_value(storedisplay_name);
        assert(flagHascapacity);
        handler->start_pair("capacity");
        handler->number_value(storecapacity.get_o_integer());
        assert(flagHasprice_details);
        handler->start_pair("price_details");
        switch (storeprice_details.key)
          {
            case 0:
                storeprice_details.u.choice0->write_as_json(handler);
                break;
            case 1:
                handler->null_value();
                break;
            default:
                assert(false);
          }
        assert(flagHasimage);
        handler->start_pair("image");
        handler->string_value(storeimage);
        assert(flagHasshared);
        handler->start_pair("shared");
        handler->boolean_value(storeshared);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasproduct_id()))
          {
            return "When parsing the object for %what%, the \"product_id\" field was missing.";
          }
        if (!(hasdescription()))
          {
            return "When parsing the object for %what%, the \"description\" field was missing.";
          }
        if (!(hasdisplay_name()))
          {
            return "When parsing the object for %what%, the \"display_name\" field was missing.";
          }
        if (!(hascapacity()))
          {
            return "When parsing the object for %what%, the \"capacity\" field was missing.";
          }
        if (!(hasprice_details()))
          {
            return "When parsing the object for %what%, the \"price_details\" field was missing.";
          }
        if (!(hasimage()))
          {
            return "When parsing the object for %what%, the \"image\" field was missing.";
          }
        if (!(hasshared()))
          {
            return "When parsing the object for %what%, the \"shared\" field was missing.";
          }
        return NULL;
      }

    static UberProductDetailsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberProductDetailsJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberProductDetailsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberProductDetailsJSON>, UberProductDetailsJSON *, bool> generator("Type UberProductDetails", ignore_extras);
            parse_json_value(text, "Text for UberProductDetailsJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberProductDetailsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberProductDetailsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberProductDetailsJSON>, UberProductDetailsJSON *, bool> generator("Type UberProductDetails", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorproduct_id;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratordescription;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratordisplay_name;
        static char lowerBoundcapacity[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundcapacity>, OInteger, o_integer > fieldGeneratorcapacity;
    class FieldGeneratorprice_details : public JSONParallelGenerator
          {
          private:
            JSONHoldingGenerator<UberPriceDetailsJSON::Generator, RCHandle<UberPriceDetailsJSON>, UberPriceDetailsJSON *, bool > field0;
            JSONHoldingGenerator<JSONNullGenerator, bool, bool > field1;
            JSONHandler *all_handlers[2];

          protected:
            size_t start(JSONHandler ***parallel_handlers_location)
              {
                *parallel_handlers_location = &(all_handlers[0]);
                return 2;
              }
            void finish(size_t winning_index)
              {
                Typeprice_details result;
                result.key = winning_index;
                switch (winning_index)
                  {
                    case 0:
                      {
                        assert(field0.have_value);
                        result.u.choice0 = field0.value.referenced();
                        break;
                      }
                    case 1:
                      {
                        assert(field1.have_value);
                        result.u.choice1 = field1.value;
                        break;
                      }
                    default:
                      {
                        assert(false);
                      }
                  }
                handle_result(result);
              }
            virtual void handle_result(Typeprice_details result) = 0;

          public:
            FieldGeneratorprice_details(bool ignore_extras) : field0("option 0 of field \"price_details\"", ignore_extras), field1("option 1 of field \"price_details\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorprice_details(std::string what, bool ignore_extras) : field0("option 0 of field \"price_details\"", ignore_extras), field1("option 1 of field \"price_details\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorprice_details(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class Holderprice_details
          {
          private:
            bool have_data;
            Typeprice_details data;

          public:
            Holderprice_details(void) : have_data(false)  { }
            Holderprice_details(Typeprice_details init_data) : have_data(true), data(init_data)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          data.u.choice0->add_reference();
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            Holderprice_details(const Holderprice_details &other) : have_data(other.haveData()), data(other.referenced())
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          data.u.choice0->add_reference();
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            ~Holderprice_details(void)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          data.u.choice0->remove_reference();
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }

            void operator=(const Holderprice_details &other)
              {
                Typeprice_details new_data;
                if (other.haveData())
                  {
                    new_data = other.referenced();
                    switch (new_data.key)
                      {
                        case 0:
                          new_data.u.choice0->add_reference();
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          data.u.choice0->remove_reference();
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                have_data = other.haveData();
                if (have_data)
                    data = new_data;
              }
            bool haveData(void) const
              {
                return have_data;
              }
            Typeprice_details referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorprice_details, Holderprice_details, Typeprice_details, bool > fieldGeneratorprice_details;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorimage;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorshared;
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
            UberProductDetailsJSON *result = new UberProductDetailsJSON();
            assert(result != NULL);
            RCHandle<UberProductDetailsJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberProductDetailsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(UberProductDetailsJSON *result)
          {
            if (fieldGeneratorproduct_id.have_value)
              {
                result->setproduct_id(fieldGeneratorproduct_id.value);
                fieldGeneratorproduct_id.have_value = false;
              }
            else if (!(result->hasproduct_id()))
              {
                error("When parsing the object for %what%, the \"product_id\" field was missing.");
              }
            if (fieldGeneratordescription.have_value)
              {
                result->setdescription(fieldGeneratordescription.value);
                fieldGeneratordescription.have_value = false;
              }
            else if (!(result->hasdescription()))
              {
                error("When parsing the object for %what%, the \"description\" field was missing.");
              }
            if (fieldGeneratordisplay_name.have_value)
              {
                result->setdisplay_name(fieldGeneratordisplay_name.value);
                fieldGeneratordisplay_name.have_value = false;
              }
            else if (!(result->hasdisplay_name()))
              {
                error("When parsing the object for %what%, the \"display_name\" field was missing.");
              }
            if (fieldGeneratorcapacity.have_value)
              {
                result->setcapacity(fieldGeneratorcapacity.value);
                fieldGeneratorcapacity.have_value = false;
              }
            else if (!(result->hascapacity()))
              {
                error("When parsing the object for %what%, the \"capacity\" field was missing.");
              }
            if (fieldGeneratorprice_details.have_value)
              {
                result->setprice_details(fieldGeneratorprice_details.value.referenced());
                fieldGeneratorprice_details.have_value = false;
              }
            else if (!(result->hasprice_details()))
              {
                error("When parsing the object for %what%, the \"price_details\" field was missing.");
              }
            if (fieldGeneratorimage.have_value)
              {
                result->setimage(fieldGeneratorimage.value);
                fieldGeneratorimage.have_value = false;
              }
            else if (!(result->hasimage()))
              {
                error("When parsing the object for %what%, the \"image\" field was missing.");
              }
            if (fieldGeneratorshared.have_value)
              {
                result->setshared(fieldGeneratorshared.value);
                fieldGeneratorshared.have_value = false;
              }
            else if (!(result->hasshared()))
              {
                error("When parsing the object for %what%, the \"shared\" field was missing.");
              }
          }
        virtual void handle_result(UberProductDetailsJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'c':
                    if (strcmp(&(field_name[1]), "apacity") == 0)
                        return &fieldGeneratorcapacity;
                    break;
                case 'd':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            if (strcmp(&(field_name[2]), "scription") == 0)
                                return &fieldGeneratordescription;
                            break;
                        case 'i':
                            if (strcmp(&(field_name[2]), "splay_name") == 0)
                                return &fieldGeneratordisplay_name;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'i':
                    if (strcmp(&(field_name[1]), "mage") == 0)
                        return &fieldGeneratorimage;
                    break;
                case 'p':
                    if (strncmp(&(field_name[1]), "r", 1) == 0)
                      {
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'i':
                                if (strcmp(&(field_name[3]), "ce_details") == 0)
                                    return &fieldGeneratorprice_details;
                                break;
                            case 'o':
                                if (strcmp(&(field_name[3]), "duct_id") == 0)
                                    return &fieldGeneratorproduct_id;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 's':
                    if (strcmp(&(field_name[1]), "hared") == 0)
                        return &fieldGeneratorshared;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorproduct_id("field \"product_id\" of the UberProductDetails class"), fieldGeneratordescription("field \"description\" of the UberProductDetails class"), fieldGeneratordisplay_name("field \"display_name\" of the UberProductDetails class"), fieldGeneratorcapacity("field \"capacity\" of the UberProductDetails class"), fieldGeneratorprice_details("field \"price_details\" of the UberProductDetails class", ignore_extras), fieldGeneratorimage("field \"image\" of the UberProductDetails class"), fieldGeneratorshared("field \"shared\" of the UberProductDetails class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberProductDetails class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorproduct_id.reset();
            fieldGeneratordescription.reset();
            fieldGeneratordisplay_name.reset();
            fieldGeneratorcapacity.reset();
            fieldGeneratorprice_details.reset();
            fieldGeneratorimage.reset();
            fieldGeneratorshared.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UBERPRODUCTDETAILSJSON_H */
