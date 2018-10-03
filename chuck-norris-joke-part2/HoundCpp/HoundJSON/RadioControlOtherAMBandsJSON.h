/* file "RadioControlOtherAMBandsJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef RADIOCONTROLOTHERAMBANDSJSON_H
#define RADIOCONTROLOTHERAMBANDSJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include <vector>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class RadioControlOtherAMBandsJSON : public ReferenceCounted
  {
  public:
    class TypeValueJSON : public ReferenceCounted
      {
      private:
        bool flagHasMinimum;
        double storeMinimum;
        std::string textStoreMinimum;
        bool flagHasMaximum;
        double storeMaximum;
        std::string textStoreMaximum;
        bool flagHasStep;
        double storeStep;
        std::string textStoreStep;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeValueJSON(const TypeValueJSON &);
        TypeValueJSON & operator=(const TypeValueJSON &other);

        void  fromJSONMinimum(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONMaximum(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONStep(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeValueJSON(void);
        virtual ~TypeValueJSON(void);
        bool  hasMinimum(void) const;
        double  getMinimum(void);
        const double  getMinimum(void) const;
        std::string  getMinimumAsText(void) const;
        bool  hasMaximum(void) const;
        double  getMaximum(void);
        const double  getMaximum(void) const;
        std::string  getMaximumAsText(void) const;
        bool  hasStep(void) const;
        double  getStep(void);
        const double  getStep(void) const;
        std::string  getStepAsText(void) const;

        virtual size_t extraTypeValueComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeValueComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeValueComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeValueComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeValueLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeValueLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setMinimum(double new_value)
          {
            flagHasMinimum = true;
            if (new_value < 148.5)
                throw("The value for field Minimum of TypeValueJSON is less than the lower bound (148.5) for that field.");
            if (new_value > 26100)
                throw("The value for field Minimum of TypeValueJSON is greater than the upper bound (26100) for that field.");
            storeMinimum = new_value;
            textStoreMinimum = "";
          }
        void setMinimumText(std::string new_value)
          {
            flagHasMinimum = true;
            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                throw("The text value for field Minimum of TypeValueJSON is not a valid number.");
            if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "1485", "", false, "3") < 0)
                throw("The value for field Minimum of TypeValueJSON is less than the lower bound (148.5) for that field.");
            if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "26100", "", false, "5") > 0)
                throw("The value for field Minimum of TypeValueJSON is greater than the upper bound (26100) for that field.");
            textStoreMinimum = new_value;
          }
        void unsetMinimum(void)
          {
            flagHasMinimum = false;
          }
        void setMaximum(double new_value)
          {
            flagHasMaximum = true;
            if (new_value < 148.5)
                throw("The value for field Maximum of TypeValueJSON is less than the lower bound (148.5) for that field.");
            if (new_value > 26100)
                throw("The value for field Maximum of TypeValueJSON is greater than the upper bound (26100) for that field.");
            storeMaximum = new_value;
            textStoreMaximum = "";
          }
        void setMaximumText(std::string new_value)
          {
            flagHasMaximum = true;
            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                throw("The text value for field Maximum of TypeValueJSON is not a valid number.");
            if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "1485", "", false, "3") < 0)
                throw("The value for field Maximum of TypeValueJSON is less than the lower bound (148.5) for that field.");
            if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "26100", "", false, "5") > 0)
                throw("The value for field Maximum of TypeValueJSON is greater than the upper bound (26100) for that field.");
            textStoreMaximum = new_value;
          }
        void unsetMaximum(void)
          {
            flagHasMaximum = false;
          }
        void setStep(double new_value)
          {
            flagHasStep = true;
            if (new_value < 1)
                throw("The value for field Step of TypeValueJSON is less than the lower bound (1) for that field.");
            if (new_value > 1000)
                throw("The value for field Step of TypeValueJSON is greater than the upper bound (1000) for that field.");
            storeStep = new_value;
            textStoreStep = "";
          }
        void setStepText(std::string new_value)
          {
            flagHasStep = true;
            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                throw("The text value for field Step of TypeValueJSON is not a valid number.");
            if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "1", "", false, "1") < 0)
                throw("The value for field Step of TypeValueJSON is less than the lower bound (1) for that field.");
            if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "1000", "", false, "4") > 0)
                throw("The value for field Step of TypeValueJSON is greater than the upper bound (1000) for that field.");
            textStoreStep = new_value;
          }
        void unsetStep(void)
          {
            flagHasStep = false;
          }

        virtual void extraTypeValueAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeValueSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeValueLookup(key);
            if (old_field == NULL)
              {
                extraTypeValueAppendPair(key, new_component);
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
            assert(flagHasMinimum);
            handler->start_pair("Minimum");
            if (textStoreMinimum != "")
                handler->number_value(textStoreMinimum.c_str());
            else if (((double)(long int)storeMinimum) == storeMinimum)
                handler->number_value((long int)storeMinimum);
            else
                handler->number_value(storeMinimum);
            assert(flagHasMaximum);
            handler->start_pair("Maximum");
            if (textStoreMaximum != "")
                handler->number_value(textStoreMaximum.c_str());
            else if (((double)(long int)storeMaximum) == storeMaximum)
                handler->number_value((long int)storeMaximum);
            else
                handler->number_value(storeMaximum);
            assert(flagHasStep);
            handler->start_pair("Step");
            if (textStoreStep != "")
                handler->number_value(textStoreStep.c_str());
            else if (((double)(long int)storeStep) == storeStep)
                handler->number_value((long int)storeStep);
            else
                handler->number_value(storeStep);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasMinimum()))
              {
                return "When parsing the object for %what%, the \"Minimum\" field was missing.";
              }
            if (!(hasMaximum()))
              {
                return "When parsing the object for %what%, the \"Maximum\" field was missing.";
              }
            if (!(hasStep()))
              {
                return "When parsing the object for %what%, the \"Step\" field was missing.";
              }
            return NULL;
          }

        static TypeValueJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeValueJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeValueJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeValueJSON>, TypeValueJSON *, bool> generator("Type TypeValue", ignore_extras);
                parse_json_value(text, "Text for TypeValueJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeValueJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeValueJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeValueJSON>, TypeValueJSON *, bool> generator("Type TypeValue", ignore_extras);
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
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorMinimum;
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorMaximum;
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorStep;
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
                TypeValueJSON *result = new TypeValueJSON();
                assert(result != NULL);
                RCHandle<TypeValueJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeValueAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeValueJSON *result)
              {
                if (fieldGeneratorMinimum.have_value)
                  {
                    result->setMinimumText(fieldGeneratorMinimum.value);
                    fieldGeneratorMinimum.have_value = false;
                  }
                else if (!(result->hasMinimum()))
                  {
                    error("When parsing the object for %what%, the \"Minimum\" field was missing.");
                  }
                if (fieldGeneratorMaximum.have_value)
                  {
                    result->setMaximumText(fieldGeneratorMaximum.value);
                    fieldGeneratorMaximum.have_value = false;
                  }
                else if (!(result->hasMaximum()))
                  {
                    error("When parsing the object for %what%, the \"Maximum\" field was missing.");
                  }
                if (fieldGeneratorStep.have_value)
                  {
                    result->setStepText(fieldGeneratorStep.value);
                    fieldGeneratorStep.have_value = false;
                  }
                else if (!(result->hasStep()))
                  {
                    error("When parsing the object for %what%, the \"Step\" field was missing.");
                  }
              }
            virtual void handle_result(TypeValueJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'M':
                        switch ((unsigned char)(field_name[1]))
                          {
                            case 'a':
                                if (strcmp(&(field_name[2]), "ximum") == 0)
                                    return &fieldGeneratorMaximum;
                                break;
                            case 'i':
                                if (strcmp(&(field_name[2]), "nimum") == 0)
                                    return &fieldGeneratorMinimum;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'S':
                        if (strcmp(&(field_name[1]), "tep") == 0)
                            return &fieldGeneratorStep;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorMinimum("field \"Minimum\" of the TypeValue class"), fieldGeneratorMaximum("field \"Maximum\" of the TypeValue class"), fieldGeneratorStep("field \"Step\" of the TypeValue class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeValue class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorMinimum.reset();
                fieldGeneratorMaximum.reset();
                fieldGeneratorStep.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasValue;
    std::vector< TypeValueJSON * > storeValue;

    RadioControlOtherAMBandsJSON(const RadioControlOtherAMBandsJSON &);
    RadioControlOtherAMBandsJSON & operator=(const RadioControlOtherAMBandsJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    RadioControlOtherAMBandsJSON(void);
    virtual ~RadioControlOtherAMBandsJSON(void);
    bool  hasValue(void) const;
    size_t  countOfValue(void) const;
    TypeValueJSON *  elementOfValue(size_t element_num);
    const TypeValueJSON *  elementOfValue(size_t element_num) const;
    std::vector< TypeValueJSON * >  getValue(void);
    const std::vector< TypeValueJSON * >  getValue(void) const;


    void initValue(void)
      {
        if (flagHasValue)
          {
            for (size_t num2 = 0; num2 < storeValue.size(); ++num2)
              {
                storeValue[num2]->remove_reference();
              }
          }
        flagHasValue = true;
        storeValue.clear();
      }
    void appendValue(TypeValueJSON * to_append)
      {
        if (!flagHasValue)
          {
            flagHasValue = true;
            storeValue.clear();
          }
        assert(flagHasValue);
        to_append->add_reference();
        storeValue.push_back(to_append);
      }
    void unsetValue(void)
      {
        if (flagHasValue)
          {
            for (size_t num3 = 0; num3 < storeValue.size(); ++num3)
              {
                storeValue[num3]->remove_reference();
              }
          }
        flagHasValue = false;
        storeValue.clear();
      }


    void write_as_json(JSONHandler *handler) const
      {
        handler->start_array();
        for (size_t num1 = 0; num1 < storeValue.size(); ++num1)
          {
            storeValue[num1]->write_as_json(handler);
          }
        handler->finish_array();
      }

    static RadioControlOtherAMBandsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static RadioControlOtherAMBandsJSON *from_text(const char *text, bool ignore_extras = false)
      {
        RadioControlOtherAMBandsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RadioControlOtherAMBandsJSON>, RadioControlOtherAMBandsJSON *, bool> generator("Type RadioControlOtherAMBands", ignore_extras);
            parse_json_value(text, "Text for RadioControlOtherAMBandsJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static RadioControlOtherAMBandsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        RadioControlOtherAMBandsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RadioControlOtherAMBandsJSON>, RadioControlOtherAMBandsJSON *, bool> generator("Type RadioControlOtherAMBands", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public JSONHoldingArrayGenerator<TypeValueJSON::Generator, RCHandle<TypeValueJSON>, TypeValueJSON *, bool >
      {
      protected:
        void finish(void)
          {
            assert(have_value);
            RadioControlOtherAMBandsJSON *result = new RadioControlOtherAMBandsJSON();
            result->initValue();
            size_t count = value.size();
            for (size_t num = 0; num < count; ++num)
              {
                result->appendValue(value[num].referenced());
              }
            handle_result(result);
          }
        virtual void handle_result(RadioControlOtherAMBandsJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false) : JSONHoldingArrayGenerator<TypeValueJSON::Generator, RCHandle<TypeValueJSON>, TypeValueJSON *, bool >("Type RadioControlOtherAMBands", ignore_extras)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* RADIOCONTROLOTHERAMBANDSJSON_H */
