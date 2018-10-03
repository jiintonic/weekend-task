/* file "AlertJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef ALERTJSON_H
#define ALERTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class AlertJSON : public ReferenceCounted
  {
  private:
    bool flagHasType;
    std::string storeType;
    bool flagHasDescription;
    std::string storeDescription;
    bool flagHasMessage;
    std::string storeMessage;
    bool flagHasLevelMeteoalarmName;
    std::string storeLevelMeteoalarmName;
    bool flagHasWtypeMeteoalarmName;
    std::string storeWtypeMeteoalarmName;
    bool flagHasAttribution;
    std::string storeAttribution;
    bool flagHasPhenomena;
    std::string storePhenomena;
    bool flagHasSignificance;
    std::string storeSignificance;
    bool flagHasStartDateAndTime;
    DateAndOrTimeJSON * storeStartDateAndTime;
    bool flagHasEndDateAndTime;
    DateAndOrTimeJSON * storeEndDateAndTime;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    AlertJSON(const AlertJSON &);
    AlertJSON & operator=(const AlertJSON &other);

    void  fromJSONType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDescription(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMessage(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLevelMeteoalarmName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWtypeMeteoalarmName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAttribution(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPhenomena(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSignificance(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStartDateAndTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEndDateAndTime(JSONValue *json_value, bool ignore_extras = false);


  public:
    AlertJSON(void);
    virtual ~AlertJSON(void);
    bool  hasType(void) const;
    std::string  getType(void);
    const std::string  getType(void) const;
    bool  hasDescription(void) const;
    std::string  getDescription(void);
    const std::string  getDescription(void) const;
    bool  hasMessage(void) const;
    std::string  getMessage(void);
    const std::string  getMessage(void) const;
    bool  hasLevelMeteoalarmName(void) const;
    std::string  getLevelMeteoalarmName(void);
    const std::string  getLevelMeteoalarmName(void) const;
    bool  hasWtypeMeteoalarmName(void) const;
    std::string  getWtypeMeteoalarmName(void);
    const std::string  getWtypeMeteoalarmName(void) const;
    bool  hasAttribution(void) const;
    std::string  getAttribution(void);
    const std::string  getAttribution(void) const;
    bool  hasPhenomena(void) const;
    std::string  getPhenomena(void);
    const std::string  getPhenomena(void) const;
    bool  hasSignificance(void) const;
    std::string  getSignificance(void);
    const std::string  getSignificance(void) const;
    bool  hasStartDateAndTime(void) const;
    DateAndOrTimeJSON *  getStartDateAndTime(void);
    const DateAndOrTimeJSON *  getStartDateAndTime(void) const;
    bool  hasEndDateAndTime(void) const;
    DateAndOrTimeJSON *  getEndDateAndTime(void);
    const DateAndOrTimeJSON *  getEndDateAndTime(void) const;

    virtual size_t extraAlertComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraAlertComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraAlertComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraAlertComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraAlertLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraAlertLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setType(std::string new_value)
      {
        flagHasType = true;
        storeType = new_value;
      }
    void unsetType(void)
      {
        flagHasType = false;
      }
    void setDescription(std::string new_value)
      {
        flagHasDescription = true;
        storeDescription = new_value;
      }
    void unsetDescription(void)
      {
        flagHasDescription = false;
      }
    void setMessage(std::string new_value)
      {
        flagHasMessage = true;
        storeMessage = new_value;
      }
    void unsetMessage(void)
      {
        flagHasMessage = false;
      }
    void setLevelMeteoalarmName(std::string new_value)
      {
        flagHasLevelMeteoalarmName = true;
        storeLevelMeteoalarmName = new_value;
      }
    void unsetLevelMeteoalarmName(void)
      {
        flagHasLevelMeteoalarmName = false;
      }
    void setWtypeMeteoalarmName(std::string new_value)
      {
        flagHasWtypeMeteoalarmName = true;
        storeWtypeMeteoalarmName = new_value;
      }
    void unsetWtypeMeteoalarmName(void)
      {
        flagHasWtypeMeteoalarmName = false;
      }
    void setAttribution(std::string new_value)
      {
        flagHasAttribution = true;
        storeAttribution = new_value;
      }
    void unsetAttribution(void)
      {
        flagHasAttribution = false;
      }
    void setPhenomena(std::string new_value)
      {
        flagHasPhenomena = true;
        storePhenomena = new_value;
      }
    void unsetPhenomena(void)
      {
        flagHasPhenomena = false;
      }
    void setSignificance(std::string new_value)
      {
        flagHasSignificance = true;
        storeSignificance = new_value;
      }
    void unsetSignificance(void)
      {
        flagHasSignificance = false;
      }
    void setStartDateAndTime(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStartDateAndTime)
          {
            storeStartDateAndTime->remove_reference();
          }
        flagHasStartDateAndTime = true;
        storeStartDateAndTime = new_value;
      }
    void unsetStartDateAndTime(void)
      {
        if (flagHasStartDateAndTime)
          {
            storeStartDateAndTime->remove_reference();
          }
        flagHasStartDateAndTime = false;
      }
    void setEndDateAndTime(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasEndDateAndTime)
          {
            storeEndDateAndTime->remove_reference();
          }
        flagHasEndDateAndTime = true;
        storeEndDateAndTime = new_value;
      }
    void unsetEndDateAndTime(void)
      {
        if (flagHasEndDateAndTime)
          {
            storeEndDateAndTime->remove_reference();
          }
        flagHasEndDateAndTime = false;
      }

    virtual void extraAlertAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraAlertSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraAlertLookup(key);
        if (old_field == NULL)
          {
            extraAlertAppendPair(key, new_component);
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
        assert(flagHasType);
        handler->start_pair("Type");
        handler->string_value(storeType);
        assert(flagHasDescription);
        handler->start_pair("Description");
        handler->string_value(storeDescription);
        assert(flagHasMessage);
        handler->start_pair("Message");
        handler->string_value(storeMessage);
        if (flagHasLevelMeteoalarmName)
          {
            handler->start_pair("LevelMeteoalarmName");
            handler->string_value(storeLevelMeteoalarmName);
          }
        if (flagHasWtypeMeteoalarmName)
          {
            handler->start_pair("WtypeMeteoalarmName");
            handler->string_value(storeWtypeMeteoalarmName);
          }
        if (flagHasAttribution)
          {
            handler->start_pair("Attribution");
            handler->string_value(storeAttribution);
          }
        if (flagHasPhenomena)
          {
            handler->start_pair("Phenomena");
            handler->string_value(storePhenomena);
          }
        if (flagHasSignificance)
          {
            handler->start_pair("Significance");
            handler->string_value(storeSignificance);
          }
        assert(flagHasStartDateAndTime);
        handler->start_pair("StartDateAndTime");
        storeStartDateAndTime->write_as_json(handler);
        assert(flagHasEndDateAndTime);
        handler->start_pair("EndDateAndTime");
        storeEndDateAndTime->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasType()))
          {
            return "When parsing the object for %what%, the \"Type\" field was missing.";
          }
        if (!(hasDescription()))
          {
            return "When parsing the object for %what%, the \"Description\" field was missing.";
          }
        if (!(hasMessage()))
          {
            return "When parsing the object for %what%, the \"Message\" field was missing.";
          }
        if (!(hasStartDateAndTime()))
          {
            return "When parsing the object for %what%, the \"StartDateAndTime\" field was missing.";
          }
        if (!(hasEndDateAndTime()))
          {
            return "When parsing the object for %what%, the \"EndDateAndTime\" field was missing.";
          }
        return NULL;
      }

    static AlertJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static AlertJSON *from_text(const char *text, bool ignore_extras = false)
      {
        AlertJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AlertJSON>, AlertJSON *, bool> generator("Type Alert", ignore_extras);
            parse_json_value(text, "Text for AlertJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static AlertJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        AlertJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AlertJSON>, AlertJSON *, bool> generator("Type Alert", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorType;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDescription;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorMessage;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLevelMeteoalarmName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWtypeMeteoalarmName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAttribution;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPhenomena;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSignificance;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorStartDateAndTime;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorEndDateAndTime;
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
            AlertJSON *result = new AlertJSON();
            assert(result != NULL);
            RCHandle<AlertJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraAlertAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(AlertJSON *result)
          {
            if (fieldGeneratorType.have_value)
              {
                result->setType(fieldGeneratorType.value);
                fieldGeneratorType.have_value = false;
              }
            else if (!(result->hasType()))
              {
                error("When parsing the object for %what%, the \"Type\" field was missing.");
              }
            if (fieldGeneratorDescription.have_value)
              {
                result->setDescription(fieldGeneratorDescription.value);
                fieldGeneratorDescription.have_value = false;
              }
            else if (!(result->hasDescription()))
              {
                error("When parsing the object for %what%, the \"Description\" field was missing.");
              }
            if (fieldGeneratorMessage.have_value)
              {
                result->setMessage(fieldGeneratorMessage.value);
                fieldGeneratorMessage.have_value = false;
              }
            else if (!(result->hasMessage()))
              {
                error("When parsing the object for %what%, the \"Message\" field was missing.");
              }
            if (fieldGeneratorLevelMeteoalarmName.have_value)
              {
                result->setLevelMeteoalarmName(fieldGeneratorLevelMeteoalarmName.value);
                fieldGeneratorLevelMeteoalarmName.have_value = false;
              }
            if (fieldGeneratorWtypeMeteoalarmName.have_value)
              {
                result->setWtypeMeteoalarmName(fieldGeneratorWtypeMeteoalarmName.value);
                fieldGeneratorWtypeMeteoalarmName.have_value = false;
              }
            if (fieldGeneratorAttribution.have_value)
              {
                result->setAttribution(fieldGeneratorAttribution.value);
                fieldGeneratorAttribution.have_value = false;
              }
            if (fieldGeneratorPhenomena.have_value)
              {
                result->setPhenomena(fieldGeneratorPhenomena.value);
                fieldGeneratorPhenomena.have_value = false;
              }
            if (fieldGeneratorSignificance.have_value)
              {
                result->setSignificance(fieldGeneratorSignificance.value);
                fieldGeneratorSignificance.have_value = false;
              }
            if (fieldGeneratorStartDateAndTime.have_value)
              {
                result->setStartDateAndTime(fieldGeneratorStartDateAndTime.value.referenced());
                fieldGeneratorStartDateAndTime.have_value = false;
              }
            else if (!(result->hasStartDateAndTime()))
              {
                error("When parsing the object for %what%, the \"StartDateAndTime\" field was missing.");
              }
            if (fieldGeneratorEndDateAndTime.have_value)
              {
                result->setEndDateAndTime(fieldGeneratorEndDateAndTime.value.referenced());
                fieldGeneratorEndDateAndTime.have_value = false;
              }
            else if (!(result->hasEndDateAndTime()))
              {
                error("When parsing the object for %what%, the \"EndDateAndTime\" field was missing.");
              }
          }
        virtual void handle_result(AlertJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "ttribution") == 0)
                        return &fieldGeneratorAttribution;
                    break;
                case 'D':
                    if (strcmp(&(field_name[1]), "escription") == 0)
                        return &fieldGeneratorDescription;
                    break;
                case 'E':
                    if (strcmp(&(field_name[1]), "ndDateAndTime") == 0)
                        return &fieldGeneratorEndDateAndTime;
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "evelMeteoalarmName") == 0)
                        return &fieldGeneratorLevelMeteoalarmName;
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "essage") == 0)
                        return &fieldGeneratorMessage;
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "henomena") == 0)
                        return &fieldGeneratorPhenomena;
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'i':
                            if (strcmp(&(field_name[2]), "gnificance") == 0)
                                return &fieldGeneratorSignificance;
                            break;
                        case 't':
                            if (strcmp(&(field_name[2]), "artDateAndTime") == 0)
                                return &fieldGeneratorStartDateAndTime;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "ype") == 0)
                        return &fieldGeneratorType;
                    break;
                case 'W':
                    if (strcmp(&(field_name[1]), "typeMeteoalarmName") == 0)
                        return &fieldGeneratorWtypeMeteoalarmName;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorType("field \"Type\" of the Alert class"), fieldGeneratorDescription("field \"Description\" of the Alert class"), fieldGeneratorMessage("field \"Message\" of the Alert class"), fieldGeneratorLevelMeteoalarmName("field \"LevelMeteoalarmName\" of the Alert class"), fieldGeneratorWtypeMeteoalarmName("field \"WtypeMeteoalarmName\" of the Alert class"), fieldGeneratorAttribution("field \"Attribution\" of the Alert class"), fieldGeneratorPhenomena("field \"Phenomena\" of the Alert class"), fieldGeneratorSignificance("field \"Significance\" of the Alert class"), fieldGeneratorStartDateAndTime("field \"StartDateAndTime\" of the Alert class", ignore_extras), fieldGeneratorEndDateAndTime("field \"EndDateAndTime\" of the Alert class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the Alert class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorType.reset();
            fieldGeneratorDescription.reset();
            fieldGeneratorMessage.reset();
            fieldGeneratorLevelMeteoalarmName.reset();
            fieldGeneratorWtypeMeteoalarmName.reset();
            fieldGeneratorAttribution.reset();
            fieldGeneratorPhenomena.reset();
            fieldGeneratorSignificance.reset();
            fieldGeneratorStartDateAndTime.reset();
            fieldGeneratorEndDateAndTime.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* ALERTJSON_H */
