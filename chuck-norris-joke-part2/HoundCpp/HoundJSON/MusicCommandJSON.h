/* file "MusicCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MUSICCOMMANDJSON_H
#define MUSICCOMMANDJSON_H

#pragma interface

#include "CommandResultJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "DynamicResponseJSON.h"
#include "DynamicResponseJSON.h"
#include "DynamicResponseJSON.h"
#include "DynamicResponseJSON.h"
#include "DynamicResponseJSON.h"
#include "DynamicResponseJSON.h"
#include "MusicCommandNativeDataJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class MusicCommandJSON : public CommandResultJSON
  {
  private:
    bool flagHasAutoPlayPreviewResult;
    DynamicResponseJSON * storeAutoPlayPreviewResult;
    bool flagHasAutoPlayResult;
    DynamicResponseJSON * storeAutoPlayResult;
    bool flagHasAutoPlayFailedResult;
    DynamicResponseJSON * storeAutoPlayFailedResult;
    bool flagHasAutoPlayVideoResult;
    DynamicResponseJSON * storeAutoPlayVideoResult;
    bool flagHasShowVideoResult;
    DynamicResponseJSON * storeShowVideoResult;
    bool flagHasAutoPlayGenericResult;
    DynamicResponseJSON * storeAutoPlayGenericResult;
    bool flagHasNativeData;
    MusicCommandNativeDataJSON * storeNativeData;

    MusicCommandJSON(const MusicCommandJSON &);
    MusicCommandJSON & operator=(const MusicCommandJSON &other);

    JSONValue * extraAutoPlayPreviewResultToJSON(void) const;
    JSONValue * extraAutoPlayResultToJSON(void) const;
    JSONValue * extraAutoPlayFailedResultToJSON(void) const;
    JSONValue * extraAutoPlayVideoResultToJSON(void) const;
    JSONValue * extraShowVideoResultToJSON(void) const;
    JSONValue * extraAutoPlayGenericResultToJSON(void) const;
    JSONValue * extraNativeDataToJSON(void) const;

    void  fromJSONAutoPlayPreviewResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAutoPlayResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAutoPlayFailedResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAutoPlayVideoResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONShowVideoResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAutoPlayGenericResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);


  public:
    MusicCommandJSON(void);
    virtual ~MusicCommandJSON(void);
    const char * getCommandKind(void) const;
    virtual const char *getMusicCommandKind(void) const = 0;
    bool  hasAutoPlayPreviewResult(void) const;
    DynamicResponseJSON *  getAutoPlayPreviewResult(void);
    const DynamicResponseJSON *  getAutoPlayPreviewResult(void) const;
    bool  hasAutoPlayResult(void) const;
    DynamicResponseJSON *  getAutoPlayResult(void);
    const DynamicResponseJSON *  getAutoPlayResult(void) const;
    bool  hasAutoPlayFailedResult(void) const;
    DynamicResponseJSON *  getAutoPlayFailedResult(void);
    const DynamicResponseJSON *  getAutoPlayFailedResult(void) const;
    bool  hasAutoPlayVideoResult(void) const;
    DynamicResponseJSON *  getAutoPlayVideoResult(void);
    const DynamicResponseJSON *  getAutoPlayVideoResult(void) const;
    bool  hasShowVideoResult(void) const;
    DynamicResponseJSON *  getShowVideoResult(void);
    const DynamicResponseJSON *  getShowVideoResult(void) const;
    bool  hasAutoPlayGenericResult(void) const;
    DynamicResponseJSON *  getAutoPlayGenericResult(void);
    const DynamicResponseJSON *  getAutoPlayGenericResult(void) const;
    bool  hasNativeData(void) const;
    MusicCommandNativeDataJSON *  getNativeData(void);
    const MusicCommandNativeDataJSON *  getNativeData(void) const;

    virtual size_t extraMusicCommandComponentCount(void) const = 0;
    virtual const char *extraMusicCommandComponentKey(size_t component_num) const = 0;
    virtual JSONValue *extraMusicCommandComponentValue(size_t component_num) = 0;
    virtual const JSONValue *extraMusicCommandComponentValue(size_t component_num) const = 0;
    virtual JSONValue *extraMusicCommandLookup(const char *field_name) = 0;
    virtual const JSONValue *extraMusicCommandLookup(const char *field_name) const = 0;
    size_t extraCommandResultComponentCount(void) const
      {
        size_t result = 1;
        if (flagHasAutoPlayPreviewResult)
            ++result;
        if (flagHasAutoPlayResult)
            ++result;
        if (flagHasAutoPlayFailedResult)
            ++result;
        if (flagHasAutoPlayVideoResult)
            ++result;
        if (flagHasShowVideoResult)
            ++result;
        if (flagHasAutoPlayGenericResult)
            ++result;
        if (flagHasNativeData)
            ++result;
        result += extraMusicCommandComponentCount();
        return result;
      }
    const char *extraCommandResultComponentKey(size_t component_num) const
      {
        if (component_num == 0)
            return "MusicCommandKind";
        size_t remainder = (component_num - 1);
        if (flagHasAutoPlayPreviewResult)
          {
            if (remainder == 0)
                return "AutoPlayPreviewResult";
            --remainder;
          }
        if (flagHasAutoPlayResult)
          {
            if (remainder == 0)
                return "AutoPlayResult";
            --remainder;
          }
        if (flagHasAutoPlayFailedResult)
          {
            if (remainder == 0)
                return "AutoPlayFailedResult";
            --remainder;
          }
        if (flagHasAutoPlayVideoResult)
          {
            if (remainder == 0)
                return "AutoPlayVideoResult";
            --remainder;
          }
        if (flagHasShowVideoResult)
          {
            if (remainder == 0)
                return "ShowVideoResult";
            --remainder;
          }
        if (flagHasAutoPlayGenericResult)
          {
            if (remainder == 0)
                return "AutoPlayGenericResult";
            --remainder;
          }
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return "NativeData";
            --remainder;
          }
        return extraMusicCommandComponentKey(remainder);
      }
    JSONValue *extraCommandResultComponentValue(size_t component_num)
      {
        if (component_num == 0)
            return new JSONStringValue(getMusicCommandKind());
        size_t remainder = (component_num - 1);
        if (flagHasAutoPlayPreviewResult)
          {
            if (remainder == 0)
                return extraAutoPlayPreviewResultToJSON();
            --remainder;
          }
        if (flagHasAutoPlayResult)
          {
            if (remainder == 0)
                return extraAutoPlayResultToJSON();
            --remainder;
          }
        if (flagHasAutoPlayFailedResult)
          {
            if (remainder == 0)
                return extraAutoPlayFailedResultToJSON();
            --remainder;
          }
        if (flagHasAutoPlayVideoResult)
          {
            if (remainder == 0)
                return extraAutoPlayVideoResultToJSON();
            --remainder;
          }
        if (flagHasShowVideoResult)
          {
            if (remainder == 0)
                return extraShowVideoResultToJSON();
            --remainder;
          }
        if (flagHasAutoPlayGenericResult)
          {
            if (remainder == 0)
                return extraAutoPlayGenericResultToJSON();
            --remainder;
          }
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        return extraMusicCommandComponentValue(remainder);
      }
    const JSONValue *extraCommandResultComponentValue(size_t component_num) const
      {
        if (component_num == 0)
            return new JSONStringValue(getMusicCommandKind());
        size_t remainder = (component_num - 1);
        if (flagHasAutoPlayPreviewResult)
          {
            if (remainder == 0)
                return extraAutoPlayPreviewResultToJSON();
            --remainder;
          }
        if (flagHasAutoPlayResult)
          {
            if (remainder == 0)
                return extraAutoPlayResultToJSON();
            --remainder;
          }
        if (flagHasAutoPlayFailedResult)
          {
            if (remainder == 0)
                return extraAutoPlayFailedResultToJSON();
            --remainder;
          }
        if (flagHasAutoPlayVideoResult)
          {
            if (remainder == 0)
                return extraAutoPlayVideoResultToJSON();
            --remainder;
          }
        if (flagHasShowVideoResult)
          {
            if (remainder == 0)
                return extraShowVideoResultToJSON();
            --remainder;
          }
        if (flagHasAutoPlayGenericResult)
          {
            if (remainder == 0)
                return extraAutoPlayGenericResultToJSON();
            --remainder;
          }
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        return extraMusicCommandComponentValue(remainder);
      }
    JSONValue *extraCommandResultLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strncmp(&(field_name[1]), "utoPlay", 7) == 0)
                  {
                    switch ((unsigned char)(field_name[8]))
                      {
                        case 'F':
                            if (strcmp(&(field_name[9]), "ailedResult") == 0)
                                return (flagHasAutoPlayFailedResult ? extraAutoPlayFailedResultToJSON() : NULL);
                            break;
                        case 'G':
                            if (strcmp(&(field_name[9]), "enericResult") == 0)
                                return (flagHasAutoPlayGenericResult ? extraAutoPlayGenericResultToJSON() : NULL);
                            break;
                        case 'P':
                            if (strcmp(&(field_name[9]), "reviewResult") == 0)
                                return (flagHasAutoPlayPreviewResult ? extraAutoPlayPreviewResultToJSON() : NULL);
                            break;
                        case 'R':
                            if (strcmp(&(field_name[9]), "esult") == 0)
                                return (flagHasAutoPlayResult ? extraAutoPlayResultToJSON() : NULL);
                            break;
                        case 'V':
                            if (strcmp(&(field_name[9]), "ideoResult") == 0)
                                return (flagHasAutoPlayVideoResult ? extraAutoPlayVideoResultToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'M':
                if (strcmp(&(field_name[1]), "usicCommandKind") == 0)
                    return new JSONStringValue(getMusicCommandKind());
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "ativeData") == 0)
                    return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "howVideoResult") == 0)
                    return (flagHasShowVideoResult ? extraShowVideoResultToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraMusicCommandLookup(field_name);
      }
    const JSONValue *extraCommandResultLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strncmp(&(field_name[1]), "utoPlay", 7) == 0)
                  {
                    switch ((unsigned char)(field_name[8]))
                      {
                        case 'F':
                            if (strcmp(&(field_name[9]), "ailedResult") == 0)
                                return (flagHasAutoPlayFailedResult ? extraAutoPlayFailedResultToJSON() : NULL);
                            break;
                        case 'G':
                            if (strcmp(&(field_name[9]), "enericResult") == 0)
                                return (flagHasAutoPlayGenericResult ? extraAutoPlayGenericResultToJSON() : NULL);
                            break;
                        case 'P':
                            if (strcmp(&(field_name[9]), "reviewResult") == 0)
                                return (flagHasAutoPlayPreviewResult ? extraAutoPlayPreviewResultToJSON() : NULL);
                            break;
                        case 'R':
                            if (strcmp(&(field_name[9]), "esult") == 0)
                                return (flagHasAutoPlayResult ? extraAutoPlayResultToJSON() : NULL);
                            break;
                        case 'V':
                            if (strcmp(&(field_name[9]), "ideoResult") == 0)
                                return (flagHasAutoPlayVideoResult ? extraAutoPlayVideoResultToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'M':
                if (strcmp(&(field_name[1]), "usicCommandKind") == 0)
                    return new JSONStringValue(getMusicCommandKind());
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "ativeData") == 0)
                    return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "howVideoResult") == 0)
                    return (flagHasShowVideoResult ? extraShowVideoResultToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraMusicCommandLookup(field_name);
      }

    void setAutoPlayPreviewResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAutoPlayPreviewResult)
          {
            storeAutoPlayPreviewResult->remove_reference();
          }
        flagHasAutoPlayPreviewResult = true;
        storeAutoPlayPreviewResult = new_value;
      }
    void unsetAutoPlayPreviewResult(void)
      {
        if (flagHasAutoPlayPreviewResult)
          {
            storeAutoPlayPreviewResult->remove_reference();
          }
        flagHasAutoPlayPreviewResult = false;
      }
    void setAutoPlayResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAutoPlayResult)
          {
            storeAutoPlayResult->remove_reference();
          }
        flagHasAutoPlayResult = true;
        storeAutoPlayResult = new_value;
      }
    void unsetAutoPlayResult(void)
      {
        if (flagHasAutoPlayResult)
          {
            storeAutoPlayResult->remove_reference();
          }
        flagHasAutoPlayResult = false;
      }
    void setAutoPlayFailedResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAutoPlayFailedResult)
          {
            storeAutoPlayFailedResult->remove_reference();
          }
        flagHasAutoPlayFailedResult = true;
        storeAutoPlayFailedResult = new_value;
      }
    void unsetAutoPlayFailedResult(void)
      {
        if (flagHasAutoPlayFailedResult)
          {
            storeAutoPlayFailedResult->remove_reference();
          }
        flagHasAutoPlayFailedResult = false;
      }
    void setAutoPlayVideoResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAutoPlayVideoResult)
          {
            storeAutoPlayVideoResult->remove_reference();
          }
        flagHasAutoPlayVideoResult = true;
        storeAutoPlayVideoResult = new_value;
      }
    void unsetAutoPlayVideoResult(void)
      {
        if (flagHasAutoPlayVideoResult)
          {
            storeAutoPlayVideoResult->remove_reference();
          }
        flagHasAutoPlayVideoResult = false;
      }
    void setShowVideoResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasShowVideoResult)
          {
            storeShowVideoResult->remove_reference();
          }
        flagHasShowVideoResult = true;
        storeShowVideoResult = new_value;
      }
    void unsetShowVideoResult(void)
      {
        if (flagHasShowVideoResult)
          {
            storeShowVideoResult->remove_reference();
          }
        flagHasShowVideoResult = false;
      }
    void setAutoPlayGenericResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAutoPlayGenericResult)
          {
            storeAutoPlayGenericResult->remove_reference();
          }
        flagHasAutoPlayGenericResult = true;
        storeAutoPlayGenericResult = new_value;
      }
    void unsetAutoPlayGenericResult(void)
      {
        if (flagHasAutoPlayGenericResult)
          {
            storeAutoPlayGenericResult->remove_reference();
          }
        flagHasAutoPlayGenericResult = false;
      }
    virtual void setNativeData(MusicCommandNativeDataJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasNativeData)
          {
            storeNativeData->remove_reference();
          }
        flagHasNativeData = true;
        storeNativeData = new_value;
      }
    virtual void unsetNativeData(void)
      {
        if (flagHasNativeData)
          {
            storeNativeData->remove_reference();
          }
        flagHasNativeData = false;
      }

    virtual void extraMusicCommandAppendPair(const char *key, JSONValue *new_component) = 0;
    virtual void extraMusicCommandSetField(const char *key, JSONValue *new_component) = 0;
    void extraCommandResultAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                if (strncmp(&(key[1]), "utoPlay", 7) == 0)
                  {
                    switch ((unsigned char)(key[8]))
                      {
                        case 'F':
                            if (strcmp(&(key[9]), "ailedResult") == 0)
                                {
                                fromJSONAutoPlayFailedResult(new_component, false);
                                return;
                                }
                            break;
                        case 'G':
                            if (strcmp(&(key[9]), "enericResult") == 0)
                                {
                                fromJSONAutoPlayGenericResult(new_component, false);
                                return;
                                }
                            break;
                        case 'P':
                            if (strcmp(&(key[9]), "reviewResult") == 0)
                                {
                                fromJSONAutoPlayPreviewResult(new_component, false);
                                return;
                                }
                            break;
                        case 'R':
                            if (strcmp(&(key[9]), "esult") == 0)
                                {
                                fromJSONAutoPlayResult(new_component, false);
                                return;
                                }
                            break;
                        case 'V':
                            if (strcmp(&(key[9]), "ideoResult") == 0)
                                {
                                fromJSONAutoPlayVideoResult(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'M':
                if (strcmp(&(key[1]), "usicCommandKind") == 0)
                    return;
                break;
            case 'N':
                if (strcmp(&(key[1]), "ativeData") == 0)
                    {
                    fromJSONNativeData(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strcmp(&(key[1]), "howVideoResult") == 0)
                    {
                    fromJSONShowVideoResult(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraMusicCommandAppendPair(key, new_component);
      }
    void extraCommandResultSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                if (strncmp(&(key[1]), "utoPlay", 7) == 0)
                  {
                    switch ((unsigned char)(key[8]))
                      {
                        case 'F':
                            if (strcmp(&(key[9]), "ailedResult") == 0)
                                {
                                fromJSONAutoPlayFailedResult(new_component, false);
                                return;
                                }
                            break;
                        case 'G':
                            if (strcmp(&(key[9]), "enericResult") == 0)
                                {
                                fromJSONAutoPlayGenericResult(new_component, false);
                                return;
                                }
                            break;
                        case 'P':
                            if (strcmp(&(key[9]), "reviewResult") == 0)
                                {
                                fromJSONAutoPlayPreviewResult(new_component, false);
                                return;
                                }
                            break;
                        case 'R':
                            if (strcmp(&(key[9]), "esult") == 0)
                                {
                                fromJSONAutoPlayResult(new_component, false);
                                return;
                                }
                            break;
                        case 'V':
                            if (strcmp(&(key[9]), "ideoResult") == 0)
                                {
                                fromJSONAutoPlayVideoResult(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'M':
                if (strcmp(&(key[1]), "usicCommandKind") == 0)
                    return;
                break;
            case 'N':
                if (strcmp(&(key[1]), "ativeData") == 0)
                    {
                    fromJSONNativeData(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strcmp(&(key[1]), "howVideoResult") == 0)
                    {
                    fromJSONShowVideoResult(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraMusicCommandSetField(key, new_component);
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
        handler->pair("MusicCommandKind", getMusicCommandKind());
        if (flagHasAutoPlayPreviewResult)
          {
            handler->start_pair("AutoPlayPreviewResult");
            storeAutoPlayPreviewResult->write_as_json(handler);
          }
        if (flagHasAutoPlayResult)
          {
            handler->start_pair("AutoPlayResult");
            storeAutoPlayResult->write_as_json(handler);
          }
        if (flagHasAutoPlayFailedResult)
          {
            handler->start_pair("AutoPlayFailedResult");
            storeAutoPlayFailedResult->write_as_json(handler);
          }
        if (flagHasAutoPlayVideoResult)
          {
            handler->start_pair("AutoPlayVideoResult");
            storeAutoPlayVideoResult->write_as_json(handler);
          }
        if (flagHasShowVideoResult)
          {
            handler->start_pair("ShowVideoResult");
            storeShowVideoResult->write_as_json(handler);
          }
        if (flagHasAutoPlayGenericResult)
          {
            handler->start_pair("AutoPlayGenericResult");
            storeAutoPlayGenericResult->write_as_json(handler);
          }
        writeFieldNativeData(handler);
      }
    virtual void writeFieldNativeData(JSONHandler *handler) const
      {
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

    static MusicCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MusicCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MusicCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicCommandJSON>, MusicCommandJSON *, bool> generator("Type MusicCommand", ignore_extras);
            parse_json_value(text, "Text for MusicCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MusicCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MusicCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicCommandJSON>, MusicCommandJSON *, bool> generator("Type MusicCommand", ignore_extras);
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
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorAutoPlayPreviewResult;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorAutoPlayResult;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorAutoPlayFailedResult;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorAutoPlayVideoResult;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorShowVideoResult;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorAutoPlayGenericResult;
        JSONHoldingGenerator<MusicCommandNativeDataJSON::Generator, RCHandle<MusicCommandNativeDataJSON>, MusicCommandNativeDataJSON *, bool > fieldGeneratorNativeData;
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char *> keyGenerator;


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
            if (!(keyGenerator.have_value))
                throw("The `MusicCommandKind' field is missing.");
            if (!(strcmp(getCommandResultJSONKey().c_str(), "MusicCommand") == 0))
                throw("The key field has a value other than `MusicCommand'.");
            MusicCommandJSON *result = createForKey(keyGenerator.value.c_str(), unknownFieldGenerator.index);
            assert(result != NULL);
            RCHandle<MusicCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraMusicCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            const char *missing_field_error = result->missing_field_error();
            if (missing_field_error != NULL)
                error(missing_field_error);
            handle_result(result);
          }
        std::string getMusicCommandJSONKey(void)
          {
            if (!(keyGenerator.have_value))
                throw("The `MusicCommandKind' field is missing.");
            return keyGenerator.value;
          }
        void handle_result(CommandResultJSON *new_result)
          {
            handle_result((MusicCommandJSON *)new_result);
          }
        void finish(MusicCommandJSON *result)
          {
            if (fieldGeneratorAutoPlayPreviewResult.have_value)
              {
                result->setAutoPlayPreviewResult(fieldGeneratorAutoPlayPreviewResult.value.referenced());
                fieldGeneratorAutoPlayPreviewResult.have_value = false;
              }
            if (fieldGeneratorAutoPlayResult.have_value)
              {
                result->setAutoPlayResult(fieldGeneratorAutoPlayResult.value.referenced());
                fieldGeneratorAutoPlayResult.have_value = false;
              }
            if (fieldGeneratorAutoPlayFailedResult.have_value)
              {
                result->setAutoPlayFailedResult(fieldGeneratorAutoPlayFailedResult.value.referenced());
                fieldGeneratorAutoPlayFailedResult.have_value = false;
              }
            if (fieldGeneratorAutoPlayVideoResult.have_value)
              {
                result->setAutoPlayVideoResult(fieldGeneratorAutoPlayVideoResult.value.referenced());
                fieldGeneratorAutoPlayVideoResult.have_value = false;
              }
            if (fieldGeneratorShowVideoResult.have_value)
              {
                result->setShowVideoResult(fieldGeneratorShowVideoResult.value.referenced());
                fieldGeneratorShowVideoResult.have_value = false;
              }
            if (fieldGeneratorAutoPlayGenericResult.have_value)
              {
                result->setAutoPlayGenericResult(fieldGeneratorAutoPlayGenericResult.value.referenced());
                fieldGeneratorAutoPlayGenericResult.have_value = false;
              }
            if (fieldGeneratorNativeData.have_value)
              {
                result->setNativeData(fieldGeneratorNativeData.value.referenced());
                fieldGeneratorNativeData.have_value = false;
              }
            else if (!(result->hasNativeData()))
              {
                error("When parsing the object for %what%, the \"NativeData\" field was missing.");
              }
            CommandResultJSON::Generator::finish(result);
          }
        virtual void handle_result(MusicCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strncmp(&(field_name[1]), "utoPlay", 7) == 0)
                      {
                        switch ((unsigned char)(field_name[8]))
                          {
                            case 'F':
                                if (strcmp(&(field_name[9]), "ailedResult") == 0)
                                    return &fieldGeneratorAutoPlayFailedResult;
                                break;
                            case 'G':
                                if (strcmp(&(field_name[9]), "enericResult") == 0)
                                    return &fieldGeneratorAutoPlayGenericResult;
                                break;
                            case 'P':
                                if (strcmp(&(field_name[9]), "reviewResult") == 0)
                                    return &fieldGeneratorAutoPlayPreviewResult;
                                break;
                            case 'R':
                                if (strcmp(&(field_name[9]), "esult") == 0)
                                    return &fieldGeneratorAutoPlayResult;
                                break;
                            case 'V':
                                if (strcmp(&(field_name[9]), "ideoResult") == 0)
                                    return &fieldGeneratorAutoPlayVideoResult;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "usicCommandKind") == 0)
                        {
                        keyGenerator.reset();
                        return &keyGenerator;
                        }
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "ativeData") == 0)
                        return &fieldGeneratorNativeData;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "howVideoResult") == 0)
                        return &fieldGeneratorShowVideoResult;
                    break;
                default:
                    break;
              }
            return CommandResultJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CommandResultJSON::Generator(ignore_extras), fieldGeneratorAutoPlayPreviewResult("field \"AutoPlayPreviewResult\" of the MusicCommand class", ignore_extras), fieldGeneratorAutoPlayResult("field \"AutoPlayResult\" of the MusicCommand class", ignore_extras), fieldGeneratorAutoPlayFailedResult("field \"AutoPlayFailedResult\" of the MusicCommand class", ignore_extras), fieldGeneratorAutoPlayVideoResult("field \"AutoPlayVideoResult\" of the MusicCommand class", ignore_extras), fieldGeneratorShowVideoResult("field \"ShowVideoResult\" of the MusicCommand class", ignore_extras), fieldGeneratorAutoPlayGenericResult("field \"AutoPlayGenericResult\" of the MusicCommand class", ignore_extras), fieldGeneratorNativeData("field \"NativeData\" of the MusicCommand class", ignore_extras), unknownFieldGenerator(ignore_extras), keyGenerator("key field \"MusicCommandKind\" of the MusicCommand class")
          {
            set_what("the MusicCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorAutoPlayPreviewResult.reset();
            fieldGeneratorAutoPlayResult.reset();
            fieldGeneratorAutoPlayFailedResult.reset();
            fieldGeneratorAutoPlayVideoResult.reset();
            fieldGeneratorShowVideoResult.reset();
            fieldGeneratorAutoPlayGenericResult.reset();
            fieldGeneratorNativeData.reset();
            CommandResultJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
    static MusicCommandJSON *createForKey(const char *key, string_index *other_field_index);
  };

#endif /* MUSICCOMMANDJSON_H */
