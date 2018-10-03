/* file "OInteger.h" */

/* Copyright 2013-2017 SoundHound, Incorporated.  All rights reserved. */


#ifndef OINTEGER_H
#define OINTEGER_H

#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <ostream>
#include <sstream>
extern "C"
  {
#define class CLASS
#include "o_integer.h"
#undef class
  }


class OInteger
  {
  private:
    o_integer the_oi;

  public:
    OInteger(void)
      {
        the_oi.the_long = 0;
        the_oi.ii = ii_zero_zero_no_ref();
        oi_add_reference(the_oi);
      }
    OInteger(o_integer the_oi) : the_oi(the_oi)  { oi_add_reference(the_oi); }
    OInteger(unsigned long the_ul) : the_oi(oi_zero)
      {
        oi_create_from_unsigned_long_int(the_oi, the_ul);
        if (oi_out_of_memory(the_oi))
            throw("Out of memory");
      }
    OInteger(long the_long) : the_oi(oi_zero)
      {
        oi_create_from_long_int(the_oi, the_long);
        if (oi_out_of_memory(the_oi))
            throw("Out of memory");
      }
    OInteger(unsigned int the_unsigned) : the_oi(oi_zero)
      {
        oi_create_from_unsigned_long_int(the_oi, the_unsigned);
        if (oi_out_of_memory(the_oi))
            throw("Out of memory");
      }
    OInteger(int the_int) : the_oi(oi_zero)
      {
        oi_create_from_long_int(the_oi, the_int);
        if (oi_out_of_memory(the_oi))
            throw("Out of memory");
      }

    OInteger(const OInteger &other) : the_oi(other.the_oi)
      { oi_add_reference(the_oi); }
    ~OInteger(void)  { oi_remove_reference(the_oi); }

    void operator=(const OInteger &other)
      {
        oi_remove_reference(the_oi);
        the_oi = other.the_oi;
        oi_add_reference(the_oi);
      }

    size_t decimal_digit_count(void) const
      {
        size_t result;
        verdict the_verdict = oi_decimal_digit_count(the_oi, &result);
        if (the_verdict != MISSION_ACCOMPLISHED)
            throw("Out of memory");
        return result;
      }
    void write_decimal_digits(char *location) const
      {
        verdict the_verdict = oi_write_decimal_digits(the_oi, location);
        if (the_verdict != MISSION_ACCOMPLISHED)
            throw("Out of memory");
      }
    void print(FILE *fp = stdout) const
      {
        if (*this < 0)
            fprintf(fp, "-");
        size_t digit_count = decimal_digit_count();
        if (digit_count == 0)
          {
            fprintf(fp, "0");
            return;
          }
        char *digit_buffer = new char[digit_count + 1];
        write_decimal_digits(digit_buffer);
        digit_buffer[digit_count] = 0;
        fprintf(fp, "%s", digit_buffer);
        delete[] digit_buffer;
      }

    bool operator==(const OInteger &other) const
      { return oi_equal(the_oi, other.the_oi); }
    bool operator==(unsigned long other) const
      {
        o_integer other_oi;
        oi_create_from_unsigned_long_int(other_oi, other);
        if (oi_out_of_memory(other_oi))
            throw("Out of memory");
        bool result = oi_equal(the_oi, other_oi);
        oi_remove_reference(other_oi);
        return result;
      }
    bool operator==(long other) const
      {
        o_integer other_oi;
        oi_create_from_long_int(other_oi, other);
        if (oi_out_of_memory(other_oi))
            throw("Out of memory");
        bool result = oi_equal(the_oi, other_oi);
        oi_remove_reference(other_oi);
        return result;
      }
    bool operator==(unsigned int other) const
      { return operator==((unsigned long)other); }
    bool operator==(int other) const
      { return operator==((long)other); }

    bool operator!=(const OInteger &other) const
      { return !(oi_equal(the_oi, other.the_oi)); }
    bool operator!=(unsigned long other) const
      { return !(operator==(other)); }
    bool operator!=(long other) const
      { return !(operator==(other)); }
    bool operator!=(unsigned int other) const
      { return !(operator==(other)); }
    bool operator!=(int other) const
      { return !(operator==(other)); }

    bool operator<(const OInteger &other) const
      { return oi_less_than(the_oi, other.the_oi); }
    bool operator<(unsigned long other) const
      {
        o_integer other_oi;
        oi_create_from_unsigned_long_int(other_oi, other);
        if (oi_out_of_memory(other_oi))
            throw("Out of memory");
        bool result = oi_less_than(the_oi, other_oi);
        oi_remove_reference(other_oi);
        return result;
      }
    bool operator<(long other) const
      {
        o_integer other_oi;
        oi_create_from_long_int(other_oi, other);
        if (oi_out_of_memory(other_oi))
            throw("Out of memory");
        bool result = oi_less_than(the_oi, other_oi);
        oi_remove_reference(other_oi);
        return result;
      }
    bool operator<(unsigned int other) const
      { return operator<((unsigned long)other); }
    bool operator<(int other) const
      { return operator<((long)other); }

    bool operator>(const OInteger &other) const
      { return oi_less_than(other.the_oi, the_oi); }
    bool operator>(unsigned long other) const
      {
        o_integer other_oi;
        oi_create_from_unsigned_long_int(other_oi, other);
        if (oi_out_of_memory(other_oi))
            throw("Out of memory");
        bool result = oi_less_than(other_oi, the_oi);
        oi_remove_reference(other_oi);
        return result;
      }
    bool operator>(long other) const
      {
        o_integer other_oi;
        oi_create_from_long_int(other_oi, other);
        if (oi_out_of_memory(other_oi))
            throw("Out of memory");
        bool result = oi_less_than(other_oi, the_oi);
        oi_remove_reference(other_oi);
        return result;
      }
    bool operator>(unsigned int other) const
      { return operator>((unsigned long)other); }
    bool operator>(int other) const
      { return operator>((long)other); }

    bool operator<=(const OInteger &other) const
      { return !(operator>(other)); }
    bool operator<=(unsigned long other) const
      { return !(operator>(other)); }
    bool operator<=(long other) const
      { return !(operator>(other)); }
    bool operator<=(unsigned int other) const
      { return !(operator>(other)); }
    bool operator<=(int other) const
      { return !(operator>(other)); }

    bool operator>=(const OInteger &other) const
      { return !(operator<(other)); }
    bool operator>=(unsigned long other) const
      { return !(operator<(other)); }
    bool operator>=(long other) const
      { return !(operator<(other)); }
    bool operator>=(unsigned int other) const
      { return !(operator<(other)); }
    bool operator>=(int other) const
      { return !(operator<(other)); }

    OInteger operator+(const OInteger &other) const
      {
        o_integer result_oi;
        oi_add(result_oi, the_oi, other.the_oi);
        if (oi_out_of_memory(result_oi))
            throw("Out of memory");
        OInteger result = OInteger(result_oi);
        oi_remove_reference(result_oi);
        return result;
      }
    OInteger operator+(unsigned long other) const
      {
        o_integer other_oi;
        oi_create_from_unsigned_long_int(other_oi, other);
        if (oi_out_of_memory(other_oi))
            throw("Out of memory");
        o_integer result_oi;
        oi_add(result_oi, the_oi, other_oi);
        oi_remove_reference(other_oi);
        if (oi_out_of_memory(result_oi))
            throw("Out of memory");
        OInteger result = OInteger(result_oi);
        oi_remove_reference(result_oi);
        return result;
      }
    OInteger operator+(long other) const
      {
        o_integer other_oi;
        oi_create_from_long_int(other_oi, other);
        if (oi_out_of_memory(other_oi))
            throw("Out of memory");
        o_integer result_oi;
        oi_add(result_oi, the_oi, other_oi);
        oi_remove_reference(other_oi);
        if (oi_out_of_memory(result_oi))
            throw("Out of memory");
        OInteger result = OInteger(result_oi);
        oi_remove_reference(result_oi);
        return result;
      }
    OInteger operator+(unsigned int other) const
      { return operator+((unsigned long)other); }
    OInteger operator+(int other) const
      { return operator+((long)other); }

    OInteger operator++(void)
      {
        o_integer result_oi;
        oi_add(result_oi, the_oi, oi_one);
        if (oi_out_of_memory(result_oi))
            throw("Out of memory");
        oi_remove_reference(the_oi);
        the_oi = result_oi;
        return OInteger(result_oi);
      }
    OInteger operator++(int)
      {
        OInteger result = OInteger(the_oi);
        o_integer result_oi;
        oi_add(result_oi, the_oi, oi_one);
        if (oi_out_of_memory(result_oi))
            throw("Out of memory");
        oi_remove_reference(the_oi);
        the_oi = result_oi;
        return result;
      }

    OInteger operator-(const OInteger &other) const
      {
        o_integer result_oi;
        oi_subtract(result_oi, the_oi, other.the_oi);
        if (oi_out_of_memory(result_oi))
            throw("Out of memory");
        OInteger result = OInteger(result_oi);
        oi_remove_reference(result_oi);
        return result;
      }
    OInteger operator-(unsigned long other) const
      {
        o_integer other_oi;
        oi_create_from_unsigned_long_int(other_oi, other);
        if (oi_out_of_memory(other_oi))
            throw("Out of memory");
        o_integer result_oi;
        oi_subtract(result_oi, the_oi, other_oi);
        oi_remove_reference(other_oi);
        if (oi_out_of_memory(result_oi))
            throw("Out of memory");
        OInteger result = OInteger(result_oi);
        oi_remove_reference(result_oi);
        return result;
      }
    OInteger operator-(long other) const
      {
        o_integer other_oi;
        oi_create_from_long_int(other_oi, other);
        if (oi_out_of_memory(other_oi))
            throw("Out of memory");
        o_integer result_oi;
        oi_subtract(result_oi, the_oi, other_oi);
        oi_remove_reference(other_oi);
        if (oi_out_of_memory(result_oi))
            throw("Out of memory");
        OInteger result = OInteger(result_oi);
        oi_remove_reference(result_oi);
        return result;
      }
    OInteger operator-(unsigned int other) const
      { return operator-((unsigned long)other); }
    OInteger operator-(int other) const
      { return operator-((long)other); }

    OInteger operator--(void)
      {
        o_integer result_oi;
        oi_subtract(result_oi, the_oi, oi_one);
        if (oi_out_of_memory(result_oi))
            throw("Out of memory");
        oi_remove_reference(the_oi);
        the_oi = result_oi;
        return OInteger(result_oi);
      }
    OInteger operator--(int)
      {
        OInteger result = OInteger(the_oi);
        o_integer result_oi;
        oi_subtract(result_oi, the_oi, oi_one);
        if (oi_out_of_memory(result_oi))
            throw("Out of memory");
        oi_remove_reference(the_oi);
        the_oi = result_oi;
        return result;
      }

    OInteger operator*(const OInteger &other) const
      {
        o_integer result_oi;
        oi_multiply(result_oi, the_oi, other.the_oi);
        if (oi_out_of_memory(result_oi))
            throw("Out of memory");
        OInteger result(result_oi);
        oi_remove_reference(result_oi);
        return result;
      }
    OInteger operator*(unsigned long other) const
      {
        o_integer other_oi;
        oi_create_from_unsigned_long_int(other_oi, other);
        if (oi_out_of_memory(other_oi))
            throw("Out of memory");
        o_integer result_oi;
        oi_multiply(result_oi, the_oi, other_oi);
        oi_remove_reference(other_oi);
        if (oi_out_of_memory(result_oi))
            throw("Out of memory");
        OInteger result = OInteger(result_oi);
        oi_remove_reference(result_oi);
        return result;
      }
    OInteger operator*(long other) const
      {
        o_integer other_oi;
        oi_create_from_long_int(other_oi, other);
        if (oi_out_of_memory(other_oi))
            throw("Out of memory");
        o_integer result_oi;
        oi_multiply(result_oi, the_oi, other_oi);
        oi_remove_reference(other_oi);
        if (oi_out_of_memory(result_oi))
            throw("Out of memory");
        OInteger result = OInteger(result_oi);
        oi_remove_reference(result_oi);
        return result;
      }
    OInteger operator*(unsigned int other) const
      { return operator*((unsigned long)other); }
    OInteger operator*(int other) const
      { return operator*((long)other); }

    OInteger operator%(const OInteger &other) const
      {
        o_integer result_oi;
        o_integer quotient;
        oi_divide(quotient, the_oi, other.the_oi, &result_oi);
        if (oi_out_of_memory(result_oi))
          {
            assert(oi_out_of_memory(quotient));
            throw("Out of memory");
          }
        assert(!(oi_out_of_memory(quotient)));
        oi_remove_reference(quotient);
        OInteger result = OInteger(result_oi);
        oi_remove_reference(result_oi);
        return result;
      }
    OInteger operator%(unsigned long other) const
      {
        o_integer other_oi;
        oi_create_from_unsigned_long_int(other_oi, other);
        if (oi_out_of_memory(other_oi))
            throw("Out of memory");
        o_integer result_oi;
        o_integer quotient;
        oi_divide(quotient, the_oi, other_oi, &result_oi);
        oi_remove_reference(other_oi);
        if (oi_out_of_memory(result_oi))
          {
            assert(oi_out_of_memory(quotient));
            throw("Out of memory");
          }
        assert(!(oi_out_of_memory(quotient)));
        oi_remove_reference(quotient);
        OInteger result = OInteger(result_oi);
        oi_remove_reference(result_oi);
        return result;
      }
    OInteger operator%(long other) const
      {
        o_integer other_oi;
        oi_create_from_long_int(other_oi, other);
        if (oi_out_of_memory(other_oi))
            throw("Out of memory");
        o_integer result_oi;
        o_integer quotient;
        oi_divide(quotient, the_oi, other_oi, &result_oi);
        oi_remove_reference(other_oi);
        if (oi_out_of_memory(result_oi))
          {
            assert(oi_out_of_memory(quotient));
            throw("Out of memory");
          }
        assert(!(oi_out_of_memory(quotient)));
        oi_remove_reference(quotient);
        OInteger result = OInteger(result_oi);
        oi_remove_reference(result_oi);
        return result;
      }
    OInteger operator%(unsigned int other) const
      { return operator%((unsigned long)other); }
    OInteger operator%(int other) const
      { return operator%((long)other); }

    OInteger operator/(const OInteger &other) const
      {
        o_integer result_oi;
        o_integer remainder;
        oi_divide(result_oi, the_oi, other.the_oi, &remainder);
        if (oi_out_of_memory(result_oi))
          {
            assert(oi_out_of_memory(remainder));
            throw("Out of memory");
          }
        assert(!(oi_out_of_memory(remainder)));
        oi_remove_reference(remainder);
        OInteger result = OInteger(result_oi);
        oi_remove_reference(result_oi);
        return result;
      }
    OInteger operator/(unsigned long other) const
      {
        o_integer other_oi;
        oi_create_from_unsigned_long_int(other_oi, other);
        if (oi_out_of_memory(other_oi))
            throw("Out of memory");
        o_integer result_oi;
        o_integer remainder;
        oi_divide(result_oi, the_oi, other_oi, &remainder);
        oi_remove_reference(other_oi);
        if (oi_out_of_memory(result_oi))
          {
            assert(oi_out_of_memory(remainder));
            throw("Out of memory");
          }
        assert(!(oi_out_of_memory(remainder)));
        oi_remove_reference(remainder);
        OInteger result = OInteger(result_oi);
        oi_remove_reference(result_oi);
        return result;
      }
    OInteger operator/(long other) const
      {
        o_integer other_oi;
        oi_create_from_long_int(other_oi, other);
        if (oi_out_of_memory(other_oi))
            throw("Out of memory");
        o_integer result_oi;
        o_integer remainder;
        oi_divide(result_oi, the_oi, other_oi, &remainder);
        oi_remove_reference(other_oi);
        if (oi_out_of_memory(result_oi))
          {
            assert(oi_out_of_memory(remainder));
            throw("Out of memory");
          }
        assert(!(oi_out_of_memory(remainder)));
        oi_remove_reference(remainder);
        OInteger result = OInteger(result_oi);
        oi_remove_reference(result_oi);
        return result;
      }
    OInteger operator/(unsigned int other) const
      { return operator/((unsigned long)other); }
    OInteger operator/(int other) const
      { return operator/((long)other); }

    OInteger &operator+=(const OInteger &other)
      {
        OInteger result = operator+(other);
        oi_remove_reference(the_oi);
        the_oi = result.the_oi;
        oi_add_reference(the_oi);
        return *this;
      }
    OInteger &operator+=(unsigned long other)
      {
        OInteger result = operator+(other);
        oi_remove_reference(the_oi);
        the_oi = result.the_oi;
        oi_add_reference(the_oi);
        return *this;
      }
    OInteger &operator+=(long other)
      {
        OInteger result = operator+(other);
        oi_remove_reference(the_oi);
        the_oi = result.the_oi;
        oi_add_reference(the_oi);
        return *this;
      }
    OInteger &operator+=(unsigned int other)
      {
        OInteger result = operator+(other);
        oi_remove_reference(the_oi);
        the_oi = result.the_oi;
        oi_add_reference(the_oi);
        return *this;
      }
    OInteger &operator+=(int other)
      {
        OInteger result = operator+(other);
        oi_remove_reference(the_oi);
        the_oi = result.the_oi;
        oi_add_reference(the_oi);
        return *this;
      }

    OInteger &operator-=(const OInteger &other)
      {
        OInteger result = operator-(other);
        oi_remove_reference(the_oi);
        the_oi = result.the_oi;
        oi_add_reference(the_oi);
        return *this;
      }
    OInteger &operator-=(unsigned long other)
      {
        OInteger result = operator-(other);
        oi_remove_reference(the_oi);
        the_oi = result.the_oi;
        oi_add_reference(the_oi);
        return *this;
      }
    OInteger &operator-=(long other)
      {
        OInteger result = operator-(other);
        oi_remove_reference(the_oi);
        the_oi = result.the_oi;
        oi_add_reference(the_oi);
        return *this;
      }
    OInteger &operator-=(unsigned int other)
      {
        OInteger result = operator-(other);
        oi_remove_reference(the_oi);
        the_oi = result.the_oi;
        oi_add_reference(the_oi);
        return *this;
      }
    OInteger &operator-=(int other)
      {
        OInteger result = operator-(other);
        oi_remove_reference(the_oi);
        the_oi = result.the_oi;
        oi_add_reference(the_oi);
        return *this;
      }

    OInteger &operator*=(const OInteger &other)
      {
        OInteger result = operator*(other);
        oi_remove_reference(the_oi);
        the_oi = result.the_oi;
        oi_add_reference(the_oi);
        return *this;
      }
    OInteger &operator*=(unsigned long other)
      {
        OInteger result = operator*(other);
        oi_remove_reference(the_oi);
        the_oi = result.the_oi;
        oi_add_reference(the_oi);
        return *this;
      }
    OInteger &operator*=(long other)
      {
        OInteger result = operator*(other);
        oi_remove_reference(the_oi);
        the_oi = result.the_oi;
        oi_add_reference(the_oi);
        return *this;
      }
    OInteger &operator*=(unsigned int other)
      {
        OInteger result = operator*(other);
        oi_remove_reference(the_oi);
        the_oi = result.the_oi;
        oi_add_reference(the_oi);
        return *this;
      }
    OInteger &operator*=(int other)
      {
        OInteger result = operator*(other);
        oi_remove_reference(the_oi);
        the_oi = result.the_oi;
        oi_add_reference(the_oi);
        return *this;
      }

    OInteger &operator/=(const OInteger &other)
      {
        OInteger result = operator/(other);
        oi_remove_reference(the_oi);
        the_oi = result.the_oi;
        oi_add_reference(the_oi);
        return *this;
      }
    OInteger &operator/=(unsigned long other)
      {
        OInteger result = operator/(other);
        oi_remove_reference(the_oi);
        the_oi = result.the_oi;
        oi_add_reference(the_oi);
        return *this;
      }
    OInteger &operator/=(long other)
      {
        OInteger result = operator/(other);
        oi_remove_reference(the_oi);
        the_oi = result.the_oi;
        oi_add_reference(the_oi);
        return *this;
      }
    OInteger &operator/=(unsigned int other)
      {
        OInteger result = operator/(other);
        oi_remove_reference(the_oi);
        the_oi = result.the_oi;
        oi_add_reference(the_oi);
        return *this;
      }
    OInteger &operator/=(int other)
      {
        OInteger result = operator/(other);
        oi_remove_reference(the_oi);
        the_oi = result.the_oi;
        oi_add_reference(the_oi);
        return *this;
      }

    OInteger &operator%=(const OInteger &other)
      {
        OInteger result = operator%(other);
        oi_remove_reference(the_oi);
        the_oi = result.the_oi;
        oi_add_reference(the_oi);
        return *this;
      }
    OInteger &operator%=(unsigned long other)
      {
        OInteger result = operator%(other);
        oi_remove_reference(the_oi);
        the_oi = result.the_oi;
        oi_add_reference(the_oi);
        return *this;
      }
    OInteger &operator%=(long other)
      {
        OInteger result = operator%(other);
        oi_remove_reference(the_oi);
        the_oi = result.the_oi;
        oi_add_reference(the_oi);
        return *this;
      }
    OInteger &operator%=(unsigned int other)
      {
        OInteger result = operator%(other);
        oi_remove_reference(the_oi);
        the_oi = result.the_oi;
        oi_add_reference(the_oi);
        return *this;
      }
    OInteger &operator%=(int other)
      {
        OInteger result = operator%(other);
        oi_remove_reference(the_oi);
        the_oi = result.the_oi;
        oi_add_reference(the_oi);
        return *this;
      }

    OInteger to_the_power_of(OInteger exponent) const
      {
        switch (oi_kind(exponent.the_oi))
          {
            case IIK_FINITE:
                switch (oi_kind(the_oi))
                  {
                    case IIK_FINITE:
                        break;
                    case IIK_POSITIVE_INFINITY:
                        if (exponent > 0)
                            return OInteger(oi_positive_infinity);
                        else if (exponent < 0)
                            return 0;
                        else
                            return OInteger(oi_zero_zero);
                    case IIK_NEGATIVE_INFINITY:
                        if (exponent > 0)
                          {
                            if ((exponent % 2) == 1)
                                return OInteger(oi_negative_infinity);
                            else
                                return OInteger(oi_positive_infinity);
                          }
                        else if (exponent < 0)
                          {
                            return 0;
                          }
                        else
                          {
                            return OInteger(oi_zero_zero);
                          }
                    case IIK_UNSIGNED_INFINITY:
                        if (exponent > 0)
                          {
                            if ((exponent % 2) == 1)
                                return OInteger(oi_zero_zero);
                            else
                                return OInteger(oi_positive_infinity);
                          }
                        else if (exponent < 0)
                          {
                            return 0;
                          }
                        else
                          {
                            return OInteger(oi_zero_zero);
                          }
                    case IIK_ZERO_ZERO:
                        return OInteger(oi_zero_zero);
                    default:
                        assert(false);
                  }
                break;
            case IIK_POSITIVE_INFINITY:
                switch (oi_kind(the_oi))
                  {
                    case IIK_FINITE:
                        if (*this > 1)
                            return OInteger(oi_positive_infinity);
                        else if (*this < -1)
                            return OInteger(oi_unsigned_infinity);
                        else if (*this == 1)
                            return OInteger(oi_zero_zero);
                        else if (*this == -1)
                            return OInteger(oi_zero_zero);
                        else
                            return OInteger(0);
                    case IIK_POSITIVE_INFINITY:
                        return OInteger(oi_positive_infinity);
                    case IIK_NEGATIVE_INFINITY:
                        return OInteger(oi_unsigned_infinity);
                    case IIK_UNSIGNED_INFINITY:
                        return OInteger(oi_unsigned_infinity);
                    case IIK_ZERO_ZERO:
                        return OInteger(oi_zero_zero);
                    default:
                        assert(false);
                  }
            case IIK_NEGATIVE_INFINITY:
                switch (oi_kind(the_oi))
                  {
                    case IIK_FINITE:
                        if (*this > 1)
                            return OInteger(0);
                        else if (*this < -1)
                            return OInteger(0);
                        else if (*this == 1)
                            return OInteger(oi_zero_zero);
                        else if (*this == -1)
                            return OInteger(oi_zero_zero);
                        else if (*this > 0)
                            return OInteger(oi_positive_infinity);
                        else if (*this < 0)
                            return OInteger(oi_unsigned_infinity);
                        else
                            return OInteger(oi_unsigned_infinity);
                    case IIK_POSITIVE_INFINITY:
                        return OInteger(0);
                    case IIK_NEGATIVE_INFINITY:
                        return OInteger(0);
                    case IIK_UNSIGNED_INFINITY:
                        return OInteger(0);
                    case IIK_ZERO_ZERO:
                        return OInteger(oi_zero_zero);
                    default:
                        assert(false);
                  }
            case IIK_UNSIGNED_INFINITY:
                return OInteger(oi_zero_zero);
            case IIK_ZERO_ZERO:
                return OInteger(oi_zero_zero);
            default:
                assert(false);
          }

        OInteger result = 1;
        OInteger compounder = *this;
        OInteger remainder = exponent;
        if (exponent < 0)
            remainder = OInteger(0) - exponent;
        assert(remainder >= 0);
        while (remainder > 0)
          {
            if ((remainder % 2) == 1)
                result *= compounder;
            compounder *= compounder;
            remainder /= 2;
          }
        if (exponent < 0)
            return OInteger(1) / result;
        return result;
      }

    o_integer get_o_integer(void) const
      {
        return the_oi;
      }
    uint64_t get_uint64_t(void) const
      {
        if (oi_kind(the_oi) != IIK_FINITE)
            return ~(uint64_t)0;
        unsigned long result;
        verdict the_verdict = oi_to_unsigned_long_int(the_oi, &result);
        if (the_verdict != MISSION_ACCOMPLISHED)
            return ~(uint64_t)0;
        return (uint64_t)result;
      }
    int64_t get_int64_t(void) const
      {
        if (oi_kind(the_oi) != IIK_FINITE)
            return ~(uint64_t)0;
        long result;
        verdict the_verdict = oi_to_long_int(the_oi, &result);
        if (the_verdict != MISSION_ACCOMPLISHED)
            return (int64_t)(((uint64_t)1) << 63);
        return (int64_t)result;
      }
    static OInteger from_int64_t(int64_t input_value);
    static OInteger from_uint64_t(uint64_t input_value);
    static OInteger from_size_t(size_t input_value);
  };

