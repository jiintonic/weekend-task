/* file "ShowMapJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SHOWMAPJSON_H
#define SHOWMAPJSON_H

#pragma interface

#include "MapCommandJSON.h"
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


class ShowMapJSON : public MapCommandJSON
  {
  public:
    class TypeNativeDataJSON : public ReferenceCounted
      {
      private:
        bool flagHasMapLocationSpecs;
        std::vector< MapLocationJSON * > storeMapLocationSpecs;
        bool flagHasRequestedCoordinates;
        bool storeRequestedCoordinates;

        TypeNativeDataJSON(const TypeNativeDataJSON &);
        TypeNativeDataJSON & operator=(const TypeNativeDataJSON &other);

        void  fromJSONMapLocationSpecs(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONRequestedCoordinates(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeNativeDataJSON(void);
        virtual ~TypeNativeDataJSON(void);
        bool  hasMapLocationSpecs(void) const;
        size_t  countOfMapLocationSpecs(void) const;
        MapLocationJSON *  elementOfMapLocationSpecs(size_t element_num);
        const MapLocationJSON *  elementOfMapLocationSpecs(size_t element_num) const;
        std::vector< MapLocationJSON * >  getMapLocationSpecs(void);
        const std::vector< MapLocationJSON * >  getMapLocationSpecs(void) const;
        bool  hasRequestedCoordinates(void) const;
        bool  getRequestedCoordinates(void);
        const bool  getRequestedCoordinates(void) const;


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


        void write_as_json(JSONHandler *handler) const
          {
            handler->start_object();
            write_fields_as_json(handler);
            handler->finish_object();
          }

        virtual void write_fields_as_json(JSONHandler *handler) const
          {
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

        static TypeNativeDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeNativeDataJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeNativeDataJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
                parse_json_value(text, "Text for TypeNativeDataJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeNativeDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeNativeDataJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
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
            JSONHoldingArrayGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorMapLocationSpecs;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorRequestedCoordinates;


          protected:
            void start(void)
              {
              }
            JSONHandler *start_field(const char *field_name)
              {
                JSONHandler *result = start_known_field(field_name);
                if (result != NULL)
                    return result;
                std::string message("");
                message = message + "Field \"" + field_name + "\" found for a type that doesn't allow extra fields.";
                char *message_chars = (char *)(malloc(strlen(message.c_str()) + 1));
                strcpy(message_chars, message.c_str());
                throw(message_chars);
              }
            void finish_field(const char *field_name, JSONHandler *field_handler)
              {
              }
            void finish(void)
              {
                TypeNativeDataJSON *result = new TypeNativeDataJSON();
                assert(result != NULL);
                RCHandle<TypeNativeDataJSON> result_holder = result;
                finish(result);
                handle_result(result);
              }
            void finish(TypeNativeDataJSON *result)
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
              }
            virtual void handle_result(TypeNativeDataJSON *new_result) = 0;
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
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorMapLocationSpecs("field \"MapLocationSpecs\" of the TypeNativeData class", ignore_extras), fieldGeneratorRequestedCoordinates("field \"RequestedCoordinates\" of the TypeNativeData class")
              {
                set_what("the TypeNativeData class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorMapLocationSpecs.reset();
                fieldGeneratorRequestedCoordinates.reset();
                JSONObjectGenerator::reset();
              }
          };
      };

  private:
    bool flagHasNativeData;
    TypeNativeDataJSON * storeNativeData;

    ShowMapJSON(const ShowMapJSON &);
    ShowMapJSON & operator=(const ShowMapJSON &other);

    JSONValue * extraNativeDataToJSON(void) const;

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);


  public:
    ShowMapJSON(void);
    virtual ~ShowMapJSON(void);
    const char * getMapCommandKind(void) const;
    bool  hasNativeData(void) const;
    TypeNativeDataJSON *  getNativeData(void);
    const TypeNativeDataJSON *  getNativeData(void) const;

    size_t extraMapCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasNativeData)
            ++result;
        return result;
      }
    const char *extraMapCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return "NativeData";
            --remainder;
          }
        assert(false);
        return NULL;
      }
    JSONValue *extraMapCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        assert(false);
        return NULL;
      }
    const JSONValue *extraMapCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        assert(false);
        return NULL;
      }
    JSONValue *extraMapCommandLookup(const char *field_name)
      {
        if (strcmp(field_name, "NativeData") == 0)
            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
        return NULL;
      }
    const JSONValue *extraMapCommandLookup(const char *field_name) const
      {
        if (strcmp(field_name, "NativeData") == 0)
            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
        return NULL;
      }

    void setNativeData(TypeNativeDataJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasNativeData)
          {
            storeNativeData->remove_reference();
          }
        flagHasNativeData = true;
        storeNativeData = new_value;
      }
    void unsetNativeData(void)
      {
        if (flagHasNativeData)
          {
            storeNativeData->remove_reference();
          }
        flagHasNativeData = false;
      }

    void extraMapCommandAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "NativeData") == 0)
            {
            fromJSONNativeData(new_component, false);
            return;
            }
      }
    void extraMapCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "NativeData") == 0)
            {
            fromJSONNativeData(new_component, false);
            return;
            }
      }

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        MapCommandJSON::write_fields_as_json(handler);
        assert(flagHasNativeData);
        handler->start_pair("NativeData");
        storeNativeData->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasNativeData()))
          {
            return "When parsing the object for %what%, the \"NativeData\" field was missing.";
          }
        return NULL;
      }

    static ShowMapJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ShowMapJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ShowMapJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ShowMapJSON>, ShowMapJSON *, bool> generator("Type ShowMap", ignore_extras);
            parse_json_value(text, "Text for ShowMapJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ShowMapJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ShowMapJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ShowMapJSON>, ShowMapJSON *, bool> generator("Type ShowMap", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public MapCommandJSON::Generator
      {
      private:
        JSONHoldingGenerator<TypeNativeDataJSON::Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool > fieldGeneratorNativeData;


      protected:
        void start(void)
          {
          }
        JSONHandler *start_field(const char *field_name)
          {
            JSONHandler *result = start_known_field(field_name);
            if (result != NULL)
                return result;
            std::string message("");
            message = message + "Field \"" + field_name + "\" found for a type that doesn't allow extra fields.";
            char *message_chars = (char *)(malloc(strlen(message.c_str()) + 1));
            strcpy(message_chars, message.c_str());
            throw(message_chars);
          }
        void finish_field(const char *field_name, JSONHandler *field_handler)
          {
          }
        void finish(void)
          {
            if (!(strcmp(getMapCommandJSONKey().c_str(), "ShowMap") == 0))
                throw("The key field has a value other than `ShowMap'.");
            ShowMapJSON *result = new ShowMapJSON();
            assert(result != NULL);
            RCHandle<ShowMapJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void handle_result(MapCommandJSON *new_result)
          {
            handle_result((ShowMapJSON *)new_result);
          }
        void finish(ShowMapJSON *result)
          {
            if (fieldGeneratorNativeData.have_value)
              {
                result->setNativeData(fieldGeneratorNativeData.value.referenced());
                fieldGeneratorNativeData.have_value = false;
              }
            else if (!(result->hasNativeData()))
              {
                error("When parsing the object for %what%, the \"NativeData\" field was missing.");
              }
            MapCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(ShowMapJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "NativeData") == 0)
                return &fieldGeneratorNativeData;
            return MapCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : MapCommandJSON::Generator(ignore_extras), fieldGeneratorNativeData("field \"NativeData\" of the ShowMap class", ignore_extras)
          {
            set_what("the ShowMap class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNativeData.reset();
            MapCommandJSON::Generator::reset();
          }
      };
  };

#endif /* SHOWMAPJSON_H */
