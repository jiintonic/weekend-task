/* file "CoreUnitsPropertyJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CoreUnitsPropertyJSON.h"

#include "CoreUnitsPropertyJSON.h"


CoreUnitsPropertyJSON::TypeTag::TypeTag(void)
  {
  }

CoreUnitsPropertyJSON::TypeTag::TypeTag(const TypeTag &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

CoreUnitsPropertyJSON::TypeTag::TypeTag(TypeTagKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool CoreUnitsPropertyJSON::TypeTag::operator==(const TypeTag &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool CoreUnitsPropertyJSON::TypeTag::operator!=(const TypeTag &other) const
  {
    return !(operator==(other));
  }

bool CoreUnitsPropertyJSON::TypeTag::operator<(const TypeTag &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool CoreUnitsPropertyJSON::TypeTag::operator>(const TypeTag &other) const
  {
    return other.operator<(*this);
  }

bool CoreUnitsPropertyJSON::TypeTag::operator>=(const TypeTag &other) const
  {
    return !(operator<(other));
  }

bool CoreUnitsPropertyJSON::TypeTag::operator<=(const TypeTag &other) const
  {
    return !(other.operator<(*this));
  }

CoreUnitsPropertyJSON::TypeTagKnownValues CoreUnitsPropertyJSON::stringToTag(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'a':
            switch ((unsigned char)(chars[1]))
              {
                case 'b':
                    if (strcmp(&(chars[2]), "sorbed_dose") == 0)
                        return Tag_absorbed_dose;
                    break;
                case 'n':
                    if (strcmp(&(chars[2]), "gle") == 0)
                        return Tag_angle;
                    break;
                case 'r':
                    if (strcmp(&(chars[2]), "ea") == 0)
                        return Tag_area;
                    break;
                default:
                    break;
              }
            break;
        case 'c':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'p':
                            if (strcmp(&(chars[3]), "acitance") == 0)
                                return Tag_capacitance;
                            break;
                        case 't':
                            if (strcmp(&(chars[3]), "alytic_activity") == 0)
                                return Tag_catalytic_activity;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'o':
                    if (strcmp(&(chars[2]), "unt") == 0)
                        return Tag_count;
                    break;
                case 'u':
                    if (strcmp(&(chars[2]), "rrent") == 0)
                        return Tag_current;
                    break;
                default:
                    break;
              }
            break;
        case 'd':
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    if (strcmp(&(chars[2]), "pth") == 0)
                        return Tag_depth;
                    break;
                case 'i':
                    if (strcmp(&(chars[2]), "stance") == 0)
                        return Tag_distance;
                    break;
                case 'u':
                    if (strcmp(&(chars[2]), "ration") == 0)
                        return Tag_duration;
                    break;
                default:
                    break;
              }
            break;
        case 'e':
            switch ((unsigned char)(chars[1]))
              {
                case 'l':
                    if (strncmp(&(chars[2]), "ectric_", 7) == 0)
                      {
                        switch ((unsigned char)(chars[9]))
                          {
                            case 'c':
                                switch ((unsigned char)(chars[10]))
                                  {
                                    case 'h':
                                        if (strcmp(&(chars[11]), "arge") == 0)
                                            return Tag_electric_charge;
                                        break;
                                    case 'o':
                                        if (strcmp(&(chars[11]), "nductance") == 0)
                                            return Tag_electric_conductance;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'p':
                                if (strcmp(&(chars[10]), "otential_difference") == 0)
                                    return Tag_electric_potential_difference;
                                break;
                            case 'r':
                                if (strcmp(&(chars[10]), "esistance") == 0)
                                    return Tag_electric_resistance;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'n':
                    if (strcmp(&(chars[2]), "ergy") == 0)
                        return Tag_energy;
                    break;
                default:
                    break;
              }
            break;
        case 'f':
            switch ((unsigned char)(chars[1]))
              {
                case 'o':
                    if (strcmp(&(chars[2]), "rce") == 0)
                        return Tag_force;
                    break;
                case 'r':
                    if (strcmp(&(chars[2]), "equency") == 0)
                        return Tag_frequency;
                    break;
                default:
                    break;
              }
            break;
        case 'h':
            if (strcmp(&(chars[1]), "eight") == 0)
                return Tag_height;
            break;
        case 'i':
            switch ((unsigned char)(chars[1]))
              {
                case 'l':
                    if (strcmp(&(chars[2]), "luminance") == 0)
                        return Tag_illuminance;
                    break;
                case 'n':
                    if (strcmp(&(chars[2]), "ductance") == 0)
                        return Tag_inductance;
                    break;
                default:
                    break;
              }
            break;
        case 'l':
            if (strncmp(&(chars[1]), "umino", 5) == 0)
              {
                switch ((unsigned char)(chars[6]))
                  {
                    case 's':
                        if (strcmp(&(chars[7]), "ity") == 0)
                            return Tag_luminosity;
                        break;
                    case 'u':
                        if (strcmp(&(chars[7]), "s_flux") == 0)
                            return Tag_luminous_flux;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'm':
            if (strncmp(&(chars[1]), "a", 1) == 0)
              {
                switch ((unsigned char)(chars[2]))
                  {
                    case 'g':
                        if (strncmp(&(chars[3]), "netic_flux", 10) == 0)
                          {
                            switch ((unsigned char)(chars[13]))
                              {
                                case 0:
                                    return Tag_magnetic_flux;
                                case '_':
                                    if (strcmp(&(chars[14]), "density") == 0)
                                        return Tag_magnetic_flux_density;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 's':
                        if (strcmp(&(chars[3]), "s") == 0)
                            return Tag_mass;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'o':
            if (strcmp(&(chars[1]), "rientation") == 0)
                return Tag_orientation;
            break;
        case 'p':
            switch ((unsigned char)(chars[1]))
              {
                case 'o':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 's':
                            if (strcmp(&(chars[3]), "ition") == 0)
                                return Tag_position;
                            break;
                        case 'w':
                            if (strcmp(&(chars[3]), "er") == 0)
                                return Tag_power;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'r':
                    if (strcmp(&(chars[2]), "essure") == 0)
                        return Tag_pressure;
                    break;
                default:
                    break;
              }
            break;
        case 's':
            if (strcmp(&(chars[1]), "olid_angle") == 0)
                return Tag_solid_angle;
            break;
        case 't':
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    if (strcmp(&(chars[2]), "mperature") == 0)
                        return Tag_temperature;
                    break;
                case 'i':
                    if (strcmp(&(chars[2]), "me") == 0)
                        return Tag_time;
                    break;
                default:
                    break;
              }
            break;
        case 'v':
            if (strcmp(&(chars[1]), "olume") == 0)
                return Tag_volume;
            break;
        case 'w':
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    if (strcmp(&(chars[2]), "ight") == 0)
                        return Tag_weight;
                    break;
                case 'i':
                    if (strcmp(&(chars[2]), "dth") == 0)
                        return Tag_width;
                    break;
                default:
                    break;
              }
            break;
        default:
            break;
      }
    return Tag__none;
  }

const char *CoreUnitsPropertyJSON::stringFromTag(TypeTagKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Tag_distance:
            return "distance";
        case Tag_position:
            return "position";
        case Tag_area:
            return "area";
        case Tag_volume:
            return "volume";
        case Tag_duration:
            return "duration";
        case Tag_time:
            return "time";
        case Tag_angle:
            return "angle";
        case Tag_solid_angle:
            return "solid_angle";
        case Tag_orientation:
            return "orientation";
        case Tag_mass:
            return "mass";
        case Tag_weight:
            return "weight";
        case Tag_energy:
            return "energy";
        case Tag_power:
            return "power";
        case Tag_electric_charge:
            return "electric_charge";
        case Tag_electric_potential_difference:
            return "electric_potential_difference";
        case Tag_capacitance:
            return "capacitance";
        case Tag_electric_resistance:
            return "electric_resistance";
        case Tag_electric_conductance:
            return "electric_conductance";
        case Tag_inductance:
            return "inductance";
        case Tag_magnetic_flux:
            return "magnetic_flux";
        case Tag_magnetic_flux_density:
            return "magnetic_flux_density";
        case Tag_current:
            return "current";
        case Tag_temperature:
            return "temperature";
        case Tag_count:
            return "count";
        case Tag_luminosity:
            return "luminosity";
        case Tag_luminous_flux:
            return "luminous_flux";
        case Tag_illuminance:
            return "illuminance";
        case Tag_frequency:
            return "frequency";
        case Tag_force:
            return "force";
        case Tag_pressure:
            return "pressure";
        case Tag_absorbed_dose:
            return "absorbed_dose";
        case Tag_catalytic_activity:
            return "catalytic_activity";
        case Tag_width:
            return "width";
        case Tag_height:
            return "height";
        case Tag_depth:
            return "depth";
        default:
            assert(false);
            return NULL;
      }
  }

CoreUnitsPropertyJSON::CoreUnitsPropertyJSON(const CoreUnitsPropertyJSON &)
  {
    assert(false);
  }

CoreUnitsPropertyJSON &CoreUnitsPropertyJSON::operator=(const CoreUnitsPropertyJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *CoreUnitsPropertyJSON::extraTagToJSON(void) const
  {
    JSONStringValue *generated_string_Tag;
    if (!(storeTag.in_known_list))
      {
    generated_string_Tag = new JSONStringValue(storeTag.string_value.c_str());
      }
    else
      {
    switch (storeTag.list_value)
      {
        case Tag_distance:
            generated_string_Tag = new JSONStringValue("distance");
            break;
        case Tag_position:
            generated_string_Tag = new JSONStringValue("position");
            break;
        case Tag_area:
            generated_string_Tag = new JSONStringValue("area");
            break;
        case Tag_volume:
            generated_string_Tag = new JSONStringValue("volume");
            break;
        case Tag_duration:
            generated_string_Tag = new JSONStringValue("duration");
            break;
        case Tag_time:
            generated_string_Tag = new JSONStringValue("time");
            break;
        case Tag_angle:
            generated_string_Tag = new JSONStringValue("angle");
            break;
        case Tag_solid_angle:
            generated_string_Tag = new JSONStringValue("solid_angle");
            break;
        case Tag_orientation:
            generated_string_Tag = new JSONStringValue("orientation");
            break;
        case Tag_mass:
            generated_string_Tag = new JSONStringValue("mass");
            break;
        case Tag_weight:
            generated_string_Tag = new JSONStringValue("weight");
            break;
        case Tag_energy:
            generated_string_Tag = new JSONStringValue("energy");
            break;
        case Tag_power:
            generated_string_Tag = new JSONStringValue("power");
            break;
        case Tag_electric_charge:
            generated_string_Tag = new JSONStringValue("electric_charge");
            break;
        case Tag_electric_potential_difference:
            generated_string_Tag = new JSONStringValue("electric_potential_difference");
            break;
        case Tag_capacitance:
            generated_string_Tag = new JSONStringValue("capacitance");
            break;
        case Tag_electric_resistance:
            generated_string_Tag = new JSONStringValue("electric_resistance");
            break;
        case Tag_electric_conductance:
            generated_string_Tag = new JSONStringValue("electric_conductance");
            break;
        case Tag_inductance:
            generated_string_Tag = new JSONStringValue("inductance");
            break;
        case Tag_magnetic_flux:
            generated_string_Tag = new JSONStringValue("magnetic_flux");
            break;
        case Tag_magnetic_flux_density:
            generated_string_Tag = new JSONStringValue("magnetic_flux_density");
            break;
        case Tag_current:
            generated_string_Tag = new JSONStringValue("current");
            break;
        case Tag_temperature:
            generated_string_Tag = new JSONStringValue("temperature");
            break;
        case Tag_count:
            generated_string_Tag = new JSONStringValue("count");
            break;
        case Tag_luminosity:
            generated_string_Tag = new JSONStringValue("luminosity");
            break;
        case Tag_luminous_flux:
            generated_string_Tag = new JSONStringValue("luminous_flux");
            break;
        case Tag_illuminance:
            generated_string_Tag = new JSONStringValue("illuminance");
            break;
        case Tag_frequency:
            generated_string_Tag = new JSONStringValue("frequency");
            break;
        case Tag_force:
            generated_string_Tag = new JSONStringValue("force");
            break;
        case Tag_pressure:
            generated_string_Tag = new JSONStringValue("pressure");
            break;
        case Tag_absorbed_dose:
            generated_string_Tag = new JSONStringValue("absorbed_dose");
            break;
        case Tag_catalytic_activity:
            generated_string_Tag = new JSONStringValue("catalytic_activity");
            break;
        case Tag_width:
            generated_string_Tag = new JSONStringValue("width");
            break;
        case Tag_height:
            generated_string_Tag = new JSONStringValue("height");
            break;
        case Tag_depth:
            generated_string_Tag = new JSONStringValue("depth");
            break;
        default:
            assert(false);
            generated_string_Tag = NULL;
      }
      }
    return generated_string_Tag;
  }

void CoreUnitsPropertyJSON::fromJSONTag(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Tag of CoreUnitsPropertyJSON is not a string.");
    TypeTag the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'a':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'b':
                    if (strcmp(&(json_string->getData()[2]), "sorbed_dose") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_absorbed_dose;
                            goto open_enum_is_done;
                          }
                    break;
                case 'n':
                    if (strcmp(&(json_string->getData()[2]), "gle") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_angle;
                            goto open_enum_is_done;
                          }
                    break;
                case 'r':
                    if (strcmp(&(json_string->getData()[2]), "ea") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_area;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'c':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'p':
                            if (strcmp(&(json_string->getData()[3]), "acitance") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Tag_capacitance;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 't':
                            if (strcmp(&(json_string->getData()[3]), "alytic_activity") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Tag_catalytic_activity;
                                    goto open_enum_is_done;
                                  }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "unt") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_count;
                            goto open_enum_is_done;
                          }
                    break;
                case 'u':
                    if (strcmp(&(json_string->getData()[2]), "rrent") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_current;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'd':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "pth") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_depth;
                            goto open_enum_is_done;
                          }
                    break;
                case 'i':
                    if (strcmp(&(json_string->getData()[2]), "stance") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_distance;
                            goto open_enum_is_done;
                          }
                    break;
                case 'u':
                    if (strcmp(&(json_string->getData()[2]), "ration") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_duration;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'e':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'l':
                    if (strncmp(&(json_string->getData()[2]), "ectric_", 7) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[9]))
                          {
                            case 'c':
                                switch ((unsigned char)(json_string->getData()[10]))
                                  {
                                    case 'h':
                                        if (strcmp(&(json_string->getData()[11]), "arge") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_electric_charge;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'o':
                                        if (strcmp(&(json_string->getData()[11]), "nductance") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_electric_conductance;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'p':
                                if (strcmp(&(json_string->getData()[10]), "otential_difference") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_electric_potential_difference;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'r':
                                if (strcmp(&(json_string->getData()[10]), "esistance") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_electric_resistance;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'n':
                    if (strcmp(&(json_string->getData()[2]), "ergy") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_energy;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'f':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "rce") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_force;
                            goto open_enum_is_done;
                          }
                    break;
                case 'r':
                    if (strcmp(&(json_string->getData()[2]), "equency") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_frequency;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'h':
            if (strcmp(&(json_string->getData()[1]), "eight") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Tag_height;
                    goto open_enum_is_done;
                  }
            break;
        case 'i':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'l':
                    if (strcmp(&(json_string->getData()[2]), "luminance") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_illuminance;
                            goto open_enum_is_done;
                          }
                    break;
                case 'n':
                    if (strcmp(&(json_string->getData()[2]), "ductance") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_inductance;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'l':
            if (strncmp(&(json_string->getData()[1]), "umino", 5) == 0)
              {
                switch ((unsigned char)(json_string->getData()[6]))
                  {
                    case 's':
                        if (strcmp(&(json_string->getData()[7]), "ity") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Tag_luminosity;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'u':
                        if (strcmp(&(json_string->getData()[7]), "s_flux") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Tag_luminous_flux;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'm':
            if (strncmp(&(json_string->getData()[1]), "a", 1) == 0)
              {
                switch ((unsigned char)(json_string->getData()[2]))
                  {
                    case 'g':
                        if (strncmp(&(json_string->getData()[3]), "netic_flux", 10) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[13]))
                              {
                                case 0:
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_magnetic_flux;
                                        goto open_enum_is_done;
                                      }
                                case '_':
                                    if (strcmp(&(json_string->getData()[14]), "density") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Tag_magnetic_flux_density;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 's':
                        if (strcmp(&(json_string->getData()[3]), "s") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Tag_mass;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'o':
            if (strcmp(&(json_string->getData()[1]), "rientation") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Tag_orientation;
                    goto open_enum_is_done;
                  }
            break;
        case 'p':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'o':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 's':
                            if (strcmp(&(json_string->getData()[3]), "ition") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Tag_position;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'w':
                            if (strcmp(&(json_string->getData()[3]), "er") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Tag_power;
                                    goto open_enum_is_done;
                                  }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'r':
                    if (strcmp(&(json_string->getData()[2]), "essure") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_pressure;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 's':
            if (strcmp(&(json_string->getData()[1]), "olid_angle") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Tag_solid_angle;
                    goto open_enum_is_done;
                  }
            break;
        case 't':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "mperature") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_temperature;
                            goto open_enum_is_done;
                          }
                    break;
                case 'i':
                    if (strcmp(&(json_string->getData()[2]), "me") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_time;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'v':
            if (strcmp(&(json_string->getData()[1]), "olume") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Tag_volume;
                    goto open_enum_is_done;
                  }
            break;
        case 'w':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "ight") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_weight;
                            goto open_enum_is_done;
                          }
                    break;
                case 'i':
                    if (strcmp(&(json_string->getData()[2]), "dth") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_width;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setTag(the_open_enum);
  }

CoreUnitsPropertyJSON::CoreUnitsPropertyJSON(void) :
        flagHasTag(false)
  {
    extraIndex = create_string_index();
  }

CoreUnitsPropertyJSON::~CoreUnitsPropertyJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *CoreUnitsPropertyJSON::getPropertyKind(void) const
  {
    return "Core";
  }

bool CoreUnitsPropertyJSON::hasTag(void) const
  {
    return flagHasTag;
  }

CoreUnitsPropertyJSON::TypeTag CoreUnitsPropertyJSON::getTag(void)
  {
    assert(flagHasTag);
    return storeTag;
  }

const CoreUnitsPropertyJSON::TypeTag CoreUnitsPropertyJSON::getTag(void) const
  {
    assert(flagHasTag);
    return storeTag;
  }

const char *CoreUnitsPropertyJSON::getTagAsChars(void) const
  {
    TypeTag result = getTag();
    if (result.in_known_list)
        return stringFromTag(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string CoreUnitsPropertyJSON::getTagAsString(void) const
  {
    return getTagAsChars();
  }

CoreUnitsPropertyJSON *CoreUnitsPropertyJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CoreUnitsPropertyJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CoreUnitsPropertyJSON>, CoreUnitsPropertyJSON *, bool> generator("Type CoreUnitsProperty", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