inline bool operator==(unsigned long left, OInteger right)
  { return right.operator==(left); }
inline bool operator==(long left, OInteger right)
  { return right.operator==(left); }
inline bool operator==(unsigned int left, OInteger right)
  { return right.operator==(left); }
inline bool operator==(int left, OInteger right)
  { return right.operator==(left); }

inline bool operator!=(unsigned long left, OInteger right)
  { return right.operator!=(left); }
inline bool operator!=(long left, OInteger right)
  { return right.operator!=(left); }
inline bool operator!=(unsigned int left, OInteger right)
  { return right.operator!=(left); }
inline bool operator!=(int left, OInteger right)
  { return right.operator!=(left); }

inline bool operator<(unsigned long left, OInteger right)
  { return right.operator>(left); }
inline bool operator<(long left, OInteger right)
  { return right.operator>(left); }
inline bool operator<(unsigned int left, OInteger right)
  { return right.operator>(left); }
inline bool operator<(int left, OInteger right)
  { return right.operator>(left); }

inline bool operator>(unsigned long left, OInteger right)
  { return right.operator<(left); }
inline bool operator>(long left, OInteger right)
  { return right.operator<(left); }
inline bool operator>(unsigned int left, OInteger right)
  { return right.operator<(left); }
inline bool operator>(int left, OInteger right)
  { return right.operator<(left); }

