/* file "HotelFilterSpecJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOTELFILTERSPECJSON_H
#define HOTELFILTERSPECJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONIntegerRangeGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include <stdint.h>
#include "OInteger.h"
#include "MapLocationJSON.h"
#include "MoneyJSON.h"
#include "MoneyJSON.h"
#include "MoneyJSON.h"
#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HotelFilterSpecJSON : public ReferenceCounted
  {
  public:
    enum TypeQueryType
      {
        QueryType_Search,
        QueryType_Reservation,
        QueryType_HotelQuestion
      };

    static TypeQueryType  stringToQueryType(const char *chars);
    static const char * stringFromQueryType(TypeQueryType the_enum);
    enum TypeRadiusUnit
      {
        RadiusUnit_Kilometers,
        RadiusUnit_Miles
      };

    static TypeRadiusUnit  stringToRadiusUnit(const char *chars);
    static const char * stringFromRadiusUnit(TypeRadiusUnit the_enum);
    enum TypeSortCriteria
      {
        SortCriteria_Distance,
        SortCriteria_Price,
        SortCriteria_StarRating,
        SortCriteria_GuestRating
      };

    static TypeSortCriteria  stringToSortCriteria(const char *chars);
    static const char * stringFromSortCriteria(TypeSortCriteria the_enum);
    enum TypeSortOrder
      {
        SortOrder_Ascending,
        SortOrder_Descending
      };

    static TypeSortOrder  stringToSortOrder(const char *chars);
    static const char * stringFromSortOrder(TypeSortOrder the_enum);
    enum TypeAccommodationTypesInclude
      {
        AccommodationTypesInclude_Motel,
        AccommodationTypesInclude_Resort,
        AccommodationTypesInclude_Bed_x20_And_x20_Breakfast,
        AccommodationTypesInclude_Apartment_x20_Hotel
      };

    static TypeAccommodationTypesInclude  stringToAccommodationTypesInclude(const char *chars);
    static const char * stringFromAccommodationTypesInclude(TypeAccommodationTypesInclude the_enum);
    enum TypeAccommodationTypesExclude
      {
        AccommodationTypesExclude_Motel,
        AccommodationTypesExclude_Resort,
        AccommodationTypesExclude_Bed_x20_And_x20_Breakfast,
        AccommodationTypesExclude_Apartment_x20_Hotel
      };

    static TypeAccommodationTypesExclude  stringToAccommodationTypesExclude(const char *chars);
    static const char * stringFromAccommodationTypesExclude(TypeAccommodationTypesExclude the_enum);
    class TypeAmenitiesIncludeJSON : public ReferenceCounted
      {
      public:
        class TypeAmenityGroupJSON : public ReferenceCounted
          {
          private:
            bool flagHasAmenityIndex;
            OInteger storeAmenityIndex;
            bool flagHasAmenityID;
            OInteger storeAmenityID;
            bool flagHasAmenityName;
            std::string storeAmenityName;
            bool flagHasAmenitySpokenNameSingular;
            std::string storeAmenitySpokenNameSingular;
            bool flagHasAmenitySpokenNamePlural;
            std::string storeAmenitySpokenNamePlural;
            bool flagHasAmenityTopLevelName;
            std::string storeAmenityTopLevelName;
            bool flagHasAmenityTopLevelSpokenNameSingular;
            std::string storeAmenityTopLevelSpokenNameSingular;
            bool flagHasAmenityTopLevelSpokenNamePlural;
            std::string storeAmenityTopLevelSpokenNamePlural;

            TypeAmenityGroupJSON(const TypeAmenityGroupJSON &);
            TypeAmenityGroupJSON & operator=(const TypeAmenityGroupJSON &other);

            void  fromJSONAmenityIndex(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONAmenityID(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONAmenityName(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONAmenitySpokenNameSingular(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONAmenitySpokenNamePlural(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONAmenityTopLevelName(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONAmenityTopLevelSpokenNameSingular(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONAmenityTopLevelSpokenNamePlural(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypeAmenityGroupJSON(void);
            virtual ~TypeAmenityGroupJSON(void);
            bool  hasAmenityIndex(void) const;
            OInteger  getAmenityIndex(void);
            const OInteger  getAmenityIndex(void) const;
            bool  hasAmenityID(void) const;
            OInteger  getAmenityID(void);
            const OInteger  getAmenityID(void) const;
            bool  hasAmenityName(void) const;
            std::string  getAmenityName(void);
            const std::string  getAmenityName(void) const;
            bool  hasAmenitySpokenNameSingular(void) const;
            std::string  getAmenitySpokenNameSingular(void);
            const std::string  getAmenitySpokenNameSingular(void) const;
            bool  hasAmenitySpokenNamePlural(void) const;
            std::string  getAmenitySpokenNamePlural(void);
            const std::string  getAmenitySpokenNamePlural(void) const;
            bool  hasAmenityTopLevelName(void) const;
            std::string  getAmenityTopLevelName(void);
            const std::string  getAmenityTopLevelName(void) const;
            bool  hasAmenityTopLevelSpokenNameSingular(void) const;
            std::string  getAmenityTopLevelSpokenNameSingular(void);
            const std::string  getAmenityTopLevelSpokenNameSingular(void) const;
            bool  hasAmenityTopLevelSpokenNamePlural(void) const;
            std::string  getAmenityTopLevelSpokenNamePlural(void);
            const std::string  getAmenityTopLevelSpokenNamePlural(void) const;


            void setAmenityIndex(OInteger new_value)
              {
                flagHasAmenityIndex = true;
                if (new_value < 0)
                    throw("The value for field AmenityIndex of TypeAmenityGroupJSON is less than the lower bound (0) for that field.");
                storeAmenityIndex = new_value;
              }
            void unsetAmenityIndex(void)
              {
                flagHasAmenityIndex = false;
              }
            void setAmenityID(OInteger new_value)
              {
                flagHasAmenityID = true;
                if (new_value < 0)
                    throw("The value for field AmenityID of TypeAmenityGroupJSON is less than the lower bound (0) for that field.");
                storeAmenityID = new_value;
              }
            void unsetAmenityID(void)
              {
                flagHasAmenityID = false;
              }
            void setAmenityName(std::string new_value)
              {
                flagHasAmenityName = true;
                storeAmenityName = new_value;
              }
            void unsetAmenityName(void)
              {
                flagHasAmenityName = false;
              }
            void setAmenitySpokenNameSingular(std::string new_value)
              {
                flagHasAmenitySpokenNameSingular = true;
                storeAmenitySpokenNameSingular = new_value;
              }
            void unsetAmenitySpokenNameSingular(void)
              {
                flagHasAmenitySpokenNameSingular = false;
              }
            void setAmenitySpokenNamePlural(std::string new_value)
              {
                flagHasAmenitySpokenNamePlural = true;
                storeAmenitySpokenNamePlural = new_value;
              }
            void unsetAmenitySpokenNamePlural(void)
              {
                flagHasAmenitySpokenNamePlural = false;
              }
            void setAmenityTopLevelName(std::string new_value)
              {
                flagHasAmenityTopLevelName = true;
                storeAmenityTopLevelName = new_value;
              }
            void unsetAmenityTopLevelName(void)
              {
                flagHasAmenityTopLevelName = false;
              }
            void setAmenityTopLevelSpokenNameSingular(std::string new_value)
              {
                flagHasAmenityTopLevelSpokenNameSingular = true;
                storeAmenityTopLevelSpokenNameSingular = new_value;
              }
            void unsetAmenityTopLevelSpokenNameSingular(void)
              {
                flagHasAmenityTopLevelSpokenNameSingular = false;
              }
            void setAmenityTopLevelSpokenNamePlural(std::string new_value)
              {
                flagHasAmenityTopLevelSpokenNamePlural = true;
                storeAmenityTopLevelSpokenNamePlural = new_value;
              }
            void unsetAmenityTopLevelSpokenNamePlural(void)
              {
                flagHasAmenityTopLevelSpokenNamePlural = false;
              }


            void write_as_json(JSONHandler *handler) const
              {
                handler->start_object();
                write_fields_as_json(handler);
                handler->finish_object();
              }

            virtual void write_fields_as_json(JSONHandler *handler) const
              {
                assert(flagHasAmenityIndex);
                handler->start_pair("AmenityIndex");
                handler->number_value(storeAmenityIndex.get_o_integer());
                assert(flagHasAmenityID);
                handler->start_pair("AmenityID");
                handler->number_value(storeAmenityID.get_o_integer());
                assert(flagHasAmenityName);
                handler->start_pair("AmenityName");
                handler->string_value(storeAmenityName);
                if (flagHasAmenitySpokenNameSingular)
                  {
                    handler->start_pair("AmenitySpokenNameSingular");
                    handler->string_value(storeAmenitySpokenNameSingular);
                  }
                if (flagHasAmenitySpokenNamePlural)
                  {
                    handler->start_pair("AmenitySpokenNamePlural");
                    handler->string_value(storeAmenitySpokenNamePlural);
                  }
                if (flagHasAmenityTopLevelName)
                  {
                    handler->start_pair("AmenityTopLevelName");
                    handler->string_value(storeAmenityTopLevelName);
                  }
                if (flagHasAmenityTopLevelSpokenNameSingular)
                  {
                    handler->start_pair("AmenityTopLevelSpokenNameSingular");
                    handler->string_value(storeAmenityTopLevelSpokenNameSingular);
                  }
                if (flagHasAmenityTopLevelSpokenNamePlural)
                  {
                    handler->start_pair("AmenityTopLevelSpokenNamePlural");
                    handler->string_value(storeAmenityTopLevelSpokenNamePlural);
                  }
              }
            virtual const char *missing_field_error(void) const
              {
                if (!(hasAmenityIndex()))
                  {
                    return "When parsing the object for %what%, the \"AmenityIndex\" field was missing.";
                  }
                if (!(hasAmenityID()))
                  {
                    return "When parsing the object for %what%, the \"AmenityID\" field was missing.";
                  }
                if (!(hasAmenityName()))
                  {
                    return "When parsing the object for %what%, the \"AmenityName\" field was missing.";
                  }
                return NULL;
              }

            static TypeAmenityGroupJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TypeAmenityGroupJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TypeAmenityGroupJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeAmenityGroupJSON>, TypeAmenityGroupJSON *, bool> generator("Type TypeAmenityGroup", ignore_extras);
                    parse_json_value(text, "Text for TypeAmenityGroupJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TypeAmenityGroupJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TypeAmenityGroupJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeAmenityGroupJSON>, TypeAmenityGroupJSON *, bool> generator("Type TypeAmenityGroup", ignore_extras);
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
                static char lowerBoundAmenityIndex[];
                JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundAmenityIndex>, OInteger, o_integer > fieldGeneratorAmenityIndex;
                static char lowerBoundAmenityID[];
                JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundAmenityID>, OInteger, o_integer > fieldGeneratorAmenityID;
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAmenityName;
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAmenitySpokenNameSingular;
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAmenitySpokenNamePlural;
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAmenityTopLevelName;
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAmenityTopLevelSpokenNameSingular;
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAmenityTopLevelSpokenNamePlural;


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
                    TypeAmenityGroupJSON *result = new TypeAmenityGroupJSON();
                    assert(result != NULL);
                    RCHandle<TypeAmenityGroupJSON> result_holder = result;
                    finish(result);
                    handle_result(result);
                  }
                void finish(TypeAmenityGroupJSON *result)
                  {
                    if (fieldGeneratorAmenityIndex.have_value)
                      {
                        result->setAmenityIndex(fieldGeneratorAmenityIndex.value);
                        fieldGeneratorAmenityIndex.have_value = false;
                      }
                    else if (!(result->hasAmenityIndex()))
                      {
                        error("When parsing the object for %what%, the \"AmenityIndex\" field was missing.");
                      }
                    if (fieldGeneratorAmenityID.have_value)
                      {
                        result->setAmenityID(fieldGeneratorAmenityID.value);
                        fieldGeneratorAmenityID.have_value = false;
                      }
                    else if (!(result->hasAmenityID()))
                      {
                        error("When parsing the object for %what%, the \"AmenityID\" field was missing.");
                      }
                    if (fieldGeneratorAmenityName.have_value)
                      {
                        result->setAmenityName(fieldGeneratorAmenityName.value);
                        fieldGeneratorAmenityName.have_value = false;
                      }
                    else if (!(result->hasAmenityName()))
                      {
                        error("When parsing the object for %what%, the \"AmenityName\" field was missing.");
                      }
                    if (fieldGeneratorAmenitySpokenNameSingular.have_value)
                      {
                        result->setAmenitySpokenNameSingular(fieldGeneratorAmenitySpokenNameSingular.value);
                        fieldGeneratorAmenitySpokenNameSingular.have_value = false;
                      }
                    if (fieldGeneratorAmenitySpokenNamePlural.have_value)
                      {
                        result->setAmenitySpokenNamePlural(fieldGeneratorAmenitySpokenNamePlural.value);
                        fieldGeneratorAmenitySpokenNamePlural.have_value = false;
                      }
                    if (fieldGeneratorAmenityTopLevelName.have_value)
                      {
                        result->setAmenityTopLevelName(fieldGeneratorAmenityTopLevelName.value);
                        fieldGeneratorAmenityTopLevelName.have_value = false;
                      }
                    if (fieldGeneratorAmenityTopLevelSpokenNameSingular.have_value)
                      {
                        result->setAmenityTopLevelSpokenNameSingular(fieldGeneratorAmenityTopLevelSpokenNameSingular.value);
                        fieldGeneratorAmenityTopLevelSpokenNameSingular.have_value = false;
                      }
                    if (fieldGeneratorAmenityTopLevelSpokenNamePlural.have_value)
                      {
                        result->setAmenityTopLevelSpokenNamePlural(fieldGeneratorAmenityTopLevelSpokenNamePlural.value);
                        fieldGeneratorAmenityTopLevelSpokenNamePlural.have_value = false;
                      }
                  }
                virtual void handle_result(TypeAmenityGroupJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    if (strncmp(field_name, "Amenity", 7) == 0)
                      {
                        switch ((unsigned char)(field_name[7]))
                          {
                            case 'I':
                                switch ((unsigned char)(field_name[8]))
                                  {
                                    case 'D':
                                        if (field_name[9] == 0)
                                            return &fieldGeneratorAmenityID;
                                        break;
                                    case 'n':
                                        if (strcmp(&(field_name[9]), "dex") == 0)
                                            return &fieldGeneratorAmenityIndex;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'N':
                                if (strcmp(&(field_name[8]), "ame") == 0)
                                    return &fieldGeneratorAmenityName;
                                break;
                            case 'S':
                                if (strncmp(&(field_name[8]), "pokenName", 9) == 0)
                                  {
                                    switch ((unsigned char)(field_name[17]))
                                      {
                                        case 'P':
                                            if (strcmp(&(field_name[18]), "lural") == 0)
                                                return &fieldGeneratorAmenitySpokenNamePlural;
                                            break;
                                        case 'S':
                                            if (strcmp(&(field_name[18]), "ingular") == 0)
                                                return &fieldGeneratorAmenitySpokenNameSingular;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'T':
                                if (strncmp(&(field_name[8]), "opLevel", 7) == 0)
                                  {
                                    switch ((unsigned char)(field_name[15]))
                                      {
                                        case 'N':
                                            if (strcmp(&(field_name[16]), "ame") == 0)
                                                return &fieldGeneratorAmenityTopLevelName;
                                            break;
                                        case 'S':
                                            if (strncmp(&(field_name[16]), "pokenName", 9) == 0)
                                              {
                                                switch ((unsigned char)(field_name[25]))
                                                  {
                                                    case 'P':
                                                        if (strcmp(&(field_name[26]), "lural") == 0)
                                                            return &fieldGeneratorAmenityTopLevelSpokenNamePlural;
                                                        break;
                                                    case 'S':
                                                        if (strcmp(&(field_name[26]), "ingular") == 0)
                                                            return &fieldGeneratorAmenityTopLevelSpokenNameSingular;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            default:
                                break;
                          }
                      }
                    return NULL;
                  }

              public:
                Generator(bool ignore_extras = false) : fieldGeneratorAmenityIndex("field \"AmenityIndex\" of the TypeAmenityGroup class"), fieldGeneratorAmenityID("field \"AmenityID\" of the TypeAmenityGroup class"), fieldGeneratorAmenityName("field \"AmenityName\" of the TypeAmenityGroup class"), fieldGeneratorAmenitySpokenNameSingular("field \"AmenitySpokenNameSingular\" of the TypeAmenityGroup class"), fieldGeneratorAmenitySpokenNamePlural("field \"AmenitySpokenNamePlural\" of the TypeAmenityGroup class"), fieldGeneratorAmenityTopLevelName("field \"AmenityTopLevelName\" of the TypeAmenityGroup class"), fieldGeneratorAmenityTopLevelSpokenNameSingular("field \"AmenityTopLevelSpokenNameSingular\" of the TypeAmenityGroup class"), fieldGeneratorAmenityTopLevelSpokenNamePlural("field \"AmenityTopLevelSpokenNamePlural\" of the TypeAmenityGroup class")
                  {
                    set_what("the TypeAmenityGroup class");
                  }
                ~Generator(void)
                  {
                  }

                void reset(void)
                  {
                    fieldGeneratorAmenityIndex.reset();
                    fieldGeneratorAmenityID.reset();
                    fieldGeneratorAmenityName.reset();
                    fieldGeneratorAmenitySpokenNameSingular.reset();
                    fieldGeneratorAmenitySpokenNamePlural.reset();
                    fieldGeneratorAmenityTopLevelName.reset();
                    fieldGeneratorAmenityTopLevelSpokenNameSingular.reset();
                    fieldGeneratorAmenityTopLevelSpokenNamePlural.reset();
                    JSONObjectGenerator::reset();
                  }
              };
          };

      private:
        bool flagHasAmenityGroupName;
        std::string storeAmenityGroupName;
        bool flagHasAmenityGroupSpokenNameSingular;
        std::string storeAmenityGroupSpokenNameSingular;
        bool flagHasAmenityGroupSpokenNamePlural;
        std::string storeAmenityGroupSpokenNamePlural;
        bool flagHasAmenityGroup;
        std::vector< TypeAmenityGroupJSON * > storeAmenityGroup;

        TypeAmenitiesIncludeJSON(const TypeAmenitiesIncludeJSON &);
        TypeAmenitiesIncludeJSON & operator=(const TypeAmenitiesIncludeJSON &other);

        void  fromJSONAmenityGroupName(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAmenityGroupSpokenNameSingular(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAmenityGroupSpokenNamePlural(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAmenityGroup(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeAmenitiesIncludeJSON(void);
        virtual ~TypeAmenitiesIncludeJSON(void);
        bool  hasAmenityGroupName(void) const;
        std::string  getAmenityGroupName(void);
        const std::string  getAmenityGroupName(void) const;
        bool  hasAmenityGroupSpokenNameSingular(void) const;
        std::string  getAmenityGroupSpokenNameSingular(void);
        const std::string  getAmenityGroupSpokenNameSingular(void) const;
        bool  hasAmenityGroupSpokenNamePlural(void) const;
        std::string  getAmenityGroupSpokenNamePlural(void);
        const std::string  getAmenityGroupSpokenNamePlural(void) const;
        bool  hasAmenityGroup(void) const;
        size_t  countOfAmenityGroup(void) const;
        TypeAmenityGroupJSON *  elementOfAmenityGroup(size_t element_num);
        const TypeAmenityGroupJSON *  elementOfAmenityGroup(size_t element_num) const;
        std::vector< TypeAmenityGroupJSON * >  getAmenityGroup(void);
        const std::vector< TypeAmenityGroupJSON * >  getAmenityGroup(void) const;


        void setAmenityGroupName(std::string new_value)
          {
            flagHasAmenityGroupName = true;
            storeAmenityGroupName = new_value;
          }
        void unsetAmenityGroupName(void)
          {
            flagHasAmenityGroupName = false;
          }
        void setAmenityGroupSpokenNameSingular(std::string new_value)
          {
            flagHasAmenityGroupSpokenNameSingular = true;
            storeAmenityGroupSpokenNameSingular = new_value;
          }
        void unsetAmenityGroupSpokenNameSingular(void)
          {
            flagHasAmenityGroupSpokenNameSingular = false;
          }
        void setAmenityGroupSpokenNamePlural(std::string new_value)
          {
            flagHasAmenityGroupSpokenNamePlural = true;
            storeAmenityGroupSpokenNamePlural = new_value;
          }
        void unsetAmenityGroupSpokenNamePlural(void)
          {
            flagHasAmenityGroupSpokenNamePlural = false;
          }
        void initAmenityGroup(void)
          {
            if (flagHasAmenityGroup)
              {
                for (size_t num2 = 0; num2 < storeAmenityGroup.size(); ++num2)
                  {
                    storeAmenityGroup[num2]->remove_reference();
                  }
              }
            flagHasAmenityGroup = true;
            storeAmenityGroup.clear();
          }
        void appendAmenityGroup(TypeAmenityGroupJSON * to_append)
          {
            if (!flagHasAmenityGroup)
              {
                flagHasAmenityGroup = true;
                storeAmenityGroup.clear();
              }
            assert(flagHasAmenityGroup);
            to_append->add_reference();
            storeAmenityGroup.push_back(to_append);
          }
        void unsetAmenityGroup(void)
          {
            if (flagHasAmenityGroup)
              {
                for (size_t num3 = 0; num3 < storeAmenityGroup.size(); ++num3)
                  {
                    storeAmenityGroup[num3]->remove_reference();
                  }
              }
            flagHasAmenityGroup = false;
            storeAmenityGroup.clear();
          }


        void write_as_json(JSONHandler *handler) const
          {
            handler->start_object();
            write_fields_as_json(handler);
            handler->finish_object();
          }

        virtual void write_fields_as_json(JSONHandler *handler) const
          {
            if (flagHasAmenityGroupName)
              {
                handler->start_pair("AmenityGroupName");
                handler->string_value(storeAmenityGroupName);
              }
            if (flagHasAmenityGroupSpokenNameSingular)
              {
                handler->start_pair("AmenityGroupSpokenNameSingular");
                handler->string_value(storeAmenityGroupSpokenNameSingular);
              }
            if (flagHasAmenityGroupSpokenNamePlural)
              {
                handler->start_pair("AmenityGroupSpokenNamePlural");
                handler->string_value(storeAmenityGroupSpokenNamePlural);
              }
            assert(flagHasAmenityGroup);
            handler->start_pair("AmenityGroup");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeAmenityGroup.size(); ++num1)
              {
                storeAmenityGroup[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasAmenityGroup()))
              {
                return "When parsing the object for %what%, the \"AmenityGroup\" field was missing.";
              }
            return NULL;
          }

        static TypeAmenitiesIncludeJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeAmenitiesIncludeJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeAmenitiesIncludeJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeAmenitiesIncludeJSON>, TypeAmenitiesIncludeJSON *, bool> generator("Type TypeAmenitiesInclude", ignore_extras);
                parse_json_value(text, "Text for TypeAmenitiesIncludeJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeAmenitiesIncludeJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeAmenitiesIncludeJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeAmenitiesIncludeJSON>, TypeAmenitiesIncludeJSON *, bool> generator("Type TypeAmenitiesInclude", ignore_extras);
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAmenityGroupName;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAmenityGroupSpokenNameSingular;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAmenityGroupSpokenNamePlural;
            JSONHoldingArrayGenerator<TypeAmenityGroupJSON::Generator, RCHandle<TypeAmenityGroupJSON>, TypeAmenityGroupJSON *, bool > fieldGeneratorAmenityGroup;


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
                TypeAmenitiesIncludeJSON *result = new TypeAmenitiesIncludeJSON();
                assert(result != NULL);
                RCHandle<TypeAmenitiesIncludeJSON> result_holder = result;
                finish(result);
                handle_result(result);
              }
            void finish(TypeAmenitiesIncludeJSON *result)
              {
                if (fieldGeneratorAmenityGroupName.have_value)
                  {
                    result->setAmenityGroupName(fieldGeneratorAmenityGroupName.value);
                    fieldGeneratorAmenityGroupName.have_value = false;
                  }
                if (fieldGeneratorAmenityGroupSpokenNameSingular.have_value)
                  {
                    result->setAmenityGroupSpokenNameSingular(fieldGeneratorAmenityGroupSpokenNameSingular.value);
                    fieldGeneratorAmenityGroupSpokenNameSingular.have_value = false;
                  }
                if (fieldGeneratorAmenityGroupSpokenNamePlural.have_value)
                  {
                    result->setAmenityGroupSpokenNamePlural(fieldGeneratorAmenityGroupSpokenNamePlural.value);
                    fieldGeneratorAmenityGroupSpokenNamePlural.have_value = false;
                  }
                if (fieldGeneratorAmenityGroup.have_value)
                  {
                    result->initAmenityGroup();
                    size_t count = fieldGeneratorAmenityGroup.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendAmenityGroup(fieldGeneratorAmenityGroup.value[num].referenced());
                      }
                    fieldGeneratorAmenityGroup.value.clear();
                    fieldGeneratorAmenityGroup.have_value = false;
                  }
                else if (!(result->hasAmenityGroup()))
                  {
                    error("When parsing the object for %what%, the \"AmenityGroup\" field was missing.");
                  }
              }
            virtual void handle_result(TypeAmenitiesIncludeJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strncmp(field_name, "AmenityGroup", 12) == 0)
                  {
                    switch ((unsigned char)(field_name[12]))
                      {
                        case 0:
                            return &fieldGeneratorAmenityGroup;
                        case 'N':
                            if (strcmp(&(field_name[13]), "ame") == 0)
                                return &fieldGeneratorAmenityGroupName;
                            break;
                        case 'S':
                            if (strncmp(&(field_name[13]), "pokenName", 9) == 0)
                              {
                                switch ((unsigned char)(field_name[22]))
                                  {
                                    case 'P':
                                        if (strcmp(&(field_name[23]), "lural") == 0)
                                            return &fieldGeneratorAmenityGroupSpokenNamePlural;
                                        break;
                                    case 'S':
                                        if (strcmp(&(field_name[23]), "ingular") == 0)
                                            return &fieldGeneratorAmenityGroupSpokenNameSingular;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        default:
                            break;
                      }
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorAmenityGroupName("field \"AmenityGroupName\" of the TypeAmenitiesInclude class"), fieldGeneratorAmenityGroupSpokenNameSingular("field \"AmenityGroupSpokenNameSingular\" of the TypeAmenitiesInclude class"), fieldGeneratorAmenityGroupSpokenNamePlural("field \"AmenityGroupSpokenNamePlural\" of the TypeAmenitiesInclude class"), fieldGeneratorAmenityGroup("field \"AmenityGroup\" of the TypeAmenitiesInclude class", ignore_extras)
              {
                set_what("the TypeAmenitiesInclude class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorAmenityGroupName.reset();
                fieldGeneratorAmenityGroupSpokenNameSingular.reset();
                fieldGeneratorAmenityGroupSpokenNamePlural.reset();
                fieldGeneratorAmenityGroup.reset();
                JSONObjectGenerator::reset();
              }
          };
      };
    class TypeAmenitiesExcludeJSON : public ReferenceCounted
      {
      public:
        class TypeAmenityGroupJSON : public ReferenceCounted
          {
          private:
            bool flagHasAmenityIndex;
            OInteger storeAmenityIndex;
            bool flagHasAmenityID;
            OInteger storeAmenityID;
            bool flagHasAmenityName;
            std::string storeAmenityName;
            bool flagHasAmenitySpokenNameSingular;
            std::string storeAmenitySpokenNameSingular;
            bool flagHasAmenitySpokenNamePlural;
            std::string storeAmenitySpokenNamePlural;
            bool flagHasAmenityTopLevelName;
            std::string storeAmenityTopLevelName;
            bool flagHasAmenityTopLevelSpokenNameSingular;
            std::string storeAmenityTopLevelSpokenNameSingular;
            bool flagHasAmenityTopLevelSpokenNamePlural;
            std::string storeAmenityTopLevelSpokenNamePlural;

            TypeAmenityGroupJSON(const TypeAmenityGroupJSON &);
            TypeAmenityGroupJSON & operator=(const TypeAmenityGroupJSON &other);

            void  fromJSONAmenityIndex(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONAmenityID(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONAmenityName(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONAmenitySpokenNameSingular(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONAmenitySpokenNamePlural(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONAmenityTopLevelName(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONAmenityTopLevelSpokenNameSingular(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONAmenityTopLevelSpokenNamePlural(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypeAmenityGroupJSON(void);
            virtual ~TypeAmenityGroupJSON(void);
            bool  hasAmenityIndex(void) const;
            OInteger  getAmenityIndex(void);
            const OInteger  getAmenityIndex(void) const;
            bool  hasAmenityID(void) const;
            OInteger  getAmenityID(void);
            const OInteger  getAmenityID(void) const;
            bool  hasAmenityName(void) const;
            std::string  getAmenityName(void);
            const std::string  getAmenityName(void) const;
            bool  hasAmenitySpokenNameSingular(void) const;
            std::string  getAmenitySpokenNameSingular(void);
            const std::string  getAmenitySpokenNameSingular(void) const;
            bool  hasAmenitySpokenNamePlural(void) const;
            std::string  getAmenitySpokenNamePlural(void);
            const std::string  getAmenitySpokenNamePlural(void) const;
            bool  hasAmenityTopLevelName(void) const;
            std::string  getAmenityTopLevelName(void);
            const std::string  getAmenityTopLevelName(void) const;
            bool  hasAmenityTopLevelSpokenNameSingular(void) const;
            std::string  getAmenityTopLevelSpokenNameSingular(void);
            const std::string  getAmenityTopLevelSpokenNameSingular(void) const;
            bool  hasAmenityTopLevelSpokenNamePlural(void) const;
            std::string  getAmenityTopLevelSpokenNamePlural(void);
            const std::string  getAmenityTopLevelSpokenNamePlural(void) const;


            void setAmenityIndex(OInteger new_value)
              {
                flagHasAmenityIndex = true;
                if (new_value < 0)
                    throw("The value for field AmenityIndex of TypeAmenityGroupJSON is less than the lower bound (0) for that field.");
                storeAmenityIndex = new_value;
              }
            void unsetAmenityIndex(void)
              {
                flagHasAmenityIndex = false;
              }
            void setAmenityID(OInteger new_value)
              {
                flagHasAmenityID = true;
                if (new_value < 0)
                    throw("The value for field AmenityID of TypeAmenityGroupJSON is less than the lower bound (0) for that field.");
                storeAmenityID = new_value;
              }
            void unsetAmenityID(void)
              {
                flagHasAmenityID = false;
              }
            void setAmenityName(std::string new_value)
              {
                flagHasAmenityName = true;
                storeAmenityName = new_value;
              }
            void unsetAmenityName(void)
              {
                flagHasAmenityName = false;
              }
            void setAmenitySpokenNameSingular(std::string new_value)
              {
                flagHasAmenitySpokenNameSingular = true;
                storeAmenitySpokenNameSingular = new_value;
              }
            void unsetAmenitySpokenNameSingular(void)
              {
                flagHasAmenitySpokenNameSingular = false;
              }
            void setAmenitySpokenNamePlural(std::string new_value)
              {
                flagHasAmenitySpokenNamePlural = true;
                storeAmenitySpokenNamePlural = new_value;
              }
            void unsetAmenitySpokenNamePlural(void)
              {
                flagHasAmenitySpokenNamePlural = false;
              }
            void setAmenityTopLevelName(std::string new_value)
              {
                flagHasAmenityTopLevelName = true;
                storeAmenityTopLevelName = new_value;
              }
            void unsetAmenityTopLevelName(void)
              {
                flagHasAmenityTopLevelName = false;
              }
            void setAmenityTopLevelSpokenNameSingular(std::string new_value)
              {
                flagHasAmenityTopLevelSpokenNameSingular = true;
                storeAmenityTopLevelSpokenNameSingular = new_value;
              }
            void unsetAmenityTopLevelSpokenNameSingular(void)
              {
                flagHasAmenityTopLevelSpokenNameSingular = false;
              }
            void setAmenityTopLevelSpokenNamePlural(std::string new_value)
              {
                flagHasAmenityTopLevelSpokenNamePlural = true;
                storeAmenityTopLevelSpokenNamePlural = new_value;
              }
            void unsetAmenityTopLevelSpokenNamePlural(void)
              {
                flagHasAmenityTopLevelSpokenNamePlural = false;
              }


            void write_as_json(JSONHandler *handler) const
              {
                handler->start_object();
                write_fields_as_json(handler);
                handler->finish_object();
              }

            virtual void write_fields_as_json(JSONHandler *handler) const
              {
                assert(flagHasAmenityIndex);
                handler->start_pair("AmenityIndex");
                handler->number_value(storeAmenityIndex.get_o_integer());
                assert(flagHasAmenityID);
                handler->start_pair("AmenityID");
                handler->number_value(storeAmenityID.get_o_integer());
                assert(flagHasAmenityName);
                handler->start_pair("AmenityName");
                handler->string_value(storeAmenityName);
                if (flagHasAmenitySpokenNameSingular)
                  {
                    handler->start_pair("AmenitySpokenNameSingular");
                    handler->string_value(storeAmenitySpokenNameSingular);
                  }
                if (flagHasAmenitySpokenNamePlural)
                  {
                    handler->start_pair("AmenitySpokenNamePlural");
                    handler->string_value(storeAmenitySpokenNamePlural);
                  }
                if (flagHasAmenityTopLevelName)
                  {
                    handler->start_pair("AmenityTopLevelName");
                    handler->string_value(storeAmenityTopLevelName);
                  }
                if (flagHasAmenityTopLevelSpokenNameSingular)
                  {
                    handler->start_pair("AmenityTopLevelSpokenNameSingular");
                    handler->string_value(storeAmenityTopLevelSpokenNameSingular);
                  }
                if (flagHasAmenityTopLevelSpokenNamePlural)
                  {
                    handler->start_pair("AmenityTopLevelSpokenNamePlural");
                    handler->string_value(storeAmenityTopLevelSpokenNamePlural);
                  }
              }
            virtual const char *missing_field_error(void) const
              {
                if (!(hasAmenityIndex()))
                  {
                    return "When parsing the object for %what%, the \"AmenityIndex\" field was missing.";
                  }
                if (!(hasAmenityID()))
                  {
                    return "When parsing the object for %what%, the \"AmenityID\" field was missing.";
                  }
                if (!(hasAmenityName()))
                  {
                    return "When parsing the object for %what%, the \"AmenityName\" field was missing.";
                  }
                return NULL;
              }

            static TypeAmenityGroupJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TypeAmenityGroupJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TypeAmenityGroupJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeAmenityGroupJSON>, TypeAmenityGroupJSON *, bool> generator("Type TypeAmenityGroup", ignore_extras);
                    parse_json_value(text, "Text for TypeAmenityGroupJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TypeAmenityGroupJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TypeAmenityGroupJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeAmenityGroupJSON>, TypeAmenityGroupJSON *, bool> generator("Type TypeAmenityGroup", ignore_extras);
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
                static char lowerBoundAmenityIndex[];
                JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundAmenityIndex>, OInteger, o_integer > fieldGeneratorAmenityIndex;
                static char lowerBoundAmenityID[];
                JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundAmenityID>, OInteger, o_integer > fieldGeneratorAmenityID;
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAmenityName;
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAmenitySpokenNameSingular;
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAmenitySpokenNamePlural;
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAmenityTopLevelName;
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAmenityTopLevelSpokenNameSingular;
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAmenityTopLevelSpokenNamePlural;


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
                    TypeAmenityGroupJSON *result = new TypeAmenityGroupJSON();
                    assert(result != NULL);
                    RCHandle<TypeAmenityGroupJSON> result_holder = result;
                    finish(result);
                    handle_result(result);
                  }
                void finish(TypeAmenityGroupJSON *result)
                  {
                    if (fieldGeneratorAmenityIndex.have_value)
                      {
                        result->setAmenityIndex(fieldGeneratorAmenityIndex.value);
                        fieldGeneratorAmenityIndex.have_value = false;
                      }
                    else if (!(result->hasAmenityIndex()))
                      {
                        error("When parsing the object for %what%, the \"AmenityIndex\" field was missing.");
                      }
                    if (fieldGeneratorAmenityID.have_value)
                      {
                        result->setAmenityID(fieldGeneratorAmenityID.value);
                        fieldGeneratorAmenityID.have_value = false;
                      }
                    else if (!(result->hasAmenityID()))
                      {
                        error("When parsing the object for %what%, the \"AmenityID\" field was missing.");
                      }
                    if (fieldGeneratorAmenityName.have_value)
                      {
                        result->setAmenityName(fieldGeneratorAmenityName.value);
                        fieldGeneratorAmenityName.have_value = false;
                      }
                    else if (!(result->hasAmenityName()))
                      {
                        error("When parsing the object for %what%, the \"AmenityName\" field was missing.");
                      }
                    if (fieldGeneratorAmenitySpokenNameSingular.have_value)
                      {
                        result->setAmenitySpokenNameSingular(fieldGeneratorAmenitySpokenNameSingular.value);
                        fieldGeneratorAmenitySpokenNameSingular.have_value = false;
                      }
                    if (fieldGeneratorAmenitySpokenNamePlural.have_value)
                      {
                        result->setAmenitySpokenNamePlural(fieldGeneratorAmenitySpokenNamePlural.value);
                        fieldGeneratorAmenitySpokenNamePlural.have_value = false;
                      }
                    if (fieldGeneratorAmenityTopLevelName.have_value)
                      {
                        result->setAmenityTopLevelName(fieldGeneratorAmenityTopLevelName.value);
                        fieldGeneratorAmenityTopLevelName.have_value = false;
                      }
                    if (fieldGeneratorAmenityTopLevelSpokenNameSingular.have_value)
                      {
                        result->setAmenityTopLevelSpokenNameSingular(fieldGeneratorAmenityTopLevelSpokenNameSingular.value);
                        fieldGeneratorAmenityTopLevelSpokenNameSingular.have_value = false;
                      }
                    if (fieldGeneratorAmenityTopLevelSpokenNamePlural.have_value)
                      {
                        result->setAmenityTopLevelSpokenNamePlural(fieldGeneratorAmenityTopLevelSpokenNamePlural.value);
                        fieldGeneratorAmenityTopLevelSpokenNamePlural.have_value = false;
                      }
                  }
                virtual void handle_result(TypeAmenityGroupJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    if (strncmp(field_name, "Amenity", 7) == 0)
                      {
                        switch ((unsigned char)(field_name[7]))
                          {
                            case 'I':
                                switch ((unsigned char)(field_name[8]))
                                  {
                                    case 'D':
                                        if (field_name[9] == 0)
                                            return &fieldGeneratorAmenityID;
                                        break;
                                    case 'n':
                                        if (strcmp(&(field_name[9]), "dex") == 0)
                                            return &fieldGeneratorAmenityIndex;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'N':
                                if (strcmp(&(field_name[8]), "ame") == 0)
                                    return &fieldGeneratorAmenityName;
                                break;
                            case 'S':
                                if (strncmp(&(field_name[8]), "pokenName", 9) == 0)
                                  {
                                    switch ((unsigned char)(field_name[17]))
                                      {
                                        case 'P':
                                            if (strcmp(&(field_name[18]), "lural") == 0)
                                                return &fieldGeneratorAmenitySpokenNamePlural;
                                            break;
                                        case 'S':
                                            if (strcmp(&(field_name[18]), "ingular") == 0)
                                                return &fieldGeneratorAmenitySpokenNameSingular;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'T':
                                if (strncmp(&(field_name[8]), "opLevel", 7) == 0)
                                  {
                                    switch ((unsigned char)(field_name[15]))
                                      {
                                        case 'N':
                                            if (strcmp(&(field_name[16]), "ame") == 0)
                                                return &fieldGeneratorAmenityTopLevelName;
                                            break;
                                        case 'S':
                                            if (strncmp(&(field_name[16]), "pokenName", 9) == 0)
                                              {
                                                switch ((unsigned char)(field_name[25]))
                                                  {
                                                    case 'P':
                                                        if (strcmp(&(field_name[26]), "lural") == 0)
                                                            return &fieldGeneratorAmenityTopLevelSpokenNamePlural;
                                                        break;
                                                    case 'S':
                                                        if (strcmp(&(field_name[26]), "ingular") == 0)
                                                            return &fieldGeneratorAmenityTopLevelSpokenNameSingular;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            default:
                                break;
                          }
                      }
                    return NULL;
                  }

              public:
                Generator(bool ignore_extras = false) : fieldGeneratorAmenityIndex("field \"AmenityIndex\" of the TypeAmenityGroup class"), fieldGeneratorAmenityID("field \"AmenityID\" of the TypeAmenityGroup class"), fieldGeneratorAmenityName("field \"AmenityName\" of the TypeAmenityGroup class"), fieldGeneratorAmenitySpokenNameSingular("field \"AmenitySpokenNameSingular\" of the TypeAmenityGroup class"), fieldGeneratorAmenitySpokenNamePlural("field \"AmenitySpokenNamePlural\" of the TypeAmenityGroup class"), fieldGeneratorAmenityTopLevelName("field \"AmenityTopLevelName\" of the TypeAmenityGroup class"), fieldGeneratorAmenityTopLevelSpokenNameSingular("field \"AmenityTopLevelSpokenNameSingular\" of the TypeAmenityGroup class"), fieldGeneratorAmenityTopLevelSpokenNamePlural("field \"AmenityTopLevelSpokenNamePlural\" of the TypeAmenityGroup class")
                  {
                    set_what("the TypeAmenityGroup class");
                  }
                ~Generator(void)
                  {
                  }

                void reset(void)
                  {
                    fieldGeneratorAmenityIndex.reset();
                    fieldGeneratorAmenityID.reset();
                    fieldGeneratorAmenityName.reset();
                    fieldGeneratorAmenitySpokenNameSingular.reset();
                    fieldGeneratorAmenitySpokenNamePlural.reset();
                    fieldGeneratorAmenityTopLevelName.reset();
                    fieldGeneratorAmenityTopLevelSpokenNameSingular.reset();
                    fieldGeneratorAmenityTopLevelSpokenNamePlural.reset();
                    JSONObjectGenerator::reset();
                  }
              };
          };

      private:
        bool flagHasAmenityGroupName;
        std::string storeAmenityGroupName;
        bool flagHasAmenityGroupSpokenNameSingular;
        std::string storeAmenityGroupSpokenNameSingular;
        bool flagHasAmenityGroupSpokenNamePlural;
        std::string storeAmenityGroupSpokenNamePlural;
        bool flagHasAmenityGroup;
        std::vector< TypeAmenityGroupJSON * > storeAmenityGroup;

        TypeAmenitiesExcludeJSON(const TypeAmenitiesExcludeJSON &);
        TypeAmenitiesExcludeJSON & operator=(const TypeAmenitiesExcludeJSON &other);

        void  fromJSONAmenityGroupName(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAmenityGroupSpokenNameSingular(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAmenityGroupSpokenNamePlural(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAmenityGroup(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeAmenitiesExcludeJSON(void);
        virtual ~TypeAmenitiesExcludeJSON(void);
        bool  hasAmenityGroupName(void) const;
        std::string  getAmenityGroupName(void);
        const std::string  getAmenityGroupName(void) const;
        bool  hasAmenityGroupSpokenNameSingular(void) const;
        std::string  getAmenityGroupSpokenNameSingular(void);
        const std::string  getAmenityGroupSpokenNameSingular(void) const;
        bool  hasAmenityGroupSpokenNamePlural(void) const;
        std::string  getAmenityGroupSpokenNamePlural(void);
        const std::string  getAmenityGroupSpokenNamePlural(void) const;
        bool  hasAmenityGroup(void) const;
        size_t  countOfAmenityGroup(void) const;
        TypeAmenityGroupJSON *  elementOfAmenityGroup(size_t element_num);
        const TypeAmenityGroupJSON *  elementOfAmenityGroup(size_t element_num) const;
        std::vector< TypeAmenityGroupJSON * >  getAmenityGroup(void);
        const std::vector< TypeAmenityGroupJSON * >  getAmenityGroup(void) const;


        void setAmenityGroupName(std::string new_value)
          {
            flagHasAmenityGroupName = true;
            storeAmenityGroupName = new_value;
          }
        void unsetAmenityGroupName(void)
          {
            flagHasAmenityGroupName = false;
          }
        void setAmenityGroupSpokenNameSingular(std::string new_value)
          {
            flagHasAmenityGroupSpokenNameSingular = true;
            storeAmenityGroupSpokenNameSingular = new_value;
          }
        void unsetAmenityGroupSpokenNameSingular(void)
          {
            flagHasAmenityGroupSpokenNameSingular = false;
          }
        void setAmenityGroupSpokenNamePlural(std::string new_value)
          {
            flagHasAmenityGroupSpokenNamePlural = true;
            storeAmenityGroupSpokenNamePlural = new_value;
          }
        void unsetAmenityGroupSpokenNamePlural(void)
          {
            flagHasAmenityGroupSpokenNamePlural = false;
          }
        void initAmenityGroup(void)
          {
            if (flagHasAmenityGroup)
              {
                for (size_t num5 = 0; num5 < storeAmenityGroup.size(); ++num5)
                  {
                    storeAmenityGroup[num5]->remove_reference();
                  }
              }
            flagHasAmenityGroup = true;
            storeAmenityGroup.clear();
          }
        void appendAmenityGroup(TypeAmenityGroupJSON * to_append)
          {
            if (!flagHasAmenityGroup)
              {
                flagHasAmenityGroup = true;
                storeAmenityGroup.clear();
              }
            assert(flagHasAmenityGroup);
            to_append->add_reference();
            storeAmenityGroup.push_back(to_append);
          }
        void unsetAmenityGroup(void)
          {
            if (flagHasAmenityGroup)
              {
                for (size_t num6 = 0; num6 < storeAmenityGroup.size(); ++num6)
                  {
                    storeAmenityGroup[num6]->remove_reference();
                  }
              }
            flagHasAmenityGroup = false;
            storeAmenityGroup.clear();
          }


        void write_as_json(JSONHandler *handler) const
          {
            handler->start_object();
            write_fields_as_json(handler);
            handler->finish_object();
          }

        virtual void write_fields_as_json(JSONHandler *handler) const
          {
            if (flagHasAmenityGroupName)
              {
                handler->start_pair("AmenityGroupName");
                handler->string_value(storeAmenityGroupName);
              }
            if (flagHasAmenityGroupSpokenNameSingular)
              {
                handler->start_pair("AmenityGroupSpokenNameSingular");
                handler->string_value(storeAmenityGroupSpokenNameSingular);
              }
            if (flagHasAmenityGroupSpokenNamePlural)
              {
                handler->start_pair("AmenityGroupSpokenNamePlural");
                handler->string_value(storeAmenityGroupSpokenNamePlural);
              }
            assert(flagHasAmenityGroup);
            handler->start_pair("AmenityGroup");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeAmenityGroup.size(); ++num1)
              {
                storeAmenityGroup[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasAmenityGroup()))
              {
                return "When parsing the object for %what%, the \"AmenityGroup\" field was missing.";
              }
            return NULL;
          }

        static TypeAmenitiesExcludeJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeAmenitiesExcludeJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeAmenitiesExcludeJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeAmenitiesExcludeJSON>, TypeAmenitiesExcludeJSON *, bool> generator("Type TypeAmenitiesExclude", ignore_extras);
                parse_json_value(text, "Text for TypeAmenitiesExcludeJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeAmenitiesExcludeJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeAmenitiesExcludeJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeAmenitiesExcludeJSON>, TypeAmenitiesExcludeJSON *, bool> generator("Type TypeAmenitiesExclude", ignore_extras);
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAmenityGroupName;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAmenityGroupSpokenNameSingular;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAmenityGroupSpokenNamePlural;
            JSONHoldingArrayGenerator<TypeAmenityGroupJSON::Generator, RCHandle<TypeAmenityGroupJSON>, TypeAmenityGroupJSON *, bool > fieldGeneratorAmenityGroup;


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
                TypeAmenitiesExcludeJSON *result = new TypeAmenitiesExcludeJSON();
                assert(result != NULL);
                RCHandle<TypeAmenitiesExcludeJSON> result_holder = result;
                finish(result);
                handle_result(result);
              }
            void finish(TypeAmenitiesExcludeJSON *result)
              {
                if (fieldGeneratorAmenityGroupName.have_value)
                  {
                    result->setAmenityGroupName(fieldGeneratorAmenityGroupName.value);
                    fieldGeneratorAmenityGroupName.have_value = false;
                  }
                if (fieldGeneratorAmenityGroupSpokenNameSingular.have_value)
                  {
                    result->setAmenityGroupSpokenNameSingular(fieldGeneratorAmenityGroupSpokenNameSingular.value);
                    fieldGeneratorAmenityGroupSpokenNameSingular.have_value = false;
                  }
                if (fieldGeneratorAmenityGroupSpokenNamePlural.have_value)
                  {
                    result->setAmenityGroupSpokenNamePlural(fieldGeneratorAmenityGroupSpokenNamePlural.value);
                    fieldGeneratorAmenityGroupSpokenNamePlural.have_value = false;
                  }
                if (fieldGeneratorAmenityGroup.have_value)
                  {
                    result->initAmenityGroup();
                    size_t count = fieldGeneratorAmenityGroup.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendAmenityGroup(fieldGeneratorAmenityGroup.value[num].referenced());
                      }
                    fieldGeneratorAmenityGroup.value.clear();
                    fieldGeneratorAmenityGroup.have_value = false;
                  }
                else if (!(result->hasAmenityGroup()))
                  {
                    error("When parsing the object for %what%, the \"AmenityGroup\" field was missing.");
                  }
              }
            virtual void handle_result(TypeAmenitiesExcludeJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strncmp(field_name, "AmenityGroup", 12) == 0)
                  {
                    switch ((unsigned char)(field_name[12]))
                      {
                        case 0:
                            return &fieldGeneratorAmenityGroup;
                        case 'N':
                            if (strcmp(&(field_name[13]), "ame") == 0)
                                return &fieldGeneratorAmenityGroupName;
                            break;
                        case 'S':
                            if (strncmp(&(field_name[13]), "pokenName", 9) == 0)
                              {
                                switch ((unsigned char)(field_name[22]))
                                  {
                                    case 'P':
                                        if (strcmp(&(field_name[23]), "lural") == 0)
                                            return &fieldGeneratorAmenityGroupSpokenNamePlural;
                                        break;
                                    case 'S':
                                        if (strcmp(&(field_name[23]), "ingular") == 0)
                                            return &fieldGeneratorAmenityGroupSpokenNameSingular;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        default:
                            break;
                      }
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorAmenityGroupName("field \"AmenityGroupName\" of the TypeAmenitiesExclude class"), fieldGeneratorAmenityGroupSpokenNameSingular("field \"AmenityGroupSpokenNameSingular\" of the TypeAmenitiesExclude class"), fieldGeneratorAmenityGroupSpokenNamePlural("field \"AmenityGroupSpokenNamePlural\" of the TypeAmenitiesExclude class"), fieldGeneratorAmenityGroup("field \"AmenityGroup\" of the TypeAmenitiesExclude class", ignore_extras)
              {
                set_what("the TypeAmenitiesExclude class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorAmenityGroupName.reset();
                fieldGeneratorAmenityGroupSpokenNameSingular.reset();
                fieldGeneratorAmenityGroupSpokenNamePlural.reset();
                fieldGeneratorAmenityGroup.reset();
                JSONObjectGenerator::reset();
              }
          };
      };

  private:
    bool flagHasQueryType;
    TypeQueryType storeQueryType;
    bool flagHasResultCount;
    uint8_t storeResultCount;
    bool flagHasMapLocation;
    MapLocationJSON * storeMapLocation;
    bool flagHasRadius;
    double storeRadius;
    std::string textStoreRadius;
    bool flagHasRadiusUnit;
    TypeRadiusUnit storeRadiusUnit;
    bool flagHasRadiusInferred;
    bool storeRadiusInferred;
    bool flagHasAveragePrice;
    MoneyJSON * storeAveragePrice;
    bool flagHasMinimumPrice;
    MoneyJSON * storeMinimumPrice;
    bool flagHasMaximumPrice;
    MoneyJSON * storeMaximumPrice;
    bool flagHasPriceIsTotal;
    bool storePriceIsTotal;
    bool flagHasStartDateAndTimeInput;
    DateAndOrTimeJSON * storeStartDateAndTimeInput;
    bool flagHasEndDateAndTimeInput;
    DateAndOrTimeJSON * storeEndDateAndTimeInput;
    bool flagHasStartDateAndTimeInferred;
    bool storeStartDateAndTimeInferred;
    bool flagHasEndDateAndTimeInferred;
    bool storeEndDateAndTimeInferred;
    bool flagHasStartDateAndTimeFinal;
    DateAndOrTimeJSON * storeStartDateAndTimeFinal;
    bool flagHasStartDatePrintedForm;
    std::string storeStartDatePrintedForm;
    bool flagHasStartDateSpokenForm;
    std::string storeStartDateSpokenForm;
    bool flagHasEndDateAndTimeFinal;
    DateAndOrTimeJSON * storeEndDateAndTimeFinal;
    bool flagHasEndDatePrintedForm;
    std::string storeEndDatePrintedForm;
    bool flagHasEndDateSpokenForm;
    std::string storeEndDateSpokenForm;
    bool flagHasDurationInDaysInput;
    OInteger storeDurationInDaysInput;
    bool flagHasDurationInDaysFinal;
    OInteger storeDurationInDaysFinal;
    bool flagHasSortCriteria;
    std::vector< TypeSortCriteria > storeSortCriteria;
    bool flagHasSortOrder;
    std::vector< TypeSortOrder > storeSortOrder;
    bool flagHasAvailableOnly;
    bool storeAvailableOnly;
    bool flagHasExpensiveFlag;
    bool storeExpensiveFlag;
    bool flagHasInexpensiveFlag;
    bool storeInexpensiveFlag;
    bool flagHasSpecificHotelQuestion;
    bool storeSpecificHotelQuestion;
    bool flagHasConversationMode;
    bool storeConversationMode;
    bool flagHasGuestRatingMin;
    double storeGuestRatingMin;
    std::string textStoreGuestRatingMin;
    bool flagHasGuestRatingMax;
    double storeGuestRatingMax;
    std::string textStoreGuestRatingMax;
    bool flagHasStarRatingMin;
    double storeStarRatingMin;
    std::string textStoreStarRatingMin;
    bool flagHasStarRatingMax;
    double storeStarRatingMax;
    std::string textStoreStarRatingMax;
    bool flagHasStarRatingsInclude;
    std::vector< double > storeStarRatingsInclude;
    bool flagHasStarRatingsExclude;
    std::vector< double > storeStarRatingsExclude;
    bool flagHasRoomCount;
    uint8_t storeRoomCount;
    bool flagHasAdultCount;
    std::vector< uint8_t > storeAdultCount;
    bool flagHasChildrenCount;
    std::vector< uint8_t > storeChildrenCount;
    bool flagHasGuestCountIsPerRoom;
    bool storeGuestCountIsPerRoom;
    bool flagHasFranchiseNamesInclude;
    std::vector< std::string > storeFranchiseNamesInclude;
    bool flagHasFranchiseNamesExclude;
    std::vector< std::string > storeFranchiseNamesExclude;
    bool flagHasHotelsInclude;
    std::vector< OInteger > storeHotelsInclude;
    bool flagHasHotelsExclude;
    std::vector< OInteger > storeHotelsExclude;
    bool flagHasAccommodationTypesInclude;
    std::vector< TypeAccommodationTypesInclude > storeAccommodationTypesInclude;
    bool flagHasAccommodationTypesExclude;
    std::vector< TypeAccommodationTypesExclude > storeAccommodationTypesExclude;
    bool flagHasAmenitiesInclude;
    std::vector< TypeAmenitiesIncludeJSON * > storeAmenitiesInclude;
    bool flagHasAmenitiesExclude;
    std::vector< TypeAmenitiesExcludeJSON * > storeAmenitiesExclude;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HotelFilterSpecJSON(const HotelFilterSpecJSON &);
    HotelFilterSpecJSON & operator=(const HotelFilterSpecJSON &other);

    void  fromJSONQueryType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResultCount(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMapLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRadius(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRadiusUnit(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRadiusInferred(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAveragePrice(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMinimumPrice(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMaximumPrice(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPriceIsTotal(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStartDateAndTimeInput(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEndDateAndTimeInput(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStartDateAndTimeInferred(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEndDateAndTimeInferred(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStartDateAndTimeFinal(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStartDatePrintedForm(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStartDateSpokenForm(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEndDateAndTimeFinal(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEndDatePrintedForm(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEndDateSpokenForm(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDurationInDaysInput(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDurationInDaysFinal(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSortCriteria(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSortOrder(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAvailableOnly(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONExpensiveFlag(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONInexpensiveFlag(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpecificHotelQuestion(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONConversationMode(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGuestRatingMin(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGuestRatingMax(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStarRatingMin(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStarRatingMax(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStarRatingsInclude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStarRatingsExclude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRoomCount(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAdultCount(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONChildrenCount(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGuestCountIsPerRoom(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFranchiseNamesInclude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFranchiseNamesExclude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHotelsInclude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHotelsExclude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAccommodationTypesInclude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAccommodationTypesExclude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAmenitiesInclude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAmenitiesExclude(JSONValue *json_value, bool ignore_extras = false);


  public:
    HotelFilterSpecJSON(void);
    virtual ~HotelFilterSpecJSON(void);
    bool  hasQueryType(void) const;
    TypeQueryType  getQueryType(void);
    const TypeQueryType  getQueryType(void) const;
    const char * getQueryTypeAsChars(void) const;
    std::string  getQueryTypeAsString(void) const;
    bool  hasResultCount(void) const;
    uint8_t  getResultCount(void);
    const uint8_t  getResultCount(void) const;
    bool  hasMapLocation(void) const;
    MapLocationJSON *  getMapLocation(void);
    const MapLocationJSON *  getMapLocation(void) const;
    bool  hasRadius(void) const;
    double  getRadius(void);
    const double  getRadius(void) const;
    std::string  getRadiusAsText(void) const;
    bool  hasRadiusUnit(void) const;
    TypeRadiusUnit  getRadiusUnit(void);
    const TypeRadiusUnit  getRadiusUnit(void) const;
    const char * getRadiusUnitAsChars(void) const;
    std::string  getRadiusUnitAsString(void) const;
    bool  hasRadiusInferred(void) const;
    bool  getRadiusInferred(void);
    const bool  getRadiusInferred(void) const;
    bool  hasAveragePrice(void) const;
    MoneyJSON *  getAveragePrice(void);
    const MoneyJSON *  getAveragePrice(void) const;
    bool  hasMinimumPrice(void) const;
    MoneyJSON *  getMinimumPrice(void);
    const MoneyJSON *  getMinimumPrice(void) const;
    bool  hasMaximumPrice(void) const;
    MoneyJSON *  getMaximumPrice(void);
    const MoneyJSON *  getMaximumPrice(void) const;
    bool  hasPriceIsTotal(void) const;
    bool  getPriceIsTotal(void);
    const bool  getPriceIsTotal(void) const;
    bool  hasStartDateAndTimeInput(void) const;
    DateAndOrTimeJSON *  getStartDateAndTimeInput(void);
    const DateAndOrTimeJSON *  getStartDateAndTimeInput(void) const;
    bool  hasEndDateAndTimeInput(void) const;
    DateAndOrTimeJSON *  getEndDateAndTimeInput(void);
    const DateAndOrTimeJSON *  getEndDateAndTimeInput(void) const;
    bool  hasStartDateAndTimeInferred(void) const;
    bool  getStartDateAndTimeInferred(void);
    const bool  getStartDateAndTimeInferred(void) const;
    bool  hasEndDateAndTimeInferred(void) const;
    bool  getEndDateAndTimeInferred(void);
    const bool  getEndDateAndTimeInferred(void) const;
    bool  hasStartDateAndTimeFinal(void) const;
    DateAndOrTimeJSON *  getStartDateAndTimeFinal(void);
    const DateAndOrTimeJSON *  getStartDateAndTimeFinal(void) const;
    bool  hasStartDatePrintedForm(void) const;
    std::string  getStartDatePrintedForm(void);
    const std::string  getStartDatePrintedForm(void) const;
    bool  hasStartDateSpokenForm(void) const;
    std::string  getStartDateSpokenForm(void);
    const std::string  getStartDateSpokenForm(void) const;
    bool  hasEndDateAndTimeFinal(void) const;
    DateAndOrTimeJSON *  getEndDateAndTimeFinal(void);
    const DateAndOrTimeJSON *  getEndDateAndTimeFinal(void) const;
    bool  hasEndDatePrintedForm(void) const;
    std::string  getEndDatePrintedForm(void);
    const std::string  getEndDatePrintedForm(void) const;
    bool  hasEndDateSpokenForm(void) const;
    std::string  getEndDateSpokenForm(void);
    const std::string  getEndDateSpokenForm(void) const;
    bool  hasDurationInDaysInput(void) const;
    OInteger  getDurationInDaysInput(void);
    const OInteger  getDurationInDaysInput(void) const;
    bool  hasDurationInDaysFinal(void) const;
    OInteger  getDurationInDaysFinal(void);
    const OInteger  getDurationInDaysFinal(void) const;
    bool  hasSortCriteria(void) const;
    size_t  countOfSortCriteria(void) const;
    TypeSortCriteria  elementOfSortCriteria(size_t element_num);
    const TypeSortCriteria  elementOfSortCriteria(size_t element_num) const;
    std::vector< TypeSortCriteria >  getSortCriteria(void);
    const std::vector< TypeSortCriteria >  getSortCriteria(void) const;
    bool  hasSortOrder(void) const;
    size_t  countOfSortOrder(void) const;
    TypeSortOrder  elementOfSortOrder(size_t element_num);
    const TypeSortOrder  elementOfSortOrder(size_t element_num) const;
    std::vector< TypeSortOrder >  getSortOrder(void);
    const std::vector< TypeSortOrder >  getSortOrder(void) const;
    bool  hasAvailableOnly(void) const;
    bool  getAvailableOnly(void);
    const bool  getAvailableOnly(void) const;
    bool  hasExpensiveFlag(void) const;
    bool  getExpensiveFlag(void);
    const bool  getExpensiveFlag(void) const;
    bool  hasInexpensiveFlag(void) const;
    bool  getInexpensiveFlag(void);
    const bool  getInexpensiveFlag(void) const;
    bool  hasSpecificHotelQuestion(void) const;
    bool  getSpecificHotelQuestion(void);
    const bool  getSpecificHotelQuestion(void) const;
    bool  hasConversationMode(void) const;
    bool  getConversationMode(void);
    const bool  getConversationMode(void) const;
    bool  hasGuestRatingMin(void) const;
    double  getGuestRatingMin(void);
    const double  getGuestRatingMin(void) const;
    std::string  getGuestRatingMinAsText(void) const;
    bool  hasGuestRatingMax(void) const;
    double  getGuestRatingMax(void);
    const double  getGuestRatingMax(void) const;
    std::string  getGuestRatingMaxAsText(void) const;
    bool  hasStarRatingMin(void) const;
    double  getStarRatingMin(void);
    const double  getStarRatingMin(void) const;
    std::string  getStarRatingMinAsText(void) const;
    bool  hasStarRatingMax(void) const;
    double  getStarRatingMax(void);
    const double  getStarRatingMax(void) const;
    std::string  getStarRatingMaxAsText(void) const;
    bool  hasStarRatingsInclude(void) const;
    size_t  countOfStarRatingsInclude(void) const;
    double  elementOfStarRatingsInclude(size_t element_num);
    const double  elementOfStarRatingsInclude(size_t element_num) const;
    std::vector< double >  getStarRatingsInclude(void);
    const std::vector< double >  getStarRatingsInclude(void) const;
    bool  hasStarRatingsExclude(void) const;
    size_t  countOfStarRatingsExclude(void) const;
    double  elementOfStarRatingsExclude(size_t element_num);
    const double  elementOfStarRatingsExclude(size_t element_num) const;
    std::vector< double >  getStarRatingsExclude(void);
    const std::vector< double >  getStarRatingsExclude(void) const;
    bool  hasRoomCount(void) const;
    uint8_t  getRoomCount(void);
    const uint8_t  getRoomCount(void) const;
    bool  hasAdultCount(void) const;
    size_t  countOfAdultCount(void) const;
    uint8_t  elementOfAdultCount(size_t element_num);
    const uint8_t  elementOfAdultCount(size_t element_num) const;
    std::vector< uint8_t >  getAdultCount(void);
    const std::vector< uint8_t >  getAdultCount(void) const;
    bool  hasChildrenCount(void) const;
    size_t  countOfChildrenCount(void) const;
    uint8_t  elementOfChildrenCount(size_t element_num);
    const uint8_t  elementOfChildrenCount(size_t element_num) const;
    std::vector< uint8_t >  getChildrenCount(void);
    const std::vector< uint8_t >  getChildrenCount(void) const;
    bool  hasGuestCountIsPerRoom(void) const;
    bool  getGuestCountIsPerRoom(void);
    const bool  getGuestCountIsPerRoom(void) const;
    bool  hasFranchiseNamesInclude(void) const;
    size_t  countOfFranchiseNamesInclude(void) const;
    std::string  elementOfFranchiseNamesInclude(size_t element_num);
    const std::string  elementOfFranchiseNamesInclude(size_t element_num) const;
    std::vector< std::string >  getFranchiseNamesInclude(void);
    const std::vector< std::string >  getFranchiseNamesInclude(void) const;
    bool  hasFranchiseNamesExclude(void) const;
    size_t  countOfFranchiseNamesExclude(void) const;
    std::string  elementOfFranchiseNamesExclude(size_t element_num);
    const std::string  elementOfFranchiseNamesExclude(size_t element_num) const;
    std::vector< std::string >  getFranchiseNamesExclude(void);
    const std::vector< std::string >  getFranchiseNamesExclude(void) const;
    bool  hasHotelsInclude(void) const;
    size_t  countOfHotelsInclude(void) const;
    OInteger  elementOfHotelsInclude(size_t element_num);
    const OInteger  elementOfHotelsInclude(size_t element_num) const;
    std::vector< OInteger >  getHotelsInclude(void);
    const std::vector< OInteger >  getHotelsInclude(void) const;
    bool  hasHotelsExclude(void) const;
    size_t  countOfHotelsExclude(void) const;
    OInteger  elementOfHotelsExclude(size_t element_num);
    const OInteger  elementOfHotelsExclude(size_t element_num) const;
    std::vector< OInteger >  getHotelsExclude(void);
    const std::vector< OInteger >  getHotelsExclude(void) const;
    bool  hasAccommodationTypesInclude(void) const;
    size_t  countOfAccommodationTypesInclude(void) const;
    TypeAccommodationTypesInclude  elementOfAccommodationTypesInclude(size_t element_num);
    const TypeAccommodationTypesInclude  elementOfAccommodationTypesInclude(size_t element_num) const;
    std::vector< TypeAccommodationTypesInclude >  getAccommodationTypesInclude(void);
    const std::vector< TypeAccommodationTypesInclude >  getAccommodationTypesInclude(void) const;
    bool  hasAccommodationTypesExclude(void) const;
    size_t  countOfAccommodationTypesExclude(void) const;
    TypeAccommodationTypesExclude  elementOfAccommodationTypesExclude(size_t element_num);
    const TypeAccommodationTypesExclude  elementOfAccommodationTypesExclude(size_t element_num) const;
    std::vector< TypeAccommodationTypesExclude >  getAccommodationTypesExclude(void);
    const std::vector< TypeAccommodationTypesExclude >  getAccommodationTypesExclude(void) const;
    bool  hasAmenitiesInclude(void) const;
    size_t  countOfAmenitiesInclude(void) const;
    TypeAmenitiesIncludeJSON *  elementOfAmenitiesInclude(size_t element_num);
    const TypeAmenitiesIncludeJSON *  elementOfAmenitiesInclude(size_t element_num) const;
    std::vector< TypeAmenitiesIncludeJSON * >  getAmenitiesInclude(void);
    const std::vector< TypeAmenitiesIncludeJSON * >  getAmenitiesInclude(void) const;
    bool  hasAmenitiesExclude(void) const;
    size_t  countOfAmenitiesExclude(void) const;
    TypeAmenitiesExcludeJSON *  elementOfAmenitiesExclude(size_t element_num);
    const TypeAmenitiesExcludeJSON *  elementOfAmenitiesExclude(size_t element_num) const;
    std::vector< TypeAmenitiesExcludeJSON * >  getAmenitiesExclude(void);
    const std::vector< TypeAmenitiesExcludeJSON * >  getAmenitiesExclude(void) const;

    virtual size_t extraHotelFilterSpecComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHotelFilterSpecComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHotelFilterSpecComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHotelFilterSpecComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHotelFilterSpecLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHotelFilterSpecLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setQueryType(TypeQueryType new_value)
      {
        flagHasQueryType = true;
        storeQueryType = new_value;
      }
    void setQueryType(const char *chars)
      {
        setQueryType(stringToQueryType(chars));
      }
    void setQueryType(std::string the_string)
      {
        setQueryType(stringToQueryType(the_string.c_str()));
      }
    void unsetQueryType(void)
      {
        flagHasQueryType = false;
      }
    void setResultCount(uint8_t new_value)
      {
        flagHasResultCount = true;
        if (new_value < 0)
            throw("The value for field ResultCount of HotelFilterSpecJSON is less than the lower bound (0) for that field.");
        if (new_value > 30)
            throw("The value for field ResultCount of HotelFilterSpecJSON is greater than the upper bound (30) for that field.");
        storeResultCount = new_value;
      }
    void unsetResultCount(void)
      {
        flagHasResultCount = false;
      }
    void setMapLocation(MapLocationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMapLocation)
          {
            storeMapLocation->remove_reference();
          }
        flagHasMapLocation = true;
        storeMapLocation = new_value;
      }
    void unsetMapLocation(void)
      {
        if (flagHasMapLocation)
          {
            storeMapLocation->remove_reference();
          }
        flagHasMapLocation = false;
      }
    void setRadius(double new_value)
      {
        flagHasRadius = true;
        if (new_value < 0)
            throw("The value for field Radius of HotelFilterSpecJSON is less than the lower bound (0) for that field.");
        storeRadius = new_value;
        textStoreRadius = "";
      }
    void setRadiusText(std::string new_value)
      {
        flagHasRadius = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Radius of HotelFilterSpecJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field Radius of HotelFilterSpecJSON is less than the lower bound (0) for that field.");
        textStoreRadius = new_value;
      }
    void unsetRadius(void)
      {
        flagHasRadius = false;
      }
    void setRadiusUnit(TypeRadiusUnit new_value)
      {
        flagHasRadiusUnit = true;
        storeRadiusUnit = new_value;
      }
    void setRadiusUnit(const char *chars)
      {
        setRadiusUnit(stringToRadiusUnit(chars));
      }
    void setRadiusUnit(std::string the_string)
      {
        setRadiusUnit(stringToRadiusUnit(the_string.c_str()));
      }
    void unsetRadiusUnit(void)
      {
        flagHasRadiusUnit = false;
      }
    void setRadiusInferred(bool new_value)
      {
        flagHasRadiusInferred = true;
        storeRadiusInferred = new_value;
      }
    void unsetRadiusInferred(void)
      {
        flagHasRadiusInferred = false;
      }
    void setAveragePrice(MoneyJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAveragePrice)
          {
            storeAveragePrice->remove_reference();
          }
        flagHasAveragePrice = true;
        storeAveragePrice = new_value;
      }
    void unsetAveragePrice(void)
      {
        if (flagHasAveragePrice)
          {
            storeAveragePrice->remove_reference();
          }
        flagHasAveragePrice = false;
      }
    void setMinimumPrice(MoneyJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMinimumPrice)
          {
            storeMinimumPrice->remove_reference();
          }
        flagHasMinimumPrice = true;
        storeMinimumPrice = new_value;
      }
    void unsetMinimumPrice(void)
      {
        if (flagHasMinimumPrice)
          {
            storeMinimumPrice->remove_reference();
          }
        flagHasMinimumPrice = false;
      }
    void setMaximumPrice(MoneyJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMaximumPrice)
          {
            storeMaximumPrice->remove_reference();
          }
        flagHasMaximumPrice = true;
        storeMaximumPrice = new_value;
      }
    void unsetMaximumPrice(void)
      {
        if (flagHasMaximumPrice)
          {
            storeMaximumPrice->remove_reference();
          }
        flagHasMaximumPrice = false;
      }
    void setPriceIsTotal(bool new_value)
      {
        flagHasPriceIsTotal = true;
        storePriceIsTotal = new_value;
      }
    void unsetPriceIsTotal(void)
      {
        flagHasPriceIsTotal = false;
      }
    void setStartDateAndTimeInput(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStartDateAndTimeInput)
          {
            storeStartDateAndTimeInput->remove_reference();
          }
        flagHasStartDateAndTimeInput = true;
        storeStartDateAndTimeInput = new_value;
      }
    void unsetStartDateAndTimeInput(void)
      {
        if (flagHasStartDateAndTimeInput)
          {
            storeStartDateAndTimeInput->remove_reference();
          }
        flagHasStartDateAndTimeInput = false;
      }
    void setEndDateAndTimeInput(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasEndDateAndTimeInput)
          {
            storeEndDateAndTimeInput->remove_reference();
          }
        flagHasEndDateAndTimeInput = true;
        storeEndDateAndTimeInput = new_value;
      }
    void unsetEndDateAndTimeInput(void)
      {
        if (flagHasEndDateAndTimeInput)
          {
            storeEndDateAndTimeInput->remove_reference();
          }
        flagHasEndDateAndTimeInput = false;
      }
    void setStartDateAndTimeInferred(bool new_value)
      {
        flagHasStartDateAndTimeInferred = true;
        storeStartDateAndTimeInferred = new_value;
      }
    void unsetStartDateAndTimeInferred(void)
      {
        flagHasStartDateAndTimeInferred = false;
      }
    void setEndDateAndTimeInferred(bool new_value)
      {
        flagHasEndDateAndTimeInferred = true;
        storeEndDateAndTimeInferred = new_value;
      }
    void unsetEndDateAndTimeInferred(void)
      {
        flagHasEndDateAndTimeInferred = false;
      }
    void setStartDateAndTimeFinal(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStartDateAndTimeFinal)
          {
            storeStartDateAndTimeFinal->remove_reference();
          }
        flagHasStartDateAndTimeFinal = true;
        storeStartDateAndTimeFinal = new_value;
      }
    void unsetStartDateAndTimeFinal(void)
      {
        if (flagHasStartDateAndTimeFinal)
          {
            storeStartDateAndTimeFinal->remove_reference();
          }
        flagHasStartDateAndTimeFinal = false;
      }
    void setStartDatePrintedForm(std::string new_value)
      {
        flagHasStartDatePrintedForm = true;
        storeStartDatePrintedForm = new_value;
      }
    void unsetStartDatePrintedForm(void)
      {
        flagHasStartDatePrintedForm = false;
      }
    void setStartDateSpokenForm(std::string new_value)
      {
        flagHasStartDateSpokenForm = true;
        storeStartDateSpokenForm = new_value;
      }
    void unsetStartDateSpokenForm(void)
      {
        flagHasStartDateSpokenForm = false;
      }
    void setEndDateAndTimeFinal(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasEndDateAndTimeFinal)
          {
            storeEndDateAndTimeFinal->remove_reference();
          }
        flagHasEndDateAndTimeFinal = true;
        storeEndDateAndTimeFinal = new_value;
      }
    void unsetEndDateAndTimeFinal(void)
      {
        if (flagHasEndDateAndTimeFinal)
          {
            storeEndDateAndTimeFinal->remove_reference();
          }
        flagHasEndDateAndTimeFinal = false;
      }
    void setEndDatePrintedForm(std::string new_value)
      {
        flagHasEndDatePrintedForm = true;
        storeEndDatePrintedForm = new_value;
      }
    void unsetEndDatePrintedForm(void)
      {
        flagHasEndDatePrintedForm = false;
      }
    void setEndDateSpokenForm(std::string new_value)
      {
        flagHasEndDateSpokenForm = true;
        storeEndDateSpokenForm = new_value;
      }
    void unsetEndDateSpokenForm(void)
      {
        flagHasEndDateSpokenForm = false;
      }
    void setDurationInDaysInput(OInteger new_value)
      {
        flagHasDurationInDaysInput = true;
        if (new_value < 0)
            throw("The value for field DurationInDaysInput of HotelFilterSpecJSON is less than the lower bound (0) for that field.");
        storeDurationInDaysInput = new_value;
      }
    void unsetDurationInDaysInput(void)
      {
        flagHasDurationInDaysInput = false;
      }
    void setDurationInDaysFinal(OInteger new_value)
      {
        flagHasDurationInDaysFinal = true;
        if (new_value < 1)
            throw("The value for field DurationInDaysFinal of HotelFilterSpecJSON is less than the lower bound (1) for that field.");
        storeDurationInDaysFinal = new_value;
      }
    void unsetDurationInDaysFinal(void)
      {
        flagHasDurationInDaysFinal = false;
      }
    void initSortCriteria(void)
      {
        flagHasSortCriteria = true;
        storeSortCriteria.clear();
      }
    void appendSortCriteria(TypeSortCriteria to_append)
      {
        if (!flagHasSortCriteria)
          {
            flagHasSortCriteria = true;
            storeSortCriteria.clear();
          }
        assert(flagHasSortCriteria);
        storeSortCriteria.push_back(to_append);
      }
    void appendSortCriteria(const char *chars)
      {
        appendSortCriteria(stringToSortCriteria(chars));
      }
    void appendSortCriteria(std::string the_string)
      {
        appendSortCriteria(stringToSortCriteria(the_string.c_str()));
      }
    void unsetSortCriteria(void)
      {
        flagHasSortCriteria = false;
        storeSortCriteria.clear();
      }
    void initSortOrder(void)
      {
        flagHasSortOrder = true;
        storeSortOrder.clear();
      }
    void appendSortOrder(TypeSortOrder to_append)
      {
        if (!flagHasSortOrder)
          {
            flagHasSortOrder = true;
            storeSortOrder.clear();
          }
        assert(flagHasSortOrder);
        storeSortOrder.push_back(to_append);
      }
    void appendSortOrder(const char *chars)
      {
        appendSortOrder(stringToSortOrder(chars));
      }
    void appendSortOrder(std::string the_string)
      {
        appendSortOrder(stringToSortOrder(the_string.c_str()));
      }
    void unsetSortOrder(void)
      {
        flagHasSortOrder = false;
        storeSortOrder.clear();
      }
    void setAvailableOnly(bool new_value)
      {
        flagHasAvailableOnly = true;
        storeAvailableOnly = new_value;
      }
    void unsetAvailableOnly(void)
      {
        flagHasAvailableOnly = false;
      }
    void setExpensiveFlag(bool new_value)
      {
        flagHasExpensiveFlag = true;
        storeExpensiveFlag = new_value;
      }
    void unsetExpensiveFlag(void)
      {
        flagHasExpensiveFlag = false;
      }
    void setInexpensiveFlag(bool new_value)
      {
        flagHasInexpensiveFlag = true;
        storeInexpensiveFlag = new_value;
      }
    void unsetInexpensiveFlag(void)
      {
        flagHasInexpensiveFlag = false;
      }
    void setSpecificHotelQuestion(bool new_value)
      {
        flagHasSpecificHotelQuestion = true;
        storeSpecificHotelQuestion = new_value;
      }
    void unsetSpecificHotelQuestion(void)
      {
        flagHasSpecificHotelQuestion = false;
      }
    void setConversationMode(bool new_value)
      {
        flagHasConversationMode = true;
        storeConversationMode = new_value;
      }
    void unsetConversationMode(void)
      {
        flagHasConversationMode = false;
      }
    void setGuestRatingMin(double new_value)
      {
        flagHasGuestRatingMin = true;
        if (new_value < 0)
            throw("The value for field GuestRatingMin of HotelFilterSpecJSON is less than the lower bound (0) for that field.");
        if (new_value > 6)
            throw("The value for field GuestRatingMin of HotelFilterSpecJSON is greater than the upper bound (6) for that field.");
        storeGuestRatingMin = new_value;
        textStoreGuestRatingMin = "";
      }
    void setGuestRatingMinText(std::string new_value)
      {
        flagHasGuestRatingMin = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field GuestRatingMin of HotelFilterSpecJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field GuestRatingMin of HotelFilterSpecJSON is less than the lower bound (0) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "6", "", false, "1") > 0)
            throw("The value for field GuestRatingMin of HotelFilterSpecJSON is greater than the upper bound (6) for that field.");
        textStoreGuestRatingMin = new_value;
      }
    void unsetGuestRatingMin(void)
      {
        flagHasGuestRatingMin = false;
      }
    void setGuestRatingMax(double new_value)
      {
        flagHasGuestRatingMax = true;
        if (new_value < 0)
            throw("The value for field GuestRatingMax of HotelFilterSpecJSON is less than the lower bound (0) for that field.");
        if (new_value > 6)
            throw("The value for field GuestRatingMax of HotelFilterSpecJSON is greater than the upper bound (6) for that field.");
        storeGuestRatingMax = new_value;
        textStoreGuestRatingMax = "";
      }
    void setGuestRatingMaxText(std::string new_value)
      {
        flagHasGuestRatingMax = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field GuestRatingMax of HotelFilterSpecJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field GuestRatingMax of HotelFilterSpecJSON is less than the lower bound (0) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "6", "", false, "1") > 0)
            throw("The value for field GuestRatingMax of HotelFilterSpecJSON is greater than the upper bound (6) for that field.");
        textStoreGuestRatingMax = new_value;
      }
    void unsetGuestRatingMax(void)
      {
        flagHasGuestRatingMax = false;
      }
    void setStarRatingMin(double new_value)
      {
        flagHasStarRatingMin = true;
        if (new_value < 0)
            throw("The value for field StarRatingMin of HotelFilterSpecJSON is less than the lower bound (0) for that field.");
        if (new_value > 6)
            throw("The value for field StarRatingMin of HotelFilterSpecJSON is greater than the upper bound (6) for that field.");
        storeStarRatingMin = new_value;
        textStoreStarRatingMin = "";
      }
    void setStarRatingMinText(std::string new_value)
      {
        flagHasStarRatingMin = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field StarRatingMin of HotelFilterSpecJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field StarRatingMin of HotelFilterSpecJSON is less than the lower bound (0) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "6", "", false, "1") > 0)
            throw("The value for field StarRatingMin of HotelFilterSpecJSON is greater than the upper bound (6) for that field.");
        textStoreStarRatingMin = new_value;
      }
    void unsetStarRatingMin(void)
      {
        flagHasStarRatingMin = false;
      }
    void setStarRatingMax(double new_value)
      {
        flagHasStarRatingMax = true;
        if (new_value < 0)
            throw("The value for field StarRatingMax of HotelFilterSpecJSON is less than the lower bound (0) for that field.");
        if (new_value > 6)
            throw("The value for field StarRatingMax of HotelFilterSpecJSON is greater than the upper bound (6) for that field.");
        storeStarRatingMax = new_value;
        textStoreStarRatingMax = "";
      }
    void setStarRatingMaxText(std::string new_value)
      {
        flagHasStarRatingMax = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field StarRatingMax of HotelFilterSpecJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field StarRatingMax of HotelFilterSpecJSON is less than the lower bound (0) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "6", "", false, "1") > 0)
            throw("The value for field StarRatingMax of HotelFilterSpecJSON is greater than the upper bound (6) for that field.");
        textStoreStarRatingMax = new_value;
      }
    void unsetStarRatingMax(void)
      {
        flagHasStarRatingMax = false;
      }
    void initStarRatingsInclude(void)
      {
        flagHasStarRatingsInclude = true;
        storeStarRatingsInclude.clear();
      }
    void appendStarRatingsInclude(double to_append)
      {
        if (!flagHasStarRatingsInclude)
          {
            flagHasStarRatingsInclude = true;
            storeStarRatingsInclude.clear();
          }
        assert(flagHasStarRatingsInclude);
        storeStarRatingsInclude.push_back(to_append);
      }
    void unsetStarRatingsInclude(void)
      {
        flagHasStarRatingsInclude = false;
        storeStarRatingsInclude.clear();
      }
    void initStarRatingsExclude(void)
      {
        flagHasStarRatingsExclude = true;
        storeStarRatingsExclude.clear();
      }
    void appendStarRatingsExclude(double to_append)
      {
        if (!flagHasStarRatingsExclude)
          {
            flagHasStarRatingsExclude = true;
            storeStarRatingsExclude.clear();
          }
        assert(flagHasStarRatingsExclude);
        storeStarRatingsExclude.push_back(to_append);
      }
    void unsetStarRatingsExclude(void)
      {
        flagHasStarRatingsExclude = false;
        storeStarRatingsExclude.clear();
      }
    void setRoomCount(uint8_t new_value)
      {
        flagHasRoomCount = true;
        if (new_value < 0)
            throw("The value for field RoomCount of HotelFilterSpecJSON is less than the lower bound (0) for that field.");
        if (new_value > 8)
            throw("The value for field RoomCount of HotelFilterSpecJSON is greater than the upper bound (8) for that field.");
        storeRoomCount = new_value;
      }
    void unsetRoomCount(void)
      {
        flagHasRoomCount = false;
      }
    void initAdultCount(void)
      {
        flagHasAdultCount = true;
        storeAdultCount.clear();
      }
    void appendAdultCount(uint8_t to_append)
      {
        if (!flagHasAdultCount)
          {
            flagHasAdultCount = true;
            storeAdultCount.clear();
          }
        assert(flagHasAdultCount);
        storeAdultCount.push_back(to_append);
      }
    void unsetAdultCount(void)
      {
        flagHasAdultCount = false;
        storeAdultCount.clear();
      }
    void initChildrenCount(void)
      {
        flagHasChildrenCount = true;
        storeChildrenCount.clear();
      }
    void appendChildrenCount(uint8_t to_append)
      {
        if (!flagHasChildrenCount)
          {
            flagHasChildrenCount = true;
            storeChildrenCount.clear();
          }
        assert(flagHasChildrenCount);
        storeChildrenCount.push_back(to_append);
      }
    void unsetChildrenCount(void)
      {
        flagHasChildrenCount = false;
        storeChildrenCount.clear();
      }
    void setGuestCountIsPerRoom(bool new_value)
      {
        flagHasGuestCountIsPerRoom = true;
        storeGuestCountIsPerRoom = new_value;
      }
    void unsetGuestCountIsPerRoom(void)
      {
        flagHasGuestCountIsPerRoom = false;
      }
    void initFranchiseNamesInclude(void)
      {
        flagHasFranchiseNamesInclude = true;
        storeFranchiseNamesInclude.clear();
      }
    void appendFranchiseNamesInclude(std::string to_append)
      {
        if (!flagHasFranchiseNamesInclude)
          {
            flagHasFranchiseNamesInclude = true;
            storeFranchiseNamesInclude.clear();
          }
        assert(flagHasFranchiseNamesInclude);
        storeFranchiseNamesInclude.push_back(to_append);
      }
    void unsetFranchiseNamesInclude(void)
      {
        flagHasFranchiseNamesInclude = false;
        storeFranchiseNamesInclude.clear();
      }
    void initFranchiseNamesExclude(void)
      {
        flagHasFranchiseNamesExclude = true;
        storeFranchiseNamesExclude.clear();
      }
    void appendFranchiseNamesExclude(std::string to_append)
      {
        if (!flagHasFranchiseNamesExclude)
          {
            flagHasFranchiseNamesExclude = true;
            storeFranchiseNamesExclude.clear();
          }
        assert(flagHasFranchiseNamesExclude);
        storeFranchiseNamesExclude.push_back(to_append);
      }
    void unsetFranchiseNamesExclude(void)
      {
        flagHasFranchiseNamesExclude = false;
        storeFranchiseNamesExclude.clear();
      }
    void initHotelsInclude(void)
      {
        flagHasHotelsInclude = true;
        storeHotelsInclude.clear();
      }
    void appendHotelsInclude(OInteger to_append)
      {
        if (!flagHasHotelsInclude)
          {
            flagHasHotelsInclude = true;
            storeHotelsInclude.clear();
          }
        assert(flagHasHotelsInclude);
        storeHotelsInclude.push_back(to_append);
      }
    void unsetHotelsInclude(void)
      {
        flagHasHotelsInclude = false;
        storeHotelsInclude.clear();
      }
    void initHotelsExclude(void)
      {
        flagHasHotelsExclude = true;
        storeHotelsExclude.clear();
      }
    void appendHotelsExclude(OInteger to_append)
      {
        if (!flagHasHotelsExclude)
          {
            flagHasHotelsExclude = true;
            storeHotelsExclude.clear();
          }
        assert(flagHasHotelsExclude);
        storeHotelsExclude.push_back(to_append);
      }
    void unsetHotelsExclude(void)
      {
        flagHasHotelsExclude = false;
        storeHotelsExclude.clear();
      }
    void initAccommodationTypesInclude(void)
      {
        flagHasAccommodationTypesInclude = true;
        storeAccommodationTypesInclude.clear();
      }
    void appendAccommodationTypesInclude(TypeAccommodationTypesInclude to_append)
      {
        if (!flagHasAccommodationTypesInclude)
          {
            flagHasAccommodationTypesInclude = true;
            storeAccommodationTypesInclude.clear();
          }
        assert(flagHasAccommodationTypesInclude);
        storeAccommodationTypesInclude.push_back(to_append);
      }
    void appendAccommodationTypesInclude(const char *chars)
      {
        appendAccommodationTypesInclude(stringToAccommodationTypesInclude(chars));
      }
    void appendAccommodationTypesInclude(std::string the_string)
      {
        appendAccommodationTypesInclude(stringToAccommodationTypesInclude(the_string.c_str()));
      }
    void unsetAccommodationTypesInclude(void)
      {
        flagHasAccommodationTypesInclude = false;
        storeAccommodationTypesInclude.clear();
      }
    void initAccommodationTypesExclude(void)
      {
        flagHasAccommodationTypesExclude = true;
        storeAccommodationTypesExclude.clear();
      }
    void appendAccommodationTypesExclude(TypeAccommodationTypesExclude to_append)
      {
        if (!flagHasAccommodationTypesExclude)
          {
            flagHasAccommodationTypesExclude = true;
            storeAccommodationTypesExclude.clear();
          }
        assert(flagHasAccommodationTypesExclude);
        storeAccommodationTypesExclude.push_back(to_append);
      }
    void appendAccommodationTypesExclude(const char *chars)
      {
        appendAccommodationTypesExclude(stringToAccommodationTypesExclude(chars));
      }
    void appendAccommodationTypesExclude(std::string the_string)
      {
        appendAccommodationTypesExclude(stringToAccommodationTypesExclude(the_string.c_str()));
      }
    void unsetAccommodationTypesExclude(void)
      {
        flagHasAccommodationTypesExclude = false;
        storeAccommodationTypesExclude.clear();
      }
    void initAmenitiesInclude(void)
      {
        if (flagHasAmenitiesInclude)
          {
            for (size_t num9 = 0; num9 < storeAmenitiesInclude.size(); ++num9)
              {
                storeAmenitiesInclude[num9]->remove_reference();
              }
          }
        flagHasAmenitiesInclude = true;
        storeAmenitiesInclude.clear();
      }
    void appendAmenitiesInclude(TypeAmenitiesIncludeJSON * to_append)
      {
        if (!flagHasAmenitiesInclude)
          {
            flagHasAmenitiesInclude = true;
            storeAmenitiesInclude.clear();
          }
        assert(flagHasAmenitiesInclude);
        to_append->add_reference();
        storeAmenitiesInclude.push_back(to_append);
      }
    void unsetAmenitiesInclude(void)
      {
        if (flagHasAmenitiesInclude)
          {
            for (size_t num10 = 0; num10 < storeAmenitiesInclude.size(); ++num10)
              {
                storeAmenitiesInclude[num10]->remove_reference();
              }
          }
        flagHasAmenitiesInclude = false;
        storeAmenitiesInclude.clear();
      }
    void initAmenitiesExclude(void)
      {
        if (flagHasAmenitiesExclude)
          {
            for (size_t num11 = 0; num11 < storeAmenitiesExclude.size(); ++num11)
              {
                storeAmenitiesExclude[num11]->remove_reference();
              }
          }
        flagHasAmenitiesExclude = true;
        storeAmenitiesExclude.clear();
      }
    void appendAmenitiesExclude(TypeAmenitiesExcludeJSON * to_append)
      {
        if (!flagHasAmenitiesExclude)
          {
            flagHasAmenitiesExclude = true;
            storeAmenitiesExclude.clear();
          }
        assert(flagHasAmenitiesExclude);
        to_append->add_reference();
        storeAmenitiesExclude.push_back(to_append);
      }
    void unsetAmenitiesExclude(void)
      {
        if (flagHasAmenitiesExclude)
          {
            for (size_t num12 = 0; num12 < storeAmenitiesExclude.size(); ++num12)
              {
                storeAmenitiesExclude[num12]->remove_reference();
              }
          }
        flagHasAmenitiesExclude = false;
        storeAmenitiesExclude.clear();
      }

    virtual void extraHotelFilterSpecAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHotelFilterSpecSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHotelFilterSpecLookup(key);
        if (old_field == NULL)
          {
            extraHotelFilterSpecAppendPair(key, new_component);
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
        assert(flagHasQueryType);
        handler->start_pair("QueryType");
        switch (storeQueryType)
          {
            case QueryType_Search:
                handler->string_value("Search");
                break;
            case QueryType_Reservation:
                handler->string_value("Reservation");
                break;
            case QueryType_HotelQuestion:
                handler->string_value("HotelQuestion");
                break;
            default:
                assert(false);
          }
        if (flagHasResultCount)
          {
            handler->start_pair("ResultCount");
            handler->number_value(storeResultCount);
          }
        if (flagHasMapLocation)
          {
            handler->start_pair("MapLocation");
            storeMapLocation->write_as_json(handler);
          }
        if (flagHasRadius)
          {
            handler->start_pair("Radius");
            if (textStoreRadius != "")
                handler->number_value(textStoreRadius.c_str());
            else if (((double)(long int)storeRadius) == storeRadius)
                handler->number_value((long int)storeRadius);
            else
                handler->number_value(storeRadius);
          }
        if (flagHasRadiusUnit)
          {
            handler->start_pair("RadiusUnit");
            switch (storeRadiusUnit)
              {
                case RadiusUnit_Kilometers:
                    handler->string_value("Kilometers");
                    break;
                case RadiusUnit_Miles:
                    handler->string_value("Miles");
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasRadiusInferred)
          {
            handler->start_pair("RadiusInferred");
            handler->boolean_value(storeRadiusInferred);
          }
        if (flagHasAveragePrice)
          {
            handler->start_pair("AveragePrice");
            storeAveragePrice->write_as_json(handler);
          }
        if (flagHasMinimumPrice)
          {
            handler->start_pair("MinimumPrice");
            storeMinimumPrice->write_as_json(handler);
          }
        if (flagHasMaximumPrice)
          {
            handler->start_pair("MaximumPrice");
            storeMaximumPrice->write_as_json(handler);
          }
        if (flagHasPriceIsTotal)
          {
            handler->start_pair("PriceIsTotal");
            handler->boolean_value(storePriceIsTotal);
          }
        if (flagHasStartDateAndTimeInput)
          {
            handler->start_pair("StartDateAndTimeInput");
            storeStartDateAndTimeInput->write_as_json(handler);
          }
        if (flagHasEndDateAndTimeInput)
          {
            handler->start_pair("EndDateAndTimeInput");
            storeEndDateAndTimeInput->write_as_json(handler);
          }
        if (flagHasStartDateAndTimeInferred)
          {
            handler->start_pair("StartDateAndTimeInferred");
            handler->boolean_value(storeStartDateAndTimeInferred);
          }
        if (flagHasEndDateAndTimeInferred)
          {
            handler->start_pair("EndDateAndTimeInferred");
            handler->boolean_value(storeEndDateAndTimeInferred);
          }
        if (flagHasStartDateAndTimeFinal)
          {
            handler->start_pair("StartDateAndTimeFinal");
            storeStartDateAndTimeFinal->write_as_json(handler);
          }
        if (flagHasStartDatePrintedForm)
          {
            handler->start_pair("StartDatePrintedForm");
            handler->string_value(storeStartDatePrintedForm);
          }
        if (flagHasStartDateSpokenForm)
          {
            handler->start_pair("StartDateSpokenForm");
            handler->string_value(storeStartDateSpokenForm);
          }
        if (flagHasEndDateAndTimeFinal)
          {
            handler->start_pair("EndDateAndTimeFinal");
            storeEndDateAndTimeFinal->write_as_json(handler);
          }
        if (flagHasEndDatePrintedForm)
          {
            handler->start_pair("EndDatePrintedForm");
            handler->string_value(storeEndDatePrintedForm);
          }
        if (flagHasEndDateSpokenForm)
          {
            handler->start_pair("EndDateSpokenForm");
            handler->string_value(storeEndDateSpokenForm);
          }
        if (flagHasDurationInDaysInput)
          {
            handler->start_pair("DurationInDaysInput");
            handler->number_value(storeDurationInDaysInput.get_o_integer());
          }
        if (flagHasDurationInDaysFinal)
          {
            handler->start_pair("DurationInDaysFinal");
            handler->number_value(storeDurationInDaysFinal.get_o_integer());
          }
        if (flagHasSortCriteria)
          {
            handler->start_pair("SortCriteria");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeSortCriteria.size(); ++num1)
              {
                switch (storeSortCriteria[num1])
                  {
                    case SortCriteria_Distance:
                        handler->string_value("Distance");
                        break;
                    case SortCriteria_Price:
                        handler->string_value("Price");
                        break;
                    case SortCriteria_StarRating:
                        handler->string_value("StarRating");
                        break;
                    case SortCriteria_GuestRating:
                        handler->string_value("GuestRating");
                        break;
                    default:
                        assert(false);
                  }
              }
            handler->finish_array();
          }
        if (flagHasSortOrder)
          {
            handler->start_pair("SortOrder");
            handler->start_array();
            for (size_t num2 = 0; num2 < storeSortOrder.size(); ++num2)
              {
                switch (storeSortOrder[num2])
                  {
                    case SortOrder_Ascending:
                        handler->string_value("Ascending");
                        break;
                    case SortOrder_Descending:
                        handler->string_value("Descending");
                        break;
                    default:
                        assert(false);
                  }
              }
            handler->finish_array();
          }
        if (flagHasAvailableOnly)
          {
            handler->start_pair("AvailableOnly");
            handler->boolean_value(storeAvailableOnly);
          }
        if (flagHasExpensiveFlag)
          {
            handler->start_pair("ExpensiveFlag");
            handler->boolean_value(storeExpensiveFlag);
          }
        if (flagHasInexpensiveFlag)
          {
            handler->start_pair("InexpensiveFlag");
            handler->boolean_value(storeInexpensiveFlag);
          }
        if (flagHasSpecificHotelQuestion)
          {
            handler->start_pair("SpecificHotelQuestion");
            handler->boolean_value(storeSpecificHotelQuestion);
          }
        if (flagHasConversationMode)
          {
            handler->start_pair("ConversationMode");
            handler->boolean_value(storeConversationMode);
          }
        if (flagHasGuestRatingMin)
          {
            handler->start_pair("GuestRatingMin");
            if (textStoreGuestRatingMin != "")
                handler->number_value(textStoreGuestRatingMin.c_str());
            else if (((double)(long int)storeGuestRatingMin) == storeGuestRatingMin)
                handler->number_value((long int)storeGuestRatingMin);
            else
                handler->number_value(storeGuestRatingMin);
          }
        if (flagHasGuestRatingMax)
          {
            handler->start_pair("GuestRatingMax");
            if (textStoreGuestRatingMax != "")
                handler->number_value(textStoreGuestRatingMax.c_str());
            else if (((double)(long int)storeGuestRatingMax) == storeGuestRatingMax)
                handler->number_value((long int)storeGuestRatingMax);
            else
                handler->number_value(storeGuestRatingMax);
          }
        if (flagHasStarRatingMin)
          {
            handler->start_pair("StarRatingMin");
            if (textStoreStarRatingMin != "")
                handler->number_value(textStoreStarRatingMin.c_str());
            else if (((double)(long int)storeStarRatingMin) == storeStarRatingMin)
                handler->number_value((long int)storeStarRatingMin);
            else
                handler->number_value(storeStarRatingMin);
          }
        if (flagHasStarRatingMax)
          {
            handler->start_pair("StarRatingMax");
            if (textStoreStarRatingMax != "")
                handler->number_value(textStoreStarRatingMax.c_str());
            else if (((double)(long int)storeStarRatingMax) == storeStarRatingMax)
                handler->number_value((long int)storeStarRatingMax);
            else
                handler->number_value(storeStarRatingMax);
          }
        if (flagHasStarRatingsInclude)
          {
            handler->start_pair("StarRatingsInclude");
            handler->start_array();
            for (size_t num3 = 0; num3 < storeStarRatingsInclude.size(); ++num3)
              {
                if (((double)(long int)storeStarRatingsInclude[num3]) == storeStarRatingsInclude[num3])
                    handler->number_value((long int)storeStarRatingsInclude[num3]);
                else
                    handler->number_value(storeStarRatingsInclude[num3]);
              }
            handler->finish_array();
          }
        if (flagHasStarRatingsExclude)
          {
            handler->start_pair("StarRatingsExclude");
            handler->start_array();
            for (size_t num4 = 0; num4 < storeStarRatingsExclude.size(); ++num4)
              {
                if (((double)(long int)storeStarRatingsExclude[num4]) == storeStarRatingsExclude[num4])
                    handler->number_value((long int)storeStarRatingsExclude[num4]);
                else
                    handler->number_value(storeStarRatingsExclude[num4]);
              }
            handler->finish_array();
          }
        if (flagHasRoomCount)
          {
            handler->start_pair("RoomCount");
            handler->number_value(storeRoomCount);
          }
        if (flagHasAdultCount)
          {
            handler->start_pair("AdultCount");
            handler->start_array();
            for (size_t num5 = 0; num5 < storeAdultCount.size(); ++num5)
              {
                handler->number_value(storeAdultCount[num5]);
              }
            handler->finish_array();
          }
        if (flagHasChildrenCount)
          {
            handler->start_pair("ChildrenCount");
            handler->start_array();
            for (size_t num6 = 0; num6 < storeChildrenCount.size(); ++num6)
              {
                handler->number_value(storeChildrenCount[num6]);
              }
            handler->finish_array();
          }
        if (flagHasGuestCountIsPerRoom)
          {
            handler->start_pair("GuestCountIsPerRoom");
            handler->boolean_value(storeGuestCountIsPerRoom);
          }
        if (flagHasFranchiseNamesInclude)
          {
            handler->start_pair("FranchiseNamesInclude");
            handler->start_array();
            for (size_t num7 = 0; num7 < storeFranchiseNamesInclude.size(); ++num7)
              {
                handler->string_value(storeFranchiseNamesInclude[num7]);
              }
            handler->finish_array();
          }
        if (flagHasFranchiseNamesExclude)
          {
            handler->start_pair("FranchiseNamesExclude");
            handler->start_array();
            for (size_t num8 = 0; num8 < storeFranchiseNamesExclude.size(); ++num8)
              {
                handler->string_value(storeFranchiseNamesExclude[num8]);
              }
            handler->finish_array();
          }
        if (flagHasHotelsInclude)
          {
            handler->start_pair("HotelsInclude");
            handler->start_array();
            for (size_t num9 = 0; num9 < storeHotelsInclude.size(); ++num9)
              {
                handler->number_value(storeHotelsInclude[num9].get_o_integer());
              }
            handler->finish_array();
          }
        if (flagHasHotelsExclude)
          {
            handler->start_pair("HotelsExclude");
            handler->start_array();
            for (size_t num10 = 0; num10 < storeHotelsExclude.size(); ++num10)
              {
                handler->number_value(storeHotelsExclude[num10].get_o_integer());
              }
            handler->finish_array();
          }
        if (flagHasAccommodationTypesInclude)
          {
            handler->start_pair("AccommodationTypesInclude");
            handler->start_array();
            for (size_t num11 = 0; num11 < storeAccommodationTypesInclude.size(); ++num11)
              {
                switch (storeAccommodationTypesInclude[num11])
                  {
                    case AccommodationTypesInclude_Motel:
                        handler->string_value("Motel");
                        break;
                    case AccommodationTypesInclude_Resort:
                        handler->string_value("Resort");
                        break;
                    case AccommodationTypesInclude_Bed_x20_And_x20_Breakfast:
                        handler->string_value("Bed And Breakfast");
                        break;
                    case AccommodationTypesInclude_Apartment_x20_Hotel:
                        handler->string_value("Apartment Hotel");
                        break;
                    default:
                        assert(false);
                  }
              }
            handler->finish_array();
          }
        if (flagHasAccommodationTypesExclude)
          {
            handler->start_pair("AccommodationTypesExclude");
            handler->start_array();
            for (size_t num12 = 0; num12 < storeAccommodationTypesExclude.size(); ++num12)
              {
                switch (storeAccommodationTypesExclude[num12])
                  {
                    case AccommodationTypesExclude_Motel:
                        handler->string_value("Motel");
                        break;
                    case AccommodationTypesExclude_Resort:
                        handler->string_value("Resort");
                        break;
                    case AccommodationTypesExclude_Bed_x20_And_x20_Breakfast:
                        handler->string_value("Bed And Breakfast");
                        break;
                    case AccommodationTypesExclude_Apartment_x20_Hotel:
                        handler->string_value("Apartment Hotel");
                        break;
                    default:
                        assert(false);
                  }
              }
            handler->finish_array();
          }
        if (flagHasAmenitiesInclude)
          {
            handler->start_pair("AmenitiesInclude");
            handler->start_array();
            for (size_t num13 = 0; num13 < storeAmenitiesInclude.size(); ++num13)
              {
                storeAmenitiesInclude[num13]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasAmenitiesExclude)
          {
            handler->start_pair("AmenitiesExclude");
            handler->start_array();
            for (size_t num14 = 0; num14 < storeAmenitiesExclude.size(); ++num14)
              {
                storeAmenitiesExclude[num14]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasQueryType()))
          {
            return "When parsing the object for %what%, the \"QueryType\" field was missing.";
          }
        return NULL;
      }

    static HotelFilterSpecJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HotelFilterSpecJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HotelFilterSpecJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HotelFilterSpecJSON>, HotelFilterSpecJSON *, bool> generator("Type HotelFilterSpec", ignore_extras);
            parse_json_value(text, "Text for HotelFilterSpecJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HotelFilterSpecJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HotelFilterSpecJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HotelFilterSpecJSON>, HotelFilterSpecJSON *, bool> generator("Type HotelFilterSpec", ignore_extras);
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
    class FieldGeneratorQueryType : public JSONStringGenerator
          {
          protected:
            FieldGeneratorQueryType(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorQueryType(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToQueryType(result));
              }
            virtual void handle_result(TypeQueryType result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorQueryType, TypeQueryType, TypeQueryType > fieldGeneratorQueryType;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 30>, uint8_t, uint8_t > fieldGeneratorResultCount;
        JSONHoldingGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorMapLocation;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorRadius;
    class FieldGeneratorRadiusUnit : public JSONStringGenerator
          {
          protected:
            FieldGeneratorRadiusUnit(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorRadiusUnit(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToRadiusUnit(result));
              }
            virtual void handle_result(TypeRadiusUnit result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorRadiusUnit, TypeRadiusUnit, TypeRadiusUnit > fieldGeneratorRadiusUnit;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorRadiusInferred;
        JSONHoldingGenerator<MoneyJSON::Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool > fieldGeneratorAveragePrice;
        JSONHoldingGenerator<MoneyJSON::Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool > fieldGeneratorMinimumPrice;
        JSONHoldingGenerator<MoneyJSON::Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool > fieldGeneratorMaximumPrice;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorPriceIsTotal;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorStartDateAndTimeInput;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorEndDateAndTimeInput;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorStartDateAndTimeInferred;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorEndDateAndTimeInferred;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorStartDateAndTimeFinal;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorStartDatePrintedForm;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorStartDateSpokenForm;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorEndDateAndTimeFinal;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorEndDatePrintedForm;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorEndDateSpokenForm;
        static char lowerBoundDurationInDaysInput[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundDurationInDaysInput>, OInteger, o_integer > fieldGeneratorDurationInDaysInput;
        static char lowerBoundDurationInDaysFinal[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundDurationInDaysFinal>, OInteger, o_integer > fieldGeneratorDurationInDaysFinal;
    class FieldGeneratorSortCriteria : public JSONStringGenerator
          {
          protected:
            FieldGeneratorSortCriteria(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorSortCriteria(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToSortCriteria(result));
              }
            virtual void handle_result(TypeSortCriteria result) = 0;
          };
        JSONHoldingArrayGenerator<FieldGeneratorSortCriteria, TypeSortCriteria, TypeSortCriteria > fieldGeneratorSortCriteria;
    class FieldGeneratorSortOrder : public JSONStringGenerator
          {
          protected:
            FieldGeneratorSortOrder(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorSortOrder(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToSortOrder(result));
              }
            virtual void handle_result(TypeSortOrder result) = 0;
          };
        JSONHoldingArrayGenerator<FieldGeneratorSortOrder, TypeSortOrder, TypeSortOrder > fieldGeneratorSortOrder;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorAvailableOnly;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorExpensiveFlag;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorInexpensiveFlag;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorSpecificHotelQuestion;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorConversationMode;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorGuestRatingMin;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorGuestRatingMax;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorStarRatingMin;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorStarRatingMax;
        JSONHoldingArrayGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorStarRatingsInclude;
        JSONHoldingArrayGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorStarRatingsExclude;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 8>, uint8_t, uint8_t > fieldGeneratorRoomCount;
        JSONHoldingArrayGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 14>, uint8_t, uint8_t > fieldGeneratorAdultCount;
        JSONHoldingArrayGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 14>, uint8_t, uint8_t > fieldGeneratorChildrenCount;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorGuestCountIsPerRoom;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorFranchiseNamesInclude;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorFranchiseNamesExclude;
        static char lowerBoundHotelsInclude[];
        JSONHoldingArrayGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundHotelsInclude>, OInteger, o_integer > fieldGeneratorHotelsInclude;
        static char lowerBoundHotelsExclude[];
        JSONHoldingArrayGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundHotelsExclude>, OInteger, o_integer > fieldGeneratorHotelsExclude;
    class FieldGeneratorAccommodationTypesInclude : public JSONStringGenerator
          {
          protected:
            FieldGeneratorAccommodationTypesInclude(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorAccommodationTypesInclude(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToAccommodationTypesInclude(result));
              }
            virtual void handle_result(TypeAccommodationTypesInclude result) = 0;
          };
        JSONHoldingArrayGenerator<FieldGeneratorAccommodationTypesInclude, TypeAccommodationTypesInclude, TypeAccommodationTypesInclude > fieldGeneratorAccommodationTypesInclude;
    class FieldGeneratorAccommodationTypesExclude : public JSONStringGenerator
          {
          protected:
            FieldGeneratorAccommodationTypesExclude(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorAccommodationTypesExclude(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToAccommodationTypesExclude(result));
              }
            virtual void handle_result(TypeAccommodationTypesExclude result) = 0;
          };
        JSONHoldingArrayGenerator<FieldGeneratorAccommodationTypesExclude, TypeAccommodationTypesExclude, TypeAccommodationTypesExclude > fieldGeneratorAccommodationTypesExclude;
        JSONHoldingArrayGenerator<TypeAmenitiesIncludeJSON::Generator, RCHandle<TypeAmenitiesIncludeJSON>, TypeAmenitiesIncludeJSON *, bool > fieldGeneratorAmenitiesInclude;
        JSONHoldingArrayGenerator<TypeAmenitiesExcludeJSON::Generator, RCHandle<TypeAmenitiesExcludeJSON>, TypeAmenitiesExcludeJSON *, bool > fieldGeneratorAmenitiesExclude;
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
            HotelFilterSpecJSON *result = new HotelFilterSpecJSON();
            assert(result != NULL);
            RCHandle<HotelFilterSpecJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHotelFilterSpecAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(HotelFilterSpecJSON *result)
          {
            if (fieldGeneratorQueryType.have_value)
              {
                result->setQueryType(fieldGeneratorQueryType.value);
                fieldGeneratorQueryType.have_value = false;
              }
            else if (!(result->hasQueryType()))
              {
                error("When parsing the object for %what%, the \"QueryType\" field was missing.");
              }
            if (fieldGeneratorResultCount.have_value)
              {
                result->setResultCount(fieldGeneratorResultCount.value);
                fieldGeneratorResultCount.have_value = false;
              }
            if (fieldGeneratorMapLocation.have_value)
              {
                result->setMapLocation(fieldGeneratorMapLocation.value.referenced());
                fieldGeneratorMapLocation.have_value = false;
              }
            if (fieldGeneratorRadius.have_value)
              {
                result->setRadiusText(fieldGeneratorRadius.value);
                fieldGeneratorRadius.have_value = false;
              }
            if (fieldGeneratorRadiusUnit.have_value)
              {
                result->setRadiusUnit(fieldGeneratorRadiusUnit.value);
                fieldGeneratorRadiusUnit.have_value = false;
              }
            if (fieldGeneratorRadiusInferred.have_value)
              {
                result->setRadiusInferred(fieldGeneratorRadiusInferred.value);
                fieldGeneratorRadiusInferred.have_value = false;
              }
            if (fieldGeneratorAveragePrice.have_value)
              {
                result->setAveragePrice(fieldGeneratorAveragePrice.value.referenced());
                fieldGeneratorAveragePrice.have_value = false;
              }
            if (fieldGeneratorMinimumPrice.have_value)
              {
                result->setMinimumPrice(fieldGeneratorMinimumPrice.value.referenced());
                fieldGeneratorMinimumPrice.have_value = false;
              }
            if (fieldGeneratorMaximumPrice.have_value)
              {
                result->setMaximumPrice(fieldGeneratorMaximumPrice.value.referenced());
                fieldGeneratorMaximumPrice.have_value = false;
              }
            if (fieldGeneratorPriceIsTotal.have_value)
              {
                result->setPriceIsTotal(fieldGeneratorPriceIsTotal.value);
                fieldGeneratorPriceIsTotal.have_value = false;
              }
            if (fieldGeneratorStartDateAndTimeInput.have_value)
              {
                result->setStartDateAndTimeInput(fieldGeneratorStartDateAndTimeInput.value.referenced());
                fieldGeneratorStartDateAndTimeInput.have_value = false;
              }
            if (fieldGeneratorEndDateAndTimeInput.have_value)
              {
                result->setEndDateAndTimeInput(fieldGeneratorEndDateAndTimeInput.value.referenced());
                fieldGeneratorEndDateAndTimeInput.have_value = false;
              }
            if (fieldGeneratorStartDateAndTimeInferred.have_value)
              {
                result->setStartDateAndTimeInferred(fieldGeneratorStartDateAndTimeInferred.value);
                fieldGeneratorStartDateAndTimeInferred.have_value = false;
              }
            if (fieldGeneratorEndDateAndTimeInferred.have_value)
              {
                result->setEndDateAndTimeInferred(fieldGeneratorEndDateAndTimeInferred.value);
                fieldGeneratorEndDateAndTimeInferred.have_value = false;
              }
            if (fieldGeneratorStartDateAndTimeFinal.have_value)
              {
                result->setStartDateAndTimeFinal(fieldGeneratorStartDateAndTimeFinal.value.referenced());
                fieldGeneratorStartDateAndTimeFinal.have_value = false;
              }
            if (fieldGeneratorStartDatePrintedForm.have_value)
              {
                result->setStartDatePrintedForm(fieldGeneratorStartDatePrintedForm.value);
                fieldGeneratorStartDatePrintedForm.have_value = false;
              }
            if (fieldGeneratorStartDateSpokenForm.have_value)
              {
                result->setStartDateSpokenForm(fieldGeneratorStartDateSpokenForm.value);
                fieldGeneratorStartDateSpokenForm.have_value = false;
              }
            if (fieldGeneratorEndDateAndTimeFinal.have_value)
              {
                result->setEndDateAndTimeFinal(fieldGeneratorEndDateAndTimeFinal.value.referenced());
                fieldGeneratorEndDateAndTimeFinal.have_value = false;
              }
            if (fieldGeneratorEndDatePrintedForm.have_value)
              {
                result->setEndDatePrintedForm(fieldGeneratorEndDatePrintedForm.value);
                fieldGeneratorEndDatePrintedForm.have_value = false;
              }
            if (fieldGeneratorEndDateSpokenForm.have_value)
              {
                result->setEndDateSpokenForm(fieldGeneratorEndDateSpokenForm.value);
                fieldGeneratorEndDateSpokenForm.have_value = false;
              }
            if (fieldGeneratorDurationInDaysInput.have_value)
              {
                result->setDurationInDaysInput(fieldGeneratorDurationInDaysInput.value);
                fieldGeneratorDurationInDaysInput.have_value = false;
              }
            if (fieldGeneratorDurationInDaysFinal.have_value)
              {
                result->setDurationInDaysFinal(fieldGeneratorDurationInDaysFinal.value);
                fieldGeneratorDurationInDaysFinal.have_value = false;
              }
            if (fieldGeneratorSortCriteria.have_value)
              {
                result->initSortCriteria();
                size_t count = fieldGeneratorSortCriteria.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendSortCriteria(fieldGeneratorSortCriteria.value[num]);
                  }
                fieldGeneratorSortCriteria.value.clear();
                fieldGeneratorSortCriteria.have_value = false;
              }
            if (fieldGeneratorSortOrder.have_value)
              {
                result->initSortOrder();
                size_t count = fieldGeneratorSortOrder.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendSortOrder(fieldGeneratorSortOrder.value[num]);
                  }
                fieldGeneratorSortOrder.value.clear();
                fieldGeneratorSortOrder.have_value = false;
              }
            if (fieldGeneratorAvailableOnly.have_value)
              {
                result->setAvailableOnly(fieldGeneratorAvailableOnly.value);
                fieldGeneratorAvailableOnly.have_value = false;
              }
            if (fieldGeneratorExpensiveFlag.have_value)
              {
                result->setExpensiveFlag(fieldGeneratorExpensiveFlag.value);
                fieldGeneratorExpensiveFlag.have_value = false;
              }
            if (fieldGeneratorInexpensiveFlag.have_value)
              {
                result->setInexpensiveFlag(fieldGeneratorInexpensiveFlag.value);
                fieldGeneratorInexpensiveFlag.have_value = false;
              }
            if (fieldGeneratorSpecificHotelQuestion.have_value)
              {
                result->setSpecificHotelQuestion(fieldGeneratorSpecificHotelQuestion.value);
                fieldGeneratorSpecificHotelQuestion.have_value = false;
              }
            if (fieldGeneratorConversationMode.have_value)
              {
                result->setConversationMode(fieldGeneratorConversationMode.value);
                fieldGeneratorConversationMode.have_value = false;
              }
            if (fieldGeneratorGuestRatingMin.have_value)
              {
                result->setGuestRatingMinText(fieldGeneratorGuestRatingMin.value);
                fieldGeneratorGuestRatingMin.have_value = false;
              }
            if (fieldGeneratorGuestRatingMax.have_value)
              {
                result->setGuestRatingMaxText(fieldGeneratorGuestRatingMax.value);
                fieldGeneratorGuestRatingMax.have_value = false;
              }
            if (fieldGeneratorStarRatingMin.have_value)
              {
                result->setStarRatingMinText(fieldGeneratorStarRatingMin.value);
                fieldGeneratorStarRatingMin.have_value = false;
              }
            if (fieldGeneratorStarRatingMax.have_value)
              {
                result->setStarRatingMaxText(fieldGeneratorStarRatingMax.value);
                fieldGeneratorStarRatingMax.have_value = false;
              }
            if (fieldGeneratorStarRatingsInclude.have_value)
              {
                result->initStarRatingsInclude();
                size_t count = fieldGeneratorStarRatingsInclude.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendStarRatingsInclude(atof(fieldGeneratorStarRatingsInclude.value[num].c_str()));
                  }
                fieldGeneratorStarRatingsInclude.value.clear();
                fieldGeneratorStarRatingsInclude.have_value = false;
              }
            if (fieldGeneratorStarRatingsExclude.have_value)
              {
                result->initStarRatingsExclude();
                size_t count = fieldGeneratorStarRatingsExclude.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendStarRatingsExclude(atof(fieldGeneratorStarRatingsExclude.value[num].c_str()));
                  }
                fieldGeneratorStarRatingsExclude.value.clear();
                fieldGeneratorStarRatingsExclude.have_value = false;
              }
            if (fieldGeneratorRoomCount.have_value)
              {
                result->setRoomCount(fieldGeneratorRoomCount.value);
                fieldGeneratorRoomCount.have_value = false;
              }
            if (fieldGeneratorAdultCount.have_value)
              {
                result->initAdultCount();
                size_t count = fieldGeneratorAdultCount.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAdultCount(fieldGeneratorAdultCount.value[num]);
                  }
                fieldGeneratorAdultCount.value.clear();
                fieldGeneratorAdultCount.have_value = false;
              }
            if (fieldGeneratorChildrenCount.have_value)
              {
                result->initChildrenCount();
                size_t count = fieldGeneratorChildrenCount.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendChildrenCount(fieldGeneratorChildrenCount.value[num]);
                  }
                fieldGeneratorChildrenCount.value.clear();
                fieldGeneratorChildrenCount.have_value = false;
              }
            if (fieldGeneratorGuestCountIsPerRoom.have_value)
              {
                result->setGuestCountIsPerRoom(fieldGeneratorGuestCountIsPerRoom.value);
                fieldGeneratorGuestCountIsPerRoom.have_value = false;
              }
            if (fieldGeneratorFranchiseNamesInclude.have_value)
              {
                result->initFranchiseNamesInclude();
                size_t count = fieldGeneratorFranchiseNamesInclude.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendFranchiseNamesInclude(fieldGeneratorFranchiseNamesInclude.value[num]);
                  }
                fieldGeneratorFranchiseNamesInclude.value.clear();
                fieldGeneratorFranchiseNamesInclude.have_value = false;
              }
            if (fieldGeneratorFranchiseNamesExclude.have_value)
              {
                result->initFranchiseNamesExclude();
                size_t count = fieldGeneratorFranchiseNamesExclude.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendFranchiseNamesExclude(fieldGeneratorFranchiseNamesExclude.value[num]);
                  }
                fieldGeneratorFranchiseNamesExclude.value.clear();
                fieldGeneratorFranchiseNamesExclude.have_value = false;
              }
            if (fieldGeneratorHotelsInclude.have_value)
              {
                result->initHotelsInclude();
                size_t count = fieldGeneratorHotelsInclude.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendHotelsInclude(fieldGeneratorHotelsInclude.value[num]);
                  }
                fieldGeneratorHotelsInclude.value.clear();
                fieldGeneratorHotelsInclude.have_value = false;
              }
            if (fieldGeneratorHotelsExclude.have_value)
              {
                result->initHotelsExclude();
                size_t count = fieldGeneratorHotelsExclude.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendHotelsExclude(fieldGeneratorHotelsExclude.value[num]);
                  }
                fieldGeneratorHotelsExclude.value.clear();
                fieldGeneratorHotelsExclude.have_value = false;
              }
            if (fieldGeneratorAccommodationTypesInclude.have_value)
              {
                result->initAccommodationTypesInclude();
                size_t count = fieldGeneratorAccommodationTypesInclude.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAccommodationTypesInclude(fieldGeneratorAccommodationTypesInclude.value[num]);
                  }
                fieldGeneratorAccommodationTypesInclude.value.clear();
                fieldGeneratorAccommodationTypesInclude.have_value = false;
              }
            if (fieldGeneratorAccommodationTypesExclude.have_value)
              {
                result->initAccommodationTypesExclude();
                size_t count = fieldGeneratorAccommodationTypesExclude.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAccommodationTypesExclude(fieldGeneratorAccommodationTypesExclude.value[num]);
                  }
                fieldGeneratorAccommodationTypesExclude.value.clear();
                fieldGeneratorAccommodationTypesExclude.have_value = false;
              }
            if (fieldGeneratorAmenitiesInclude.have_value)
              {
                result->initAmenitiesInclude();
                size_t count = fieldGeneratorAmenitiesInclude.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAmenitiesInclude(fieldGeneratorAmenitiesInclude.value[num].referenced());
                  }
                fieldGeneratorAmenitiesInclude.value.clear();
                fieldGeneratorAmenitiesInclude.have_value = false;
              }
            if (fieldGeneratorAmenitiesExclude.have_value)
              {
                result->initAmenitiesExclude();
                size_t count = fieldGeneratorAmenitiesExclude.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAmenitiesExclude(fieldGeneratorAmenitiesExclude.value[num].referenced());
                  }
                fieldGeneratorAmenitiesExclude.value.clear();
                fieldGeneratorAmenitiesExclude.have_value = false;
              }
          }
        virtual void handle_result(HotelFilterSpecJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'c':
                            if (strncmp(&(field_name[2]), "commodationTypes", 16) == 0)
                              {
                                switch ((unsigned char)(field_name[18]))
                                  {
                                    case 'E':
                                        if (strcmp(&(field_name[19]), "xclude") == 0)
                                            return &fieldGeneratorAccommodationTypesExclude;
                                        break;
                                    case 'I':
                                        if (strcmp(&(field_name[19]), "nclude") == 0)
                                            return &fieldGeneratorAccommodationTypesInclude;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'd':
                            if (strcmp(&(field_name[2]), "ultCount") == 0)
                                return &fieldGeneratorAdultCount;
                            break;
                        case 'm':
                            if (strncmp(&(field_name[2]), "enities", 7) == 0)
                              {
                                switch ((unsigned char)(field_name[9]))
                                  {
                                    case 'E':
                                        if (strcmp(&(field_name[10]), "xclude") == 0)
                                            return &fieldGeneratorAmenitiesExclude;
                                        break;
                                    case 'I':
                                        if (strcmp(&(field_name[10]), "nclude") == 0)
                                            return &fieldGeneratorAmenitiesInclude;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'v':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'a':
                                    if (strcmp(&(field_name[3]), "ilableOnly") == 0)
                                        return &fieldGeneratorAvailableOnly;
                                    break;
                                case 'e':
                                    if (strcmp(&(field_name[3]), "ragePrice") == 0)
                                        return &fieldGeneratorAveragePrice;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'C':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'h':
                            if (strcmp(&(field_name[2]), "ildrenCount") == 0)
                                return &fieldGeneratorChildrenCount;
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "nversationMode") == 0)
                                return &fieldGeneratorConversationMode;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'D':
                    if (strncmp(&(field_name[1]), "urationInDays", 13) == 0)
                      {
                        switch ((unsigned char)(field_name[14]))
                          {
                            case 'F':
                                if (strcmp(&(field_name[15]), "inal") == 0)
                                    return &fieldGeneratorDurationInDaysFinal;
                                break;
                            case 'I':
                                if (strcmp(&(field_name[15]), "nput") == 0)
                                    return &fieldGeneratorDurationInDaysInput;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'E':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'n':
                            if (strncmp(&(field_name[2]), "dDate", 5) == 0)
                              {
                                switch ((unsigned char)(field_name[7]))
                                  {
                                    case 'A':
                                        if (strncmp(&(field_name[8]), "ndTime", 6) == 0)
                                          {
                                            switch ((unsigned char)(field_name[14]))
                                              {
                                                case 'F':
                                                    if (strcmp(&(field_name[15]), "inal") == 0)
                                                        return &fieldGeneratorEndDateAndTimeFinal;
                                                    break;
                                                case 'I':
                                                    if (strncmp(&(field_name[15]), "n", 1) == 0)
                                                      {
                                                        switch ((unsigned char)(field_name[16]))
                                                          {
                                                            case 'f':
                                                                if (strcmp(&(field_name[17]), "erred") == 0)
                                                                    return &fieldGeneratorEndDateAndTimeInferred;
                                                                break;
                                                            case 'p':
                                                                if (strcmp(&(field_name[17]), "ut") == 0)
                                                                    return &fieldGeneratorEndDateAndTimeInput;
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'P':
                                        if (strcmp(&(field_name[8]), "rintedForm") == 0)
                                            return &fieldGeneratorEndDatePrintedForm;
                                        break;
                                    case 'S':
                                        if (strcmp(&(field_name[8]), "pokenForm") == 0)
                                            return &fieldGeneratorEndDateSpokenForm;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'x':
                            if (strcmp(&(field_name[2]), "pensiveFlag") == 0)
                                return &fieldGeneratorExpensiveFlag;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'F':
                    if (strncmp(&(field_name[1]), "ranchiseNames", 13) == 0)
                      {
                        switch ((unsigned char)(field_name[14]))
                          {
                            case 'E':
                                if (strcmp(&(field_name[15]), "xclude") == 0)
                                    return &fieldGeneratorFranchiseNamesExclude;
                                break;
                            case 'I':
                                if (strcmp(&(field_name[15]), "nclude") == 0)
                                    return &fieldGeneratorFranchiseNamesInclude;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'G':
                    if (strncmp(&(field_name[1]), "uest", 4) == 0)
                      {
                        switch ((unsigned char)(field_name[5]))
                          {
                            case 'C':
                                if (strcmp(&(field_name[6]), "ountIsPerRoom") == 0)
                                    return &fieldGeneratorGuestCountIsPerRoom;
                                break;
                            case 'R':
                                if (strncmp(&(field_name[6]), "atingM", 6) == 0)
                                  {
                                    switch ((unsigned char)(field_name[12]))
                                      {
                                        case 'a':
                                            if (strcmp(&(field_name[13]), "x") == 0)
                                                return &fieldGeneratorGuestRatingMax;
                                            break;
                                        case 'i':
                                            if (strcmp(&(field_name[13]), "n") == 0)
                                                return &fieldGeneratorGuestRatingMin;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'H':
                    if (strncmp(&(field_name[1]), "otels", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 'E':
                                if (strcmp(&(field_name[7]), "xclude") == 0)
                                    return &fieldGeneratorHotelsExclude;
                                break;
                            case 'I':
                                if (strcmp(&(field_name[7]), "nclude") == 0)
                                    return &fieldGeneratorHotelsInclude;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "nexpensiveFlag") == 0)
                        return &fieldGeneratorInexpensiveFlag;
                    break;
                case 'M':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'p':
                                    if (strcmp(&(field_name[3]), "Location") == 0)
                                        return &fieldGeneratorMapLocation;
                                    break;
                                case 'x':
                                    if (strcmp(&(field_name[3]), "imumPrice") == 0)
                                        return &fieldGeneratorMaximumPrice;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 'i':
                            if (strcmp(&(field_name[2]), "nimumPrice") == 0)
                                return &fieldGeneratorMinimumPrice;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "riceIsTotal") == 0)
                        return &fieldGeneratorPriceIsTotal;
                    break;
                case 'Q':
                    if (strcmp(&(field_name[1]), "ueryType") == 0)
                        return &fieldGeneratorQueryType;
                    break;
                case 'R':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strncmp(&(field_name[2]), "dius", 4) == 0)
                              {
                                switch ((unsigned char)(field_name[6]))
                                  {
                                    case 0:
                                        return &fieldGeneratorRadius;
                                    case 'I':
                                        if (strcmp(&(field_name[7]), "nferred") == 0)
                                            return &fieldGeneratorRadiusInferred;
                                        break;
                                    case 'U':
                                        if (strcmp(&(field_name[7]), "nit") == 0)
                                            return &fieldGeneratorRadiusUnit;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'e':
                            if (strcmp(&(field_name[2]), "sultCount") == 0)
                                return &fieldGeneratorResultCount;
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "omCount") == 0)
                                return &fieldGeneratorRoomCount;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'o':
                            if (strncmp(&(field_name[2]), "rt", 2) == 0)
                              {
                                switch ((unsigned char)(field_name[4]))
                                  {
                                    case 'C':
                                        if (strcmp(&(field_name[5]), "riteria") == 0)
                                            return &fieldGeneratorSortCriteria;
                                        break;
                                    case 'O':
                                        if (strcmp(&(field_name[5]), "rder") == 0)
                                            return &fieldGeneratorSortOrder;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'p':
                            if (strcmp(&(field_name[2]), "ecificHotelQuestion") == 0)
                                return &fieldGeneratorSpecificHotelQuestion;
                            break;
                        case 't':
                            if (strncmp(&(field_name[2]), "ar", 2) == 0)
                              {
                                switch ((unsigned char)(field_name[4]))
                                  {
                                    case 'R':
                                        if (strncmp(&(field_name[5]), "ating", 5) == 0)
                                          {
                                            switch ((unsigned char)(field_name[10]))
                                              {
                                                case 'M':
                                                    switch ((unsigned char)(field_name[11]))
                                                      {
                                                        case 'a':
                                                            if (strcmp(&(field_name[12]), "x") == 0)
                                                                return &fieldGeneratorStarRatingMax;
                                                            break;
                                                        case 'i':
                                                            if (strcmp(&(field_name[12]), "n") == 0)
                                                                return &fieldGeneratorStarRatingMin;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                case 's':
                                                    switch ((unsigned char)(field_name[11]))
                                                      {
                                                        case 'E':
                                                            if (strcmp(&(field_name[12]), "xclude") == 0)
                                                                return &fieldGeneratorStarRatingsExclude;
                                                            break;
                                                        case 'I':
                                                            if (strcmp(&(field_name[12]), "nclude") == 0)
                                                                return &fieldGeneratorStarRatingsInclude;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 't':
                                        if (strncmp(&(field_name[5]), "Date", 4) == 0)
                                          {
                                            switch ((unsigned char)(field_name[9]))
                                              {
                                                case 'A':
                                                    if (strncmp(&(field_name[10]), "ndTime", 6) == 0)
                                                      {
                                                        switch ((unsigned char)(field_name[16]))
                                                          {
                                                            case 'F':
                                                                if (strcmp(&(field_name[17]), "inal") == 0)
                                                                    return &fieldGeneratorStartDateAndTimeFinal;
                                                                break;
                                                            case 'I':
                                                                if (strncmp(&(field_name[17]), "n", 1) == 0)
                                                                  {
                                                                    switch ((unsigned char)(field_name[18]))
                                                                      {
                                                                        case 'f':
                                                                            if (strcmp(&(field_name[19]), "erred") == 0)
                                                                                return &fieldGeneratorStartDateAndTimeInferred;
                                                                            break;
                                                                        case 'p':
                                                                            if (strcmp(&(field_name[19]), "ut") == 0)
                                                                                return &fieldGeneratorStartDateAndTimeInput;
                                                                            break;
                                                                        default:
                                                                            break;
                                                                      }
                                                                  }
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                case 'P':
                                                    if (strcmp(&(field_name[10]), "rintedForm") == 0)
                                                        return &fieldGeneratorStartDatePrintedForm;
                                                    break;
                                                case 'S':
                                                    if (strcmp(&(field_name[10]), "pokenForm") == 0)
                                                        return &fieldGeneratorStartDateSpokenForm;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    default:
                                        break;
                                  }
                              }
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
        Generator(bool ignore_extras = false) : fieldGeneratorQueryType("field \"QueryType\" of the HotelFilterSpec class"), fieldGeneratorResultCount("field \"ResultCount\" of the HotelFilterSpec class"), fieldGeneratorMapLocation("field \"MapLocation\" of the HotelFilterSpec class", ignore_extras), fieldGeneratorRadius("field \"Radius\" of the HotelFilterSpec class"), fieldGeneratorRadiusUnit("field \"RadiusUnit\" of the HotelFilterSpec class"), fieldGeneratorRadiusInferred("field \"RadiusInferred\" of the HotelFilterSpec class"), fieldGeneratorAveragePrice("field \"AveragePrice\" of the HotelFilterSpec class", ignore_extras), fieldGeneratorMinimumPrice("field \"MinimumPrice\" of the HotelFilterSpec class", ignore_extras), fieldGeneratorMaximumPrice("field \"MaximumPrice\" of the HotelFilterSpec class", ignore_extras), fieldGeneratorPriceIsTotal("field \"PriceIsTotal\" of the HotelFilterSpec class"), fieldGeneratorStartDateAndTimeInput("field \"StartDateAndTimeInput\" of the HotelFilterSpec class", ignore_extras), fieldGeneratorEndDateAndTimeInput("field \"EndDateAndTimeInput\" of the HotelFilterSpec class", ignore_extras), fieldGeneratorStartDateAndTimeInferred("field \"StartDateAndTimeInferred\" of the HotelFilterSpec class"), fieldGeneratorEndDateAndTimeInferred("field \"EndDateAndTimeInferred\" of the HotelFilterSpec class"), fieldGeneratorStartDateAndTimeFinal("field \"StartDateAndTimeFinal\" of the HotelFilterSpec class", ignore_extras), fieldGeneratorStartDatePrintedForm("field \"StartDatePrintedForm\" of the HotelFilterSpec class"), fieldGeneratorStartDateSpokenForm("field \"StartDateSpokenForm\" of the HotelFilterSpec class"), fieldGeneratorEndDateAndTimeFinal("field \"EndDateAndTimeFinal\" of the HotelFilterSpec class", ignore_extras), fieldGeneratorEndDatePrintedForm("field \"EndDatePrintedForm\" of the HotelFilterSpec class"), fieldGeneratorEndDateSpokenForm("field \"EndDateSpokenForm\" of the HotelFilterSpec class"), fieldGeneratorDurationInDaysInput("field \"DurationInDaysInput\" of the HotelFilterSpec class"), fieldGeneratorDurationInDaysFinal("field \"DurationInDaysFinal\" of the HotelFilterSpec class"), fieldGeneratorSortCriteria("field \"SortCriteria\" of the HotelFilterSpec class"), fieldGeneratorSortOrder("field \"SortOrder\" of the HotelFilterSpec class"), fieldGeneratorAvailableOnly("field \"AvailableOnly\" of the HotelFilterSpec class"), fieldGeneratorExpensiveFlag("field \"ExpensiveFlag\" of the HotelFilterSpec class"), fieldGeneratorInexpensiveFlag("field \"InexpensiveFlag\" of the HotelFilterSpec class"), fieldGeneratorSpecificHotelQuestion("field \"SpecificHotelQuestion\" of the HotelFilterSpec class"), fieldGeneratorConversationMode("field \"ConversationMode\" of the HotelFilterSpec class"), fieldGeneratorGuestRatingMin("field \"GuestRatingMin\" of the HotelFilterSpec class"), fieldGeneratorGuestRatingMax("field \"GuestRatingMax\" of the HotelFilterSpec class"), fieldGeneratorStarRatingMin("field \"StarRatingMin\" of the HotelFilterSpec class"), fieldGeneratorStarRatingMax("field \"StarRatingMax\" of the HotelFilterSpec class"), fieldGeneratorStarRatingsInclude("field \"StarRatingsInclude\" of the HotelFilterSpec class"), fieldGeneratorStarRatingsExclude("field \"StarRatingsExclude\" of the HotelFilterSpec class"), fieldGeneratorRoomCount("field \"RoomCount\" of the HotelFilterSpec class"), fieldGeneratorAdultCount("field \"AdultCount\" of the HotelFilterSpec class"), fieldGeneratorChildrenCount("field \"ChildrenCount\" of the HotelFilterSpec class"), fieldGeneratorGuestCountIsPerRoom("field \"GuestCountIsPerRoom\" of the HotelFilterSpec class"), fieldGeneratorFranchiseNamesInclude("field \"FranchiseNamesInclude\" of the HotelFilterSpec class"), fieldGeneratorFranchiseNamesExclude("field \"FranchiseNamesExclude\" of the HotelFilterSpec class"), fieldGeneratorHotelsInclude("field \"HotelsInclude\" of the HotelFilterSpec class"), fieldGeneratorHotelsExclude("field \"HotelsExclude\" of the HotelFilterSpec class"), fieldGeneratorAccommodationTypesInclude("field \"AccommodationTypesInclude\" of the HotelFilterSpec class"), fieldGeneratorAccommodationTypesExclude("field \"AccommodationTypesExclude\" of the HotelFilterSpec class"), fieldGeneratorAmenitiesInclude("field \"AmenitiesInclude\" of the HotelFilterSpec class", ignore_extras), fieldGeneratorAmenitiesExclude("field \"AmenitiesExclude\" of the HotelFilterSpec class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HotelFilterSpec class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorQueryType.reset();
            fieldGeneratorResultCount.reset();
            fieldGeneratorMapLocation.reset();
            fieldGeneratorRadius.reset();
            fieldGeneratorRadiusUnit.reset();
            fieldGeneratorRadiusInferred.reset();
            fieldGeneratorAveragePrice.reset();
            fieldGeneratorMinimumPrice.reset();
            fieldGeneratorMaximumPrice.reset();
            fieldGeneratorPriceIsTotal.reset();
            fieldGeneratorStartDateAndTimeInput.reset();
            fieldGeneratorEndDateAndTimeInput.reset();
            fieldGeneratorStartDateAndTimeInferred.reset();
            fieldGeneratorEndDateAndTimeInferred.reset();
            fieldGeneratorStartDateAndTimeFinal.reset();
            fieldGeneratorStartDatePrintedForm.reset();
            fieldGeneratorStartDateSpokenForm.reset();
            fieldGeneratorEndDateAndTimeFinal.reset();
            fieldGeneratorEndDatePrintedForm.reset();
            fieldGeneratorEndDateSpokenForm.reset();
            fieldGeneratorDurationInDaysInput.reset();
            fieldGeneratorDurationInDaysFinal.reset();
            fieldGeneratorSortCriteria.reset();
            fieldGeneratorSortOrder.reset();
            fieldGeneratorAvailableOnly.reset();
            fieldGeneratorExpensiveFlag.reset();
            fieldGeneratorInexpensiveFlag.reset();
            fieldGeneratorSpecificHotelQuestion.reset();
            fieldGeneratorConversationMode.reset();
            fieldGeneratorGuestRatingMin.reset();
            fieldGeneratorGuestRatingMax.reset();
            fieldGeneratorStarRatingMin.reset();
            fieldGeneratorStarRatingMax.reset();
            fieldGeneratorStarRatingsInclude.reset();
            fieldGeneratorStarRatingsExclude.reset();
            fieldGeneratorRoomCount.reset();
            fieldGeneratorAdultCount.reset();
            fieldGeneratorChildrenCount.reset();
            fieldGeneratorGuestCountIsPerRoom.reset();
            fieldGeneratorFranchiseNamesInclude.reset();
            fieldGeneratorFranchiseNamesExclude.reset();
            fieldGeneratorHotelsInclude.reset();
            fieldGeneratorHotelsExclude.reset();
            fieldGeneratorAccommodationTypesInclude.reset();
            fieldGeneratorAccommodationTypesExclude.reset();
            fieldGeneratorAmenitiesInclude.reset();
            fieldGeneratorAmenitiesExclude.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HOTELFILTERSPECJSON_H */
