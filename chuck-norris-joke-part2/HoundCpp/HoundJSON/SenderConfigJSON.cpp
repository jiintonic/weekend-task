/* file "SenderConfigJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SenderConfigJSON.h"

#include "SenderConfigJSON.h"


SenderConfigJSON::SenderConfigJSON(const SenderConfigJSON &)
  {
    assert(false);
  }

SenderConfigJSON &SenderConfigJSON::operator=(const SenderConfigJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SenderConfigJSON::fromJSONPrintResponses(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field PrintResponses of SenderConfigJSON is not true for false.");
          }
      }
    setPrintResponses(the_bool);
  }

void SenderConfigJSON::fromJSONHTTPTimeout(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field HTTPTimeout of SenderConfigJSON is not a number.");
          }
      }
    setHTTPTimeoutText(the_rational_text);
  }

void SenderConfigJSON::fromJSONFlags(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Flags of SenderConfigJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Flags of SenderConfigJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setFlags(extracted_integer);
  }

SenderConfigJSON::SenderConfigJSON(void) :
        flagHasPrintResponses(false),
        flagHasHTTPTimeout(false),
        flagHasFlags(false)
  {
    storePrintResponses = false;
    storeHTTPTimeout = 30;
  }

SenderConfigJSON::~SenderConfigJSON(void)
  {
  }

bool SenderConfigJSON::hasPrintResponses(void) const
  {
    return flagHasPrintResponses;
  }

bool SenderConfigJSON::getPrintResponses(void)
  {
    return storePrintResponses;
  }

const bool SenderConfigJSON::getPrintResponses(void) const
  {
    return storePrintResponses;
  }

bool SenderConfigJSON::hasHTTPTimeout(void) const
  {
    return flagHasHTTPTimeout;
  }

double SenderConfigJSON::getHTTPTimeout(void)
  {
    if (textStoreHTTPTimeout != "")
      {
        return atof(textStoreHTTPTimeout.c_str());
      }
    return storeHTTPTimeout;
  }

const double SenderConfigJSON::getHTTPTimeout(void) const
  {
    if (textStoreHTTPTimeout != "")
      {
        return atof(textStoreHTTPTimeout.c_str());
      }
    return storeHTTPTimeout;
  }

std::string SenderConfigJSON::getHTTPTimeoutAsText(void) const
  {
    if (textStoreHTTPTimeout == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeHTTPTimeout);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreHTTPTimeout);
      }
  }

bool SenderConfigJSON::hasFlags(void) const
  {
    return flagHasFlags;
  }

OInteger SenderConfigJSON::getFlags(void)
  {
    assert(flagHasFlags);
    return storeFlags;
  }

const OInteger SenderConfigJSON::getFlags(void) const
  {
    assert(flagHasFlags);
    return storeFlags;
  }

char SenderConfigJSON::Generator::lowerBoundFlags[] = "0";
SenderConfigJSON *SenderConfigJSON::createForKey(const char *key, string_index *other_field_index)
  {

    class GenericSenderConfigJSON : public SenderConfigJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericSenderConfigJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericSenderConfigJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getCommandSenderKind(void) const  { return key.c_str(); }
        size_t extraSenderConfigComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraSenderConfigComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraSenderConfigComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraSenderConfigComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraSenderConfigLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraSenderConfigLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraSenderConfigAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraSenderConfigSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraSenderConfigLookup(key);
            if (old_field == NULL)
              {
                extraSenderConfigAppendPair(key, new_component);
              }
            else
              {
                size_t count = extraKeys.size();
                assert(count == extraValues.size());
                for (size_t num = 0; num < count; ++num)
                  {
                    if (strcmp(extraKeys[num].c_str(), key) == 0)
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
      };
    return new GenericSenderConfigJSON(key);
  }
SenderConfigJSON *SenderConfigJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SenderConfigJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SenderConfigJSON>, SenderConfigJSON *, bool> generator("Type SenderConfig", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
