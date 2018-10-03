/* file "UberApiErrorJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberApiErrorJSON.h"

#include "UberApiErrorJSON.h"
#include "UberApiErrorCancelCashTripJSON.h"
#include "UberApiErrorNoCurrentRequestJSON.h"
#include "UberApiErrorUnauthorizedJSON.h"
#include "UberApiErrorPromoFailedJSON.h"
#include "UberApiErrorDistanceLimitExceededJSON.h"
#include "UberApiErrorForbiddenJSON.h"
#include "UberApiErrorRequestFailedJSON.h"
#include "UberApiErrorRequestSurgeJSON.h"
#include "UberApiErrorSamePickupDropoffJSON.h"


UberApiErrorJSON::UberApiErrorJSON(const UberApiErrorJSON &)
  {
    assert(false);
  }

UberApiErrorJSON &UberApiErrorJSON::operator=(const UberApiErrorJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

UberApiErrorJSON::UberApiErrorJSON(void)
  {
    extraIndex = create_string_index();
  }

UberApiErrorJSON::~UberApiErrorJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *UberApiErrorJSON::getUberErrorKind(void) const
  {
    return "UberApiError";
  }

UberApiErrorJSON *UberApiErrorJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberApiErrorJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberApiErrorJSON>, UberApiErrorJSON *, bool> generator("Type UberApiError", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
