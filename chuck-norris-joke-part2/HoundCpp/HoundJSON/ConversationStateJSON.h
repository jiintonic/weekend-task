/* file "ConversationStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CONVERSATIONSTATEJSON_H
#define CONVERSATIONSTATEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include "JSONWriter.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <sstream>


class ConversationStateJSON : public ReferenceCounted
  {
  private:
    std::string contents;
    ConversationStateJSON(const ConversationStateJSON &);
    ConversationStateJSON & operator=(const ConversationStateJSON &other);

  public:
    ConversationStateJSON(void)
      {
      }
    virtual ~ConversationStateJSON(void)
      {
      }

    void write_as_json(JSONHandler *handler) const
      {
        parse_json_value(contents, "Compact Representation of ConversationStateJSON", handler);
      }
    static ConversationStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false)
      {
        ConversationStateJSON *result = new ConversationStateJSON();
        std::stringstream stream;
        JSONStreamWriter writer(stream, JSONWriter::WHITESPACE_NONE);
        json_value->write(&writer);
        result->contents = stream.str();
        return result;
      }
    static ConversationStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ConversationStateJSON *result = new ConversationStateJSON();
        std::stringstream stream;
        JSONStreamWriter writer(stream, JSONWriter::WHITESPACE_NONE);
        parse_json_value(text, "Text for ConversationStateJSON", &writer);
        result->contents = stream.str();
        return result;
      }
    static ConversationStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ConversationStateJSON *result = new ConversationStateJSON();
        std::stringstream stream;
        JSONStreamWriter writer(stream, JSONWriter::WHITESPACE_NONE);
        parse_json_value(fp, file_name, &writer);
        result->contents = stream.str();
        return result;
      }
    class Generator : public JSONWriter
      {
      protected:
        Generator(bool ignore_extras = false) : JSONWriter(JSONWriter::WHITESPACE_NONE)
          {
            result = new ConversationStateJSON();
            result->add_reference();
          }
        ~Generator(void)
          {
            result->remove_reference();
          }
        void send_raw_text(const char *text)
          {
            result->contents += text;
            handle_result(result);
          }
        virtual std::string get_what(void)
          {
            return "value of type ConversationStateJSON";
          }
        virtual void handle_result(ConversationStateJSON *new_result) = 0;

      public:
        ConversationStateJSON *result;
        void set_what(const char *what)
          {
          }
        void reset(void)
          {
            result->remove_reference();
            result = new ConversationStateJSON();
            result->add_reference();
          }
      };
  };

#endif /* CONVERSATIONSTATEJSON_H */
