/* file "NutritionConversationElementJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef NUTRITIONCONVERSATIONELEMENTJSON_H
#define NUTRITIONCONVERSATIONELEMENTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
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


class NutritionConversationElementJSON : public ReferenceCounted
  {
  public:
    enum TypeCommandKind
      {
        CommandKind_NutritionCommand
      };

    static TypeCommandKind  stringToCommandKind(const char *chars);
    static const char * stringFromCommandKind(TypeCommandKind the_enum);
    enum TypeNutritionCommandKind
      {
        NutritionCommandKind_NutritionCommand
      };

    static TypeNutritionCommandKind  stringToNutritionCommandKind(const char *chars);
    static const char * stringFromNutritionCommandKind(TypeNutritionCommandKind the_enum);
    class TypeNutrientsJSON : public ReferenceCounted
      {
      private:
        bool flagHasID;
        OInteger storeID;
        bool flagHasOutputUnitsUOMAuxID;
        OInteger storeOutputUnitsUOMAuxID;
        bool flagHasOutputUnitsUOMID;
        std::string storeOutputUnitsUOMID;

        TypeNutrientsJSON(const TypeNutrientsJSON &);
        TypeNutrientsJSON & operator=(const TypeNutrientsJSON &other);

        void  fromJSONID(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONOutputUnitsUOMAuxID(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONOutputUnitsUOMID(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeNutrientsJSON(void);
        virtual ~TypeNutrientsJSON(void);
        bool  hasID(void) const;
        OInteger  getID(void);
        const OInteger  getID(void) const;
        bool  hasOutputUnitsUOMAuxID(void) const;
        OInteger  getOutputUnitsUOMAuxID(void);
        const OInteger  getOutputUnitsUOMAuxID(void) const;
        bool  hasOutputUnitsUOMID(void) const;
        std::string  getOutputUnitsUOMID(void);
        const std::string  getOutputUnitsUOMID(void) const;


        void setID(OInteger new_value)
          {
            flagHasID = true;
            if (new_value < 0)
                throw("The value for field ID of TypeNutrientsJSON is less than the lower bound (0) for that field.");
            storeID = new_value;
          }
        void unsetID(void)
          {
            flagHasID = false;
          }
        void setOutputUnitsUOMAuxID(OInteger new_value)
          {
            flagHasOutputUnitsUOMAuxID = true;
            if (new_value < -1)
                throw("The value for field OutputUnitsUOMAuxID of TypeNutrientsJSON is less than the lower bound (-1) for that field.");
            storeOutputUnitsUOMAuxID = new_value;
          }
        void unsetOutputUnitsUOMAuxID(void)
          {
            flagHasOutputUnitsUOMAuxID = false;
          }
        void setOutputUnitsUOMID(std::string new_value)
          {
            flagHasOutputUnitsUOMID = true;
            storeOutputUnitsUOMID = new_value;
          }
        void unsetOutputUnitsUOMID(void)
          {
            flagHasOutputUnitsUOMID = false;
          }


        void write_as_json(JSONHandler *handler) const
          {
            handler->start_object();
            write_fields_as_json(handler);
            handler->finish_object();
          }

        virtual void write_fields_as_json(JSONHandler *handler) const
          {
            assert(flagHasID);
            handler->start_pair("ID");
            handler->number_value(storeID.get_o_integer());
            assert(flagHasOutputUnitsUOMAuxID);
            handler->start_pair("OutputUnitsUOMAuxID");
            handler->number_value(storeOutputUnitsUOMAuxID.get_o_integer());
            if (flagHasOutputUnitsUOMID)
              {
                handler->start_pair("OutputUnitsUOMID");
                handler->string_value(storeOutputUnitsUOMID);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasID()))
              {
                return "When parsing the object for %what%, the \"ID\" field was missing.";
              }
            if (!(hasOutputUnitsUOMAuxID()))
              {
                return "When parsing the object for %what%, the \"OutputUnitsUOMAuxID\" field was missing.";
              }
            return NULL;
          }

        static TypeNutrientsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeNutrientsJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeNutrientsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNutrientsJSON>, TypeNutrientsJSON *, bool> generator("Type TypeNutrients", ignore_extras);
                parse_json_value(text, "Text for TypeNutrientsJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeNutrientsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeNutrientsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNutrientsJSON>, TypeNutrientsJSON *, bool> generator("Type TypeNutrients", ignore_extras);
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
            static char lowerBoundID[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundID>, OInteger, o_integer > fieldGeneratorID;
            static char lowerBoundOutputUnitsUOMAuxID[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundOutputUnitsUOMAuxID>, OInteger, o_integer > fieldGeneratorOutputUnitsUOMAuxID;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorOutputUnitsUOMID;


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
                TypeNutrientsJSON *result = new TypeNutrientsJSON();
                assert(result != NULL);
                RCHandle<TypeNutrientsJSON> result_holder = result;
                finish(result);
                handle_result(result);
              }
            void finish(TypeNutrientsJSON *result)
              {
                if (fieldGeneratorID.have_value)
                  {
                    result->setID(fieldGeneratorID.value);
                    fieldGeneratorID.have_value = false;
                  }
                else if (!(result->hasID()))
                  {
                    error("When parsing the object for %what%, the \"ID\" field was missing.");
                  }
                if (fieldGeneratorOutputUnitsUOMAuxID.have_value)
                  {
                    result->setOutputUnitsUOMAuxID(fieldGeneratorOutputUnitsUOMAuxID.value);
                    fieldGeneratorOutputUnitsUOMAuxID.have_value = false;
                  }
                else if (!(result->hasOutputUnitsUOMAuxID()))
                  {
                    error("When parsing the object for %what%, the \"OutputUnitsUOMAuxID\" field was missing.");
                  }
                if (fieldGeneratorOutputUnitsUOMID.have_value)
                  {
                    result->setOutputUnitsUOMID(fieldGeneratorOutputUnitsUOMID.value);
                    fieldGeneratorOutputUnitsUOMID.have_value = false;
                  }
              }
            virtual void handle_result(TypeNutrientsJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'I':
                        if (strcmp(&(field_name[1]), "D") == 0)
                            return &fieldGeneratorID;
                        break;
                    case 'O':
                        if (strncmp(&(field_name[1]), "utputUnitsUOM", 13) == 0)
                          {
                            switch ((unsigned char)(field_name[14]))
                              {
                                case 'A':
                                    if (strcmp(&(field_name[15]), "uxID") == 0)
                                        return &fieldGeneratorOutputUnitsUOMAuxID;
                                    break;
                                case 'I':
                                    if (strcmp(&(field_name[15]), "D") == 0)
                                        return &fieldGeneratorOutputUnitsUOMID;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorID("field \"ID\" of the TypeNutrients class"), fieldGeneratorOutputUnitsUOMAuxID("field \"OutputUnitsUOMAuxID\" of the TypeNutrients class"), fieldGeneratorOutputUnitsUOMID("field \"OutputUnitsUOMID\" of the TypeNutrients class")
              {
                set_what("the TypeNutrients class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorID.reset();
                fieldGeneratorOutputUnitsUOMAuxID.reset();
                fieldGeneratorOutputUnitsUOMID.reset();
                JSONObjectGenerator::reset();
              }
          };
      };
    class TypeConversationFoodBlocksJSON : public ReferenceCounted
      {
      private:
        bool flagHasID;
        OInteger storeID;
        bool flagHasQuantity;
        double storeQuantity;
        std::string textStoreQuantity;
        bool flagHasSizeIndex;
        OInteger storeSizeIndex;
        bool flagHasUOMAuxID;
        OInteger storeUOMAuxID;
        bool flagHasUOMID;
        std::string storeUOMID;

        TypeConversationFoodBlocksJSON(const TypeConversationFoodBlocksJSON &);
        TypeConversationFoodBlocksJSON & operator=(const TypeConversationFoodBlocksJSON &other);

        void  fromJSONID(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONQuantity(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONSizeIndex(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONUOMAuxID(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONUOMID(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeConversationFoodBlocksJSON(void);
        virtual ~TypeConversationFoodBlocksJSON(void);
        bool  hasID(void) const;
        OInteger  getID(void);
        const OInteger  getID(void) const;
        bool  hasQuantity(void) const;
        double  getQuantity(void);
        const double  getQuantity(void) const;
        std::string  getQuantityAsText(void) const;
        bool  hasSizeIndex(void) const;
        OInteger  getSizeIndex(void);
        const OInteger  getSizeIndex(void) const;
        bool  hasUOMAuxID(void) const;
        OInteger  getUOMAuxID(void);
        const OInteger  getUOMAuxID(void) const;
        bool  hasUOMID(void) const;
        std::string  getUOMID(void);
        const std::string  getUOMID(void) const;


        void setID(OInteger new_value)
          {
            flagHasID = true;
            if (new_value < 0)
                throw("The value for field ID of TypeConversationFoodBlocksJSON is less than the lower bound (0) for that field.");
            storeID = new_value;
          }
        void unsetID(void)
          {
            flagHasID = false;
          }
        void setQuantity(double new_value)
          {
            flagHasQuantity = true;
            if (new_value < 0)
                throw("The value for field Quantity of TypeConversationFoodBlocksJSON is less than the lower bound (0) for that field.");
            storeQuantity = new_value;
            textStoreQuantity = "";
          }
        void setQuantityText(std::string new_value)
          {
            flagHasQuantity = true;
            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                throw("The text value for field Quantity of TypeConversationFoodBlocksJSON is not a valid number.");
            if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
                throw("The value for field Quantity of TypeConversationFoodBlocksJSON is less than the lower bound (0) for that field.");
            textStoreQuantity = new_value;
          }
        void unsetQuantity(void)
          {
            flagHasQuantity = false;
          }
        void setSizeIndex(OInteger new_value)
          {
            flagHasSizeIndex = true;
            if (new_value < -1)
                throw("The value for field SizeIndex of TypeConversationFoodBlocksJSON is less than the lower bound (-1) for that field.");
            storeSizeIndex = new_value;
          }
        void unsetSizeIndex(void)
          {
            flagHasSizeIndex = false;
          }
        void setUOMAuxID(OInteger new_value)
          {
            flagHasUOMAuxID = true;
            if (new_value < -1)
                throw("The value for field UOMAuxID of TypeConversationFoodBlocksJSON is less than the lower bound (-1) for that field.");
            storeUOMAuxID = new_value;
          }
        void unsetUOMAuxID(void)
          {
            flagHasUOMAuxID = false;
          }
        void setUOMID(std::string new_value)
          {
            flagHasUOMID = true;
            storeUOMID = new_value;
          }
        void unsetUOMID(void)
          {
            flagHasUOMID = false;
          }


        void write_as_json(JSONHandler *handler) const
          {
            handler->start_object();
            write_fields_as_json(handler);
            handler->finish_object();
          }

        virtual void write_fields_as_json(JSONHandler *handler) const
          {
            assert(flagHasID);
            handler->start_pair("ID");
            handler->number_value(storeID.get_o_integer());
            assert(flagHasQuantity);
            handler->start_pair("Quantity");
            if (textStoreQuantity != "")
                handler->number_value(textStoreQuantity.c_str());
            else if (((double)(long int)storeQuantity) == storeQuantity)
                handler->number_value((long int)storeQuantity);
            else
                handler->number_value(storeQuantity);
            assert(flagHasSizeIndex);
            handler->start_pair("SizeIndex");
            handler->number_value(storeSizeIndex.get_o_integer());
            assert(flagHasUOMAuxID);
            handler->start_pair("UOMAuxID");
            handler->number_value(storeUOMAuxID.get_o_integer());
            if (flagHasUOMID)
              {
                handler->start_pair("UOMID");
                handler->string_value(storeUOMID);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasID()))
              {
                return "When parsing the object for %what%, the \"ID\" field was missing.";
              }
            if (!(hasQuantity()))
              {
                return "When parsing the object for %what%, the \"Quantity\" field was missing.";
              }
            if (!(hasSizeIndex()))
              {
                return "When parsing the object for %what%, the \"SizeIndex\" field was missing.";
              }
            if (!(hasUOMAuxID()))
              {
                return "When parsing the object for %what%, the \"UOMAuxID\" field was missing.";
              }
            return NULL;
          }

        static TypeConversationFoodBlocksJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeConversationFoodBlocksJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeConversationFoodBlocksJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeConversationFoodBlocksJSON>, TypeConversationFoodBlocksJSON *, bool> generator("Type TypeConversationFoodBlocks", ignore_extras);
                parse_json_value(text, "Text for TypeConversationFoodBlocksJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeConversationFoodBlocksJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeConversationFoodBlocksJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeConversationFoodBlocksJSON>, TypeConversationFoodBlocksJSON *, bool> generator("Type TypeConversationFoodBlocks", ignore_extras);
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
            static char lowerBoundID[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundID>, OInteger, o_integer > fieldGeneratorID;
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorQuantity;
            static char lowerBoundSizeIndex[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundSizeIndex>, OInteger, o_integer > fieldGeneratorSizeIndex;
            static char lowerBoundUOMAuxID[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundUOMAuxID>, OInteger, o_integer > fieldGeneratorUOMAuxID;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorUOMID;


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
                TypeConversationFoodBlocksJSON *result = new TypeConversationFoodBlocksJSON();
                assert(result != NULL);
                RCHandle<TypeConversationFoodBlocksJSON> result_holder = result;
                finish(result);
                handle_result(result);
              }
            void finish(TypeConversationFoodBlocksJSON *result)
              {
                if (fieldGeneratorID.have_value)
                  {
                    result->setID(fieldGeneratorID.value);
                    fieldGeneratorID.have_value = false;
                  }
                else if (!(result->hasID()))
                  {
                    error("When parsing the object for %what%, the \"ID\" field was missing.");
                  }
                if (fieldGeneratorQuantity.have_value)
                  {
                    result->setQuantityText(fieldGeneratorQuantity.value);
                    fieldGeneratorQuantity.have_value = false;
                  }
                else if (!(result->hasQuantity()))
                  {
                    error("When parsing the object for %what%, the \"Quantity\" field was missing.");
                  }
                if (fieldGeneratorSizeIndex.have_value)
                  {
                    result->setSizeIndex(fieldGeneratorSizeIndex.value);
                    fieldGeneratorSizeIndex.have_value = false;
                  }
                else if (!(result->hasSizeIndex()))
                  {
                    error("When parsing the object for %what%, the \"SizeIndex\" field was missing.");
                  }
                if (fieldGeneratorUOMAuxID.have_value)
                  {
                    result->setUOMAuxID(fieldGeneratorUOMAuxID.value);
                    fieldGeneratorUOMAuxID.have_value = false;
                  }
                else if (!(result->hasUOMAuxID()))
                  {
                    error("When parsing the object for %what%, the \"UOMAuxID\" field was missing.");
                  }
                if (fieldGeneratorUOMID.have_value)
                  {
                    result->setUOMID(fieldGeneratorUOMID.value);
                    fieldGeneratorUOMID.have_value = false;
                  }
              }
            virtual void handle_result(TypeConversationFoodBlocksJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'I':
                        if (strcmp(&(field_name[1]), "D") == 0)
                            return &fieldGeneratorID;
                        break;
                    case 'Q':
                        if (strcmp(&(field_name[1]), "uantity") == 0)
                            return &fieldGeneratorQuantity;
                        break;
                    case 'S':
                        if (strcmp(&(field_name[1]), "izeIndex") == 0)
                            return &fieldGeneratorSizeIndex;
                        break;
                    case 'U':
                        if (strncmp(&(field_name[1]), "OM", 2) == 0)
                          {
                            switch ((unsigned char)(field_name[3]))
                              {
                                case 'A':
                                    if (strcmp(&(field_name[4]), "uxID") == 0)
                                        return &fieldGeneratorUOMAuxID;
                                    break;
                                case 'I':
                                    if (strcmp(&(field_name[4]), "D") == 0)
                                        return &fieldGeneratorUOMID;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorID("field \"ID\" of the TypeConversationFoodBlocks class"), fieldGeneratorQuantity("field \"Quantity\" of the TypeConversationFoodBlocks class"), fieldGeneratorSizeIndex("field \"SizeIndex\" of the TypeConversationFoodBlocks class"), fieldGeneratorUOMAuxID("field \"UOMAuxID\" of the TypeConversationFoodBlocks class"), fieldGeneratorUOMID("field \"UOMID\" of the TypeConversationFoodBlocks class")
              {
                set_what("the TypeConversationFoodBlocks class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorID.reset();
                fieldGeneratorQuantity.reset();
                fieldGeneratorSizeIndex.reset();
                fieldGeneratorUOMAuxID.reset();
                fieldGeneratorUOMID.reset();
                JSONObjectGenerator::reset();
              }
          };
      };

  private:
    bool flagHasCommandKind;
    bool flagHasNutritionCommandKind;
    bool flagHasNutrients;
    std::vector< TypeNutrientsJSON * > storeNutrients;
    bool flagHasConversationFoodBlocks;
    std::vector< std::vector< TypeConversationFoodBlocksJSON * > > storeConversationFoodBlocks;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    NutritionConversationElementJSON(const NutritionConversationElementJSON &);
    NutritionConversationElementJSON & operator=(const NutritionConversationElementJSON &other);

    void  fromJSONCommandKind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNutritionCommandKind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNutrients(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONConversationFoodBlocks(JSONValue *json_value, bool ignore_extras = false);


  public:
    NutritionConversationElementJSON(void);
    virtual ~NutritionConversationElementJSON(void);
    bool  hasCommandKind(void) const;
    TypeCommandKind  getCommandKind(void);
    const TypeCommandKind  getCommandKind(void) const;
    const char * getCommandKindAsChars(void) const;
    std::string  getCommandKindAsString(void) const;
    bool  hasNutritionCommandKind(void) const;
    TypeNutritionCommandKind  getNutritionCommandKind(void);
    const TypeNutritionCommandKind  getNutritionCommandKind(void) const;
    const char * getNutritionCommandKindAsChars(void) const;
    std::string  getNutritionCommandKindAsString(void) const;
    bool  hasNutrients(void) const;
    size_t  countOfNutrients(void) const;
    TypeNutrientsJSON *  elementOfNutrients(size_t element_num);
    const TypeNutrientsJSON *  elementOfNutrients(size_t element_num) const;
    std::vector< TypeNutrientsJSON * >  getNutrients(void);
    const std::vector< TypeNutrientsJSON * >  getNutrients(void) const;
    bool  hasConversationFoodBlocks(void) const;
    size_t  countOfConversationFoodBlocks(void) const;
    std::vector< TypeConversationFoodBlocksJSON * >  elementOfConversationFoodBlocks(size_t element_num);
    const std::vector< TypeConversationFoodBlocksJSON * >  elementOfConversationFoodBlocks(size_t element_num) const;
    std::vector< std::vector< TypeConversationFoodBlocksJSON * > >  getConversationFoodBlocks(void);
    const std::vector< std::vector< TypeConversationFoodBlocksJSON * > >  getConversationFoodBlocks(void) const;

    virtual size_t extraNutritionConversationElementComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraNutritionConversationElementComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraNutritionConversationElementComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraNutritionConversationElementComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraNutritionConversationElementLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraNutritionConversationElementLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setCommandKind(void)
      {
        flagHasCommandKind = true;
      }
    void setCommandKind(TypeCommandKind new_value)
      {
        setCommandKind();
      }
    void setCommandKind(const char *chars)
      {
        setCommandKind(stringToCommandKind(chars));
      }
    void setCommandKind(std::string the_string)
      {
        setCommandKind(stringToCommandKind(the_string.c_str()));
      }
    void unsetCommandKind(void)
      {
        flagHasCommandKind = false;
      }
    void setNutritionCommandKind(void)
      {
        flagHasNutritionCommandKind = true;
      }
    void setNutritionCommandKind(TypeNutritionCommandKind new_value)
      {
        setNutritionCommandKind();
      }
    void setNutritionCommandKind(const char *chars)
      {
        setNutritionCommandKind(stringToNutritionCommandKind(chars));
      }
    void setNutritionCommandKind(std::string the_string)
      {
        setNutritionCommandKind(stringToNutritionCommandKind(the_string.c_str()));
      }
    void unsetNutritionCommandKind(void)
      {
        flagHasNutritionCommandKind = false;
      }
    void initNutrients(void)
      {
        if (flagHasNutrients)
          {
            for (size_t num4 = 0; num4 < storeNutrients.size(); ++num4)
              {
                storeNutrients[num4]->remove_reference();
              }
          }
        flagHasNutrients = true;
        storeNutrients.clear();
      }
    void appendNutrients(TypeNutrientsJSON * to_append)
      {
        if (!flagHasNutrients)
          {
            flagHasNutrients = true;
            storeNutrients.clear();
          }
        assert(flagHasNutrients);
        to_append->add_reference();
        storeNutrients.push_back(to_append);
      }
    void unsetNutrients(void)
      {
        if (flagHasNutrients)
          {
            for (size_t num5 = 0; num5 < storeNutrients.size(); ++num5)
              {
                storeNutrients[num5]->remove_reference();
              }
          }
        flagHasNutrients = false;
        storeNutrients.clear();
      }
    void initConversationFoodBlocks(void)
      {
        if (flagHasConversationFoodBlocks)
          {
            for (size_t num6 = 0; num6 < storeConversationFoodBlocks.size(); ++num6)
              {
                for (size_t num7 = 0; num7 < storeConversationFoodBlocks[num6].size(); ++num7)
                  {
                    storeConversationFoodBlocks[num6][num7]->remove_reference();
                  }
              }
          }
        flagHasConversationFoodBlocks = true;
        storeConversationFoodBlocks.clear();
      }
    void appendConversationFoodBlocks(std::vector< TypeConversationFoodBlocksJSON * > to_append)
      {
        if (!flagHasConversationFoodBlocks)
          {
            flagHasConversationFoodBlocks = true;
            storeConversationFoodBlocks.clear();
          }
        assert(flagHasConversationFoodBlocks);
        for (size_t num1 = 0; num1 < to_append.size(); ++num1)
          {
            to_append[num1]->add_reference();
          }
        storeConversationFoodBlocks.push_back(to_append);
      }
    void unsetConversationFoodBlocks(void)
      {
        if (flagHasConversationFoodBlocks)
          {
            for (size_t num8 = 0; num8 < storeConversationFoodBlocks.size(); ++num8)
              {
                for (size_t num9 = 0; num9 < storeConversationFoodBlocks[num8].size(); ++num9)
                  {
                    storeConversationFoodBlocks[num8][num9]->remove_reference();
                  }
              }
          }
        flagHasConversationFoodBlocks = false;
        storeConversationFoodBlocks.clear();
      }

    virtual void extraNutritionConversationElementAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraNutritionConversationElementSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraNutritionConversationElementLookup(key);
        if (old_field == NULL)
          {
            extraNutritionConversationElementAppendPair(key, new_component);
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
        assert(flagHasCommandKind);
        handler->start_pair("CommandKind");
        handler->string_value("NutritionCommand");
        assert(flagHasNutritionCommandKind);
        handler->start_pair("NutritionCommandKind");
        handler->string_value("NutritionCommand");
        assert(flagHasNutrients);
        handler->start_pair("Nutrients");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeNutrients.size(); ++num1)
          {
            storeNutrients[num1]->write_as_json(handler);
          }
        handler->finish_array();
        assert(flagHasConversationFoodBlocks);
        handler->start_pair("ConversationFoodBlocks");
        handler->start_array();
        for (size_t num2 = 0; num2 < storeConversationFoodBlocks.size(); ++num2)
          {
            handler->start_array();
            for (size_t num3 = 0; num3 < storeConversationFoodBlocks[num2].size(); ++num3)
              {
                storeConversationFoodBlocks[num2][num3]->write_as_json(handler);
              }
            handler->finish_array();
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasCommandKind()))
          {
            return "When parsing the object for %what%, the \"CommandKind\" field was missing.";
          }
        if (!(hasNutritionCommandKind()))
          {
            return "When parsing the object for %what%, the \"NutritionCommandKind\" field was missing.";
          }
        if (!(hasNutrients()))
          {
            return "When parsing the object for %what%, the \"Nutrients\" field was missing.";
          }
        if (!(hasConversationFoodBlocks()))
          {
            return "When parsing the object for %what%, the \"ConversationFoodBlocks\" field was missing.";
          }
        return NULL;
      }

    static NutritionConversationElementJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static NutritionConversationElementJSON *from_text(const char *text, bool ignore_extras = false)
      {
        NutritionConversationElementJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<NutritionConversationElementJSON>, NutritionConversationElementJSON *, bool> generator("Type NutritionConversationElement", ignore_extras);
            parse_json_value(text, "Text for NutritionConversationElementJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static NutritionConversationElementJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        NutritionConversationElementJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<NutritionConversationElementJSON>, NutritionConversationElementJSON *, bool> generator("Type NutritionConversationElement", ignore_extras);
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
    class FieldGeneratorCommandKind : public JSONStringGenerator
          {
          protected:
            FieldGeneratorCommandKind(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorCommandKind(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToCommandKind(result));
              }
            virtual void handle_result(TypeCommandKind result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorCommandKind, TypeCommandKind, TypeCommandKind > fieldGeneratorCommandKind;
    class FieldGeneratorNutritionCommandKind : public JSONStringGenerator
          {
          protected:
            FieldGeneratorNutritionCommandKind(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorNutritionCommandKind(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToNutritionCommandKind(result));
              }
            virtual void handle_result(TypeNutritionCommandKind result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorNutritionCommandKind, TypeNutritionCommandKind, TypeNutritionCommandKind > fieldGeneratorNutritionCommandKind;
        JSONHoldingArrayGenerator<TypeNutrientsJSON::Generator, RCHandle<TypeNutrientsJSON>, TypeNutrientsJSON *, bool > fieldGeneratorNutrients;
        JSONHoldingArrayGenerator<JSONHoldingArrayGenerator<TypeConversationFoodBlocksJSON::Generator, RCHandle<TypeConversationFoodBlocksJSON>, TypeConversationFoodBlocksJSON *, bool >, std::vector<RCHandle<TypeConversationFoodBlocksJSON> >, std::vector<RCHandle<TypeConversationFoodBlocksJSON> >, bool > fieldGeneratorConversationFoodBlocks;
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
            NutritionConversationElementJSON *result = new NutritionConversationElementJSON();
            assert(result != NULL);
            RCHandle<NutritionConversationElementJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraNutritionConversationElementAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(NutritionConversationElementJSON *result)
          {
            if (fieldGeneratorCommandKind.have_value)
              {
                result->setCommandKind();
                fieldGeneratorCommandKind.have_value = false;
              }
            else if (!(result->hasCommandKind()))
              {
                error("When parsing the object for %what%, the \"CommandKind\" field was missing.");
              }
            if (fieldGeneratorNutritionCommandKind.have_value)
              {
                result->setNutritionCommandKind();
                fieldGeneratorNutritionCommandKind.have_value = false;
              }
            else if (!(result->hasNutritionCommandKind()))
              {
                error("When parsing the object for %what%, the \"NutritionCommandKind\" field was missing.");
              }
            if (fieldGeneratorNutrients.have_value)
              {
                result->initNutrients();
                size_t count = fieldGeneratorNutrients.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendNutrients(fieldGeneratorNutrients.value[num].referenced());
                  }
                fieldGeneratorNutrients.value.clear();
                fieldGeneratorNutrients.have_value = false;
              }
            else if (!(result->hasNutrients()))
              {
                error("When parsing the object for %what%, the \"Nutrients\" field was missing.");
              }
            if (fieldGeneratorConversationFoodBlocks.have_value)
              {
                result->initConversationFoodBlocks();
                size_t count = fieldGeneratorConversationFoodBlocks.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    std::vector< TypeConversationFoodBlocksJSON * > unwrapped0;
                    for (size_t num0 = 0; num0 < fieldGeneratorConversationFoodBlocks.value[num].size(); ++num0)
                      {
                        unwrapped0.push_back(fieldGeneratorConversationFoodBlocks.value[num][num0].referenced());
                      }
                    result->appendConversationFoodBlocks(unwrapped0);
                  }
                fieldGeneratorConversationFoodBlocks.value.clear();
                fieldGeneratorConversationFoodBlocks.have_value = false;
              }
            else if (!(result->hasConversationFoodBlocks()))
              {
                error("When parsing the object for %what%, the \"ConversationFoodBlocks\" field was missing.");
              }
          }
        virtual void handle_result(NutritionConversationElementJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strncmp(&(field_name[1]), "o", 1) == 0)
                      {
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'm':
                                if (strcmp(&(field_name[3]), "mandKind") == 0)
                                    return &fieldGeneratorCommandKind;
                                break;
                            case 'n':
                                if (strcmp(&(field_name[3]), "versationFoodBlocks") == 0)
                                    return &fieldGeneratorConversationFoodBlocks;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'N':
                    if (strncmp(&(field_name[1]), "utri", 4) == 0)
                      {
                        switch ((unsigned char)(field_name[5]))
                          {
                            case 'e':
                                if (strcmp(&(field_name[6]), "nts") == 0)
                                    return &fieldGeneratorNutrients;
                                break;
                            case 't':
                                if (strcmp(&(field_name[6]), "ionCommandKind") == 0)
                                    return &fieldGeneratorNutritionCommandKind;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorCommandKind("field \"CommandKind\" of the NutritionConversationElement class"), fieldGeneratorNutritionCommandKind("field \"NutritionCommandKind\" of the NutritionConversationElement class"), fieldGeneratorNutrients("field \"Nutrients\" of the NutritionConversationElement class", ignore_extras), fieldGeneratorConversationFoodBlocks("field \"ConversationFoodBlocks\" of the NutritionConversationElement class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the NutritionConversationElement class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorCommandKind.reset();
            fieldGeneratorNutritionCommandKind.reset();
            fieldGeneratorNutrients.reset();
            fieldGeneratorConversationFoodBlocks.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* NUTRITIONCONVERSATIONELEMENTJSON_H */
