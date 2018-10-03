/* file "UberDriverJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERDRIVERJSON_H
#define UBERDRIVERJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UberDriverJSON : public ReferenceCounted
  {
  private:
    bool flagHasName;
    std::string storeName;
    bool flagHasPhoneNumber;
    std::string storePhoneNumber;
    bool flagHasRating;
    double storeRating;
    std::string textStoreRating;
    bool flagHasPictureUrl;
    std::string storePictureUrl;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UberDriverJSON(const UberDriverJSON &);
    UberDriverJSON & operator=(const UberDriverJSON &other);

    void  fromJSONName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPhoneNumber(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRating(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPictureUrl(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberDriverJSON(void);
    virtual ~UberDriverJSON(void);
    bool  hasName(void) const;
    std::string  getName(void);
    const std::string  getName(void) const;
    bool  hasPhoneNumber(void) const;
    std::string  getPhoneNumber(void);
    const std::string  getPhoneNumber(void) const;
    bool  hasRating(void) const;
    double  getRating(void);
    const double  getRating(void) const;
    std::string  getRatingAsText(void) const;
    bool  hasPictureUrl(void) const;
    std::string  getPictureUrl(void);
    const std::string  getPictureUrl(void) const;

    virtual size_t extraUberDriverComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberDriverComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberDriverComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberDriverComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberDriverLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberDriverLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setName(std::string new_value)
      {
        flagHasName = true;
        storeName = new_value;
      }
    void unsetName(void)
      {
        flagHasName = false;
      }
    void setPhoneNumber(std::string new_value)
      {
        flagHasPhoneNumber = true;
        storePhoneNumber = new_value;
      }
    void unsetPhoneNumber(void)
      {
        flagHasPhoneNumber = false;
      }
    void setRating(double new_value)
      {
        flagHasRating = true;
        storeRating = new_value;
        textStoreRating = "";
      }
    void setRatingText(std::string new_value)
      {
        flagHasRating = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Rating of UberDriverJSON is not a valid number.");
        textStoreRating = new_value;
      }
    void unsetRating(void)
      {
        flagHasRating = false;
      }
    void setPictureUrl(std::string new_value)
      {
        flagHasPictureUrl = true;
        storePictureUrl = new_value;
      }
    void unsetPictureUrl(void)
      {
        flagHasPictureUrl = false;
      }

    virtual void extraUberDriverAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberDriverSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberDriverLookup(key);
        if (old_field == NULL)
          {
            extraUberDriverAppendPair(key, new_component);
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
        assert(flagHasName);
        handler->start_pair("Name");
        handler->string_value(storeName);
        assert(flagHasPhoneNumber);
        handler->start_pair("PhoneNumber");
        handler->string_value(storePhoneNumber);
        assert(flagHasRating);
        handler->start_pair("Rating");
        if (textStoreRating != "")
            handler->number_value(textStoreRating.c_str());
        else if (((double)(long int)storeRating) == storeRating)
            handler->number_value((long int)storeRating);
        else
            handler->number_value(storeRating);
        if (flagHasPictureUrl)
          {
            handler->start_pair("PictureUrl");
            handler->string_value(storePictureUrl);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasName()))
          {
            return "When parsing the object for %what%, the \"Name\" field was missing.";
          }
        if (!(hasPhoneNumber()))
          {
            return "When parsing the object for %what%, the \"PhoneNumber\" field was missing.";
          }
        if (!(hasRating()))
          {
            return "When parsing the object for %what%, the \"Rating\" field was missing.";
          }
        return NULL;
      }

    static UberDriverJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberDriverJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberDriverJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberDriverJSON>, UberDriverJSON *, bool> generator("Type UberDriver", ignore_extras);
            parse_json_value(text, "Text for UberDriverJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberDriverJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberDriverJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberDriverJSON>, UberDriverJSON *, bool> generator("Type UberDriver", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPhoneNumber;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorRating;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPictureUrl;
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
            UberDriverJSON *result = new UberDriverJSON();
            assert(result != NULL);
            RCHandle<UberDriverJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberDriverAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(UberDriverJSON *result)
          {
            if (fieldGeneratorName.have_value)
              {
                result->setName(fieldGeneratorName.value);
                fieldGeneratorName.have_value = false;
              }
            else if (!(result->hasName()))
              {
                error("When parsing the object for %what%, the \"Name\" field was missing.");
              }
            if (fieldGeneratorPhoneNumber.have_value)
              {
                result->setPhoneNumber(fieldGeneratorPhoneNumber.value);
                fieldGeneratorPhoneNumber.have_value = false;
              }
            else if (!(result->hasPhoneNumber()))
              {
                error("When parsing the object for %what%, the \"PhoneNumber\" field was missing.");
              }
            if (fieldGeneratorRating.have_value)
              {
                result->setRatingText(fieldGeneratorRating.value);
                fieldGeneratorRating.have_value = false;
              }
            else if (!(result->hasRating()))
              {
                error("When parsing the object for %what%, the \"Rating\" field was missing.");
              }
            if (fieldGeneratorPictureUrl.have_value)
              {
                result->setPictureUrl(fieldGeneratorPictureUrl.value);
                fieldGeneratorPictureUrl.have_value = false;
              }
          }
        virtual void handle_result(UberDriverJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'N':
                    if (strcmp(&(field_name[1]), "ame") == 0)
                        return &fieldGeneratorName;
                    break;
                case 'P':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'h':
                            if (strcmp(&(field_name[2]), "oneNumber") == 0)
                                return &fieldGeneratorPhoneNumber;
                            break;
                        case 'i':
                            if (strcmp(&(field_name[2]), "ctureUrl") == 0)
                                return &fieldGeneratorPictureUrl;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "ating") == 0)
                        return &fieldGeneratorRating;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorName("field \"Name\" of the UberDriver class"), fieldGeneratorPhoneNumber("field \"PhoneNumber\" of the UberDriver class"), fieldGeneratorRating("field \"Rating\" of the UberDriver class"), fieldGeneratorPictureUrl("field \"PictureUrl\" of the UberDriver class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberDriver class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorName.reset();
            fieldGeneratorPhoneNumber.reset();
            fieldGeneratorRating.reset();
            fieldGeneratorPictureUrl.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UBERDRIVERJSON_H */
