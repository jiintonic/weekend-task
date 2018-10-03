/* file "BuildInfoJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef BUILDINFOJSON_H
#define BUILDINFOJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class BuildInfoJSON : public ReferenceCounted
  {
  private:
    bool flagHasUser;
    std::string storeUser;
    bool flagHasDate;
    std::string storeDate;
    bool flagHasMachine;
    std::string storeMachine;
    bool flagHasSVNRevision;
    std::string storeSVNRevision;
    bool flagHasSVNBranch;
    std::string storeSVNBranch;
    bool flagHasBuildNumber;
    std::string storeBuildNumber;
    bool flagHasKind;
    std::string storeKind;
    bool flagHasVariant;
    std::string storeVariant;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    BuildInfoJSON(const BuildInfoJSON &);
    BuildInfoJSON & operator=(const BuildInfoJSON &other);

    void  fromJSONUser(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMachine(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSVNRevision(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSVNBranch(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBuildNumber(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONKind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONVariant(JSONValue *json_value, bool ignore_extras = false);


  public:
    BuildInfoJSON(void);
    virtual ~BuildInfoJSON(void);
    bool  hasUser(void) const;
    std::string  getUser(void);
    const std::string  getUser(void) const;
    bool  hasDate(void) const;
    std::string  getDate(void);
    const std::string  getDate(void) const;
    bool  hasMachine(void) const;
    std::string  getMachine(void);
    const std::string  getMachine(void) const;
    bool  hasSVNRevision(void) const;
    std::string  getSVNRevision(void);
    const std::string  getSVNRevision(void) const;
    bool  hasSVNBranch(void) const;
    std::string  getSVNBranch(void);
    const std::string  getSVNBranch(void) const;
    bool  hasBuildNumber(void) const;
    std::string  getBuildNumber(void);
    const std::string  getBuildNumber(void) const;
    bool  hasKind(void) const;
    std::string  getKind(void);
    const std::string  getKind(void) const;
    bool  hasVariant(void) const;
    std::string  getVariant(void);
    const std::string  getVariant(void) const;

    virtual size_t extraBuildInfoComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraBuildInfoComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraBuildInfoComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraBuildInfoComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraBuildInfoLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraBuildInfoLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setUser(std::string new_value)
      {
        flagHasUser = true;
        storeUser = new_value;
      }
    void unsetUser(void)
      {
        flagHasUser = false;
      }
    void setDate(std::string new_value)
      {
        flagHasDate = true;
        storeDate = new_value;
      }
    void unsetDate(void)
      {
        flagHasDate = false;
      }
    void setMachine(std::string new_value)
      {
        flagHasMachine = true;
        storeMachine = new_value;
      }
    void unsetMachine(void)
      {
        flagHasMachine = false;
      }
    void setSVNRevision(std::string new_value)
      {
        flagHasSVNRevision = true;
        storeSVNRevision = new_value;
      }
    void unsetSVNRevision(void)
      {
        flagHasSVNRevision = false;
      }
    void setSVNBranch(std::string new_value)
      {
        flagHasSVNBranch = true;
        storeSVNBranch = new_value;
      }
    void unsetSVNBranch(void)
      {
        flagHasSVNBranch = false;
      }
    void setBuildNumber(std::string new_value)
      {
        flagHasBuildNumber = true;
        storeBuildNumber = new_value;
      }
    void unsetBuildNumber(void)
      {
        flagHasBuildNumber = false;
      }
    void setKind(std::string new_value)
      {
        flagHasKind = true;
        storeKind = new_value;
      }
    void unsetKind(void)
      {
        flagHasKind = false;
      }
    void setVariant(std::string new_value)
      {
        flagHasVariant = true;
        storeVariant = new_value;
      }
    void unsetVariant(void)
      {
        flagHasVariant = false;
      }

    virtual void extraBuildInfoAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraBuildInfoSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraBuildInfoLookup(key);
        if (old_field == NULL)
          {
            extraBuildInfoAppendPair(key, new_component);
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
        if (flagHasUser)
          {
            handler->start_pair("User");
            handler->string_value(storeUser);
          }
        if (flagHasDate)
          {
            handler->start_pair("Date");
            handler->string_value(storeDate);
          }
        if (flagHasMachine)
          {
            handler->start_pair("Machine");
            handler->string_value(storeMachine);
          }
        if (flagHasSVNRevision)
          {
            handler->start_pair("SVNRevision");
            handler->string_value(storeSVNRevision);
          }
        if (flagHasSVNBranch)
          {
            handler->start_pair("SVNBranch");
            handler->string_value(storeSVNBranch);
          }
        if (flagHasBuildNumber)
          {
            handler->start_pair("BuildNumber");
            handler->string_value(storeBuildNumber);
          }
        if (flagHasKind)
          {
            handler->start_pair("Kind");
            handler->string_value(storeKind);
          }
        if (flagHasVariant)
          {
            handler->start_pair("Variant");
            handler->string_value(storeVariant);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static BuildInfoJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static BuildInfoJSON *from_text(const char *text, bool ignore_extras = false)
      {
        BuildInfoJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<BuildInfoJSON>, BuildInfoJSON *, bool> generator("Type BuildInfo", ignore_extras);
            parse_json_value(text, "Text for BuildInfoJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static BuildInfoJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        BuildInfoJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<BuildInfoJSON>, BuildInfoJSON *, bool> generator("Type BuildInfo", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorUser;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDate;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorMachine;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSVNRevision;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSVNBranch;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorBuildNumber;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorKind;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorVariant;
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
            BuildInfoJSON *result = new BuildInfoJSON();
            assert(result != NULL);
            RCHandle<BuildInfoJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraBuildInfoAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(BuildInfoJSON *result)
          {
            if (fieldGeneratorUser.have_value)
              {
                result->setUser(fieldGeneratorUser.value);
                fieldGeneratorUser.have_value = false;
              }
            if (fieldGeneratorDate.have_value)
              {
                result->setDate(fieldGeneratorDate.value);
                fieldGeneratorDate.have_value = false;
              }
            if (fieldGeneratorMachine.have_value)
              {
                result->setMachine(fieldGeneratorMachine.value);
                fieldGeneratorMachine.have_value = false;
              }
            if (fieldGeneratorSVNRevision.have_value)
              {
                result->setSVNRevision(fieldGeneratorSVNRevision.value);
                fieldGeneratorSVNRevision.have_value = false;
              }
            if (fieldGeneratorSVNBranch.have_value)
              {
                result->setSVNBranch(fieldGeneratorSVNBranch.value);
                fieldGeneratorSVNBranch.have_value = false;
              }
            if (fieldGeneratorBuildNumber.have_value)
              {
                result->setBuildNumber(fieldGeneratorBuildNumber.value);
                fieldGeneratorBuildNumber.have_value = false;
              }
            if (fieldGeneratorKind.have_value)
              {
                result->setKind(fieldGeneratorKind.value);
                fieldGeneratorKind.have_value = false;
              }
            if (fieldGeneratorVariant.have_value)
              {
                result->setVariant(fieldGeneratorVariant.value);
                fieldGeneratorVariant.have_value = false;
              }
          }
        virtual void handle_result(BuildInfoJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'B':
                    if (strcmp(&(field_name[1]), "uildNumber") == 0)
                        return &fieldGeneratorBuildNumber;
                    break;
                case 'D':
                    if (strcmp(&(field_name[1]), "ate") == 0)
                        return &fieldGeneratorDate;
                    break;
                case 'K':
                    if (strcmp(&(field_name[1]), "ind") == 0)
                        return &fieldGeneratorKind;
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "achine") == 0)
                        return &fieldGeneratorMachine;
                    break;
                case 'S':
                    if (strncmp(&(field_name[1]), "VN", 2) == 0)
                      {
                        switch ((unsigned char)(field_name[3]))
                          {
                            case 'B':
                                if (strcmp(&(field_name[4]), "ranch") == 0)
                                    return &fieldGeneratorSVNBranch;
                                break;
                            case 'R':
                                if (strcmp(&(field_name[4]), "evision") == 0)
                                    return &fieldGeneratorSVNRevision;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'U':
                    if (strcmp(&(field_name[1]), "ser") == 0)
                        return &fieldGeneratorUser;
                    break;
                case 'V':
                    if (strcmp(&(field_name[1]), "ariant") == 0)
                        return &fieldGeneratorVariant;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorUser("field \"User\" of the BuildInfo class"), fieldGeneratorDate("field \"Date\" of the BuildInfo class"), fieldGeneratorMachine("field \"Machine\" of the BuildInfo class"), fieldGeneratorSVNRevision("field \"SVNRevision\" of the BuildInfo class"), fieldGeneratorSVNBranch("field \"SVNBranch\" of the BuildInfo class"), fieldGeneratorBuildNumber("field \"BuildNumber\" of the BuildInfo class"), fieldGeneratorKind("field \"Kind\" of the BuildInfo class"), fieldGeneratorVariant("field \"Variant\" of the BuildInfo class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the BuildInfo class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorUser.reset();
            fieldGeneratorDate.reset();
            fieldGeneratorMachine.reset();
            fieldGeneratorSVNRevision.reset();
            fieldGeneratorSVNBranch.reset();
            fieldGeneratorBuildNumber.reset();
            fieldGeneratorKind.reset();
            fieldGeneratorVariant.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* BUILDINFOJSON_H */
