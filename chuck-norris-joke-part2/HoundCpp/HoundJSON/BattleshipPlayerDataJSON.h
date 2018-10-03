/* file "BattleshipPlayerDataJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef BATTLESHIPPLAYERDATAJSON_H
#define BATTLESHIPPLAYERDATAJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include "BattleshipCoordinateJSON.h"
#include "BattleshipShipTypeJSON.h"
#include "BattleshipShipTypeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class BattleshipPlayerDataJSON : public ReferenceCounted
  {
  private:
    bool flagHasCoordinates;
    std::vector< BattleshipCoordinateJSON * > storeCoordinates;
    bool flagHasSunkShip;
    BattleshipShipTypeJSON * storeSunkShip;
    bool flagHasShipLocations;
    std::vector< BattleshipShipTypeJSON * > storeShipLocations;
    bool flagHasIsGameOver;
    bool storeIsGameOver;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    BattleshipPlayerDataJSON(const BattleshipPlayerDataJSON &);
    BattleshipPlayerDataJSON & operator=(const BattleshipPlayerDataJSON &other);

    void  fromJSONCoordinates(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSunkShip(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONShipLocations(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsGameOver(JSONValue *json_value, bool ignore_extras = false);


  public:
    BattleshipPlayerDataJSON(void);
    virtual ~BattleshipPlayerDataJSON(void);
    bool  hasCoordinates(void) const;
    size_t  countOfCoordinates(void) const;
    BattleshipCoordinateJSON *  elementOfCoordinates(size_t element_num);
    const BattleshipCoordinateJSON *  elementOfCoordinates(size_t element_num) const;
    std::vector< BattleshipCoordinateJSON * >  getCoordinates(void);
    const std::vector< BattleshipCoordinateJSON * >  getCoordinates(void) const;
    bool  hasSunkShip(void) const;
    BattleshipShipTypeJSON *  getSunkShip(void);
    const BattleshipShipTypeJSON *  getSunkShip(void) const;
    bool  hasShipLocations(void) const;
    size_t  countOfShipLocations(void) const;
    BattleshipShipTypeJSON *  elementOfShipLocations(size_t element_num);
    const BattleshipShipTypeJSON *  elementOfShipLocations(size_t element_num) const;
    std::vector< BattleshipShipTypeJSON * >  getShipLocations(void);
    const std::vector< BattleshipShipTypeJSON * >  getShipLocations(void) const;
    bool  hasIsGameOver(void) const;
    bool  getIsGameOver(void);
    const bool  getIsGameOver(void) const;

    virtual size_t extraBattleshipPlayerDataComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraBattleshipPlayerDataComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraBattleshipPlayerDataComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraBattleshipPlayerDataComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraBattleshipPlayerDataLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraBattleshipPlayerDataLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void initCoordinates(void)
      {
        if (flagHasCoordinates)
          {
            for (size_t num3 = 0; num3 < storeCoordinates.size(); ++num3)
              {
                storeCoordinates[num3]->remove_reference();
              }
          }
        flagHasCoordinates = true;
        storeCoordinates.clear();
      }
    void appendCoordinates(BattleshipCoordinateJSON * to_append)
      {
        if (!flagHasCoordinates)
          {
            flagHasCoordinates = true;
            storeCoordinates.clear();
          }
        assert(flagHasCoordinates);
        to_append->add_reference();
        storeCoordinates.push_back(to_append);
      }
    void unsetCoordinates(void)
      {
        if (flagHasCoordinates)
          {
            for (size_t num4 = 0; num4 < storeCoordinates.size(); ++num4)
              {
                storeCoordinates[num4]->remove_reference();
              }
          }
        flagHasCoordinates = false;
        storeCoordinates.clear();
      }
    void setSunkShip(BattleshipShipTypeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSunkShip)
          {
            storeSunkShip->remove_reference();
          }
        flagHasSunkShip = true;
        storeSunkShip = new_value;
      }
    void unsetSunkShip(void)
      {
        if (flagHasSunkShip)
          {
            storeSunkShip->remove_reference();
          }
        flagHasSunkShip = false;
      }
    void initShipLocations(void)
      {
        if (flagHasShipLocations)
          {
            for (size_t num5 = 0; num5 < storeShipLocations.size(); ++num5)
              {
                storeShipLocations[num5]->remove_reference();
              }
          }
        flagHasShipLocations = true;
        storeShipLocations.clear();
      }
    void appendShipLocations(BattleshipShipTypeJSON * to_append)
      {
        if (!flagHasShipLocations)
          {
            flagHasShipLocations = true;
            storeShipLocations.clear();
          }
        assert(flagHasShipLocations);
        to_append->add_reference();
        storeShipLocations.push_back(to_append);
      }
    void unsetShipLocations(void)
      {
        if (flagHasShipLocations)
          {
            for (size_t num6 = 0; num6 < storeShipLocations.size(); ++num6)
              {
                storeShipLocations[num6]->remove_reference();
              }
          }
        flagHasShipLocations = false;
        storeShipLocations.clear();
      }
    void setIsGameOver(bool new_value)
      {
        flagHasIsGameOver = true;
        storeIsGameOver = new_value;
      }
    void unsetIsGameOver(void)
      {
        flagHasIsGameOver = false;
      }

    virtual void extraBattleshipPlayerDataAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraBattleshipPlayerDataSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraBattleshipPlayerDataLookup(key);
        if (old_field == NULL)
          {
            extraBattleshipPlayerDataAppendPair(key, new_component);
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

    virtual void write_as_json(JSONHandler *handler) const
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
        assert(flagHasCoordinates);
        handler->start_pair("Coordinates");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeCoordinates.size(); ++num1)
          {
            storeCoordinates[num1]->write_as_json(handler);
          }
        handler->finish_array();
        if (flagHasSunkShip)
          {
            handler->start_pair("SunkShip");
            storeSunkShip->write_as_json(handler);
          }
        if (flagHasShipLocations)
          {
            handler->start_pair("ShipLocations");
            handler->start_array();
            for (size_t num2 = 0; num2 < storeShipLocations.size(); ++num2)
              {
                storeShipLocations[num2]->write_as_json(handler);
              }
            handler->finish_array();
          }
        assert(flagHasIsGameOver);
        handler->start_pair("IsGameOver");
        handler->boolean_value(storeIsGameOver);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasCoordinates()))
          {
            return "When parsing the object for %what%, the \"Coordinates\" field was missing.";
          }
        if (!(hasIsGameOver()))
          {
            return "When parsing the object for %what%, the \"IsGameOver\" field was missing.";
          }
        return NULL;
      }

    static BattleshipPlayerDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static BattleshipPlayerDataJSON *from_text(const char *text, bool ignore_extras = false)
      {
        BattleshipPlayerDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<BattleshipPlayerDataJSON>, BattleshipPlayerDataJSON *, bool> generator("Type BattleshipPlayerData", ignore_extras);
            parse_json_value(text, "Text for BattleshipPlayerDataJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static BattleshipPlayerDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        BattleshipPlayerDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<BattleshipPlayerDataJSON>, BattleshipPlayerDataJSON *, bool> generator("Type BattleshipPlayerData", ignore_extras);
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
        JSONHoldingArrayGenerator<BattleshipCoordinateJSON::Generator, RCHandle<BattleshipCoordinateJSON>, BattleshipCoordinateJSON *, bool > fieldGeneratorCoordinates;
        JSONHoldingGenerator<BattleshipShipTypeJSON::Generator, RCHandle<BattleshipShipTypeJSON>, BattleshipShipTypeJSON *, bool > fieldGeneratorSunkShip;
        JSONHoldingArrayGenerator<BattleshipShipTypeJSON::Generator, RCHandle<BattleshipShipTypeJSON>, BattleshipShipTypeJSON *, bool > fieldGeneratorShipLocations;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsGameOver;
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
            BattleshipPlayerDataJSON *result = new BattleshipPlayerDataJSON();
            assert(result != NULL);
            RCHandle<BattleshipPlayerDataJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraBattleshipPlayerDataAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(BattleshipPlayerDataJSON *result)
          {
            if (fieldGeneratorCoordinates.have_value)
              {
                result->initCoordinates();
                size_t count = fieldGeneratorCoordinates.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendCoordinates(fieldGeneratorCoordinates.value[num].referenced());
                  }
                fieldGeneratorCoordinates.value.clear();
                fieldGeneratorCoordinates.have_value = false;
              }
            else if (!(result->hasCoordinates()))
              {
                error("When parsing the object for %what%, the \"Coordinates\" field was missing.");
              }
            if (fieldGeneratorSunkShip.have_value)
              {
                result->setSunkShip(fieldGeneratorSunkShip.value.referenced());
                fieldGeneratorSunkShip.have_value = false;
              }
            if (fieldGeneratorShipLocations.have_value)
              {
                result->initShipLocations();
                size_t count = fieldGeneratorShipLocations.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendShipLocations(fieldGeneratorShipLocations.value[num].referenced());
                  }
                fieldGeneratorShipLocations.value.clear();
                fieldGeneratorShipLocations.have_value = false;
              }
            if (fieldGeneratorIsGameOver.have_value)
              {
                result->setIsGameOver(fieldGeneratorIsGameOver.value);
                fieldGeneratorIsGameOver.have_value = false;
              }
            else if (!(result->hasIsGameOver()))
              {
                error("When parsing the object for %what%, the \"IsGameOver\" field was missing.");
              }
          }
        virtual void handle_result(BattleshipPlayerDataJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "oordinates") == 0)
                        return &fieldGeneratorCoordinates;
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "sGameOver") == 0)
                        return &fieldGeneratorIsGameOver;
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'h':
                            if (strcmp(&(field_name[2]), "ipLocations") == 0)
                                return &fieldGeneratorShipLocations;
                            break;
                        case 'u':
                            if (strcmp(&(field_name[2]), "nkShip") == 0)
                                return &fieldGeneratorSunkShip;
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
        Generator(bool ignore_extras = false) : fieldGeneratorCoordinates("field \"Coordinates\" of the BattleshipPlayerData class", ignore_extras), fieldGeneratorSunkShip("field \"SunkShip\" of the BattleshipPlayerData class", ignore_extras), fieldGeneratorShipLocations("field \"ShipLocations\" of the BattleshipPlayerData class", ignore_extras), fieldGeneratorIsGameOver("field \"IsGameOver\" of the BattleshipPlayerData class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the BattleshipPlayerData class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorCoordinates.reset();
            fieldGeneratorSunkShip.reset();
            fieldGeneratorShipLocations.reset();
            fieldGeneratorIsGameOver.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* BATTLESHIPPLAYERDATAJSON_H */
