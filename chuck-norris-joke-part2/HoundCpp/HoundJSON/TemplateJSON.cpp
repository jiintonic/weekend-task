/* file "TemplateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "TemplateJSON.h"

#include "TemplateJSON.h"
#include "AutoActionTemplateJSON.h"
#include "DescriptiveTextTemplateJSON.h"
#include "ImageCarouselTemplateJSON.h"
#include "VerticalTemplateListTemplateJSON.h"
#include "MediaTemplateJSON.h"
#include "TwoColumnTableTemplateJSON.h"
#include "MultiColumnTableTemplateJSON.h"
#include "KeyValueTableTemplateJSON.h"
#include "SimpleTextTemplateJSON.h"


TemplateJSON::TemplateJSON(const TemplateJSON &)
  {
    assert(false);
  }

TemplateJSON &TemplateJSON::operator=(const TemplateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

TemplateJSON::TemplateJSON(void)
  {
  }

TemplateJSON::~TemplateJSON(void)
  {
  }

TemplateJSON *TemplateJSON::createForKey(const char *key, string_index *other_field_index)
  {
    switch ((unsigned char)(key[0]))
      {
        case 'A':
            if (strcmp(&(key[1]), "utoAction") == 0)
                return new AutoActionTemplateJSON();
            break;
        case 'D':
            if (strcmp(&(key[1]), "escriptiveText") == 0)
                return new DescriptiveTextTemplateJSON();
            break;
        case 'I':
            if (strcmp(&(key[1]), "mageCarousel") == 0)
                return new ImageCarouselTemplateJSON();
            break;
        case 'K':
            if (strcmp(&(key[1]), "eyValueTable") == 0)
                return new KeyValueTableTemplateJSON();
            break;
        case 'M':
            switch ((unsigned char)(key[1]))
              {
                case 'e':
                    if (strcmp(&(key[2]), "dia") == 0)
                        return new MediaTemplateJSON();
                    break;
                case 'u':
                    if (strcmp(&(key[2]), "ltiColumnTable") == 0)
                        return new MultiColumnTableTemplateJSON();
                    break;
                default:
                    break;
              }
            break;
        case 'S':
            if (strcmp(&(key[1]), "impleText") == 0)
                return new SimpleTextTemplateJSON();
            break;
        case 'T':
            if (strcmp(&(key[1]), "woColumnTable") == 0)
                return new TwoColumnTableTemplateJSON();
            break;
        case 'V':
            if (strcmp(&(key[1]), "erticalTemplateList") == 0)
                return new VerticalTemplateListTemplateJSON();
            break;
        default:
            break;
      }

    class GenericTemplateJSON : public TemplateJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericTemplateJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericTemplateJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getTemplateName(void) const  { return key.c_str(); }
        size_t extraTemplateComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraTemplateComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraTemplateComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraTemplateComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraTemplateLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraTemplateLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraTemplateAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraTemplateSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTemplateLookup(key);
            if (old_field == NULL)
              {
                extraTemplateAppendPair(key, new_component);
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
    return new GenericTemplateJSON(key);
  }
TemplateJSON *TemplateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TemplateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TemplateJSON>, TemplateJSON *, bool> generator("Type Template", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
