/* file "ShowMapInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SHOWMAPINFORMATIONNUGGETJSON_H
#define SHOWMAPINFORMATIONNUGGETJSON_H

#pragma interface

#include "MapInformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include "MapLocationJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class ShowMapInformationNuggetJSON : public MapInformationNuggetJSON
  {
  private:
    bool flagHasMapLocationSpecs;
    std::vector< MapLocationJSON * > storeMapLocationSpecs;
    bool flagHasRequestedCoordinates;
    bool storeRequestedCoordinates;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    ShowMapInformationNuggetJSON(const ShowMapInformationNuggetJSON &);
    ShowMapInformationNuggetJSON & operator=(const ShowMapInformationNuggetJSON &other);

    JSONValue * extraMapLocationSpecsToJSON(void) const;
    JSONValue * extraRequestedCoordinatesToJSON(void) const;

    void  fromJSONMapLocationSpecs(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestedCoordinates(JSONValue *json_value, bool ignore_extras = false);


  public:
    ShowMapInformationNuggetJSON(void);
    virtual ~ShowMapInformationNuggetJSON(void);
    const char * getMapNuggetKind(void) const;
    bool  hasMapLocationSpecs(void) const;
    size_t  countOfMapLocationSpecs(void) const;
    MapLocationJSON *  elementOfMapLocationSpecs(size_t element_num);
    const MapLocationJSON *  elementOfMapLocationSpecs(size_t element_num) const;
    std::vector< MapLocationJSON * >  getMapLocationSpecs(void);
    const std::vector< MapLocationJSON * >  getMapLocationSpecs(void) const;
    bool  hasRequestedCoordinates(void) const;
    bool  getRequestedCoordinates(void);
    const bool  getRequestedCoordinates(void) const;

    virtual size_t extraShowMapInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraShowMapInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraShowMapInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraShowMapInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraShowMapInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraShowMapInformationNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraMapInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasMapLocationSpecs)
            ++result;
        if (flagHasRequestedCoordinates)
            ++result;
        result += extraShowMapInformationNuggetComponentCount();
        return result;
      }
    const char *extraMapInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasMapLocationSpecs)
          {
            if (remainder == 0)
                return "MapLocationSpecs";
            --remainder;
          }
        if (flagHasRequestedCoordinates)
          {
            if (remainder == 0)
                return "RequestedCoordinates";
            --remainder;
          }
        return extraShowMapInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraMapInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasMapLocationSpecs)
          {
            if (remainder == 0)
                return extraMapLocationSpecsToJSON();
            --remainder;
          }
        if (flagHasRequestedCoordinates)
          {
            if (remainder == 0)
                return extraRequestedCoordinatesToJSON();
            --remainder;
          }
        return extraShowMapInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraMapInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasMapLocationSpecs)
          {
            if (remainder == 0)
                return extraMapLocationSpecsToJSON();
            --remainder;
          }
        if (flagHasRequestedCoordinates)
          {
            if (remainder == 0)
                return extraRequestedCoordinatesToJSON();
            --remainder;
          }
        return extraShowMapInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraMapInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'M':
                if (strcmp(&(field_name[1]), "apLocationSpecs") == 0)
                    return (flagHasMapLocationSpecs ? extraMapLocationSpecsToJSON() : NULL);
                break;
            case 'R':
                if (strcmp(&(field_name[1]), "equestedCoordinates") == 0)
                    return (flagHasRequestedCoordinates ? extraRequestedCoordinatesToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraShowMapInformationNuggetLookup(field_name);
      }
    const JSONValue *extraMapInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'M':
                if (strcmp(&(field_name[1]), "apLocationSpecs") == 0)
                    return (flagHasMapLocationSpecs ? extraMapLocationSpecsToJSON() : NULL);
                break;
            case 'R':
                if (strcmp(&(field_name[1]), "equestedCoordinates") == 0)
                    return (flagHasRequestedCoordinates ? extraRequestedCoordinatesToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraShowMapInformationNuggetLookup(field_name);
      }

    void initMapLocationSpecs(void)
      {
        if (flagHasMapLocationSpecs)
          {
            for (size_t num2 = 0; num2 < storeMapLocationSpecs.size(); ++num2)
              {
                storeMapLocationSpecs[num2]->remove_reference();
              }
          }
        flagHasMapLocationSpecs = true;
        storeMapLocationSpecs.clear();
      }
    void appendMapLocationSpecs(MapLocationJSON * to_append)
      {
        if (!flagHasMapLocationSpecs)
          {
            flagHasMapLocationSpecs = true;
            storeMapLocationSpecs.clear();
          }
        assert(flagHasMapLocationSpecs);
        to_append->add_reference();
        storeMapLocationSpecs.push_back(to_append);
      }
    void unsetMapLocationSpecs(void)
      {
        if (flagHasMapLocationSpecs)
          {
            for (size_t num3 = 0; num3 < storeMapLocationSpecs.size(); ++num3)
              {
                storeMapLocationSpecs[num3]->remove_reference();
              }
          }
        flagHasMapLocationSpecs = false;
        storeMapLocationSpecs.clear();
      }
    void setRequestedCoordinates(bool new_value)
      {
        flagHasRequestedCoordinates = true;
        storeRequestedCoordinates = new_value;
      }
    void unsetRequestedCoordinates(void)
      {
        flagHasRequestedCoordinates = false;
      }

    virtual void extraShowMapInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraShowMapInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraShowMapInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraShowMapInformationNuggetAppendPair(key, new_component);
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
    void extraMapInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'M':
                if (strcmp(&(key[1]), "apLocationSpecs") == 0)
                    {
                    fromJSONMapLocationSpecs(new_component, false);
                    return;
                    }
                break;
            case 'R':
                if (strcmp(&(key[1]), "equestedCoordinates") == 0)
                    {
                    fromJSONRequestedCoordinates(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraShowMapInformationNuggetAppendPair(key, new_component);
      }
    void extraMapInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'M':
                if (strcmp(&(key[1]), "apLocationSpecs") == 0)
                    {
                    fromJSONMapLocationSpecs(new_component, false);
                    return;
                    }
                break;
            case 'R':
                if (strcmp(&(key[1]), "equestedCoordinates") == 0)
                    {
                    fromJSONRequestedCoordinates(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraShowMapInformationNuggetSetField(key, new_component);
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
        MapInformationNuggetJSON::write_fields_as_json(handler);
        assert(flagHasMapLocationSpecs);
        handler->start_pair("MapLocationSpecs");
        assert(storeMapLocationSpecs.size() >= 1);
        handler->start_array();
        for (size_t num1 = 0; num1 < storeMapLocationSpecs.size(); ++num1)
          {
            storeMapLocationSpecs[num1]->write_as_json(handler);
          }
        handler->finish_array();
        if (flagHasRequestedCoordinates)
          {
            handler->start_pair("RequestedCoordinates");
            handler->boolean_value(storeRequestedCoordinates);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasMapLocationSpecs()))
          {
            return "When parsing the object for %what%, the \"MapLocationSpecs\" field was missing.";
          }
        return NULL;
      }

    static ShowMapInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ShowMapInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ShowMapInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ShowMapInformationNuggetJSON>, ShowMapInformationNuggetJSON *, bool> generator("Type ShowMapInformationNugget", ignore_extras);
            parse_json_value(text, "Text for ShowMapInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ShowMapInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ShowMapInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ShowMapInformationNuggetJSON>, ShowMapInformationNuggetJSON *, bool> generator("Type ShowMapInformationNugget", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public MapInformationNuggetJSON::Generator
      {
      private:
        JSONHoldingArrayGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorMapLocationSpecs;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorRequestedCoordinates;
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
            if (!(strcmp(getMapInformationNuggetJSONKey().c_str(), "ShowMap") == 0))
                throw("The key field has a value other than `ShowMap'.");
            ShowMapInformationNuggetJSON *result = new ShowMapInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<ShowMapInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraShowMapInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(MapInformationNuggetJSON *new_result)
          {
            handle_result((ShowMapInformationNuggetJSON *)new_result);
          }
        void finish(ShowMapInformationNuggetJSON *result)
          {
            if (fieldGeneratorMapLocationSpecs.have_value)
              {
                result->initMapLocationSpecs();
                size_t count = fieldGeneratorMapLocationSpecs.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendMapLocationSpecs(fieldGeneratorMapLocationSpecs.value[num].referenced());
                  }
                fieldGeneratorMapLocationSpecs.value.clear();
                fieldGeneratorMapLocationSpecs.have_value = false;
              }
            else if (!(result->hasMapLocationSpecs()))
              {
                error("When parsing the object for %what%, the \"MapLocationSpecs\" field was missing.");
              }
            if (fieldGeneratorRequestedCoordinates.have_value)
              {
                result->setRequestedCoordinates(fieldGeneratorRequestedCoordinates.value);
                fieldGeneratorRequestedCoordinates.have_value = false;
              }
            MapInformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(ShowMapInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'M':
                    if (strcmp(&(field_name[1]), "apLocationSpecs") == 0)
                        return &fieldGeneratorMapLocationSpecs;
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "equestedCoordinates") == 0)
                        return &fieldGeneratorRequestedCoordinates;
                    break;
                default:
                    break;
              }
            return MapInformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : MapInformationNuggetJSON::Generator(ignore_extras), fieldGeneratorMapLocationSpecs("field \"MapLocationSpecs\" of the ShowMapInformationNugget class", ignore_extras), fieldGeneratorRequestedCoordinates("field \"RequestedCoordinates\" of the ShowMapInformationNugget class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the ShowMapInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorMapLocationSpecs.reset();
            fieldGeneratorRequestedCoordinates.reset();
            MapInformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SHOWMAPINFORMATIONNUGGETJSON_H */
