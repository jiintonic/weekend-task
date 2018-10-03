/* file "StoredPageMatchPageListCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "StoredPageMatchPageListCommandJSON.h"

#include "StoredPageMatchPageListCommandJSON.h"


StoredPageMatchPageListCommandJSON::StoredPageMatchPageListCommandJSON(const StoredPageMatchPageListCommandJSON &)
  {
    assert(false);
  }

StoredPageMatchPageListCommandJSON &StoredPageMatchPageListCommandJSON::operator=(const StoredPageMatchPageListCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *StoredPageMatchPageListCommandJSON::extraPagesToJSON(void) const
  {
    JSONArrayValue *generated_array_1_Pages = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storePages.size(); ++num1)
      {
        JSONStringValue *generated_string_Pages = new JSONStringValue(storePages[num1].c_str());
        generated_array_1_Pages->appendComponent(generated_string_Pages);
      }
    return generated_array_1_Pages;
  }

void StoredPageMatchPageListCommandJSON::fromJSONPages(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Pages of StoredPageMatchPageListCommandJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_Pages1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field Pages of StoredPageMatchPageListCommandJSON is not a string.");
        vector_Pages1[num1] = std::string(json_string->getData());
      }
    initPages();
    for (size_t num2 = 0; num2 < vector_Pages1.size(); ++num2)
        appendPages(vector_Pages1[num2]);
    for (size_t num1 = 0; num1 < vector_Pages1.size(); ++num1)
      {
      }
  }

StoredPageMatchPageListCommandJSON::StoredPageMatchPageListCommandJSON(void) :
        flagHasPages(false)
  {
    extraIndex = create_string_index();
  }

StoredPageMatchPageListCommandJSON::~StoredPageMatchPageListCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *StoredPageMatchPageListCommandJSON::getStoredPageMatchCommandKind(void) const
  {
    return "PageList";
  }

bool StoredPageMatchPageListCommandJSON::hasPages(void) const
  {
    return flagHasPages;
  }

size_t StoredPageMatchPageListCommandJSON::countOfPages(void) const
  {
    assert(flagHasPages);
    return storePages.size();
  }

std::string StoredPageMatchPageListCommandJSON::elementOfPages(size_t element_num)
  {
    assert(flagHasPages);
    return storePages[element_num];
  }

const std::string StoredPageMatchPageListCommandJSON::elementOfPages(size_t element_num) const
  {
    assert(flagHasPages);
    return storePages[element_num];
  }

std::vector< std::string > StoredPageMatchPageListCommandJSON::getPages(void)
  {
    assert(flagHasPages);
    return storePages;
  }

const std::vector< std::string > StoredPageMatchPageListCommandJSON::getPages(void) const
  {
    assert(flagHasPages);
    return storePages;
  }

StoredPageMatchPageListCommandJSON *StoredPageMatchPageListCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    StoredPageMatchPageListCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<StoredPageMatchPageListCommandJSON>, StoredPageMatchPageListCommandJSON *, bool> generator("Type StoredPageMatchPageListCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
