/* file "AmountJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef AMOUNTJSON_H
#define AMOUNTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONBooleanGenerator.h"
#include <string>
#include "QuantityJSON.h"
#include "UnitJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class AmountJSON : public ReferenceCounted
  {
  public:
    class TypeUnitJSON : public ReferenceCounted
      {
      private:
        bool flagHasSingularSpokenName;
        std::string storeSingularSpokenName;
        bool flagHasSingularWrittenName;
        std::string storeSingularWrittenName;
        bool flagHasPluralSpokenName;
        std::string storePluralSpokenName;
        bool flagHasPluralWrittenName;
        std::string storePluralWrittenName;
        bool flagHasAbbreviation;
        std::string storeAbbreviation;
        bool flagHasSymbol;
        std::string storeSymbol;
        bool flagHasSymbolIsPrefix;
        bool storeSymbolIsPrefix;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeUnitJSON(const TypeUnitJSON &);
        TypeUnitJSON & operator=(const TypeUnitJSON &other);

        void  fromJSONSingularSpokenName(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONSingularWrittenName(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONPluralSpokenName(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONPluralWrittenName(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAbbreviation(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONSymbol(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONSymbolIsPrefix(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeUnitJSON(void);
        virtual ~TypeUnitJSON(void);
        bool  hasSingularSpokenName(void) const;
        std::string  getSingularSpokenName(void);
        const std::string  getSingularSpokenName(void) const;
        bool  hasSingularWrittenName(void) const;
        std::string  getSingularWrittenName(void);
        const std::string  getSingularWrittenName(void) const;
        bool  hasPluralSpokenName(void) const;
        std::string  getPluralSpokenName(void);
        const std::string  getPluralSpokenName(void) const;
        bool  hasPluralWrittenName(void) const;
        std::string  getPluralWrittenName(void);
        const std::string  getPluralWrittenName(void) const;
        bool  hasAbbreviation(void) const;
        std::string  getAbbreviation(void);
        const std::string  getAbbreviation(void) const;
        bool  hasSymbol(void) const;
        std::string  getSymbol(void);
        const std::string  getSymbol(void) const;
        bool  hasSymbolIsPrefix(void) const;
        bool  getSymbolIsPrefix(void);
        const bool  getSymbolIsPrefix(void) const;

        virtual size_t extraTypeUnitComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeUnitComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeUnitComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeUnitComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeUnitLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeUnitLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setSingularSpokenName(std::string new_value)
          {
            flagHasSingularSpokenName = true;
            storeSingularSpokenName = new_value;
          }
        void unsetSingularSpokenName(void)
          {
            flagHasSingularSpokenName = false;
          }
        void setSingularWrittenName(std::string new_value)
          {
            flagHasSingularWrittenName = true;
            storeSingularWrittenName = new_value;
          }
        void unsetSingularWrittenName(void)
          {
            flagHasSingularWrittenName = false;
          }
        void setPluralSpokenName(std::string new_value)
          {
            flagHasPluralSpokenName = true;
            storePluralSpokenName = new_value;
          }
        void unsetPluralSpokenName(void)
          {
            flagHasPluralSpokenName = false;
          }
        void setPluralWrittenName(std::string new_value)
          {
            flagHasPluralWrittenName = true;
            storePluralWrittenName = new_value;
          }
        void unsetPluralWrittenName(void)
          {
            flagHasPluralWrittenName = false;
          }
        void setAbbreviation(std::string new_value)
          {
            flagHasAbbreviation = true;
            storeAbbreviation = new_value;
          }
        void unsetAbbreviation(void)
          {
            flagHasAbbreviation = false;
          }
        void setSymbol(std::string new_value)
          {
            flagHasSymbol = true;
            storeSymbol = new_value;
          }
        void unsetSymbol(void)
          {
            flagHasSymbol = false;
          }
        void setSymbolIsPrefix(bool new_value)
          {
            flagHasSymbolIsPrefix = true;
            storeSymbolIsPrefix = new_value;
          }
        void unsetSymbolIsPrefix(void)
          {
            flagHasSymbolIsPrefix = false;
          }

        virtual void extraTypeUnitAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeUnitSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeUnitLookup(key);
            if (old_field == NULL)
              {
                extraTypeUnitAppendPair(key, new_component);
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
            assert(flagHasSingularSpokenName);
            handler->start_pair("SingularSpokenName");
            handler->string_value(storeSingularSpokenName);
            assert(flagHasSingularWrittenName);
            handler->start_pair("SingularWrittenName");
            handler->string_value(storeSingularWrittenName);
            assert(flagHasPluralSpokenName);
            handler->start_pair("PluralSpokenName");
            handler->string_value(storePluralSpokenName);
            assert(flagHasPluralWrittenName);
            handler->start_pair("PluralWrittenName");
            handler->string_value(storePluralWrittenName);
            if (flagHasAbbreviation)
              {
                handler->start_pair("Abbreviation");
                handler->string_value(storeAbbreviation);
              }
            if (flagHasSymbol)
              {
                handler->start_pair("Symbol");
                handler->string_value(storeSymbol);
              }
            if (flagHasSymbolIsPrefix)
              {
                handler->start_pair("SymbolIsPrefix");
                handler->boolean_value(storeSymbolIsPrefix);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasSingularSpokenName()))
              {
                return "When parsing the object for %what%, the \"SingularSpokenName\" field was missing.";
              }
            if (!(hasSingularWrittenName()))
              {
                return "When parsing the object for %what%, the \"SingularWrittenName\" field was missing.";
              }
            if (!(hasPluralSpokenName()))
              {
                return "When parsing the object for %what%, the \"PluralSpokenName\" field was missing.";
              }
            if (!(hasPluralWrittenName()))
              {
                return "When parsing the object for %what%, the \"PluralWrittenName\" field was missing.";
              }
            return NULL;
          }

        static TypeUnitJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeUnitJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeUnitJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeUnitJSON>, TypeUnitJSON *, bool> generator("Type TypeUnit", ignore_extras);
                parse_json_value(text, "Text for TypeUnitJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeUnitJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeUnitJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeUnitJSON>, TypeUnitJSON *, bool> generator("Type TypeUnit", ignore_extras);
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSingularSpokenName;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSingularWrittenName;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPluralSpokenName;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPluralWrittenName;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAbbreviation;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSymbol;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorSymbolIsPrefix;
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
                TypeUnitJSON *result = new TypeUnitJSON();
                assert(result != NULL);
                RCHandle<TypeUnitJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeUnitAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeUnitJSON *result)
              {
                if (fieldGeneratorSingularSpokenName.have_value)
                  {
                    result->setSingularSpokenName(fieldGeneratorSingularSpokenName.value);
                    fieldGeneratorSingularSpokenName.have_value = false;
                  }
                else if (!(result->hasSingularSpokenName()))
                  {
                    error("When parsing the object for %what%, the \"SingularSpokenName\" field was missing.");
                  }
                if (fieldGeneratorSingularWrittenName.have_value)
                  {
                    result->setSingularWrittenName(fieldGeneratorSingularWrittenName.value);
                    fieldGeneratorSingularWrittenName.have_value = false;
                  }
                else if (!(result->hasSingularWrittenName()))
                  {
                    error("When parsing the object for %what%, the \"SingularWrittenName\" field was missing.");
                  }
                if (fieldGeneratorPluralSpokenName.have_value)
                  {
                    result->setPluralSpokenName(fieldGeneratorPluralSpokenName.value);
                    fieldGeneratorPluralSpokenName.have_value = false;
                  }
                else if (!(result->hasPluralSpokenName()))
                  {
                    error("When parsing the object for %what%, the \"PluralSpokenName\" field was missing.");
                  }
                if (fieldGeneratorPluralWrittenName.have_value)
                  {
                    result->setPluralWrittenName(fieldGeneratorPluralWrittenName.value);
                    fieldGeneratorPluralWrittenName.have_value = false;
                  }
                else if (!(result->hasPluralWrittenName()))
                  {
                    error("When parsing the object for %what%, the \"PluralWrittenName\" field was missing.");
                  }
                if (fieldGeneratorAbbreviation.have_value)
                  {
                    result->setAbbreviation(fieldGeneratorAbbreviation.value);
                    fieldGeneratorAbbreviation.have_value = false;
                  }
                if (fieldGeneratorSymbol.have_value)
                  {
                    result->setSymbol(fieldGeneratorSymbol.value);
                    fieldGeneratorSymbol.have_value = false;
                  }
                if (fieldGeneratorSymbolIsPrefix.have_value)
                  {
                    result->setSymbolIsPrefix(fieldGeneratorSymbolIsPrefix.value);
                    fieldGeneratorSymbolIsPrefix.have_value = false;
                  }
              }
            virtual void handle_result(TypeUnitJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'A':
                        if (strcmp(&(field_name[1]), "bbreviation") == 0)
                            return &fieldGeneratorAbbreviation;
                        break;
                    case 'P':
                        if (strncmp(&(field_name[1]), "lural", 5) == 0)
                          {
                            switch ((unsigned char)(field_name[6]))
                              {
                                case 'S':
                                    if (strcmp(&(field_name[7]), "pokenName") == 0)
                                        return &fieldGeneratorPluralSpokenName;
                                    break;
                                case 'W':
                                    if (strcmp(&(field_name[7]), "rittenName") == 0)
                                        return &fieldGeneratorPluralWrittenName;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'S':
                        switch ((unsigned char)(field_name[1]))
                          {
                            case 'i':
                                if (strncmp(&(field_name[2]), "ngular", 6) == 0)
                                  {
                                    switch ((unsigned char)(field_name[8]))
                                      {
                                        case 'S':
                                            if (strcmp(&(field_name[9]), "pokenName") == 0)
                                                return &fieldGeneratorSingularSpokenName;
                                            break;
                                        case 'W':
                                            if (strcmp(&(field_name[9]), "rittenName") == 0)
                                                return &fieldGeneratorSingularWrittenName;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'y':
                                if (strncmp(&(field_name[2]), "mbol", 4) == 0)
                                  {
                                    switch ((unsigned char)(field_name[6]))
                                      {
                                        case 0:
                                            return &fieldGeneratorSymbol;
                                        case 'I':
                                            if (strcmp(&(field_name[7]), "sPrefix") == 0)
                                                return &fieldGeneratorSymbolIsPrefix;
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
            Generator(bool ignore_extras = false) : fieldGeneratorSingularSpokenName("field \"SingularSpokenName\" of the TypeUnit class"), fieldGeneratorSingularWrittenName("field \"SingularWrittenName\" of the TypeUnit class"), fieldGeneratorPluralSpokenName("field \"PluralSpokenName\" of the TypeUnit class"), fieldGeneratorPluralWrittenName("field \"PluralWrittenName\" of the TypeUnit class"), fieldGeneratorAbbreviation("field \"Abbreviation\" of the TypeUnit class"), fieldGeneratorSymbol("field \"Symbol\" of the TypeUnit class"), fieldGeneratorSymbolIsPrefix("field \"SymbolIsPrefix\" of the TypeUnit class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeUnit class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorSingularSpokenName.reset();
                fieldGeneratorSingularWrittenName.reset();
                fieldGeneratorPluralSpokenName.reset();
                fieldGeneratorPluralWrittenName.reset();
                fieldGeneratorAbbreviation.reset();
                fieldGeneratorSymbol.reset();
                fieldGeneratorSymbolIsPrefix.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasQuantity;
    double storeQuantity;
    std::string textStoreQuantity;
    bool flagHasQuantityDetails;
    QuantityJSON * storeQuantityDetails;
    bool flagHasUnit;
    TypeUnitJSON * storeUnit;
    bool flagHasUnitDetails;
    UnitJSON * storeUnitDetails;
    bool flagHasSpokenQuantityName;
    std::string storeSpokenQuantityName;
    bool flagHasWrittenQuantityName;
    std::string storeWrittenQuantityName;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    AmountJSON(const AmountJSON &);
    AmountJSON & operator=(const AmountJSON &other);

    void  fromJSONQuantity(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONQuantityDetails(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUnit(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUnitDetails(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenQuantityName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWrittenQuantityName(JSONValue *json_value, bool ignore_extras = false);


  public:
    AmountJSON(void);
    virtual ~AmountJSON(void);
    bool  hasQuantity(void) const;
    double  getQuantity(void);
    const double  getQuantity(void) const;
    std::string  getQuantityAsText(void) const;
    bool  hasQuantityDetails(void) const;
    QuantityJSON *  getQuantityDetails(void);
    const QuantityJSON *  getQuantityDetails(void) const;
    bool  hasUnit(void) const;
    TypeUnitJSON *  getUnit(void);
    const TypeUnitJSON *  getUnit(void) const;
    bool  hasUnitDetails(void) const;
    UnitJSON *  getUnitDetails(void);
    const UnitJSON *  getUnitDetails(void) const;
    bool  hasSpokenQuantityName(void) const;
    std::string  getSpokenQuantityName(void);
    const std::string  getSpokenQuantityName(void) const;
    bool  hasWrittenQuantityName(void) const;
    std::string  getWrittenQuantityName(void);
    const std::string  getWrittenQuantityName(void) const;

    virtual size_t extraAmountComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraAmountComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraAmountComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraAmountComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraAmountLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraAmountLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setQuantity(double new_value)
      {
        flagHasQuantity = true;
        storeQuantity = new_value;
        textStoreQuantity = "";
      }
    void setQuantityText(std::string new_value)
      {
        flagHasQuantity = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Quantity of AmountJSON is not a valid number.");
        textStoreQuantity = new_value;
      }
    void unsetQuantity(void)
      {
        flagHasQuantity = false;
      }
    void setQuantityDetails(QuantityJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasQuantityDetails)
          {
            storeQuantityDetails->remove_reference();
          }
        flagHasQuantityDetails = true;
        storeQuantityDetails = new_value;
      }
    void unsetQuantityDetails(void)
      {
        if (flagHasQuantityDetails)
          {
            storeQuantityDetails->remove_reference();
          }
        flagHasQuantityDetails = false;
      }
    void setUnit(TypeUnitJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasUnit)
          {
            storeUnit->remove_reference();
          }
        flagHasUnit = true;
        storeUnit = new_value;
      }
    void unsetUnit(void)
      {
        if (flagHasUnit)
          {
            storeUnit->remove_reference();
          }
        flagHasUnit = false;
      }
    void setUnitDetails(UnitJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasUnitDetails)
          {
            storeUnitDetails->remove_reference();
          }
        flagHasUnitDetails = true;
        storeUnitDetails = new_value;
      }
    void unsetUnitDetails(void)
      {
        if (flagHasUnitDetails)
          {
            storeUnitDetails->remove_reference();
          }
        flagHasUnitDetails = false;
      }
    void setSpokenQuantityName(std::string new_value)
      {
        flagHasSpokenQuantityName = true;
        storeSpokenQuantityName = new_value;
      }
    void unsetSpokenQuantityName(void)
      {
        flagHasSpokenQuantityName = false;
      }
    void setWrittenQuantityName(std::string new_value)
      {
        flagHasWrittenQuantityName = true;
        storeWrittenQuantityName = new_value;
      }
    void unsetWrittenQuantityName(void)
      {
        flagHasWrittenQuantityName = false;
      }

    virtual void extraAmountAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraAmountSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraAmountLookup(key);
        if (old_field == NULL)
          {
            extraAmountAppendPair(key, new_component);
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
        assert(flagHasQuantity);
        handler->start_pair("Quantity");
        if (textStoreQuantity != "")
            handler->number_value(textStoreQuantity.c_str());
        else if (((double)(long int)storeQuantity) == storeQuantity)
            handler->number_value((long int)storeQuantity);
        else
            handler->number_value(storeQuantity);
        if (flagHasQuantityDetails)
          {
            handler->start_pair("QuantityDetails");
            storeQuantityDetails->write_as_json(handler);
          }
        if (flagHasUnit)
          {
            handler->start_pair("Unit");
            storeUnit->write_as_json(handler);
          }
        if (flagHasUnitDetails)
          {
            handler->start_pair("UnitDetails");
            storeUnitDetails->write_as_json(handler);
          }
        if (flagHasSpokenQuantityName)
          {
            handler->start_pair("SpokenQuantityName");
            handler->string_value(storeSpokenQuantityName);
          }
        if (flagHasWrittenQuantityName)
          {
            handler->start_pair("WrittenQuantityName");
            handler->string_value(storeWrittenQuantityName);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasQuantity()))
          {
            return "When parsing the object for %what%, the \"Quantity\" field was missing.";
          }
        return NULL;
      }

    static AmountJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static AmountJSON *from_text(const char *text, bool ignore_extras = false)
      {
        AmountJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AmountJSON>, AmountJSON *, bool> generator("Type Amount", ignore_extras);
            parse_json_value(text, "Text for AmountJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static AmountJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        AmountJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AmountJSON>, AmountJSON *, bool> generator("Type Amount", ignore_extras);
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
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorQuantity;
        JSONHoldingGenerator<QuantityJSON::Generator, RCHandle<QuantityJSON>, QuantityJSON *, bool > fieldGeneratorQuantityDetails;
        JSONHoldingGenerator<TypeUnitJSON::Generator, RCHandle<TypeUnitJSON>, TypeUnitJSON *, bool > fieldGeneratorUnit;
        JSONHoldingGenerator<UnitJSON::Generator, RCHandle<UnitJSON>, UnitJSON *, bool > fieldGeneratorUnitDetails;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenQuantityName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWrittenQuantityName;
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
            AmountJSON *result = new AmountJSON();
            assert(result != NULL);
            RCHandle<AmountJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraAmountAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(AmountJSON *result)
          {
            if (fieldGeneratorQuantity.have_value)
              {
                result->setQuantityText(fieldGeneratorQuantity.value);
                fieldGeneratorQuantity.have_value = false;
              }
            else if (!(result->hasQuantity()))
              {
                error("When parsing the object for %what%, the \"Quantity\" field was missing.");
              }
            if (fieldGeneratorQuantityDetails.have_value)
              {
                result->setQuantityDetails(fieldGeneratorQuantityDetails.value.referenced());
                fieldGeneratorQuantityDetails.have_value = false;
              }
            if (fieldGeneratorUnit.have_value)
              {
                result->setUnit(fieldGeneratorUnit.value.referenced());
                fieldGeneratorUnit.have_value = false;
              }
            if (fieldGeneratorUnitDetails.have_value)
              {
                result->setUnitDetails(fieldGeneratorUnitDetails.value.referenced());
                fieldGeneratorUnitDetails.have_value = false;
              }
            if (fieldGeneratorSpokenQuantityName.have_value)
              {
                result->setSpokenQuantityName(fieldGeneratorSpokenQuantityName.value);
                fieldGeneratorSpokenQuantityName.have_value = false;
              }
            if (fieldGeneratorWrittenQuantityName.have_value)
              {
                result->setWrittenQuantityName(fieldGeneratorWrittenQuantityName.value);
                fieldGeneratorWrittenQuantityName.have_value = false;
              }
          }
        virtual void handle_result(AmountJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'Q':
                    if (strncmp(&(field_name[1]), "uantity", 7) == 0)
                      {
                        switch ((unsigned char)(field_name[8]))
                          {
                            case 0:
                                return &fieldGeneratorQuantity;
                            case 'D':
                                if (strcmp(&(field_name[9]), "etails") == 0)
                                    return &fieldGeneratorQuantityDetails;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "pokenQuantityName") == 0)
                        return &fieldGeneratorSpokenQuantityName;
                    break;
                case 'U':
                    if (strncmp(&(field_name[1]), "nit", 3) == 0)
                      {
                        switch ((unsigned char)(field_name[4]))
                          {
                            case 0:
                                return &fieldGeneratorUnit;
                            case 'D':
                                if (strcmp(&(field_name[5]), "etails") == 0)
                                    return &fieldGeneratorUnitDetails;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'W':
                    if (strcmp(&(field_name[1]), "rittenQuantityName") == 0)
                        return &fieldGeneratorWrittenQuantityName;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorQuantity("field \"Quantity\" of the Amount class"), fieldGeneratorQuantityDetails("field \"QuantityDetails\" of the Amount class", ignore_extras), fieldGeneratorUnit("field \"Unit\" of the Amount class", ignore_extras), fieldGeneratorUnitDetails("field \"UnitDetails\" of the Amount class", ignore_extras), fieldGeneratorSpokenQuantityName("field \"SpokenQuantityName\" of the Amount class"), fieldGeneratorWrittenQuantityName("field \"WrittenQuantityName\" of the Amount class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the Amount class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorQuantity.reset();
            fieldGeneratorQuantityDetails.reset();
            fieldGeneratorUnit.reset();
            fieldGeneratorUnitDetails.reset();
            fieldGeneratorSpokenQuantityName.reset();
            fieldGeneratorWrittenQuantityName.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* AMOUNTJSON_H */
