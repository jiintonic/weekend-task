/* file "AgeCalculatorStartCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef AGECALCULATORSTARTCOMMANDJSON_H
#define AGECALCULATORSTARTCOMMANDJSON_H

#pragma interface

#include "CommandResultJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
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


class AgeCalculatorStartCommandJSON : public CommandResultJSON
  {
  public:
    enum TypeMode
      {
        Mode_AgeCalculatorStart
      };

    static TypeMode  stringToMode(const char *chars);
    static const char * stringFromMode(TypeMode the_enum);

  private:
    bool flagHasMode;
    bool flagHasUnderstood;
    bool storeUnderstood;
    bool flagHasInvalidBornDateWasGiven;
    bool storeInvalidBornDateWasGiven;
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

    AgeCalculatorStartCommandJSON(const AgeCalculatorStartCommandJSON &);
    AgeCalculatorStartCommandJSON & operator=(const AgeCalculatorStartCommandJSON &other);

    JSONValue * extraModeToJSON(void) const;
    JSONValue * extraUnderstoodToJSON(void) const;
    JSONValue * extraInvalidBornDateWasGivenToJSON(void) const;
    JSONValue * extraDestinationDateToJSON(void) const;
    JSONValue * extraDestinationIsNowToJSON(void) const;
    JSONValue * extraDestinationIsTodayToJSON(void) const;
    JSONValue * extraNowDateToJSON(void) const;
    JSONValue * extraPerspectiveToJSON(void) const;

    void  fromJSONMode(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUnderstood(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONInvalidBornDateWasGiven(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDestinationDate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDestinationIsNow(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDestinationIsToday(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNowDate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPerspective(JSONValue *json_value, bool ignore_extras = false);


  public:
    AgeCalculatorStartCommandJSON(void);
    virtual ~AgeCalculatorStartCommandJSON(void);
    const char * getCommandKind(void) const;
    bool  hasMode(void) const;
    TypeMode  getMode(void);
    const TypeMode  getMode(void) const;
    const char * getModeAsChars(void) const;
    std::string  getModeAsString(void) const;
    bool  hasUnderstood(void) const;
    bool  getUnderstood(void);
    const bool  getUnderstood(void) const;
    bool  hasInvalidBornDateWasGiven(void) const;
    bool  getInvalidBornDateWasGiven(void);
    const bool  getInvalidBornDateWasGiven(void) const;
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

    size_t extraCommandResultComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasMode)
            ++result;
        if (flagHasUnderstood)
            ++result;
        if (flagHasInvalidBornDateWasGiven)
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
        return result;
      }
    const char *extraCommandResultComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasMode)
          {
            if (remainder == 0)
                return "Mode";
            --remainder;
          }
        if (flagHasUnderstood)
          {
            if (remainder == 0)
                return "Understood";
            --remainder;
          }
        if (flagHasInvalidBornDateWasGiven)
          {
            if (remainder == 0)
                return "InvalidBornDateWasGiven";
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
        assert(false);
        return NULL;
      }
    JSONValue *extraCommandResultComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasMode)
          {
            if (remainder == 0)
                return extraModeToJSON();
            --remainder;
          }
        if (flagHasUnderstood)
          {
            if (remainder == 0)
                return extraUnderstoodToJSON();
            --remainder;
          }
        if (flagHasInvalidBornDateWasGiven)
          {
            if (remainder == 0)
                return extraInvalidBornDateWasGivenToJSON();
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
        assert(false);
        return NULL;
      }
    const JSONValue *extraCommandResultComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasMode)
          {
            if (remainder == 0)
                return extraModeToJSON();
            --remainder;
          }
        if (flagHasUnderstood)
          {
            if (remainder == 0)
                return extraUnderstoodToJSON();
            --remainder;
          }
        if (flagHasInvalidBornDateWasGiven)
          {
            if (remainder == 0)
                return extraInvalidBornDateWasGivenToJSON();
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
        assert(false);
        return NULL;
      }
    JSONValue *extraCommandResultLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
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
            case 'I':
                if (strcmp(&(field_name[1]), "nvalidBornDateWasGiven") == 0)
                    return (flagHasInvalidBornDateWasGiven ? extraInvalidBornDateWasGivenToJSON() : NULL);
                break;
            case 'M':
                if (strcmp(&(field_name[1]), "ode") == 0)
                    return (flagHasMode ? extraModeToJSON() : NULL);
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "owDate") == 0)
                    return (flagHasNowDate ? extraNowDateToJSON() : NULL);
                break;
            case 'P':
                if (strcmp(&(field_name[1]), "erspective") == 0)
                    return (flagHasPerspective ? extraPerspectiveToJSON() : NULL);
                break;
            case 'U':
                if (strcmp(&(field_name[1]), "nderstood") == 0)
                    return (flagHasUnderstood ? extraUnderstoodToJSON() : NULL);
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
            case 'I':
                if (strcmp(&(field_name[1]), "nvalidBornDateWasGiven") == 0)
                    return (flagHasInvalidBornDateWasGiven ? extraInvalidBornDateWasGivenToJSON() : NULL);
                break;
            case 'M':
                if (strcmp(&(field_name[1]), "ode") == 0)
                    return (flagHasMode ? extraModeToJSON() : NULL);
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "owDate") == 0)
                    return (flagHasNowDate ? extraNowDateToJSON() : NULL);
                break;
            case 'P':
                if (strcmp(&(field_name[1]), "erspective") == 0)
                    return (flagHasPerspective ? extraPerspectiveToJSON() : NULL);
                break;
            case 'U':
                if (strcmp(&(field_name[1]), "nderstood") == 0)
                    return (flagHasUnderstood ? extraUnderstoodToJSON() : NULL);
                break;
            default:
                break;
          }
        return NULL;
      }

    void setMode(void)
      {
        flagHasMode = true;
      }
    void setMode(TypeMode new_value)
      {
        setMode();
      }
    void setMode(const char *chars)
      {
        setMode(stringToMode(chars));
      }
    void setMode(std::string the_string)
      {
        setMode(stringToMode(the_string.c_str()));
      }
    void unsetMode(void)
      {
        flagHasMode = false;
      }
    void setUnderstood(bool new_value)
      {
        flagHasUnderstood = true;
        storeUnderstood = new_value;
      }
    void unsetUnderstood(void)
      {
        flagHasUnderstood = false;
      }
    void setInvalidBornDateWasGiven(bool new_value)
      {
        flagHasInvalidBornDateWasGiven = true;
        storeInvalidBornDateWasGiven = new_value;
      }
    void unsetInvalidBornDateWasGiven(void)
      {
        flagHasInvalidBornDateWasGiven = false;
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

    void extraCommandResultAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
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
            case 'I':
                if (strcmp(&(key[1]), "nvalidBornDateWasGiven") == 0)
                    {
                    fromJSONInvalidBornDateWasGiven(new_component, false);
                    return;
                    }
                break;
            case 'M':
                if (strcmp(&(key[1]), "ode") == 0)
                    {
                    fromJSONMode(new_component, false);
                    return;
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
            case 'U':
                if (strcmp(&(key[1]), "nderstood") == 0)
                    {
                    fromJSONUnderstood(new_component, false);
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
            case 'I':
                if (strcmp(&(key[1]), "nvalidBornDateWasGiven") == 0)
                    {
                    fromJSONInvalidBornDateWasGiven(new_component, false);
                    return;
                    }
                break;
            case 'M':
                if (strcmp(&(key[1]), "ode") == 0)
                    {
                    fromJSONMode(new_component, false);
                    return;
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
            case 'U':
                if (strcmp(&(key[1]), "nderstood") == 0)
                    {
                    fromJSONUnderstood(new_component, false);
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
        if (flagHasMode)
          {
            handler->start_pair("Mode");
            handler->string_value("AgeCalculatorStart");
          }
        if (flagHasUnderstood)
          {
            handler->start_pair("Understood");
            handler->boolean_value(storeUnderstood);
          }
        if (flagHasInvalidBornDateWasGiven)
          {
            handler->start_pair("InvalidBornDateWasGiven");
            handler->boolean_value(storeInvalidBornDateWasGiven);
          }
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
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasDestinationDate()))
          {
            return "When parsing the object for %what%, the \"DestinationDate\" field was missing.";
          }
        return NULL;
      }

    static AgeCalculatorStartCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static AgeCalculatorStartCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        AgeCalculatorStartCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AgeCalculatorStartCommandJSON>, AgeCalculatorStartCommandJSON *, bool> generator("Type AgeCalculatorStartCommand", ignore_extras);
            parse_json_value(text, "Text for AgeCalculatorStartCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static AgeCalculatorStartCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        AgeCalculatorStartCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AgeCalculatorStartCommandJSON>, AgeCalculatorStartCommandJSON *, bool> generator("Type AgeCalculatorStartCommand", ignore_extras);
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
    class FieldGeneratorMode : public JSONStringGenerator
          {
          protected:
            FieldGeneratorMode(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorMode(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToMode(result));
              }
            virtual void handle_result(TypeMode result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorMode, TypeMode, TypeMode > fieldGeneratorMode;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorUnderstood;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorInvalidBornDateWasGiven;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorDestinationDate;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorDestinationIsNow;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorDestinationIsToday;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorNowDate;
        JSONHoldingGenerator<AgeCalculatorPerspectiveJSON::Generator, RCHandle<AgeCalculatorPerspectiveJSON>, AgeCalculatorPerspectiveJSON *, bool > fieldGeneratorPerspective;


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
            if (!(strcmp(getCommandResultJSONKey().c_str(), "AgeCalculatorStartCommand") == 0))
                throw("The key field has a value other than `AgeCalculatorStartCommand'.");
            AgeCalculatorStartCommandJSON *result = new AgeCalculatorStartCommandJSON();
            assert(result != NULL);
            RCHandle<AgeCalculatorStartCommandJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void handle_result(CommandResultJSON *new_result)
          {
            handle_result((AgeCalculatorStartCommandJSON *)new_result);
          }
        void finish(AgeCalculatorStartCommandJSON *result)
          {
            if (fieldGeneratorMode.have_value)
              {
                result->setMode();
                fieldGeneratorMode.have_value = false;
              }
            if (fieldGeneratorUnderstood.have_value)
              {
                result->setUnderstood(fieldGeneratorUnderstood.value);
                fieldGeneratorUnderstood.have_value = false;
              }
            if (fieldGeneratorInvalidBornDateWasGiven.have_value)
              {
                result->setInvalidBornDateWasGiven(fieldGeneratorInvalidBornDateWasGiven.value);
                fieldGeneratorInvalidBornDateWasGiven.have_value = false;
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
            CommandResultJSON::Generator::finish(result);
          }
        virtual void handle_result(AgeCalculatorStartCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
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
                case 'I':
                    if (strcmp(&(field_name[1]), "nvalidBornDateWasGiven") == 0)
                        return &fieldGeneratorInvalidBornDateWasGiven;
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "ode") == 0)
                        return &fieldGeneratorMode;
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "owDate") == 0)
                        return &fieldGeneratorNowDate;
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "erspective") == 0)
                        return &fieldGeneratorPerspective;
                    break;
                case 'U':
                    if (strcmp(&(field_name[1]), "nderstood") == 0)
                        return &fieldGeneratorUnderstood;
                    break;
                default:
                    break;
              }
            return CommandResultJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CommandResultJSON::Generator(ignore_extras), fieldGeneratorMode("field \"Mode\" of the AgeCalculatorStartCommand class"), fieldGeneratorUnderstood("field \"Understood\" of the AgeCalculatorStartCommand class"), fieldGeneratorInvalidBornDateWasGiven("field \"InvalidBornDateWasGiven\" of the AgeCalculatorStartCommand class"), fieldGeneratorDestinationDate("field \"DestinationDate\" of the AgeCalculatorStartCommand class", ignore_extras), fieldGeneratorDestinationIsNow("field \"DestinationIsNow\" of the AgeCalculatorStartCommand class"), fieldGeneratorDestinationIsToday("field \"DestinationIsToday\" of the AgeCalculatorStartCommand class"), fieldGeneratorNowDate("field \"NowDate\" of the AgeCalculatorStartCommand class", ignore_extras), fieldGeneratorPerspective("field \"Perspective\" of the AgeCalculatorStartCommand class", ignore_extras)
          {
            set_what("the AgeCalculatorStartCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorMode.reset();
            fieldGeneratorUnderstood.reset();
            fieldGeneratorInvalidBornDateWasGiven.reset();
            fieldGeneratorDestinationDate.reset();
            fieldGeneratorDestinationIsNow.reset();
            fieldGeneratorDestinationIsToday.reset();
            fieldGeneratorNowDate.reset();
            fieldGeneratorPerspective.reset();
            CommandResultJSON::Generator::reset();
          }
      };
  };

#endif /* AGECALCULATORSTARTCOMMANDJSON_H */
