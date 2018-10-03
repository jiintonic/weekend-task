/* file "WikipediaCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef WIKIPEDIACOMMANDJSON_H
#define WIKIPEDIACOMMANDJSON_H

#pragma interface

#include "CommandResultJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerUnboundRangeGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include "OInteger.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class WikipediaCommandJSON : public CommandResultJSON
  {
  public:
    class TypeNativeDataJSON : public ReferenceCounted
      {
      private:
        bool flagHasTitle;
        std::string storeTitle;
        bool flagHasRequestedTitle;
        std::string storeRequestedTitle;
        bool flagHasShouldIndicateRedirect;
        bool storeShouldIndicateRedirect;
        bool flagHasWrittenSummaryShort;
        std::string storeWrittenSummaryShort;
        bool flagHasWrittenSummaryLong;
        std::string storeWrittenSummaryLong;
        bool flagHasImage;
        std::string storeImage;
        bool flagHasURI;
        std::string storeURI;
        bool flagHasSpokenSummaryShort;
        std::string storeSpokenSummaryShort;
        bool flagHasSpokenSummaryLong;
        std::string storeSpokenSummaryLong;
        bool flagHasOriginalID;
        OInteger storeOriginalID;
        bool flagHasResolvedID;
        OInteger storeResolvedID;
        bool flagHasWebCommandEnabled;
        bool storeWebCommandEnabled;
        bool flagHasWikipediaAttribution;
        std::string storeWikipediaAttribution;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeNativeDataJSON(const TypeNativeDataJSON &);
        TypeNativeDataJSON & operator=(const TypeNativeDataJSON &other);

        void  fromJSONTitle(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONRequestedTitle(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONShouldIndicateRedirect(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONWrittenSummaryShort(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONWrittenSummaryLong(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONImage(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONURI(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONSpokenSummaryShort(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONSpokenSummaryLong(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONOriginalID(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONResolvedID(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONWebCommandEnabled(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONWikipediaAttribution(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeNativeDataJSON(void);
        virtual ~TypeNativeDataJSON(void);
        bool  hasTitle(void) const;
        std::string  getTitle(void);
        const std::string  getTitle(void) const;
        bool  hasRequestedTitle(void) const;
        std::string  getRequestedTitle(void);
        const std::string  getRequestedTitle(void) const;
        bool  hasShouldIndicateRedirect(void) const;
        bool  getShouldIndicateRedirect(void);
        const bool  getShouldIndicateRedirect(void) const;
        bool  hasWrittenSummaryShort(void) const;
        std::string  getWrittenSummaryShort(void);
        const std::string  getWrittenSummaryShort(void) const;
        bool  hasWrittenSummaryLong(void) const;
        std::string  getWrittenSummaryLong(void);
        const std::string  getWrittenSummaryLong(void) const;
        bool  hasImage(void) const;
        std::string  getImage(void);
        const std::string  getImage(void) const;
        bool  hasURI(void) const;
        std::string  getURI(void);
        const std::string  getURI(void) const;
        bool  hasSpokenSummaryShort(void) const;
        std::string  getSpokenSummaryShort(void);
        const std::string  getSpokenSummaryShort(void) const;
        bool  hasSpokenSummaryLong(void) const;
        std::string  getSpokenSummaryLong(void);
        const std::string  getSpokenSummaryLong(void) const;
        bool  hasOriginalID(void) const;
        OInteger  getOriginalID(void);
        const OInteger  getOriginalID(void) const;
        bool  hasResolvedID(void) const;
        OInteger  getResolvedID(void);
        const OInteger  getResolvedID(void) const;
        bool  hasWebCommandEnabled(void) const;
        bool  getWebCommandEnabled(void);
        const bool  getWebCommandEnabled(void) const;
        bool  hasWikipediaAttribution(void) const;
        std::string  getWikipediaAttribution(void);
        const std::string  getWikipediaAttribution(void) const;

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

        void setTitle(std::string new_value)
          {
            flagHasTitle = true;
            storeTitle = new_value;
          }
        void unsetTitle(void)
          {
            flagHasTitle = false;
          }
        void setRequestedTitle(std::string new_value)
          {
            flagHasRequestedTitle = true;
            storeRequestedTitle = new_value;
          }
        void unsetRequestedTitle(void)
          {
            flagHasRequestedTitle = false;
          }
        void setShouldIndicateRedirect(bool new_value)
          {
            flagHasShouldIndicateRedirect = true;
            storeShouldIndicateRedirect = new_value;
          }
        void unsetShouldIndicateRedirect(void)
          {
            flagHasShouldIndicateRedirect = false;
          }
        void setWrittenSummaryShort(std::string new_value)
          {
            flagHasWrittenSummaryShort = true;
            storeWrittenSummaryShort = new_value;
          }
        void unsetWrittenSummaryShort(void)
          {
            flagHasWrittenSummaryShort = false;
          }
        void setWrittenSummaryLong(std::string new_value)
          {
            flagHasWrittenSummaryLong = true;
            storeWrittenSummaryLong = new_value;
          }
        void unsetWrittenSummaryLong(void)
          {
            flagHasWrittenSummaryLong = false;
          }
        void setImage(std::string new_value)
          {
            flagHasImage = true;
            storeImage = new_value;
          }
        void unsetImage(void)
          {
            flagHasImage = false;
          }
        void setURI(std::string new_value)
          {
            flagHasURI = true;
            storeURI = new_value;
          }
        void unsetURI(void)
          {
            flagHasURI = false;
          }
        void setSpokenSummaryShort(std::string new_value)
          {
            flagHasSpokenSummaryShort = true;
            storeSpokenSummaryShort = new_value;
          }
        void unsetSpokenSummaryShort(void)
          {
            flagHasSpokenSummaryShort = false;
          }
        void setSpokenSummaryLong(std::string new_value)
          {
            flagHasSpokenSummaryLong = true;
            storeSpokenSummaryLong = new_value;
          }
        void unsetSpokenSummaryLong(void)
          {
            flagHasSpokenSummaryLong = false;
          }
        void setOriginalID(OInteger new_value)
          {
            flagHasOriginalID = true;
            storeOriginalID = new_value;
          }
        void unsetOriginalID(void)
          {
            flagHasOriginalID = false;
          }
        void setResolvedID(OInteger new_value)
          {
            flagHasResolvedID = true;
            storeResolvedID = new_value;
          }
        void unsetResolvedID(void)
          {
            flagHasResolvedID = false;
          }
        void setWebCommandEnabled(bool new_value)
          {
            flagHasWebCommandEnabled = true;
            storeWebCommandEnabled = new_value;
          }
        void unsetWebCommandEnabled(void)
          {
            flagHasWebCommandEnabled = false;
          }
        void setWikipediaAttribution(std::string new_value)
          {
            flagHasWikipediaAttribution = true;
            storeWikipediaAttribution = new_value;
          }
        void unsetWikipediaAttribution(void)
          {
            flagHasWikipediaAttribution = false;
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
            assert(flagHasTitle);
            handler->start_pair("Title");
            handler->string_value(storeTitle);
            if (flagHasRequestedTitle)
              {
                handler->start_pair("RequestedTitle");
                handler->string_value(storeRequestedTitle);
              }
            if (flagHasShouldIndicateRedirect)
              {
                handler->start_pair("ShouldIndicateRedirect");
                handler->boolean_value(storeShouldIndicateRedirect);
              }
            assert(flagHasWrittenSummaryShort);
            handler->start_pair("WrittenSummaryShort");
            handler->string_value(storeWrittenSummaryShort);
            assert(flagHasWrittenSummaryLong);
            handler->start_pair("WrittenSummaryLong");
            handler->string_value(storeWrittenSummaryLong);
            assert(flagHasImage);
            handler->start_pair("Image");
            handler->string_value(storeImage);
            assert(flagHasURI);
            handler->start_pair("URI");
            handler->string_value(storeURI);
            assert(flagHasSpokenSummaryShort);
            handler->start_pair("SpokenSummaryShort");
            handler->string_value(storeSpokenSummaryShort);
            assert(flagHasSpokenSummaryLong);
            handler->start_pair("SpokenSummaryLong");
            handler->string_value(storeSpokenSummaryLong);
            assert(flagHasOriginalID);
            handler->start_pair("OriginalID");
            handler->number_value(storeOriginalID.get_o_integer());
            assert(flagHasResolvedID);
            handler->start_pair("ResolvedID");
            handler->number_value(storeResolvedID.get_o_integer());
            if (flagHasWebCommandEnabled)
              {
                handler->start_pair("WebCommandEnabled");
                handler->boolean_value(storeWebCommandEnabled);
              }
            if (flagHasWikipediaAttribution)
              {
                handler->start_pair("WikipediaAttribution");
                handler->string_value(storeWikipediaAttribution);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasTitle()))
              {
                return "When parsing the object for %what%, the \"Title\" field was missing.";
              }
            if (!(hasWrittenSummaryShort()))
              {
                return "When parsing the object for %what%, the \"WrittenSummaryShort\" field was missing.";
              }
            if (!(hasWrittenSummaryLong()))
              {
                return "When parsing the object for %what%, the \"WrittenSummaryLong\" field was missing.";
              }
            if (!(hasImage()))
              {
                return "When parsing the object for %what%, the \"Image\" field was missing.";
              }
            if (!(hasURI()))
              {
                return "When parsing the object for %what%, the \"URI\" field was missing.";
              }
            if (!(hasSpokenSummaryShort()))
              {
                return "When parsing the object for %what%, the \"SpokenSummaryShort\" field was missing.";
              }
            if (!(hasSpokenSummaryLong()))
              {
                return "When parsing the object for %what%, the \"SpokenSummaryLong\" field was missing.";
              }
            if (!(hasOriginalID()))
              {
                return "When parsing the object for %what%, the \"OriginalID\" field was missing.";
              }
            if (!(hasResolvedID()))
              {
                return "When parsing the object for %what%, the \"ResolvedID\" field was missing.";
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTitle;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorRequestedTitle;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorShouldIndicateRedirect;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWrittenSummaryShort;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWrittenSummaryLong;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorImage;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorURI;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenSummaryShort;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenSummaryLong;
            JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorOriginalID;
            JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorResolvedID;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorWebCommandEnabled;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWikipediaAttribution;
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
                if (fieldGeneratorTitle.have_value)
                  {
                    result->setTitle(fieldGeneratorTitle.value);
                    fieldGeneratorTitle.have_value = false;
                  }
                else if (!(result->hasTitle()))
                  {
                    error("When parsing the object for %what%, the \"Title\" field was missing.");
                  }
                if (fieldGeneratorRequestedTitle.have_value)
                  {
                    result->setRequestedTitle(fieldGeneratorRequestedTitle.value);
                    fieldGeneratorRequestedTitle.have_value = false;
                  }
                if (fieldGeneratorShouldIndicateRedirect.have_value)
                  {
                    result->setShouldIndicateRedirect(fieldGeneratorShouldIndicateRedirect.value);
                    fieldGeneratorShouldIndicateRedirect.have_value = false;
                  }
                if (fieldGeneratorWrittenSummaryShort.have_value)
                  {
                    result->setWrittenSummaryShort(fieldGeneratorWrittenSummaryShort.value);
                    fieldGeneratorWrittenSummaryShort.have_value = false;
                  }
                else if (!(result->hasWrittenSummaryShort()))
                  {
                    error("When parsing the object for %what%, the \"WrittenSummaryShort\" field was missing.");
                  }
                if (fieldGeneratorWrittenSummaryLong.have_value)
                  {
                    result->setWrittenSummaryLong(fieldGeneratorWrittenSummaryLong.value);
                    fieldGeneratorWrittenSummaryLong.have_value = false;
                  }
                else if (!(result->hasWrittenSummaryLong()))
                  {
                    error("When parsing the object for %what%, the \"WrittenSummaryLong\" field was missing.");
                  }
                if (fieldGeneratorImage.have_value)
                  {
                    result->setImage(fieldGeneratorImage.value);
                    fieldGeneratorImage.have_value = false;
                  }
                else if (!(result->hasImage()))
                  {
                    error("When parsing the object for %what%, the \"Image\" field was missing.");
                  }
                if (fieldGeneratorURI.have_value)
                  {
                    result->setURI(fieldGeneratorURI.value);
                    fieldGeneratorURI.have_value = false;
                  }
                else if (!(result->hasURI()))
                  {
                    error("When parsing the object for %what%, the \"URI\" field was missing.");
                  }
                if (fieldGeneratorSpokenSummaryShort.have_value)
                  {
                    result->setSpokenSummaryShort(fieldGeneratorSpokenSummaryShort.value);
                    fieldGeneratorSpokenSummaryShort.have_value = false;
                  }
                else if (!(result->hasSpokenSummaryShort()))
                  {
                    error("When parsing the object for %what%, the \"SpokenSummaryShort\" field was missing.");
                  }
                if (fieldGeneratorSpokenSummaryLong.have_value)
                  {
                    result->setSpokenSummaryLong(fieldGeneratorSpokenSummaryLong.value);
                    fieldGeneratorSpokenSummaryLong.have_value = false;
                  }
                else if (!(result->hasSpokenSummaryLong()))
                  {
                    error("When parsing the object for %what%, the \"SpokenSummaryLong\" field was missing.");
                  }
                if (fieldGeneratorOriginalID.have_value)
                  {
                    result->setOriginalID(fieldGeneratorOriginalID.value);
                    fieldGeneratorOriginalID.have_value = false;
                  }
                else if (!(result->hasOriginalID()))
                  {
                    error("When parsing the object for %what%, the \"OriginalID\" field was missing.");
                  }
                if (fieldGeneratorResolvedID.have_value)
                  {
                    result->setResolvedID(fieldGeneratorResolvedID.value);
                    fieldGeneratorResolvedID.have_value = false;
                  }
                else if (!(result->hasResolvedID()))
                  {
                    error("When parsing the object for %what%, the \"ResolvedID\" field was missing.");
                  }
                if (fieldGeneratorWebCommandEnabled.have_value)
                  {
                    result->setWebCommandEnabled(fieldGeneratorWebCommandEnabled.value);
                    fieldGeneratorWebCommandEnabled.have_value = false;
                  }
                if (fieldGeneratorWikipediaAttribution.have_value)
                  {
                    result->setWikipediaAttribution(fieldGeneratorWikipediaAttribution.value);
                    fieldGeneratorWikipediaAttribution.have_value = false;
                  }
              }
            virtual void handle_result(TypeNativeDataJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'I':
                        if (strcmp(&(field_name[1]), "mage") == 0)
                            return &fieldGeneratorImage;
                        break;
                    case 'O':
                        if (strcmp(&(field_name[1]), "riginalID") == 0)
                            return &fieldGeneratorOriginalID;
                        break;
                    case 'R':
                        if (strncmp(&(field_name[1]), "e", 1) == 0)
                          {
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'q':
                                    if (strcmp(&(field_name[3]), "uestedTitle") == 0)
                                        return &fieldGeneratorRequestedTitle;
                                    break;
                                case 's':
                                    if (strcmp(&(field_name[3]), "olvedID") == 0)
                                        return &fieldGeneratorResolvedID;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'S':
                        switch ((unsigned char)(field_name[1]))
                          {
                            case 'h':
                                if (strcmp(&(field_name[2]), "ouldIndicateRedirect") == 0)
                                    return &fieldGeneratorShouldIndicateRedirect;
                                break;
                            case 'p':
                                if (strncmp(&(field_name[2]), "okenSummary", 11) == 0)
                                  {
                                    switch ((unsigned char)(field_name[13]))
                                      {
                                        case 'L':
                                            if (strcmp(&(field_name[14]), "ong") == 0)
                                                return &fieldGeneratorSpokenSummaryLong;
                                            break;
                                        case 'S':
                                            if (strcmp(&(field_name[14]), "hort") == 0)
                                                return &fieldGeneratorSpokenSummaryShort;
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
                    case 'T':
                        if (strcmp(&(field_name[1]), "itle") == 0)
                            return &fieldGeneratorTitle;
                        break;
                    case 'U':
                        if (strcmp(&(field_name[1]), "RI") == 0)
                            return &fieldGeneratorURI;
                        break;
                    case 'W':
                        switch ((unsigned char)(field_name[1]))
                          {
                            case 'e':
                                if (strcmp(&(field_name[2]), "bCommandEnabled") == 0)
                                    return &fieldGeneratorWebCommandEnabled;
                                break;
                            case 'i':
                                if (strcmp(&(field_name[2]), "kipediaAttribution") == 0)
                                    return &fieldGeneratorWikipediaAttribution;
                                break;
                            case 'r':
                                if (strncmp(&(field_name[2]), "ittenSummary", 12) == 0)
                                  {
                                    switch ((unsigned char)(field_name[14]))
                                      {
                                        case 'L':
                                            if (strcmp(&(field_name[15]), "ong") == 0)
                                                return &fieldGeneratorWrittenSummaryLong;
                                            break;
                                        case 'S':
                                            if (strcmp(&(field_name[15]), "hort") == 0)
                                                return &fieldGeneratorWrittenSummaryShort;
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
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorTitle("field \"Title\" of the TypeNativeData class"), fieldGeneratorRequestedTitle("field \"RequestedTitle\" of the TypeNativeData class"), fieldGeneratorShouldIndicateRedirect("field \"ShouldIndicateRedirect\" of the TypeNativeData class"), fieldGeneratorWrittenSummaryShort("field \"WrittenSummaryShort\" of the TypeNativeData class"), fieldGeneratorWrittenSummaryLong("field \"WrittenSummaryLong\" of the TypeNativeData class"), fieldGeneratorImage("field \"Image\" of the TypeNativeData class"), fieldGeneratorURI("field \"URI\" of the TypeNativeData class"), fieldGeneratorSpokenSummaryShort("field \"SpokenSummaryShort\" of the TypeNativeData class"), fieldGeneratorSpokenSummaryLong("field \"SpokenSummaryLong\" of the TypeNativeData class"), fieldGeneratorOriginalID("field \"OriginalID\" of the TypeNativeData class"), fieldGeneratorResolvedID("field \"ResolvedID\" of the TypeNativeData class"), fieldGeneratorWebCommandEnabled("field \"WebCommandEnabled\" of the TypeNativeData class"), fieldGeneratorWikipediaAttribution("field \"WikipediaAttribution\" of the TypeNativeData class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeNativeData class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorTitle.reset();
                fieldGeneratorRequestedTitle.reset();
                fieldGeneratorShouldIndicateRedirect.reset();
                fieldGeneratorWrittenSummaryShort.reset();
                fieldGeneratorWrittenSummaryLong.reset();
                fieldGeneratorImage.reset();
                fieldGeneratorURI.reset();
                fieldGeneratorSpokenSummaryShort.reset();
                fieldGeneratorSpokenSummaryLong.reset();
                fieldGeneratorOriginalID.reset();
                fieldGeneratorResolvedID.reset();
                fieldGeneratorWebCommandEnabled.reset();
                fieldGeneratorWikipediaAttribution.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasNativeData;
    std::vector< TypeNativeDataJSON * > storeNativeData;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    WikipediaCommandJSON(const WikipediaCommandJSON &);
    WikipediaCommandJSON & operator=(const WikipediaCommandJSON &other);

    JSONValue * extraNativeDataToJSON(void) const;

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);


  public:
    WikipediaCommandJSON(void);
    virtual ~WikipediaCommandJSON(void);
    const char * getCommandKind(void) const;
    bool  hasNativeData(void) const;
    size_t  countOfNativeData(void) const;
    TypeNativeDataJSON *  elementOfNativeData(size_t element_num);
    const TypeNativeDataJSON *  elementOfNativeData(size_t element_num) const;
    std::vector< TypeNativeDataJSON * >  getNativeData(void);
    const std::vector< TypeNativeDataJSON * >  getNativeData(void) const;

    virtual size_t extraWikipediaCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraWikipediaCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraWikipediaCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraWikipediaCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraWikipediaCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraWikipediaCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraCommandResultComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasNativeData)
            ++result;
        result += extraWikipediaCommandComponentCount();
        return result;
      }
    const char *extraCommandResultComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return "NativeData";
            --remainder;
          }
        return extraWikipediaCommandComponentKey(remainder);
      }
    JSONValue *extraCommandResultComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        return extraWikipediaCommandComponentValue(remainder);
      }
    const JSONValue *extraCommandResultComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        return extraWikipediaCommandComponentValue(remainder);
      }
    JSONValue *extraCommandResultLookup(const char *field_name)
      {
        if (strcmp(field_name, "NativeData") == 0)
            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
        return extraWikipediaCommandLookup(field_name);
      }
    const JSONValue *extraCommandResultLookup(const char *field_name) const
      {
        if (strcmp(field_name, "NativeData") == 0)
            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
        return extraWikipediaCommandLookup(field_name);
      }

    void initNativeData(void)
      {
        if (flagHasNativeData)
          {
            for (size_t num2 = 0; num2 < storeNativeData.size(); ++num2)
              {
                storeNativeData[num2]->remove_reference();
              }
          }
        flagHasNativeData = true;
        storeNativeData.clear();
      }
    void appendNativeData(TypeNativeDataJSON * to_append)
      {
        if (!flagHasNativeData)
          {
            flagHasNativeData = true;
            storeNativeData.clear();
          }
        assert(flagHasNativeData);
        to_append->add_reference();
        storeNativeData.push_back(to_append);
      }
    void unsetNativeData(void)
      {
        if (flagHasNativeData)
          {
            for (size_t num3 = 0; num3 < storeNativeData.size(); ++num3)
              {
                storeNativeData[num3]->remove_reference();
              }
          }
        flagHasNativeData = false;
        storeNativeData.clear();
      }

    virtual void extraWikipediaCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraWikipediaCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraWikipediaCommandLookup(key);
        if (old_field == NULL)
          {
            extraWikipediaCommandAppendPair(key, new_component);
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
    void extraCommandResultAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "NativeData") == 0)
            {
            fromJSONNativeData(new_component, false);
            return;
            }
        extraWikipediaCommandAppendPair(key, new_component);
      }
    void extraCommandResultSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "NativeData") == 0)
            {
            fromJSONNativeData(new_component, false);
            return;
            }
        extraWikipediaCommandSetField(key, new_component);
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
        CommandResultJSON::write_fields_as_json(handler);
        assert(flagHasNativeData);
        handler->start_pair("NativeData");
        assert(storeNativeData.size() >= 1);
        handler->start_array();
        for (size_t num1 = 0; num1 < storeNativeData.size(); ++num1)
          {
            storeNativeData[num1]->write_as_json(handler);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasNativeData()))
          {
            return "When parsing the object for %what%, the \"NativeData\" field was missing.";
          }
        return NULL;
      }

    static WikipediaCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static WikipediaCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        WikipediaCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<WikipediaCommandJSON>, WikipediaCommandJSON *, bool> generator("Type WikipediaCommand", ignore_extras);
            parse_json_value(text, "Text for WikipediaCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static WikipediaCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        WikipediaCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<WikipediaCommandJSON>, WikipediaCommandJSON *, bool> generator("Type WikipediaCommand", ignore_extras);
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
        JSONHoldingArrayGenerator<TypeNativeDataJSON::Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool > fieldGeneratorNativeData;
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
            if (!(strcmp(getCommandResultJSONKey().c_str(), "WikipediaCommand") == 0))
                throw("The key field has a value other than `WikipediaCommand'.");
            WikipediaCommandJSON *result = new WikipediaCommandJSON();
            assert(result != NULL);
            RCHandle<WikipediaCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraWikipediaCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(CommandResultJSON *new_result)
          {
            handle_result((WikipediaCommandJSON *)new_result);
          }
        void finish(WikipediaCommandJSON *result)
          {
            if (fieldGeneratorNativeData.have_value)
              {
                result->initNativeData();
                size_t count = fieldGeneratorNativeData.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendNativeData(fieldGeneratorNativeData.value[num].referenced());
                  }
                fieldGeneratorNativeData.value.clear();
                fieldGeneratorNativeData.have_value = false;
              }
            else if (!(result->hasNativeData()))
              {
                error("When parsing the object for %what%, the \"NativeData\" field was missing.");
              }
            CommandResultJSON::Generator::finish(result);
          }
        virtual void handle_result(WikipediaCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "NativeData") == 0)
                return &fieldGeneratorNativeData;
            return CommandResultJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CommandResultJSON::Generator(ignore_extras), fieldGeneratorNativeData("field \"NativeData\" of the WikipediaCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the WikipediaCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNativeData.reset();
            CommandResultJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* WIKIPEDIACOMMANDJSON_H */
