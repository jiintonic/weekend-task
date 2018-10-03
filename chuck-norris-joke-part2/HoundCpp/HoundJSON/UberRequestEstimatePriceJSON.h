/* file "UberRequestEstimatePriceJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERREQUESTESTIMATEPRICEJSON_H
#define UBERREQUESTESTIMATEPRICEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONNullGenerator.h"
#include "JSONParallelGenerator.h"
#include <string>
#include "EmptyObjectJSON.h"
#include "EmptyObjectJSON.h"
#include "EmptyObjectJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UberRequestEstimatePriceJSON : public ReferenceCounted
  {
  public:
    struct Typelow_estimate
      {
        size_t key;
        union
          {
            double choice0;
            bool choice1;
            EmptyObjectJSON * choice2;
          } u;
      };
    struct Typehigh_estimate
      {
        size_t key;
        union
          {
            double choice0;
            bool choice1;
            EmptyObjectJSON * choice2;
          } u;
      };
    struct Typeminimum
      {
        size_t key;
        union
          {
            double choice0;
            bool choice1;
            EmptyObjectJSON * choice2;
          } u;
      };
    struct Typecurrency_code
      {
        size_t key;
        std::string choice0;
        bool choice1;
      };
    struct Typesurge_multiplier
      {
        size_t key;
        union
          {
            double choice0;
            bool choice1;
          } u;
      };
    struct Typesurge_confirmation_href
      {
        size_t key;
        std::string choice0;
        bool choice1;
      };
    struct Typesurge_confirmation_id
      {
        size_t key;
        std::string choice0;
        bool choice1;
      };

  private:
    bool flagHasdisplay;
    std::string storedisplay;
    bool flagHaslow_estimate;
    Typelow_estimate storelow_estimate;
    bool flagHashigh_estimate;
    Typehigh_estimate storehigh_estimate;
    bool flagHasminimum;
    Typeminimum storeminimum;
    bool flagHascurrency_code;
    Typecurrency_code storecurrency_code;
    bool flagHassurge_multiplier;
    Typesurge_multiplier storesurge_multiplier;
    bool flagHassurge_confirmation_href;
    Typesurge_confirmation_href storesurge_confirmation_href;
    bool flagHassurge_confirmation_id;
    Typesurge_confirmation_id storesurge_confirmation_id;
    bool flagHasfare_id;
    std::string storefare_id;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UberRequestEstimatePriceJSON(const UberRequestEstimatePriceJSON &);
    UberRequestEstimatePriceJSON & operator=(const UberRequestEstimatePriceJSON &other);

    void  fromJSONdisplay(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONlow_estimate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONhigh_estimate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONminimum(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONcurrency_code(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONsurge_multiplier(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONsurge_confirmation_href(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONsurge_confirmation_id(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONfare_id(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberRequestEstimatePriceJSON(void);
    virtual ~UberRequestEstimatePriceJSON(void);
    bool  hasdisplay(void) const;
    std::string  getdisplay(void);
    const std::string  getdisplay(void) const;
    bool  haslow_estimate(void) const;
    Typelow_estimate  getlow_estimate(void);
    const Typelow_estimate  getlow_estimate(void) const;
    bool  hashigh_estimate(void) const;
    Typehigh_estimate  gethigh_estimate(void);
    const Typehigh_estimate  gethigh_estimate(void) const;
    bool  hasminimum(void) const;
    Typeminimum  getminimum(void);
    const Typeminimum  getminimum(void) const;
    bool  hascurrency_code(void) const;
    Typecurrency_code  getcurrency_code(void);
    const Typecurrency_code  getcurrency_code(void) const;
    bool  hassurge_multiplier(void) const;
    Typesurge_multiplier  getsurge_multiplier(void);
    const Typesurge_multiplier  getsurge_multiplier(void) const;
    bool  hassurge_confirmation_href(void) const;
    Typesurge_confirmation_href  getsurge_confirmation_href(void);
    const Typesurge_confirmation_href  getsurge_confirmation_href(void) const;
    bool  hassurge_confirmation_id(void) const;
    Typesurge_confirmation_id  getsurge_confirmation_id(void);
    const Typesurge_confirmation_id  getsurge_confirmation_id(void) const;
    bool  hasfare_id(void) const;
    std::string  getfare_id(void);
    const std::string  getfare_id(void) const;

    virtual size_t extraUberRequestEstimatePriceComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberRequestEstimatePriceComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberRequestEstimatePriceComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberRequestEstimatePriceComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberRequestEstimatePriceLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberRequestEstimatePriceLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setdisplay(std::string new_value)
      {
        flagHasdisplay = true;
        storedisplay = new_value;
      }
    void unsetdisplay(void)
      {
        flagHasdisplay = false;
      }
    void setlow_estimate(Typelow_estimate new_value)
      {
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            case 2:
                new_value.u.choice2->add_reference();
                break;
            default:
                assert(false);
          }
        if (flagHaslow_estimate)
          {
            switch (storelow_estimate.key)
              {
                case 0:
                    break;
                case 1:
                    break;
                case 2:
                    storelow_estimate.u.choice2->remove_reference();
                    break;
                default:
                    assert(false);
              }
          }
        flagHaslow_estimate = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            case 2:
                break;
            default:
                assert(false);
          }
        storelow_estimate = new_value;
      }
    void unsetlow_estimate(void)
      {
        if (flagHaslow_estimate)
          {
            switch (storelow_estimate.key)
              {
                case 0:
                    break;
                case 1:
                    break;
                case 2:
                    storelow_estimate.u.choice2->remove_reference();
                    break;
                default:
                    assert(false);
              }
          }
        flagHaslow_estimate = false;
      }
    void sethigh_estimate(Typehigh_estimate new_value)
      {
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            case 2:
                new_value.u.choice2->add_reference();
                break;
            default:
                assert(false);
          }
        if (flagHashigh_estimate)
          {
            switch (storehigh_estimate.key)
              {
                case 0:
                    break;
                case 1:
                    break;
                case 2:
                    storehigh_estimate.u.choice2->remove_reference();
                    break;
                default:
                    assert(false);
              }
          }
        flagHashigh_estimate = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            case 2:
                break;
            default:
                assert(false);
          }
        storehigh_estimate = new_value;
      }
    void unsethigh_estimate(void)
      {
        if (flagHashigh_estimate)
          {
            switch (storehigh_estimate.key)
              {
                case 0:
                    break;
                case 1:
                    break;
                case 2:
                    storehigh_estimate.u.choice2->remove_reference();
                    break;
                default:
                    assert(false);
              }
          }
        flagHashigh_estimate = false;
      }
    void setminimum(Typeminimum new_value)
      {
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            case 2:
                new_value.u.choice2->add_reference();
                break;
            default:
                assert(false);
          }
        if (flagHasminimum)
          {
            switch (storeminimum.key)
              {
                case 0:
                    break;
                case 1:
                    break;
                case 2:
                    storeminimum.u.choice2->remove_reference();
                    break;
                default:
                    assert(false);
              }
          }
        flagHasminimum = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            case 2:
                break;
            default:
                assert(false);
          }
        storeminimum = new_value;
      }
    void unsetminimum(void)
      {
        if (flagHasminimum)
          {
            switch (storeminimum.key)
              {
                case 0:
                    break;
                case 1:
                    break;
                case 2:
                    storeminimum.u.choice2->remove_reference();
                    break;
                default:
                    assert(false);
              }
          }
        flagHasminimum = false;
      }
    void setcurrency_code(Typecurrency_code new_value)
      {
        flagHascurrency_code = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storecurrency_code = new_value;
      }
    void unsetcurrency_code(void)
      {
        flagHascurrency_code = false;
      }
    void setsurge_multiplier(Typesurge_multiplier new_value)
      {
        flagHassurge_multiplier = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storesurge_multiplier = new_value;
      }
    void unsetsurge_multiplier(void)
      {
        flagHassurge_multiplier = false;
      }
    void setsurge_confirmation_href(Typesurge_confirmation_href new_value)
      {
        flagHassurge_confirmation_href = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storesurge_confirmation_href = new_value;
      }
    void unsetsurge_confirmation_href(void)
      {
        flagHassurge_confirmation_href = false;
      }
    void setsurge_confirmation_id(Typesurge_confirmation_id new_value)
      {
        flagHassurge_confirmation_id = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storesurge_confirmation_id = new_value;
      }
    void unsetsurge_confirmation_id(void)
      {
        flagHassurge_confirmation_id = false;
      }
    void setfare_id(std::string new_value)
      {
        flagHasfare_id = true;
        storefare_id = new_value;
      }
    void unsetfare_id(void)
      {
        flagHasfare_id = false;
      }

    virtual void extraUberRequestEstimatePriceAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberRequestEstimatePriceSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberRequestEstimatePriceLookup(key);
        if (old_field == NULL)
          {
            extraUberRequestEstimatePriceAppendPair(key, new_component);
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
        assert(flagHasdisplay);
        handler->start_pair("display");
        handler->string_value(storedisplay);
        assert(flagHaslow_estimate);
        handler->start_pair("low_estimate");
        switch (storelow_estimate.key)
          {
            case 0:
                if (((double)(long int)storelow_estimate.u.choice0) == storelow_estimate.u.choice0)
                    handler->number_value((long int)storelow_estimate.u.choice0);
                else
                    handler->number_value(storelow_estimate.u.choice0);
                break;
            case 1:
                handler->null_value();
                break;
            case 2:
                storelow_estimate.u.choice2->write_as_json(handler);
                break;
            default:
                assert(false);
          }
        assert(flagHashigh_estimate);
        handler->start_pair("high_estimate");
        switch (storehigh_estimate.key)
          {
            case 0:
                if (((double)(long int)storehigh_estimate.u.choice0) == storehigh_estimate.u.choice0)
                    handler->number_value((long int)storehigh_estimate.u.choice0);
                else
                    handler->number_value(storehigh_estimate.u.choice0);
                break;
            case 1:
                handler->null_value();
                break;
            case 2:
                storehigh_estimate.u.choice2->write_as_json(handler);
                break;
            default:
                assert(false);
          }
        assert(flagHasminimum);
        handler->start_pair("minimum");
        switch (storeminimum.key)
          {
            case 0:
                if (((double)(long int)storeminimum.u.choice0) == storeminimum.u.choice0)
                    handler->number_value((long int)storeminimum.u.choice0);
                else
                    handler->number_value(storeminimum.u.choice0);
                break;
            case 1:
                handler->null_value();
                break;
            case 2:
                storeminimum.u.choice2->write_as_json(handler);
                break;
            default:
                assert(false);
          }
        assert(flagHascurrency_code);
        handler->start_pair("currency_code");
        switch (storecurrency_code.key)
          {
            case 0:
                handler->string_value(storecurrency_code.choice0);
                break;
            case 1:
                handler->null_value();
                break;
            default:
                assert(false);
          }
        assert(flagHassurge_multiplier);
        handler->start_pair("surge_multiplier");
        switch (storesurge_multiplier.key)
          {
            case 0:
                if (((double)(long int)storesurge_multiplier.u.choice0) == storesurge_multiplier.u.choice0)
                    handler->number_value((long int)storesurge_multiplier.u.choice0);
                else
                    handler->number_value(storesurge_multiplier.u.choice0);
                break;
            case 1:
                handler->null_value();
                break;
            default:
                assert(false);
          }
        assert(flagHassurge_confirmation_href);
        handler->start_pair("surge_confirmation_href");
        switch (storesurge_confirmation_href.key)
          {
            case 0:
                handler->string_value(storesurge_confirmation_href.choice0);
                break;
            case 1:
                handler->null_value();
                break;
            default:
                assert(false);
          }
        assert(flagHassurge_confirmation_id);
        handler->start_pair("surge_confirmation_id");
        switch (storesurge_confirmation_id.key)
          {
            case 0:
                handler->string_value(storesurge_confirmation_id.choice0);
                break;
            case 1:
                handler->null_value();
                break;
            default:
                assert(false);
          }
        if (flagHasfare_id)
          {
            handler->start_pair("fare_id");
            handler->string_value(storefare_id);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasdisplay()))
          {
            return "When parsing the object for %what%, the \"display\" field was missing.";
          }
        if (!(haslow_estimate()))
          {
            return "When parsing the object for %what%, the \"low_estimate\" field was missing.";
          }
        if (!(hashigh_estimate()))
          {
            return "When parsing the object for %what%, the \"high_estimate\" field was missing.";
          }
        if (!(hasminimum()))
          {
            return "When parsing the object for %what%, the \"minimum\" field was missing.";
          }
        if (!(hascurrency_code()))
          {
            return "When parsing the object for %what%, the \"currency_code\" field was missing.";
          }
        if (!(hassurge_multiplier()))
          {
            return "When parsing the object for %what%, the \"surge_multiplier\" field was missing.";
          }
        if (!(hassurge_confirmation_href()))
          {
            return "When parsing the object for %what%, the \"surge_confirmation_href\" field was missing.";
          }
        if (!(hassurge_confirmation_id()))
          {
            return "When parsing the object for %what%, the \"surge_confirmation_id\" field was missing.";
          }
        return NULL;
      }

    static UberRequestEstimatePriceJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberRequestEstimatePriceJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberRequestEstimatePriceJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberRequestEstimatePriceJSON>, UberRequestEstimatePriceJSON *, bool> generator("Type UberRequestEstimatePrice", ignore_extras);
            parse_json_value(text, "Text for UberRequestEstimatePriceJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberRequestEstimatePriceJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberRequestEstimatePriceJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberRequestEstimatePriceJSON>, UberRequestEstimatePriceJSON *, bool> generator("Type UberRequestEstimatePrice", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratordisplay;
    class FieldGeneratorlow_estimate : public JSONParallelGenerator
          {
          private:
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > field0;
            JSONHoldingGenerator<JSONNullGenerator, bool, bool > field1;
            JSONHoldingGenerator<EmptyObjectJSON::Generator, RCHandle<EmptyObjectJSON>, EmptyObjectJSON *, bool > field2;
            JSONHandler *all_handlers[3];

          protected:
            size_t start(JSONHandler ***parallel_handlers_location)
              {
                *parallel_handlers_location = &(all_handlers[0]);
                return 3;
              }
            void finish(size_t winning_index)
              {
                Typelow_estimate result;
                result.key = winning_index;
                switch (winning_index)
                  {
                    case 0:
                      {
                        assert(field0.have_value);
                        result.u.choice0 = atof(field0.value.c_str());
                        break;
                      }
                    case 1:
                      {
                        assert(field1.have_value);
                        result.u.choice1 = field1.value;
                        break;
                      }
                    case 2:
                      {
                        assert(field2.have_value);
                        result.u.choice2 = field2.value.referenced();
                        break;
                      }
                    default:
                      {
                        assert(false);
                      }
                  }
                handle_result(result);
              }
            virtual void handle_result(Typelow_estimate result) = 0;

          public:
            FieldGeneratorlow_estimate(bool ignore_extras) : field0("option 0 of field \"low_estimate\""), field1("option 1 of field \"low_estimate\""), field2("option 2 of field \"low_estimate\"", ignore_extras)
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
                all_handlers[2] = &field2;
              }
            FieldGeneratorlow_estimate(std::string what, bool ignore_extras) : field0("option 0 of field \"low_estimate\""), field1("option 1 of field \"low_estimate\""), field2("option 2 of field \"low_estimate\"", ignore_extras)
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
                all_handlers[2] = &field2;
              }
            ~FieldGeneratorlow_estimate(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                field2.reset();
                JSONParallelGenerator::reset();
              }
          };
        class Holderlow_estimate
          {
          private:
            bool have_data;
            Typelow_estimate data;

          public:
            Holderlow_estimate(void) : have_data(false)  { }
            Holderlow_estimate(Typelow_estimate init_data) : have_data(true), data(init_data)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        case 2:
                          data.u.choice2->add_reference();
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            Holderlow_estimate(const Holderlow_estimate &other) : have_data(other.haveData()), data(other.referenced())
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        case 2:
                          data.u.choice2->add_reference();
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            ~Holderlow_estimate(void)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        case 2:
                          data.u.choice2->remove_reference();
                          break;
                        default:
                          assert(false);
                      }
                  }
              }

            void operator=(const Holderlow_estimate &other)
              {
                Typelow_estimate new_data;
                if (other.haveData())
                  {
                    new_data = other.referenced();
                    switch (new_data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        case 2:
                          new_data.u.choice2->add_reference();
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
                          break;
                        case 1:
                          break;
                        case 2:
                          data.u.choice2->remove_reference();
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
            Typelow_estimate referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorlow_estimate, Holderlow_estimate, Typelow_estimate, bool > fieldGeneratorlow_estimate;
    class FieldGeneratorhigh_estimate : public JSONParallelGenerator
          {
          private:
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > field0;
            JSONHoldingGenerator<JSONNullGenerator, bool, bool > field1;
            JSONHoldingGenerator<EmptyObjectJSON::Generator, RCHandle<EmptyObjectJSON>, EmptyObjectJSON *, bool > field2;
            JSONHandler *all_handlers[3];

          protected:
            size_t start(JSONHandler ***parallel_handlers_location)
              {
                *parallel_handlers_location = &(all_handlers[0]);
                return 3;
              }
            void finish(size_t winning_index)
              {
                Typehigh_estimate result;
                result.key = winning_index;
                switch (winning_index)
                  {
                    case 0:
                      {
                        assert(field0.have_value);
                        result.u.choice0 = atof(field0.value.c_str());
                        break;
                      }
                    case 1:
                      {
                        assert(field1.have_value);
                        result.u.choice1 = field1.value;
                        break;
                      }
                    case 2:
                      {
                        assert(field2.have_value);
                        result.u.choice2 = field2.value.referenced();
                        break;
                      }
                    default:
                      {
                        assert(false);
                      }
                  }
                handle_result(result);
              }
            virtual void handle_result(Typehigh_estimate result) = 0;

          public:
            FieldGeneratorhigh_estimate(bool ignore_extras) : field0("option 0 of field \"high_estimate\""), field1("option 1 of field \"high_estimate\""), field2("option 2 of field \"high_estimate\"", ignore_extras)
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
                all_handlers[2] = &field2;
              }
            FieldGeneratorhigh_estimate(std::string what, bool ignore_extras) : field0("option 0 of field \"high_estimate\""), field1("option 1 of field \"high_estimate\""), field2("option 2 of field \"high_estimate\"", ignore_extras)
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
                all_handlers[2] = &field2;
              }
            ~FieldGeneratorhigh_estimate(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                field2.reset();
                JSONParallelGenerator::reset();
              }
          };
        class Holderhigh_estimate
          {
          private:
            bool have_data;
            Typehigh_estimate data;

          public:
            Holderhigh_estimate(void) : have_data(false)  { }
            Holderhigh_estimate(Typehigh_estimate init_data) : have_data(true), data(init_data)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        case 2:
                          data.u.choice2->add_reference();
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            Holderhigh_estimate(const Holderhigh_estimate &other) : have_data(other.haveData()), data(other.referenced())
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        case 2:
                          data.u.choice2->add_reference();
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            ~Holderhigh_estimate(void)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        case 2:
                          data.u.choice2->remove_reference();
                          break;
                        default:
                          assert(false);
                      }
                  }
              }

            void operator=(const Holderhigh_estimate &other)
              {
                Typehigh_estimate new_data;
                if (other.haveData())
                  {
                    new_data = other.referenced();
                    switch (new_data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        case 2:
                          new_data.u.choice2->add_reference();
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
                          break;
                        case 1:
                          break;
                        case 2:
                          data.u.choice2->remove_reference();
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
            Typehigh_estimate referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorhigh_estimate, Holderhigh_estimate, Typehigh_estimate, bool > fieldGeneratorhigh_estimate;
    class FieldGeneratorminimum : public JSONParallelGenerator
          {
          private:
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > field0;
            JSONHoldingGenerator<JSONNullGenerator, bool, bool > field1;
            JSONHoldingGenerator<EmptyObjectJSON::Generator, RCHandle<EmptyObjectJSON>, EmptyObjectJSON *, bool > field2;
            JSONHandler *all_handlers[3];

          protected:
            size_t start(JSONHandler ***parallel_handlers_location)
              {
                *parallel_handlers_location = &(all_handlers[0]);
                return 3;
              }
            void finish(size_t winning_index)
              {
                Typeminimum result;
                result.key = winning_index;
                switch (winning_index)
                  {
                    case 0:
                      {
                        assert(field0.have_value);
                        result.u.choice0 = atof(field0.value.c_str());
                        break;
                      }
                    case 1:
                      {
                        assert(field1.have_value);
                        result.u.choice1 = field1.value;
                        break;
                      }
                    case 2:
                      {
                        assert(field2.have_value);
                        result.u.choice2 = field2.value.referenced();
                        break;
                      }
                    default:
                      {
                        assert(false);
                      }
                  }
                handle_result(result);
              }
            virtual void handle_result(Typeminimum result) = 0;

          public:
            FieldGeneratorminimum(bool ignore_extras) : field0("option 0 of field \"minimum\""), field1("option 1 of field \"minimum\""), field2("option 2 of field \"minimum\"", ignore_extras)
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
                all_handlers[2] = &field2;
              }
            FieldGeneratorminimum(std::string what, bool ignore_extras) : field0("option 0 of field \"minimum\""), field1("option 1 of field \"minimum\""), field2("option 2 of field \"minimum\"", ignore_extras)
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
                all_handlers[2] = &field2;
              }
            ~FieldGeneratorminimum(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                field2.reset();
                JSONParallelGenerator::reset();
              }
          };
        class Holderminimum
          {
          private:
            bool have_data;
            Typeminimum data;

          public:
            Holderminimum(void) : have_data(false)  { }
            Holderminimum(Typeminimum init_data) : have_data(true), data(init_data)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        case 2:
                          data.u.choice2->add_reference();
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            Holderminimum(const Holderminimum &other) : have_data(other.haveData()), data(other.referenced())
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        case 2:
                          data.u.choice2->add_reference();
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            ~Holderminimum(void)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        case 2:
                          data.u.choice2->remove_reference();
                          break;
                        default:
                          assert(false);
                      }
                  }
              }

            void operator=(const Holderminimum &other)
              {
                Typeminimum new_data;
                if (other.haveData())
                  {
                    new_data = other.referenced();
                    switch (new_data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        case 2:
                          new_data.u.choice2->add_reference();
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
                          break;
                        case 1:
                          break;
                        case 2:
                          data.u.choice2->remove_reference();
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
            Typeminimum referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorminimum, Holderminimum, Typeminimum, bool > fieldGeneratorminimum;
    class FieldGeneratorcurrency_code : public JSONParallelGenerator
          {
          private:
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > field0;
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
                Typecurrency_code result;
                result.key = winning_index;
                switch (winning_index)
                  {
                    case 0:
                      {
                        assert(field0.have_value);
                        result.choice0 = field0.value;
                        break;
                      }
                    case 1:
                      {
                        assert(field1.have_value);
                        result.choice1 = field1.value;
                        break;
                      }
                    default:
                      {
                        assert(false);
                      }
                  }
                handle_result(result);
              }
            virtual void handle_result(Typecurrency_code result) = 0;

          public:
            FieldGeneratorcurrency_code(bool ignore_extras) : field0("option 0 of field \"currency_code\""), field1("option 1 of field \"currency_code\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorcurrency_code(std::string what, bool ignore_extras) : field0("option 0 of field \"currency_code\""), field1("option 1 of field \"currency_code\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorcurrency_code(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class Holdercurrency_code
          {
          private:
            bool have_data;
            Typecurrency_code data;

          public:
            Holdercurrency_code(void) : have_data(false)  { }
            Holdercurrency_code(Typecurrency_code init_data) : have_data(true), data(init_data)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            Holdercurrency_code(const Holdercurrency_code &other) : have_data(other.haveData()), data(other.referenced())
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            ~Holdercurrency_code(void)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }

            void operator=(const Holdercurrency_code &other)
              {
                Typecurrency_code new_data;
                if (other.haveData())
                  {
                    new_data = other.referenced();
                    switch (new_data.key)
                      {
                        case 0:
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
            Typecurrency_code referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorcurrency_code, Holdercurrency_code, Typecurrency_code, bool > fieldGeneratorcurrency_code;
    class FieldGeneratorsurge_multiplier : public JSONParallelGenerator
          {
          private:
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > field0;
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
                Typesurge_multiplier result;
                result.key = winning_index;
                switch (winning_index)
                  {
                    case 0:
                      {
                        assert(field0.have_value);
                        result.u.choice0 = atof(field0.value.c_str());
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
            virtual void handle_result(Typesurge_multiplier result) = 0;

          public:
            FieldGeneratorsurge_multiplier(bool ignore_extras) : field0("option 0 of field \"surge_multiplier\""), field1("option 1 of field \"surge_multiplier\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorsurge_multiplier(std::string what, bool ignore_extras) : field0("option 0 of field \"surge_multiplier\""), field1("option 1 of field \"surge_multiplier\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorsurge_multiplier(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class Holdersurge_multiplier
          {
          private:
            bool have_data;
            Typesurge_multiplier data;

          public:
            Holdersurge_multiplier(void) : have_data(false)  { }
            Holdersurge_multiplier(Typesurge_multiplier init_data) : have_data(true), data(init_data)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            Holdersurge_multiplier(const Holdersurge_multiplier &other) : have_data(other.haveData()), data(other.referenced())
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            ~Holdersurge_multiplier(void)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }

            void operator=(const Holdersurge_multiplier &other)
              {
                Typesurge_multiplier new_data;
                if (other.haveData())
                  {
                    new_data = other.referenced();
                    switch (new_data.key)
                      {
                        case 0:
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
            Typesurge_multiplier referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorsurge_multiplier, Holdersurge_multiplier, Typesurge_multiplier, bool > fieldGeneratorsurge_multiplier;
    class FieldGeneratorsurge_confirmation_href : public JSONParallelGenerator
          {
          private:
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > field0;
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
                Typesurge_confirmation_href result;
                result.key = winning_index;
                switch (winning_index)
                  {
                    case 0:
                      {
                        assert(field0.have_value);
                        result.choice0 = field0.value;
                        break;
                      }
                    case 1:
                      {
                        assert(field1.have_value);
                        result.choice1 = field1.value;
                        break;
                      }
                    default:
                      {
                        assert(false);
                      }
                  }
                handle_result(result);
              }
            virtual void handle_result(Typesurge_confirmation_href result) = 0;

          public:
            FieldGeneratorsurge_confirmation_href(bool ignore_extras) : field0("option 0 of field \"surge_confirmation_href\""), field1("option 1 of field \"surge_confirmation_href\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorsurge_confirmation_href(std::string what, bool ignore_extras) : field0("option 0 of field \"surge_confirmation_href\""), field1("option 1 of field \"surge_confirmation_href\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorsurge_confirmation_href(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class Holdersurge_confirmation_href
          {
          private:
            bool have_data;
            Typesurge_confirmation_href data;

          public:
            Holdersurge_confirmation_href(void) : have_data(false)  { }
            Holdersurge_confirmation_href(Typesurge_confirmation_href init_data) : have_data(true), data(init_data)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            Holdersurge_confirmation_href(const Holdersurge_confirmation_href &other) : have_data(other.haveData()), data(other.referenced())
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            ~Holdersurge_confirmation_href(void)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }

            void operator=(const Holdersurge_confirmation_href &other)
              {
                Typesurge_confirmation_href new_data;
                if (other.haveData())
                  {
                    new_data = other.referenced();
                    switch (new_data.key)
                      {
                        case 0:
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
            Typesurge_confirmation_href referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorsurge_confirmation_href, Holdersurge_confirmation_href, Typesurge_confirmation_href, bool > fieldGeneratorsurge_confirmation_href;
    class FieldGeneratorsurge_confirmation_id : public JSONParallelGenerator
          {
          private:
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > field0;
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
                Typesurge_confirmation_id result;
                result.key = winning_index;
                switch (winning_index)
                  {
                    case 0:
                      {
                        assert(field0.have_value);
                        result.choice0 = field0.value;
                        break;
                      }
                    case 1:
                      {
                        assert(field1.have_value);
                        result.choice1 = field1.value;
                        break;
                      }
                    default:
                      {
                        assert(false);
                      }
                  }
                handle_result(result);
              }
            virtual void handle_result(Typesurge_confirmation_id result) = 0;

          public:
            FieldGeneratorsurge_confirmation_id(bool ignore_extras) : field0("option 0 of field \"surge_confirmation_id\""), field1("option 1 of field \"surge_confirmation_id\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorsurge_confirmation_id(std::string what, bool ignore_extras) : field0("option 0 of field \"surge_confirmation_id\""), field1("option 1 of field \"surge_confirmation_id\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorsurge_confirmation_id(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class Holdersurge_confirmation_id
          {
          private:
            bool have_data;
            Typesurge_confirmation_id data;

          public:
            Holdersurge_confirmation_id(void) : have_data(false)  { }
            Holdersurge_confirmation_id(Typesurge_confirmation_id init_data) : have_data(true), data(init_data)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            Holdersurge_confirmation_id(const Holdersurge_confirmation_id &other) : have_data(other.haveData()), data(other.referenced())
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            ~Holdersurge_confirmation_id(void)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }

            void operator=(const Holdersurge_confirmation_id &other)
              {
                Typesurge_confirmation_id new_data;
                if (other.haveData())
                  {
                    new_data = other.referenced();
                    switch (new_data.key)
                      {
                        case 0:
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
            Typesurge_confirmation_id referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorsurge_confirmation_id, Holdersurge_confirmation_id, Typesurge_confirmation_id, bool > fieldGeneratorsurge_confirmation_id;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorfare_id;
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
            UberRequestEstimatePriceJSON *result = new UberRequestEstimatePriceJSON();
            assert(result != NULL);
            RCHandle<UberRequestEstimatePriceJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberRequestEstimatePriceAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(UberRequestEstimatePriceJSON *result)
          {
            if (fieldGeneratordisplay.have_value)
              {
                result->setdisplay(fieldGeneratordisplay.value);
                fieldGeneratordisplay.have_value = false;
              }
            else if (!(result->hasdisplay()))
              {
                error("When parsing the object for %what%, the \"display\" field was missing.");
              }
            if (fieldGeneratorlow_estimate.have_value)
              {
                result->setlow_estimate(fieldGeneratorlow_estimate.value.referenced());
                fieldGeneratorlow_estimate.have_value = false;
              }
            else if (!(result->haslow_estimate()))
              {
                error("When parsing the object for %what%, the \"low_estimate\" field was missing.");
              }
            if (fieldGeneratorhigh_estimate.have_value)
              {
                result->sethigh_estimate(fieldGeneratorhigh_estimate.value.referenced());
                fieldGeneratorhigh_estimate.have_value = false;
              }
            else if (!(result->hashigh_estimate()))
              {
                error("When parsing the object for %what%, the \"high_estimate\" field was missing.");
              }
            if (fieldGeneratorminimum.have_value)
              {
                result->setminimum(fieldGeneratorminimum.value.referenced());
                fieldGeneratorminimum.have_value = false;
              }
            else if (!(result->hasminimum()))
              {
                error("When parsing the object for %what%, the \"minimum\" field was missing.");
              }
            if (fieldGeneratorcurrency_code.have_value)
              {
                result->setcurrency_code(fieldGeneratorcurrency_code.value.referenced());
                fieldGeneratorcurrency_code.have_value = false;
              }
            else if (!(result->hascurrency_code()))
              {
                error("When parsing the object for %what%, the \"currency_code\" field was missing.");
              }
            if (fieldGeneratorsurge_multiplier.have_value)
              {
                result->setsurge_multiplier(fieldGeneratorsurge_multiplier.value.referenced());
                fieldGeneratorsurge_multiplier.have_value = false;
              }
            else if (!(result->hassurge_multiplier()))
              {
                error("When parsing the object for %what%, the \"surge_multiplier\" field was missing.");
              }
            if (fieldGeneratorsurge_confirmation_href.have_value)
              {
                result->setsurge_confirmation_href(fieldGeneratorsurge_confirmation_href.value.referenced());
                fieldGeneratorsurge_confirmation_href.have_value = false;
              }
            else if (!(result->hassurge_confirmation_href()))
              {
                error("When parsing the object for %what%, the \"surge_confirmation_href\" field was missing.");
              }
            if (fieldGeneratorsurge_confirmation_id.have_value)
              {
                result->setsurge_confirmation_id(fieldGeneratorsurge_confirmation_id.value.referenced());
                fieldGeneratorsurge_confirmation_id.have_value = false;
              }
            else if (!(result->hassurge_confirmation_id()))
              {
                error("When parsing the object for %what%, the \"surge_confirmation_id\" field was missing.");
              }
            if (fieldGeneratorfare_id.have_value)
              {
                result->setfare_id(fieldGeneratorfare_id.value);
                fieldGeneratorfare_id.have_value = false;
              }
          }
        virtual void handle_result(UberRequestEstimatePriceJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'c':
                    if (strcmp(&(field_name[1]), "urrency_code") == 0)
                        return &fieldGeneratorcurrency_code;
                    break;
                case 'd':
                    if (strcmp(&(field_name[1]), "isplay") == 0)
                        return &fieldGeneratordisplay;
                    break;
                case 'f':
                    if (strcmp(&(field_name[1]), "are_id") == 0)
                        return &fieldGeneratorfare_id;
                    break;
                case 'h':
                    if (strcmp(&(field_name[1]), "igh_estimate") == 0)
                        return &fieldGeneratorhigh_estimate;
                    break;
                case 'l':
                    if (strcmp(&(field_name[1]), "ow_estimate") == 0)
                        return &fieldGeneratorlow_estimate;
                    break;
                case 'm':
                    if (strcmp(&(field_name[1]), "inimum") == 0)
                        return &fieldGeneratorminimum;
                    break;
                case 's':
                    if (strncmp(&(field_name[1]), "urge_", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 'c':
                                if (strncmp(&(field_name[7]), "onfirmation_", 12) == 0)
                                  {
                                    switch ((unsigned char)(field_name[19]))
                                      {
                                        case 'h':
                                            if (strcmp(&(field_name[20]), "ref") == 0)
                                                return &fieldGeneratorsurge_confirmation_href;
                                            break;
                                        case 'i':
                                            if (strcmp(&(field_name[20]), "d") == 0)
                                                return &fieldGeneratorsurge_confirmation_id;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'm':
                                if (strcmp(&(field_name[7]), "ultiplier") == 0)
                                    return &fieldGeneratorsurge_multiplier;
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
        Generator(bool ignore_extras = false) : fieldGeneratordisplay("field \"display\" of the UberRequestEstimatePrice class"), fieldGeneratorlow_estimate("field \"low_estimate\" of the UberRequestEstimatePrice class", ignore_extras), fieldGeneratorhigh_estimate("field \"high_estimate\" of the UberRequestEstimatePrice class", ignore_extras), fieldGeneratorminimum("field \"minimum\" of the UberRequestEstimatePrice class", ignore_extras), fieldGeneratorcurrency_code("field \"currency_code\" of the UberRequestEstimatePrice class", ignore_extras), fieldGeneratorsurge_multiplier("field \"surge_multiplier\" of the UberRequestEstimatePrice class", ignore_extras), fieldGeneratorsurge_confirmation_href("field \"surge_confirmation_href\" of the UberRequestEstimatePrice class", ignore_extras), fieldGeneratorsurge_confirmation_id("field \"surge_confirmation_id\" of the UberRequestEstimatePrice class", ignore_extras), fieldGeneratorfare_id("field \"fare_id\" of the UberRequestEstimatePrice class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberRequestEstimatePrice class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratordisplay.reset();
            fieldGeneratorlow_estimate.reset();
            fieldGeneratorhigh_estimate.reset();
            fieldGeneratorminimum.reset();
            fieldGeneratorcurrency_code.reset();
            fieldGeneratorsurge_multiplier.reset();
            fieldGeneratorsurge_confirmation_href.reset();
            fieldGeneratorsurge_confirmation_id.reset();
            fieldGeneratorfare_id.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UBERREQUESTESTIMATEPRICEJSON_H */
