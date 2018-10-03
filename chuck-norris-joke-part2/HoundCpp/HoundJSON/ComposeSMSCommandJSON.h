/* file "ComposeSMSCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef COMPOSESMSCOMMANDJSON_H
#define COMPOSESMSCOMMANDJSON_H

#pragma interface

#include "SMSCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "ComposeSMSCommandNativeDataJSON.h"
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


class ComposeSMSCommandJSON : public SMSCommandJSON
  {
  private:
    bool flagHasNativeData;
    ComposeSMSCommandNativeDataJSON * storeNativeData;
    bool flagHasNoSMSAppResult;
    DynamicResponseJSON * storeNoSMSAppResult;
    bool flagHasComposeSMSResult;
    DynamicResponseJSON * storeComposeSMSResult;
    bool flagHasDisambiguationSMSResult;
    DynamicResponseJSON * storeDisambiguationSMSResult;
    bool flagHasSendingSMSResult;
    DynamicResponseJSON * storeSendingSMSResult;
    bool flagHasSentSMSResult;
    DynamicResponseJSON * storeSentSMSResult;
    bool flagHasExitSMSResult;
    DynamicResponseJSON * storeExitSMSResult;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    ComposeSMSCommandJSON(const ComposeSMSCommandJSON &);
    ComposeSMSCommandJSON & operator=(const ComposeSMSCommandJSON &other);

    JSONValue * extraNativeDataToJSON(void) const;
    JSONValue * extraNoSMSAppResultToJSON(void) const;
    JSONValue * extraComposeSMSResultToJSON(void) const;
    JSONValue * extraDisambiguationSMSResultToJSON(void) const;
    JSONValue * extraSendingSMSResultToJSON(void) const;
    JSONValue * extraSentSMSResultToJSON(void) const;
    JSONValue * extraExitSMSResultToJSON(void) const;

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNoSMSAppResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONComposeSMSResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDisambiguationSMSResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSendingSMSResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSentSMSResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONExitSMSResult(JSONValue *json_value, bool ignore_extras = false);


  public:
    ComposeSMSCommandJSON(void);
    virtual ~ComposeSMSCommandJSON(void);
    const char * getSMSCommandKind(void) const;
    bool  hasNativeData(void) const;
    ComposeSMSCommandNativeDataJSON *  getNativeData(void);
    const ComposeSMSCommandNativeDataJSON *  getNativeData(void) const;
    bool  hasNoSMSAppResult(void) const;
    DynamicResponseJSON *  getNoSMSAppResult(void);
    const DynamicResponseJSON *  getNoSMSAppResult(void) const;
    bool  hasComposeSMSResult(void) const;
    DynamicResponseJSON *  getComposeSMSResult(void);
    const DynamicResponseJSON *  getComposeSMSResult(void) const;
    bool  hasDisambiguationSMSResult(void) const;
    DynamicResponseJSON *  getDisambiguationSMSResult(void);
    const DynamicResponseJSON *  getDisambiguationSMSResult(void) const;
    bool  hasSendingSMSResult(void) const;
    DynamicResponseJSON *  getSendingSMSResult(void);
    const DynamicResponseJSON *  getSendingSMSResult(void) const;
    bool  hasSentSMSResult(void) const;
    DynamicResponseJSON *  getSentSMSResult(void);
    const DynamicResponseJSON *  getSentSMSResult(void) const;
    bool  hasExitSMSResult(void) const;
    DynamicResponseJSON *  getExitSMSResult(void);
    const DynamicResponseJSON *  getExitSMSResult(void) const;

    virtual size_t extraComposeSMSCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraComposeSMSCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraComposeSMSCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraComposeSMSCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraComposeSMSCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraComposeSMSCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraSMSCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasNativeData)
            ++result;
        if (flagHasNoSMSAppResult)
            ++result;
        if (flagHasComposeSMSResult)
            ++result;
        if (flagHasDisambiguationSMSResult)
            ++result;
        if (flagHasSendingSMSResult)
            ++result;
        if (flagHasSentSMSResult)
            ++result;
        if (flagHasExitSMSResult)
            ++result;
        result += extraComposeSMSCommandComponentCount();
        return result;
      }
    const char *extraSMSCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return "NativeData";
            --remainder;
          }
        if (flagHasNoSMSAppResult)
          {
            if (remainder == 0)
                return "NoSMSAppResult";
            --remainder;
          }
        if (flagHasComposeSMSResult)
          {
            if (remainder == 0)
                return "ComposeSMSResult";
            --remainder;
          }
        if (flagHasDisambiguationSMSResult)
          {
            if (remainder == 0)
                return "DisambiguationSMSResult";
            --remainder;
          }
        if (flagHasSendingSMSResult)
          {
            if (remainder == 0)
                return "SendingSMSResult";
            --remainder;
          }
        if (flagHasSentSMSResult)
          {
            if (remainder == 0)
                return "SentSMSResult";
            --remainder;
          }
        if (flagHasExitSMSResult)
          {
            if (remainder == 0)
                return "ExitSMSResult";
            --remainder;
          }
        return extraComposeSMSCommandComponentKey(remainder);
      }
    JSONValue *extraSMSCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        if (flagHasNoSMSAppResult)
          {
            if (remainder == 0)
                return extraNoSMSAppResultToJSON();
            --remainder;
          }
        if (flagHasComposeSMSResult)
          {
            if (remainder == 0)
                return extraComposeSMSResultToJSON();
            --remainder;
          }
        if (flagHasDisambiguationSMSResult)
          {
            if (remainder == 0)
                return extraDisambiguationSMSResultToJSON();
            --remainder;
          }
        if (flagHasSendingSMSResult)
          {
            if (remainder == 0)
                return extraSendingSMSResultToJSON();
            --remainder;
          }
        if (flagHasSentSMSResult)
          {
            if (remainder == 0)
                return extraSentSMSResultToJSON();
            --remainder;
          }
        if (flagHasExitSMSResult)
          {
            if (remainder == 0)
                return extraExitSMSResultToJSON();
            --remainder;
          }
        return extraComposeSMSCommandComponentValue(remainder);
      }
    const JSONValue *extraSMSCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        if (flagHasNoSMSAppResult)
          {
            if (remainder == 0)
                return extraNoSMSAppResultToJSON();
            --remainder;
          }
        if (flagHasComposeSMSResult)
          {
            if (remainder == 0)
                return extraComposeSMSResultToJSON();
            --remainder;
          }
        if (flagHasDisambiguationSMSResult)
          {
            if (remainder == 0)
                return extraDisambiguationSMSResultToJSON();
            --remainder;
          }
        if (flagHasSendingSMSResult)
          {
            if (remainder == 0)
                return extraSendingSMSResultToJSON();
            --remainder;
          }
        if (flagHasSentSMSResult)
          {
            if (remainder == 0)
                return extraSentSMSResultToJSON();
            --remainder;
          }
        if (flagHasExitSMSResult)
          {
            if (remainder == 0)
                return extraExitSMSResultToJSON();
            --remainder;
          }
        return extraComposeSMSCommandComponentValue(remainder);
      }
    JSONValue *extraSMSCommandLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "omposeSMSResult") == 0)
                    return (flagHasComposeSMSResult ? extraComposeSMSResultToJSON() : NULL);
                break;
            case 'D':
                if (strcmp(&(field_name[1]), "isambiguationSMSResult") == 0)
                    return (flagHasDisambiguationSMSResult ? extraDisambiguationSMSResultToJSON() : NULL);
                break;
            case 'E':
                if (strcmp(&(field_name[1]), "xitSMSResult") == 0)
                    return (flagHasExitSMSResult ? extraExitSMSResultToJSON() : NULL);
                break;
            case 'N':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'a':
                        if (strcmp(&(field_name[2]), "tiveData") == 0)
                            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
                        break;
                    case 'o':
                        if (strcmp(&(field_name[2]), "SMSAppResult") == 0)
                            return (flagHasNoSMSAppResult ? extraNoSMSAppResultToJSON() : NULL);
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
                            if (strcmp(&(field_name[4]), "ingSMSResult") == 0)
                                return (flagHasSendingSMSResult ? extraSendingSMSResultToJSON() : NULL);
                            break;
                        case 't':
                            if (strcmp(&(field_name[4]), "SMSResult") == 0)
                                return (flagHasSentSMSResult ? extraSentSMSResultToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraComposeSMSCommandLookup(field_name);
      }
    const JSONValue *extraSMSCommandLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "omposeSMSResult") == 0)
                    return (flagHasComposeSMSResult ? extraComposeSMSResultToJSON() : NULL);
                break;
            case 'D':
                if (strcmp(&(field_name[1]), "isambiguationSMSResult") == 0)
                    return (flagHasDisambiguationSMSResult ? extraDisambiguationSMSResultToJSON() : NULL);
                break;
            case 'E':
                if (strcmp(&(field_name[1]), "xitSMSResult") == 0)
                    return (flagHasExitSMSResult ? extraExitSMSResultToJSON() : NULL);
                break;
            case 'N':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'a':
                        if (strcmp(&(field_name[2]), "tiveData") == 0)
                            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
                        break;
                    case 'o':
                        if (strcmp(&(field_name[2]), "SMSAppResult") == 0)
                            return (flagHasNoSMSAppResult ? extraNoSMSAppResultToJSON() : NULL);
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
                            if (strcmp(&(field_name[4]), "ingSMSResult") == 0)
                                return (flagHasSendingSMSResult ? extraSendingSMSResultToJSON() : NULL);
                            break;
                        case 't':
                            if (strcmp(&(field_name[4]), "SMSResult") == 0)
                                return (flagHasSentSMSResult ? extraSentSMSResultToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraComposeSMSCommandLookup(field_name);
      }

    void setNativeData(ComposeSMSCommandNativeDataJSON * new_value)
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
    void setNoSMSAppResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasNoSMSAppResult)
          {
            storeNoSMSAppResult->remove_reference();
          }
        flagHasNoSMSAppResult = true;
        storeNoSMSAppResult = new_value;
      }
    void unsetNoSMSAppResult(void)
      {
        if (flagHasNoSMSAppResult)
          {
            storeNoSMSAppResult->remove_reference();
          }
        flagHasNoSMSAppResult = false;
      }
    void setComposeSMSResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasComposeSMSResult)
          {
            storeComposeSMSResult->remove_reference();
          }
        flagHasComposeSMSResult = true;
        storeComposeSMSResult = new_value;
      }
    void unsetComposeSMSResult(void)
      {
        if (flagHasComposeSMSResult)
          {
            storeComposeSMSResult->remove_reference();
          }
        flagHasComposeSMSResult = false;
      }
    void setDisambiguationSMSResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDisambiguationSMSResult)
          {
            storeDisambiguationSMSResult->remove_reference();
          }
        flagHasDisambiguationSMSResult = true;
        storeDisambiguationSMSResult = new_value;
      }
    void unsetDisambiguationSMSResult(void)
      {
        if (flagHasDisambiguationSMSResult)
          {
            storeDisambiguationSMSResult->remove_reference();
          }
        flagHasDisambiguationSMSResult = false;
      }
    void setSendingSMSResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSendingSMSResult)
          {
            storeSendingSMSResult->remove_reference();
          }
        flagHasSendingSMSResult = true;
        storeSendingSMSResult = new_value;
      }
    void unsetSendingSMSResult(void)
      {
        if (flagHasSendingSMSResult)
          {
            storeSendingSMSResult->remove_reference();
          }
        flagHasSendingSMSResult = false;
      }
    void setSentSMSResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSentSMSResult)
          {
            storeSentSMSResult->remove_reference();
          }
        flagHasSentSMSResult = true;
        storeSentSMSResult = new_value;
      }
    void unsetSentSMSResult(void)
      {
        if (flagHasSentSMSResult)
          {
            storeSentSMSResult->remove_reference();
          }
        flagHasSentSMSResult = false;
      }
    void setExitSMSResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasExitSMSResult)
          {
            storeExitSMSResult->remove_reference();
          }
        flagHasExitSMSResult = true;
        storeExitSMSResult = new_value;
      }
    void unsetExitSMSResult(void)
      {
        if (flagHasExitSMSResult)
          {
            storeExitSMSResult->remove_reference();
          }
        flagHasExitSMSResult = false;
      }

    virtual void extraComposeSMSCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraComposeSMSCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraComposeSMSCommandLookup(key);
        if (old_field == NULL)
          {
            extraComposeSMSCommandAppendPair(key, new_component);
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
    void extraSMSCommandAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "omposeSMSResult") == 0)
                    {
                    fromJSONComposeSMSResult(new_component, false);
                    return;
                    }
                break;
            case 'D':
                if (strcmp(&(key[1]), "isambiguationSMSResult") == 0)
                    {
                    fromJSONDisambiguationSMSResult(new_component, false);
                    return;
                    }
                break;
            case 'E':
                if (strcmp(&(key[1]), "xitSMSResult") == 0)
                    {
                    fromJSONExitSMSResult(new_component, false);
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
                        if (strcmp(&(key[2]), "SMSAppResult") == 0)
                            {
                            fromJSONNoSMSAppResult(new_component, false);
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
                            if (strcmp(&(key[4]), "ingSMSResult") == 0)
                                {
                                fromJSONSendingSMSResult(new_component, false);
                                return;
                                }
                            break;
                        case 't':
                            if (strcmp(&(key[4]), "SMSResult") == 0)
                                {
                                fromJSONSentSMSResult(new_component, false);
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
        extraComposeSMSCommandAppendPair(key, new_component);
      }
    void extraSMSCommandSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "omposeSMSResult") == 0)
                    {
                    fromJSONComposeSMSResult(new_component, false);
                    return;
                    }
                break;
            case 'D':
                if (strcmp(&(key[1]), "isambiguationSMSResult") == 0)
                    {
                    fromJSONDisambiguationSMSResult(new_component, false);
                    return;
                    }
                break;
            case 'E':
                if (strcmp(&(key[1]), "xitSMSResult") == 0)
                    {
                    fromJSONExitSMSResult(new_component, false);
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
                        if (strcmp(&(key[2]), "SMSAppResult") == 0)
                            {
                            fromJSONNoSMSAppResult(new_component, false);
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
                            if (strcmp(&(key[4]), "ingSMSResult") == 0)
                                {
                                fromJSONSendingSMSResult(new_component, false);
                                return;
                                }
                            break;
                        case 't':
                            if (strcmp(&(key[4]), "SMSResult") == 0)
                                {
                                fromJSONSentSMSResult(new_component, false);
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
        extraComposeSMSCommandSetField(key, new_component);
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
        SMSCommandJSON::write_fields_as_json(handler);
        assert(flagHasNativeData);
        handler->start_pair("NativeData");
        storeNativeData->write_as_json(handler);
        if (flagHasNoSMSAppResult)
          {
            handler->start_pair("NoSMSAppResult");
            storeNoSMSAppResult->write_as_json(handler);
          }
        if (flagHasComposeSMSResult)
          {
            handler->start_pair("ComposeSMSResult");
            storeComposeSMSResult->write_as_json(handler);
          }
        if (flagHasDisambiguationSMSResult)
          {
            handler->start_pair("DisambiguationSMSResult");
            storeDisambiguationSMSResult->write_as_json(handler);
          }
        if (flagHasSendingSMSResult)
          {
            handler->start_pair("SendingSMSResult");
            storeSendingSMSResult->write_as_json(handler);
          }
        if (flagHasSentSMSResult)
          {
            handler->start_pair("SentSMSResult");
            storeSentSMSResult->write_as_json(handler);
          }
        if (flagHasExitSMSResult)
          {
            handler->start_pair("ExitSMSResult");
            storeExitSMSResult->write_as_json(handler);
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

    static ComposeSMSCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ComposeSMSCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ComposeSMSCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ComposeSMSCommandJSON>, ComposeSMSCommandJSON *, bool> generator("Type ComposeSMSCommand", ignore_extras);
            parse_json_value(text, "Text for ComposeSMSCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ComposeSMSCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ComposeSMSCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ComposeSMSCommandJSON>, ComposeSMSCommandJSON *, bool> generator("Type ComposeSMSCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public SMSCommandJSON::Generator
      {
      private:
        JSONHoldingGenerator<ComposeSMSCommandNativeDataJSON::Generator, RCHandle<ComposeSMSCommandNativeDataJSON>, ComposeSMSCommandNativeDataJSON *, bool > fieldGeneratorNativeData;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorNoSMSAppResult;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorComposeSMSResult;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorDisambiguationSMSResult;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorSendingSMSResult;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorSentSMSResult;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorExitSMSResult;
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
            if (!(strcmp(getSMSCommandJSONKey().c_str(), "ComposeSMSCommand") == 0))
                throw("The key field has a value other than `ComposeSMSCommand'.");
            ComposeSMSCommandJSON *result = new ComposeSMSCommandJSON();
            assert(result != NULL);
            RCHandle<ComposeSMSCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraComposeSMSCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(SMSCommandJSON *new_result)
          {
            handle_result((ComposeSMSCommandJSON *)new_result);
          }
        void finish(ComposeSMSCommandJSON *result)
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
            if (fieldGeneratorNoSMSAppResult.have_value)
              {
                result->setNoSMSAppResult(fieldGeneratorNoSMSAppResult.value.referenced());
                fieldGeneratorNoSMSAppResult.have_value = false;
              }
            if (fieldGeneratorComposeSMSResult.have_value)
              {
                result->setComposeSMSResult(fieldGeneratorComposeSMSResult.value.referenced());
                fieldGeneratorComposeSMSResult.have_value = false;
              }
            if (fieldGeneratorDisambiguationSMSResult.have_value)
              {
                result->setDisambiguationSMSResult(fieldGeneratorDisambiguationSMSResult.value.referenced());
                fieldGeneratorDisambiguationSMSResult.have_value = false;
              }
            if (fieldGeneratorSendingSMSResult.have_value)
              {
                result->setSendingSMSResult(fieldGeneratorSendingSMSResult.value.referenced());
                fieldGeneratorSendingSMSResult.have_value = false;
              }
            if (fieldGeneratorSentSMSResult.have_value)
              {
                result->setSentSMSResult(fieldGeneratorSentSMSResult.value.referenced());
                fieldGeneratorSentSMSResult.have_value = false;
              }
            if (fieldGeneratorExitSMSResult.have_value)
              {
                result->setExitSMSResult(fieldGeneratorExitSMSResult.value.referenced());
                fieldGeneratorExitSMSResult.have_value = false;
              }
            SMSCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(ComposeSMSCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "omposeSMSResult") == 0)
                        return &fieldGeneratorComposeSMSResult;
                    break;
                case 'D':
                    if (strcmp(&(field_name[1]), "isambiguationSMSResult") == 0)
                        return &fieldGeneratorDisambiguationSMSResult;
                    break;
                case 'E':
                    if (strcmp(&(field_name[1]), "xitSMSResult") == 0)
                        return &fieldGeneratorExitSMSResult;
                    break;
                case 'N':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "tiveData") == 0)
                                return &fieldGeneratorNativeData;
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "SMSAppResult") == 0)
                                return &fieldGeneratorNoSMSAppResult;
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
                                if (strcmp(&(field_name[4]), "ingSMSResult") == 0)
                                    return &fieldGeneratorSendingSMSResult;
                                break;
                            case 't':
                                if (strcmp(&(field_name[4]), "SMSResult") == 0)
                                    return &fieldGeneratorSentSMSResult;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return SMSCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : SMSCommandJSON::Generator(ignore_extras), fieldGeneratorNativeData("field \"NativeData\" of the ComposeSMSCommand class", ignore_extras), fieldGeneratorNoSMSAppResult("field \"NoSMSAppResult\" of the ComposeSMSCommand class", ignore_extras), fieldGeneratorComposeSMSResult("field \"ComposeSMSResult\" of the ComposeSMSCommand class", ignore_extras), fieldGeneratorDisambiguationSMSResult("field \"DisambiguationSMSResult\" of the ComposeSMSCommand class", ignore_extras), fieldGeneratorSendingSMSResult("field \"SendingSMSResult\" of the ComposeSMSCommand class", ignore_extras), fieldGeneratorSentSMSResult("field \"SentSMSResult\" of the ComposeSMSCommand class", ignore_extras), fieldGeneratorExitSMSResult("field \"ExitSMSResult\" of the ComposeSMSCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the ComposeSMSCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNativeData.reset();
            fieldGeneratorNoSMSAppResult.reset();
            fieldGeneratorComposeSMSResult.reset();
            fieldGeneratorDisambiguationSMSResult.reset();
            fieldGeneratorSendingSMSResult.reset();
            fieldGeneratorSentSMSResult.reset();
            fieldGeneratorExitSMSResult.reset();
            SMSCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* COMPOSESMSCOMMANDJSON_H */