inline bool operator<=(unsigned long left, OInteger right)
  { return right.operator>=(left); }
inline bool operator<=(long left, OInteger right)
  { return right.operator>=(left); }
inline bool operator<=(unsigned int left, OInteger right)
  { return right.operator>=(left); }
inline bool operator<=(int left, OInteger right)
  { return right.operator>=(left); }

inline bool operator>=(unsigned long left, OInteger right)
  { return right.operator<=(left); }
inline bool operator>=(long left, OInteger right)
  { return right.operator<=(left); }
inline bool operator>=(unsigned int left, OInteger right)
  { return right.operator<=(left); }
inline bool operator>=(int left, OInteger right)
  { return right.operator<=(left); }

inline OInteger operator+(unsigned long left, OInteger right)
  { return right.operator+(left); }
inline OInteger operator+(long left, OInteger right)
  { return right.operator+(left); }
inline OInteger operator+(unsigned int left, OInteger right)
  { return right.operator+(left); }
inline OInteger operator+(int left, OInteger right)
  { return right.operator+(left); }

inline OInteger operator-(unsigned long left, OInteger right)
  {
    OInteger left_oi(left);
    return left_oi.operator-(right);
  }
inline OInteger operator-(long left, OInteger right)
  {
    OInteger left_oi(left);
    return left_oi.operator-(right);
  }
