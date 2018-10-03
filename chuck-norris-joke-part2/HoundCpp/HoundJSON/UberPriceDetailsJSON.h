/* file "UberPriceDetailsJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERPRICEDETAILSJSON_H
#define UBERPRICEDETAILSJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONNullGenerator.h"
#include "JSONParallelGenerator.h"
#include <vector>
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UberPriceDetailsJSON : public ReferenceCounted
  {
  public:
    struct Typeminimum
      {
        size_t key;
        union
          {
            double choice0;
            bool choice1;
          } u;
      };
    enum Typedistance_unit
      {
        distance_unit_mile,
        distance_unit_km
      };

    static Typedistance_unit  stringTodistance_unit(const char *chars);
    static const char * stringFromdistance_unit(Typedistance_unit the_enum);
    class Typeservice_feesJSON : public ReferenceCounted
      {
      private:
        bool flagHasname;
        std::string storename;
        bool flagHasfee;
        double storefee;
        std::string textStorefee;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        Typeservice_feesJSON(const Typeservice_feesJSON &);
        Typeservice_feesJSON & operator=(const Typeservice_feesJSON &other);

        void  fromJSONname(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONfee(JSONValue *json_value, bool ignore_extras = false);


      public:
        Typeservice_feesJSON(void);
        virtual ~Typeservice_feesJSON(void);
        bool  hasname(void) const;
        std::string  getname(void);
        const std::string  getname(void) const;
        bool  hasfee(void) const;
        double  getfee(void);
        const double  getfee(void) const;
        std::string  getfeeAsText(void) const;

        virtual size_t extraTypeservice_feesComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeservice_feesComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeservice_feesComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeservice_feesComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeservice_feesLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeservice_feesLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setname(std::string new_value)
          {
            flagHasname = true;
            storename = new_value;
          }
        void unsetname(void)
          {
            flagHasname = false;
          }
        void setfee(double new_value)
          {
            flagHasfee = true;
            storefee = new_value;
            textStorefee = "";
          }
        void setfeeText(std::string new_value)
          {
            flagHasfee = true;
            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                throw("The text value for field fee of Typeservice_feesJSON is not a valid number.");
            textStorefee = new_value;
          }
        void unsetfee(void)
          {
            flagHasfee = false;
          }

        virtual void extraTypeservice_feesAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeservice_feesSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeservice_feesLookup(key);
            if (old_field == NULL)
              {
                extraTypeservice_feesAppendPair(key, new_component);
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
            assert(flagHasname);
            handler->start_pair("name");
            handler->string_value(storename);
            assert(flagHasfee);
            handler->start_pair("fee");
            if (textStorefee != "")
                handler->number_value(textStorefee.c_str());
            else if (((double)(long int)storefee) == storefee)
                handler->number_value((long int)storefee);
            else
                handler->number_value(storefee);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasname()))
              {
                return "When parsing the object for %what%, the \"name\" field was missing.";
              }
            if (!(hasfee()))
              {
                return "When parsing the object for %what%, the \"fee\" field was missing.";
              }
            return NULL;
          }

        static Typeservice_feesJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static Typeservice_feesJSON *from_text(const char *text, bool ignore_extras = false)
          {
            Typeservice_feesJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<Typeservice_feesJSON>, Typeservice_feesJSON *, bool> generator("Type Typeservice_fees", ignore_extras);
                parse_json_value(text, "Text for Typeservice_feesJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static Typeservice_feesJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            Typeservice_feesJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<Typeservice_feesJSON>, Typeservice_feesJSON *, bool> generator("Type Typeservice_fees", ignore_extras);
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorname;
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorfee;
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
                Typeservice_feesJSON *result = new Typeservice_feesJSON();
                assert(result != NULL);
                RCHandle<Typeservice_feesJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeservice_feesAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(Typeservice_feesJSON *result)
              {
                if (fieldGeneratorname.have_value)
                  {
                    result->setname(fieldGeneratorname.value);
                    fieldGeneratorname.have_value = false;
                  }
                else if (!(result->hasname()))
                  {
                    error("When parsing the object for %what%, the \"name\" field was missing.");
                  }
                if (fieldGeneratorfee.have_value)
                  {
                    result->setfeeText(fieldGeneratorfee.value);
                    fieldGeneratorfee.have_value = false;
                  }
                else if (!(result->hasfee()))
                  {
                    error("When parsing the object for %what%, the \"fee\" field was missing.");
                  }
              }
            virtual void handle_result(Typeservice_feesJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'f':
                        if (strcmp(&(field_name[1]), "ee") == 0)
                            return &fieldGeneratorfee;
                        break;
                    case 'n':
                        if (strcmp(&(field_name[1]), "ame") == 0)
                            return &fieldGeneratorname;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorname("field \"name\" of the Typeservice_fees class"), fieldGeneratorfee("field \"fee\" of the Typeservice_fees class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the Typeservice_fees class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorname.reset();
                fieldGeneratorfee.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasbase;
    double storebase;
    std::string textStorebase;
    bool flagHasminimum;
    Typeminimum storeminimum;
    bool flagHascost_per_minute;
    double storecost_per_minute;
    std::string textStorecost_per_minute;
    bool flagHascost_per_distance;
    double storecost_per_distance;
    std::string textStorecost_per_distance;
    bool flagHasdistance_unit;
    Typedistance_unit storedistance_unit;
    bool flagHascancellation_fee;
    double storecancellation_fee;
    std::string textStorecancellation_fee;
    bool flagHascurrency_code;
    std::string storecurrency_code;
    bool flagHasservice_fees;
    std::vector< Typeservice_feesJSON * > storeservice_fees;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UberPriceDetailsJSON(const UberPriceDetailsJSON &);
    UberPriceDetailsJSON & operator=(const UberPriceDetailsJSON &other);

    void  fromJSONbase(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONminimum(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONcost_per_minute(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONcost_per_distance(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONdistance_unit(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONcancellation_fee(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONcurrency_code(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONservice_fees(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberPriceDetailsJSON(void);
    virtual ~UberPriceDetailsJSON(void);
    bool  hasbase(void) const;
    double  getbase(void);
    const double  getbase(void) const;
    std::string  getbaseAsText(void) const;
    bool  hasminimum(void) const;
    Typeminimum  getminimum(void);
    const Typeminimum  getminimum(void) const;
    bool  hascost_per_minute(void) const;
    double  getcost_per_minute(void);
    const double  getcost_per_minute(void) const;
    std::string  getcost_per_minuteAsText(void) const;
    bool  hascost_per_distance(void) const;
    double  getcost_per_distance(void);
    const double  getcost_per_distance(void) const;
    std::string  getcost_per_distanceAsText(void) const;
    bool  hasdistance_unit(void) const;
    Typedistance_unit  getdistance_unit(void);
    const Typedistance_unit  getdistance_unit(void) const;
    const char * getdistance_unitAsChars(void) const;
    std::string  getdistance_unitAsString(void) const;
    bool  hascancellation_fee(void) const;
    double  getcancellation_fee(void);
    const double  getcancellation_fee(void) const;
    std::string  getcancellation_feeAsText(void) const;
    bool  hascurrency_code(void) const;
    std::string  getcurrency_code(void);
    const std::string  getcurrency_code(void) const;
    bool  hasservice_fees(void) const;
    size_t  countOfservice_fees(void) const;
    Typeservice_feesJSON *  elementOfservice_fees(size_t element_num);
    const Typeservice_feesJSON *  elementOfservice_fees(size_t element_num) const;
    std::vector< Typeservice_feesJSON * >  getservice_fees(void);
    const std::vector< Typeservice_feesJSON * >  getservice_fees(void) const;

    virtual size_t extraUberPriceDetailsComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberPriceDetailsComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberPriceDetailsComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberPriceDetailsComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberPriceDetailsLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberPriceDetailsLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setbase(double new_value)
      {
        flagHasbase = true;
        storebase = new_value;
        textStorebase = "";
      }
    void setbaseText(std::string new_value)
      {
        flagHasbase = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field base of UberPriceDetailsJSON is not a valid number.");
        textStorebase = new_value;
      }
    void unsetbase(void)
      {
        flagHasbase = false;
      }
    void setminimum(Typeminimum new_value)
      {
        flagHasminimum = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeminimum = new_value;
      }
    void unsetminimum(void)
      {
        flagHasminimum = false;
      }
    void setcost_per_minute(double new_value)
      {
        flagHascost_per_minute = true;
        storecost_per_minute = new_value;
        textStorecost_per_minute = "";
      }
    void setcost_per_minuteText(std::string new_value)
      {
        flagHascost_per_minute = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field cost_per_minute of UberPriceDetailsJSON is not a valid number.");
        textStorecost_per_minute = new_value;
      }
    void unsetcost_per_minute(void)
      {
        flagHascost_per_minute = false;
      }
    void setcost_per_distance(double new_value)
      {
        flagHascost_per_distance = true;
        storecost_per_distance = new_value;
        textStorecost_per_distance = "";
      }
    void setcost_per_distanceText(std::string new_value)
      {
        flagHascost_per_distance = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field cost_per_distance of UberPriceDetailsJSON is not a valid number.");
        textStorecost_per_distance = new_value;
      }
    void unsetcost_per_distance(void)
      {
        flagHascost_per_distance = false;
      }
    void setdistance_unit(Typedistance_unit new_value)
      {
        flagHasdistance_unit = true;
        storedistance_unit = new_value;
      }
    void setdistance_unit(const char *chars)
      {
        setdistance_unit(stringTodistance_unit(chars));
      }
    void setdistance_unit(std::string the_string)
      {
        setdistance_unit(stringTodistance_unit(the_string.c_str()));
      }
    void unsetdistance_unit(void)
      {
        flagHasdistance_unit = false;
      }
    void setcancellation_fee(double new_value)
      {
        flagHascancellation_fee = true;
        storecancellation_fee = new_value;
        textStorecancellation_fee = "";
      }
    void setcancellation_feeText(std::string new_value)
      {
        flagHascancellation_fee = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field cancellation_fee of UberPriceDetailsJSON is not a valid number.");
        textStorecancellation_fee = new_value;
      }
    void unsetcancellation_fee(void)
      {
        flagHascancellation_fee = false;
      }
    void setcurrency_code(std::string new_value)
      {
        flagHascurrency_code = true;
        storecurrency_code = new_value;
      }
    void unsetcurrency_code(void)
      {
        flagHascurrency_code = false;
      }
    void initservice_fees(void)
      {
        if (flagHasservice_fees)
          {
            for (size_t num2 = 0; num2 < storeservice_fees.size(); ++num2)
              {
                storeservice_fees[num2]->remove_reference();
              }
          }
        flagHasservice_fees = true;
        storeservice_fees.clear();
      }
    void appendservice_fees(Typeservice_feesJSON * to_append)
      {
        if (!flagHasservice_fees)
          {
            flagHasservice_fees = true;
            storeservice_fees.clear();
          }
        assert(flagHasservice_fees);
        to_append->add_reference();
        storeservice_fees.push_back(to_append);
      }
    void unsetservice_fees(void)
      {
        if (flagHasservice_fees)
          {
            for (size_t num3 = 0; num3 < storeservice_fees.size(); ++num3)
              {
                storeservice_fees[num3]->remove_reference();
              }
          }
        flagHasservice_fees = false;
        storeservice_fees.clear();
      }

    virtual void extraUberPriceDetailsAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberPriceDetailsSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberPriceDetailsLookup(key);
        if (old_field == NULL)
          {
            extraUberPriceDetailsAppendPair(key, new_component);
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
        assert(flagHasbase);
        handler->start_pair("base");
        if (textStorebase != "")
            handler->number_value(textStorebase.c_str());
        else if (((double)(long int)storebase) == storebase)
            handler->number_value((long int)storebase);
        else
            handler->number_value(storebase);
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
            default:
                assert(false);
          }
        if (flagHascost_per_minute)
          {
            handler->start_pair("cost_per_minute");
            if (((double)(long int)storecost_per_minute) == storecost_per_minute)
                handler->number_value((long int)storecost_per_minute);
            else
                handler->number_value(storecost_per_minute);
          }
        if (flagHascost_per_distance)
          {
            handler->start_pair("cost_per_distance");
            if (((double)(long int)storecost_per_distance) == storecost_per_distance)
                handler->number_value((long int)storecost_per_distance);
            else
                handler->number_value(storecost_per_distance);
          }
        assert(flagHasdistance_unit);
        handler->start_pair("distance_unit");
        switch (storedistance_unit)
          {
            case distance_unit_mile:
                handler->string_value("mile");
                break;
            case distance_unit_km:
                handler->string_value("km");
                break;
            default:
                assert(false);
          }
        assert(flagHascancellation_fee);
        handler->start_pair("cancellation_fee");
        if (((double)(long int)storecancellation_fee) == storecancellation_fee)
            handler->number_value((long int)storecancellation_fee);
        else
            handler->number_value(storecancellation_fee);
        assert(flagHascurrency_code);
        handler->start_pair("currency_code");
        handler->string_value(storecurrency_code);
        assert(flagHasservice_fees);
        handler->start_pair("service_fees");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeservice_fees.size(); ++num1)
          {
            storeservice_fees[num1]->write_as_json(handler);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasbase()))
          {
            return "When parsing the object for %what%, the \"base\" field was missing.";
          }
        if (!(hasminimum()))
          {
            return "When parsing the object for %what%, the \"minimum\" field was missing.";
          }
        if (!(hasdistance_unit()))
          {
            return "When parsing the object for %what%, the \"distance_unit\" field was missing.";
          }
        if (!(hascancellation_fee()))
          {
            return "When parsing the object for %what%, the \"cancellation_fee\" field was missing.";
          }
        if (!(hascurrency_code()))
          {
            return "When parsing the object for %what%, the \"currency_code\" field was missing.";
          }
        if (!(hasservice_fees()))
          {
            return "When parsing the object for %what%, the \"service_fees\" field was missing.";
          }
        return NULL;
      }

    static UberPriceDetailsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberPriceDetailsJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberPriceDetailsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberPriceDetailsJSON>, UberPriceDetailsJSON *, bool> generator("Type UberPriceDetails", ignore_extras);
            parse_json_value(text, "Text for UberPriceDetailsJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberPriceDetailsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberPriceDetailsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberPriceDetailsJSON>, UberPriceDetailsJSON *, bool> generator("Type UberPriceDetails", ignore_extras);
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
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorbase;
    class FieldGeneratorminimum : public JSONParallelGenerator
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
                    default:
                      {
                        assert(false);
                      }
                  }
                handle_result(result);
              }
            virtual void handle_result(Typeminimum result) = 0;

          public:
            FieldGeneratorminimum(bool ignore_extras) : field0("option 0 of field \"minimum\""), field1("option 1 of field \"minimum\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorminimum(std::string what, bool ignore_extras) : field0("option 0 of field \"minimum\""), field1("option 1 of field \"minimum\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorminimum(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
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
            Typeminimum referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorminimum, Holderminimum, Typeminimum, bool > fieldGeneratorminimum;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorcost_per_minute;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorcost_per_distance;
    class FieldGeneratordistance_unit : public JSONStringGenerator
          {
          protected:
            FieldGeneratordistance_unit(const char *what)
              {
                set_what(what);
              }
            FieldGeneratordistance_unit(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringTodistance_unit(result));
              }
            virtual void handle_result(Typedistance_unit result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratordistance_unit, Typedistance_unit, Typedistance_unit > fieldGeneratordistance_unit;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorcancellation_fee;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorcurrency_code;
        JSONHoldingArrayGenerator<Typeservice_feesJSON::Generator, RCHandle<Typeservice_feesJSON>, Typeservice_feesJSON *, bool > fieldGeneratorservice_fees;
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
            UberPriceDetailsJSON *result = new UberPriceDetailsJSON();
            assert(result != NULL);
            RCHandle<UberPriceDetailsJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberPriceDetailsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(UberPriceDetailsJSON *result)
          {
            if (fieldGeneratorbase.have_value)
              {
                result->setbaseText(fieldGeneratorbase.value);
                fieldGeneratorbase.have_value = false;
              }
            else if (!(result->hasbase()))
              {
                error("When parsing the object for %what%, the \"base\" field was missing.");
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
            if (fieldGeneratorcost_per_minute.have_value)
              {
                result->setcost_per_minuteText(fieldGeneratorcost_per_minute.value);
                fieldGeneratorcost_per_minute.have_value = false;
              }
            if (fieldGeneratorcost_per_distance.have_value)
              {
                result->setcost_per_distanceText(fieldGeneratorcost_per_distance.value);
                fieldGeneratorcost_per_distance.have_value = false;
              }
            if (fieldGeneratordistance_unit.have_value)
              {
                result->setdistance_unit(fieldGeneratordistance_unit.value);
                fieldGeneratordistance_unit.have_value = false;
              }
            else if (!(result->hasdistance_unit()))
              {
                error("When parsing the object for %what%, the \"distance_unit\" field was missing.");
              }
            if (fieldGeneratorcancellation_fee.have_value)
              {
                result->setcancellation_feeText(fieldGeneratorcancellation_fee.value);
                fieldGeneratorcancellation_fee.have_value = false;
              }
            else if (!(result->hascancellation_fee()))
              {
                error("When parsing the object for %what%, the \"cancellation_fee\" field was missing.");
              }
            if (fieldGeneratorcurrency_code.have_value)
              {
                result->setcurrency_code(fieldGeneratorcurrency_code.value);
                fieldGeneratorcurrency_code.have_value = false;
              }
            else if (!(result->hascurrency_code()))
              {
                error("When parsing the object for %what%, the \"currency_code\" field was missing.");
              }
            if (fieldGeneratorservice_fees.have_value)
              {
                result->initservice_fees();
                size_t count = fieldGeneratorservice_fees.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendservice_fees(fieldGeneratorservice_fees.value[num].referenced());
                  }
                fieldGeneratorservice_fees.value.clear();
                fieldGeneratorservice_fees.have_value = false;
              }
            else if (!(result->hasservice_fees()))
              {
                error("When parsing the object for %what%, the \"service_fees\" field was missing.");
              }
          }
        virtual void handle_result(UberPriceDetailsJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'b':
                    if (strcmp(&(field_name[1]), "ase") == 0)
                        return &fieldGeneratorbase;
                    break;
                case 'c':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "ncellation_fee") == 0)
                                return &fieldGeneratorcancellation_fee;
                            break;
                        case 'o':
                            if (strncmp(&(field_name[2]), "st_per_", 7) == 0)
                              {
                                switch ((unsigned char)(field_name[9]))
                                  {
                                    case 'd':
                                        if (strcmp(&(field_name[10]), "istance") == 0)
                                            return &fieldGeneratorcost_per_distance;
                                        break;
                                    case 'm':
                                        if (strcmp(&(field_name[10]), "inute") == 0)
                                            return &fieldGeneratorcost_per_minute;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'u':
                            if (strcmp(&(field_name[2]), "rrency_code") == 0)
                                return &fieldGeneratorcurrency_code;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'd':
                    if (strcmp(&(field_name[1]), "istance_unit") == 0)
                        return &fieldGeneratordistance_unit;
                    break;
                case 'm':
                    if (strcmp(&(field_name[1]), "inimum") == 0)
                        return &fieldGeneratorminimum;
                    break;
                case 's':
                    if (strcmp(&(field_name[1]), "ervice_fees") == 0)
                        return &fieldGeneratorservice_fees;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorbase("field \"base\" of the UberPriceDetails class"), fieldGeneratorminimum("field \"minimum\" of the UberPriceDetails class", ignore_extras), fieldGeneratorcost_per_minute("field \"cost_per_minute\" of the UberPriceDetails class"), fieldGeneratorcost_per_distance("field \"cost_per_distance\" of the UberPriceDetails class"), fieldGeneratordistance_unit("field \"distance_unit\" of the UberPriceDetails class"), fieldGeneratorcancellation_fee("field \"cancellation_fee\" of the UberPriceDetails class"), fieldGeneratorcurrency_code("field \"currency_code\" of the UberPriceDetails class"), fieldGeneratorservice_fees("field \"service_fees\" of the UberPriceDetails class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberPriceDetails class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorbase.reset();
            fieldGeneratorminimum.reset();
            fieldGeneratorcost_per_minute.reset();
            fieldGeneratorcost_per_distance.reset();
            fieldGeneratordistance_unit.reset();
            fieldGeneratorcancellation_fee.reset();
            fieldGeneratorcurrency_code.reset();
            fieldGeneratorservice_fees.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UBERPRICEDETAILSJSON_H */
