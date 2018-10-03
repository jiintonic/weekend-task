/* file "FlightStatsOperationalTimesJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FLIGHTSTATSOPERATIONALTIMESJSON_H
#define FLIGHTSTATSOPERATIONALTIMESJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "FlightStatsTimesJSON.h"
#include "FlightStatsTimesJSON.h"
#include "FlightStatsTimesJSON.h"
#include "FlightStatsTimesJSON.h"
#include "FlightStatsTimesJSON.h"
#include "FlightStatsTimesJSON.h"
#include "FlightStatsTimesJSON.h"
#include "FlightStatsTimesJSON.h"
#include "FlightStatsTimesJSON.h"
#include "FlightStatsTimesJSON.h"
#include "FlightStatsTimesJSON.h"
#include "FlightStatsTimesJSON.h"
#include "FlightStatsTimesJSON.h"
#include "FlightStatsTimesJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class FlightStatsOperationalTimesJSON : public ReferenceCounted
  {
  private:
    bool flagHaspublishedDeparture;
    FlightStatsTimesJSON * storepublishedDeparture;
    bool flagHaspublishedArrival;
    FlightStatsTimesJSON * storepublishedArrival;
    bool flagHasscheduledGateDeparture;
    FlightStatsTimesJSON * storescheduledGateDeparture;
    bool flagHasestimatedGateDeparture;
    FlightStatsTimesJSON * storeestimatedGateDeparture;
    bool flagHasactualGateDeparture;
    FlightStatsTimesJSON * storeactualGateDeparture;
    bool flagHasflightPlanPlannedDeparture;
    FlightStatsTimesJSON * storeflightPlanPlannedDeparture;
    bool flagHasestimatedRunwayDeparture;
    FlightStatsTimesJSON * storeestimatedRunwayDeparture;
    bool flagHasactualRunwayDeparture;
    FlightStatsTimesJSON * storeactualRunwayDeparture;
    bool flagHasscheduledGateArrival;
    FlightStatsTimesJSON * storescheduledGateArrival;
    bool flagHasestimatedGateArrival;
    FlightStatsTimesJSON * storeestimatedGateArrival;
    bool flagHasactualGateArrival;
    FlightStatsTimesJSON * storeactualGateArrival;
    bool flagHasflightPlanPlannedArrival;
    FlightStatsTimesJSON * storeflightPlanPlannedArrival;
    bool flagHasestimatedRunwayArrival;
    FlightStatsTimesJSON * storeestimatedRunwayArrival;
    bool flagHasactualRunwayArrival;
    FlightStatsTimesJSON * storeactualRunwayArrival;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    FlightStatsOperationalTimesJSON(const FlightStatsOperationalTimesJSON &);
    FlightStatsOperationalTimesJSON & operator=(const FlightStatsOperationalTimesJSON &other);

    void  fromJSONpublishedDeparture(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONpublishedArrival(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONscheduledGateDeparture(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONestimatedGateDeparture(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONactualGateDeparture(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONflightPlanPlannedDeparture(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONestimatedRunwayDeparture(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONactualRunwayDeparture(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONscheduledGateArrival(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONestimatedGateArrival(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONactualGateArrival(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONflightPlanPlannedArrival(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONestimatedRunwayArrival(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONactualRunwayArrival(JSONValue *json_value, bool ignore_extras = false);


  public:
    FlightStatsOperationalTimesJSON(void);
    virtual ~FlightStatsOperationalTimesJSON(void);
    bool  haspublishedDeparture(void) const;
    FlightStatsTimesJSON *  getpublishedDeparture(void);
    const FlightStatsTimesJSON *  getpublishedDeparture(void) const;
    bool  haspublishedArrival(void) const;
    FlightStatsTimesJSON *  getpublishedArrival(void);
    const FlightStatsTimesJSON *  getpublishedArrival(void) const;
    bool  hasscheduledGateDeparture(void) const;
    FlightStatsTimesJSON *  getscheduledGateDeparture(void);
    const FlightStatsTimesJSON *  getscheduledGateDeparture(void) const;
    bool  hasestimatedGateDeparture(void) const;
    FlightStatsTimesJSON *  getestimatedGateDeparture(void);
    const FlightStatsTimesJSON *  getestimatedGateDeparture(void) const;
    bool  hasactualGateDeparture(void) const;
    FlightStatsTimesJSON *  getactualGateDeparture(void);
    const FlightStatsTimesJSON *  getactualGateDeparture(void) const;
    bool  hasflightPlanPlannedDeparture(void) const;
    FlightStatsTimesJSON *  getflightPlanPlannedDeparture(void);
    const FlightStatsTimesJSON *  getflightPlanPlannedDeparture(void) const;
    bool  hasestimatedRunwayDeparture(void) const;
    FlightStatsTimesJSON *  getestimatedRunwayDeparture(void);
    const FlightStatsTimesJSON *  getestimatedRunwayDeparture(void) const;
    bool  hasactualRunwayDeparture(void) const;
    FlightStatsTimesJSON *  getactualRunwayDeparture(void);
    const FlightStatsTimesJSON *  getactualRunwayDeparture(void) const;
    bool  hasscheduledGateArrival(void) const;
    FlightStatsTimesJSON *  getscheduledGateArrival(void);
    const FlightStatsTimesJSON *  getscheduledGateArrival(void) const;
    bool  hasestimatedGateArrival(void) const;
    FlightStatsTimesJSON *  getestimatedGateArrival(void);
    const FlightStatsTimesJSON *  getestimatedGateArrival(void) const;
    bool  hasactualGateArrival(void) const;
    FlightStatsTimesJSON *  getactualGateArrival(void);
    const FlightStatsTimesJSON *  getactualGateArrival(void) const;
    bool  hasflightPlanPlannedArrival(void) const;
    FlightStatsTimesJSON *  getflightPlanPlannedArrival(void);
    const FlightStatsTimesJSON *  getflightPlanPlannedArrival(void) const;
    bool  hasestimatedRunwayArrival(void) const;
    FlightStatsTimesJSON *  getestimatedRunwayArrival(void);
    const FlightStatsTimesJSON *  getestimatedRunwayArrival(void) const;
    bool  hasactualRunwayArrival(void) const;
    FlightStatsTimesJSON *  getactualRunwayArrival(void);
    const FlightStatsTimesJSON *  getactualRunwayArrival(void) const;

    virtual size_t extraFlightStatsOperationalTimesComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraFlightStatsOperationalTimesComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraFlightStatsOperationalTimesComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraFlightStatsOperationalTimesComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraFlightStatsOperationalTimesLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraFlightStatsOperationalTimesLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setpublishedDeparture(FlightStatsTimesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHaspublishedDeparture)
          {
            storepublishedDeparture->remove_reference();
          }
        flagHaspublishedDeparture = true;
        storepublishedDeparture = new_value;
      }
    void unsetpublishedDeparture(void)
      {
        if (flagHaspublishedDeparture)
          {
            storepublishedDeparture->remove_reference();
          }
        flagHaspublishedDeparture = false;
      }
    void setpublishedArrival(FlightStatsTimesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHaspublishedArrival)
          {
            storepublishedArrival->remove_reference();
          }
        flagHaspublishedArrival = true;
        storepublishedArrival = new_value;
      }
    void unsetpublishedArrival(void)
      {
        if (flagHaspublishedArrival)
          {
            storepublishedArrival->remove_reference();
          }
        flagHaspublishedArrival = false;
      }
    void setscheduledGateDeparture(FlightStatsTimesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasscheduledGateDeparture)
          {
            storescheduledGateDeparture->remove_reference();
          }
        flagHasscheduledGateDeparture = true;
        storescheduledGateDeparture = new_value;
      }
    void unsetscheduledGateDeparture(void)
      {
        if (flagHasscheduledGateDeparture)
          {
            storescheduledGateDeparture->remove_reference();
          }
        flagHasscheduledGateDeparture = false;
      }
    void setestimatedGateDeparture(FlightStatsTimesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasestimatedGateDeparture)
          {
            storeestimatedGateDeparture->remove_reference();
          }
        flagHasestimatedGateDeparture = true;
        storeestimatedGateDeparture = new_value;
      }
    void unsetestimatedGateDeparture(void)
      {
        if (flagHasestimatedGateDeparture)
          {
            storeestimatedGateDeparture->remove_reference();
          }
        flagHasestimatedGateDeparture = false;
      }
    void setactualGateDeparture(FlightStatsTimesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasactualGateDeparture)
          {
            storeactualGateDeparture->remove_reference();
          }
        flagHasactualGateDeparture = true;
        storeactualGateDeparture = new_value;
      }
    void unsetactualGateDeparture(void)
      {
        if (flagHasactualGateDeparture)
          {
            storeactualGateDeparture->remove_reference();
          }
        flagHasactualGateDeparture = false;
      }
    void setflightPlanPlannedDeparture(FlightStatsTimesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasflightPlanPlannedDeparture)
          {
            storeflightPlanPlannedDeparture->remove_reference();
          }
        flagHasflightPlanPlannedDeparture = true;
        storeflightPlanPlannedDeparture = new_value;
      }
    void unsetflightPlanPlannedDeparture(void)
      {
        if (flagHasflightPlanPlannedDeparture)
          {
            storeflightPlanPlannedDeparture->remove_reference();
          }
        flagHasflightPlanPlannedDeparture = false;
      }
    void setestimatedRunwayDeparture(FlightStatsTimesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasestimatedRunwayDeparture)
          {
            storeestimatedRunwayDeparture->remove_reference();
          }
        flagHasestimatedRunwayDeparture = true;
        storeestimatedRunwayDeparture = new_value;
      }
    void unsetestimatedRunwayDeparture(void)
      {
        if (flagHasestimatedRunwayDeparture)
          {
            storeestimatedRunwayDeparture->remove_reference();
          }
        flagHasestimatedRunwayDeparture = false;
      }
    void setactualRunwayDeparture(FlightStatsTimesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasactualRunwayDeparture)
          {
            storeactualRunwayDeparture->remove_reference();
          }
        flagHasactualRunwayDeparture = true;
        storeactualRunwayDeparture = new_value;
      }
    void unsetactualRunwayDeparture(void)
      {
        if (flagHasactualRunwayDeparture)
          {
            storeactualRunwayDeparture->remove_reference();
          }
        flagHasactualRunwayDeparture = false;
      }
    void setscheduledGateArrival(FlightStatsTimesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasscheduledGateArrival)
          {
            storescheduledGateArrival->remove_reference();
          }
        flagHasscheduledGateArrival = true;
        storescheduledGateArrival = new_value;
      }
    void unsetscheduledGateArrival(void)
      {
        if (flagHasscheduledGateArrival)
          {
            storescheduledGateArrival->remove_reference();
          }
        flagHasscheduledGateArrival = false;
      }
    void setestimatedGateArrival(FlightStatsTimesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasestimatedGateArrival)
          {
            storeestimatedGateArrival->remove_reference();
          }
        flagHasestimatedGateArrival = true;
        storeestimatedGateArrival = new_value;
      }
    void unsetestimatedGateArrival(void)
      {
        if (flagHasestimatedGateArrival)
          {
            storeestimatedGateArrival->remove_reference();
          }
        flagHasestimatedGateArrival = false;
      }
    void setactualGateArrival(FlightStatsTimesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasactualGateArrival)
          {
            storeactualGateArrival->remove_reference();
          }
        flagHasactualGateArrival = true;
        storeactualGateArrival = new_value;
      }
    void unsetactualGateArrival(void)
      {
        if (flagHasactualGateArrival)
          {
            storeactualGateArrival->remove_reference();
          }
        flagHasactualGateArrival = false;
      }
    void setflightPlanPlannedArrival(FlightStatsTimesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasflightPlanPlannedArrival)
          {
            storeflightPlanPlannedArrival->remove_reference();
          }
        flagHasflightPlanPlannedArrival = true;
        storeflightPlanPlannedArrival = new_value;
      }
    void unsetflightPlanPlannedArrival(void)
      {
        if (flagHasflightPlanPlannedArrival)
          {
            storeflightPlanPlannedArrival->remove_reference();
          }
        flagHasflightPlanPlannedArrival = false;
      }
    void setestimatedRunwayArrival(FlightStatsTimesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasestimatedRunwayArrival)
          {
            storeestimatedRunwayArrival->remove_reference();
          }
        flagHasestimatedRunwayArrival = true;
        storeestimatedRunwayArrival = new_value;
      }
    void unsetestimatedRunwayArrival(void)
      {
        if (flagHasestimatedRunwayArrival)
          {
            storeestimatedRunwayArrival->remove_reference();
          }
        flagHasestimatedRunwayArrival = false;
      }
    void setactualRunwayArrival(FlightStatsTimesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasactualRunwayArrival)
          {
            storeactualRunwayArrival->remove_reference();
          }
        flagHasactualRunwayArrival = true;
        storeactualRunwayArrival = new_value;
      }
    void unsetactualRunwayArrival(void)
      {
        if (flagHasactualRunwayArrival)
          {
            storeactualRunwayArrival->remove_reference();
          }
        flagHasactualRunwayArrival = false;
      }

    virtual void extraFlightStatsOperationalTimesAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraFlightStatsOperationalTimesSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraFlightStatsOperationalTimesLookup(key);
        if (old_field == NULL)
          {
            extraFlightStatsOperationalTimesAppendPair(key, new_component);
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
        if (flagHaspublishedDeparture)
          {
            handler->start_pair("publishedDeparture");
            storepublishedDeparture->write_as_json(handler);
          }
        if (flagHaspublishedArrival)
          {
            handler->start_pair("publishedArrival");
            storepublishedArrival->write_as_json(handler);
          }
        if (flagHasscheduledGateDeparture)
          {
            handler->start_pair("scheduledGateDeparture");
            storescheduledGateDeparture->write_as_json(handler);
          }
        if (flagHasestimatedGateDeparture)
          {
            handler->start_pair("estimatedGateDeparture");
            storeestimatedGateDeparture->write_as_json(handler);
          }
        if (flagHasactualGateDeparture)
          {
            handler->start_pair("actualGateDeparture");
            storeactualGateDeparture->write_as_json(handler);
          }
        if (flagHasflightPlanPlannedDeparture)
          {
            handler->start_pair("flightPlanPlannedDeparture");
            storeflightPlanPlannedDeparture->write_as_json(handler);
          }
        if (flagHasestimatedRunwayDeparture)
          {
            handler->start_pair("estimatedRunwayDeparture");
            storeestimatedRunwayDeparture->write_as_json(handler);
          }
        if (flagHasactualRunwayDeparture)
          {
            handler->start_pair("actualRunwayDeparture");
            storeactualRunwayDeparture->write_as_json(handler);
          }
        if (flagHasscheduledGateArrival)
          {
            handler->start_pair("scheduledGateArrival");
            storescheduledGateArrival->write_as_json(handler);
          }
        if (flagHasestimatedGateArrival)
          {
            handler->start_pair("estimatedGateArrival");
            storeestimatedGateArrival->write_as_json(handler);
          }
        if (flagHasactualGateArrival)
          {
            handler->start_pair("actualGateArrival");
            storeactualGateArrival->write_as_json(handler);
          }
        if (flagHasflightPlanPlannedArrival)
          {
            handler->start_pair("flightPlanPlannedArrival");
            storeflightPlanPlannedArrival->write_as_json(handler);
          }
        if (flagHasestimatedRunwayArrival)
          {
            handler->start_pair("estimatedRunwayArrival");
            storeestimatedRunwayArrival->write_as_json(handler);
          }
        if (flagHasactualRunwayArrival)
          {
            handler->start_pair("actualRunwayArrival");
            storeactualRunwayArrival->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static FlightStatsOperationalTimesJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FlightStatsOperationalTimesJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FlightStatsOperationalTimesJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightStatsOperationalTimesJSON>, FlightStatsOperationalTimesJSON *, bool> generator("Type FlightStatsOperationalTimes", ignore_extras);
            parse_json_value(text, "Text for FlightStatsOperationalTimesJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FlightStatsOperationalTimesJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FlightStatsOperationalTimesJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightStatsOperationalTimesJSON>, FlightStatsOperationalTimesJSON *, bool> generator("Type FlightStatsOperationalTimes", ignore_extras);
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
        JSONHoldingGenerator<FlightStatsTimesJSON::Generator, RCHandle<FlightStatsTimesJSON>, FlightStatsTimesJSON *, bool > fieldGeneratorpublishedDeparture;
        JSONHoldingGenerator<FlightStatsTimesJSON::Generator, RCHandle<FlightStatsTimesJSON>, FlightStatsTimesJSON *, bool > fieldGeneratorpublishedArrival;
        JSONHoldingGenerator<FlightStatsTimesJSON::Generator, RCHandle<FlightStatsTimesJSON>, FlightStatsTimesJSON *, bool > fieldGeneratorscheduledGateDeparture;
        JSONHoldingGenerator<FlightStatsTimesJSON::Generator, RCHandle<FlightStatsTimesJSON>, FlightStatsTimesJSON *, bool > fieldGeneratorestimatedGateDeparture;
        JSONHoldingGenerator<FlightStatsTimesJSON::Generator, RCHandle<FlightStatsTimesJSON>, FlightStatsTimesJSON *, bool > fieldGeneratoractualGateDeparture;
        JSONHoldingGenerator<FlightStatsTimesJSON::Generator, RCHandle<FlightStatsTimesJSON>, FlightStatsTimesJSON *, bool > fieldGeneratorflightPlanPlannedDeparture;
        JSONHoldingGenerator<FlightStatsTimesJSON::Generator, RCHandle<FlightStatsTimesJSON>, FlightStatsTimesJSON *, bool > fieldGeneratorestimatedRunwayDeparture;
        JSONHoldingGenerator<FlightStatsTimesJSON::Generator, RCHandle<FlightStatsTimesJSON>, FlightStatsTimesJSON *, bool > fieldGeneratoractualRunwayDeparture;
        JSONHoldingGenerator<FlightStatsTimesJSON::Generator, RCHandle<FlightStatsTimesJSON>, FlightStatsTimesJSON *, bool > fieldGeneratorscheduledGateArrival;
        JSONHoldingGenerator<FlightStatsTimesJSON::Generator, RCHandle<FlightStatsTimesJSON>, FlightStatsTimesJSON *, bool > fieldGeneratorestimatedGateArrival;
        JSONHoldingGenerator<FlightStatsTimesJSON::Generator, RCHandle<FlightStatsTimesJSON>, FlightStatsTimesJSON *, bool > fieldGeneratoractualGateArrival;
        JSONHoldingGenerator<FlightStatsTimesJSON::Generator, RCHandle<FlightStatsTimesJSON>, FlightStatsTimesJSON *, bool > fieldGeneratorflightPlanPlannedArrival;
        JSONHoldingGenerator<FlightStatsTimesJSON::Generator, RCHandle<FlightStatsTimesJSON>, FlightStatsTimesJSON *, bool > fieldGeneratorestimatedRunwayArrival;
        JSONHoldingGenerator<FlightStatsTimesJSON::Generator, RCHandle<FlightStatsTimesJSON>, FlightStatsTimesJSON *, bool > fieldGeneratoractualRunwayArrival;
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
            FlightStatsOperationalTimesJSON *result = new FlightStatsOperationalTimesJSON();
            assert(result != NULL);
            RCHandle<FlightStatsOperationalTimesJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraFlightStatsOperationalTimesAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(FlightStatsOperationalTimesJSON *result)
          {
            if (fieldGeneratorpublishedDeparture.have_value)
              {
                result->setpublishedDeparture(fieldGeneratorpublishedDeparture.value.referenced());
                fieldGeneratorpublishedDeparture.have_value = false;
              }
            if (fieldGeneratorpublishedArrival.have_value)
              {
                result->setpublishedArrival(fieldGeneratorpublishedArrival.value.referenced());
                fieldGeneratorpublishedArrival.have_value = false;
              }
            if (fieldGeneratorscheduledGateDeparture.have_value)
              {
                result->setscheduledGateDeparture(fieldGeneratorscheduledGateDeparture.value.referenced());
                fieldGeneratorscheduledGateDeparture.have_value = false;
              }
            if (fieldGeneratorestimatedGateDeparture.have_value)
              {
                result->setestimatedGateDeparture(fieldGeneratorestimatedGateDeparture.value.referenced());
                fieldGeneratorestimatedGateDeparture.have_value = false;
              }
            if (fieldGeneratoractualGateDeparture.have_value)
              {
                result->setactualGateDeparture(fieldGeneratoractualGateDeparture.value.referenced());
                fieldGeneratoractualGateDeparture.have_value = false;
              }
            if (fieldGeneratorflightPlanPlannedDeparture.have_value)
              {
                result->setflightPlanPlannedDeparture(fieldGeneratorflightPlanPlannedDeparture.value.referenced());
                fieldGeneratorflightPlanPlannedDeparture.have_value = false;
              }
            if (fieldGeneratorestimatedRunwayDeparture.have_value)
              {
                result->setestimatedRunwayDeparture(fieldGeneratorestimatedRunwayDeparture.value.referenced());
                fieldGeneratorestimatedRunwayDeparture.have_value = false;
              }
            if (fieldGeneratoractualRunwayDeparture.have_value)
              {
                result->setactualRunwayDeparture(fieldGeneratoractualRunwayDeparture.value.referenced());
                fieldGeneratoractualRunwayDeparture.have_value = false;
              }
            if (fieldGeneratorscheduledGateArrival.have_value)
              {
                result->setscheduledGateArrival(fieldGeneratorscheduledGateArrival.value.referenced());
                fieldGeneratorscheduledGateArrival.have_value = false;
              }
            if (fieldGeneratorestimatedGateArrival.have_value)
              {
                result->setestimatedGateArrival(fieldGeneratorestimatedGateArrival.value.referenced());
                fieldGeneratorestimatedGateArrival.have_value = false;
              }
            if (fieldGeneratoractualGateArrival.have_value)
              {
                result->setactualGateArrival(fieldGeneratoractualGateArrival.value.referenced());
                fieldGeneratoractualGateArrival.have_value = false;
              }
            if (fieldGeneratorflightPlanPlannedArrival.have_value)
              {
                result->setflightPlanPlannedArrival(fieldGeneratorflightPlanPlannedArrival.value.referenced());
                fieldGeneratorflightPlanPlannedArrival.have_value = false;
              }
            if (fieldGeneratorestimatedRunwayArrival.have_value)
              {
                result->setestimatedRunwayArrival(fieldGeneratorestimatedRunwayArrival.value.referenced());
                fieldGeneratorestimatedRunwayArrival.have_value = false;
              }
            if (fieldGeneratoractualRunwayArrival.have_value)
              {
                result->setactualRunwayArrival(fieldGeneratoractualRunwayArrival.value.referenced());
                fieldGeneratoractualRunwayArrival.have_value = false;
              }
          }
        virtual void handle_result(FlightStatsOperationalTimesJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'a':
                    if (strncmp(&(field_name[1]), "ctual", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 'G':
                                if (strncmp(&(field_name[7]), "ate", 3) == 0)
                                  {
                                    switch ((unsigned char)(field_name[10]))
                                      {
                                        case 'A':
                                            if (strcmp(&(field_name[11]), "rrival") == 0)
                                                return &fieldGeneratoractualGateArrival;
                                            break;
                                        case 'D':
                                            if (strcmp(&(field_name[11]), "eparture") == 0)
                                                return &fieldGeneratoractualGateDeparture;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'R':
                                if (strncmp(&(field_name[7]), "unway", 5) == 0)
                                  {
                                    switch ((unsigned char)(field_name[12]))
                                      {
                                        case 'A':
                                            if (strcmp(&(field_name[13]), "rrival") == 0)
                                                return &fieldGeneratoractualRunwayArrival;
                                            break;
                                        case 'D':
                                            if (strcmp(&(field_name[13]), "eparture") == 0)
                                                return &fieldGeneratoractualRunwayDeparture;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'e':
                    if (strncmp(&(field_name[1]), "stimated", 8) == 0)
                      {
                        switch ((unsigned char)(field_name[9]))
                          {
                            case 'G':
                                if (strncmp(&(field_name[10]), "ate", 3) == 0)
                                  {
                                    switch ((unsigned char)(field_name[13]))
                                      {
                                        case 'A':
                                            if (strcmp(&(field_name[14]), "rrival") == 0)
                                                return &fieldGeneratorestimatedGateArrival;
                                            break;
                                        case 'D':
                                            if (strcmp(&(field_name[14]), "eparture") == 0)
                                                return &fieldGeneratorestimatedGateDeparture;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'R':
                                if (strncmp(&(field_name[10]), "unway", 5) == 0)
                                  {
                                    switch ((unsigned char)(field_name[15]))
                                      {
                                        case 'A':
                                            if (strcmp(&(field_name[16]), "rrival") == 0)
                                                return &fieldGeneratorestimatedRunwayArrival;
                                            break;
                                        case 'D':
                                            if (strcmp(&(field_name[16]), "eparture") == 0)
                                                return &fieldGeneratorestimatedRunwayDeparture;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'f':
                    if (strncmp(&(field_name[1]), "lightPlanPlanned", 16) == 0)
                      {
                        switch ((unsigned char)(field_name[17]))
                          {
                            case 'A':
                                if (strcmp(&(field_name[18]), "rrival") == 0)
                                    return &fieldGeneratorflightPlanPlannedArrival;
                                break;
                            case 'D':
                                if (strcmp(&(field_name[18]), "eparture") == 0)
                                    return &fieldGeneratorflightPlanPlannedDeparture;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'p':
                    if (strncmp(&(field_name[1]), "ublished", 8) == 0)
                      {
                        switch ((unsigned char)(field_name[9]))
                          {
                            case 'A':
                                if (strcmp(&(field_name[10]), "rrival") == 0)
                                    return &fieldGeneratorpublishedArrival;
                                break;
                            case 'D':
                                if (strcmp(&(field_name[10]), "eparture") == 0)
                                    return &fieldGeneratorpublishedDeparture;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 's':
                    if (strncmp(&(field_name[1]), "cheduledGate", 12) == 0)
                      {
                        switch ((unsigned char)(field_name[13]))
                          {
                            case 'A':
                                if (strcmp(&(field_name[14]), "rrival") == 0)
                                    return &fieldGeneratorscheduledGateArrival;
                                break;
                            case 'D':
                                if (strcmp(&(field_name[14]), "eparture") == 0)
                                    return &fieldGeneratorscheduledGateDeparture;
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
        Generator(bool ignore_extras = false) : fieldGeneratorpublishedDeparture("field \"publishedDeparture\" of the FlightStatsOperationalTimes class", ignore_extras), fieldGeneratorpublishedArrival("field \"publishedArrival\" of the FlightStatsOperationalTimes class", ignore_extras), fieldGeneratorscheduledGateDeparture("field \"scheduledGateDeparture\" of the FlightStatsOperationalTimes class", ignore_extras), fieldGeneratorestimatedGateDeparture("field \"estimatedGateDeparture\" of the FlightStatsOperationalTimes class", ignore_extras), fieldGeneratoractualGateDeparture("field \"actualGateDeparture\" of the FlightStatsOperationalTimes class", ignore_extras), fieldGeneratorflightPlanPlannedDeparture("field \"flightPlanPlannedDeparture\" of the FlightStatsOperationalTimes class", ignore_extras), fieldGeneratorestimatedRunwayDeparture("field \"estimatedRunwayDeparture\" of the FlightStatsOperationalTimes class", ignore_extras), fieldGeneratoractualRunwayDeparture("field \"actualRunwayDeparture\" of the FlightStatsOperationalTimes class", ignore_extras), fieldGeneratorscheduledGateArrival("field \"scheduledGateArrival\" of the FlightStatsOperationalTimes class", ignore_extras), fieldGeneratorestimatedGateArrival("field \"estimatedGateArrival\" of the FlightStatsOperationalTimes class", ignore_extras), fieldGeneratoractualGateArrival("field \"actualGateArrival\" of the FlightStatsOperationalTimes class", ignore_extras), fieldGeneratorflightPlanPlannedArrival("field \"flightPlanPlannedArrival\" of the FlightStatsOperationalTimes class", ignore_extras), fieldGeneratorestimatedRunwayArrival("field \"estimatedRunwayArrival\" of the FlightStatsOperationalTimes class", ignore_extras), fieldGeneratoractualRunwayArrival("field \"actualRunwayArrival\" of the FlightStatsOperationalTimes class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the FlightStatsOperationalTimes class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorpublishedDeparture.reset();
            fieldGeneratorpublishedArrival.reset();
            fieldGeneratorscheduledGateDeparture.reset();
            fieldGeneratorestimatedGateDeparture.reset();
            fieldGeneratoractualGateDeparture.reset();
            fieldGeneratorflightPlanPlannedDeparture.reset();
            fieldGeneratorestimatedRunwayDeparture.reset();
            fieldGeneratoractualRunwayDeparture.reset();
            fieldGeneratorscheduledGateArrival.reset();
            fieldGeneratorestimatedGateArrival.reset();
            fieldGeneratoractualGateArrival.reset();
            fieldGeneratorflightPlanPlannedArrival.reset();
            fieldGeneratorestimatedRunwayArrival.reset();
            fieldGeneratoractualRunwayArrival.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* FLIGHTSTATSOPERATIONALTIMESJSON_H */
