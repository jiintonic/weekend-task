/* file "YelpLocalSearchConversationStateElementJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef YELPLOCALSEARCHCONVERSATIONSTATEELEMENTJSON_H
#define YELPLOCALSEARCHCONVERSATIONSTATEELEMENTJSON_H

#pragma interface

#include "LocalSearchConversationStateElementJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include <vector>
#include <string>
#include "OInteger.h"
#include "LocalSearchFilterSpecJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class YelpLocalSearchConversationStateElementJSON : public LocalSearchConversationStateElementJSON
  {
  public:
    enum TypeCommandKind
      {
        CommandKind_LocalSearchCommand
      };

    static TypeCommandKind  stringToCommandKind(const char *chars);
    static const char * stringFromCommandKind(TypeCommandKind the_enum);
    enum TypeLocalSearchCommandKind
      {
        LocalSearchCommandKind_ShowList
      };

    static TypeLocalSearchCommandKind  stringToLocalSearchCommandKind(const char *chars);
    static const char * stringFromLocalSearchCommandKind(TypeLocalSearchCommandKind the_enum);
    class TypeResultIDsJSON : public ReferenceCounted
      {
      private:
        bool flagHasYelpID;
        std::string storeYelpID;
        bool flagHasAuxiliaryID;
        OInteger storeAuxiliaryID;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeResultIDsJSON(const TypeResultIDsJSON &);
        TypeResultIDsJSON & operator=(const TypeResultIDsJSON &other);

        void  fromJSONYelpID(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAuxiliaryID(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeResultIDsJSON(void);
        virtual ~TypeResultIDsJSON(void);
        bool  hasYelpID(void) const;
        std::string  getYelpID(void);
        const std::string  getYelpID(void) const;
        bool  hasAuxiliaryID(void) const;
        OInteger  getAuxiliaryID(void);
        const OInteger  getAuxiliaryID(void) const;

        virtual size_t extraTypeResultIDsComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeResultIDsComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeResultIDsComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeResultIDsComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeResultIDsLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeResultIDsLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setYelpID(std::string new_value)
          {
            flagHasYelpID = true;
            storeYelpID = new_value;
          }
        void unsetYelpID(void)
          {
            flagHasYelpID = false;
          }
        void setAuxiliaryID(OInteger new_value)
          {
            flagHasAuxiliaryID = true;
            if (new_value < 0)
                throw("The value for field AuxiliaryID of TypeResultIDsJSON is less than the lower bound (0) for that field.");
            storeAuxiliaryID = new_value;
          }
        void unsetAuxiliaryID(void)
          {
            flagHasAuxiliaryID = false;
          }

        virtual void extraTypeResultIDsAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeResultIDsSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeResultIDsLookup(key);
            if (old_field == NULL)
              {
                extraTypeResultIDsAppendPair(key, new_component);
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
            assert(flagHasYelpID);
            handler->start_pair("YelpID");
            handler->string_value(storeYelpID);
            if (flagHasAuxiliaryID)
              {
                handler->start_pair("AuxiliaryID");
                handler->number_value(storeAuxiliaryID.get_o_integer());
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasYelpID()))
              {
                return "When parsing the object for %what%, the \"YelpID\" field was missing.";
              }
            return NULL;
          }

        static TypeResultIDsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeResultIDsJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeResultIDsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeResultIDsJSON>, TypeResultIDsJSON *, bool> generator("Type TypeResultIDs", ignore_extras);
                parse_json_value(text, "Text for TypeResultIDsJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeResultIDsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeResultIDsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeResultIDsJSON>, TypeResultIDsJSON *, bool> generator("Type TypeResultIDs", ignore_extras);
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorYelpID;
            static char lowerBoundAuxiliaryID[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundAuxiliaryID>, OInteger, o_integer > fieldGeneratorAuxiliaryID;
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
                TypeResultIDsJSON *result = new TypeResultIDsJSON();
                assert(result != NULL);
                RCHandle<TypeResultIDsJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeResultIDsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeResultIDsJSON *result)
              {
                if (fieldGeneratorYelpID.have_value)
                  {
                    result->setYelpID(fieldGeneratorYelpID.value);
                    fieldGeneratorYelpID.have_value = false;
                  }
                else if (!(result->hasYelpID()))
                  {
                    error("When parsing the object for %what%, the \"YelpID\" field was missing.");
                  }
                if (fieldGeneratorAuxiliaryID.have_value)
                  {
                    result->setAuxiliaryID(fieldGeneratorAuxiliaryID.value);
                    fieldGeneratorAuxiliaryID.have_value = false;
                  }
              }
            virtual void handle_result(TypeResultIDsJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'A':
                        if (strcmp(&(field_name[1]), "uxiliaryID") == 0)
                            return &fieldGeneratorAuxiliaryID;
                        break;
                    case 'Y':
                        if (strcmp(&(field_name[1]), "elpID") == 0)
                            return &fieldGeneratorYelpID;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorYelpID("field \"YelpID\" of the TypeResultIDs class"), fieldGeneratorAuxiliaryID("field \"AuxiliaryID\" of the TypeResultIDs class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeResultIDs class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorYelpID.reset();
                fieldGeneratorAuxiliaryID.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasCommandKind;
    bool flagHasLocalSearchCommandKind;
    bool flagHasLocalSearchCriteria;
    LocalSearchFilterSpecJSON * storeLocalSearchCriteria;
    bool flagHasResultIDs;
    std::vector< TypeResultIDsJSON * > storeResultIDs;

    YelpLocalSearchConversationStateElementJSON(const YelpLocalSearchConversationStateElementJSON &);
    YelpLocalSearchConversationStateElementJSON & operator=(const YelpLocalSearchConversationStateElementJSON &other);

    JSONValue * extraCommandKindToJSON(void) const;
    JSONValue * extraLocalSearchCommandKindToJSON(void) const;
    JSONValue * extraLocalSearchCriteriaToJSON(void) const;
    JSONValue * extraResultIDsToJSON(void) const;

    void  fromJSONCommandKind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLocalSearchCommandKind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLocalSearchCriteria(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResultIDs(JSONValue *json_value, bool ignore_extras = false);


  public:
    YelpLocalSearchConversationStateElementJSON(void);
    virtual ~YelpLocalSearchConversationStateElementJSON(void);
    const char * getLocalSearchKind(void) const;
    bool  hasCommandKind(void) const;
    TypeCommandKind  getCommandKind(void);
    const TypeCommandKind  getCommandKind(void) const;
    const char * getCommandKindAsChars(void) const;
    std::string  getCommandKindAsString(void) const;
    bool  hasLocalSearchCommandKind(void) const;
    TypeLocalSearchCommandKind  getLocalSearchCommandKind(void);
    const TypeLocalSearchCommandKind  getLocalSearchCommandKind(void) const;
    const char * getLocalSearchCommandKindAsChars(void) const;
    std::string  getLocalSearchCommandKindAsString(void) const;
    bool  hasLocalSearchCriteria(void) const;
    LocalSearchFilterSpecJSON *  getLocalSearchCriteria(void);
    const LocalSearchFilterSpecJSON *  getLocalSearchCriteria(void) const;
    bool  hasResultIDs(void) const;
    size_t  countOfResultIDs(void) const;
    TypeResultIDsJSON *  elementOfResultIDs(size_t element_num);
    const TypeResultIDsJSON *  elementOfResultIDs(size_t element_num) const;
    std::vector< TypeResultIDsJSON * >  getResultIDs(void);
    const std::vector< TypeResultIDsJSON * >  getResultIDs(void) const;

    size_t extraLocalSearchConversationStateElementComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasCommandKind)
            ++result;
        if (flagHasLocalSearchCommandKind)
            ++result;
        if (flagHasLocalSearchCriteria)
            ++result;
        if (flagHasResultIDs)
            ++result;
        return result;
      }
    const char *extraLocalSearchConversationStateElementComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasCommandKind)
          {
            if (remainder == 0)
                return "CommandKind";
            --remainder;
          }
        if (flagHasLocalSearchCommandKind)
          {
            if (remainder == 0)
                return "LocalSearchCommandKind";
            --remainder;
          }
        if (flagHasLocalSearchCriteria)
          {
            if (remainder == 0)
                return "LocalSearchCriteria";
            --remainder;
          }
        if (flagHasResultIDs)
          {
            if (remainder == 0)
                return "ResultIDs";
            --remainder;
          }
        assert(false);
        return NULL;
      }
    JSONValue *extraLocalSearchConversationStateElementComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasCommandKind)
          {
            if (remainder == 0)
                return extraCommandKindToJSON();
            --remainder;
          }
        if (flagHasLocalSearchCommandKind)
          {
            if (remainder == 0)
                return extraLocalSearchCommandKindToJSON();
            --remainder;
          }
        if (flagHasLocalSearchCriteria)
          {
            if (remainder == 0)
                return extraLocalSearchCriteriaToJSON();
            --remainder;
          }
        if (flagHasResultIDs)
          {
            if (remainder == 0)
                return extraResultIDsToJSON();
            --remainder;
          }
        assert(false);
        return NULL;
      }
    const JSONValue *extraLocalSearchConversationStateElementComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasCommandKind)
          {
            if (remainder == 0)
                return extraCommandKindToJSON();
            --remainder;
          }
        if (flagHasLocalSearchCommandKind)
          {
            if (remainder == 0)
                return extraLocalSearchCommandKindToJSON();
            --remainder;
          }
        if (flagHasLocalSearchCriteria)
          {
            if (remainder == 0)
                return extraLocalSearchCriteriaToJSON();
            --remainder;
          }
        if (flagHasResultIDs)
          {
            if (remainder == 0)
                return extraResultIDsToJSON();
            --remainder;
          }
        assert(false);
        return NULL;
      }
    JSONValue *extraLocalSearchConversationStateElementLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "ommandKind") == 0)
                    return (flagHasCommandKind ? extraCommandKindToJSON() : NULL);
                break;
            case 'L':
                if (strncmp(&(field_name[1]), "ocalSearchC", 11) == 0)
                  {
                    switch ((unsigned char)(field_name[12]))
                      {
                        case 'o':
                            if (strcmp(&(field_name[13]), "mmandKind") == 0)
                                return (flagHasLocalSearchCommandKind ? extraLocalSearchCommandKindToJSON() : NULL);
                            break;
                        case 'r':
                            if (strcmp(&(field_name[13]), "iteria") == 0)
                                return (flagHasLocalSearchCriteria ? extraLocalSearchCriteriaToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'R':
                if (strcmp(&(field_name[1]), "esultIDs") == 0)
                    return (flagHasResultIDs ? extraResultIDsToJSON() : NULL);
                break;
            default:
                break;
          }
        return NULL;
      }
    const JSONValue *extraLocalSearchConversationStateElementLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "ommandKind") == 0)
                    return (flagHasCommandKind ? extraCommandKindToJSON() : NULL);
                break;
            case 'L':
                if (strncmp(&(field_name[1]), "ocalSearchC", 11) == 0)
                  {
                    switch ((unsigned char)(field_name[12]))
                      {
                        case 'o':
                            if (strcmp(&(field_name[13]), "mmandKind") == 0)
                                return (flagHasLocalSearchCommandKind ? extraLocalSearchCommandKindToJSON() : NULL);
                            break;
                        case 'r':
                            if (strcmp(&(field_name[13]), "iteria") == 0)
                                return (flagHasLocalSearchCriteria ? extraLocalSearchCriteriaToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'R':
                if (strcmp(&(field_name[1]), "esultIDs") == 0)
                    return (flagHasResultIDs ? extraResultIDsToJSON() : NULL);
                break;
            default:
                break;
          }
        return NULL;
      }

    void setCommandKind(void)
      {
        flagHasCommandKind = true;
      }
    void setCommandKind(TypeCommandKind new_value)
      {
        setCommandKind();
      }
    void setCommandKind(const char *chars)
      {
        setCommandKind(stringToCommandKind(chars));
      }
    void setCommandKind(std::string the_string)
      {
        setCommandKind(stringToCommandKind(the_string.c_str()));
      }
    void unsetCommandKind(void)
      {
        flagHasCommandKind = false;
      }
    void setLocalSearchCommandKind(void)
      {
        flagHasLocalSearchCommandKind = true;
      }
    void setLocalSearchCommandKind(TypeLocalSearchCommandKind new_value)
      {
        setLocalSearchCommandKind();
      }
    void setLocalSearchCommandKind(const char *chars)
      {
        setLocalSearchCommandKind(stringToLocalSearchCommandKind(chars));
      }
    void setLocalSearchCommandKind(std::string the_string)
      {
        setLocalSearchCommandKind(stringToLocalSearchCommandKind(the_string.c_str()));
      }
    void unsetLocalSearchCommandKind(void)
      {
        flagHasLocalSearchCommandKind = false;
      }
    void setLocalSearchCriteria(LocalSearchFilterSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasLocalSearchCriteria)
          {
            storeLocalSearchCriteria->remove_reference();
          }
        flagHasLocalSearchCriteria = true;
        storeLocalSearchCriteria = new_value;
      }
    void unsetLocalSearchCriteria(void)
      {
        if (flagHasLocalSearchCriteria)
          {
            storeLocalSearchCriteria->remove_reference();
          }
        flagHasLocalSearchCriteria = false;
      }
    void initResultIDs(void)
      {
        if (flagHasResultIDs)
          {
            for (size_t num2 = 0; num2 < storeResultIDs.size(); ++num2)
              {
                storeResultIDs[num2]->remove_reference();
              }
          }
        flagHasResultIDs = true;
        storeResultIDs.clear();
      }
    void appendResultIDs(TypeResultIDsJSON * to_append)
      {
        if (!flagHasResultIDs)
          {
            flagHasResultIDs = true;
            storeResultIDs.clear();
          }
        assert(flagHasResultIDs);
        to_append->add_reference();
        storeResultIDs.push_back(to_append);
      }
    void unsetResultIDs(void)
      {
        if (flagHasResultIDs)
          {
            for (size_t num3 = 0; num3 < storeResultIDs.size(); ++num3)
              {
                storeResultIDs[num3]->remove_reference();
              }
          }
        flagHasResultIDs = false;
        storeResultIDs.clear();
      }

    void extraLocalSearchConversationStateElementAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "ommandKind") == 0)
                    {
                    fromJSONCommandKind(new_component, false);
                    return;
                    }
                break;
            case 'L':
                if (strncmp(&(key[1]), "ocalSearchC", 11) == 0)
                  {
                    switch ((unsigned char)(key[12]))
                      {
                        case 'o':
                            if (strcmp(&(key[13]), "mmandKind") == 0)
                                {
                                fromJSONLocalSearchCommandKind(new_component, false);
                                return;
                                }
                            break;
                        case 'r':
                            if (strcmp(&(key[13]), "iteria") == 0)
                                {
                                fromJSONLocalSearchCriteria(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'R':
                if (strcmp(&(key[1]), "esultIDs") == 0)
                    {
                    fromJSONResultIDs(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
      }
    void extraLocalSearchConversationStateElementSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "ommandKind") == 0)
                    {
                    fromJSONCommandKind(new_component, false);
                    return;
                    }
                break;
            case 'L':
                if (strncmp(&(key[1]), "ocalSearchC", 11) == 0)
                  {
                    switch ((unsigned char)(key[12]))
                      {
                        case 'o':
                            if (strcmp(&(key[13]), "mmandKind") == 0)
                                {
                                fromJSONLocalSearchCommandKind(new_component, false);
                                return;
                                }
                            break;
                        case 'r':
                            if (strcmp(&(key[13]), "iteria") == 0)
                                {
                                fromJSONLocalSearchCriteria(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'R':
                if (strcmp(&(key[1]), "esultIDs") == 0)
                    {
                    fromJSONResultIDs(new_component, false);
                    return;
                    }
                break;
            default:
                break;
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
        LocalSearchConversationStateElementJSON::write_fields_as_json(handler);
        assert(flagHasCommandKind);
        handler->start_pair("CommandKind");
        handler->string_value("LocalSearchCommand");
        assert(flagHasLocalSearchCommandKind);
        handler->start_pair("LocalSearchCommandKind");
        handler->string_value("ShowList");
        if (flagHasLocalSearchCriteria)
          {
            handler->start_pair("LocalSearchCriteria");
            storeLocalSearchCriteria->write_as_json(handler);
          }
        if (flagHasResultIDs)
          {
            handler->start_pair("ResultIDs");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeResultIDs.size(); ++num1)
              {
                storeResultIDs[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasCommandKind()))
          {
            return "When parsing the object for %what%, the \"CommandKind\" field was missing.";
          }
        if (!(hasLocalSearchCommandKind()))
          {
            return "When parsing the object for %what%, the \"LocalSearchCommandKind\" field was missing.";
          }
        return NULL;
      }

    static YelpLocalSearchConversationStateElementJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static YelpLocalSearchConversationStateElementJSON *from_text(const char *text, bool ignore_extras = false)
      {
        YelpLocalSearchConversationStateElementJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<YelpLocalSearchConversationStateElementJSON>, YelpLocalSearchConversationStateElementJSON *, bool> generator("Type YelpLocalSearchConversationStateElement", ignore_extras);
            parse_json_value(text, "Text for YelpLocalSearchConversationStateElementJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static YelpLocalSearchConversationStateElementJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        YelpLocalSearchConversationStateElementJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<YelpLocalSearchConversationStateElementJSON>, YelpLocalSearchConversationStateElementJSON *, bool> generator("Type YelpLocalSearchConversationStateElement", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public LocalSearchConversationStateElementJSON::Generator
      {
      private:
    class FieldGeneratorCommandKind : public JSONStringGenerator
          {
          protected:
            FieldGeneratorCommandKind(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorCommandKind(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToCommandKind(result));
              }
            virtual void handle_result(TypeCommandKind result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorCommandKind, TypeCommandKind, TypeCommandKind > fieldGeneratorCommandKind;
    class FieldGeneratorLocalSearchCommandKind : public JSONStringGenerator
          {
          protected:
            FieldGeneratorLocalSearchCommandKind(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorLocalSearchCommandKind(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToLocalSearchCommandKind(result));
              }
            virtual void handle_result(TypeLocalSearchCommandKind result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorLocalSearchCommandKind, TypeLocalSearchCommandKind, TypeLocalSearchCommandKind > fieldGeneratorLocalSearchCommandKind;
        JSONHoldingGenerator<LocalSearchFilterSpecJSON::Generator, RCHandle<LocalSearchFilterSpecJSON>, LocalSearchFilterSpecJSON *, bool > fieldGeneratorLocalSearchCriteria;
        JSONHoldingArrayGenerator<TypeResultIDsJSON::Generator, RCHandle<TypeResultIDsJSON>, TypeResultIDsJSON *, bool > fieldGeneratorResultIDs;


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
            if (!(strcmp(getLocalSearchConversationStateElementJSONKey().c_str(), "YelpLocalSearch") == 0))
                throw("The key field has a value other than `YelpLocalSearch'.");
            YelpLocalSearchConversationStateElementJSON *result = new YelpLocalSearchConversationStateElementJSON();
            assert(result != NULL);
            RCHandle<YelpLocalSearchConversationStateElementJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void handle_result(LocalSearchConversationStateElementJSON *new_result)
          {
            handle_result((YelpLocalSearchConversationStateElementJSON *)new_result);
          }
        void finish(YelpLocalSearchConversationStateElementJSON *result)
          {
            if (fieldGeneratorCommandKind.have_value)
              {
                result->setCommandKind();
                fieldGeneratorCommandKind.have_value = false;
              }
            else if (!(result->hasCommandKind()))
              {
                error("When parsing the object for %what%, the \"CommandKind\" field was missing.");
              }
            if (fieldGeneratorLocalSearchCommandKind.have_value)
              {
                result->setLocalSearchCommandKind();
                fieldGeneratorLocalSearchCommandKind.have_value = false;
              }
            else if (!(result->hasLocalSearchCommandKind()))
              {
                error("When parsing the object for %what%, the \"LocalSearchCommandKind\" field was missing.");
              }
            if (fieldGeneratorLocalSearchCriteria.have_value)
              {
                result->setLocalSearchCriteria(fieldGeneratorLocalSearchCriteria.value.referenced());
                fieldGeneratorLocalSearchCriteria.have_value = false;
              }
            if (fieldGeneratorResultIDs.have_value)
              {
                result->initResultIDs();
                size_t count = fieldGeneratorResultIDs.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendResultIDs(fieldGeneratorResultIDs.value[num].referenced());
                  }
                fieldGeneratorResultIDs.value.clear();
                fieldGeneratorResultIDs.have_value = false;
              }
            LocalSearchConversationStateElementJSON::Generator::finish(result);
          }
        virtual void handle_result(YelpLocalSearchConversationStateElementJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "ommandKind") == 0)
                        return &fieldGeneratorCommandKind;
                    break;
                case 'L':
                    if (strncmp(&(field_name[1]), "ocalSearchC", 11) == 0)
                      {
                        switch ((unsigned char)(field_name[12]))
                          {
                            case 'o':
                                if (strcmp(&(field_name[13]), "mmandKind") == 0)
                                    return &fieldGeneratorLocalSearchCommandKind;
                                break;
                            case 'r':
                                if (strcmp(&(field_name[13]), "iteria") == 0)
                                    return &fieldGeneratorLocalSearchCriteria;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "esultIDs") == 0)
                        return &fieldGeneratorResultIDs;
                    break;
                default:
                    break;
              }
            return LocalSearchConversationStateElementJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : LocalSearchConversationStateElementJSON::Generator(ignore_extras), fieldGeneratorCommandKind("field \"CommandKind\" of the YelpLocalSearchConversationStateElement class"), fieldGeneratorLocalSearchCommandKind("field \"LocalSearchCommandKind\" of the YelpLocalSearchConversationStateElement class"), fieldGeneratorLocalSearchCriteria("field \"LocalSearchCriteria\" of the YelpLocalSearchConversationStateElement class", ignore_extras), fieldGeneratorResultIDs("field \"ResultIDs\" of the YelpLocalSearchConversationStateElement class", ignore_extras)
          {
            set_what("the YelpLocalSearchConversationStateElement class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorCommandKind.reset();
            fieldGeneratorLocalSearchCommandKind.reset();
            fieldGeneratorLocalSearchCriteria.reset();
            fieldGeneratorResultIDs.reset();
            LocalSearchConversationStateElementJSON::Generator::reset();
          }
      };
  };

#endif /* YELPLOCALSEARCHCONVERSATIONSTATEELEMENTJSON_H */
