/* file "AgeCalculatorCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef AGECALCULATORCOMMANDJSON_H
#define AGECALCULATORCOMMANDJSON_H

#pragma interface

#include "CommandResultJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include "OInteger.h"
#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeJSON.h"
#include "AgeCalculatorPerspectiveJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class AgeCalculatorCommandJSON : public CommandResultJSON
  {
  public:
    class TypeAgesJSON : public ReferenceCounted
      {
      public:
        enum TypeUnit
          {
            Unit_Years,
            Unit_Months,
            Unit_Weeks,
            Unit_Days,
            Unit_Hours,
            Unit_Minutes,
            Unit_Seconds,
            Unit_Unknown
          };

        static TypeUnit  stringToUnit(const char *chars);
        static const char * stringFromUnit(TypeUnit the_enum);

      private:
        bool flagHasUnit;
        TypeUnit storeUnit;
        bool flagHasValue;
        OInteger storeValue;
        bool flagHasValueIsInferred;
        bool storeValueIsInferred;
        bool flagHasWasRequested;
        bool storeWasRequested;

        TypeAgesJSON(const TypeAgesJSON &);
        TypeAgesJSON & operator=(const TypeAgesJSON &other);

        void  fromJSONUnit(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONValueIsInferred(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONWasRequested(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeAgesJSON(void);
        virtual ~TypeAgesJSON(void);
        bool  hasUnit(void) const;
        TypeUnit  getUnit(void);
        const TypeUnit  getUnit(void) const;
        const char * getUnitAsChars(void) const;
        std::string  getUnitAsString(void) const;
        bool  hasValue(void) const;
        OInteger  getValue(void);
        const OInteger  getValue(void) const;
        bool  hasValueIsInferred(void) const;
        bool  getValueIsInferred(void);
        const bool  getValueIsInferred(void) const;
        bool  hasWasRequested(void) const;
        bool  getWasRequested(void);
        const bool  getWasRequested(void) const;


        void setUnit(TypeUnit new_value)
          {
            flagHasUnit = true;
            storeUnit = new_value;
          }
        void setUnit(const char *chars)
          {
            setUnit(stringToUnit(chars));
          }
        void setUnit(std::string the_string)
          {
            setUnit(stringToUnit(the_string.c_str()));
          }
        void unsetUnit(void)
          {
            flagHasUnit = false;
          }
        void setValue(OInteger new_value)
          {
            flagHasValue = true;
            if (new_value < 0)
                throw("The value for field Value of TypeAgesJSON is less than the lower bound (0) for that field.");
            storeValue = new_value;
          }
        void unsetValue(void)
          {
            flagHasValue = false;
          }
        void setValueIsInferred(bool new_value)
          {
            flagHasValueIsInferred = true;
            storeValueIsInferred = new_value;
          }
        void unsetValueIsInferred(void)
          {
            flagHasValueIsInferred = false;
          }
        void setWasRequested(bool new_value)
          {
            flagHasWasRequested = true;
            storeWasRequested = new_value;
          }
        void unsetWasRequested(void)
          {
            flagHasWasRequested = false;
          }


        void write_as_json(JSONHandler *handler) const
          {
            handler->start_object();
            write_fields_as_json(handler);
            handler->finish_object();
          }

        virtual void write_fields_as_json(JSONHandler *handler) const
          {
            assert(flagHasUnit);
            handler->start_pair("Unit");
            switch (storeUnit)
              {
                case Unit_Years:
                    handler->string_value("Years");
                    break;
                case Unit_Months:
                    handler->string_value("Months");
                    break;
                case Unit_Weeks:
                    handler->string_value("Weeks");
                    break;
                case Unit_Days:
                    handler->string_value("Days");
                    break;
                case Unit_Hours:
                    handler->string_value("Hours");
                    break;
                case Unit_Minutes:
                    handler->string_value("Minutes");
                    break;
                case Unit_Seconds:
                    handler->string_value("Seconds");
                    break;
                case Unit_Unknown:
                    handler->string_value("Unknown");
                    break;
                default:
                    assert(false);
              }
            assert(flagHasValue);
            handler->start_pair("Value");
            handler->number_value(storeValue.get_o_integer());
            if (flagHasValueIsInferred)
              {
                handler->start_pair("ValueIsInferred");
                handler->boolean_value(storeValueIsInferred);
              }
            if (flagHasWasRequested)
              {
                handler->start_pair("WasRequested");
                handler->boolean_value(storeWasRequested);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasUnit()))
              {
                return "When parsing the object for %what%, the \"Unit\" field was missing.";
              }
            if (!(hasValue()))
              {
                return "When parsing the object for %what%, the \"Value\" field was missing.";
              }
            return NULL;
          }

        static TypeAgesJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeAgesJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeAgesJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeAgesJSON>, TypeAgesJSON *, bool> generator("Type TypeAges", ignore_extras);
                parse_json_value(text, "Text for TypeAgesJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeAgesJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeAgesJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeAgesJSON>, TypeAgesJSON *, bool> generator("Type TypeAges", ignore_extras);
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
        class FieldGeneratorUnit : public JSONStringGenerator
              {
              protected:
                FieldGeneratorUnit(const char *what)
                  {
                    set_what(what);
                  }
                FieldGeneratorUnit(void)
                  {
                  }
                void handle_result(const char *result)
                  {
                    handle_result(stringToUnit(result));
                  }
                virtual void handle_result(TypeUnit result) = 0;
              };
            JSONHoldingGenerator<FieldGeneratorUnit, TypeUnit, TypeUnit > fieldGeneratorUnit;
            static char lowerBoundValue[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundValue>, OInteger, o_integer > fieldGeneratorValue;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorValueIsInferred;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorWasRequested;


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
                TypeAgesJSON *result = new TypeAgesJSON();
                assert(result != NULL);
                RCHandle<TypeAgesJSON> result_holder = result;
                finish(result);
                handle_result(result);
              }
            void finish(TypeAgesJSON *result)
              {
                if (fieldGeneratorUnit.have_value)
                  {
                    result->setUnit(fieldGeneratorUnit.value);
                    fieldGeneratorUnit.have_value = false;
                  }
                else if (!(result->hasUnit()))
                  {
                    error("When parsing the object for %what%, the \"Unit\" field was missing.");
                  }
                if (fieldGeneratorValue.have_value)
                  {
                    result->setValue(fieldGeneratorValue.value);
                    fieldGeneratorValue.have_value = false;
                  }
                else if (!(result->hasValue()))
                  {
                    error("When parsing the object for %what%, the \"Value\" field was missing.");
                  }
                if (fieldGeneratorValueIsInferred.have_value)
                  {
                    result->setValueIsInferred(fieldGeneratorValueIsInferred.value);
                    fieldGeneratorValueIsInferred.have_value = false;
                  }
                if (fieldGeneratorWasRequested.have_value)
                  {
                    result->setWasRequested(fieldGeneratorWasRequested.value);
                    fieldGeneratorWasRequested.have_value = false;
                  }
              }
            virtual void handle_result(TypeAgesJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'U':
                        if (strcmp(&(field_name[1]), "nit") == 0)
                            return &fieldGeneratorUnit;
                        break;
                    case 'V':
                        if (strncmp(&(field_name[1]), "alue", 4) == 0)
                          {
                            switch ((unsigned char)(field_name[5]))
                              {
                                case 0:
                                    return &fieldGeneratorValue;
                                case 'I':
                                    if (strcmp(&(field_name[6]), "sInferred") == 0)
                                        return &fieldGeneratorValueIsInferred;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'W':
                        if (strcmp(&(field_name[1]), "asRequested") == 0)
                            return &fieldGeneratorWasRequested;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorUnit("field \"Unit\" of the TypeAges class"), fieldGeneratorValue("field \"Value\" of the TypeAges class"), fieldGeneratorValueIsInferred("field \"ValueIsInferred\" of the TypeAges class"), fieldGeneratorWasRequested("field \"WasRequested\" of the TypeAges class")
              {
                set_what("the TypeAges class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorUnit.reset();
                fieldGeneratorValue.reset();
                fieldGeneratorValueIsInferred.reset();
                fieldGeneratorWasRequested.reset();
                JSONObjectGenerator::reset();
              }
          };
      };

  private:
    bool flagHasBornDate;
    DateAndOrTimeJSON * storeBornDate;
    bool flagHasDestinationDate;
    DateAndOrTimeJSON * storeDestinationDate;
    bool flagHasDestinationIsNow;
    bool storeDestinationIsNow;
    bool flagHasDestinationIsToday;
    bool storeDestinationIsToday;
    bool flagHasNowDate;
    DateAndOrTimeJSON * storeNowDate;
    bool flagHasPerspective;
    AgeCalculatorPerspectiveJSON * storePerspective;
    bool flagHasAges;
    std::vector< TypeAgesJSON * > storeAges;

    AgeCalculatorCommandJSON(const AgeCalculatorCommandJSON &);
    AgeCalculatorCommandJSON & operator=(const AgeCalculatorCommandJSON &other);

    JSONValue * extraBornDateToJSON(void) const;
    JSONValue * extraDestinationDateToJSON(void) const;
    JSONValue * extraDestinationIsNowToJSON(void) const;
    JSONValue * extraDestinationIsTodayToJSON(void) const;
    JSONValue * extraNowDateToJSON(void) const;
    JSONValue * extraPerspectiveToJSON(void) const;
    JSONValue * extraAgesToJSON(void) const;

    void  fromJSONBornDate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDestinationDate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDestinationIsNow(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDestinationIsToday(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNowDate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPerspective(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAges(JSONValue *json_value, bool ignore_extras = false);


  public:
    AgeCalculatorCommandJSON(void);
    virtual ~AgeCalculatorCommandJSON(void);
    const char * getCommandKind(void) const;
    bool  hasBornDate(void) const;
    DateAndOrTimeJSON *  getBornDate(void);
    const DateAndOrTimeJSON *  getBornDate(void) const;
    bool  hasDestinationDate(void) const;
    DateAndOrTimeJSON *  getDestinationDate(void);
    const DateAndOrTimeJSON *  getDestinationDate(void) const;
    bool  hasDestinationIsNow(void) const;
    bool  getDestinationIsNow(void);
    const bool  getDestinationIsNow(void) const;
    bool  hasDestinationIsToday(void) const;
    bool  getDestinationIsToday(void);
    const bool  getDestinationIsToday(void) const;
    bool  hasNowDate(void) const;
    DateAndOrTimeJSON *  getNowDate(void);
    const DateAndOrTimeJSON *  getNowDate(void) const;
    bool  hasPerspective(void) const;
    AgeCalculatorPerspectiveJSON *  getPerspective(void);
    const AgeCalculatorPerspectiveJSON *  getPerspective(void) const;
    AgeCalculatorPerspectiveJSON::TypeValue  getPerspectiveValue(void);
    const AgeCalculatorPerspectiveJSON::TypeValue  getPerspectiveValue(void) const;
    const char * getPerspectiveAsChars(void) const;
    std::string  getPerspectiveAsString(void) const;
    bool  hasAges(void) const;
    size_t  countOfAges(void) const;
    TypeAgesJSON *  elementOfAges(size_t element_num);
    const TypeAgesJSON *  elementOfAges(size_t element_num) const;
    std::vector< TypeAgesJSON * >  getAges(void);
    const std::vector< TypeAgesJSON * >  getAges(void) const;

    size_t extraCommandResultComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasBornDate)
            ++result;
        if (flagHasDestinationDate)
            ++result;
        if (flagHasDestinationIsNow)
            ++result;
        if (flagHasDestinationIsToday)
            ++result;
        if (flagHasNowDate)
            ++result;
        if (flagHasPerspective)
            ++result;
        if (flagHasAges)
            ++result;
        return result;
      }
    const char *extraCommandResultComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasBornDate)
          {
            if (remainder == 0)
                return "BornDate";
            --remainder;
          }
        if (flagHasDestinationDate)
          {
            if (remainder == 0)
                return "DestinationDate";
            --remainder;
          }
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
        if (flagHasNowDate)
          {
            if (remainder == 0)
                return "NowDate";
            --remainder;
          }
        if (flagHasPerspective)
          {
            if (remainder == 0)
                return "Perspective";
            --remainder;
          }
        if (flagHasAges)
          {
            if (remainder == 0)
                return "Ages";
            --remainder;
          }
        assert(false);
        return NULL;
      }
    JSONValue *extraCommandResultComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasBornDate)
          {
            if (remainder == 0)
                return extraBornDateToJSON();
            --remainder;
          }
        if (flagHasDestinationDate)
          {
            if (remainder == 0)
                return extraDestinationDateToJSON();
            --remainder;
          }
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
        if (flagHasNowDate)
          {
            if (remainder == 0)
                return extraNowDateToJSON();
            --remainder;
          }
        if (flagHasPerspective)
          {
            if (remainder == 0)
                return extraPerspectiveToJSON();
            --remainder;
          }
        if (flagHasAges)
          {
            if (remainder == 0)
                return extraAgesToJSON();
            --remainder;
          }
        assert(false);
        return NULL;
      }
    const JSONValue *extraCommandResultComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasBornDate)
          {
            if (remainder == 0)
                return extraBornDateToJSON();
            --remainder;
          }
        if (flagHasDestinationDate)
          {
            if (remainder == 0)
                return extraDestinationDateToJSON();
            --remainder;
          }
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
        if (flagHasNowDate)
          {
            if (remainder == 0)
                return extraNowDateToJSON();
            --remainder;
          }
        if (flagHasPerspective)
          {
            if (remainder == 0)
                return extraPerspectiveToJSON();
            --remainder;
          }
        if (flagHasAges)
          {
            if (remainder == 0)
                return extraAgesToJSON();
            --remainder;
          }
        assert(false);
        return NULL;
      }
    JSONValue *extraCommandResultLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strcmp(&(field_name[1]), "ges") == 0)
                    return (flagHasAges ? extraAgesToJSON() : NULL);
                break;
            case 'B':
                if (strcmp(&(field_name[1]), "ornDate") == 0)
                    return (flagHasBornDate ? extraBornDateToJSON() : NULL);
                break;
            case 'D':
                if (strncmp(&(field_name[1]), "estination", 10) == 0)
                  {
                    switch ((unsigned char)(field_name[11]))
                      {
                        case 'D':
                            if (strcmp(&(field_name[12]), "ate") == 0)
                                return (flagHasDestinationDate ? extraDestinationDateToJSON() : NULL);
                            break;
                        case 'I':
                            if (strncmp(&(field_name[12]), "s", 1) == 0)
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
                  }
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "owDate") == 0)
                    return (flagHasNowDate ? extraNowDateToJSON() : NULL);
                break;
            case 'P':
                if (strcmp(&(field_name[1]), "erspective") == 0)
                    return (flagHasPerspective ? extraPerspectiveToJSON() : NULL);
                break;
            default:
                break;
          }
        return NULL;
      }
    const JSONValue *extraCommandResultLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strcmp(&(field_name[1]), "ges") == 0)
                    return (flagHasAges ? extraAgesToJSON() : NULL);
                break;
            case 'B':
                if (strcmp(&(field_name[1]), "ornDate") == 0)
                    return (flagHasBornDate ? extraBornDateToJSON() : NULL);
                break;
            case 'D':
                if (strncmp(&(field_name[1]), "estination", 10) == 0)
                  {
                    switch ((unsigned char)(field_name[11]))
                      {
                        case 'D':
                            if (strcmp(&(field_name[12]), "ate") == 0)
                                return (flagHasDestinationDate ? extraDestinationDateToJSON() : NULL);
                            break;
                        case 'I':
                            if (strncmp(&(field_name[12]), "s", 1) == 0)
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
                  }
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "owDate") == 0)
                    return (flagHasNowDate ? extraNowDateToJSON() : NULL);
                break;
            case 'P':
                if (strcmp(&(field_name[1]), "erspective") == 0)
                    return (flagHasPerspective ? extraPerspectiveToJSON() : NULL);
                break;
            default:
                break;
          }
        return NULL;
      }

    void setBornDate(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasBornDate)
          {
            storeBornDate->remove_reference();
          }
        flagHasBornDate = true;
        storeBornDate = new_value;
      }
    void unsetBornDate(void)
      {
        if (flagHasBornDate)
          {
            storeBornDate->remove_reference();
          }
        flagHasBornDate = false;
      }
    void setDestinationDate(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDestinationDate)
          {
            storeDestinationDate->remove_reference();
          }
        flagHasDestinationDate = true;
        storeDestinationDate = new_value;
      }
    void unsetDestinationDate(void)
      {
        if (flagHasDestinationDate)
          {
            storeDestinationDate->remove_reference();
          }
        flagHasDestinationDate = false;
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
    void setNowDate(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasNowDate)
          {
            storeNowDate->remove_reference();
          }
        flagHasNowDate = true;
        storeNowDate = new_value;
      }
    void unsetNowDate(void)
      {
        if (flagHasNowDate)
          {
            storeNowDate->remove_reference();
          }
        flagHasNowDate = false;
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
    void initAges(void)
      {
        if (flagHasAges)
          {
            for (size_t num2 = 0; num2 < storeAges.size(); ++num2)
              {
                storeAges[num2]->remove_reference();
              }
          }
        flagHasAges = true;
        storeAges.clear();
      }
    void appendAges(TypeAgesJSON * to_append)
      {
        if (!flagHasAges)
          {
            flagHasAges = true;
            storeAges.clear();
          }
        assert(flagHasAges);
        to_append->add_reference();
        storeAges.push_back(to_append);
      }
    void unsetAges(void)
      {
        if (flagHasAges)
          {
            for (size_t num3 = 0; num3 < storeAges.size(); ++num3)
              {
                storeAges[num3]->remove_reference();
              }
          }
        flagHasAges = false;
        storeAges.clear();
      }

    void extraCommandResultAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                if (strcmp(&(key[1]), "ges") == 0)
                    {
                    fromJSONAges(new_component, false);
                    return;
                    }
                break;
            case 'B':
                if (strcmp(&(key[1]), "ornDate") == 0)
                    {
                    fromJSONBornDate(new_component, false);
                    return;
                    }
                break;
            case 'D':
                if (strncmp(&(key[1]), "estination", 10) == 0)
                  {
                    switch ((unsigned char)(key[11]))
                      {
                        case 'D':
                            if (strcmp(&(key[12]), "ate") == 0)
                                {
                                fromJSONDestinationDate(new_component, false);
                                return;
                                }
                            break;
                        case 'I':
                            if (strncmp(&(key[12]), "s", 1) == 0)
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
                  }
                break;
            case 'N':
                if (strcmp(&(key[1]), "owDate") == 0)
                    {
                    fromJSONNowDate(new_component, false);
                    return;
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
      }
    void extraCommandResultSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                if (strcmp(&(key[1]), "ges") == 0)
                    {
                    fromJSONAges(new_component, false);
                    return;
                    }
                break;
            case 'B':
                if (strcmp(&(key[1]), "ornDate") == 0)
                    {
                    fromJSONBornDate(new_component, false);
                    return;
                    }
                break;
            case 'D':
                if (strncmp(&(key[1]), "estination", 10) == 0)
                  {
                    switch ((unsigned char)(key[11]))
                      {
                        case 'D':
                            if (strcmp(&(key[12]), "ate") == 0)
                                {
                                fromJSONDestinationDate(new_component, false);
                                return;
                                }
                            break;
                        case 'I':
                            if (strncmp(&(key[12]), "s", 1) == 0)
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
                  }
                break;
            case 'N':
                if (strcmp(&(key[1]), "owDate") == 0)
                    {
                    fromJSONNowDate(new_component, false);
                    return;
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
      }

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        CommandResultJSON::write_fields_as_json(handler);
        assert(flagHasBornDate);
        handler->start_pair("BornDate");
        storeBornDate->write_as_json(handler);
        assert(flagHasDestinationDate);
        handler->start_pair("DestinationDate");
        storeDestinationDate->write_as_json(handler);
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
        if (flagHasNowDate)
          {
            handler->start_pair("NowDate");
            storeNowDate->write_as_json(handler);
          }
        if (flagHasPerspective)
          {
            handler->start_pair("Perspective");
            storePerspective->write_as_json(handler);
          }
        assert(flagHasAges);
        handler->start_pair("Ages");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeAges.size(); ++num1)
          {
            storeAges[num1]->write_as_json(handler);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasBornDate()))
          {
            return "When parsing the object for %what%, the \"BornDate\" field was missing.";
          }
        if (!(hasDestinationDate()))
          {
            return "When parsing the object for %what%, the \"DestinationDate\" field was missing.";
          }
        if (!(hasAges()))
          {
            return "When parsing the object for %what%, the \"Ages\" field was missing.";
          }
        return NULL;
      }

    static AgeCalculatorCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static AgeCalculatorCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        AgeCalculatorCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AgeCalculatorCommandJSON>, AgeCalculatorCommandJSON *, bool> generator("Type AgeCalculatorCommand", ignore_extras);
            parse_json_value(text, "Text for AgeCalculatorCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static AgeCalculatorCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        AgeCalculatorCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AgeCalculatorCommandJSON>, AgeCalculatorCommandJSON *, bool> generator("Type AgeCalculatorCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public CommandResultJSON::Generator
      {
      private:
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorBornDate;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorDestinationDate;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorDestinationIsNow;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorDestinationIsToday;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorNowDate;
        JSONHoldingGenerator<AgeCalculatorPerspectiveJSON::Generator, RCHandle<AgeCalculatorPerspectiveJSON>, AgeCalculatorPerspectiveJSON *, bool > fieldGeneratorPerspective;
        JSONHoldingArrayGenerator<TypeAgesJSON::Generator, RCHandle<TypeAgesJSON>, TypeAgesJSON *, bool > fieldGeneratorAges;


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
            if (!(strcmp(getCommandResultJSONKey().c_str(), "AgeCalculatorCommand") == 0))
                throw("The key field has a value other than `AgeCalculatorCommand'.");
            AgeCalculatorCommandJSON *result = new AgeCalculatorCommandJSON();
            assert(result != NULL);
            RCHandle<AgeCalculatorCommandJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void handle_result(CommandResultJSON *new_result)
          {
            handle_result((AgeCalculatorCommandJSON *)new_result);
          }
        void finish(AgeCalculatorCommandJSON *result)
          {
            if (fieldGeneratorBornDate.have_value)
              {
                result->setBornDate(fieldGeneratorBornDate.value.referenced());
                fieldGeneratorBornDate.have_value = false;
              }
            else if (!(result->hasBornDate()))
              {
                error("When parsing the object for %what%, the \"BornDate\" field was missing.");
              }
            if (fieldGeneratorDestinationDate.have_value)
              {
                result->setDestinationDate(fieldGeneratorDestinationDate.value.referenced());
                fieldGeneratorDestinationDate.have_value = false;
              }
            else if (!(result->hasDestinationDate()))
              {
                error("When parsing the object for %what%, the \"DestinationDate\" field was missing.");
              }
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
            if (fieldGeneratorNowDate.have_value)
              {
                result->setNowDate(fieldGeneratorNowDate.value.referenced());
                fieldGeneratorNowDate.have_value = false;
              }
            if (fieldGeneratorPerspective.have_value)
              {
                result->setPerspective(fieldGeneratorPerspective.value.referenced());
                fieldGeneratorPerspective.have_value = false;
              }
            if (fieldGeneratorAges.have_value)
              {
                result->initAges();
                size_t count = fieldGeneratorAges.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAges(fieldGeneratorAges.value[num].referenced());
                  }
                fieldGeneratorAges.value.clear();
                fieldGeneratorAges.have_value = false;
              }
            else if (!(result->hasAges()))
              {
                error("When parsing the object for %what%, the \"Ages\" field was missing.");
              }
            CommandResultJSON::Generator::finish(result);
          }
        virtual void handle_result(AgeCalculatorCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "ges") == 0)
                        return &fieldGeneratorAges;
                    break;
                case 'B':
                    if (strcmp(&(field_name[1]), "ornDate") == 0)
                        return &fieldGeneratorBornDate;
                    break;
                case 'D':
                    if (strncmp(&(field_name[1]), "estination", 10) == 0)
                      {
                        switch ((unsigned char)(field_name[11]))
                          {
                            case 'D':
                                if (strcmp(&(field_name[12]), "ate") == 0)
                                    return &fieldGeneratorDestinationDate;
                                break;
                            case 'I':
                                if (strncmp(&(field_name[12]), "s", 1) == 0)
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
                      }
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "owDate") == 0)
                        return &fieldGeneratorNowDate;
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "erspective") == 0)
                        return &fieldGeneratorPerspective;
                    break;
                default:
                    break;
              }
            return CommandResultJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CommandResultJSON::Generator(ignore_extras), fieldGeneratorBornDate("field \"BornDate\" of the AgeCalculatorCommand class", ignore_extras), fieldGeneratorDestinationDate("field \"DestinationDate\" of the AgeCalculatorCommand class", ignore_extras), fieldGeneratorDestinationIsNow("field \"DestinationIsNow\" of the AgeCalculatorCommand class"), fieldGeneratorDestinationIsToday("field \"DestinationIsToday\" of the AgeCalculatorCommand class"), fieldGeneratorNowDate("field \"NowDate\" of the AgeCalculatorCommand class", ignore_extras), fieldGeneratorPerspective("field \"Perspective\" of the AgeCalculatorCommand class", ignore_extras), fieldGeneratorAges("field \"Ages\" of the AgeCalculatorCommand class", ignore_extras)
          {
            set_what("the AgeCalculatorCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorBornDate.reset();
            fieldGeneratorDestinationDate.reset();
            fieldGeneratorDestinationIsNow.reset();
            fieldGeneratorDestinationIsToday.reset();
            fieldGeneratorNowDate.reset();
            fieldGeneratorPerspective.reset();
            fieldGeneratorAges.reset();
            CommandResultJSON::Generator::reset();
          }
      };
  };

#endif /* AGECALCULATORCOMMANDJSON_H */
