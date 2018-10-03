/* file "NutritionConversationElementJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "NutritionConversationElementJSON.h"

#include "NutritionConversationElementJSON.h"


NutritionConversationElementJSON::TypeCommandKind NutritionConversationElementJSON::stringToCommandKind(const char *chars)
  {
    if (strcmp(chars, "NutritionCommand") == 0)
        return CommandKind_NutritionCommand;
    throw("The value for field `CommandKind' is not one of the legal values.");
  }

const char *NutritionConversationElementJSON::stringFromCommandKind(TypeCommandKind the_enum)
  {
    switch (the_enum)
      {
        case CommandKind_NutritionCommand:
            return "NutritionCommand";
        default:
            assert(false);
            return NULL;
      }
  }

NutritionConversationElementJSON::TypeNutritionCommandKind NutritionConversationElementJSON::stringToNutritionCommandKind(const char *chars)
  {
    if (strcmp(chars, "NutritionCommand") == 0)
        return NutritionCommandKind_NutritionCommand;
    throw("The value for field `NutritionCommandKind' is not one of the legal values.");
  }

const char *NutritionConversationElementJSON::stringFromNutritionCommandKind(TypeNutritionCommandKind the_enum)
  {
    switch (the_enum)
      {
        case NutritionCommandKind_NutritionCommand:
            return "NutritionCommand";
        default:
            assert(false);
            return NULL;
      }
  }

NutritionConversationElementJSON::TypeNutrientsJSON::TypeNutrientsJSON(const TypeNutrientsJSON &)
  {
    assert(false);
  }

NutritionConversationElementJSON::TypeNutrientsJSON &NutritionConversationElementJSON::TypeNutrientsJSON::operator=(const TypeNutrientsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void NutritionConversationElementJSON::TypeNutrientsJSON::fromJSONID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ID of TypeNutrientsJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ID of TypeNutrientsJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setID(extracted_integer);
  }

void NutritionConversationElementJSON::TypeNutrientsJSON::fromJSONOutputUnitsUOMAuxID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field OutputUnitsUOMAuxID of TypeNutrientsJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field OutputUnitsUOMAuxID of TypeNutrientsJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setOutputUnitsUOMAuxID(extracted_integer);
  }

void NutritionConversationElementJSON::TypeNutrientsJSON::fromJSONOutputUnitsUOMID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field OutputUnitsUOMID of TypeNutrientsJSON is not a string.");
    setOutputUnitsUOMID(std::string(json_string->getData()));
  }

NutritionConversationElementJSON::TypeNutrientsJSON::TypeNutrientsJSON(void) :
        flagHasID(false),
        flagHasOutputUnitsUOMAuxID(false),
        flagHasOutputUnitsUOMID(false)
  {
  }

NutritionConversationElementJSON::TypeNutrientsJSON::~TypeNutrientsJSON(void)
  {
  }

bool NutritionConversationElementJSON::TypeNutrientsJSON::hasID(void) const
  {
    return flagHasID;
  }

OInteger NutritionConversationElementJSON::TypeNutrientsJSON::getID(void)
  {
    assert(flagHasID);
    return storeID;
  }

const OInteger NutritionConversationElementJSON::TypeNutrientsJSON::getID(void) const
  {
    assert(flagHasID);
    return storeID;
  }

bool NutritionConversationElementJSON::TypeNutrientsJSON::hasOutputUnitsUOMAuxID(void) const
  {
    return flagHasOutputUnitsUOMAuxID;
  }

OInteger NutritionConversationElementJSON::TypeNutrientsJSON::getOutputUnitsUOMAuxID(void)
  {
    assert(flagHasOutputUnitsUOMAuxID);
    return storeOutputUnitsUOMAuxID;
  }

const OInteger NutritionConversationElementJSON::TypeNutrientsJSON::getOutputUnitsUOMAuxID(void) const
  {
    assert(flagHasOutputUnitsUOMAuxID);
    return storeOutputUnitsUOMAuxID;
  }

bool NutritionConversationElementJSON::TypeNutrientsJSON::hasOutputUnitsUOMID(void) const
  {
    return flagHasOutputUnitsUOMID;
  }

std::string NutritionConversationElementJSON::TypeNutrientsJSON::getOutputUnitsUOMID(void)
  {
    assert(flagHasOutputUnitsUOMID);
    return storeOutputUnitsUOMID;
  }

const std::string NutritionConversationElementJSON::TypeNutrientsJSON::getOutputUnitsUOMID(void) const
  {
    assert(flagHasOutputUnitsUOMID);
    return storeOutputUnitsUOMID;
  }

NutritionConversationElementJSON::TypeConversationFoodBlocksJSON::TypeConversationFoodBlocksJSON(const TypeConversationFoodBlocksJSON &)
  {
    assert(false);
  }

NutritionConversationElementJSON::TypeConversationFoodBlocksJSON &NutritionConversationElementJSON::TypeConversationFoodBlocksJSON::operator=(const TypeConversationFoodBlocksJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void NutritionConversationElementJSON::TypeConversationFoodBlocksJSON::fromJSONID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ID of TypeConversationFoodBlocksJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ID of TypeConversationFoodBlocksJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setID(extracted_integer);
  }

void NutritionConversationElementJSON::TypeConversationFoodBlocksJSON::fromJSONQuantity(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field Quantity of TypeConversationFoodBlocksJSON is not a number.");
          }
      }
    setQuantityText(the_rational_text);
  }

void NutritionConversationElementJSON::TypeConversationFoodBlocksJSON::fromJSONSizeIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field SizeIndex of TypeConversationFoodBlocksJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field SizeIndex of TypeConversationFoodBlocksJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setSizeIndex(extracted_integer);
  }

void NutritionConversationElementJSON::TypeConversationFoodBlocksJSON::fromJSONUOMAuxID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field UOMAuxID of TypeConversationFoodBlocksJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field UOMAuxID of TypeConversationFoodBlocksJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setUOMAuxID(extracted_integer);
  }

void NutritionConversationElementJSON::TypeConversationFoodBlocksJSON::fromJSONUOMID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field UOMID of TypeConversationFoodBlocksJSON is not a string.");
    setUOMID(std::string(json_string->getData()));
  }

NutritionConversationElementJSON::TypeConversationFoodBlocksJSON::TypeConversationFoodBlocksJSON(void) :
        flagHasID(false),
        flagHasQuantity(false),
        flagHasSizeIndex(false),
        flagHasUOMAuxID(false),
        flagHasUOMID(false)
  {
  }

NutritionConversationElementJSON::TypeConversationFoodBlocksJSON::~TypeConversationFoodBlocksJSON(void)
  {
  }

bool NutritionConversationElementJSON::TypeConversationFoodBlocksJSON::hasID(void) const
  {
    return flagHasID;
  }

OInteger NutritionConversationElementJSON::TypeConversationFoodBlocksJSON::getID(void)
  {
    assert(flagHasID);
    return storeID;
  }

const OInteger NutritionConversationElementJSON::TypeConversationFoodBlocksJSON::getID(void) const
  {
    assert(flagHasID);
    return storeID;
  }

bool NutritionConversationElementJSON::TypeConversationFoodBlocksJSON::hasQuantity(void) const
  {
    return flagHasQuantity;
  }

double NutritionConversationElementJSON::TypeConversationFoodBlocksJSON::getQuantity(void)
  {
    assert(flagHasQuantity);
    if (textStoreQuantity != "")
      {
        return atof(textStoreQuantity.c_str());
      }
    return storeQuantity;
  }

const double NutritionConversationElementJSON::TypeConversationFoodBlocksJSON::getQuantity(void) const
  {
    assert(flagHasQuantity);
    if (textStoreQuantity != "")
      {
        return atof(textStoreQuantity.c_str());
      }
    return storeQuantity;
  }

std::string NutritionConversationElementJSON::TypeConversationFoodBlocksJSON::getQuantityAsText(void) const
  {
    assert(flagHasQuantity);
    if (textStoreQuantity == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeQuantity);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreQuantity);
      }
  }

bool NutritionConversationElementJSON::TypeConversationFoodBlocksJSON::hasSizeIndex(void) const
  {
    return flagHasSizeIndex;
  }

OInteger NutritionConversationElementJSON::TypeConversationFoodBlocksJSON::getSizeIndex(void)
  {
    assert(flagHasSizeIndex);
    return storeSizeIndex;
  }

const OInteger NutritionConversationElementJSON::TypeConversationFoodBlocksJSON::getSizeIndex(void) const
  {
    assert(flagHasSizeIndex);
    return storeSizeIndex;
  }

bool NutritionConversationElementJSON::TypeConversationFoodBlocksJSON::hasUOMAuxID(void) const
  {
    return flagHasUOMAuxID;
  }

OInteger NutritionConversationElementJSON::TypeConversationFoodBlocksJSON::getUOMAuxID(void)
  {
    assert(flagHasUOMAuxID);
    return storeUOMAuxID;
  }

const OInteger NutritionConversationElementJSON::TypeConversationFoodBlocksJSON::getUOMAuxID(void) const
  {
    assert(flagHasUOMAuxID);
    return storeUOMAuxID;
  }

bool NutritionConversationElementJSON::TypeConversationFoodBlocksJSON::hasUOMID(void) const
  {
    return flagHasUOMID;
  }

std::string NutritionConversationElementJSON::TypeConversationFoodBlocksJSON::getUOMID(void)
  {
    assert(flagHasUOMID);
    return storeUOMID;
  }

const std::string NutritionConversationElementJSON::TypeConversationFoodBlocksJSON::getUOMID(void) const
  {
    assert(flagHasUOMID);
    return storeUOMID;
  }

NutritionConversationElementJSON::NutritionConversationElementJSON(const NutritionConversationElementJSON &)
  {
    assert(false);
  }

NutritionConversationElementJSON &NutritionConversationElementJSON::operator=(const NutritionConversationElementJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void NutritionConversationElementJSON::fromJSONCommandKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandKind of NutritionConversationElementJSON is not a string.");
    if (!(strcmp(json_string->getData(), "NutritionCommand") == 0))
        throw("The value for field CommandKind of NutritionConversationElementJSON is not `NutritionCommand'.");
    setCommandKind();
  }

void NutritionConversationElementJSON::fromJSONNutritionCommandKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field NutritionCommandKind of NutritionConversationElementJSON is not a string.");
    if (!(strcmp(json_string->getData(), "NutritionCommand") == 0))
        throw("The value for field NutritionCommandKind of NutritionConversationElementJSON is not `NutritionCommand'.");
    setNutritionCommandKind();
  }

void NutritionConversationElementJSON::fromJSONNutrients(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Nutrients of NutritionConversationElementJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeNutrientsJSON * > vector_Nutrients1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeNutrientsJSON *convert_classy = TypeNutrientsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Nutrients1[num1] = convert_classy;
      }
    initNutrients();
    for (size_t num3 = 0; num3 < vector_Nutrients1.size(); ++num3)
        appendNutrients(vector_Nutrients1[num3]);
    for (size_t num1 = 0; num1 < vector_Nutrients1.size(); ++num1)
      {
        vector_Nutrients1[num1]->remove_reference();
      }
  }

void NutritionConversationElementJSON::fromJSONConversationFoodBlocks(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ConversationFoodBlocks of NutritionConversationElementJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::vector< TypeConversationFoodBlocksJSON * > > vector_ConversationFoodBlocks1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        JSONArrayValue *json_array2 = json_array1->component(num1)->array_value();
        if (json_array2 == NULL)
            throw("The value for an element of field ConversationFoodBlocks of NutritionConversationElementJSON is not an array.");
        size_t count2 = json_array2->componentCount();
        std::vector< TypeConversationFoodBlocksJSON * > vector_ConversationFoodBlocks2(count2);
        for (size_t num2 = 0; num2 < count2; ++num2)
          {
            TypeConversationFoodBlocksJSON *convert_classy = TypeConversationFoodBlocksJSON::from_json(json_array2->component(num2), ignore_extras);
            convert_classy->add_reference();
            vector_ConversationFoodBlocks2[num2] = convert_classy;
          }
        vector_ConversationFoodBlocks1[num1] = vector_ConversationFoodBlocks2;
      }
    initConversationFoodBlocks();
    for (size_t num4 = 0; num4 < vector_ConversationFoodBlocks1.size(); ++num4)
        appendConversationFoodBlocks(vector_ConversationFoodBlocks1[num4]);
    for (size_t num1 = 0; num1 < vector_ConversationFoodBlocks1.size(); ++num1)
      {
        for (size_t num2 = 0; num2 < vector_ConversationFoodBlocks1[num1].size(); ++num2)
          {
            vector_ConversationFoodBlocks1[num1][num2]->remove_reference();
          }
      }
  }

NutritionConversationElementJSON::NutritionConversationElementJSON(void) :
        flagHasCommandKind(false),
        flagHasNutritionCommandKind(false),
        flagHasNutrients(false),
        flagHasConversationFoodBlocks(false)
  {
    extraIndex = create_string_index();
  }

NutritionConversationElementJSON::~NutritionConversationElementJSON(void)
  {
    if (flagHasNutrients)
      {
        for (size_t num10 = 0; num10 < storeNutrients.size(); ++num10)
          {
            storeNutrients[num10]->remove_reference();
          }
      }
    if (flagHasConversationFoodBlocks)
      {
        for (size_t num11 = 0; num11 < storeConversationFoodBlocks.size(); ++num11)
          {
            for (size_t num12 = 0; num12 < storeConversationFoodBlocks[num11].size(); ++num12)
              {
                storeConversationFoodBlocks[num11][num12]->remove_reference();
              }
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool NutritionConversationElementJSON::hasCommandKind(void) const
  {
    return flagHasCommandKind;
  }

NutritionConversationElementJSON::TypeCommandKind NutritionConversationElementJSON::getCommandKind(void)
  {
    assert(flagHasCommandKind);
    return CommandKind_NutritionCommand;
  }

const NutritionConversationElementJSON::TypeCommandKind NutritionConversationElementJSON::getCommandKind(void) const
  {
    assert(flagHasCommandKind);
    return CommandKind_NutritionCommand;
  }

const char *NutritionConversationElementJSON::getCommandKindAsChars(void) const
  {
    return stringFromCommandKind(getCommandKind());
  }

std::string NutritionConversationElementJSON::getCommandKindAsString(void) const
  {
    return stringFromCommandKind(getCommandKind());
  }

bool NutritionConversationElementJSON::hasNutritionCommandKind(void) const
  {
    return flagHasNutritionCommandKind;
  }

NutritionConversationElementJSON::TypeNutritionCommandKind NutritionConversationElementJSON::getNutritionCommandKind(void)
  {
    assert(flagHasNutritionCommandKind);
    return NutritionCommandKind_NutritionCommand;
  }

const NutritionConversationElementJSON::TypeNutritionCommandKind NutritionConversationElementJSON::getNutritionCommandKind(void) const
  {
    assert(flagHasNutritionCommandKind);
    return NutritionCommandKind_NutritionCommand;
  }

const char *NutritionConversationElementJSON::getNutritionCommandKindAsChars(void) const
  {
    return stringFromNutritionCommandKind(getNutritionCommandKind());
  }

std::string NutritionConversationElementJSON::getNutritionCommandKindAsString(void) const
  {
    return stringFromNutritionCommandKind(getNutritionCommandKind());
  }

bool NutritionConversationElementJSON::hasNutrients(void) const
  {
    return flagHasNutrients;
  }

size_t NutritionConversationElementJSON::countOfNutrients(void) const
  {
    assert(flagHasNutrients);
    return storeNutrients.size();
  }

NutritionConversationElementJSON::TypeNutrientsJSON * NutritionConversationElementJSON::elementOfNutrients(size_t element_num)
  {
    assert(flagHasNutrients);
    return storeNutrients[element_num];
  }

const NutritionConversationElementJSON::TypeNutrientsJSON * NutritionConversationElementJSON::elementOfNutrients(size_t element_num) const
  {
    assert(flagHasNutrients);
    return storeNutrients[element_num];
  }

std::vector< NutritionConversationElementJSON::TypeNutrientsJSON * > NutritionConversationElementJSON::getNutrients(void)
  {
    assert(flagHasNutrients);
    return storeNutrients;
  }

const std::vector< NutritionConversationElementJSON::TypeNutrientsJSON * > NutritionConversationElementJSON::getNutrients(void) const
  {
    assert(flagHasNutrients);
    return storeNutrients;
  }

bool NutritionConversationElementJSON::hasConversationFoodBlocks(void) const
  {
    return flagHasConversationFoodBlocks;
  }

size_t NutritionConversationElementJSON::countOfConversationFoodBlocks(void) const
  {
    assert(flagHasConversationFoodBlocks);
    return storeConversationFoodBlocks.size();
  }

std::vector< NutritionConversationElementJSON::TypeConversationFoodBlocksJSON * > NutritionConversationElementJSON::elementOfConversationFoodBlocks(size_t element_num)
  {
    assert(flagHasConversationFoodBlocks);
    return storeConversationFoodBlocks[element_num];
  }

const std::vector< NutritionConversationElementJSON::TypeConversationFoodBlocksJSON * > NutritionConversationElementJSON::elementOfConversationFoodBlocks(size_t element_num) const
  {
    assert(flagHasConversationFoodBlocks);
    return storeConversationFoodBlocks[element_num];
  }

std::vector< std::vector< NutritionConversationElementJSON::TypeConversationFoodBlocksJSON * > > NutritionConversationElementJSON::getConversationFoodBlocks(void)
  {
    assert(flagHasConversationFoodBlocks);
    return storeConversationFoodBlocks;
  }

const std::vector< std::vector< NutritionConversationElementJSON::TypeConversationFoodBlocksJSON * > > NutritionConversationElementJSON::getConversationFoodBlocks(void) const
  {
    assert(flagHasConversationFoodBlocks);
    return storeConversationFoodBlocks;
  }

char NutritionConversationElementJSON::TypeNutrientsJSON::Generator::lowerBoundID[] = "0";
char NutritionConversationElementJSON::TypeNutrientsJSON::Generator::lowerBoundOutputUnitsUOMAuxID[] = "-1";
NutritionConversationElementJSON::TypeNutrientsJSON *NutritionConversationElementJSON::TypeNutrientsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeNutrientsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeNutrientsJSON>, TypeNutrientsJSON *, bool> generator("Type TypeNutrients", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
char NutritionConversationElementJSON::TypeConversationFoodBlocksJSON::Generator::lowerBoundID[] = "0";
char NutritionConversationElementJSON::TypeConversationFoodBlocksJSON::Generator::lowerBoundSizeIndex[] = "-1";
char NutritionConversationElementJSON::TypeConversationFoodBlocksJSON::Generator::lowerBoundUOMAuxID[] = "-1";
NutritionConversationElementJSON::TypeConversationFoodBlocksJSON *NutritionConversationElementJSON::TypeConversationFoodBlocksJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeConversationFoodBlocksJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeConversationFoodBlocksJSON>, TypeConversationFoodBlocksJSON *, bool> generator("Type TypeConversationFoodBlocks", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
NutritionConversationElementJSON *NutritionConversationElementJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    NutritionConversationElementJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<NutritionConversationElementJSON>, NutritionConversationElementJSON *, bool> generator("Type NutritionConversationElement", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
