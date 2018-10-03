/* file "UberPriceEstimateDetailsJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERPRICEESTIMATEDETAILSJSON_H
#define UBERPRICEESTIMATEDETAILSJSON_H

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
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UberPriceEstimateDetailsJSON : public ReferenceCounted
  {
  public:
    struct Typecurrency_code
      {
        size_t key;
        std::string choice0;
        bool choice1;
      };
    struct Typelow_estimate
      {
        size_t key;
        union
          {
            double choice0;
            bool choice1;
          } u;
      };
    struct Typehigh_estimate
      {
        size_t key;
        union
          {
            double choice0;
            bool choice1;
          } u;
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

  private:
    bool flagHasproduct_id;
    std::string storeproduct_id;
    bool flagHascurrency_code;
    Typecurrency_code storecurrency_code;
    bool flagHasdisplay_name;
    std::string storedisplay_name;
    bool flagHasestimate;
    std::string storeestimate;
    bool flagHaslow_estimate;
    Typelow_estimate storelow_estimate;
    bool flagHashigh_estimate;
    Typehigh_estimate storehigh_estimate;
    bool flagHassurge_multiplier;
    Typesurge_multiplier storesurge_multiplier;
    bool flagHasduration;
    double storeduration;
    std::string textStoreduration;
    bool flagHasdistance;
    double storedistance;
    std::string textStoredistance;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UberPriceEstimateDetailsJSON(const UberPriceEstimateDetailsJSON &);
    UberPriceEstimateDetailsJSON & operator=(const UberPriceEstimateDetailsJSON &other);

    void  fromJSONproduct_id(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONcurrency_code(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONdisplay_name(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONestimate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONlow_estimate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONhigh_estimate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONsurge_multiplier(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONduration(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONdistance(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberPriceEstimateDetailsJSON(void);
    virtual ~UberPriceEstimateDetailsJSON(void);
    bool  hasproduct_id(void) const;
    std::string  getproduct_id(void);
    const std::string  getproduct_id(void) const;
    bool  hascurrency_code(void) const;
    Typecurrency_code  getcurrency_code(void);
    const Typecurrency_code  getcurrency_code(void) const;
    bool  hasdisplay_name(void) const;
    std::string  getdisplay_name(void);
    const std::string  getdisplay_name(void) const;
    bool  hasestimate(void) const;
    std::string  getestimate(void);
    const std::string  getestimate(void) const;
    bool  haslow_estimate(void) const;
    Typelow_estimate  getlow_estimate(void);
    const Typelow_estimate  getlow_estimate(void) const;
    bool  hashigh_estimate(void) const;
    Typehigh_estimate  gethigh_estimate(void);
    const Typehigh_estimate  gethigh_estimate(void) const;
    bool  hassurge_multiplier(void) const;
    Typesurge_multiplier  getsurge_multiplier(void);
    const Typesurge_multiplier  getsurge_multiplier(void) const;
    bool  hasduration(void) const;
    double  getduration(void);
    const double  getduration(void) const;
    std::string  getdurationAsText(void) const;
    bool  hasdistance(void) const;
    double  getdistance(void);
    const double  getdistance(void) const;
    std::string  getdistanceAsText(void) const;

    virtual size_t extraUberPriceEstimateDetailsComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberPriceEstimateDetailsComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberPriceEstimateDetailsComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberPriceEstimateDetailsComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberPriceEstimateDetailsLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberPriceEstimateDetailsLookup(const char *field_name) const
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
    void setdisplay_name(std::string new_value)
      {
        flagHasdisplay_name = true;
        storedisplay_name = new_value;
      }
    void unsetdisplay_name(void)
      {
        flagHasdisplay_name = false;
      }
    void setestimate(std::string new_value)
      {
        flagHasestimate = true;
        storeestimate = new_value;
      }
    void unsetestimate(void)
      {
        flagHasestimate = false;
      }
    void setlow_estimate(Typelow_estimate new_value)
      {
        flagHaslow_estimate = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storelow_estimate = new_value;
      }
    void unsetlow_estimate(void)
      {
        flagHaslow_estimate = false;
      }
    void sethigh_estimate(Typehigh_estimate new_value)
      {
        flagHashigh_estimate = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storehigh_estimate = new_value;
      }
    void unsethigh_estimate(void)
      {
        flagHashigh_estimate = false;
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
    void setduration(double new_value)
      {
        flagHasduration = true;
        storeduration = new_value;
        textStoreduration = "";
      }
    void setdurationText(std::string new_value)
      {
        flagHasduration = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field duration of UberPriceEstimateDetailsJSON is not a valid number.");
        textStoreduration = new_value;
      }
    void unsetduration(void)
      {
        flagHasduration = false;
      }
    void setdistance(double new_value)
      {
        flagHasdistance = true;
        storedistance = new_value;
        textStoredistance = "";
      }
    void setdistanceText(std::string new_value)
      {
        flagHasdistance = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field distance of UberPriceEstimateDetailsJSON is not a valid number.");
        textStoredistance = new_value;
      }
    void unsetdistance(void)
      {
        flagHasdistance = false;
      }

    virtual void extraUberPriceEstimateDetailsAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberPriceEstimateDetailsSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberPriceEstimateDetailsLookup(key);
        if (old_field == NULL)
          {
            extraUberPriceEstimateDetailsAppendPair(key, new_component);
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
        assert(flagHasdisplay_name);
        handler->start_pair("display_name");
        handler->string_value(storedisplay_name);
        assert(flagHasestimate);
        handler->start_pair("estimate");
        handler->string_value(storeestimate);
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
        assert(flagHasduration);
        handler->start_pair("duration");
        if (textStoreduration != "")
            handler->number_value(textStoreduration.c_str());
        else if (((double)(long int)storeduration) == storeduration)
            handler->number_value((long int)storeduration);
        else
            handler->number_value(storeduration);
        assert(flagHasdistance);
        handler->start_pair("distance");
        if (textStoredistance != "")
            handler->number_value(textStoredistance.c_str());
        else if (((double)(long int)storedistance) == storedistance)
            handler->number_value((long int)storedistance);
        else
            handler->number_value(storedistance);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasproduct_id()))
          {
            return "When parsing the object for %what%, the \"product_id\" field was missing.";
          }
        if (!(hascurrency_code()))
          {
            return "When parsing the object for %what%, the \"currency_code\" field was missing.";
          }
        if (!(hasdisplay_name()))
          {
            return "When parsing the object for %what%, the \"display_name\" field was missing.";
          }
        if (!(hasestimate()))
          {
            return "When parsing the object for %what%, the \"estimate\" field was missing.";
          }
        if (!(haslow_estimate()))
          {
            return "When parsing the object for %what%, the \"low_estimate\" field was missing.";
          }
        if (!(hashigh_estimate()))
          {
            return "When parsing the object for %what%, the \"high_estimate\" field was missing.";
          }
        if (!(hassurge_multiplier()))
          {
            return "When parsing the object for %what%, the \"surge_multiplier\" field was missing.";
          }
        if (!(hasduration()))
          {
            return "When parsing the object for %what%, the \"duration\" field was missing.";
          }
        if (!(hasdistance()))
          {
            return "When parsing the object for %what%, the \"distance\" field was missing.";
          }
        return NULL;
      }

    static UberPriceEstimateDetailsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberPriceEstimateDetailsJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberPriceEstimateDetailsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberPriceEstimateDetailsJSON>, UberPriceEstimateDetailsJSON *, bool> generator("Type UberPriceEstimateDetails", ignore_extras);
            parse_json_value(text, "Text for UberPriceEstimateDetailsJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberPriceEstimateDetailsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberPriceEstimateDetailsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberPriceEstimateDetailsJSON>, UberPriceEstimateDetailsJSON *, bool> generator("Type UberPriceEstimateDetails", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratordisplay_name;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorestimate;
    class FieldGeneratorlow_estimate : public JSONParallelGenerator
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
                    default:
                      {
                        assert(false);
                      }
                  }
                handle_result(result);
              }
            virtual void handle_result(Typelow_estimate result) = 0;

          public:
            FieldGeneratorlow_estimate(bool ignore_extras) : field0("option 0 of field \"low_estimate\""), field1("option 1 of field \"low_estimate\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorlow_estimate(std::string what, bool ignore_extras) : field0("option 0 of field \"low_estimate\""), field1("option 1 of field \"low_estimate\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorlow_estimate(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
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
            JSONHandler *all_handlers[2];

          protected:
            size_t start(JSONHandler ***parallel_handlers_location)
              {
                *parallel_handlers_location = &(all_handlers[0]);
                return 2;
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
                    default:
                      {
                        assert(false);
                      }
                  }
                handle_result(result);
              }
            virtual void handle_result(Typehigh_estimate result) = 0;

          public:
            FieldGeneratorhigh_estimate(bool ignore_extras) : field0("option 0 of field \"high_estimate\""), field1("option 1 of field \"high_estimate\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorhigh_estimate(std::string what, bool ignore_extras) : field0("option 0 of field \"high_estimate\""), field1("option 1 of field \"high_estimate\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorhigh_estimate(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
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
            Typehigh_estimate referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorhigh_estimate, Holderhigh_estimate, Typehigh_estimate, bool > fieldGeneratorhigh_estimate;
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
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorduration;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratordistance;
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
            UberPriceEstimateDetailsJSON *result = new UberPriceEstimateDetailsJSON();
            assert(result != NULL);
            RCHandle<UberPriceEstimateDetailsJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberPriceEstimateDetailsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(UberPriceEstimateDetailsJSON *result)
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
            if (fieldGeneratorcurrency_code.have_value)
              {
                result->setcurrency_code(fieldGeneratorcurrency_code.value.referenced());
                fieldGeneratorcurrency_code.have_value = false;
              }
            else if (!(result->hascurrency_code()))
              {
                error("When parsing the object for %what%, the \"currency_code\" field was missing.");
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
            if (fieldGeneratorestimate.have_value)
              {
                result->setestimate(fieldGeneratorestimate.value);
                fieldGeneratorestimate.have_value = false;
              }
            else if (!(result->hasestimate()))
              {
                error("When parsing the object for %what%, the \"estimate\" field was missing.");
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
            if (fieldGeneratorsurge_multiplier.have_value)
              {
                result->setsurge_multiplier(fieldGeneratorsurge_multiplier.value.referenced());
                fieldGeneratorsurge_multiplier.have_value = false;
              }
            else if (!(result->hassurge_multiplier()))
              {
                error("When parsing the object for %what%, the \"surge_multiplier\" field was missing.");
              }
            if (fieldGeneratorduration.have_value)
              {
                result->setdurationText(fieldGeneratorduration.value);
                fieldGeneratorduration.have_value = false;
              }
            else if (!(result->hasduration()))
              {
                error("When parsing the object for %what%, the \"duration\" field was missing.");
              }
            if (fieldGeneratordistance.have_value)
              {
                result->setdistanceText(fieldGeneratordistance.value);
                fieldGeneratordistance.have_value = false;
              }
            else if (!(result->hasdistance()))
              {
                error("When parsing the object for %what%, the \"distance\" field was missing.");
              }
          }
        virtual void handle_result(UberPriceEstimateDetailsJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'c':
                    if (strcmp(&(field_name[1]), "urrency_code") == 0)
                        return &fieldGeneratorcurrency_code;
                    break;
                case 'd':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'i':
                            if (strncmp(&(field_name[2]), "s", 1) == 0)
                              {
                                switch ((unsigned char)(field_name[3]))
                                  {
                                    case 'p':
                                        if (strcmp(&(field_name[4]), "lay_name") == 0)
                                            return &fieldGeneratordisplay_name;
                                        break;
                                    case 't':
                                        if (strcmp(&(field_name[4]), "ance") == 0)
                                            return &fieldGeneratordistance;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'u':
                            if (strcmp(&(field_name[2]), "ration") == 0)
                                return &fieldGeneratorduration;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'e':
                    if (strcmp(&(field_name[1]), "stimate") == 0)
                        return &fieldGeneratorestimate;
                    break;
                case 'h':
                    if (strcmp(&(field_name[1]), "igh_estimate") == 0)
                        return &fieldGeneratorhigh_estimate;
                    break;
                case 'l':
                    if (strcmp(&(field_name[1]), "ow_estimate") == 0)
                        return &fieldGeneratorlow_estimate;
                    break;
                case 'p':
                    if (strcmp(&(field_name[1]), "roduct_id") == 0)
                        return &fieldGeneratorproduct_id;
                    break;
                case 's':
                    if (strcmp(&(field_name[1]), "urge_multiplier") == 0)
                        return &fieldGeneratorsurge_multiplier;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorproduct_id("field \"product_id\" of the UberPriceEstimateDetails class"), fieldGeneratorcurrency_code("field \"currency_code\" of the UberPriceEstimateDetails class", ignore_extras), fieldGeneratordisplay_name("field \"display_name\" of the UberPriceEstimateDetails class"), fieldGeneratorestimate("field \"estimate\" of the UberPriceEstimateDetails class"), fieldGeneratorlow_estimate("field \"low_estimate\" of the UberPriceEstimateDetails class", ignore_extras), fieldGeneratorhigh_estimate("field \"high_estimate\" of the UberPriceEstimateDetails class", ignore_extras), fieldGeneratorsurge_multiplier("field \"surge_multiplier\" of the UberPriceEstimateDetails class", ignore_extras), fieldGeneratorduration("field \"duration\" of the UberPriceEstimateDetails class"), fieldGeneratordistance("field \"distance\" of the UberPriceEstimateDetails class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberPriceEstimateDetails class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorproduct_id.reset();
            fieldGeneratorcurrency_code.reset();
            fieldGeneratordisplay_name.reset();
            fieldGeneratorestimate.reset();
            fieldGeneratorlow_estimate.reset();
            fieldGeneratorhigh_estimate.reset();
            fieldGeneratorsurge_multiplier.reset();
            fieldGeneratorduration.reset();
            fieldGeneratordistance.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UBERPRICEESTIMATEDETAILSJSON_H */
