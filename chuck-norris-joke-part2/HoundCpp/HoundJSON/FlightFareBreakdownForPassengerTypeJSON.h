/* file "FlightFareBreakdownForPassengerTypeJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FLIGHTFAREBREAKDOWNFORPASSENGERTYPEJSON_H
#define FLIGHTFAREBREAKDOWNFORPASSENGERTYPEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "FlightPassengerTypeCountJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class FlightFareBreakdownForPassengerTypeJSON : public ReferenceCounted
  {
  private:
    bool flagHasPassengerTypeWithCount;
    FlightPassengerTypeCountJSON * storePassengerTypeWithCount;
    bool flagHasTotalFare;
    double storeTotalFare;
    std::string textStoreTotalFare;
    bool flagHasBaseFare;
    double storeBaseFare;
    std::string textStoreBaseFare;
    bool flagHasTaxesandFees;
    double storeTaxesandFees;
    std::string textStoreTaxesandFees;
    bool flagHasFees;
    double storeFees;
    std::string textStoreFees;
    bool flagHasDiscount;
    double storeDiscount;
    std::string textStoreDiscount;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    FlightFareBreakdownForPassengerTypeJSON(const FlightFareBreakdownForPassengerTypeJSON &);
    FlightFareBreakdownForPassengerTypeJSON & operator=(const FlightFareBreakdownForPassengerTypeJSON &other);

    void  fromJSONPassengerTypeWithCount(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTotalFare(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBaseFare(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTaxesandFees(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFees(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDiscount(JSONValue *json_value, bool ignore_extras = false);


  public:
    FlightFareBreakdownForPassengerTypeJSON(void);
    virtual ~FlightFareBreakdownForPassengerTypeJSON(void);
    bool  hasPassengerTypeWithCount(void) const;
    FlightPassengerTypeCountJSON *  getPassengerTypeWithCount(void);
    const FlightPassengerTypeCountJSON *  getPassengerTypeWithCount(void) const;
    bool  hasTotalFare(void) const;
    double  getTotalFare(void);
    const double  getTotalFare(void) const;
    std::string  getTotalFareAsText(void) const;
    bool  hasBaseFare(void) const;
    double  getBaseFare(void);
    const double  getBaseFare(void) const;
    std::string  getBaseFareAsText(void) const;
    bool  hasTaxesandFees(void) const;
    double  getTaxesandFees(void);
    const double  getTaxesandFees(void) const;
    std::string  getTaxesandFeesAsText(void) const;
    bool  hasFees(void) const;
    double  getFees(void);
    const double  getFees(void) const;
    std::string  getFeesAsText(void) const;
    bool  hasDiscount(void) const;
    double  getDiscount(void);
    const double  getDiscount(void) const;
    std::string  getDiscountAsText(void) const;

    virtual size_t extraFlightFareBreakdownForPassengerTypeComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraFlightFareBreakdownForPassengerTypeComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraFlightFareBreakdownForPassengerTypeComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraFlightFareBreakdownForPassengerTypeComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraFlightFareBreakdownForPassengerTypeLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraFlightFareBreakdownForPassengerTypeLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setPassengerTypeWithCount(FlightPassengerTypeCountJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPassengerTypeWithCount)
          {
            storePassengerTypeWithCount->remove_reference();
          }
        flagHasPassengerTypeWithCount = true;
        storePassengerTypeWithCount = new_value;
      }
    void unsetPassengerTypeWithCount(void)
      {
        if (flagHasPassengerTypeWithCount)
          {
            storePassengerTypeWithCount->remove_reference();
          }
        flagHasPassengerTypeWithCount = false;
      }
    void setTotalFare(double new_value)
      {
        flagHasTotalFare = true;
        storeTotalFare = new_value;
        textStoreTotalFare = "";
      }
    void setTotalFareText(std::string new_value)
      {
        flagHasTotalFare = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field TotalFare of FlightFareBreakdownForPassengerTypeJSON is not a valid number.");
        textStoreTotalFare = new_value;
      }
    void unsetTotalFare(void)
      {
        flagHasTotalFare = false;
      }
    void setBaseFare(double new_value)
      {
        flagHasBaseFare = true;
        storeBaseFare = new_value;
        textStoreBaseFare = "";
      }
    void setBaseFareText(std::string new_value)
      {
        flagHasBaseFare = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field BaseFare of FlightFareBreakdownForPassengerTypeJSON is not a valid number.");
        textStoreBaseFare = new_value;
      }
    void unsetBaseFare(void)
      {
        flagHasBaseFare = false;
      }
    void setTaxesandFees(double new_value)
      {
        flagHasTaxesandFees = true;
        storeTaxesandFees = new_value;
        textStoreTaxesandFees = "";
      }
    void setTaxesandFeesText(std::string new_value)
      {
        flagHasTaxesandFees = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field TaxesandFees of FlightFareBreakdownForPassengerTypeJSON is not a valid number.");
        textStoreTaxesandFees = new_value;
      }
    void unsetTaxesandFees(void)
      {
        flagHasTaxesandFees = false;
      }
    void setFees(double new_value)
      {
        flagHasFees = true;
        storeFees = new_value;
        textStoreFees = "";
      }
    void setFeesText(std::string new_value)
      {
        flagHasFees = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Fees of FlightFareBreakdownForPassengerTypeJSON is not a valid number.");
        textStoreFees = new_value;
      }
    void unsetFees(void)
      {
        flagHasFees = false;
      }
    void setDiscount(double new_value)
      {
        flagHasDiscount = true;
        storeDiscount = new_value;
        textStoreDiscount = "";
      }
    void setDiscountText(std::string new_value)
      {
        flagHasDiscount = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Discount of FlightFareBreakdownForPassengerTypeJSON is not a valid number.");
        textStoreDiscount = new_value;
      }
    void unsetDiscount(void)
      {
        flagHasDiscount = false;
      }

    virtual void extraFlightFareBreakdownForPassengerTypeAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraFlightFareBreakdownForPassengerTypeSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraFlightFareBreakdownForPassengerTypeLookup(key);
        if (old_field == NULL)
          {
            extraFlightFareBreakdownForPassengerTypeAppendPair(key, new_component);
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
        assert(flagHasPassengerTypeWithCount);
        handler->start_pair("PassengerTypeWithCount");
        storePassengerTypeWithCount->write_as_json(handler);
        if (flagHasTotalFare)
          {
            handler->start_pair("TotalFare");
            if (textStoreTotalFare != "")
                handler->number_value(textStoreTotalFare.c_str());
            else if (((double)(long int)storeTotalFare) == storeTotalFare)
                handler->number_value((long int)storeTotalFare);
            else
                handler->number_value(storeTotalFare);
          }
        if (flagHasBaseFare)
          {
            handler->start_pair("BaseFare");
            if (textStoreBaseFare != "")
                handler->number_value(textStoreBaseFare.c_str());
            else if (((double)(long int)storeBaseFare) == storeBaseFare)
                handler->number_value((long int)storeBaseFare);
            else
                handler->number_value(storeBaseFare);
          }
        if (flagHasTaxesandFees)
          {
            handler->start_pair("TaxesandFees");
            if (textStoreTaxesandFees != "")
                handler->number_value(textStoreTaxesandFees.c_str());
            else if (((double)(long int)storeTaxesandFees) == storeTaxesandFees)
                handler->number_value((long int)storeTaxesandFees);
            else
                handler->number_value(storeTaxesandFees);
          }
        if (flagHasFees)
          {
            handler->start_pair("Fees");
            if (textStoreFees != "")
                handler->number_value(textStoreFees.c_str());
            else if (((double)(long int)storeFees) == storeFees)
                handler->number_value((long int)storeFees);
            else
                handler->number_value(storeFees);
          }
        if (flagHasDiscount)
          {
            handler->start_pair("Discount");
            if (textStoreDiscount != "")
                handler->number_value(textStoreDiscount.c_str());
            else if (((double)(long int)storeDiscount) == storeDiscount)
                handler->number_value((long int)storeDiscount);
            else
                handler->number_value(storeDiscount);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasPassengerTypeWithCount()))
          {
            return "When parsing the object for %what%, the \"PassengerTypeWithCount\" field was missing.";
          }
        return NULL;
      }

    static FlightFareBreakdownForPassengerTypeJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FlightFareBreakdownForPassengerTypeJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FlightFareBreakdownForPassengerTypeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightFareBreakdownForPassengerTypeJSON>, FlightFareBreakdownForPassengerTypeJSON *, bool> generator("Type FlightFareBreakdownForPassengerType", ignore_extras);
            parse_json_value(text, "Text for FlightFareBreakdownForPassengerTypeJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FlightFareBreakdownForPassengerTypeJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FlightFareBreakdownForPassengerTypeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightFareBreakdownForPassengerTypeJSON>, FlightFareBreakdownForPassengerTypeJSON *, bool> generator("Type FlightFareBreakdownForPassengerType", ignore_extras);
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
        JSONHoldingGenerator<FlightPassengerTypeCountJSON::Generator, RCHandle<FlightPassengerTypeCountJSON>, FlightPassengerTypeCountJSON *, bool > fieldGeneratorPassengerTypeWithCount;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorTotalFare;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorBaseFare;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorTaxesandFees;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorFees;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorDiscount;
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
            FlightFareBreakdownForPassengerTypeJSON *result = new FlightFareBreakdownForPassengerTypeJSON();
            assert(result != NULL);
            RCHandle<FlightFareBreakdownForPassengerTypeJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraFlightFareBreakdownForPassengerTypeAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(FlightFareBreakdownForPassengerTypeJSON *result)
          {
            if (fieldGeneratorPassengerTypeWithCount.have_value)
              {
                result->setPassengerTypeWithCount(fieldGeneratorPassengerTypeWithCount.value.referenced());
                fieldGeneratorPassengerTypeWithCount.have_value = false;
              }
            else if (!(result->hasPassengerTypeWithCount()))
              {
                error("When parsing the object for %what%, the \"PassengerTypeWithCount\" field was missing.");
              }
            if (fieldGeneratorTotalFare.have_value)
              {
                result->setTotalFareText(fieldGeneratorTotalFare.value);
                fieldGeneratorTotalFare.have_value = false;
              }
            if (fieldGeneratorBaseFare.have_value)
              {
                result->setBaseFareText(fieldGeneratorBaseFare.value);
                fieldGeneratorBaseFare.have_value = false;
              }
            if (fieldGeneratorTaxesandFees.have_value)
              {
                result->setTaxesandFeesText(fieldGeneratorTaxesandFees.value);
                fieldGeneratorTaxesandFees.have_value = false;
              }
            if (fieldGeneratorFees.have_value)
              {
                result->setFeesText(fieldGeneratorFees.value);
                fieldGeneratorFees.have_value = false;
              }
            if (fieldGeneratorDiscount.have_value)
              {
                result->setDiscountText(fieldGeneratorDiscount.value);
                fieldGeneratorDiscount.have_value = false;
              }
          }
        virtual void handle_result(FlightFareBreakdownForPassengerTypeJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'B':
                    if (strcmp(&(field_name[1]), "aseFare") == 0)
                        return &fieldGeneratorBaseFare;
                    break;
                case 'D':
                    if (strcmp(&(field_name[1]), "iscount") == 0)
                        return &fieldGeneratorDiscount;
                    break;
                case 'F':
                    if (strcmp(&(field_name[1]), "ees") == 0)
                        return &fieldGeneratorFees;
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "assengerTypeWithCount") == 0)
                        return &fieldGeneratorPassengerTypeWithCount;
                    break;
                case 'T':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "xesandFees") == 0)
                                return &fieldGeneratorTaxesandFees;
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "talFare") == 0)
                                return &fieldGeneratorTotalFare;
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
        Generator(bool ignore_extras = false) : fieldGeneratorPassengerTypeWithCount("field \"PassengerTypeWithCount\" of the FlightFareBreakdownForPassengerType class", ignore_extras), fieldGeneratorTotalFare("field \"TotalFare\" of the FlightFareBreakdownForPassengerType class"), fieldGeneratorBaseFare("field \"BaseFare\" of the FlightFareBreakdownForPassengerType class"), fieldGeneratorTaxesandFees("field \"TaxesandFees\" of the FlightFareBreakdownForPassengerType class"), fieldGeneratorFees("field \"Fees\" of the FlightFareBreakdownForPassengerType class"), fieldGeneratorDiscount("field \"Discount\" of the FlightFareBreakdownForPassengerType class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the FlightFareBreakdownForPassengerType class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorPassengerTypeWithCount.reset();
            fieldGeneratorTotalFare.reset();
            fieldGeneratorBaseFare.reset();
            fieldGeneratorTaxesandFees.reset();
            fieldGeneratorFees.reset();
            fieldGeneratorDiscount.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* FLIGHTFAREBREAKDOWNFORPASSENGERTYPEJSON_H */
