/* file "HoundPartialTranscriptJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOUNDPARTIALTRANSCRIPTJSON_H
#define HOUNDPARTIALTRANSCRIPTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONBooleanGenerator.h"
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HoundPartialTranscriptJSON : public ReferenceCounted
  {
  public:
    enum TypeFormat
      {
        Format_SoundHoundVoiceSearchParialTranscript,
        Format_HoundVoiceQueryPartialTranscript
      };

    static TypeFormat  stringToFormat(const char *chars);
    static const char * stringFromFormat(TypeFormat the_enum);
    enum TypeFormatVersion
      {
        FormatVersion_1_x2e_0
      };

    static TypeFormatVersion  stringToFormatVersion(const char *chars);
    static const char * stringFromFormatVersion(TypeFormatVersion the_enum);
    enum TypeLocalOrRemote
      {
        LocalOrRemote_Local,
        LocalOrRemote_Remote
      };

    static TypeLocalOrRemote  stringToLocalOrRemote(const char *chars);
    static const char * stringFromLocalOrRemote(TypeLocalOrRemote the_enum);

  private:
    bool flagHasFormat;
    TypeFormat storeFormat;
    bool flagHasFormatVersion;
    bool flagHasPartialTranscript;
    std::string storePartialTranscript;
    bool flagHasDurationMS;
    double storeDurationMS;
    std::string textStoreDurationMS;
    bool flagHasDone;
    bool storeDone;
    bool flagHasSafeToStopAudio;
    bool storeSafeToStopAudio;
    bool flagHasLocalOrRemote;
    TypeLocalOrRemote storeLocalOrRemote;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HoundPartialTranscriptJSON(const HoundPartialTranscriptJSON &);
    HoundPartialTranscriptJSON & operator=(const HoundPartialTranscriptJSON &other);

    void  fromJSONFormat(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFormatVersion(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPartialTranscript(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDurationMS(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDone(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSafeToStopAudio(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLocalOrRemote(JSONValue *json_value, bool ignore_extras = false);


  public:
    HoundPartialTranscriptJSON(void);
    virtual ~HoundPartialTranscriptJSON(void);
    bool  hasFormat(void) const;
    TypeFormat  getFormat(void);
    const TypeFormat  getFormat(void) const;
    const char * getFormatAsChars(void) const;
    std::string  getFormatAsString(void) const;
    bool  hasFormatVersion(void) const;
    TypeFormatVersion  getFormatVersion(void);
    const TypeFormatVersion  getFormatVersion(void) const;
    const char * getFormatVersionAsChars(void) const;
    std::string  getFormatVersionAsString(void) const;
    bool  hasPartialTranscript(void) const;
    std::string  getPartialTranscript(void);
    const std::string  getPartialTranscript(void) const;
    bool  hasDurationMS(void) const;
    double  getDurationMS(void);
    const double  getDurationMS(void) const;
    std::string  getDurationMSAsText(void) const;
    bool  hasDone(void) const;
    bool  getDone(void);
    const bool  getDone(void) const;
    bool  hasSafeToStopAudio(void) const;
    bool  getSafeToStopAudio(void);
    const bool  getSafeToStopAudio(void) const;
    bool  hasLocalOrRemote(void) const;
    TypeLocalOrRemote  getLocalOrRemote(void);
    const TypeLocalOrRemote  getLocalOrRemote(void) const;
    const char * getLocalOrRemoteAsChars(void) const;
    std::string  getLocalOrRemoteAsString(void) const;

    virtual size_t extraHoundPartialTranscriptComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHoundPartialTranscriptComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHoundPartialTranscriptComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHoundPartialTranscriptComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHoundPartialTranscriptLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHoundPartialTranscriptLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setFormat(TypeFormat new_value)
      {
        flagHasFormat = true;
        storeFormat = new_value;
      }
    void setFormat(const char *chars)
      {
        setFormat(stringToFormat(chars));
      }
    void setFormat(std::string the_string)
      {
        setFormat(stringToFormat(the_string.c_str()));
      }
    void unsetFormat(void)
      {
        flagHasFormat = false;
      }
    void setFormatVersion(void)
      {
        flagHasFormatVersion = true;
      }
    void setFormatVersion(TypeFormatVersion new_value)
      {
        setFormatVersion();
      }
    void setFormatVersion(const char *chars)
      {
        setFormatVersion(stringToFormatVersion(chars));
      }
    void setFormatVersion(std::string the_string)
      {
        setFormatVersion(stringToFormatVersion(the_string.c_str()));
      }
    void unsetFormatVersion(void)
      {
        flagHasFormatVersion = false;
      }
    void setPartialTranscript(std::string new_value)
      {
        flagHasPartialTranscript = true;
        storePartialTranscript = new_value;
      }
    void unsetPartialTranscript(void)
      {
        flagHasPartialTranscript = false;
      }
    void setDurationMS(double new_value)
      {
        flagHasDurationMS = true;
        if (new_value < 0)
            throw("The value for field DurationMS of HoundPartialTranscriptJSON is less than the lower bound (0) for that field.");
        storeDurationMS = new_value;
        textStoreDurationMS = "";
      }
    void setDurationMSText(std::string new_value)
      {
        flagHasDurationMS = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field DurationMS of HoundPartialTranscriptJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field DurationMS of HoundPartialTranscriptJSON is less than the lower bound (0) for that field.");
        textStoreDurationMS = new_value;
      }
    void unsetDurationMS(void)
      {
        flagHasDurationMS = false;
      }
    void setDone(bool new_value)
      {
        flagHasDone = true;
        storeDone = new_value;
      }
    void unsetDone(void)
      {
        flagHasDone = false;
      }
    void setSafeToStopAudio(bool new_value)
      {
        flagHasSafeToStopAudio = true;
        storeSafeToStopAudio = new_value;
      }
    void unsetSafeToStopAudio(void)
      {
        flagHasSafeToStopAudio = false;
      }
    void setLocalOrRemote(TypeLocalOrRemote new_value)
      {
        flagHasLocalOrRemote = true;
        storeLocalOrRemote = new_value;
      }
    void setLocalOrRemote(const char *chars)
      {
        setLocalOrRemote(stringToLocalOrRemote(chars));
      }
    void setLocalOrRemote(std::string the_string)
      {
        setLocalOrRemote(stringToLocalOrRemote(the_string.c_str()));
      }
    void unsetLocalOrRemote(void)
      {
        flagHasLocalOrRemote = false;
      }

    virtual void extraHoundPartialTranscriptAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHoundPartialTranscriptSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHoundPartialTranscriptLookup(key);
        if (old_field == NULL)
          {
            extraHoundPartialTranscriptAppendPair(key, new_component);
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
        assert(flagHasFormat);
        handler->start_pair("Format");
        switch (storeFormat)
          {
            case Format_SoundHoundVoiceSearchParialTranscript:
                handler->string_value("SoundHoundVoiceSearchParialTranscript");
                break;
            case Format_HoundVoiceQueryPartialTranscript:
                handler->string_value("HoundVoiceQueryPartialTranscript");
                break;
            default:
                assert(false);
          }
        assert(flagHasFormatVersion);
        handler->start_pair("FormatVersion");
        handler->string_value("1.0");
        assert(flagHasPartialTranscript);
        handler->start_pair("PartialTranscript");
        handler->string_value(storePartialTranscript);
        assert(flagHasDurationMS);
        handler->start_pair("DurationMS");
        if (textStoreDurationMS != "")
            handler->number_value(textStoreDurationMS.c_str());
        else if (((double)(long int)storeDurationMS) == storeDurationMS)
            handler->number_value((long int)storeDurationMS);
        else
            handler->number_value(storeDurationMS);
        assert(flagHasDone);
        handler->start_pair("Done");
        handler->boolean_value(storeDone);
        if (flagHasSafeToStopAudio)
          {
            handler->start_pair("SafeToStopAudio");
            handler->boolean_value(storeSafeToStopAudio);
          }
        if (flagHasLocalOrRemote)
          {
            handler->start_pair("LocalOrRemote");
            switch (storeLocalOrRemote)
              {
                case LocalOrRemote_Local:
                    handler->string_value("Local");
                    break;
                case LocalOrRemote_Remote:
                    handler->string_value("Remote");
                    break;
                default:
                    assert(false);
              }
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasFormat()))
          {
            return "When parsing the object for %what%, the \"Format\" field was missing.";
          }
        if (!(hasFormatVersion()))
          {
            return "When parsing the object for %what%, the \"FormatVersion\" field was missing.";
          }
        if (!(hasPartialTranscript()))
          {
            return "When parsing the object for %what%, the \"PartialTranscript\" field was missing.";
          }
        if (!(hasDurationMS()))
          {
            return "When parsing the object for %what%, the \"DurationMS\" field was missing.";
          }
        if (!(hasDone()))
          {
            return "When parsing the object for %what%, the \"Done\" field was missing.";
          }
        return NULL;
      }

    static HoundPartialTranscriptJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HoundPartialTranscriptJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HoundPartialTranscriptJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HoundPartialTranscriptJSON>, HoundPartialTranscriptJSON *, bool> generator("Type HoundPartialTranscript", ignore_extras);
            parse_json_value(text, "Text for HoundPartialTranscriptJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HoundPartialTranscriptJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HoundPartialTranscriptJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HoundPartialTranscriptJSON>, HoundPartialTranscriptJSON *, bool> generator("Type HoundPartialTranscript", ignore_extras);
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
    class FieldGeneratorFormat : public JSONStringGenerator
          {
          protected:
            FieldGeneratorFormat(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorFormat(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToFormat(result));
              }
            virtual void handle_result(TypeFormat result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorFormat, TypeFormat, TypeFormat > fieldGeneratorFormat;
    class FieldGeneratorFormatVersion : public JSONStringGenerator
          {
          protected:
            FieldGeneratorFormatVersion(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorFormatVersion(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToFormatVersion(result));
              }
            virtual void handle_result(TypeFormatVersion result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorFormatVersion, TypeFormatVersion, TypeFormatVersion > fieldGeneratorFormatVersion;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPartialTranscript;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorDurationMS;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorDone;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorSafeToStopAudio;
    class FieldGeneratorLocalOrRemote : public JSONStringGenerator
          {
          protected:
            FieldGeneratorLocalOrRemote(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorLocalOrRemote(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToLocalOrRemote(result));
              }
            virtual void handle_result(TypeLocalOrRemote result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorLocalOrRemote, TypeLocalOrRemote, TypeLocalOrRemote > fieldGeneratorLocalOrRemote;
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
            HoundPartialTranscriptJSON *result = new HoundPartialTranscriptJSON();
            assert(result != NULL);
            RCHandle<HoundPartialTranscriptJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHoundPartialTranscriptAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(HoundPartialTranscriptJSON *result)
          {
            if (fieldGeneratorFormat.have_value)
              {
                result->setFormat(fieldGeneratorFormat.value);
                fieldGeneratorFormat.have_value = false;
              }
            else if (!(result->hasFormat()))
              {
                error("When parsing the object for %what%, the \"Format\" field was missing.");
              }
            if (fieldGeneratorFormatVersion.have_value)
              {
                result->setFormatVersion();
                fieldGeneratorFormatVersion.have_value = false;
              }
            else if (!(result->hasFormatVersion()))
              {
                error("When parsing the object for %what%, the \"FormatVersion\" field was missing.");
              }
            if (fieldGeneratorPartialTranscript.have_value)
              {
                result->setPartialTranscript(fieldGeneratorPartialTranscript.value);
                fieldGeneratorPartialTranscript.have_value = false;
              }
            else if (!(result->hasPartialTranscript()))
              {
                error("When parsing the object for %what%, the \"PartialTranscript\" field was missing.");
              }
            if (fieldGeneratorDurationMS.have_value)
              {
                result->setDurationMSText(fieldGeneratorDurationMS.value);
                fieldGeneratorDurationMS.have_value = false;
              }
            else if (!(result->hasDurationMS()))
              {
                error("When parsing the object for %what%, the \"DurationMS\" field was missing.");
              }
            if (fieldGeneratorDone.have_value)
              {
                result->setDone(fieldGeneratorDone.value);
                fieldGeneratorDone.have_value = false;
              }
            else if (!(result->hasDone()))
              {
                error("When parsing the object for %what%, the \"Done\" field was missing.");
              }
            if (fieldGeneratorSafeToStopAudio.have_value)
              {
                result->setSafeToStopAudio(fieldGeneratorSafeToStopAudio.value);
                fieldGeneratorSafeToStopAudio.have_value = false;
              }
            if (fieldGeneratorLocalOrRemote.have_value)
              {
                result->setLocalOrRemote(fieldGeneratorLocalOrRemote.value);
                fieldGeneratorLocalOrRemote.have_value = false;
              }
          }
        virtual void handle_result(HoundPartialTranscriptJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'o':
                            if (strcmp(&(field_name[2]), "ne") == 0)
                                return &fieldGeneratorDone;
                            break;
                        case 'u':
                            if (strcmp(&(field_name[2]), "rationMS") == 0)
                                return &fieldGeneratorDurationMS;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'F':
                    if (strncmp(&(field_name[1]), "ormat", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 0:
                                return &fieldGeneratorFormat;
                            case 'V':
                                if (strcmp(&(field_name[7]), "ersion") == 0)
                                    return &fieldGeneratorFormatVersion;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "ocalOrRemote") == 0)
                        return &fieldGeneratorLocalOrRemote;
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "artialTranscript") == 0)
                        return &fieldGeneratorPartialTranscript;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "afeToStopAudio") == 0)
                        return &fieldGeneratorSafeToStopAudio;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorFormat("field \"Format\" of the HoundPartialTranscript class"), fieldGeneratorFormatVersion("field \"FormatVersion\" of the HoundPartialTranscript class"), fieldGeneratorPartialTranscript("field \"PartialTranscript\" of the HoundPartialTranscript class"), fieldGeneratorDurationMS("field \"DurationMS\" of the HoundPartialTranscript class"), fieldGeneratorDone("field \"Done\" of the HoundPartialTranscript class"), fieldGeneratorSafeToStopAudio("field \"SafeToStopAudio\" of the HoundPartialTranscript class"), fieldGeneratorLocalOrRemote("field \"LocalOrRemote\" of the HoundPartialTranscript class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HoundPartialTranscript class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorFormat.reset();
            fieldGeneratorFormatVersion.reset();
            fieldGeneratorPartialTranscript.reset();
            fieldGeneratorDurationMS.reset();
            fieldGeneratorDone.reset();
            fieldGeneratorSafeToStopAudio.reset();
            fieldGeneratorLocalOrRemote.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HOUNDPARTIALTRANSCRIPTJSON_H */
