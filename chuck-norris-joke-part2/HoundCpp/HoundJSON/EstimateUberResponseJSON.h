/* file "EstimateUberResponseJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef ESTIMATEUBERRESPONSEJSON_H
#define ESTIMATEUBERRESPONSEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONNullGenerator.h"
#include "JSONParallelGenerator.h"
#include "UberRequestEstimatePriceJSON.h"
#include "UberRequestEstimateTripJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class EstimateUberResponseJSON : public ReferenceCounted
  {
  public:
    struct Typetrip
      {
        size_t key;
        union
          {
            UberRequestEstimateTripJSON * choice0;
            bool choice1;
          } u;
      };
    struct Typepickup_estimate
      {
        size_t key;
        union
          {
            double choice0;
            bool choice1;
          } u;
      };

  private:
    bool flagHasprice;
    UberRequestEstimatePriceJSON * storeprice;
    bool flagHastrip;
    Typetrip storetrip;
    bool flagHaspickup_estimate;
    Typepickup_estimate storepickup_estimate;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    EstimateUberResponseJSON(const EstimateUberResponseJSON &);
    EstimateUberResponseJSON & operator=(const EstimateUberResponseJSON &other);

    void  fromJSONprice(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONtrip(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONpickup_estimate(JSONValue *json_value, bool ignore_extras = false);


  public:
    EstimateUberResponseJSON(void);
    virtual ~EstimateUberResponseJSON(void);
    bool  hasprice(void) const;
    UberRequestEstimatePriceJSON *  getprice(void);
    const UberRequestEstimatePriceJSON *  getprice(void) const;
    bool  hastrip(void) const;
    Typetrip  gettrip(void);
    const Typetrip  gettrip(void) const;
    bool  haspickup_estimate(void) const;
    Typepickup_estimate  getpickup_estimate(void);
    const Typepickup_estimate  getpickup_estimate(void) const;

    virtual size_t extraEstimateUberResponseComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraEstimateUberResponseComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraEstimateUberResponseComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraEstimateUberResponseComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraEstimateUberResponseLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraEstimateUberResponseLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setprice(UberRequestEstimatePriceJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasprice)
          {
            storeprice->remove_reference();
          }
        flagHasprice = true;
        storeprice = new_value;
      }
    void unsetprice(void)
      {
        if (flagHasprice)
          {
            storeprice->remove_reference();
          }
        flagHasprice = false;
      }
    void settrip(Typetrip new_value)
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
        if (flagHastrip)
          {
            switch (storetrip.key)
              {
                case 0:
                    storetrip.u.choice0->remove_reference();
                    break;
                case 1:
                    break;
                default:
                    assert(false);
              }
          }
        flagHastrip = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storetrip = new_value;
      }
    void unsettrip(void)
      {
        if (flagHastrip)
          {
            switch (storetrip.key)
              {
                case 0:
                    storetrip.u.choice0->remove_reference();
                    break;
                case 1:
                    break;
                default:
                    assert(false);
              }
          }
        flagHastrip = false;
      }
    void setpickup_estimate(Typepickup_estimate new_value)
      {
        flagHaspickup_estimate = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storepickup_estimate = new_value;
      }
    void unsetpickup_estimate(void)
      {
        flagHaspickup_estimate = false;
      }

    virtual void extraEstimateUberResponseAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraEstimateUberResponseSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraEstimateUberResponseLookup(key);
        if (old_field == NULL)
          {
            extraEstimateUberResponseAppendPair(key, new_component);
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
        assert(flagHasprice);
        handler->start_pair("price");
        storeprice->write_as_json(handler);
        assert(flagHastrip);
        handler->start_pair("trip");
        switch (storetrip.key)
          {
            case 0:
                storetrip.u.choice0->write_as_json(handler);
                break;
            case 1:
                handler->null_value();
                break;
            default:
                assert(false);
          }
        assert(flagHaspickup_estimate);
        handler->start_pair("pickup_estimate");
        switch (storepickup_estimate.key)
          {
            case 0:
                if (((double)(long int)storepickup_estimate.u.choice0) == storepickup_estimate.u.choice0)
                    handler->number_value((long int)storepickup_estimate.u.choice0);
                else
                    handler->number_value(storepickup_estimate.u.choice0);
                break;
            case 1:
                handler->null_value();
                break;
            default:
                assert(false);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasprice()))
          {
            return "When parsing the object for %what%, the \"price\" field was missing.";
          }
        if (!(hastrip()))
          {
            return "When parsing the object for %what%, the \"trip\" field was missing.";
          }
        if (!(haspickup_estimate()))
          {
            return "When parsing the object for %what%, the \"pickup_estimate\" field was missing.";
          }
        return NULL;
      }

    static EstimateUberResponseJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static EstimateUberResponseJSON *from_text(const char *text, bool ignore_extras = false)
      {
        EstimateUberResponseJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<EstimateUberResponseJSON>, EstimateUberResponseJSON *, bool> generator("Type EstimateUberResponse", ignore_extras);
            parse_json_value(text, "Text for EstimateUberResponseJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static EstimateUberResponseJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        EstimateUberResponseJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<EstimateUberResponseJSON>, EstimateUberResponseJSON *, bool> generator("Type EstimateUberResponse", ignore_extras);
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
        JSONHoldingGenerator<UberRequestEstimatePriceJSON::Generator, RCHandle<UberRequestEstimatePriceJSON>, UberRequestEstimatePriceJSON *, bool > fieldGeneratorprice;
    class FieldGeneratortrip : public JSONParallelGenerator
          {
          private:
            JSONHoldingGenerator<UberRequestEstimateTripJSON::Generator, RCHandle<UberRequestEstimateTripJSON>, UberRequestEstimateTripJSON *, bool > field0;
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
                Typetrip result;
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
            virtual void handle_result(Typetrip result) = 0;

          public:
            FieldGeneratortrip(bool ignore_extras) : field0("option 0 of field \"trip\"", ignore_extras), field1("option 1 of field \"trip\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratortrip(std::string what, bool ignore_extras) : field0("option 0 of field \"trip\"", ignore_extras), field1("option 1 of field \"trip\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratortrip(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class Holdertrip
          {
          private:
            bool have_data;
            Typetrip data;

          public:
            Holdertrip(void) : have_data(false)  { }
            Holdertrip(Typetrip init_data) : have_data(true), data(init_data)
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
            Holdertrip(const Holdertrip &other) : have_data(other.haveData()), data(other.referenced())
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
            ~Holdertrip(void)
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

            void operator=(const Holdertrip &other)
              {
                Typetrip new_data;
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
            Typetrip referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratortrip, Holdertrip, Typetrip, bool > fieldGeneratortrip;
    class FieldGeneratorpickup_estimate : public JSONParallelGenerator
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
                Typepickup_estimate result;
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
            virtual void handle_result(Typepickup_estimate result) = 0;

          public:
            FieldGeneratorpickup_estimate(bool ignore_extras) : field0("option 0 of field \"pickup_estimate\""), field1("option 1 of field \"pickup_estimate\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorpickup_estimate(std::string what, bool ignore_extras) : field0("option 0 of field \"pickup_estimate\""), field1("option 1 of field \"pickup_estimate\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorpickup_estimate(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class Holderpickup_estimate
          {
          private:
            bool have_data;
            Typepickup_estimate data;

          public:
            Holderpickup_estimate(void) : have_data(false)  { }
            Holderpickup_estimate(Typepickup_estimate init_data) : have_data(true), data(init_data)
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
            Holderpickup_estimate(const Holderpickup_estimate &other) : have_data(other.haveData()), data(other.referenced())
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
            ~Holderpickup_estimate(void)
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

            void operator=(const Holderpickup_estimate &other)
              {
                Typepickup_estimate new_data;
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
            Typepickup_estimate referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorpickup_estimate, Holderpickup_estimate, Typepickup_estimate, bool > fieldGeneratorpickup_estimate;
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
            EstimateUberResponseJSON *result = new EstimateUberResponseJSON();
            assert(result != NULL);
            RCHandle<EstimateUberResponseJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraEstimateUberResponseAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(EstimateUberResponseJSON *result)
          {
            if (fieldGeneratorprice.have_value)
              {
                result->setprice(fieldGeneratorprice.value.referenced());
                fieldGeneratorprice.have_value = false;
              }
            else if (!(result->hasprice()))
              {
                error("When parsing the object for %what%, the \"price\" field was missing.");
              }
            if (fieldGeneratortrip.have_value)
              {
                result->settrip(fieldGeneratortrip.value.referenced());
                fieldGeneratortrip.have_value = false;
              }
            else if (!(result->hastrip()))
              {
                error("When parsing the object for %what%, the \"trip\" field was missing.");
              }
            if (fieldGeneratorpickup_estimate.have_value)
              {
                result->setpickup_estimate(fieldGeneratorpickup_estimate.value.referenced());
                fieldGeneratorpickup_estimate.have_value = false;
              }
            else if (!(result->haspickup_estimate()))
              {
                error("When parsing the object for %what%, the \"pickup_estimate\" field was missing.");
              }
          }
        virtual void handle_result(EstimateUberResponseJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'p':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'i':
                            if (strcmp(&(field_name[2]), "ckup_estimate") == 0)
                                return &fieldGeneratorpickup_estimate;
                            break;
                        case 'r':
                            if (strcmp(&(field_name[2]), "ice") == 0)
                                return &fieldGeneratorprice;
                            break;
                        default:
                            break;
                      }
                    break;
                case 't':
                    if (strcmp(&(field_name[1]), "rip") == 0)
                        return &fieldGeneratortrip;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorprice("field \"price\" of the EstimateUberResponse class", ignore_extras), fieldGeneratortrip("field \"trip\" of the EstimateUberResponse class", ignore_extras), fieldGeneratorpickup_estimate("field \"pickup_estimate\" of the EstimateUberResponse class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the EstimateUberResponse class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorprice.reset();
            fieldGeneratortrip.reset();
            fieldGeneratorpickup_estimate.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* ESTIMATEUBERRESPONSEJSON_H */