inline OInteger operator-(unsigned int left, OInteger right)
  {
    OInteger left_oi(left);
    return left_oi.operator-(right);
  }
inline OInteger operator-(int left, OInteger right)
  {
    OInteger left_oi(left);
    return left_oi.operator-(right);
  }

inline OInteger operator-(OInteger value)
  {
    o_integer input_oi = value.get_o_integer();
    o_integer output_oi;
    oi_negate(output_oi, input_oi);
    oi_remove_reference(input_oi);
    OInteger result(output_oi);
    oi_remove_reference(output_oi);
    return result;
  }

inline OInteger operator*(unsigned long left, OInteger right)
  { return right.operator*(left); }
inline OInteger operator*(long left, OInteger right)
  { return right.operator*(left); }
inline OInteger operator*(unsigned int left, OInteger right)
  { return right.operator*(left); }
inline OInteger operator*(int left, OInteger right)
  { return right.operator*(left); }

inline OInteger operator/(unsigned long left, OInteger right)
  {
    OInteger left_oi(left);
    return left_oi.operator/(right);
  }
inline OInteger operator/(long left, OInteger right)
  {
    OInteger left_oi(left);
    return left_oi.operator/(right);
  }
inline OInteger operator/(unsigned int left, OInteger right)
  {
    OInteger left_oi(left);
    return left_oi.operator/(right);
  }
