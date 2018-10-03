/* file "AgeCalculatorRequestedDateOutOfBoundsJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef AGECALCULATORREQUESTEDDATEOUTOFBOUNDSJSON_H
#define AGECALCULATORREQUESTEDDATEOUTOFBOUNDSJSON_H

#pragma interface

#include "CommandErrorJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
#include "AgeCalculatorPerspectiveJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class AgeCalculatorRequestedDateOutOfBoundsJSON : public CommandErrorJSON
  {
  public:
    enum TypeDatesSpecified
      {
        DatesSpecified_Both,
        DatesSpecified_Born,
        DatesSpecified_Destination,
        DatesSpecified_None
      };

    static TypeDatesSpecified  stringToDatesSpecified(const char *chars);
    static const char * stringFromDatesSpecified(TypeDatesSpecified the_enum);

  private:
    bool flagHasDestinationIsNow;
    bool storeDestinationIsNow;
    bool flagHasDestinationIsToday;
    bool storeDestinationIsToday;
    bool flagHasDatesSpecified;
    TypeDatesSpecified storeDatesSpecified;
    bool flagHasPerspective;
    AgeCalculatorPerspectiveJSON * storePerspective;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    AgeCalculatorRequestedDateOutOfBoundsJSON(const AgeCalculatorRequestedDateOutOfBoundsJSON &);
    AgeCalculatorRequestedDateOutOfBoundsJSON & operator=(const AgeCalculatorRequestedDateOutOfBoundsJSON &other);

    JSONValue * extraDestinationIsNowToJSON(void) const;
    JSONValue * extraDestinationIsTodayToJSON(void) const;
    JSONValue * extraDatesSpecifiedToJSON(void) const;
    JSONValue * extraPerspectiveToJSON(void) const;

    void  fromJSONDestinationIsNow(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDestinationIsToday(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDatesSpecified(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPerspective(JSONValue *json_value, bool ignore_extras = false);


  public:
    AgeCalculatorRequestedDateOutOfBoundsJSON(void);
    virtual ~AgeCalculatorRequestedDateOutOfBoundsJSON(void);
    const char * getErrorType(void) const;
    bool  hasDestinationIsNow(void) const;
    bool  getDestinationIsNow(void);
    const bool  getDestinationIsNow(void) const;
    bool  hasDestinationIsToday(void) const;
    bool  getDestinationIsToday(void);
    const bool  getDestinationIsToday(void) const;
    bool  hasDatesSpecified(void) const;
    TypeDatesSpecified  getDatesSpecified(void);
    const TypeDatesSpecified  getDatesSpecified(void) const;
    const char * getDatesSpecifiedAsChars(void) const;
    std::string  getDatesSpecifiedAsString(void) const;
    bool  hasPerspective(void) const;
    AgeCalculatorPerspectiveJSON *  getPerspective(void);
    const AgeCalculatorPerspectiveJSON *  getPerspective(void) const;
    AgeCalculatorPerspectiveJSON::TypeValue  getPerspectiveValue(void);
    const AgeCalculatorPerspectiveJSON::TypeValue  getPerspectiveValue(void) const;
    const char * getPerspectiveAsChars(void) const;
    std::string  getPerspectiveAsString(void) const;

    virtual size_t extraAgeCalculatorRequestedDateOutOfBoundsComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraAgeCalculatorRequestedDateOutOfBoundsComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraAgeCalculatorRequestedDateOutOfBoundsComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraAgeCalculatorRequestedDateOutOfBoundsComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraAgeCalculatorRequestedDateOutOfBoundsLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraAgeCalculatorRequestedDateOutOfBoundsLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraCommandErrorComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasDestinationIsNow)
            ++result;
        if (flagHasDestinationIsToday)
            ++result;
        if (flagHasDatesSpecified)
            ++result;
        if (flagHasPerspective)
            ++result;
        result += extraAgeCalculatorRequestedDateOutOfBoundsComponentCount();
        return result;
      }
    const char *extraCommandErrorComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasDestinationIsNow)
          {
            if (remainder == 0)
                return "DestinationIsNow";
            --remainder;
          }
        if (flagHasDestinationIsToday)
          {
            if (remainder == 0)
                return "DestinationIsToday";
            --remainder;
          }
        if (flagHasDatesSpecified)
          {
            if (remainder == 0)
                return "DatesSpecified";
            --remainder;
          }
        if (flagHasPerspective)
          {
            if (remainder == 0)
                return "Perspective";
            --remainder;
          }
        return extraAgeCalculatorRequestedDateOutOfBoundsComponentKey(remainder);
      }
    JSONValue *extraCommandErrorComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasDestinationIsNow)
          {
            if (remainder == 0)
                return extraDestinationIsNowToJSON();
            --remainder;
          }
        if (flagHasDestinationIsToday)
          {
            if (remainder == 0)
                return extraDestinationIsTodayToJSON();
            --remainder;
          }
        if (flagHasDatesSpecified)
          {
            if (remainder == 0)
                return extraDatesSpecifiedToJSON();
            --remainder;
          }
        if (flagHasPerspective)
          {
            if (remainder == 0)
                return extraPerspectiveToJSON();
            --remainder;
          }
        return extraAgeCalculatorRequestedDateOutOfBoundsComponentValue(remainder);
      }
    const JSONValue *extraCommandErrorComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasDestinationIsNow)
          {
            if (remainder == 0)
                return extraDestinationIsNowToJSON();
            --remainder;
          }
        if (flagHasDestinationIsToday)
          {
            if (remainder == 0)
                return extraDestinationIsTodayToJSON();
            --remainder;
          }
        if (flagHasDatesSpecified)
          {
            if (remainder == 0)
                return extraDatesSpecifiedToJSON();
            --remainder;
          }
        if (flagHasPerspective)
          {
            if (remainder == 0)
                return extraPerspectiveToJSON();
            --remainder;
          }
        return extraAgeCalculatorRequestedDateOutOfBoundsComponentValue(remainder);
      }
    JSONValue *extraCommandErrorLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'D':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'a':
                        if (strcmp(&(field_name[2]), "tesSpecified") == 0)
                            return (flagHasDatesSpecified ? extraDatesSpecifiedToJSON() : NULL);
                        break;
                    case 'e':
                        if (strncmp(&(field_name[2]), "stinationIs", 11) == 0)
                          {
                            switch ((unsigned char)(field_name[13]))
                              {
                                case 'N':
                                    if (strcmp(&(field_name[14]), "ow") == 0)
                                        return (flagHasDestinationIsNow ? extraDestinationIsNowToJSON() : NULL);
                                    break;
                                case 'T':
                                    if (strcmp(&(field_name[14]), "oday") == 0)
                                        return (flagHasDestinationIsToday ? extraDestinationIsTodayToJSON() : NULL);
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
            case 'P':
                if (strcmp(&(field_name[1]), "erspective") == 0)
                    return (flagHasPerspective ? extraPerspectiveToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraAgeCalculatorRequestedDateOutOfBoundsLookup(field_name);
      }
    const JSONValue *extraCommandErrorLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'D':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'a':
                        if (strcmp(&(field_name[2]), "tesSpecified") == 0)
                            return (flagHasDatesSpecified ? extraDatesSpecifiedToJSON() : NULL);
                        break;
                    case 'e':
                        if (strncmp(&(field_name[2]), "stinationIs", 11) == 0)
                          {
                            switch ((unsigned char)(field_name[13]))
                              {
                                case 'N':
                                    if (strcmp(&(field_name[14]), "ow") == 0)
                                        return (flagHasDestinationIsNow ? extraDestinationIsNowToJSON() : NULL);
                                    break;
                                case 'T':
                                    if (strcmp(&(field_name[14]), "oday") == 0)
                                        return (flagHasDestinationIsToday ? extraDestinationIsTodayToJSON() : NULL);
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
            case 'P':
                if (strcmp(&(field_name[1]), "erspective") == 0)
                    return (flagHasPerspective ? extraPerspectiveToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraAgeCalculatorRequestedDateOutOfBoundsLookup(field_name);
      }

    void setDestinationIsNow(bool new_value)
      {
        flagHasDestinationIsNow = true;
        storeDestinationIsNow = new_value;
      }
    void unsetDestinationIsNow(void)
      {
        flagHasDestinationIsNow = false;
      }
    void setDestinationIsToday(bool new_value)
      {
        flagHasDestinationIsToday = true;
        storeDestinationIsToday = new_value;
      }
    void unsetDestinationIsToday(void)
      {
        flagHasDestinationIsToday = false;
      }
    void setDatesSpecified(TypeDatesSpecified new_value)
      {
        flagHasDatesSpecified = true;
        storeDatesSpecified = new_value;
      }
    void setDatesSpecified(const char *chars)
      {
        setDatesSpecified(stringToDatesSpecified(chars));
      }
    void setDatesSpecified(std::string the_string)
      {
        setDatesSpecified(stringToDatesSpecified(the_string.c_str()));
      }
    void unsetDatesSpecified(void)
      {
        flagHasDatesSpecified = false;
      }
    void setPerspective(AgeCalculatorPerspectiveJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPerspective)
          {
            storePerspective->remove_reference();
          }
        flagHasPerspective = true;
        storePerspective = new_value;
      }
    void setPerspective(AgeCalculatorPerspectiveJSON::TypeValue new_value)
      {
        setPerspective(new AgeCalculatorPerspectiveJSON(new_value));
      }
    void setPerspective(const char *chars)
      {
        setPerspective(new AgeCalculatorPerspectiveJSON(chars));
      }
    void setPerspective(std::string the_string)
      {
        setPerspective(new AgeCalculatorPerspectiveJSON(the_string));
      }
    void unsetPerspective(void)
      {
        if (flagHasPerspective)
          {
            storePerspective->remove_reference();
          }
        flagHasPerspective = false;
      }

    virtual void extraAgeCalculatorRequestedDateOutOfBoundsAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraAgeCalculatorRequestedDateOutOfBoundsSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraAgeCalculatorRequestedDateOutOfBoundsLookup(key);
        if (old_field == NULL)
          {
            extraAgeCalculatorRequestedDateOutOfBoundsAppendPair(key, new_component);
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
    void extraCommandErrorAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'D':
                switch ((unsigned char)(key[1]))
                  {
                    case 'a':
                        if (strcmp(&(key[2]), "tesSpecified") == 0)
                            {
                            fromJSONDatesSpecified(new_component, false);
                            return;
                            }
                        break;
                    case 'e':
                        if (strncmp(&(key[2]), "stinationIs", 11) == 0)
                          {
                            switch ((unsigned char)(key[13]))
                              {
                                case 'N':
                                    if (strcmp(&(key[14]), "ow") == 0)
                                        {
                                        fromJSONDestinationIsNow(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'T':
                                    if (strcmp(&(key[14]), "oday") == 0)
                                        {
                                        fromJSONDestinationIsToday(new_component, false);
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
            case 'P':
                if (strcmp(&(key[1]), "erspective") == 0)
                    {
                    fromJSONPerspective(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraAgeCalculatorRequestedDateOutOfBoundsAppendPair(key, new_component);
      }
    void extraCommandErrorSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'D':
                switch ((unsigned char)(key[1]))
                  {
                    case 'a':
                        if (strcmp(&(key[2]), "tesSpecified") == 0)
                            {
                            fromJSONDatesSpecified(new_component, false);
                            return;
                            }
                        break;
                    case 'e':
                        if (strncmp(&(key[2]), "stinationIs", 11) == 0)
                          {
                            switch ((unsigned char)(key[13]))
                              {
                                case 'N':
                                    if (strcmp(&(key[14]), "ow") == 0)
                                        {
                                        fromJSONDestinationIsNow(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'T':
                                    if (strcmp(&(key[14]), "oday") == 0)
                                        {
                                        fromJSONDestinationIsToday(new_component, false);
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
            case 'P':
                if (strcmp(&(key[1]), "erspective") == 0)
                    {
                    fromJSONPerspective(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraAgeCalculatorRequestedDateOutOfBoundsSetField(key, new_component);
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
        CommandErrorJSON::write_fields_as_json(handler);
        if (flagHasDestinationIsNow)
          {
            handler->start_pair("DestinationIsNow");
            handler->boolean_value(storeDestinationIsNow);
          }
        if (flagHasDestinationIsToday)
          {
            handler->start_pair("DestinationIsToday");
            handler->boolean_value(storeDestinationIsToday);
          }
        if (flagHasDatesSpecified)
          {
            handler->start_pair("DatesSpecified");
            switch (storeDatesSpecified)
              {
                case DatesSpecified_Both:
                    handler->string_value("Both");
                    break;
                case DatesSpecified_Born:
                    handler->string_value("Born");
                    break;
                case DatesSpecified_Destination:
                    handler->string_value("Destination");
                    break;
                case DatesSpecified_None:
                    handler->string_value("None");
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasPerspective)
          {
            handler->start_pair("Perspective");
            storePerspective->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static AgeCalculatorRequestedDateOutOfBoundsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static AgeCalculatorRequestedDateOutOfBoundsJSON *from_text(const char *text, bool ignore_extras = false)
      {
        AgeCalculatorRequestedDateOutOfBoundsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AgeCalculatorRequestedDateOutOfBoundsJSON>, AgeCalculatorRequestedDateOutOfBoundsJSON *, bool> generator("Type AgeCalculatorRequestedDateOutOfBounds", ignore_extras);
            parse_json_value(text, "Text for AgeCalculatorRequestedDateOutOfBoundsJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static AgeCalculatorRequestedDateOutOfBoundsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        AgeCalculatorRequestedDateOutOfBoundsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AgeCalculatorRequestedDateOutOfBoundsJSON>, AgeCalculatorRequestedDateOutOfBoundsJSON *, bool> generator("Type AgeCalculatorRequestedDateOutOfBounds", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public CommandErrorJSON::Generator
      {
      private:
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorDestinationIsNow;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorDestinationIsToday;
    class FieldGeneratorDatesSpecified : public JSONStringGenerator
          {
          protected:
            FieldGeneratorDatesSpecified(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorDatesSpecified(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToDatesSpecified(result));
              }
            virtual void handle_result(TypeDatesSpecified result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorDatesSpecified, TypeDatesSpecified, TypeDatesSpecified > fieldGeneratorDatesSpecified;
        JSONHoldingGenerator<AgeCalculatorPerspectiveJSON::Generator, RCHandle<AgeCalculatorPerspectiveJSON>, AgeCalculatorPerspectiveJSON *, bool > fieldGeneratorPerspective;
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
            if (!(strcmp(getCommandErrorJSONKey().c_str(), "AgeCalculatorRequestedDateOutOfBounds") == 0))
                throw("The key field has a value other than `AgeCalculatorRequestedDateOutOfBounds'.");
            AgeCalculatorRequestedDateOutOfBoundsJSON *result = new AgeCalculatorRequestedDateOutOfBoundsJSON();
            assert(result != NULL);
            RCHandle<AgeCalculatorRequestedDateOutOfBoundsJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraAgeCalculatorRequestedDateOutOfBoundsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(CommandErrorJSON *new_result)
          {
            handle_result((AgeCalculatorRequestedDateOutOfBoundsJSON *)new_result);
          }
        void finish(AgeCalculatorRequestedDateOutOfBoundsJSON *result)
          {
            if (fieldGeneratorDestinationIsNow.have_value)
              {
                result->setDestinationIsNow(fieldGeneratorDestinationIsNow.value);
                fieldGeneratorDestinationIsNow.have_value = false;
              }
            if (fieldGeneratorDestinationIsToday.have_value)
              {
                result->setDestinationIsToday(fieldGeneratorDestinationIsToday.value);
                fieldGeneratorDestinationIsToday.have_value = false;
              }
            if (fieldGeneratorDatesSpecified.have_value)
              {
                result->setDatesSpecified(fieldGeneratorDatesSpecified.value);
                fieldGeneratorDatesSpecified.have_value = false;
              }
            if (fieldGeneratorPerspective.have_value)
              {
                result->setPerspective(fieldGeneratorPerspective.value.referenced());
                fieldGeneratorPerspective.have_value = false;
              }
            CommandErrorJSON::Generator::finish(result);
          }
        virtual void handle_result(AgeCalculatorRequestedDateOutOfBoundsJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "tesSpecified") == 0)
                                return &fieldGeneratorDatesSpecified;
                            break;
                        case 'e':
                            if (strncmp(&(field_name[2]), "stinationIs", 11) == 0)
                              {
                                switch ((unsigned char)(field_name[13]))
                                  {
                                    case 'N':
                                        if (strcmp(&(field_name[14]), "ow") == 0)
                                            return &fieldGeneratorDestinationIsNow;
                                        break;
                                    case 'T':
                                        if (strcmp(&(field_name[14]), "oday") == 0)
                                            return &fieldGeneratorDestinationIsToday;
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
                case 'P':
                    if (strcmp(&(field_name[1]), "erspective") == 0)
                        return &fieldGeneratorPerspective;
                    break;
                default:
                    break;
              }
            return CommandErrorJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CommandErrorJSON::Generator(ignore_extras), fieldGeneratorDestinationIsNow("field \"DestinationIsNow\" of the AgeCalculatorRequestedDateOutOfBounds class"), fieldGeneratorDestinationIsToday("field \"DestinationIsToday\" of the AgeCalculatorRequestedDateOutOfBounds class"), fieldGeneratorDatesSpecified("field \"DatesSpecified\" of the AgeCalculatorRequestedDateOutOfBounds class"), fieldGeneratorPerspective("field \"Perspective\" of the AgeCalculatorRequestedDateOutOfBounds class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the AgeCalculatorRequestedDateOutOfBounds class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorDestinationIsNow.reset();
            fieldGeneratorDestinationIsToday.reset();
            fieldGeneratorDatesSpecified.reset();
            fieldGeneratorPerspective.reset();
            CommandErrorJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* AGECALCULATORREQUESTEDDATEOUTOFBOUNDSJSON_H */
