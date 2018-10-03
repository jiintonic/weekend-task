/* file "UberRequestDetailsResponseJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERREQUESTDETAILSRESPONSEJSON_H
#define UBERREQUESTDETAILSRESPONSEJSON_H

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
#include "UberRequestVehicleJSON.h"
#include "UberRequestDriverJSON.h"
#include "UberRequestLocationJSON.h"
#include "UberRequestEndpointJSON.h"
#include "UberRequestEndpointJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UberRequestDetailsResponseJSON : public ReferenceCounted
  {
  public:
    struct Typevehicle
      {
        size_t key;
        union
          {
            UberRequestVehicleJSON * choice0;
            bool choice1;
          } u;
      };
    struct Typedriver
      {
        size_t key;
        union
          {
            UberRequestDriverJSON * choice0;
            bool choice1;
          } u;
      };
    struct Typelocation
      {
        size_t key;
        union
          {
            UberRequestLocationJSON * choice0;
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
    bool flagHasrequest_id;
    std::string storerequest_id;
    bool flagHasstatus;
    std::string storestatus;
    bool flagHasvehicle;
    Typevehicle storevehicle;
    bool flagHasdriver;
    Typedriver storedriver;
    bool flagHaslocation;
    Typelocation storelocation;
    bool flagHassurge_multiplier;
    Typesurge_multiplier storesurge_multiplier;
    bool flagHaspickup;
    UberRequestEndpointJSON * storepickup;
    bool flagHasdestination;
    UberRequestEndpointJSON * storedestination;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UberRequestDetailsResponseJSON(const UberRequestDetailsResponseJSON &);
    UberRequestDetailsResponseJSON & operator=(const UberRequestDetailsResponseJSON &other);

    void  fromJSONrequest_id(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONstatus(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONvehicle(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONdriver(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONlocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONsurge_multiplier(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONpickup(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONdestination(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberRequestDetailsResponseJSON(void);
    virtual ~UberRequestDetailsResponseJSON(void);
    bool  hasrequest_id(void) const;
    std::string  getrequest_id(void);
    const std::string  getrequest_id(void) const;
    bool  hasstatus(void) const;
    std::string  getstatus(void);
    const std::string  getstatus(void) const;
    bool  hasvehicle(void) const;
    Typevehicle  getvehicle(void);
    const Typevehicle  getvehicle(void) const;
    bool  hasdriver(void) const;
    Typedriver  getdriver(void);
    const Typedriver  getdriver(void) const;
    bool  haslocation(void) const;
    Typelocation  getlocation(void);
    const Typelocation  getlocation(void) const;
    bool  hassurge_multiplier(void) const;
    Typesurge_multiplier  getsurge_multiplier(void);
    const Typesurge_multiplier  getsurge_multiplier(void) const;
    bool  haspickup(void) const;
    UberRequestEndpointJSON *  getpickup(void);
    const UberRequestEndpointJSON *  getpickup(void) const;
    bool  hasdestination(void) const;
    UberRequestEndpointJSON *  getdestination(void);
    const UberRequestEndpointJSON *  getdestination(void) const;

    virtual size_t extraUberRequestDetailsResponseComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberRequestDetailsResponseComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberRequestDetailsResponseComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberRequestDetailsResponseComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberRequestDetailsResponseLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberRequestDetailsResponseLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setrequest_id(std::string new_value)
      {
        flagHasrequest_id = true;
        storerequest_id = new_value;
      }
    void unsetrequest_id(void)
      {
        flagHasrequest_id = false;
      }
    void setstatus(std::string new_value)
      {
        flagHasstatus = true;
        storestatus = new_value;
      }
    void unsetstatus(void)
      {
        flagHasstatus = false;
      }
    void setvehicle(Typevehicle new_value)
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
        if (flagHasvehicle)
          {
            switch (storevehicle.key)
              {
                case 0:
                    storevehicle.u.choice0->remove_reference();
                    break;
                case 1:
                    break;
                default:
                    assert(false);
              }
          }
        flagHasvehicle = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storevehicle = new_value;
      }
    void unsetvehicle(void)
      {
        if (flagHasvehicle)
          {
            switch (storevehicle.key)
              {
                case 0:
                    storevehicle.u.choice0->remove_reference();
                    break;
                case 1:
                    break;
                default:
                    assert(false);
              }
          }
        flagHasvehicle = false;
      }
    void setdriver(Typedriver new_value)
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
        if (flagHasdriver)
          {
            switch (storedriver.key)
              {
                case 0:
                    storedriver.u.choice0->remove_reference();
                    break;
                case 1:
                    break;
                default:
                    assert(false);
              }
          }
        flagHasdriver = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storedriver = new_value;
      }
    void unsetdriver(void)
      {
        if (flagHasdriver)
          {
            switch (storedriver.key)
              {
                case 0:
                    storedriver.u.choice0->remove_reference();
                    break;
                case 1:
                    break;
                default:
                    assert(false);
              }
          }
        flagHasdriver = false;
      }
    void setlocation(Typelocation new_value)
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
        if (flagHaslocation)
          {
            switch (storelocation.key)
              {
                case 0:
                    storelocation.u.choice0->remove_reference();
                    break;
                case 1:
                    break;
                default:
                    assert(false);
              }
          }
        flagHaslocation = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storelocation = new_value;
      }
    void unsetlocation(void)
      {
        if (flagHaslocation)
          {
            switch (storelocation.key)
              {
                case 0:
                    storelocation.u.choice0->remove_reference();
                    break;
                case 1:
                    break;
                default:
                    assert(false);
              }
          }
        flagHaslocation = false;
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
    void setpickup(UberRequestEndpointJSON * new_value)
      {
        new_value->add_reference();
        if (flagHaspickup)
          {
            storepickup->remove_reference();
          }
        flagHaspickup = true;
        storepickup = new_value;
      }
    void unsetpickup(void)
      {
        if (flagHaspickup)
          {
            storepickup->remove_reference();
          }
        flagHaspickup = false;
      }
    void setdestination(UberRequestEndpointJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasdestination)
          {
            storedestination->remove_reference();
          }
        flagHasdestination = true;
        storedestination = new_value;
      }
    void unsetdestination(void)
      {
        if (flagHasdestination)
          {
            storedestination->remove_reference();
          }
        flagHasdestination = false;
      }

    virtual void extraUberRequestDetailsResponseAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberRequestDetailsResponseSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberRequestDetailsResponseLookup(key);
        if (old_field == NULL)
          {
            extraUberRequestDetailsResponseAppendPair(key, new_component);
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
        assert(flagHasrequest_id);
        handler->start_pair("request_id");
        handler->string_value(storerequest_id);
        assert(flagHasstatus);
        handler->start_pair("status");
        handler->string_value(storestatus);
        assert(flagHasvehicle);
        handler->start_pair("vehicle");
        switch (storevehicle.key)
          {
            case 0:
                storevehicle.u.choice0->write_as_json(handler);
                break;
            case 1:
                handler->null_value();
                break;
            default:
                assert(false);
          }
        assert(flagHasdriver);
        handler->start_pair("driver");
        switch (storedriver.key)
          {
            case 0:
                storedriver.u.choice0->write_as_json(handler);
                break;
            case 1:
                handler->null_value();
                break;
            default:
                assert(false);
          }
        assert(flagHaslocation);
        handler->start_pair("location");
        switch (storelocation.key)
          {
            case 0:
                storelocation.u.choice0->write_as_json(handler);
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
        if (flagHaspickup)
          {
            handler->start_pair("pickup");
            storepickup->write_as_json(handler);
          }
        if (flagHasdestination)
          {
            handler->start_pair("destination");
            storedestination->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasrequest_id()))
          {
            return "When parsing the object for %what%, the \"request_id\" field was missing.";
          }
        if (!(hasstatus()))
          {
            return "When parsing the object for %what%, the \"status\" field was missing.";
          }
        if (!(hasvehicle()))
          {
            return "When parsing the object for %what%, the \"vehicle\" field was missing.";
          }
        if (!(hasdriver()))
          {
            return "When parsing the object for %what%, the \"driver\" field was missing.";
          }
        if (!(haslocation()))
          {
            return "When parsing the object for %what%, the \"location\" field was missing.";
          }
        if (!(hassurge_multiplier()))
          {
            return "When parsing the object for %what%, the \"surge_multiplier\" field was missing.";
          }
        return NULL;
      }

    static UberRequestDetailsResponseJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberRequestDetailsResponseJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberRequestDetailsResponseJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberRequestDetailsResponseJSON>, UberRequestDetailsResponseJSON *, bool> generator("Type UberRequestDetailsResponse", ignore_extras);
            parse_json_value(text, "Text for UberRequestDetailsResponseJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberRequestDetailsResponseJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberRequestDetailsResponseJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberRequestDetailsResponseJSON>, UberRequestDetailsResponseJSON *, bool> generator("Type UberRequestDetailsResponse", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorrequest_id;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorstatus;
    class FieldGeneratorvehicle : public JSONParallelGenerator
          {
          private:
            JSONHoldingGenerator<UberRequestVehicleJSON::Generator, RCHandle<UberRequestVehicleJSON>, UberRequestVehicleJSON *, bool > field0;
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
                Typevehicle result;
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
            virtual void handle_result(Typevehicle result) = 0;

          public:
            FieldGeneratorvehicle(bool ignore_extras) : field0("option 0 of field \"vehicle\"", ignore_extras), field1("option 1 of field \"vehicle\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorvehicle(std::string what, bool ignore_extras) : field0("option 0 of field \"vehicle\"", ignore_extras), field1("option 1 of field \"vehicle\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorvehicle(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class Holdervehicle
          {
          private:
            bool have_data;
            Typevehicle data;

          public:
            Holdervehicle(void) : have_data(false)  { }
            Holdervehicle(Typevehicle init_data) : have_data(true), data(init_data)
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
            Holdervehicle(const Holdervehicle &other) : have_data(other.haveData()), data(other.referenced())
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
            ~Holdervehicle(void)
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

            void operator=(const Holdervehicle &other)
              {
                Typevehicle new_data;
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
            Typevehicle referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorvehicle, Holdervehicle, Typevehicle, bool > fieldGeneratorvehicle;
    class FieldGeneratordriver : public JSONParallelGenerator
          {
          private:
            JSONHoldingGenerator<UberRequestDriverJSON::Generator, RCHandle<UberRequestDriverJSON>, UberRequestDriverJSON *, bool > field0;
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
                Typedriver result;
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
            virtual void handle_result(Typedriver result) = 0;

          public:
            FieldGeneratordriver(bool ignore_extras) : field0("option 0 of field \"driver\"", ignore_extras), field1("option 1 of field \"driver\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratordriver(std::string what, bool ignore_extras) : field0("option 0 of field \"driver\"", ignore_extras), field1("option 1 of field \"driver\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratordriver(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class Holderdriver
          {
          private:
            bool have_data;
            Typedriver data;

          public:
            Holderdriver(void) : have_data(false)  { }
            Holderdriver(Typedriver init_data) : have_data(true), data(init_data)
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
            Holderdriver(const Holderdriver &other) : have_data(other.haveData()), data(other.referenced())
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
            ~Holderdriver(void)
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

            void operator=(const Holderdriver &other)
              {
                Typedriver new_data;
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
            Typedriver referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratordriver, Holderdriver, Typedriver, bool > fieldGeneratordriver;
    class FieldGeneratorlocation : public JSONParallelGenerator
          {
          private:
            JSONHoldingGenerator<UberRequestLocationJSON::Generator, RCHandle<UberRequestLocationJSON>, UberRequestLocationJSON *, bool > field0;
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
                Typelocation result;
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
            virtual void handle_result(Typelocation result) = 0;

          public:
            FieldGeneratorlocation(bool ignore_extras) : field0("option 0 of field \"location\"", ignore_extras), field1("option 1 of field \"location\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorlocation(std::string what, bool ignore_extras) : field0("option 0 of field \"location\"", ignore_extras), field1("option 1 of field \"location\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorlocation(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class Holderlocation
          {
          private:
            bool have_data;
            Typelocation data;

          public:
            Holderlocation(void) : have_data(false)  { }
            Holderlocation(Typelocation init_data) : have_data(true), data(init_data)
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
            Holderlocation(const Holderlocation &other) : have_data(other.haveData()), data(other.referenced())
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
            ~Holderlocation(void)
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

            void operator=(const Holderlocation &other)
              {
                Typelocation new_data;
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
            Typelocation referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorlocation, Holderlocation, Typelocation, bool > fieldGeneratorlocation;
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
        JSONHoldingGenerator<UberRequestEndpointJSON::Generator, RCHandle<UberRequestEndpointJSON>, UberRequestEndpointJSON *, bool > fieldGeneratorpickup;
        JSONHoldingGenerator<UberRequestEndpointJSON::Generator, RCHandle<UberRequestEndpointJSON>, UberRequestEndpointJSON *, bool > fieldGeneratordestination;
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
            UberRequestDetailsResponseJSON *result = new UberRequestDetailsResponseJSON();
            assert(result != NULL);
            RCHandle<UberRequestDetailsResponseJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberRequestDetailsResponseAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(UberRequestDetailsResponseJSON *result)
          {
            if (fieldGeneratorrequest_id.have_value)
              {
                result->setrequest_id(fieldGeneratorrequest_id.value);
                fieldGeneratorrequest_id.have_value = false;
              }
            else if (!(result->hasrequest_id()))
              {
                error("When parsing the object for %what%, the \"request_id\" field was missing.");
              }
            if (fieldGeneratorstatus.have_value)
              {
                result->setstatus(fieldGeneratorstatus.value);
                fieldGeneratorstatus.have_value = false;
              }
            else if (!(result->hasstatus()))
              {
                error("When parsing the object for %what%, the \"status\" field was missing.");
              }
            if (fieldGeneratorvehicle.have_value)
              {
                result->setvehicle(fieldGeneratorvehicle.value.referenced());
                fieldGeneratorvehicle.have_value = false;
              }
            else if (!(result->hasvehicle()))
              {
                error("When parsing the object for %what%, the \"vehicle\" field was missing.");
              }
            if (fieldGeneratordriver.have_value)
              {
                result->setdriver(fieldGeneratordriver.value.referenced());
                fieldGeneratordriver.have_value = false;
              }
            else if (!(result->hasdriver()))
              {
                error("When parsing the object for %what%, the \"driver\" field was missing.");
              }
            if (fieldGeneratorlocation.have_value)
              {
                result->setlocation(fieldGeneratorlocation.value.referenced());
                fieldGeneratorlocation.have_value = false;
              }
            else if (!(result->haslocation()))
              {
                error("When parsing the object for %what%, the \"location\" field was missing.");
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
            if (fieldGeneratorpickup.have_value)
              {
                result->setpickup(fieldGeneratorpickup.value.referenced());
                fieldGeneratorpickup.have_value = false;
              }
            if (fieldGeneratordestination.have_value)
              {
                result->setdestination(fieldGeneratordestination.value.referenced());
                fieldGeneratordestination.have_value = false;
              }
          }
        virtual void handle_result(UberRequestDetailsResponseJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'd':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            if (strcmp(&(field_name[2]), "stination") == 0)
                                return &fieldGeneratordestination;
                            break;
                        case 'r':
                            if (strcmp(&(field_name[2]), "iver") == 0)
                                return &fieldGeneratordriver;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'l':
                    if (strcmp(&(field_name[1]), "ocation") == 0)
                        return &fieldGeneratorlocation;
                    break;
                case 'p':
                    if (strcmp(&(field_name[1]), "ickup") == 0)
                        return &fieldGeneratorpickup;
                    break;
                case 'r':
                    if (strcmp(&(field_name[1]), "equest_id") == 0)
                        return &fieldGeneratorrequest_id;
                    break;
                case 's':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 't':
                            if (strcmp(&(field_name[2]), "atus") == 0)
                                return &fieldGeneratorstatus;
                            break;
                        case 'u':
                            if (strcmp(&(field_name[2]), "rge_multiplier") == 0)
                                return &fieldGeneratorsurge_multiplier;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'v':
                    if (strcmp(&(field_name[1]), "ehicle") == 0)
                        return &fieldGeneratorvehicle;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorrequest_id("field \"request_id\" of the UberRequestDetailsResponse class"), fieldGeneratorstatus("field \"status\" of the UberRequestDetailsResponse class"), fieldGeneratorvehicle("field \"vehicle\" of the UberRequestDetailsResponse class", ignore_extras), fieldGeneratordriver("field \"driver\" of the UberRequestDetailsResponse class", ignore_extras), fieldGeneratorlocation("field \"location\" of the UberRequestDetailsResponse class", ignore_extras), fieldGeneratorsurge_multiplier("field \"surge_multiplier\" of the UberRequestDetailsResponse class", ignore_extras), fieldGeneratorpickup("field \"pickup\" of the UberRequestDetailsResponse class", ignore_extras), fieldGeneratordestination("field \"destination\" of the UberRequestDetailsResponse class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberRequestDetailsResponse class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorrequest_id.reset();
            fieldGeneratorstatus.reset();
            fieldGeneratorvehicle.reset();
            fieldGeneratordriver.reset();
            fieldGeneratorlocation.reset();
            fieldGeneratorsurge_multiplier.reset();
            fieldGeneratorpickup.reset();
            fieldGeneratordestination.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UBERREQUESTDETAILSRESPONSEJSON_H */
