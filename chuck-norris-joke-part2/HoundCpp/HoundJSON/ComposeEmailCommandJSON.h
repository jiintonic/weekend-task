/* file "ComposeEmailCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef COMPOSEEMAILCOMMANDJSON_H
#define COMPOSEEMAILCOMMANDJSON_H

#pragma interface

#include "EmailCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "ComposeEmailCommandNativeDataJSON.h"
#include "DynamicResponseJSON.h"
#include "DynamicResponseJSON.h"
#include "DynamicResponseJSON.h"
#include "DynamicResponseJSON.h"
#include "DynamicResponseJSON.h"
#include "DynamicResponseJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class ComposeEmailCommandJSON : public EmailCommandJSON
  {
  private:
    bool flagHasNativeData;
    ComposeEmailCommandNativeDataJSON * storeNativeData;
    bool flagHasNoEmailAppResult;
    DynamicResponseJSON * storeNoEmailAppResult;
    bool flagHasComposeEmailResult;
    DynamicResponseJSON * storeComposeEmailResult;
    bool flagHasDisambiguationEmailResult;
    DynamicResponseJSON * storeDisambiguationEmailResult;
    bool flagHasSendingEmailResult;
    DynamicResponseJSON * storeSendingEmailResult;
    bool flagHasSentEmailResult;
    DynamicResponseJSON * storeSentEmailResult;
    bool flagHasExitEmailResult;
    DynamicResponseJSON * storeExitEmailResult;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    ComposeEmailCommandJSON(const ComposeEmailCommandJSON &);
    ComposeEmailCommandJSON & operator=(const ComposeEmailCommandJSON &other);

    JSONValue * extraNativeDataToJSON(void) const;
    JSONValue * extraNoEmailAppResultToJSON(void) const;
    JSONValue * extraComposeEmailResultToJSON(void) const;
    JSONValue * extraDisambiguationEmailResultToJSON(void) const;
    JSONValue * extraSendingEmailResultToJSON(void) const;
    JSONValue * extraSentEmailResultToJSON(void) const;
    JSONValue * extraExitEmailResultToJSON(void) const;

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNoEmailAppResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONComposeEmailResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDisambiguationEmailResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSendingEmailResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSentEmailResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONExitEmailResult(JSONValue *json_value, bool ignore_extras = false);


  public:
    ComposeEmailCommandJSON(void);
    virtual ~ComposeEmailCommandJSON(void);
    const char * getEmailCommandKind(void) const;
    bool  hasNativeData(void) const;
    ComposeEmailCommandNativeDataJSON *  getNativeData(void);
    const ComposeEmailCommandNativeDataJSON *  getNativeData(void) const;
    bool  hasNoEmailAppResult(void) const;
    DynamicResponseJSON *  getNoEmailAppResult(void);
    const DynamicResponseJSON *  getNoEmailAppResult(void) const;
    bool  hasComposeEmailResult(void) const;
    DynamicResponseJSON *  getComposeEmailResult(void);
    const DynamicResponseJSON *  getComposeEmailResult(void) const;
    bool  hasDisambiguationEmailResult(void) const;
    DynamicResponseJSON *  getDisambiguationEmailResult(void);
    const DynamicResponseJSON *  getDisambiguationEmailResult(void) const;
    bool  hasSendingEmailResult(void) const;
    DynamicResponseJSON *  getSendingEmailResult(void);
    const DynamicResponseJSON *  getSendingEmailResult(void) const;
    bool  hasSentEmailResult(void) const;
    DynamicResponseJSON *  getSentEmailResult(void);
    const DynamicResponseJSON *  getSentEmailResult(void) const;
    bool  hasExitEmailResult(void) const;
    DynamicResponseJSON *  getExitEmailResult(void);
    const DynamicResponseJSON *  getExitEmailResult(void) const;

    virtual size_t extraComposeEmailCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraComposeEmailCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraComposeEmailCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraComposeEmailCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraComposeEmailCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraComposeEmailCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraEmailCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasNativeData)
            ++result;
        if (flagHasNoEmailAppResult)
            ++result;
        if (flagHasComposeEmailResult)
            ++result;
        if (flagHasDisambiguationEmailResult)
            ++result;
        if (flagHasSendingEmailResult)
            ++result;
        if (flagHasSentEmailResult)
            ++result;
        if (flagHasExitEmailResult)
            ++result;
        result += extraComposeEmailCommandComponentCount();
        return result;
      }
    const char *extraEmailCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return "NativeData";
            --remainder;
          }
        if (flagHasNoEmailAppResult)
          {
            if (remainder == 0)
                return "NoEmailAppResult";
            --remainder;
          }
        if (flagHasComposeEmailResult)
          {
            if (remainder == 0)
                return "ComposeEmailResult";
            --remainder;
          }
        if (flagHasDisambiguationEmailResult)
          {
            if (remainder == 0)
                return "DisambiguationEmailResult";
            --remainder;
          }
        if (flagHasSendingEmailResult)
          {
            if (remainder == 0)
                return "SendingEmailResult";
            --remainder;
          }
        if (flagHasSentEmailResult)
          {
            if (remainder == 0)
                return "SentEmailResult";
            --remainder;
          }
        if (flagHasExitEmailResult)
          {
            if (remainder == 0)
                return "ExitEmailResult";
            --remainder;
          }
        return extraComposeEmailCommandComponentKey(remainder);
      }
    JSONValue *extraEmailCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        if (flagHasNoEmailAppResult)
          {
            if (remainder == 0)
                return extraNoEmailAppResultToJSON();
            --remainder;
          }
        if (flagHasComposeEmailResult)
          {
            if (remainder == 0)
                return extraComposeEmailResultToJSON();
            --remainder;
          }
        if (flagHasDisambiguationEmailResult)
          {
            if (remainder == 0)
                return extraDisambiguationEmailResultToJSON();
            --remainder;
          }
        if (flagHasSendingEmailResult)
          {
            if (remainder == 0)
                return extraSendingEmailResultToJSON();
            --remainder;
          }
        if (flagHasSentEmailResult)
          {
            if (remainder == 0)
                return extraSentEmailResultToJSON();
            --remainder;
          }
        if (flagHasExitEmailResult)
          {
            if (remainder == 0)
                return extraExitEmailResultToJSON();
            --remainder;
          }
        return extraComposeEmailCommandComponentValue(remainder);
      }
    const JSONValue *extraEmailCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        if (flagHasNoEmailAppResult)
          {
            if (remainder == 0)
                return extraNoEmailAppResultToJSON();
            --remainder;
          }
        if (flagHasComposeEmailResult)
          {
            if (remainder == 0)
                return extraComposeEmailResultToJSON();
            --remainder;
          }
        if (flagHasDisambiguationEmailResult)
          {
            if (remainder == 0)
                return extraDisambiguationEmailResultToJSON();
            --remainder;
          }
        if (flagHasSendingEmailResult)
          {
            if (remainder == 0)
                return extraSendingEmailResultToJSON();
            --remainder;
          }
        if (flagHasSentEmailResult)
          {
            if (remainder == 0)
                return extraSentEmailResultToJSON();
            --remainder;
          }
        if (flagHasExitEmailResult)
          {
            if (remainder == 0)
                return extraExitEmailResultToJSON();
            --remainder;
          }
        return extraComposeEmailCommandComponentValue(remainder);
      }
    JSONValue *extraEmailCommandLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "omposeEmailResult") == 0)
                    return (flagHasComposeEmailResult ? extraComposeEmailResultToJSON() : NULL);
                break;
            case 'D':
                if (strcmp(&(field_name[1]), "isambiguationEmailResult") == 0)
                    return (flagHasDisambiguationEmailResult ? extraDisambiguationEmailResultToJSON() : NULL);
                break;
            case 'E':
                if (strcmp(&(field_name[1]), "xitEmailResult") == 0)
                    return (flagHasExitEmailResult ? extraExitEmailResultToJSON() : NULL);
                break;
            case 'N':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'a':
                        if (strcmp(&(field_name[2]), "tiveData") == 0)
                            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
                        break;
                    case 'o':
                        if (strcmp(&(field_name[2]), "EmailAppResult") == 0)
                            return (flagHasNoEmailAppResult ? extraNoEmailAppResultToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'S':
                if (strncmp(&(field_name[1]), "en", 2) == 0)
                  {
                    switch ((unsigned char)(field_name[3]))
                      {
                        case 'd':
                            if (strcmp(&(field_name[4]), "ingEmailResult") == 0)
                                return (flagHasSendingEmailResult ? extraSendingEmailResultToJSON() : NULL);
                            break;
                        case 't':
                            if (strcmp(&(field_name[4]), "EmailResult") == 0)
                                return (flagHasSentEmailResult ? extraSentEmailResultToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraComposeEmailCommandLookup(field_name);
      }
    const JSONValue *extraEmailCommandLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "omposeEmailResult") == 0)
                    return (flagHasComposeEmailResult ? extraComposeEmailResultToJSON() : NULL);
                break;
            case 'D':
                if (strcmp(&(field_name[1]), "isambiguationEmailResult") == 0)
                    return (flagHasDisambiguationEmailResult ? extraDisambiguationEmailResultToJSON() : NULL);
                break;
            case 'E':
                if (strcmp(&(field_name[1]), "xitEmailResult") == 0)
                    return (flagHasExitEmailResult ? extraExitEmailResultToJSON() : NULL);
                break;
            case 'N':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'a':
                        if (strcmp(&(field_name[2]), "tiveData") == 0)
                            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
                        break;
                    case 'o':
                        if (strcmp(&(field_name[2]), "EmailAppResult") == 0)
                            return (flagHasNoEmailAppResult ? extraNoEmailAppResultToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'S':
                if (strncmp(&(field_name[1]), "en", 2) == 0)
                  {
                    switch ((unsigned char)(field_name[3]))
                      {
                        case 'd':
                            if (strcmp(&(field_name[4]), "ingEmailResult") == 0)
                                return (flagHasSendingEmailResult ? extraSendingEmailResultToJSON() : NULL);
                            break;
                        case 't':
                            if (strcmp(&(field_name[4]), "EmailResult") == 0)
                                return (flagHasSentEmailResult ? extraSentEmailResultToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraComposeEmailCommandLookup(field_name);
      }

    void setNativeData(ComposeEmailCommandNativeDataJSON * new_value)
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
    void setNoEmailAppResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasNoEmailAppResult)
          {
            storeNoEmailAppResult->remove_reference();
          }
        flagHasNoEmailAppResult = true;
        storeNoEmailAppResult = new_value;
      }
    void unsetNoEmailAppResult(void)
      {
        if (flagHasNoEmailAppResult)
          {
            storeNoEmailAppResult->remove_reference();
          }
        flagHasNoEmailAppResult = false;
      }
    void setComposeEmailResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasComposeEmailResult)
          {
            storeComposeEmailResult->remove_reference();
          }
        flagHasComposeEmailResult = true;
        storeComposeEmailResult = new_value;
      }
    void unsetComposeEmailResult(void)
      {
        if (flagHasComposeEmailResult)
          {
            storeComposeEmailResult->remove_reference();
          }
        flagHasComposeEmailResult = false;
      }
    void setDisambiguationEmailResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDisambiguationEmailResult)
          {
            storeDisambiguationEmailResult->remove_reference();
          }
        flagHasDisambiguationEmailResult = true;
        storeDisambiguationEmailResult = new_value;
      }
    void unsetDisambiguationEmailResult(void)
      {
        if (flagHasDisambiguationEmailResult)
          {
            storeDisambiguationEmailResult->remove_reference();
          }
        flagHasDisambiguationEmailResult = false;
      }
    void setSendingEmailResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSendingEmailResult)
          {
            storeSendingEmailResult->remove_reference();
          }
        flagHasSendingEmailResult = true;
        storeSendingEmailResult = new_value;
      }
    void unsetSendingEmailResult(void)
      {
        if (flagHasSendingEmailResult)
          {
            storeSendingEmailResult->remove_reference();
          }
        flagHasSendingEmailResult = false;
      }
    void setSentEmailResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSentEmailResult)
          {
            storeSentEmailResult->remove_reference();
          }
        flagHasSentEmailResult = true;
        storeSentEmailResult = new_value;
      }
    void unsetSentEmailResult(void)
      {
        if (flagHasSentEmailResult)
          {
            storeSentEmailResult->remove_reference();
          }
        flagHasSentEmailResult = false;
      }
    void setExitEmailResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasExitEmailResult)
          {
            storeExitEmailResult->remove_reference();
          }
        flagHasExitEmailResult = true;
        storeExitEmailResult = new_value;
      }
    void unsetExitEmailResult(void)
      {
        if (flagHasExitEmailResult)
          {
            storeExitEmailResult->remove_reference();
          }
        flagHasExitEmailResult = false;
      }

    virtual void extraComposeEmailCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraComposeEmailCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraComposeEmailCommandLookup(key);
        if (old_field == NULL)
          {
            extraComposeEmailCommandAppendPair(key, new_component);
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
    void extraEmailCommandAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "omposeEmailResult") == 0)
                    {
                    fromJSONComposeEmailResult(new_component, false);
                    return;
                    }
                break;
            case 'D':
                if (strcmp(&(key[1]), "isambiguationEmailResult") == 0)
                    {
                    fromJSONDisambiguationEmailResult(new_component, false);
                    return;
                    }
                break;
            case 'E':
                if (strcmp(&(key[1]), "xitEmailResult") == 0)
                    {
                    fromJSONExitEmailResult(new_component, false);
                    return;
                    }
                break;
            case 'N':
                switch ((unsigned char)(key[1]))
                  {
                    case 'a':
                        if (strcmp(&(key[2]), "tiveData") == 0)
                            {
                            fromJSONNativeData(new_component, false);
                            return;
                            }
                        break;
                    case 'o':
                        if (strcmp(&(key[2]), "EmailAppResult") == 0)
                            {
                            fromJSONNoEmailAppResult(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'S':
                if (strncmp(&(key[1]), "en", 2) == 0)
                  {
                    switch ((unsigned char)(key[3]))
                      {
                        case 'd':
                            if (strcmp(&(key[4]), "ingEmailResult") == 0)
                                {
                                fromJSONSendingEmailResult(new_component, false);
                                return;
                                }
                            break;
                        case 't':
                            if (strcmp(&(key[4]), "EmailResult") == 0)
                                {
                                fromJSONSentEmailResult(new_component, false);
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
        extraComposeEmailCommandAppendPair(key, new_component);
      }
    void extraEmailCommandSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "omposeEmailResult") == 0)
                    {
                    fromJSONComposeEmailResult(new_component, false);
                    return;
                    }
                break;
            case 'D':
                if (strcmp(&(key[1]), "isambiguationEmailResult") == 0)
                    {
                    fromJSONDisambiguationEmailResult(new_component, false);
                    return;
                    }
                break;
            case 'E':
                if (strcmp(&(key[1]), "xitEmailResult") == 0)
                    {
                    fromJSONExitEmailResult(new_component, false);
                    return;
                    }
                break;
            case 'N':
                switch ((unsigned char)(key[1]))
                  {
                    case 'a':
                        if (strcmp(&(key[2]), "tiveData") == 0)
                            {
                            fromJSONNativeData(new_component, false);
                            return;
                            }
                        break;
                    case 'o':
                        if (strcmp(&(key[2]), "EmailAppResult") == 0)
                            {
                            fromJSONNoEmailAppResult(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'S':
                if (strncmp(&(key[1]), "en", 2) == 0)
                  {
                    switch ((unsigned char)(key[3]))
                      {
                        case 'd':
                            if (strcmp(&(key[4]), "ingEmailResult") == 0)
                                {
                                fromJSONSendingEmailResult(new_component, false);
                                return;
                                }
                            break;
                        case 't':
                            if (strcmp(&(key[4]), "EmailResult") == 0)
                                {
                                fromJSONSentEmailResult(new_component, false);
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
        extraComposeEmailCommandSetField(key, new_component);
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
        EmailCommandJSON::write_fields_as_json(handler);
        assert(flagHasNativeData);
        handler->start_pair("NativeData");
        storeNativeData->write_as_json(handler);
        if (flagHasNoEmailAppResult)
          {
            handler->start_pair("NoEmailAppResult");
            storeNoEmailAppResult->write_as_json(handler);
          }
        if (flagHasComposeEmailResult)
          {
            handler->start_pair("ComposeEmailResult");
            storeComposeEmailResult->write_as_json(handler);
          }
        if (flagHasDisambiguationEmailResult)
          {
            handler->start_pair("DisambiguationEmailResult");
            storeDisambiguationEmailResult->write_as_json(handler);
          }
        if (flagHasSendingEmailResult)
          {
            handler->start_pair("SendingEmailResult");
            storeSendingEmailResult->write_as_json(handler);
          }
        if (flagHasSentEmailResult)
          {
            handler->start_pair("SentEmailResult");
            storeSentEmailResult->write_as_json(handler);
          }
        if (flagHasExitEmailResult)
          {
            handler->start_pair("ExitEmailResult");
            storeExitEmailResult->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasNativeData()))
          {
            return "When parsing the object for %what%, the \"NativeData\" field was missing.";
          }
        return NULL;
      }

    static ComposeEmailCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ComposeEmailCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ComposeEmailCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ComposeEmailCommandJSON>, ComposeEmailCommandJSON *, bool> generator("Type ComposeEmailCommand", ignore_extras);
            parse_json_value(text, "Text for ComposeEmailCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ComposeEmailCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ComposeEmailCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ComposeEmailCommandJSON>, ComposeEmailCommandJSON *, bool> generator("Type ComposeEmailCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public EmailCommandJSON::Generator
      {
      private:
        JSONHoldingGenerator<ComposeEmailCommandNativeDataJSON::Generator, RCHandle<ComposeEmailCommandNativeDataJSON>, ComposeEmailCommandNativeDataJSON *, bool > fieldGeneratorNativeData;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorNoEmailAppResult;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorComposeEmailResult;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorDisambiguationEmailResult;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorSendingEmailResult;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorSentEmailResult;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorExitEmailResult;
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
            if (!(strcmp(getEmailCommandJSONKey().c_str(), "ComposeEmailCommand") == 0))
                throw("The key field has a value other than `ComposeEmailCommand'.");
            ComposeEmailCommandJSON *result = new ComposeEmailCommandJSON();
            assert(result != NULL);
            RCHandle<ComposeEmailCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraComposeEmailCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(EmailCommandJSON *new_result)
          {
            handle_result((ComposeEmailCommandJSON *)new_result);
          }
        void finish(ComposeEmailCommandJSON *result)
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
            if (fieldGeneratorNoEmailAppResult.have_value)
              {
                result->setNoEmailAppResult(fieldGeneratorNoEmailAppResult.value.referenced());
                fieldGeneratorNoEmailAppResult.have_value = false;
              }
            if (fieldGeneratorComposeEmailResult.have_value)
              {
                result->setComposeEmailResult(fieldGeneratorComposeEmailResult.value.referenced());
                fieldGeneratorComposeEmailResult.have_value = false;
              }
            if (fieldGeneratorDisambiguationEmailResult.have_value)
              {
                result->setDisambiguationEmailResult(fieldGeneratorDisambiguationEmailResult.value.referenced());
                fieldGeneratorDisambiguationEmailResult.have_value = false;
              }
            if (fieldGeneratorSendingEmailResult.have_value)
              {
                result->setSendingEmailResult(fieldGeneratorSendingEmailResult.value.referenced());
                fieldGeneratorSendingEmailResult.have_value = false;
              }
            if (fieldGeneratorSentEmailResult.have_value)
              {
                result->setSentEmailResult(fieldGeneratorSentEmailResult.value.referenced());
                fieldGeneratorSentEmailResult.have_value = false;
              }
            if (fieldGeneratorExitEmailResult.have_value)
              {
                result->setExitEmailResult(fieldGeneratorExitEmailResult.value.referenced());
                fieldGeneratorExitEmailResult.have_value = false;
              }
            EmailCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(ComposeEmailCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "omposeEmailResult") == 0)
                        return &fieldGeneratorComposeEmailResult;
                    break;
                case 'D':
                    if (strcmp(&(field_name[1]), "isambiguationEmailResult") == 0)
                        return &fieldGeneratorDisambiguationEmailResult;
                    break;
                case 'E':
                    if (strcmp(&(field_name[1]), "xitEmailResult") == 0)
                        return &fieldGeneratorExitEmailResult;
                    break;
                case 'N':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "tiveData") == 0)
                                return &fieldGeneratorNativeData;
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "EmailAppResult") == 0)
                                return &fieldGeneratorNoEmailAppResult;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'S':
                    if (strncmp(&(field_name[1]), "en", 2) == 0)
                      {
                        switch ((unsigned char)(field_name[3]))
                          {
                            case 'd':
                                if (strcmp(&(field_name[4]), "ingEmailResult") == 0)
                                    return &fieldGeneratorSendingEmailResult;
                                break;
                            case 't':
                                if (strcmp(&(field_name[4]), "EmailResult") == 0)
                                    return &fieldGeneratorSentEmailResult;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return EmailCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : EmailCommandJSON::Generator(ignore_extras), fieldGeneratorNativeData("field \"NativeData\" of the ComposeEmailCommand class", ignore_extras), fieldGeneratorNoEmailAppResult("field \"NoEmailAppResult\" of the ComposeEmailCommand class", ignore_extras), fieldGeneratorComposeEmailResult("field \"ComposeEmailResult\" of the ComposeEmailCommand class", ignore_extras), fieldGeneratorDisambiguationEmailResult("field \"DisambiguationEmailResult\" of the ComposeEmailCommand class", ignore_extras), fieldGeneratorSendingEmailResult("field \"SendingEmailResult\" of the ComposeEmailCommand class", ignore_extras), fieldGeneratorSentEmailResult("field \"SentEmailResult\" of the ComposeEmailCommand class", ignore_extras), fieldGeneratorExitEmailResult("field \"ExitEmailResult\" of the ComposeEmailCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the ComposeEmailCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNativeData.reset();
            fieldGeneratorNoEmailAppResult.reset();
            fieldGeneratorComposeEmailResult.reset();
            fieldGeneratorDisambiguationEmailResult.reset();
            fieldGeneratorSendingEmailResult.reset();
            fieldGeneratorSentEmailResult.reset();
            fieldGeneratorExitEmailResult.reset();
            EmailCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* COMPOSEEMAILCOMMANDJSON_H */
