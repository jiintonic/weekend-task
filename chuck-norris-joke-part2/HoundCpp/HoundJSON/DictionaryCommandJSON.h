/* file "DictionaryCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef DICTIONARYCOMMANDJSON_H
#define DICTIONARYCOMMANDJSON_H

#pragma interface

#include "CommandResultJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class DictionaryCommandJSON : public CommandResultJSON
  {
  public:
    class TypeNativeDataJSON : public ReferenceCounted
      {
      public:
        class TypeRequestKindListJSON : public ReferenceCounted
          {
          public:
            enum TypeRequestKindKnownValues
              {
                RequestKind_Definition,
                RequestKind_Synonym,
                RequestKind_Antonym,
                RequestKind_Spelling,
                RequestKind_SpellingConfirm,
                RequestKind__none
              };
            struct TypeRequestKind
              {
                bool in_known_list;
                std::string string_value;
                TypeRequestKindKnownValues list_value;

                TypeRequestKind(void);
                TypeRequestKind(const TypeRequestKind &other);
                TypeRequestKind(TypeRequestKindKnownValues other);
                bool  operator==(const TypeRequestKind &other) const;
                bool  operator!=(const TypeRequestKind &other) const;
                bool  operator<(const TypeRequestKind &other) const;
                bool  operator>(const TypeRequestKind &other) const;
                bool  operator>=(const TypeRequestKind &other) const;
                bool  operator<=(const TypeRequestKind &other) const;

              };

            static TypeRequestKindKnownValues  stringToRequestKind(const char *chars);
            static const char * stringFromRequestKind(TypeRequestKindKnownValues the_enum);

          private:
            bool flagHasRequestKind;
            TypeRequestKind storeRequestKind;

            TypeRequestKindListJSON(const TypeRequestKindListJSON &);
            TypeRequestKindListJSON & operator=(const TypeRequestKindListJSON &other);

            void  fromJSONRequestKind(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypeRequestKindListJSON(void);
            virtual ~TypeRequestKindListJSON(void);
            bool  hasRequestKind(void) const;
            TypeRequestKind  getRequestKind(void);
            const TypeRequestKind  getRequestKind(void) const;
            const char * getRequestKindAsChars(void) const;
            std::string  getRequestKindAsString(void) const;


            void setRequestKind(TypeRequestKind new_value)
              {
                flagHasRequestKind = true;
                storeRequestKind = new_value;
              }
            void setRequestKind(const char *chars)
              {
                TypeRequestKindKnownValues known = stringToRequestKind(chars);
                TypeRequestKind new_value;
                if (known == RequestKind__none)
                  {
                    new_value.in_known_list = false;
                    new_value.string_value = chars;
                  }
                else
                  {
                    new_value.in_known_list = true;
                    new_value.list_value = known;
                  }
                setRequestKind(new_value);
              }
            void setRequestKind(std::string the_string)
              {
                setRequestKind(the_string.c_str());
              }
            void setRequestKind(TypeRequestKindKnownValues new_value)
              {
                TypeRequestKind new_full_value;
                assert(new_value != RequestKind__none);
                new_full_value.in_known_list = true;
                new_full_value.list_value = new_value;
                setRequestKind(new_full_value);
              }
            void unsetRequestKind(void)
              {
                flagHasRequestKind = false;
              }


            void write_as_json(JSONHandler *handler) const
              {
                handler->start_object();
                write_fields_as_json(handler);
                handler->finish_object();
              }

            virtual void write_fields_as_json(JSONHandler *handler) const
              {
                assert(flagHasRequestKind);
                handler->start_pair("RequestKind");
                if (storeRequestKind.in_known_list)
                  {
                    switch (storeRequestKind.list_value)
                      {
                        case RequestKind_Definition:
                            handler->string_value("Definition");
                            break;
                        case RequestKind_Synonym:
                            handler->string_value("Synonym");
                            break;
                        case RequestKind_Antonym:
                            handler->string_value("Antonym");
                            break;
                        case RequestKind_Spelling:
                            handler->string_value("Spelling");
                            break;
                        case RequestKind_SpellingConfirm:
                            handler->string_value("SpellingConfirm");
                            break;
                        default:
                            assert(false);
                      }
                  }
                else
                  {
                            handler->string_value(storeRequestKind.string_value);
                  }
              }
            virtual const char *missing_field_error(void) const
              {
                if (!(hasRequestKind()))
                  {
                    return "When parsing the object for %what%, the \"RequestKind\" field was missing.";
                  }
                return NULL;
              }

            static TypeRequestKindListJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TypeRequestKindListJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TypeRequestKindListJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeRequestKindListJSON>, TypeRequestKindListJSON *, bool> generator("Type TypeRequestKindList", ignore_extras);
                    parse_json_value(text, "Text for TypeRequestKindListJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TypeRequestKindListJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TypeRequestKindListJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeRequestKindListJSON>, TypeRequestKindListJSON *, bool> generator("Type TypeRequestKindList", ignore_extras);
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
            class FieldGeneratorRequestKind : public JSONStringGenerator
                  {
                  protected:
                    FieldGeneratorRequestKind(const char *what)
                      {
                        set_what(what);
                      }
                    FieldGeneratorRequestKind(void)
                      {
                      }
                    void handle_result(const char *result)
                      {
                        TypeRequestKindKnownValues known = stringToRequestKind(result);
                        TypeRequestKind new_value;
                        if (known == RequestKind__none)
                          {
                            new_value.in_known_list = false;
                            new_value.string_value = result;
                          }
                        else
                          {
                            new_value.in_known_list = true;
                            new_value.list_value = known;
                          }
                        handle_result(new_value);
                      }
                    virtual void handle_result(TypeRequestKind result) = 0;
                  };
                JSONHoldingGenerator<FieldGeneratorRequestKind, TypeRequestKind, TypeRequestKind > fieldGeneratorRequestKind;


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
                    TypeRequestKindListJSON *result = new TypeRequestKindListJSON();
                    assert(result != NULL);
                    RCHandle<TypeRequestKindListJSON> result_holder = result;
                    finish(result);
                    handle_result(result);
                  }
                void finish(TypeRequestKindListJSON *result)
                  {
                    if (fieldGeneratorRequestKind.have_value)
                      {
                        result->setRequestKind(fieldGeneratorRequestKind.value);
                        fieldGeneratorRequestKind.have_value = false;
                      }
                    else if (!(result->hasRequestKind()))
                      {
                        error("When parsing the object for %what%, the \"RequestKind\" field was missing.");
                      }
                  }
                virtual void handle_result(TypeRequestKindListJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    if (strcmp(field_name, "RequestKind") == 0)
                        return &fieldGeneratorRequestKind;
                    return NULL;
                  }

              public:
                Generator(bool ignore_extras = false) : fieldGeneratorRequestKind("field \"RequestKind\" of the TypeRequestKindList class")
                  {
                    set_what("the TypeRequestKindList class");
                  }
                ~Generator(void)
                  {
                  }

                void reset(void)
                  {
                    fieldGeneratorRequestKind.reset();
                    JSONObjectGenerator::reset();
                  }
              };
          };
        class TypePOSListJSON : public ReferenceCounted
          {
          public:
            enum TypePOSKnownValues
              {
                POS_all,
                POS_noun,
                POS_verb,
                POS_adjective,
                POS_adverb,
                POS_article,
                POS_preposition,
                POS_pronoun,
                POS_slang,
                POS_conjunction,
                POS__none
              };
            struct TypePOS
              {
                bool in_known_list;
                std::string string_value;
                TypePOSKnownValues list_value;

                TypePOS(void);
                TypePOS(const TypePOS &other);
                TypePOS(TypePOSKnownValues other);
                bool  operator==(const TypePOS &other) const;
                bool  operator!=(const TypePOS &other) const;
                bool  operator<(const TypePOS &other) const;
                bool  operator>(const TypePOS &other) const;
                bool  operator>=(const TypePOS &other) const;
                bool  operator<=(const TypePOS &other) const;

              };

            static TypePOSKnownValues  stringToPOS(const char *chars);
            static const char * stringFromPOS(TypePOSKnownValues the_enum);

          private:
            bool flagHasPOS;
            TypePOS storePOS;

            TypePOSListJSON(const TypePOSListJSON &);
            TypePOSListJSON & operator=(const TypePOSListJSON &other);

            void  fromJSONPOS(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypePOSListJSON(void);
            virtual ~TypePOSListJSON(void);
            bool  hasPOS(void) const;
            TypePOS  getPOS(void);
            const TypePOS  getPOS(void) const;
            const char * getPOSAsChars(void) const;
            std::string  getPOSAsString(void) const;


            void setPOS(TypePOS new_value)
              {
                flagHasPOS = true;
                storePOS = new_value;
              }
            void setPOS(const char *chars)
              {
                TypePOSKnownValues known = stringToPOS(chars);
                TypePOS new_value;
                if (known == POS__none)
                  {
                    new_value.in_known_list = false;
                    new_value.string_value = chars;
                  }
                else
                  {
                    new_value.in_known_list = true;
                    new_value.list_value = known;
                  }
                setPOS(new_value);
              }
            void setPOS(std::string the_string)
              {
                setPOS(the_string.c_str());
              }
            void setPOS(TypePOSKnownValues new_value)
              {
                TypePOS new_full_value;
                assert(new_value != POS__none);
                new_full_value.in_known_list = true;
                new_full_value.list_value = new_value;
                setPOS(new_full_value);
              }
            void unsetPOS(void)
              {
                flagHasPOS = false;
              }


            void write_as_json(JSONHandler *handler) const
              {
                handler->start_object();
                write_fields_as_json(handler);
                handler->finish_object();
              }

            virtual void write_fields_as_json(JSONHandler *handler) const
              {
                assert(flagHasPOS);
                handler->start_pair("POS");
                if (storePOS.in_known_list)
                  {
                    switch (storePOS.list_value)
                      {
                        case POS_all:
                            handler->string_value("all");
                            break;
                        case POS_noun:
                            handler->string_value("noun");
                            break;
                        case POS_verb:
                            handler->string_value("verb");
                            break;
                        case POS_adjective:
                            handler->string_value("adjective");
                            break;
                        case POS_adverb:
                            handler->string_value("adverb");
                            break;
                        case POS_article:
                            handler->string_value("article");
                            break;
                        case POS_preposition:
                            handler->string_value("preposition");
                            break;
                        case POS_pronoun:
                            handler->string_value("pronoun");
                            break;
                        case POS_slang:
                            handler->string_value("slang");
                            break;
                        case POS_conjunction:
                            handler->string_value("conjunction");
                            break;
                        default:
                            assert(false);
                      }
                  }
                else
                  {
                            handler->string_value(storePOS.string_value);
                  }
              }
            virtual const char *missing_field_error(void) const
              {
                if (!(hasPOS()))
                  {
                    return "When parsing the object for %what%, the \"POS\" field was missing.";
                  }
                return NULL;
              }

            static TypePOSListJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TypePOSListJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TypePOSListJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypePOSListJSON>, TypePOSListJSON *, bool> generator("Type TypePOSList", ignore_extras);
                    parse_json_value(text, "Text for TypePOSListJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TypePOSListJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TypePOSListJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypePOSListJSON>, TypePOSListJSON *, bool> generator("Type TypePOSList", ignore_extras);
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
            class FieldGeneratorPOS : public JSONStringGenerator
                  {
                  protected:
                    FieldGeneratorPOS(const char *what)
                      {
                        set_what(what);
                      }
                    FieldGeneratorPOS(void)
                      {
                      }
                    void handle_result(const char *result)
                      {
                        TypePOSKnownValues known = stringToPOS(result);
                        TypePOS new_value;
                        if (known == POS__none)
                          {
                            new_value.in_known_list = false;
                            new_value.string_value = result;
                          }
                        else
                          {
                            new_value.in_known_list = true;
                            new_value.list_value = known;
                          }
                        handle_result(new_value);
                      }
                    virtual void handle_result(TypePOS result) = 0;
                  };
                JSONHoldingGenerator<FieldGeneratorPOS, TypePOS, TypePOS > fieldGeneratorPOS;


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
                    TypePOSListJSON *result = new TypePOSListJSON();
                    assert(result != NULL);
                    RCHandle<TypePOSListJSON> result_holder = result;
                    finish(result);
                    handle_result(result);
                  }
                void finish(TypePOSListJSON *result)
                  {
                    if (fieldGeneratorPOS.have_value)
                      {
                        result->setPOS(fieldGeneratorPOS.value);
                        fieldGeneratorPOS.have_value = false;
                      }
                    else if (!(result->hasPOS()))
                      {
                        error("When parsing the object for %what%, the \"POS\" field was missing.");
                      }
                  }
                virtual void handle_result(TypePOSListJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    if (strcmp(field_name, "POS") == 0)
                        return &fieldGeneratorPOS;
                    return NULL;
                  }

              public:
                Generator(bool ignore_extras = false) : fieldGeneratorPOS("field \"POS\" of the TypePOSList class")
                  {
                    set_what("the TypePOSList class");
                  }
                ~Generator(void)
                  {
                  }

                void reset(void)
                  {
                    fieldGeneratorPOS.reset();
                    JSONObjectGenerator::reset();
                  }
              };
          };
        class TypeDictionaryInfoJSON : public ReferenceCounted
          {
          private:
            bool flagHasWord;
            std::string storeWord;
            bool flagHasDefinitions;
            std::string storeDefinitions;
            bool flagHasSynonyms;
            std::string storeSynonyms;
            bool flagHasAntonyms;
            std::string storeAntonyms;
            bool flagHasURI;
            std::string storeURI;

            TypeDictionaryInfoJSON(const TypeDictionaryInfoJSON &);
            TypeDictionaryInfoJSON & operator=(const TypeDictionaryInfoJSON &other);

            void  fromJSONWord(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONDefinitions(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONSynonyms(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONAntonyms(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONURI(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypeDictionaryInfoJSON(void);
            virtual ~TypeDictionaryInfoJSON(void);
            bool  hasWord(void) const;
            std::string  getWord(void);
            const std::string  getWord(void) const;
            bool  hasDefinitions(void) const;
            std::string  getDefinitions(void);
            const std::string  getDefinitions(void) const;
            bool  hasSynonyms(void) const;
            std::string  getSynonyms(void);
            const std::string  getSynonyms(void) const;
            bool  hasAntonyms(void) const;
            std::string  getAntonyms(void);
            const std::string  getAntonyms(void) const;
            bool  hasURI(void) const;
            std::string  getURI(void);
            const std::string  getURI(void) const;


            void setWord(std::string new_value)
              {
                flagHasWord = true;
                storeWord = new_value;
              }
            void unsetWord(void)
              {
                flagHasWord = false;
              }
            void setDefinitions(std::string new_value)
              {
                flagHasDefinitions = true;
                storeDefinitions = new_value;
              }
            void unsetDefinitions(void)
              {
                flagHasDefinitions = false;
              }
            void setSynonyms(std::string new_value)
              {
                flagHasSynonyms = true;
                storeSynonyms = new_value;
              }
            void unsetSynonyms(void)
              {
                flagHasSynonyms = false;
              }
            void setAntonyms(std::string new_value)
              {
                flagHasAntonyms = true;
                storeAntonyms = new_value;
              }
            void unsetAntonyms(void)
              {
                flagHasAntonyms = false;
              }
            void setURI(std::string new_value)
              {
                flagHasURI = true;
                storeURI = new_value;
              }
            void unsetURI(void)
              {
                flagHasURI = false;
              }


            void write_as_json(JSONHandler *handler) const
              {
                handler->start_object();
                write_fields_as_json(handler);
                handler->finish_object();
              }

            virtual void write_fields_as_json(JSONHandler *handler) const
              {
                assert(flagHasWord);
                handler->start_pair("Word");
                handler->string_value(storeWord);
                assert(flagHasDefinitions);
                handler->start_pair("Definitions");
                handler->string_value(storeDefinitions);
                if (flagHasSynonyms)
                  {
                    handler->start_pair("Synonyms");
                    handler->string_value(storeSynonyms);
                  }
                if (flagHasAntonyms)
                  {
                    handler->start_pair("Antonyms");
                    handler->string_value(storeAntonyms);
                  }
                if (flagHasURI)
                  {
                    handler->start_pair("URI");
                    handler->string_value(storeURI);
                  }
              }
            virtual const char *missing_field_error(void) const
              {
                if (!(hasWord()))
                  {
                    return "When parsing the object for %what%, the \"Word\" field was missing.";
                  }
                if (!(hasDefinitions()))
                  {
                    return "When parsing the object for %what%, the \"Definitions\" field was missing.";
                  }
                return NULL;
              }

            static TypeDictionaryInfoJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TypeDictionaryInfoJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TypeDictionaryInfoJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeDictionaryInfoJSON>, TypeDictionaryInfoJSON *, bool> generator("Type TypeDictionaryInfo", ignore_extras);
                    parse_json_value(text, "Text for TypeDictionaryInfoJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TypeDictionaryInfoJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TypeDictionaryInfoJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeDictionaryInfoJSON>, TypeDictionaryInfoJSON *, bool> generator("Type TypeDictionaryInfo", ignore_extras);
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
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWord;
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDefinitions;
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSynonyms;
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAntonyms;
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorURI;


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
                    TypeDictionaryInfoJSON *result = new TypeDictionaryInfoJSON();
                    assert(result != NULL);
                    RCHandle<TypeDictionaryInfoJSON> result_holder = result;
                    finish(result);
                    handle_result(result);
                  }
                void finish(TypeDictionaryInfoJSON *result)
                  {
                    if (fieldGeneratorWord.have_value)
                      {
                        result->setWord(fieldGeneratorWord.value);
                        fieldGeneratorWord.have_value = false;
                      }
                    else if (!(result->hasWord()))
                      {
                        error("When parsing the object for %what%, the \"Word\" field was missing.");
                      }
                    if (fieldGeneratorDefinitions.have_value)
                      {
                        result->setDefinitions(fieldGeneratorDefinitions.value);
                        fieldGeneratorDefinitions.have_value = false;
                      }
                    else if (!(result->hasDefinitions()))
                      {
                        error("When parsing the object for %what%, the \"Definitions\" field was missing.");
                      }
                    if (fieldGeneratorSynonyms.have_value)
                      {
                        result->setSynonyms(fieldGeneratorSynonyms.value);
                        fieldGeneratorSynonyms.have_value = false;
                      }
                    if (fieldGeneratorAntonyms.have_value)
                      {
                        result->setAntonyms(fieldGeneratorAntonyms.value);
                        fieldGeneratorAntonyms.have_value = false;
                      }
                    if (fieldGeneratorURI.have_value)
                      {
                        result->setURI(fieldGeneratorURI.value);
                        fieldGeneratorURI.have_value = false;
                      }
                  }
                virtual void handle_result(TypeDictionaryInfoJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    switch ((unsigned char)(field_name[0]))
                      {
                        case 'A':
                            if (strcmp(&(field_name[1]), "ntonyms") == 0)
                                return &fieldGeneratorAntonyms;
                            break;
                        case 'D':
                            if (strcmp(&(field_name[1]), "efinitions") == 0)
                                return &fieldGeneratorDefinitions;
                            break;
                        case 'S':
                            if (strcmp(&(field_name[1]), "ynonyms") == 0)
                                return &fieldGeneratorSynonyms;
                            break;
                        case 'U':
                            if (strcmp(&(field_name[1]), "RI") == 0)
                                return &fieldGeneratorURI;
                            break;
                        case 'W':
                            if (strcmp(&(field_name[1]), "ord") == 0)
                                return &fieldGeneratorWord;
                            break;
                        default:
                            break;
                      }
                    return NULL;
                  }

              public:
                Generator(bool ignore_extras = false) : fieldGeneratorWord("field \"Word\" of the TypeDictionaryInfo class"), fieldGeneratorDefinitions("field \"Definitions\" of the TypeDictionaryInfo class"), fieldGeneratorSynonyms("field \"Synonyms\" of the TypeDictionaryInfo class"), fieldGeneratorAntonyms("field \"Antonyms\" of the TypeDictionaryInfo class"), fieldGeneratorURI("field \"URI\" of the TypeDictionaryInfo class")
                  {
                    set_what("the TypeDictionaryInfo class");
                  }
                ~Generator(void)
                  {
                  }

                void reset(void)
                  {
                    fieldGeneratorWord.reset();
                    fieldGeneratorDefinitions.reset();
                    fieldGeneratorSynonyms.reset();
                    fieldGeneratorAntonyms.reset();
                    fieldGeneratorURI.reset();
                    JSONObjectGenerator::reset();
                  }
              };
          };

      private:
        bool flagHasRequestKindList;
        std::vector< TypeRequestKindListJSON * > storeRequestKindList;
        bool flagHasPOSList;
        std::vector< TypePOSListJSON * > storePOSList;
        bool flagHasWasSpelled;
        bool storeWasSpelled;
        bool flagHasSpellingAttempt;
        std::string storeSpellingAttempt;
        bool flagHasDictionaryInfo;
        std::vector< TypeDictionaryInfoJSON * > storeDictionaryInfo;
        bool flagHasWebCommandEnabled;
        bool storeWebCommandEnabled;

        TypeNativeDataJSON(const TypeNativeDataJSON &);
        TypeNativeDataJSON & operator=(const TypeNativeDataJSON &other);

        void  fromJSONRequestKindList(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONPOSList(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONWasSpelled(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONSpellingAttempt(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONDictionaryInfo(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONWebCommandEnabled(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeNativeDataJSON(void);
        virtual ~TypeNativeDataJSON(void);
        bool  hasRequestKindList(void) const;
        size_t  countOfRequestKindList(void) const;
        TypeRequestKindListJSON *  elementOfRequestKindList(size_t element_num);
        const TypeRequestKindListJSON *  elementOfRequestKindList(size_t element_num) const;
        std::vector< TypeRequestKindListJSON * >  getRequestKindList(void);
        const std::vector< TypeRequestKindListJSON * >  getRequestKindList(void) const;
        bool  hasPOSList(void) const;
        size_t  countOfPOSList(void) const;
        TypePOSListJSON *  elementOfPOSList(size_t element_num);
        const TypePOSListJSON *  elementOfPOSList(size_t element_num) const;
        std::vector< TypePOSListJSON * >  getPOSList(void);
        const std::vector< TypePOSListJSON * >  getPOSList(void) const;
        bool  hasWasSpelled(void) const;
        bool  getWasSpelled(void);
        const bool  getWasSpelled(void) const;
        bool  hasSpellingAttempt(void) const;
        std::string  getSpellingAttempt(void);
        const std::string  getSpellingAttempt(void) const;
        bool  hasDictionaryInfo(void) const;
        size_t  countOfDictionaryInfo(void) const;
        TypeDictionaryInfoJSON *  elementOfDictionaryInfo(size_t element_num);
        const TypeDictionaryInfoJSON *  elementOfDictionaryInfo(size_t element_num) const;
        std::vector< TypeDictionaryInfoJSON * >  getDictionaryInfo(void);
        const std::vector< TypeDictionaryInfoJSON * >  getDictionaryInfo(void) const;
        bool  hasWebCommandEnabled(void) const;
        bool  getWebCommandEnabled(void);
        const bool  getWebCommandEnabled(void) const;


        void initRequestKindList(void)
          {
            if (flagHasRequestKindList)
              {
                for (size_t num4 = 0; num4 < storeRequestKindList.size(); ++num4)
                  {
                    storeRequestKindList[num4]->remove_reference();
                  }
              }
            flagHasRequestKindList = true;
            storeRequestKindList.clear();
          }
        void appendRequestKindList(TypeRequestKindListJSON * to_append)
          {
            if (!flagHasRequestKindList)
              {
                flagHasRequestKindList = true;
                storeRequestKindList.clear();
              }
            assert(flagHasRequestKindList);
            to_append->add_reference();
            storeRequestKindList.push_back(to_append);
          }
        void unsetRequestKindList(void)
          {
            if (flagHasRequestKindList)
              {
                for (size_t num5 = 0; num5 < storeRequestKindList.size(); ++num5)
                  {
                    storeRequestKindList[num5]->remove_reference();
                  }
              }
            flagHasRequestKindList = false;
            storeRequestKindList.clear();
          }
        void initPOSList(void)
          {
            if (flagHasPOSList)
              {
                for (size_t num6 = 0; num6 < storePOSList.size(); ++num6)
                  {
                    storePOSList[num6]->remove_reference();
                  }
              }
            flagHasPOSList = true;
            storePOSList.clear();
          }
        void appendPOSList(TypePOSListJSON * to_append)
          {
            if (!flagHasPOSList)
              {
                flagHasPOSList = true;
                storePOSList.clear();
              }
            assert(flagHasPOSList);
            to_append->add_reference();
            storePOSList.push_back(to_append);
          }
        void unsetPOSList(void)
          {
            if (flagHasPOSList)
              {
                for (size_t num7 = 0; num7 < storePOSList.size(); ++num7)
                  {
                    storePOSList[num7]->remove_reference();
                  }
              }
            flagHasPOSList = false;
            storePOSList.clear();
          }
        void setWasSpelled(bool new_value)
          {
            flagHasWasSpelled = true;
            storeWasSpelled = new_value;
          }
        void unsetWasSpelled(void)
          {
            flagHasWasSpelled = false;
          }
        void setSpellingAttempt(std::string new_value)
          {
            flagHasSpellingAttempt = true;
            storeSpellingAttempt = new_value;
          }
        void unsetSpellingAttempt(void)
          {
            flagHasSpellingAttempt = false;
          }
        void initDictionaryInfo(void)
          {
            if (flagHasDictionaryInfo)
              {
                for (size_t num8 = 0; num8 < storeDictionaryInfo.size(); ++num8)
                  {
                    storeDictionaryInfo[num8]->remove_reference();
                  }
              }
            flagHasDictionaryInfo = true;
            storeDictionaryInfo.clear();
          }
        void appendDictionaryInfo(TypeDictionaryInfoJSON * to_append)
          {
            if (!flagHasDictionaryInfo)
              {
                flagHasDictionaryInfo = true;
                storeDictionaryInfo.clear();
              }
            assert(flagHasDictionaryInfo);
            to_append->add_reference();
            storeDictionaryInfo.push_back(to_append);
          }
        void unsetDictionaryInfo(void)
          {
            if (flagHasDictionaryInfo)
              {
                for (size_t num9 = 0; num9 < storeDictionaryInfo.size(); ++num9)
                  {
                    storeDictionaryInfo[num9]->remove_reference();
                  }
              }
            flagHasDictionaryInfo = false;
            storeDictionaryInfo.clear();
          }
        void setWebCommandEnabled(bool new_value)
          {
            flagHasWebCommandEnabled = true;
            storeWebCommandEnabled = new_value;
          }
        void unsetWebCommandEnabled(void)
          {
            flagHasWebCommandEnabled = false;
          }


        void write_as_json(JSONHandler *handler) const
          {
            handler->start_object();
            write_fields_as_json(handler);
            handler->finish_object();
          }

        virtual void write_fields_as_json(JSONHandler *handler) const
          {
            assert(flagHasRequestKindList);
            handler->start_pair("RequestKindList");
            assert(storeRequestKindList.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeRequestKindList.size(); ++num1)
              {
                storeRequestKindList[num1]->write_as_json(handler);
              }
            handler->finish_array();
            assert(flagHasPOSList);
            handler->start_pair("POSList");
            assert(storePOSList.size() >= 1);
            handler->start_array();
            for (size_t num2 = 0; num2 < storePOSList.size(); ++num2)
              {
                storePOSList[num2]->write_as_json(handler);
              }
            handler->finish_array();
            if (flagHasWasSpelled)
              {
                handler->start_pair("WasSpelled");
                handler->boolean_value(storeWasSpelled);
              }
            if (flagHasSpellingAttempt)
              {
                handler->start_pair("SpellingAttempt");
                handler->string_value(storeSpellingAttempt);
              }
            assert(flagHasDictionaryInfo);
            handler->start_pair("DictionaryInfo");
            assert(storeDictionaryInfo.size() >= 1);
            handler->start_array();
            for (size_t num3 = 0; num3 < storeDictionaryInfo.size(); ++num3)
              {
                storeDictionaryInfo[num3]->write_as_json(handler);
              }
            handler->finish_array();
            if (flagHasWebCommandEnabled)
              {
                handler->start_pair("WebCommandEnabled");
                handler->boolean_value(storeWebCommandEnabled);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasRequestKindList()))
              {
                return "When parsing the object for %what%, the \"RequestKindList\" field was missing.";
              }
            if (!(hasPOSList()))
              {
                return "When parsing the object for %what%, the \"POSList\" field was missing.";
              }
            if (!(hasDictionaryInfo()))
              {
                return "When parsing the object for %what%, the \"DictionaryInfo\" field was missing.";
              }
            return NULL;
          }

        static TypeNativeDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeNativeDataJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeNativeDataJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
                parse_json_value(text, "Text for TypeNativeDataJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeNativeDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeNativeDataJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
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
            JSONHoldingArrayGenerator<TypeRequestKindListJSON::Generator, RCHandle<TypeRequestKindListJSON>, TypeRequestKindListJSON *, bool > fieldGeneratorRequestKindList;
            JSONHoldingArrayGenerator<TypePOSListJSON::Generator, RCHandle<TypePOSListJSON>, TypePOSListJSON *, bool > fieldGeneratorPOSList;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorWasSpelled;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpellingAttempt;
            JSONHoldingArrayGenerator<TypeDictionaryInfoJSON::Generator, RCHandle<TypeDictionaryInfoJSON>, TypeDictionaryInfoJSON *, bool > fieldGeneratorDictionaryInfo;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorWebCommandEnabled;


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
                TypeNativeDataJSON *result = new TypeNativeDataJSON();
                assert(result != NULL);
                RCHandle<TypeNativeDataJSON> result_holder = result;
                finish(result);
                handle_result(result);
              }
            void finish(TypeNativeDataJSON *result)
              {
                if (fieldGeneratorRequestKindList.have_value)
                  {
                    result->initRequestKindList();
                    size_t count = fieldGeneratorRequestKindList.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendRequestKindList(fieldGeneratorRequestKindList.value[num].referenced());
                      }
                    fieldGeneratorRequestKindList.value.clear();
                    fieldGeneratorRequestKindList.have_value = false;
                  }
                else if (!(result->hasRequestKindList()))
                  {
                    error("When parsing the object for %what%, the \"RequestKindList\" field was missing.");
                  }
                if (fieldGeneratorPOSList.have_value)
                  {
                    result->initPOSList();
                    size_t count = fieldGeneratorPOSList.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendPOSList(fieldGeneratorPOSList.value[num].referenced());
                      }
                    fieldGeneratorPOSList.value.clear();
                    fieldGeneratorPOSList.have_value = false;
                  }
                else if (!(result->hasPOSList()))
                  {
                    error("When parsing the object for %what%, the \"POSList\" field was missing.");
                  }
                if (fieldGeneratorWasSpelled.have_value)
                  {
                    result->setWasSpelled(fieldGeneratorWasSpelled.value);
                    fieldGeneratorWasSpelled.have_value = false;
                  }
                if (fieldGeneratorSpellingAttempt.have_value)
                  {
                    result->setSpellingAttempt(fieldGeneratorSpellingAttempt.value);
                    fieldGeneratorSpellingAttempt.have_value = false;
                  }
                if (fieldGeneratorDictionaryInfo.have_value)
                  {
                    result->initDictionaryInfo();
                    size_t count = fieldGeneratorDictionaryInfo.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendDictionaryInfo(fieldGeneratorDictionaryInfo.value[num].referenced());
                      }
                    fieldGeneratorDictionaryInfo.value.clear();
                    fieldGeneratorDictionaryInfo.have_value = false;
                  }
                else if (!(result->hasDictionaryInfo()))
                  {
                    error("When parsing the object for %what%, the \"DictionaryInfo\" field was missing.");
                  }
                if (fieldGeneratorWebCommandEnabled.have_value)
                  {
                    result->setWebCommandEnabled(fieldGeneratorWebCommandEnabled.value);
                    fieldGeneratorWebCommandEnabled.have_value = false;
                  }
              }
            virtual void handle_result(TypeNativeDataJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'D':
                        if (strcmp(&(field_name[1]), "ictionaryInfo") == 0)
                            return &fieldGeneratorDictionaryInfo;
                        break;
                    case 'P':
                        if (strcmp(&(field_name[1]), "OSList") == 0)
                            return &fieldGeneratorPOSList;
                        break;
                    case 'R':
                        if (strcmp(&(field_name[1]), "equestKindList") == 0)
                            return &fieldGeneratorRequestKindList;
                        break;
                    case 'S':
                        if (strcmp(&(field_name[1]), "pellingAttempt") == 0)
                            return &fieldGeneratorSpellingAttempt;
                        break;
                    case 'W':
                        switch ((unsigned char)(field_name[1]))
                          {
                            case 'a':
                                if (strcmp(&(field_name[2]), "sSpelled") == 0)
                                    return &fieldGeneratorWasSpelled;
                                break;
                            case 'e':
                                if (strcmp(&(field_name[2]), "bCommandEnabled") == 0)
                                    return &fieldGeneratorWebCommandEnabled;
                                break;
                            default:
                                break;
                          }
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorRequestKindList("field \"RequestKindList\" of the TypeNativeData class", ignore_extras), fieldGeneratorPOSList("field \"POSList\" of the TypeNativeData class", ignore_extras), fieldGeneratorWasSpelled("field \"WasSpelled\" of the TypeNativeData class"), fieldGeneratorSpellingAttempt("field \"SpellingAttempt\" of the TypeNativeData class"), fieldGeneratorDictionaryInfo("field \"DictionaryInfo\" of the TypeNativeData class", ignore_extras), fieldGeneratorWebCommandEnabled("field \"WebCommandEnabled\" of the TypeNativeData class")
              {
                set_what("the TypeNativeData class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorRequestKindList.reset();
                fieldGeneratorPOSList.reset();
                fieldGeneratorWasSpelled.reset();
                fieldGeneratorSpellingAttempt.reset();
                fieldGeneratorDictionaryInfo.reset();
                fieldGeneratorWebCommandEnabled.reset();
                JSONObjectGenerator::reset();
              }
          };
      };

  private:
    bool flagHasNativeData;
    std::vector< TypeNativeDataJSON * > storeNativeData;

    DictionaryCommandJSON(const DictionaryCommandJSON &);
    DictionaryCommandJSON & operator=(const DictionaryCommandJSON &other);

    JSONValue * extraNativeDataToJSON(void) const;

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);


  public:
    DictionaryCommandJSON(void);
    virtual ~DictionaryCommandJSON(void);
    const char * getCommandKind(void) const;
    bool  hasNativeData(void) const;
    size_t  countOfNativeData(void) const;
    TypeNativeDataJSON *  elementOfNativeData(size_t element_num);
    const TypeNativeDataJSON *  elementOfNativeData(size_t element_num) const;
    std::vector< TypeNativeDataJSON * >  getNativeData(void);
    const std::vector< TypeNativeDataJSON * >  getNativeData(void) const;

    size_t extraCommandResultComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasNativeData)
            ++result;
        return result;
      }
    const char *extraCommandResultComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return "NativeData";
            --remainder;
          }
        assert(false);
        return NULL;
      }
    JSONValue *extraCommandResultComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        assert(false);
        return NULL;
      }
    const JSONValue *extraCommandResultComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        assert(false);
        return NULL;
      }
    JSONValue *extraCommandResultLookup(const char *field_name)
      {
        if (strcmp(field_name, "NativeData") == 0)
            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
        return NULL;
      }
    const JSONValue *extraCommandResultLookup(const char *field_name) const
      {
        if (strcmp(field_name, "NativeData") == 0)
            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
        return NULL;
      }

    void initNativeData(void)
      {
        if (flagHasNativeData)
          {
            for (size_t num11 = 0; num11 < storeNativeData.size(); ++num11)
              {
                storeNativeData[num11]->remove_reference();
              }
          }
        flagHasNativeData = true;
        storeNativeData.clear();
      }
    void appendNativeData(TypeNativeDataJSON * to_append)
      {
        if (!flagHasNativeData)
          {
            flagHasNativeData = true;
            storeNativeData.clear();
          }
        assert(flagHasNativeData);
        to_append->add_reference();
        storeNativeData.push_back(to_append);
      }
    void unsetNativeData(void)
      {
        if (flagHasNativeData)
          {
            for (size_t num12 = 0; num12 < storeNativeData.size(); ++num12)
              {
                storeNativeData[num12]->remove_reference();
              }
          }
        flagHasNativeData = false;
        storeNativeData.clear();
      }

    void extraCommandResultAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "NativeData") == 0)
            {
            fromJSONNativeData(new_component, false);
            return;
            }
      }
    void extraCommandResultSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "NativeData") == 0)
            {
            fromJSONNativeData(new_component, false);
            return;
            }
      }

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        CommandResultJSON::write_fields_as_json(handler);
        assert(flagHasNativeData);
        handler->start_pair("NativeData");
        assert(storeNativeData.size() >= 1);
        handler->start_array();
        for (size_t num1 = 0; num1 < storeNativeData.size(); ++num1)
          {
            storeNativeData[num1]->write_as_json(handler);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasNativeData()))
          {
            return "When parsing the object for %what%, the \"NativeData\" field was missing.";
          }
        return NULL;
      }

    static DictionaryCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static DictionaryCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        DictionaryCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DictionaryCommandJSON>, DictionaryCommandJSON *, bool> generator("Type DictionaryCommand", ignore_extras);
            parse_json_value(text, "Text for DictionaryCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static DictionaryCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        DictionaryCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DictionaryCommandJSON>, DictionaryCommandJSON *, bool> generator("Type DictionaryCommand", ignore_extras);
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
        JSONHoldingArrayGenerator<TypeNativeDataJSON::Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool > fieldGeneratorNativeData;


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
            if (!(strcmp(getCommandResultJSONKey().c_str(), "DictionaryCommand") == 0))
                throw("The key field has a value other than `DictionaryCommand'.");
            DictionaryCommandJSON *result = new DictionaryCommandJSON();
            assert(result != NULL);
            RCHandle<DictionaryCommandJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void handle_result(CommandResultJSON *new_result)
          {
            handle_result((DictionaryCommandJSON *)new_result);
          }
        void finish(DictionaryCommandJSON *result)
          {
            if (fieldGeneratorNativeData.have_value)
              {
                result->initNativeData();
                size_t count = fieldGeneratorNativeData.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendNativeData(fieldGeneratorNativeData.value[num].referenced());
                  }
                fieldGeneratorNativeData.value.clear();
                fieldGeneratorNativeData.have_value = false;
              }
            else if (!(result->hasNativeData()))
              {
                error("When parsing the object for %what%, the \"NativeData\" field was missing.");
              }
            CommandResultJSON::Generator::finish(result);
          }
        virtual void handle_result(DictionaryCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "NativeData") == 0)
                return &fieldGeneratorNativeData;
            return CommandResultJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CommandResultJSON::Generator(ignore_extras), fieldGeneratorNativeData("field \"NativeData\" of the DictionaryCommand class", ignore_extras)
          {
            set_what("the DictionaryCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNativeData.reset();
            CommandResultJSON::Generator::reset();
          }
      };
  };

#endif /* DICTIONARYCOMMANDJSON_H */
