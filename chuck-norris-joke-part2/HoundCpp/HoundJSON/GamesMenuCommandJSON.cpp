/* file "GamesMenuCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "GamesMenuCommandJSON.h"

#include "GamesMenuCommandJSON.h"
#include "GamesMenuShowMenuCommandJSON.h"
#include "GamesMenuQuitCommandJSON.h"
#include "GamesMenuNotUnderstoodCommandJSON.h"


GamesMenuCommandJSON::GamesMenuCommandJSON(const GamesMenuCommandJSON &)
  {
    assert(false);
  }

GamesMenuCommandJSON &GamesMenuCommandJSON::operator=(const GamesMenuCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

GamesMenuCommandJSON::GamesMenuCommandJSON(void)
  {
  }

GamesMenuCommandJSON::~GamesMenuCommandJSON(void)
  {
  }

const char *GamesMenuCommandJSON::getCommandKind(void) const
  {
    return "GamesMenuCommand";
  }

GamesMenuCommandJSON *GamesMenuCommandJSON::createForKey(const char *key, string_index *other_field_index)
  {
    if (strncmp(key, "GamesMenu", 9) == 0)
      {
        switch ((unsigned char)(key[9]))
          {
            case 'N':
                if (strcmp(&(key[10]), "otUnderstoodCommand") == 0)
                    return new GamesMenuNotUnderstoodCommandJSON();
                break;
            case 'Q':
                if (strcmp(&(key[10]), "uitCommand") == 0)
                    return new GamesMenuQuitCommandJSON();
                break;
            case 'S':
                if (strcmp(&(key[10]), "howMenuCommand") == 0)
                    return new GamesMenuShowMenuCommandJSON();
                break;
            default:
                break;
          }
      }

    class GenericGamesMenuCommandJSON : public GamesMenuCommandJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericGamesMenuCommandJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericGamesMenuCommandJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getGamesMenuCommandKind(void) const  { return key.c_str(); }
        size_t extraGamesMenuCommandComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraGamesMenuCommandComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraGamesMenuCommandComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraGamesMenuCommandComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraGamesMenuCommandLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraGamesMenuCommandLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraGamesMenuCommandAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraGamesMenuCommandSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraGamesMenuCommandLookup(key);
            if (old_field == NULL)
              {
                extraGamesMenuCommandAppendPair(key, new_component);
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
    return new GenericGamesMenuCommandJSON(key);
  }
GamesMenuCommandJSON *GamesMenuCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    GamesMenuCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<GamesMenuCommandJSON>, GamesMenuCommandJSON *, bool> generator("Type GamesMenuCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
