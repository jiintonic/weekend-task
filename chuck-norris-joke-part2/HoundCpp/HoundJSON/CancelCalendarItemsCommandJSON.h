/* file "CancelCalendarItemsCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CANCELCALENDARITEMSCOMMANDJSON_H
#define CANCELCALENDARITEMSCOMMANDJSON_H

#pragma interface

#include "CalendarCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeJSON.h"
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


class CancelCalendarItemsCommandJSON : public CalendarCommandJSON
  {
  public:
    class TypeNativeDataJSON : public ReferenceCounted
      {
      private:
        bool flagHasItemType;
        std::string storeItemType;
        bool flagHasExactTitle;
        std::string storeExactTitle;
        bool flagHasPartialTitle;
        std::string storePartialTitle;
        bool flagHasExactLocation;
        std::string storeExactLocation;
        bool flagHasPartialLocation;
        std::string storePartialLocation;
        bool flagHasStartStart;
        DateAndOrTimeJSON * storeStartStart;
        bool flagHasEndStart;
        DateAndOrTimeJSON * storeEndStart;
        bool flagHasStartEnd;
        DateAndOrTimeJSON * storeStartEnd;
        bool flagHasEndEnd;
        DateAndOrTimeJSON * storeEndEnd;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeNativeDataJSON(const TypeNativeDataJSON &);
        TypeNativeDataJSON & operator=(const TypeNativeDataJSON &other);

        void  fromJSONItemType(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONExactTitle(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONPartialTitle(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONExactLocation(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONPartialLocation(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONStartStart(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONEndStart(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONStartEnd(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONEndEnd(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeNativeDataJSON(void);
        virtual ~TypeNativeDataJSON(void);
        bool  hasItemType(void) const;
        std::string  getItemType(void);
        const std::string  getItemType(void) const;
        bool  hasExactTitle(void) const;
        std::string  getExactTitle(void);
        const std::string  getExactTitle(void) const;
        bool  hasPartialTitle(void) const;
        std::string  getPartialTitle(void);
        const std::string  getPartialTitle(void) const;
        bool  hasExactLocation(void) const;
        std::string  getExactLocation(void);
        const std::string  getExactLocation(void) const;
        bool  hasPartialLocation(void) const;
        std::string  getPartialLocation(void);
        const std::string  getPartialLocation(void) const;
        bool  hasStartStart(void) const;
        DateAndOrTimeJSON *  getStartStart(void);
        const DateAndOrTimeJSON *  getStartStart(void) const;
        bool  hasEndStart(void) const;
        DateAndOrTimeJSON *  getEndStart(void);
        const DateAndOrTimeJSON *  getEndStart(void) const;
        bool  hasStartEnd(void) const;
        DateAndOrTimeJSON *  getStartEnd(void);
        const DateAndOrTimeJSON *  getStartEnd(void) const;
        bool  hasEndEnd(void) const;
        DateAndOrTimeJSON *  getEndEnd(void);
        const DateAndOrTimeJSON *  getEndEnd(void) const;

        virtual size_t extraTypeNativeDataComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeNativeDataComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeNativeDataComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeNativeDataComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeNativeDataLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeNativeDataLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setItemType(std::string new_value)
          {
            flagHasItemType = true;
            storeItemType = new_value;
          }
        void unsetItemType(void)
          {
            flagHasItemType = false;
          }
        void setExactTitle(std::string new_value)
          {
            flagHasExactTitle = true;
            storeExactTitle = new_value;
          }
        void unsetExactTitle(void)
          {
            flagHasExactTitle = false;
          }
        void setPartialTitle(std::string new_value)
          {
            flagHasPartialTitle = true;
            storePartialTitle = new_value;
          }
        void unsetPartialTitle(void)
          {
            flagHasPartialTitle = false;
          }
        void setExactLocation(std::string new_value)
          {
            flagHasExactLocation = true;
            storeExactLocation = new_value;
          }
        void unsetExactLocation(void)
          {
            flagHasExactLocation = false;
          }
        void setPartialLocation(std::string new_value)
          {
            flagHasPartialLocation = true;
            storePartialLocation = new_value;
          }
        void unsetPartialLocation(void)
          {
            flagHasPartialLocation = false;
          }
        void setStartStart(DateAndOrTimeJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasStartStart)
              {
                storeStartStart->remove_reference();
              }
            flagHasStartStart = true;
            storeStartStart = new_value;
          }
        void unsetStartStart(void)
          {
            if (flagHasStartStart)
              {
                storeStartStart->remove_reference();
              }
            flagHasStartStart = false;
          }
        void setEndStart(DateAndOrTimeJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasEndStart)
              {
                storeEndStart->remove_reference();
              }
            flagHasEndStart = true;
            storeEndStart = new_value;
          }
        void unsetEndStart(void)
          {
            if (flagHasEndStart)
              {
                storeEndStart->remove_reference();
              }
            flagHasEndStart = false;
          }
        void setStartEnd(DateAndOrTimeJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasStartEnd)
              {
                storeStartEnd->remove_reference();
              }
            flagHasStartEnd = true;
            storeStartEnd = new_value;
          }
        void unsetStartEnd(void)
          {
            if (flagHasStartEnd)
              {
                storeStartEnd->remove_reference();
              }
            flagHasStartEnd = false;
          }
        void setEndEnd(DateAndOrTimeJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasEndEnd)
              {
                storeEndEnd->remove_reference();
              }
            flagHasEndEnd = true;
            storeEndEnd = new_value;
          }
        void unsetEndEnd(void)
          {
            if (flagHasEndEnd)
              {
                storeEndEnd->remove_reference();
              }
            flagHasEndEnd = false;
          }

        virtual void extraTypeNativeDataAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeNativeDataSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeNativeDataLookup(key);
            if (old_field == NULL)
              {
                extraTypeNativeDataAppendPair(key, new_component);
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
            assert(flagHasItemType);
            handler->start_pair("ItemType");
            handler->string_value(storeItemType);
            assert(flagHasExactTitle);
            handler->start_pair("ExactTitle");
            handler->string_value(storeExactTitle);
            assert(flagHasPartialTitle);
            handler->start_pair("PartialTitle");
            handler->string_value(storePartialTitle);
            assert(flagHasExactLocation);
            handler->start_pair("ExactLocation");
            handler->string_value(storeExactLocation);
            assert(flagHasPartialLocation);
            handler->start_pair("PartialLocation");
            handler->string_value(storePartialLocation);
            assert(flagHasStartStart);
            handler->start_pair("StartStart");
            storeStartStart->write_as_json(handler);
            assert(flagHasEndStart);
            handler->start_pair("EndStart");
            storeEndStart->write_as_json(handler);
            assert(flagHasStartEnd);
            handler->start_pair("StartEnd");
            storeStartEnd->write_as_json(handler);
            assert(flagHasEndEnd);
            handler->start_pair("EndEnd");
            storeEndEnd->write_as_json(handler);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasItemType()))
              {
                return "When parsing the object for %what%, the \"ItemType\" field was missing.";
              }
            if (!(hasExactTitle()))
              {
                return "When parsing the object for %what%, the \"ExactTitle\" field was missing.";
              }
            if (!(hasPartialTitle()))
              {
                return "When parsing the object for %what%, the \"PartialTitle\" field was missing.";
              }
            if (!(hasExactLocation()))
              {
                return "When parsing the object for %what%, the \"ExactLocation\" field was missing.";
              }
            if (!(hasPartialLocation()))
              {
                return "When parsing the object for %what%, the \"PartialLocation\" field was missing.";
              }
            if (!(hasStartStart()))
              {
                return "When parsing the object for %what%, the \"StartStart\" field was missing.";
              }
            if (!(hasEndStart()))
              {
                return "When parsing the object for %what%, the \"EndStart\" field was missing.";
              }
            if (!(hasStartEnd()))
              {
                return "When parsing the object for %what%, the \"StartEnd\" field was missing.";
              }
            if (!(hasEndEnd()))
              {
                return "When parsing the object for %what%, the \"EndEnd\" field was missing.";
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorItemType;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorExactTitle;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPartialTitle;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorExactLocation;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPartialLocation;
            JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorStartStart;
            JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorEndStart;
            JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorStartEnd;
            JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorEndEnd;
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
                TypeNativeDataJSON *result = new TypeNativeDataJSON();
                assert(result != NULL);
                RCHandle<TypeNativeDataJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeNativeDataAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeNativeDataJSON *result)
              {
                if (fieldGeneratorItemType.have_value)
                  {
                    result->setItemType(fieldGeneratorItemType.value);
                    fieldGeneratorItemType.have_value = false;
                  }
                else if (!(result->hasItemType()))
                  {
                    error("When parsing the object for %what%, the \"ItemType\" field was missing.");
                  }
                if (fieldGeneratorExactTitle.have_value)
                  {
                    result->setExactTitle(fieldGeneratorExactTitle.value);
                    fieldGeneratorExactTitle.have_value = false;
                  }
                else if (!(result->hasExactTitle()))
                  {
                    error("When parsing the object for %what%, the \"ExactTitle\" field was missing.");
                  }
                if (fieldGeneratorPartialTitle.have_value)
                  {
                    result->setPartialTitle(fieldGeneratorPartialTitle.value);
                    fieldGeneratorPartialTitle.have_value = false;
                  }
                else if (!(result->hasPartialTitle()))
                  {
                    error("When parsing the object for %what%, the \"PartialTitle\" field was missing.");
                  }
                if (fieldGeneratorExactLocation.have_value)
                  {
                    result->setExactLocation(fieldGeneratorExactLocation.value);
                    fieldGeneratorExactLocation.have_value = false;
                  }
                else if (!(result->hasExactLocation()))
                  {
                    error("When parsing the object for %what%, the \"ExactLocation\" field was missing.");
                  }
                if (fieldGeneratorPartialLocation.have_value)
                  {
                    result->setPartialLocation(fieldGeneratorPartialLocation.value);
                    fieldGeneratorPartialLocation.have_value = false;
                  }
                else if (!(result->hasPartialLocation()))
                  {
                    error("When parsing the object for %what%, the \"PartialLocation\" field was missing.");
                  }
                if (fieldGeneratorStartStart.have_value)
                  {
                    result->setStartStart(fieldGeneratorStartStart.value.referenced());
                    fieldGeneratorStartStart.have_value = false;
                  }
                else if (!(result->hasStartStart()))
                  {
                    error("When parsing the object for %what%, the \"StartStart\" field was missing.");
                  }
                if (fieldGeneratorEndStart.have_value)
                  {
                    result->setEndStart(fieldGeneratorEndStart.value.referenced());
                    fieldGeneratorEndStart.have_value = false;
                  }
                else if (!(result->hasEndStart()))
                  {
                    error("When parsing the object for %what%, the \"EndStart\" field was missing.");
                  }
                if (fieldGeneratorStartEnd.have_value)
                  {
                    result->setStartEnd(fieldGeneratorStartEnd.value.referenced());
                    fieldGeneratorStartEnd.have_value = false;
                  }
                else if (!(result->hasStartEnd()))
                  {
                    error("When parsing the object for %what%, the \"StartEnd\" field was missing.");
                  }
                if (fieldGeneratorEndEnd.have_value)
                  {
                    result->setEndEnd(fieldGeneratorEndEnd.value.referenced());
                    fieldGeneratorEndEnd.have_value = false;
                  }
                else if (!(result->hasEndEnd()))
                  {
                    error("When parsing the object for %what%, the \"EndEnd\" field was missing.");
                  }
              }
            virtual void handle_result(TypeNativeDataJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'E':
                        switch ((unsigned char)(field_name[1]))
                          {
                            case 'n':
                                if (strncmp(&(field_name[2]), "d", 1) == 0)
                                  {
                                    switch ((unsigned char)(field_name[3]))
                                      {
                                        case 'E':
                                            if (strcmp(&(field_name[4]), "nd") == 0)
                                                return &fieldGeneratorEndEnd;
                                            break;
                                        case 'S':
                                            if (strcmp(&(field_name[4]), "tart") == 0)
                                                return &fieldGeneratorEndStart;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'x':
                                if (strncmp(&(field_name[2]), "act", 3) == 0)
                                  {
                                    switch ((unsigned char)(field_name[5]))
                                      {
                                        case 'L':
                                            if (strcmp(&(field_name[6]), "ocation") == 0)
                                                return &fieldGeneratorExactLocation;
                                            break;
                                        case 'T':
                                            if (strcmp(&(field_name[6]), "itle") == 0)
                                                return &fieldGeneratorExactTitle;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'I':
                        if (strcmp(&(field_name[1]), "temType") == 0)
                            return &fieldGeneratorItemType;
                        break;
                    case 'P':
                        if (strncmp(&(field_name[1]), "artial", 6) == 0)
                          {
                            switch ((unsigned char)(field_name[7]))
                              {
                                case 'L':
                                    if (strcmp(&(field_name[8]), "ocation") == 0)
                                        return &fieldGeneratorPartialLocation;
                                    break;
                                case 'T':
                                    if (strcmp(&(field_name[8]), "itle") == 0)
                                        return &fieldGeneratorPartialTitle;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'S':
                        if (strncmp(&(field_name[1]), "tart", 4) == 0)
                          {
                            switch ((unsigned char)(field_name[5]))
                              {
                                case 'E':
                                    if (strcmp(&(field_name[6]), "nd") == 0)
                                        return &fieldGeneratorStartEnd;
                                    break;
                                case 'S':
                                    if (strcmp(&(field_name[6]), "tart") == 0)
                                        return &fieldGeneratorStartStart;
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
            Generator(bool ignore_extras = false) : fieldGeneratorItemType("field \"ItemType\" of the TypeNativeData class"), fieldGeneratorExactTitle("field \"ExactTitle\" of the TypeNativeData class"), fieldGeneratorPartialTitle("field \"PartialTitle\" of the TypeNativeData class"), fieldGeneratorExactLocation("field \"ExactLocation\" of the TypeNativeData class"), fieldGeneratorPartialLocation("field \"PartialLocation\" of the TypeNativeData class"), fieldGeneratorStartStart("field \"StartStart\" of the TypeNativeData class", ignore_extras), fieldGeneratorEndStart("field \"EndStart\" of the TypeNativeData class", ignore_extras), fieldGeneratorStartEnd("field \"StartEnd\" of the TypeNativeData class", ignore_extras), fieldGeneratorEndEnd("field \"EndEnd\" of the TypeNativeData class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeNativeData class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorItemType.reset();
                fieldGeneratorExactTitle.reset();
                fieldGeneratorPartialTitle.reset();
                fieldGeneratorExactLocation.reset();
                fieldGeneratorPartialLocation.reset();
                fieldGeneratorStartStart.reset();
                fieldGeneratorEndStart.reset();
                fieldGeneratorStartEnd.reset();
                fieldGeneratorEndEnd.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasItemType;
    std::string storeItemType;
    bool flagHasExactTitle;
    std::string storeExactTitle;
    bool flagHasPartialTitle;
    std::string storePartialTitle;
    bool flagHasExactLocation;
    std::string storeExactLocation;
    bool flagHasPartialLocation;
    std::string storePartialLocation;
    bool flagHasStartStart;
    DateAndOrTimeJSON * storeStartStart;
    bool flagHasEndStart;
    DateAndOrTimeJSON * storeEndStart;
    bool flagHasStartEnd;
    DateAndOrTimeJSON * storeStartEnd;
    bool flagHasEndEnd;
    DateAndOrTimeJSON * storeEndEnd;
    bool flagHasNativeData;
    TypeNativeDataJSON * storeNativeData;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    CancelCalendarItemsCommandJSON(const CancelCalendarItemsCommandJSON &);
    CancelCalendarItemsCommandJSON & operator=(const CancelCalendarItemsCommandJSON &other);

    JSONValue * extraItemTypeToJSON(void) const;
    JSONValue * extraExactTitleToJSON(void) const;
    JSONValue * extraPartialTitleToJSON(void) const;
    JSONValue * extraExactLocationToJSON(void) const;
    JSONValue * extraPartialLocationToJSON(void) const;
    JSONValue * extraStartStartToJSON(void) const;
    JSONValue * extraEndStartToJSON(void) const;
    JSONValue * extraStartEndToJSON(void) const;
    JSONValue * extraEndEndToJSON(void) const;
    JSONValue * extraNativeDataToJSON(void) const;

    void  fromJSONItemType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONExactTitle(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPartialTitle(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONExactLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPartialLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStartStart(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEndStart(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStartEnd(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEndEnd(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);


  public:
    CancelCalendarItemsCommandJSON(void);
    virtual ~CancelCalendarItemsCommandJSON(void);
    const char * getCalendarCommandKind(void) const;
    bool  hasItemType(void) const;
    std::string  getItemType(void);
    const std::string  getItemType(void) const;
    bool  hasExactTitle(void) const;
    std::string  getExactTitle(void);
    const std::string  getExactTitle(void) const;
    bool  hasPartialTitle(void) const;
    std::string  getPartialTitle(void);
    const std::string  getPartialTitle(void) const;
    bool  hasExactLocation(void) const;
    std::string  getExactLocation(void);
    const std::string  getExactLocation(void) const;
    bool  hasPartialLocation(void) const;
    std::string  getPartialLocation(void);
    const std::string  getPartialLocation(void) const;
    bool  hasStartStart(void) const;
    DateAndOrTimeJSON *  getStartStart(void);
    const DateAndOrTimeJSON *  getStartStart(void) const;
    bool  hasEndStart(void) const;
    DateAndOrTimeJSON *  getEndStart(void);
    const DateAndOrTimeJSON *  getEndStart(void) const;
    bool  hasStartEnd(void) const;
    DateAndOrTimeJSON *  getStartEnd(void);
    const DateAndOrTimeJSON *  getStartEnd(void) const;
    bool  hasEndEnd(void) const;
    DateAndOrTimeJSON *  getEndEnd(void);
    const DateAndOrTimeJSON *  getEndEnd(void) const;
    bool  hasNativeData(void) const;
    TypeNativeDataJSON *  getNativeData(void);
    const TypeNativeDataJSON *  getNativeData(void) const;

    virtual size_t extraCancelCalendarItemsCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraCancelCalendarItemsCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraCancelCalendarItemsCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraCancelCalendarItemsCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraCancelCalendarItemsCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraCancelCalendarItemsCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraCalendarCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasItemType)
            ++result;
        if (flagHasExactTitle)
            ++result;
        if (flagHasPartialTitle)
            ++result;
        if (flagHasExactLocation)
            ++result;
        if (flagHasPartialLocation)
            ++result;
        if (flagHasStartStart)
            ++result;
        if (flagHasEndStart)
            ++result;
        if (flagHasStartEnd)
            ++result;
        if (flagHasEndEnd)
            ++result;
        if (flagHasNativeData)
            ++result;
        result += extraCancelCalendarItemsCommandComponentCount();
        return result;
      }
    const char *extraCalendarCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasItemType)
          {
            if (remainder == 0)
                return "ItemType";
            --remainder;
          }
        if (flagHasExactTitle)
          {
            if (remainder == 0)
                return "ExactTitle";
            --remainder;
          }
        if (flagHasPartialTitle)
          {
            if (remainder == 0)
                return "PartialTitle";
            --remainder;
          }
        if (flagHasExactLocation)
          {
            if (remainder == 0)
                return "ExactLocation";
            --remainder;
          }
        if (flagHasPartialLocation)
          {
            if (remainder == 0)
                return "PartialLocation";
            --remainder;
          }
        if (flagHasStartStart)
          {
            if (remainder == 0)
                return "StartStart";
            --remainder;
          }
        if (flagHasEndStart)
          {
            if (remainder == 0)
                return "EndStart";
            --remainder;
          }
        if (flagHasStartEnd)
          {
            if (remainder == 0)
                return "StartEnd";
            --remainder;
          }
        if (flagHasEndEnd)
          {
            if (remainder == 0)
                return "EndEnd";
            --remainder;
          }
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return "NativeData";
            --remainder;
          }
        return extraCancelCalendarItemsCommandComponentKey(remainder);
      }
    JSONValue *extraCalendarCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasItemType)
          {
            if (remainder == 0)
                return extraItemTypeToJSON();
            --remainder;
          }
        if (flagHasExactTitle)
          {
            if (remainder == 0)
                return extraExactTitleToJSON();
            --remainder;
          }
        if (flagHasPartialTitle)
          {
            if (remainder == 0)
                return extraPartialTitleToJSON();
            --remainder;
          }
        if (flagHasExactLocation)
          {
            if (remainder == 0)
                return extraExactLocationToJSON();
            --remainder;
          }
        if (flagHasPartialLocation)
          {
            if (remainder == 0)
                return extraPartialLocationToJSON();
            --remainder;
          }
        if (flagHasStartStart)
          {
            if (remainder == 0)
                return extraStartStartToJSON();
            --remainder;
          }
        if (flagHasEndStart)
          {
            if (remainder == 0)
                return extraEndStartToJSON();
            --remainder;
          }
        if (flagHasStartEnd)
          {
            if (remainder == 0)
                return extraStartEndToJSON();
            --remainder;
          }
        if (flagHasEndEnd)
          {
            if (remainder == 0)
                return extraEndEndToJSON();
            --remainder;
          }
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        return extraCancelCalendarItemsCommandComponentValue(remainder);
      }
    const JSONValue *extraCalendarCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasItemType)
          {
            if (remainder == 0)
                return extraItemTypeToJSON();
            --remainder;
          }
        if (flagHasExactTitle)
          {
            if (remainder == 0)
                return extraExactTitleToJSON();
            --remainder;
          }
        if (flagHasPartialTitle)
          {
            if (remainder == 0)
                return extraPartialTitleToJSON();
            --remainder;
          }
        if (flagHasExactLocation)
          {
            if (remainder == 0)
                return extraExactLocationToJSON();
            --remainder;
          }
        if (flagHasPartialLocation)
          {
            if (remainder == 0)
                return extraPartialLocationToJSON();
            --remainder;
          }
        if (flagHasStartStart)
          {
            if (remainder == 0)
                return extraStartStartToJSON();
            --remainder;
          }
        if (flagHasEndStart)
          {
            if (remainder == 0)
                return extraEndStartToJSON();
            --remainder;
          }
        if (flagHasStartEnd)
          {
            if (remainder == 0)
                return extraStartEndToJSON();
            --remainder;
          }
        if (flagHasEndEnd)
          {
            if (remainder == 0)
                return extraEndEndToJSON();
            --remainder;
          }
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        return extraCancelCalendarItemsCommandComponentValue(remainder);
      }
    JSONValue *extraCalendarCommandLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'E':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'n':
                        if (strncmp(&(field_name[2]), "d", 1) == 0)
                          {
                            switch ((unsigned char)(field_name[3]))
                              {
                                case 'E':
                                    if (strcmp(&(field_name[4]), "nd") == 0)
                                        return (flagHasEndEnd ? extraEndEndToJSON() : NULL);
                                    break;
                                case 'S':
                                    if (strcmp(&(field_name[4]), "tart") == 0)
                                        return (flagHasEndStart ? extraEndStartToJSON() : NULL);
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'x':
                        if (strncmp(&(field_name[2]), "act", 3) == 0)
                          {
                            switch ((unsigned char)(field_name[5]))
                              {
                                case 'L':
                                    if (strcmp(&(field_name[6]), "ocation") == 0)
                                        return (flagHasExactLocation ? extraExactLocationToJSON() : NULL);
                                    break;
                                case 'T':
                                    if (strcmp(&(field_name[6]), "itle") == 0)
                                        return (flagHasExactTitle ? extraExactTitleToJSON() : NULL);
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    default:
                        break;
                  }
                break;
            case 'I':
                if (strcmp(&(field_name[1]), "temType") == 0)
                    return (flagHasItemType ? extraItemTypeToJSON() : NULL);
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "ativeData") == 0)
                    return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
                break;
            case 'P':
                if (strncmp(&(field_name[1]), "artial", 6) == 0)
                  {
                    switch ((unsigned char)(field_name[7]))
                      {
                        case 'L':
                            if (strcmp(&(field_name[8]), "ocation") == 0)
                                return (flagHasPartialLocation ? extraPartialLocationToJSON() : NULL);
                            break;
                        case 'T':
                            if (strcmp(&(field_name[8]), "itle") == 0)
                                return (flagHasPartialTitle ? extraPartialTitleToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'S':
                if (strncmp(&(field_name[1]), "tart", 4) == 0)
                  {
                    switch ((unsigned char)(field_name[5]))
                      {
                        case 'E':
                            if (strcmp(&(field_name[6]), "nd") == 0)
                                return (flagHasStartEnd ? extraStartEndToJSON() : NULL);
                            break;
                        case 'S':
                            if (strcmp(&(field_name[6]), "tart") == 0)
                                return (flagHasStartStart ? extraStartStartToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraCancelCalendarItemsCommandLookup(field_name);
      }
    const JSONValue *extraCalendarCommandLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'E':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'n':
                        if (strncmp(&(field_name[2]), "d", 1) == 0)
                          {
                            switch ((unsigned char)(field_name[3]))
                              {
                                case 'E':
                                    if (strcmp(&(field_name[4]), "nd") == 0)
                                        return (flagHasEndEnd ? extraEndEndToJSON() : NULL);
                                    break;
                                case 'S':
                                    if (strcmp(&(field_name[4]), "tart") == 0)
                                        return (flagHasEndStart ? extraEndStartToJSON() : NULL);
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'x':
                        if (strncmp(&(field_name[2]), "act", 3) == 0)
                          {
                            switch ((unsigned char)(field_name[5]))
                              {
                                case 'L':
                                    if (strcmp(&(field_name[6]), "ocation") == 0)
                                        return (flagHasExactLocation ? extraExactLocationToJSON() : NULL);
                                    break;
                                case 'T':
                                    if (strcmp(&(field_name[6]), "itle") == 0)
                                        return (flagHasExactTitle ? extraExactTitleToJSON() : NULL);
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    default:
                        break;
                  }
                break;
            case 'I':
                if (strcmp(&(field_name[1]), "temType") == 0)
                    return (flagHasItemType ? extraItemTypeToJSON() : NULL);
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "ativeData") == 0)
                    return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
                break;
            case 'P':
                if (strncmp(&(field_name[1]), "artial", 6) == 0)
                  {
                    switch ((unsigned char)(field_name[7]))
                      {
                        case 'L':
                            if (strcmp(&(field_name[8]), "ocation") == 0)
                                return (flagHasPartialLocation ? extraPartialLocationToJSON() : NULL);
                            break;
                        case 'T':
                            if (strcmp(&(field_name[8]), "itle") == 0)
                                return (flagHasPartialTitle ? extraPartialTitleToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'S':
                if (strncmp(&(field_name[1]), "tart", 4) == 0)
                  {
                    switch ((unsigned char)(field_name[5]))
                      {
                        case 'E':
                            if (strcmp(&(field_name[6]), "nd") == 0)
                                return (flagHasStartEnd ? extraStartEndToJSON() : NULL);
                            break;
                        case 'S':
                            if (strcmp(&(field_name[6]), "tart") == 0)
                                return (flagHasStartStart ? extraStartStartToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraCancelCalendarItemsCommandLookup(field_name);
      }

    void setItemType(std::string new_value)
      {
        flagHasItemType = true;
        storeItemType = new_value;
      }
    void unsetItemType(void)
      {
        flagHasItemType = false;
      }
    void setExactTitle(std::string new_value)
      {
        flagHasExactTitle = true;
        storeExactTitle = new_value;
      }
    void unsetExactTitle(void)
      {
        flagHasExactTitle = false;
      }
    void setPartialTitle(std::string new_value)
      {
        flagHasPartialTitle = true;
        storePartialTitle = new_value;
      }
    void unsetPartialTitle(void)
      {
        flagHasPartialTitle = false;
      }
    void setExactLocation(std::string new_value)
      {
        flagHasExactLocation = true;
        storeExactLocation = new_value;
      }
    void unsetExactLocation(void)
      {
        flagHasExactLocation = false;
      }
    void setPartialLocation(std::string new_value)
      {
        flagHasPartialLocation = true;
        storePartialLocation = new_value;
      }
    void unsetPartialLocation(void)
      {
        flagHasPartialLocation = false;
      }
    void setStartStart(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStartStart)
          {
            storeStartStart->remove_reference();
          }
        flagHasStartStart = true;
        storeStartStart = new_value;
      }
    void unsetStartStart(void)
      {
        if (flagHasStartStart)
          {
            storeStartStart->remove_reference();
          }
        flagHasStartStart = false;
      }
    void setEndStart(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasEndStart)
          {
            storeEndStart->remove_reference();
          }
        flagHasEndStart = true;
        storeEndStart = new_value;
      }
    void unsetEndStart(void)
      {
        if (flagHasEndStart)
          {
            storeEndStart->remove_reference();
          }
        flagHasEndStart = false;
      }
    void setStartEnd(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStartEnd)
          {
            storeStartEnd->remove_reference();
          }
        flagHasStartEnd = true;
        storeStartEnd = new_value;
      }
    void unsetStartEnd(void)
      {
        if (flagHasStartEnd)
          {
            storeStartEnd->remove_reference();
          }
        flagHasStartEnd = false;
      }
    void setEndEnd(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasEndEnd)
          {
            storeEndEnd->remove_reference();
          }
        flagHasEndEnd = true;
        storeEndEnd = new_value;
      }
    void unsetEndEnd(void)
      {
        if (flagHasEndEnd)
          {
            storeEndEnd->remove_reference();
          }
        flagHasEndEnd = false;
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

    virtual void extraCancelCalendarItemsCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraCancelCalendarItemsCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraCancelCalendarItemsCommandLookup(key);
        if (old_field == NULL)
          {
            extraCancelCalendarItemsCommandAppendPair(key, new_component);
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
    void extraCalendarCommandAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'E':
                switch ((unsigned char)(key[1]))
                  {
                    case 'n':
                        if (strncmp(&(key[2]), "d", 1) == 0)
                          {
                            switch ((unsigned char)(key[3]))
                              {
                                case 'E':
                                    if (strcmp(&(key[4]), "nd") == 0)
                                        {
                                        fromJSONEndEnd(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'S':
                                    if (strcmp(&(key[4]), "tart") == 0)
                                        {
                                        fromJSONEndStart(new_component, false);
                                        return;
                                        }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'x':
                        if (strncmp(&(key[2]), "act", 3) == 0)
                          {
                            switch ((unsigned char)(key[5]))
                              {
                                case 'L':
                                    if (strcmp(&(key[6]), "ocation") == 0)
                                        {
                                        fromJSONExactLocation(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'T':
                                    if (strcmp(&(key[6]), "itle") == 0)
                                        {
                                        fromJSONExactTitle(new_component, false);
                                        return;
                                        }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    default:
                        break;
                  }
                break;
            case 'I':
                if (strcmp(&(key[1]), "temType") == 0)
                    {
                    fromJSONItemType(new_component, false);
                    return;
                    }
                break;
            case 'N':
                if (strcmp(&(key[1]), "ativeData") == 0)
                    {
                    fromJSONNativeData(new_component, false);
                    return;
                    }
                break;
            case 'P':
                if (strncmp(&(key[1]), "artial", 6) == 0)
                  {
                    switch ((unsigned char)(key[7]))
                      {
                        case 'L':
                            if (strcmp(&(key[8]), "ocation") == 0)
                                {
                                fromJSONPartialLocation(new_component, false);
                                return;
                                }
                            break;
                        case 'T':
                            if (strcmp(&(key[8]), "itle") == 0)
                                {
                                fromJSONPartialTitle(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'S':
                if (strncmp(&(key[1]), "tart", 4) == 0)
                  {
                    switch ((unsigned char)(key[5]))
                      {
                        case 'E':
                            if (strcmp(&(key[6]), "nd") == 0)
                                {
                                fromJSONStartEnd(new_component, false);
                                return;
                                }
                            break;
                        case 'S':
                            if (strcmp(&(key[6]), "tart") == 0)
                                {
                                fromJSONStartStart(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        extraCancelCalendarItemsCommandAppendPair(key, new_component);
      }
    void extraCalendarCommandSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'E':
                switch ((unsigned char)(key[1]))
                  {
                    case 'n':
                        if (strncmp(&(key[2]), "d", 1) == 0)
                          {
                            switch ((unsigned char)(key[3]))
                              {
                                case 'E':
                                    if (strcmp(&(key[4]), "nd") == 0)
                                        {
                                        fromJSONEndEnd(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'S':
                                    if (strcmp(&(key[4]), "tart") == 0)
                                        {
                                        fromJSONEndStart(new_component, false);
                                        return;
                                        }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'x':
                        if (strncmp(&(key[2]), "act", 3) == 0)
                          {
                            switch ((unsigned char)(key[5]))
                              {
                                case 'L':
                                    if (strcmp(&(key[6]), "ocation") == 0)
                                        {
                                        fromJSONExactLocation(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'T':
                                    if (strcmp(&(key[6]), "itle") == 0)
                                        {
                                        fromJSONExactTitle(new_component, false);
                                        return;
                                        }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    default:
                        break;
                  }
                break;
            case 'I':
                if (strcmp(&(key[1]), "temType") == 0)
                    {
                    fromJSONItemType(new_component, false);
                    return;
                    }
                break;
            case 'N':
                if (strcmp(&(key[1]), "ativeData") == 0)
                    {
                    fromJSONNativeData(new_component, false);
                    return;
                    }
                break;
            case 'P':
                if (strncmp(&(key[1]), "artial", 6) == 0)
                  {
                    switch ((unsigned char)(key[7]))
                      {
                        case 'L':
                            if (strcmp(&(key[8]), "ocation") == 0)
                                {
                                fromJSONPartialLocation(new_component, false);
                                return;
                                }
                            break;
                        case 'T':
                            if (strcmp(&(key[8]), "itle") == 0)
                                {
                                fromJSONPartialTitle(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'S':
                if (strncmp(&(key[1]), "tart", 4) == 0)
                  {
                    switch ((unsigned char)(key[5]))
                      {
                        case 'E':
                            if (strcmp(&(key[6]), "nd") == 0)
                                {
                                fromJSONStartEnd(new_component, false);
                                return;
                                }
                            break;
                        case 'S':
                            if (strcmp(&(key[6]), "tart") == 0)
                                {
                                fromJSONStartStart(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        extraCancelCalendarItemsCommandSetField(key, new_component);
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
        CalendarCommandJSON::write_fields_as_json(handler);
        assert(flagHasItemType);
        handler->start_pair("ItemType");
        handler->string_value(storeItemType);
        assert(flagHasExactTitle);
        handler->start_pair("ExactTitle");
        handler->string_value(storeExactTitle);
        assert(flagHasPartialTitle);
        handler->start_pair("PartialTitle");
        handler->string_value(storePartialTitle);
        assert(flagHasExactLocation);
        handler->start_pair("ExactLocation");
        handler->string_value(storeExactLocation);
        assert(flagHasPartialLocation);
        handler->start_pair("PartialLocation");
        handler->string_value(storePartialLocation);
        assert(flagHasStartStart);
        handler->start_pair("StartStart");
        storeStartStart->write_as_json(handler);
        assert(flagHasEndStart);
        handler->start_pair("EndStart");
        storeEndStart->write_as_json(handler);
        assert(flagHasStartEnd);
        handler->start_pair("StartEnd");
        storeStartEnd->write_as_json(handler);
        assert(flagHasEndEnd);
        handler->start_pair("EndEnd");
        storeEndEnd->write_as_json(handler);
        if (flagHasNativeData)
          {
            handler->start_pair("NativeData");
            storeNativeData->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasItemType()))
          {
            return "When parsing the object for %what%, the \"ItemType\" field was missing.";
          }
        if (!(hasExactTitle()))
          {
            return "When parsing the object for %what%, the \"ExactTitle\" field was missing.";
          }
        if (!(hasPartialTitle()))
          {
            return "When parsing the object for %what%, the \"PartialTitle\" field was missing.";
          }
        if (!(hasExactLocation()))
          {
            return "When parsing the object for %what%, the \"ExactLocation\" field was missing.";
          }
        if (!(hasPartialLocation()))
          {
            return "When parsing the object for %what%, the \"PartialLocation\" field was missing.";
          }
        if (!(hasStartStart()))
          {
            return "When parsing the object for %what%, the \"StartStart\" field was missing.";
          }
        if (!(hasEndStart()))
          {
            return "When parsing the object for %what%, the \"EndStart\" field was missing.";
          }
        if (!(hasStartEnd()))
          {
            return "When parsing the object for %what%, the \"StartEnd\" field was missing.";
          }
        if (!(hasEndEnd()))
          {
            return "When parsing the object for %what%, the \"EndEnd\" field was missing.";
          }
        return NULL;
      }

    static CancelCalendarItemsCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static CancelCalendarItemsCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        CancelCalendarItemsCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CancelCalendarItemsCommandJSON>, CancelCalendarItemsCommandJSON *, bool> generator("Type CancelCalendarItemsCommand", ignore_extras);
            parse_json_value(text, "Text for CancelCalendarItemsCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static CancelCalendarItemsCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        CancelCalendarItemsCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CancelCalendarItemsCommandJSON>, CancelCalendarItemsCommandJSON *, bool> generator("Type CancelCalendarItemsCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public CalendarCommandJSON::Generator
      {
      private:
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorItemType;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorExactTitle;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPartialTitle;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorExactLocation;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPartialLocation;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorStartStart;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorEndStart;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorStartEnd;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorEndEnd;
        JSONHoldingGenerator<TypeNativeDataJSON::Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool > fieldGeneratorNativeData;
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
            if (!(strcmp(getCalendarCommandJSONKey().c_str(), "CancelItems") == 0))
                throw("The key field has a value other than `CancelItems'.");
            CancelCalendarItemsCommandJSON *result = new CancelCalendarItemsCommandJSON();
            assert(result != NULL);
            RCHandle<CancelCalendarItemsCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraCancelCalendarItemsCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(CalendarCommandJSON *new_result)
          {
            handle_result((CancelCalendarItemsCommandJSON *)new_result);
          }
        void finish(CancelCalendarItemsCommandJSON *result)
          {
            if (fieldGeneratorItemType.have_value)
              {
                result->setItemType(fieldGeneratorItemType.value);
                fieldGeneratorItemType.have_value = false;
              }
            else if (!(result->hasItemType()))
              {
                error("When parsing the object for %what%, the \"ItemType\" field was missing.");
              }
            if (fieldGeneratorExactTitle.have_value)
              {
                result->setExactTitle(fieldGeneratorExactTitle.value);
                fieldGeneratorExactTitle.have_value = false;
              }
            else if (!(result->hasExactTitle()))
              {
                error("When parsing the object for %what%, the \"ExactTitle\" field was missing.");
              }
            if (fieldGeneratorPartialTitle.have_value)
              {
                result->setPartialTitle(fieldGeneratorPartialTitle.value);
                fieldGeneratorPartialTitle.have_value = false;
              }
            else if (!(result->hasPartialTitle()))
              {
                error("When parsing the object for %what%, the \"PartialTitle\" field was missing.");
              }
            if (fieldGeneratorExactLocation.have_value)
              {
                result->setExactLocation(fieldGeneratorExactLocation.value);
                fieldGeneratorExactLocation.have_value = false;
              }
            else if (!(result->hasExactLocation()))
              {
                error("When parsing the object for %what%, the \"ExactLocation\" field was missing.");
              }
            if (fieldGeneratorPartialLocation.have_value)
              {
                result->setPartialLocation(fieldGeneratorPartialLocation.value);
                fieldGeneratorPartialLocation.have_value = false;
              }
            else if (!(result->hasPartialLocation()))
              {
                error("When parsing the object for %what%, the \"PartialLocation\" field was missing.");
              }
            if (fieldGeneratorStartStart.have_value)
              {
                result->setStartStart(fieldGeneratorStartStart.value.referenced());
                fieldGeneratorStartStart.have_value = false;
              }
            else if (!(result->hasStartStart()))
              {
                error("When parsing the object for %what%, the \"StartStart\" field was missing.");
              }
            if (fieldGeneratorEndStart.have_value)
              {
                result->setEndStart(fieldGeneratorEndStart.value.referenced());
                fieldGeneratorEndStart.have_value = false;
              }
            else if (!(result->hasEndStart()))
              {
                error("When parsing the object for %what%, the \"EndStart\" field was missing.");
              }
            if (fieldGeneratorStartEnd.have_value)
              {
                result->setStartEnd(fieldGeneratorStartEnd.value.referenced());
                fieldGeneratorStartEnd.have_value = false;
              }
            else if (!(result->hasStartEnd()))
              {
                error("When parsing the object for %what%, the \"StartEnd\" field was missing.");
              }
            if (fieldGeneratorEndEnd.have_value)
              {
                result->setEndEnd(fieldGeneratorEndEnd.value.referenced());
                fieldGeneratorEndEnd.have_value = false;
              }
            else if (!(result->hasEndEnd()))
              {
                error("When parsing the object for %what%, the \"EndEnd\" field was missing.");
              }
            if (fieldGeneratorNativeData.have_value)
              {
                result->setNativeData(fieldGeneratorNativeData.value.referenced());
                fieldGeneratorNativeData.have_value = false;
              }
            CalendarCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(CancelCalendarItemsCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'E':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'n':
                            if (strncmp(&(field_name[2]), "d", 1) == 0)
                              {
                                switch ((unsigned char)(field_name[3]))
                                  {
                                    case 'E':
                                        if (strcmp(&(field_name[4]), "nd") == 0)
                                            return &fieldGeneratorEndEnd;
                                        break;
                                    case 'S':
                                        if (strcmp(&(field_name[4]), "tart") == 0)
                                            return &fieldGeneratorEndStart;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'x':
                            if (strncmp(&(field_name[2]), "act", 3) == 0)
                              {
                                switch ((unsigned char)(field_name[5]))
                                  {
                                    case 'L':
                                        if (strcmp(&(field_name[6]), "ocation") == 0)
                                            return &fieldGeneratorExactLocation;
                                        break;
                                    case 'T':
                                        if (strcmp(&(field_name[6]), "itle") == 0)
                                            return &fieldGeneratorExactTitle;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "temType") == 0)
                        return &fieldGeneratorItemType;
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "ativeData") == 0)
                        return &fieldGeneratorNativeData;
                    break;
                case 'P':
                    if (strncmp(&(field_name[1]), "artial", 6) == 0)
                      {
                        switch ((unsigned char)(field_name[7]))
                          {
                            case 'L':
                                if (strcmp(&(field_name[8]), "ocation") == 0)
                                    return &fieldGeneratorPartialLocation;
                                break;
                            case 'T':
                                if (strcmp(&(field_name[8]), "itle") == 0)
                                    return &fieldGeneratorPartialTitle;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'S':
                    if (strncmp(&(field_name[1]), "tart", 4) == 0)
                      {
                        switch ((unsigned char)(field_name[5]))
                          {
                            case 'E':
                                if (strcmp(&(field_name[6]), "nd") == 0)
                                    return &fieldGeneratorStartEnd;
                                break;
                            case 'S':
                                if (strcmp(&(field_name[6]), "tart") == 0)
                                    return &fieldGeneratorStartStart;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return CalendarCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CalendarCommandJSON::Generator(ignore_extras), fieldGeneratorItemType("field \"ItemType\" of the CancelCalendarItemsCommand class"), fieldGeneratorExactTitle("field \"ExactTitle\" of the CancelCalendarItemsCommand class"), fieldGeneratorPartialTitle("field \"PartialTitle\" of the CancelCalendarItemsCommand class"), fieldGeneratorExactLocation("field \"ExactLocation\" of the CancelCalendarItemsCommand class"), fieldGeneratorPartialLocation("field \"PartialLocation\" of the CancelCalendarItemsCommand class"), fieldGeneratorStartStart("field \"StartStart\" of the CancelCalendarItemsCommand class", ignore_extras), fieldGeneratorEndStart("field \"EndStart\" of the CancelCalendarItemsCommand class", ignore_extras), fieldGeneratorStartEnd("field \"StartEnd\" of the CancelCalendarItemsCommand class", ignore_extras), fieldGeneratorEndEnd("field \"EndEnd\" of the CancelCalendarItemsCommand class", ignore_extras), fieldGeneratorNativeData("field \"NativeData\" of the CancelCalendarItemsCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the CancelCalendarItemsCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorItemType.reset();
            fieldGeneratorExactTitle.reset();
            fieldGeneratorPartialTitle.reset();
            fieldGeneratorExactLocation.reset();
            fieldGeneratorPartialLocation.reset();
            fieldGeneratorStartStart.reset();
            fieldGeneratorEndStart.reset();
            fieldGeneratorStartEnd.reset();
            fieldGeneratorEndEnd.reset();
            fieldGeneratorNativeData.reset();
            CalendarCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* CANCELCALENDARITEMSCOMMANDJSON_H */
