/* file "RobotConfigurationJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef ROBOTCONFIGURATIONJSON_H
#define ROBOTCONFIGURATIONJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONIntegerUnboundRangeGenerator.h"
#include "JSONBooleanGenerator.h"
#include "OInteger.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class RobotConfigurationJSON : public ReferenceCounted
  {
  public:
    class TypeSensorsJSON : public ReferenceCounted
      {
      private:
        bool flagHasHasCamera;
        bool storeHasCamera;
        bool flagHasHasVideoCamera;
        bool storeHasVideoCamera;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeSensorsJSON(const TypeSensorsJSON &);
        TypeSensorsJSON & operator=(const TypeSensorsJSON &other);

        void  fromJSONHasCamera(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONHasVideoCamera(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeSensorsJSON(void);
        virtual ~TypeSensorsJSON(void);
        bool  hasHasCamera(void) const;
        bool  getHasCamera(void);
        const bool  getHasCamera(void) const;
        bool  hasHasVideoCamera(void) const;
        bool  getHasVideoCamera(void);
        const bool  getHasVideoCamera(void) const;

        virtual size_t extraTypeSensorsComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeSensorsComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeSensorsComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeSensorsComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeSensorsLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeSensorsLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setHasCamera(bool new_value)
          {
            flagHasHasCamera = true;
            storeHasCamera = new_value;
          }
        void unsetHasCamera(void)
          {
            flagHasHasCamera = false;
          }
        void setHasVideoCamera(bool new_value)
          {
            flagHasHasVideoCamera = true;
            storeHasVideoCamera = new_value;
          }
        void unsetHasVideoCamera(void)
          {
            flagHasHasVideoCamera = false;
          }

        virtual void extraTypeSensorsAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeSensorsSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeSensorsLookup(key);
            if (old_field == NULL)
              {
                extraTypeSensorsAppendPair(key, new_component);
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
            if (flagHasHasCamera)
              {
                handler->start_pair("HasCamera");
                handler->boolean_value(storeHasCamera);
              }
            if (flagHasHasVideoCamera)
              {
                handler->start_pair("HasVideoCamera");
                handler->boolean_value(storeHasVideoCamera);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            return NULL;
          }

        static TypeSensorsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeSensorsJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeSensorsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeSensorsJSON>, TypeSensorsJSON *, bool> generator("Type TypeSensors", ignore_extras);
                parse_json_value(text, "Text for TypeSensorsJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeSensorsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeSensorsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeSensorsJSON>, TypeSensorsJSON *, bool> generator("Type TypeSensors", ignore_extras);
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
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorHasCamera;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorHasVideoCamera;
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
                TypeSensorsJSON *result = new TypeSensorsJSON();
                assert(result != NULL);
                RCHandle<TypeSensorsJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeSensorsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeSensorsJSON *result)
              {
                if (fieldGeneratorHasCamera.have_value)
                  {
                    result->setHasCamera(fieldGeneratorHasCamera.value);
                    fieldGeneratorHasCamera.have_value = false;
                  }
                if (fieldGeneratorHasVideoCamera.have_value)
                  {
                    result->setHasVideoCamera(fieldGeneratorHasVideoCamera.value);
                    fieldGeneratorHasVideoCamera.have_value = false;
                  }
              }
            virtual void handle_result(TypeSensorsJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strncmp(field_name, "Has", 3) == 0)
                  {
                    switch ((unsigned char)(field_name[3]))
                      {
                        case 'C':
                            if (strcmp(&(field_name[4]), "amera") == 0)
                                return &fieldGeneratorHasCamera;
                            break;
                        case 'V':
                            if (strcmp(&(field_name[4]), "ideoCamera") == 0)
                                return &fieldGeneratorHasVideoCamera;
                            break;
                        default:
                            break;
                      }
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorHasCamera("field \"HasCamera\" of the TypeSensors class"), fieldGeneratorHasVideoCamera("field \"HasVideoCamera\" of the TypeSensors class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeSensors class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorHasCamera.reset();
                fieldGeneratorHasVideoCamera.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasArmCount;
    OInteger storeArmCount;
    bool flagHasLegCount;
    OInteger storeLegCount;
    bool flagHasIsMobile;
    bool storeIsMobile;
    bool flagHasSensors;
    TypeSensorsJSON * storeSensors;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    RobotConfigurationJSON(const RobotConfigurationJSON &);
    RobotConfigurationJSON & operator=(const RobotConfigurationJSON &other);

    void  fromJSONArmCount(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLegCount(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsMobile(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSensors(JSONValue *json_value, bool ignore_extras = false);


  public:
    RobotConfigurationJSON(void);
    virtual ~RobotConfigurationJSON(void);
    bool  hasArmCount(void) const;
    OInteger  getArmCount(void);
    const OInteger  getArmCount(void) const;
    bool  hasLegCount(void) const;
    OInteger  getLegCount(void);
    const OInteger  getLegCount(void) const;
    bool  hasIsMobile(void) const;
    bool  getIsMobile(void);
    const bool  getIsMobile(void) const;
    bool  hasSensors(void) const;
    TypeSensorsJSON *  getSensors(void);
    const TypeSensorsJSON *  getSensors(void) const;

    virtual size_t extraRobotConfigurationComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraRobotConfigurationComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraRobotConfigurationComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraRobotConfigurationComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraRobotConfigurationLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraRobotConfigurationLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setArmCount(OInteger new_value)
      {
        flagHasArmCount = true;
        storeArmCount = new_value;
      }
    void unsetArmCount(void)
      {
        flagHasArmCount = false;
      }
    void setLegCount(OInteger new_value)
      {
        flagHasLegCount = true;
        storeLegCount = new_value;
      }
    void unsetLegCount(void)
      {
        flagHasLegCount = false;
      }
    void setIsMobile(bool new_value)
      {
        flagHasIsMobile = true;
        storeIsMobile = new_value;
      }
    void unsetIsMobile(void)
      {
        flagHasIsMobile = false;
      }
    void setSensors(TypeSensorsJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSensors)
          {
            storeSensors->remove_reference();
          }
        flagHasSensors = true;
        storeSensors = new_value;
      }
    void unsetSensors(void)
      {
        if (flagHasSensors)
          {
            storeSensors->remove_reference();
          }
        flagHasSensors = false;
      }

    virtual void extraRobotConfigurationAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraRobotConfigurationSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraRobotConfigurationLookup(key);
        if (old_field == NULL)
          {
            extraRobotConfigurationAppendPair(key, new_component);
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
        if (flagHasArmCount)
          {
            handler->start_pair("ArmCount");
            handler->number_value(storeArmCount.get_o_integer());
          }
        if (flagHasLegCount)
          {
            handler->start_pair("LegCount");
            handler->number_value(storeLegCount.get_o_integer());
          }
        if (flagHasIsMobile)
          {
            handler->start_pair("IsMobile");
            handler->boolean_value(storeIsMobile);
          }
        if (flagHasSensors)
          {
            handler->start_pair("Sensors");
            storeSensors->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static RobotConfigurationJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static RobotConfigurationJSON *from_text(const char *text, bool ignore_extras = false)
      {
        RobotConfigurationJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RobotConfigurationJSON>, RobotConfigurationJSON *, bool> generator("Type RobotConfiguration", ignore_extras);
            parse_json_value(text, "Text for RobotConfigurationJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static RobotConfigurationJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        RobotConfigurationJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RobotConfigurationJSON>, RobotConfigurationJSON *, bool> generator("Type RobotConfiguration", ignore_extras);
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
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorArmCount;
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorLegCount;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsMobile;
        JSONHoldingGenerator<TypeSensorsJSON::Generator, RCHandle<TypeSensorsJSON>, TypeSensorsJSON *, bool > fieldGeneratorSensors;
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
            RobotConfigurationJSON *result = new RobotConfigurationJSON();
            assert(result != NULL);
            RCHandle<RobotConfigurationJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraRobotConfigurationAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(RobotConfigurationJSON *result)
          {
            if (fieldGeneratorArmCount.have_value)
              {
                result->setArmCount(fieldGeneratorArmCount.value);
                fieldGeneratorArmCount.have_value = false;
              }
            if (fieldGeneratorLegCount.have_value)
              {
                result->setLegCount(fieldGeneratorLegCount.value);
                fieldGeneratorLegCount.have_value = false;
              }
            if (fieldGeneratorIsMobile.have_value)
              {
                result->setIsMobile(fieldGeneratorIsMobile.value);
                fieldGeneratorIsMobile.have_value = false;
              }
            if (fieldGeneratorSensors.have_value)
              {
                result->setSensors(fieldGeneratorSensors.value.referenced());
                fieldGeneratorSensors.have_value = false;
              }
          }
        virtual void handle_result(RobotConfigurationJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "rmCount") == 0)
                        return &fieldGeneratorArmCount;
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "sMobile") == 0)
                        return &fieldGeneratorIsMobile;
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "egCount") == 0)
                        return &fieldGeneratorLegCount;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "ensors") == 0)
                        return &fieldGeneratorSensors;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorArmCount("field \"ArmCount\" of the RobotConfiguration class"), fieldGeneratorLegCount("field \"LegCount\" of the RobotConfiguration class"), fieldGeneratorIsMobile("field \"IsMobile\" of the RobotConfiguration class"), fieldGeneratorSensors("field \"Sensors\" of the RobotConfiguration class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the RobotConfiguration class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorArmCount.reset();
            fieldGeneratorLegCount.reset();
            fieldGeneratorIsMobile.reset();
            fieldGeneratorSensors.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* ROBOTCONFIGURATIONJSON_H */
