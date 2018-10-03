/* file "BasicBinaryOperationQuantityJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "BasicBinaryOperationQuantityJSON.h"

#include "BasicBinaryOperationQuantityJSON.h"


BasicBinaryOperationQuantityJSON::TypeOperation BasicBinaryOperationQuantityJSON::stringToOperation(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "ddition") == 0)
                return Operation_Addition;
            break;
        case 'D':
            if (strcmp(&(chars[1]), "ivision") == 0)
                return Operation_Division;
            break;
        case 'M':
            if (strcmp(&(chars[1]), "ultiplication") == 0)
                return Operation_Multiplication;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "ubtraction") == 0)
                return Operation_Subtraction;
            break;
        default:
            break;
      }
    throw("The value for field `Operation' is not one of the legal values.");
  }

const char *BasicBinaryOperationQuantityJSON::stringFromOperation(TypeOperation the_enum)
  {
    switch (the_enum)
      {
        case Operation_Addition:
            return "Addition";
        case Operation_Subtraction:
            return "Subtraction";
        case Operation_Multiplication:
            return "Multiplication";
        case Operation_Division:
            return "Division";
        default:
            assert(false);
            return NULL;
      }
  }

BasicBinaryOperationQuantityJSON::BasicBinaryOperationQuantityJSON(const BasicBinaryOperationQuantityJSON &)
  {
    assert(false);
  }

BasicBinaryOperationQuantityJSON &BasicBinaryOperationQuantityJSON::operator=(const BasicBinaryOperationQuantityJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *BasicBinaryOperationQuantityJSON::extraOperationToJSON(void) const
  {
    JSONStringValue *generated_string_Operation;
    switch (storeOperation)
      {
        case Operation_Addition:
            generated_string_Operation = new JSONStringValue("Addition");
            break;
        case Operation_Subtraction:
            generated_string_Operation = new JSONStringValue("Subtraction");
            break;
        case Operation_Multiplication:
            generated_string_Operation = new JSONStringValue("Multiplication");
            break;
        case Operation_Division:
            generated_string_Operation = new JSONStringValue("Division");
            break;
        default:
            assert(false);
            generated_string_Operation = NULL;
      }
    return generated_string_Operation;
  }

JSONValue *BasicBinaryOperationQuantityJSON::extraLeftToJSON(void) const
  {
    JSONValueHandler handler_Left;
    storeLeft->write_as_json(&handler_Left);
    handler_Left.result->add_reference();
    return handler_Left.result;
  }

JSONValue *BasicBinaryOperationQuantityJSON::extraRightToJSON(void) const
  {
    JSONValueHandler handler_Right;
    storeRight->write_as_json(&handler_Right);
    handler_Right.result->add_reference();
    return handler_Right.result;
  }

void BasicBinaryOperationQuantityJSON::fromJSONOperation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Operation of BasicBinaryOperationQuantityJSON is not a string.");
    TypeOperation the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "ddition") == 0)
                  {
                    the_enum = Operation_Addition;
                    goto enum_is_done;
                  }
            break;
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "ivision") == 0)
                  {
                    the_enum = Operation_Division;
                    goto enum_is_done;
                  }
            break;
        case 'M':
            if (strcmp(&(json_string->getData()[1]), "ultiplication") == 0)
                  {
                    the_enum = Operation_Multiplication;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "ubtraction") == 0)
                  {
                    the_enum = Operation_Subtraction;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Operation of BasicBinaryOperationQuantityJSON is not one of the legal strings.");
  enum_is_done:;
    setOperation(the_enum);
  }

void BasicBinaryOperationQuantityJSON::fromJSONLeft(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    QuantityJSON *convert_classy = QuantityJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLeft(convert_classy);
    convert_classy->remove_reference();
  }

void BasicBinaryOperationQuantityJSON::fromJSONRight(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    QuantityJSON *convert_classy = QuantityJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRight(convert_classy);
    convert_classy->remove_reference();
  }

BasicBinaryOperationQuantityJSON::BasicBinaryOperationQuantityJSON(void) :
        flagHasOperation(false),
        flagHasLeft(false),
        flagHasRight(false)
  {
    extraIndex = create_string_index();
  }

BasicBinaryOperationQuantityJSON::~BasicBinaryOperationQuantityJSON(void)
  {
    if (flagHasLeft)
      {
        storeLeft->remove_reference();
      }
    if (flagHasRight)
      {
        storeRight->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *BasicBinaryOperationQuantityJSON::getQuantityKind(void) const
  {
    return "BasicBinaryOperation";
  }

bool BasicBinaryOperationQuantityJSON::hasOperation(void) const
  {
    return flagHasOperation;
  }

BasicBinaryOperationQuantityJSON::TypeOperation BasicBinaryOperationQuantityJSON::getOperation(void)
  {
    assert(flagHasOperation);
    return storeOperation;
  }

const BasicBinaryOperationQuantityJSON::TypeOperation BasicBinaryOperationQuantityJSON::getOperation(void) const
  {
    assert(flagHasOperation);
    return storeOperation;
  }

const char *BasicBinaryOperationQuantityJSON::getOperationAsChars(void) const
  {
    return stringFromOperation(getOperation());
  }

std::string BasicBinaryOperationQuantityJSON::getOperationAsString(void) const
  {
    return stringFromOperation(getOperation());
  }

bool BasicBinaryOperationQuantityJSON::hasLeft(void) const
  {
    return flagHasLeft;
  }

QuantityJSON * BasicBinaryOperationQuantityJSON::getLeft(void)
  {
    assert(flagHasLeft);
    return storeLeft;
  }

const QuantityJSON * BasicBinaryOperationQuantityJSON::getLeft(void) const
  {
    assert(flagHasLeft);
    return storeLeft;
  }

bool BasicBinaryOperationQuantityJSON::hasRight(void) const
  {
    return flagHasRight;
  }

QuantityJSON * BasicBinaryOperationQuantityJSON::getRight(void)
  {
    assert(flagHasRight);
    return storeRight;
  }

const QuantityJSON * BasicBinaryOperationQuantityJSON::getRight(void) const
  {
    assert(flagHasRight);
    return storeRight;
  }

BasicBinaryOperationQuantityJSON *BasicBinaryOperationQuantityJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    BasicBinaryOperationQuantityJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<BasicBinaryOperationQuantityJSON>, BasicBinaryOperationQuantityJSON *, bool> generator("Type BasicBinaryOperationQuantity", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
