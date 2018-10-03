/* file "UserContactsCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef USERCONTACTSCOMMANDJSON_H
#define USERCONTACTSCOMMANDJSON_H

#pragma interface

#include "CommandResultJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include <vector>
#include "OInteger.h"
#include "OneContactJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UserContactsCommandJSON : public CommandResultJSON
  {
  private:
    bool flagHasStartingContactCount;
    OInteger storeStartingContactCount;
    bool flagHasEndingContactCount;
    OInteger storeEndingContactCount;
    bool flagHasFoundMatches;
    std::vector< OneContactJSON * > storeFoundMatches;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UserContactsCommandJSON(const UserContactsCommandJSON &);
    UserContactsCommandJSON & operator=(const UserContactsCommandJSON &other);

    JSONValue * extraStartingContactCountToJSON(void) const;
    JSONValue * extraEndingContactCountToJSON(void) const;
    JSONValue * extraFoundMatchesToJSON(void) const;

    void  fromJSONStartingContactCount(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEndingContactCount(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFoundMatches(JSONValue *json_value, bool ignore_extras = false);


  public:
    UserContactsCommandJSON(void);
    virtual ~UserContactsCommandJSON(void);
    const char * getCommandKind(void) const;
    bool  hasStartingContactCount(void) const;
    OInteger  getStartingContactCount(void);
    const OInteger  getStartingContactCount(void) const;
    bool  hasEndingContactCount(void) const;
    OInteger  getEndingContactCount(void);
    const OInteger  getEndingContactCount(void) const;
    bool  hasFoundMatches(void) const;
    size_t  countOfFoundMatches(void) const;
    OneContactJSON *  elementOfFoundMatches(size_t element_num);
    const OneContactJSON *  elementOfFoundMatches(size_t element_num) const;
    std::vector< OneContactJSON * >  getFoundMatches(void);
    const std::vector< OneContactJSON * >  getFoundMatches(void) const;

    virtual size_t extraUserContactsCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUserContactsCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUserContactsCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUserContactsCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUserContactsCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUserContactsCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraCommandResultComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasStartingContactCount)
            ++result;
        if (flagHasEndingContactCount)
            ++result;
        if (flagHasFoundMatches)
            ++result;
        result += extraUserContactsCommandComponentCount();
        return result;
      }
    const char *extraCommandResultComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasStartingContactCount)
          {
            if (remainder == 0)
                return "StartingContactCount";
            --remainder;
          }
        if (flagHasEndingContactCount)
          {
            if (remainder == 0)
                return "EndingContactCount";
            --remainder;
          }
        if (flagHasFoundMatches)
          {
            if (remainder == 0)
                return "FoundMatches";
            --remainder;
          }
        return extraUserContactsCommandComponentKey(remainder);
      }
    JSONValue *extraCommandResultComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasStartingContactCount)
          {
            if (remainder == 0)
                return extraStartingContactCountToJSON();
            --remainder;
          }
        if (flagHasEndingContactCount)
          {
            if (remainder == 0)
                return extraEndingContactCountToJSON();
            --remainder;
          }
        if (flagHasFoundMatches)
          {
            if (remainder == 0)
                return extraFoundMatchesToJSON();
            --remainder;
          }
        return extraUserContactsCommandComponentValue(remainder);
      }
    const JSONValue *extraCommandResultComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasStartingContactCount)
          {
            if (remainder == 0)
                return extraStartingContactCountToJSON();
            --remainder;
          }
        if (flagHasEndingContactCount)
          {
            if (remainder == 0)
                return extraEndingContactCountToJSON();
            --remainder;
          }
        if (flagHasFoundMatches)
          {
            if (remainder == 0)
                return extraFoundMatchesToJSON();
            --remainder;
          }
        return extraUserContactsCommandComponentValue(remainder);
      }
    JSONValue *extraCommandResultLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'E':
                if (strcmp(&(field_name[1]), "ndingContactCount") == 0)
                    return (flagHasEndingContactCount ? extraEndingContactCountToJSON() : NULL);
                break;
            case 'F':
                if (strcmp(&(field_name[1]), "oundMatches") == 0)
                    return (flagHasFoundMatches ? extraFoundMatchesToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "tartingContactCount") == 0)
                    return (flagHasStartingContactCount ? extraStartingContactCountToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraUserContactsCommandLookup(field_name);
      }
    const JSONValue *extraCommandResultLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'E':
                if (strcmp(&(field_name[1]), "ndingContactCount") == 0)
                    return (flagHasEndingContactCount ? extraEndingContactCountToJSON() : NULL);
                break;
            case 'F':
                if (strcmp(&(field_name[1]), "oundMatches") == 0)
                    return (flagHasFoundMatches ? extraFoundMatchesToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "tartingContactCount") == 0)
                    return (flagHasStartingContactCount ? extraStartingContactCountToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraUserContactsCommandLookup(field_name);
      }

    void setStartingContactCount(OInteger new_value)
      {
        flagHasStartingContactCount = true;
        if (new_value < 0)
            throw("The value for field StartingContactCount of UserContactsCommandJSON is less than the lower bound (0) for that field.");
        storeStartingContactCount = new_value;
      }
    void unsetStartingContactCount(void)
      {
        flagHasStartingContactCount = false;
      }
    void setEndingContactCount(OInteger new_value)
      {
        flagHasEndingContactCount = true;
        if (new_value < 0)
            throw("The value for field EndingContactCount of UserContactsCommandJSON is less than the lower bound (0) for that field.");
        storeEndingContactCount = new_value;
      }
    void unsetEndingContactCount(void)
      {
        flagHasEndingContactCount = false;
      }
    void initFoundMatches(void)
      {
        if (flagHasFoundMatches)
          {
            for (size_t num2 = 0; num2 < storeFoundMatches.size(); ++num2)
              {
                storeFoundMatches[num2]->remove_reference();
              }
          }
        flagHasFoundMatches = true;
        storeFoundMatches.clear();
      }
    void appendFoundMatches(OneContactJSON * to_append)
      {
        if (!flagHasFoundMatches)
          {
            flagHasFoundMatches = true;
            storeFoundMatches.clear();
          }
        assert(flagHasFoundMatches);
        to_append->add_reference();
        storeFoundMatches.push_back(to_append);
      }
    void unsetFoundMatches(void)
      {
        if (flagHasFoundMatches)
          {
            for (size_t num3 = 0; num3 < storeFoundMatches.size(); ++num3)
              {
                storeFoundMatches[num3]->remove_reference();
              }
          }
        flagHasFoundMatches = false;
        storeFoundMatches.clear();
      }

    virtual void extraUserContactsCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUserContactsCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUserContactsCommandLookup(key);
        if (old_field == NULL)
          {
            extraUserContactsCommandAppendPair(key, new_component);
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
    void extraCommandResultAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'E':
                if (strcmp(&(key[1]), "ndingContactCount") == 0)
                    {
                    fromJSONEndingContactCount(new_component, false);
                    return;
                    }
                break;
            case 'F':
                if (strcmp(&(key[1]), "oundMatches") == 0)
                    {
                    fromJSONFoundMatches(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strcmp(&(key[1]), "tartingContactCount") == 0)
                    {
                    fromJSONStartingContactCount(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraUserContactsCommandAppendPair(key, new_component);
      }
    void extraCommandResultSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'E':
                if (strcmp(&(key[1]), "ndingContactCount") == 0)
                    {
                    fromJSONEndingContactCount(new_component, false);
                    return;
                    }
                break;
            case 'F':
                if (strcmp(&(key[1]), "oundMatches") == 0)
                    {
                    fromJSONFoundMatches(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strcmp(&(key[1]), "tartingContactCount") == 0)
                    {
                    fromJSONStartingContactCount(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraUserContactsCommandSetField(key, new_component);
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
        CommandResultJSON::write_fields_as_json(handler);
        assert(flagHasStartingContactCount);
        handler->start_pair("StartingContactCount");
        handler->number_value(storeStartingContactCount.get_o_integer());
        assert(flagHasEndingContactCount);
        handler->start_pair("EndingContactCount");
        handler->number_value(storeEndingContactCount.get_o_integer());
        if (flagHasFoundMatches)
          {
            handler->start_pair("FoundMatches");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeFoundMatches.size(); ++num1)
              {
                storeFoundMatches[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasStartingContactCount()))
          {
            return "When parsing the object for %what%, the \"StartingContactCount\" field was missing.";
          }
        if (!(hasEndingContactCount()))
          {
            return "When parsing the object for %what%, the \"EndingContactCount\" field was missing.";
          }
        return NULL;
      }

    static UserContactsCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UserContactsCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UserContactsCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UserContactsCommandJSON>, UserContactsCommandJSON *, bool> generator("Type UserContactsCommand", ignore_extras);
            parse_json_value(text, "Text for UserContactsCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UserContactsCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UserContactsCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UserContactsCommandJSON>, UserContactsCommandJSON *, bool> generator("Type UserContactsCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public CommandResultJSON::Generator
      {
      private:
        static char lowerBoundStartingContactCount[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundStartingContactCount>, OInteger, o_integer > fieldGeneratorStartingContactCount;
        static char lowerBoundEndingContactCount[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundEndingContactCount>, OInteger, o_integer > fieldGeneratorEndingContactCount;
        JSONHoldingArrayGenerator<OneContactJSON::Generator, RCHandle<OneContactJSON>, OneContactJSON *, bool > fieldGeneratorFoundMatches;
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
            if (!(strcmp(getCommandResultJSONKey().c_str(), "UserContactsCommand") == 0))
                throw("The key field has a value other than `UserContactsCommand'.");
            UserContactsCommandJSON *result = new UserContactsCommandJSON();
            assert(result != NULL);
            RCHandle<UserContactsCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUserContactsCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(CommandResultJSON *new_result)
          {
            handle_result((UserContactsCommandJSON *)new_result);
          }
        void finish(UserContactsCommandJSON *result)
          {
            if (fieldGeneratorStartingContactCount.have_value)
              {
                result->setStartingContactCount(fieldGeneratorStartingContactCount.value);
                fieldGeneratorStartingContactCount.have_value = false;
              }
            else if (!(result->hasStartingContactCount()))
              {
                error("When parsing the object for %what%, the \"StartingContactCount\" field was missing.");
              }
            if (fieldGeneratorEndingContactCount.have_value)
              {
                result->setEndingContactCount(fieldGeneratorEndingContactCount.value);
                fieldGeneratorEndingContactCount.have_value = false;
              }
            else if (!(result->hasEndingContactCount()))
              {
                error("When parsing the object for %what%, the \"EndingContactCount\" field was missing.");
              }
            if (fieldGeneratorFoundMatches.have_value)
              {
                result->initFoundMatches();
                size_t count = fieldGeneratorFoundMatches.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendFoundMatches(fieldGeneratorFoundMatches.value[num].referenced());
                  }
                fieldGeneratorFoundMatches.value.clear();
                fieldGeneratorFoundMatches.have_value = false;
              }
            CommandResultJSON::Generator::finish(result);
          }
        virtual void handle_result(UserContactsCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'E':
                    if (strcmp(&(field_name[1]), "ndingContactCount") == 0)
                        return &fieldGeneratorEndingContactCount;
                    break;
                case 'F':
                    if (strcmp(&(field_name[1]), "oundMatches") == 0)
                        return &fieldGeneratorFoundMatches;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "tartingContactCount") == 0)
                        return &fieldGeneratorStartingContactCount;
                    break;
                default:
                    break;
              }
            return CommandResultJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CommandResultJSON::Generator(ignore_extras), fieldGeneratorStartingContactCount("field \"StartingContactCount\" of the UserContactsCommand class"), fieldGeneratorEndingContactCount("field \"EndingContactCount\" of the UserContactsCommand class"), fieldGeneratorFoundMatches("field \"FoundMatches\" of the UserContactsCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UserContactsCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorStartingContactCount.reset();
            fieldGeneratorEndingContactCount.reset();
            fieldGeneratorFoundMatches.reset();
            CommandResultJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* USERCONTACTSCOMMANDJSON_H */