inline OInteger operator/(int left, OInteger right)
  {
    OInteger left_oi(left);
    return left_oi.operator/(right);
  }

inline OInteger operator%(unsigned long left, OInteger right)
  {
    OInteger left_oi(left);
    return left_oi.operator%(right);
  }
inline OInteger operator%(long left, OInteger right)
  {
    OInteger left_oi(left);
    return left_oi.operator%(right);
  }
inline OInteger operator%(unsigned int left, OInteger right)
  {
    OInteger left_oi(left);
    return left_oi.operator%(right);
  }
inline OInteger operator%(int left, OInteger right)
  {
    OInteger left_oi(left);
    return left_oi.operator%(right);
  }

inline std::ostream &operator<<(std::ostream &stream, OInteger the_oi)
  {
    if (the_oi < 0)
        stream << "-";
    size_t digit_count = the_oi.decimal_digit_count();
    if (digit_count == 0)
      {
        stream << "0";
        return stream;
      }
    char *digit_buffer = new char[digit_count + 1];
    the_oi.write_decimal_digits(digit_buffer);
    digit_buffer[digit_count] = 0;
    stream << digit_buffer;
    delete[] digit_buffer;
    return stream;
  }

inline std::string to_string(OInteger the_oi)
  {
    std::stringstream stream;
    stream << the_oi;
    return stream.str();
  }


#endif /* OINTEGER_H */
