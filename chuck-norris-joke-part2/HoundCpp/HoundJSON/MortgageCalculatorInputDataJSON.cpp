/* file "MortgageCalculatorInputDataJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MortgageCalculatorInputDataJSON.h"

#include "MortgageCalculatorInputDataJSON.h"


MortgageCalculatorInputDataJSON::TypeCalculationType::TypeCalculationType(void)
  {
  }

MortgageCalculatorInputDataJSON::TypeCalculationType::TypeCalculationType(const TypeCalculationType &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

MortgageCalculatorInputDataJSON::TypeCalculationType::TypeCalculationType(TypeCalculationTypeKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool MortgageCalculatorInputDataJSON::TypeCalculationType::operator==(const TypeCalculationType &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool MortgageCalculatorInputDataJSON::TypeCalculationType::operator!=(const TypeCalculationType &other) const
  {
    return !(operator==(other));
  }

bool MortgageCalculatorInputDataJSON::TypeCalculationType::operator<(const TypeCalculationType &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool MortgageCalculatorInputDataJSON::TypeCalculationType::operator>(const TypeCalculationType &other) const
  {
    return other.operator<(*this);
  }

bool MortgageCalculatorInputDataJSON::TypeCalculationType::operator>=(const TypeCalculationType &other) const
  {
    return !(operator<(other));
  }

bool MortgageCalculatorInputDataJSON::TypeCalculationType::operator<=(const TypeCalculationType &other) const
  {
    return !(other.operator<(*this));
  }

MortgageCalculatorInputDataJSON::TypeCalculationTypeKnownValues MortgageCalculatorInputDataJSON::stringToCalculationType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "mortizationPeriod") == 0)
                return CalculationType_AmortizationPeriod;
            break;
        case 'D':
            if (strcmp(&(chars[1]), "ownPayment") == 0)
                return CalculationType_DownPayment;
            break;
        case 'H':
            if (strcmp(&(chars[1]), "omeValue") == 0)
                return CalculationType_HomeValue;
            break;
        case 'I':
            if (strcmp(&(chars[1]), "nterestRate") == 0)
                return CalculationType_InterestRate;
            break;
        case 'P':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "yment") == 0)
                        return CalculationType_Payment;
                    break;
                case 'r':
                    if (strncmp(&(chars[2]), "incipal", 7) == 0)
                      {
                        switch ((unsigned char)(chars[9]))
                          {
                            case 0:
                                return CalculationType_Principal;
                            case 'O':
                                if (strcmp(&(chars[10]), "wing") == 0)
                                    return CalculationType_PrincipalOwing;
                                break;
                            case 'P':
                                if (strcmp(&(chars[10]), "aid") == 0)
                                    return CalculationType_PrincipalPaid;
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
        case 'T':
            if (strncmp(&(chars[1]), "otal", 4) == 0)
              {
                switch ((unsigned char)(chars[5]))
                  {
                    case 'I':
                        if (strcmp(&(chars[6]), "nterest") == 0)
                            return CalculationType_TotalInterest;
                        break;
                    case 'P':
                        if (strcmp(&(chars[6]), "aid") == 0)
                            return CalculationType_TotalPaid;
                        break;
                    default:
                        break;
                  }
              }
            break;
        default:
            break;
      }
    return CalculationType__none;
  }

const char *MortgageCalculatorInputDataJSON::stringFromCalculationType(TypeCalculationTypeKnownValues the_enum)
  {
    switch (the_enum)
      {
        case CalculationType_Payment:
            return "Payment";
        case CalculationType_TotalInterest:
            return "TotalInterest";
        case CalculationType_TotalPaid:
            return "TotalPaid";
        case CalculationType_InterestRate:
            return "InterestRate";
        case CalculationType_DownPayment:
            return "DownPayment";
        case CalculationType_AmortizationPeriod:
            return "AmortizationPeriod";
        case CalculationType_PrincipalPaid:
            return "PrincipalPaid";
        case CalculationType_Principal:
            return "Principal";
        case CalculationType_PrincipalOwing:
            return "PrincipalOwing";
        case CalculationType_HomeValue:
            return "HomeValue";
        default:
            assert(false);
            return NULL;
      }
  }

MortgageCalculatorInputDataJSON::TypeFutureCalculationType::TypeFutureCalculationType(void)
  {
  }

MortgageCalculatorInputDataJSON::TypeFutureCalculationType::TypeFutureCalculationType(const TypeFutureCalculationType &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

MortgageCalculatorInputDataJSON::TypeFutureCalculationType::TypeFutureCalculationType(TypeFutureCalculationTypeKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool MortgageCalculatorInputDataJSON::TypeFutureCalculationType::operator==(const TypeFutureCalculationType &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool MortgageCalculatorInputDataJSON::TypeFutureCalculationType::operator!=(const TypeFutureCalculationType &other) const
  {
    return !(operator==(other));
  }

bool MortgageCalculatorInputDataJSON::TypeFutureCalculationType::operator<(const TypeFutureCalculationType &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool MortgageCalculatorInputDataJSON::TypeFutureCalculationType::operator>(const TypeFutureCalculationType &other) const
  {
    return other.operator<(*this);
  }

bool MortgageCalculatorInputDataJSON::TypeFutureCalculationType::operator>=(const TypeFutureCalculationType &other) const
  {
    return !(operator<(other));
  }

bool MortgageCalculatorInputDataJSON::TypeFutureCalculationType::operator<=(const TypeFutureCalculationType &other) const
  {
    return !(other.operator<(*this));
  }

MortgageCalculatorInputDataJSON::TypeFutureCalculationTypeKnownValues MortgageCalculatorInputDataJSON::stringToFutureCalculationType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'P':
            if (strncmp(&(chars[1]), "rincipal", 8) == 0)
              {
                switch ((unsigned char)(chars[9]))
                  {
                    case 'O':
                        if (strcmp(&(chars[10]), "wing") == 0)
                            return FutureCalculationType_PrincipalOwing;
                        break;
                    case 'P':
                        if (strcmp(&(chars[10]), "aid") == 0)
                            return FutureCalculationType_PrincipalPaid;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'T':
            if (strncmp(&(chars[1]), "otal", 4) == 0)
              {
                switch ((unsigned char)(chars[5]))
                  {
                    case 'I':
                        if (strcmp(&(chars[6]), "nterest") == 0)
                            return FutureCalculationType_TotalInterest;
                        break;
                    case 'P':
                        if (strcmp(&(chars[6]), "aid") == 0)
                            return FutureCalculationType_TotalPaid;
                        break;
                    default:
                        break;
                  }
              }
            break;
        default:
            break;
      }
    return FutureCalculationType__none;
  }

const char *MortgageCalculatorInputDataJSON::stringFromFutureCalculationType(TypeFutureCalculationTypeKnownValues the_enum)
  {
    switch (the_enum)
      {
        case FutureCalculationType_TotalInterest:
            return "TotalInterest";
        case FutureCalculationType_TotalPaid:
            return "TotalPaid";
        case FutureCalculationType_PrincipalPaid:
            return "PrincipalPaid";
        case FutureCalculationType_PrincipalOwing:
            return "PrincipalOwing";
        default:
            assert(false);
            return NULL;
      }
  }

MortgageCalculatorInputDataJSON::TypeRequestType::TypeRequestType(void)
  {
  }

MortgageCalculatorInputDataJSON::TypeRequestType::TypeRequestType(const TypeRequestType &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

MortgageCalculatorInputDataJSON::TypeRequestType::TypeRequestType(TypeRequestTypeKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool MortgageCalculatorInputDataJSON::TypeRequestType::operator==(const TypeRequestType &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool MortgageCalculatorInputDataJSON::TypeRequestType::operator!=(const TypeRequestType &other) const
  {
    return !(operator==(other));
  }

bool MortgageCalculatorInputDataJSON::TypeRequestType::operator<(const TypeRequestType &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool MortgageCalculatorInputDataJSON::TypeRequestType::operator>(const TypeRequestType &other) const
  {
    return other.operator<(*this);
  }

bool MortgageCalculatorInputDataJSON::TypeRequestType::operator>=(const TypeRequestType &other) const
  {
    return !(operator<(other));
  }

bool MortgageCalculatorInputDataJSON::TypeRequestType::operator<=(const TypeRequestType &other) const
  {
    return !(other.operator<(*this));
  }

MortgageCalculatorInputDataJSON::TypeRequestTypeKnownValues MortgageCalculatorInputDataJSON::stringToRequestType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strncmp(&(chars[1]), "sk", 2) == 0)
              {
                switch ((unsigned char)(chars[3]))
                  {
                    case 'A':
                        if (strcmp(&(chars[4]), "mortization") == 0)
                            return RequestType_AskAmortization;
                        break;
                    case 'D':
                        if (strcmp(&(chars[4]), "ownPayment") == 0)
                            return RequestType_AskDownPayment;
                        break;
                    case 'H':
                        if (strcmp(&(chars[4]), "omeValue") == 0)
                            return RequestType_AskHomeValue;
                        break;
                    case 'I':
                        if (strcmp(&(chars[4]), "nterestRate") == 0)
                            return RequestType_AskInterestRate;
                        break;
                    case 'M':
                        if (strcmp(&(chars[4]), "onthlyPayment") == 0)
                            return RequestType_AskMonthlyPayment;
                        break;
                    case 'P':
                        if (strncmp(&(chars[4]), "rincipal", 8) == 0)
                          {
                            switch ((unsigned char)(chars[12]))
                              {
                                case 0:
                                    return RequestType_AskPrincipal;
                                case 'O':
                                    if (strcmp(&(chars[13]), "rHomeValue") == 0)
                                        return RequestType_AskPrincipalOrHomeValue;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'Y':
                        if (strncmp(&(chars[4]), "ear", 3) == 0)
                          {
                            switch ((unsigned char)(chars[7]))
                              {
                                case 'O':
                                    if (strcmp(&(chars[8]), "wing") == 0)
                                        return RequestType_AskYearOwing;
                                    break;
                                case 'R':
                                    if (strcmp(&(chars[8]), "ange") == 0)
                                        return RequestType_AskYearRange;
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
        case 'S':
            if (strncmp(&(chars[1]), "how", 3) == 0)
              {
                switch ((unsigned char)(chars[4]))
                  {
                    case 'A':
                        if (strcmp(&(chars[5]), "mortization") == 0)
                            return RequestType_ShowAmortization;
                        break;
                    case 'D':
                        if (strcmp(&(chars[5]), "ownPayment") == 0)
                            return RequestType_ShowDownPayment;
                        break;
                    case 'H':
                        if (strcmp(&(chars[5]), "omeValue") == 0)
                            return RequestType_ShowHomeValue;
                        break;
                    case 'I':
                        if (strcmp(&(chars[5]), "nterestRate") == 0)
                            return RequestType_ShowInterestRate;
                        break;
                    case 'P':
                        switch ((unsigned char)(chars[5]))
                          {
                            case 'a':
                                if (strcmp(&(chars[6]), "yment") == 0)
                                    return RequestType_ShowPayment;
                                break;
                            case 'r':
                                if (strncmp(&(chars[6]), "incipal", 7) == 0)
                                  {
                                    switch ((unsigned char)(chars[13]))
                                      {
                                        case 0:
                                            return RequestType_ShowPrincipal;
                                        case 'O':
                                            if (strcmp(&(chars[14]), "wing") == 0)
                                                return RequestType_ShowPrincipalOwing;
                                            break;
                                        case 'P':
                                            if (strcmp(&(chars[14]), "aid") == 0)
                                                return RequestType_ShowPrincipalPaid;
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
                    case 'T':
                        if (strncmp(&(chars[5]), "otal", 4) == 0)
                          {
                            switch ((unsigned char)(chars[9]))
                              {
                                case 'I':
                                    if (strcmp(&(chars[10]), "nterest") == 0)
                                        return RequestType_ShowTotalInterest;
                                    break;
                                case 'P':
                                    if (strcmp(&(chars[10]), "aid") == 0)
                                        return RequestType_ShowTotalPaid;
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
        case 'U':
            if (strcmp(&(chars[1]), "nknown") == 0)
                return RequestType_Unknown;
            break;
        default:
            break;
      }
    return RequestType__none;
  }

const char *MortgageCalculatorInputDataJSON::stringFromRequestType(TypeRequestTypeKnownValues the_enum)
  {
    switch (the_enum)
      {
        case RequestType_Unknown:
            return "Unknown";
        case RequestType_AskPrincipal:
            return "AskPrincipal";
        case RequestType_AskInterestRate:
            return "AskInterestRate";
        case RequestType_AskAmortization:
            return "AskAmortization";
        case RequestType_AskHomeValue:
            return "AskHomeValue";
        case RequestType_AskDownPayment:
            return "AskDownPayment";
        case RequestType_AskMonthlyPayment:
            return "AskMonthlyPayment";
        case RequestType_ShowPayment:
            return "ShowPayment";
        case RequestType_ShowTotalInterest:
            return "ShowTotalInterest";
        case RequestType_ShowTotalPaid:
            return "ShowTotalPaid";
        case RequestType_ShowDownPayment:
            return "ShowDownPayment";
        case RequestType_ShowInterestRate:
            return "ShowInterestRate";
        case RequestType_ShowAmortization:
            return "ShowAmortization";
        case RequestType_ShowPrincipalPaid:
            return "ShowPrincipalPaid";
        case RequestType_ShowPrincipal:
            return "ShowPrincipal";
        case RequestType_ShowPrincipalOwing:
            return "ShowPrincipalOwing";
        case RequestType_ShowHomeValue:
            return "ShowHomeValue";
        case RequestType_AskYearRange:
            return "AskYearRange";
        case RequestType_AskYearOwing:
            return "AskYearOwing";
        case RequestType_AskPrincipalOrHomeValue:
            return "AskPrincipalOrHomeValue";
        default:
            assert(false);
            return NULL;
      }
  }

MortgageCalculatorInputDataJSON::TypeLastRequest::TypeLastRequest(void)
  {
  }

MortgageCalculatorInputDataJSON::TypeLastRequest::TypeLastRequest(const TypeLastRequest &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

MortgageCalculatorInputDataJSON::TypeLastRequest::TypeLastRequest(TypeLastRequestKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool MortgageCalculatorInputDataJSON::TypeLastRequest::operator==(const TypeLastRequest &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool MortgageCalculatorInputDataJSON::TypeLastRequest::operator!=(const TypeLastRequest &other) const
  {
    return !(operator==(other));
  }

bool MortgageCalculatorInputDataJSON::TypeLastRequest::operator<(const TypeLastRequest &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool MortgageCalculatorInputDataJSON::TypeLastRequest::operator>(const TypeLastRequest &other) const
  {
    return other.operator<(*this);
  }

bool MortgageCalculatorInputDataJSON::TypeLastRequest::operator>=(const TypeLastRequest &other) const
  {
    return !(operator<(other));
  }

bool MortgageCalculatorInputDataJSON::TypeLastRequest::operator<=(const TypeLastRequest &other) const
  {
    return !(other.operator<(*this));
  }

MortgageCalculatorInputDataJSON::TypeLastRequestKnownValues MortgageCalculatorInputDataJSON::stringToLastRequest(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strncmp(&(chars[1]), "sk", 2) == 0)
              {
                switch ((unsigned char)(chars[3]))
                  {
                    case 'A':
                        if (strcmp(&(chars[4]), "mortization") == 0)
                            return LastRequest_AskAmortization;
                        break;
                    case 'D':
                        if (strcmp(&(chars[4]), "ownPayment") == 0)
                            return LastRequest_AskDownPayment;
                        break;
                    case 'H':
                        if (strcmp(&(chars[4]), "omeValue") == 0)
                            return LastRequest_AskHomeValue;
                        break;
                    case 'I':
                        if (strcmp(&(chars[4]), "nterestRate") == 0)
                            return LastRequest_AskInterestRate;
                        break;
                    case 'M':
                        if (strcmp(&(chars[4]), "onthlyPayment") == 0)
                            return LastRequest_AskMonthlyPayment;
                        break;
                    case 'P':
                        if (strncmp(&(chars[4]), "rincipal", 8) == 0)
                          {
                            switch ((unsigned char)(chars[12]))
                              {
                                case 0:
                                    return LastRequest_AskPrincipal;
                                case 'O':
                                    if (strcmp(&(chars[13]), "rHomeValue") == 0)
                                        return LastRequest_AskPrincipalOrHomeValue;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'Y':
                        if (strncmp(&(chars[4]), "ear", 3) == 0)
                          {
                            switch ((unsigned char)(chars[7]))
                              {
                                case 'O':
                                    if (strcmp(&(chars[8]), "wing") == 0)
                                        return LastRequest_AskYearOwing;
                                    break;
                                case 'R':
                                    if (strcmp(&(chars[8]), "ange") == 0)
                                        return LastRequest_AskYearRange;
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
        case 'S':
            if (strncmp(&(chars[1]), "how", 3) == 0)
              {
                switch ((unsigned char)(chars[4]))
                  {
                    case 'A':
                        if (strcmp(&(chars[5]), "mortization") == 0)
                            return LastRequest_ShowAmortization;
                        break;
                    case 'D':
                        if (strcmp(&(chars[5]), "ownPayment") == 0)
                            return LastRequest_ShowDownPayment;
                        break;
                    case 'H':
                        if (strcmp(&(chars[5]), "omeValue") == 0)
                            return LastRequest_ShowHomeValue;
                        break;
                    case 'I':
                        if (strcmp(&(chars[5]), "nterestRate") == 0)
                            return LastRequest_ShowInterestRate;
                        break;
                    case 'P':
                        switch ((unsigned char)(chars[5]))
                          {
                            case 'a':
                                if (strcmp(&(chars[6]), "yment") == 0)
                                    return LastRequest_ShowPayment;
                                break;
                            case 'r':
                                if (strncmp(&(chars[6]), "incipal", 7) == 0)
                                  {
                                    switch ((unsigned char)(chars[13]))
                                      {
                                        case 0:
                                            return LastRequest_ShowPrincipal;
                                        case 'O':
                                            if (strcmp(&(chars[14]), "wing") == 0)
                                                return LastRequest_ShowPrincipalOwing;
                                            break;
                                        case 'P':
                                            if (strcmp(&(chars[14]), "aid") == 0)
                                                return LastRequest_ShowPrincipalPaid;
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
                    case 'T':
                        if (strncmp(&(chars[5]), "otal", 4) == 0)
                          {
                            switch ((unsigned char)(chars[9]))
                              {
                                case 'I':
                                    if (strcmp(&(chars[10]), "nterest") == 0)
                                        return LastRequest_ShowTotalInterest;
                                    break;
                                case 'P':
                                    if (strcmp(&(chars[10]), "aid") == 0)
                                        return LastRequest_ShowTotalPaid;
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
        case 'U':
            if (strcmp(&(chars[1]), "nknown") == 0)
                return LastRequest_Unknown;
            break;
        default:
            break;
      }
    return LastRequest__none;
  }

const char *MortgageCalculatorInputDataJSON::stringFromLastRequest(TypeLastRequestKnownValues the_enum)
  {
    switch (the_enum)
      {
        case LastRequest_Unknown:
            return "Unknown";
        case LastRequest_AskPrincipal:
            return "AskPrincipal";
        case LastRequest_AskInterestRate:
            return "AskInterestRate";
        case LastRequest_AskAmortization:
            return "AskAmortization";
        case LastRequest_AskHomeValue:
            return "AskHomeValue";
        case LastRequest_AskDownPayment:
            return "AskDownPayment";
        case LastRequest_AskMonthlyPayment:
            return "AskMonthlyPayment";
        case LastRequest_ShowPayment:
            return "ShowPayment";
        case LastRequest_ShowTotalInterest:
            return "ShowTotalInterest";
        case LastRequest_ShowTotalPaid:
            return "ShowTotalPaid";
        case LastRequest_ShowDownPayment:
            return "ShowDownPayment";
        case LastRequest_ShowInterestRate:
            return "ShowInterestRate";
        case LastRequest_ShowAmortization:
            return "ShowAmortization";
        case LastRequest_ShowPrincipalPaid:
            return "ShowPrincipalPaid";
        case LastRequest_ShowPrincipal:
            return "ShowPrincipal";
        case LastRequest_ShowPrincipalOwing:
            return "ShowPrincipalOwing";
        case LastRequest_ShowHomeValue:
            return "ShowHomeValue";
        case LastRequest_AskYearRange:
            return "AskYearRange";
        case LastRequest_AskYearOwing:
            return "AskYearOwing";
        case LastRequest_AskPrincipalOrHomeValue:
            return "AskPrincipalOrHomeValue";
        default:
            assert(false);
            return NULL;
      }
  }

MortgageCalculatorInputDataJSON::TypePaymentFrequency::TypePaymentFrequency(void)
  {
  }

MortgageCalculatorInputDataJSON::TypePaymentFrequency::TypePaymentFrequency(const TypePaymentFrequency &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

MortgageCalculatorInputDataJSON::TypePaymentFrequency::TypePaymentFrequency(TypePaymentFrequencyKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool MortgageCalculatorInputDataJSON::TypePaymentFrequency::operator==(const TypePaymentFrequency &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool MortgageCalculatorInputDataJSON::TypePaymentFrequency::operator!=(const TypePaymentFrequency &other) const
  {
    return !(operator==(other));
  }

bool MortgageCalculatorInputDataJSON::TypePaymentFrequency::operator<(const TypePaymentFrequency &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool MortgageCalculatorInputDataJSON::TypePaymentFrequency::operator>(const TypePaymentFrequency &other) const
  {
    return other.operator<(*this);
  }

bool MortgageCalculatorInputDataJSON::TypePaymentFrequency::operator>=(const TypePaymentFrequency &other) const
  {
    return !(operator<(other));
  }

bool MortgageCalculatorInputDataJSON::TypePaymentFrequency::operator<=(const TypePaymentFrequency &other) const
  {
    return !(other.operator<(*this));
  }

MortgageCalculatorInputDataJSON::TypePaymentFrequencyKnownValues MortgageCalculatorInputDataJSON::stringToPaymentFrequency(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'b':
            if (strcmp(&(chars[1]), "iweekly") == 0)
                return PaymentFrequency_biweekly;
            break;
        case 'm':
            if (strcmp(&(chars[1]), "onthly") == 0)
                return PaymentFrequency_monthly;
            break;
        case 'w':
            if (strcmp(&(chars[1]), "eekly") == 0)
                return PaymentFrequency_weekly;
            break;
        default:
            break;
      }
    return PaymentFrequency__none;
  }

const char *MortgageCalculatorInputDataJSON::stringFromPaymentFrequency(TypePaymentFrequencyKnownValues the_enum)
  {
    switch (the_enum)
      {
        case PaymentFrequency_monthly:
            return "monthly";
        case PaymentFrequency_biweekly:
            return "biweekly";
        case PaymentFrequency_weekly:
            return "weekly";
        default:
            assert(false);
            return NULL;
      }
  }

MortgageCalculatorInputDataJSON::MortgageCalculatorInputDataJSON(const MortgageCalculatorInputDataJSON &)
  {
    assert(false);
  }

MortgageCalculatorInputDataJSON &MortgageCalculatorInputDataJSON::operator=(const MortgageCalculatorInputDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MortgageCalculatorInputDataJSON::fromJSONCalculationType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CalculationType of MortgageCalculatorInputDataJSON is not a string.");
    TypeCalculationType the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "mortizationPeriod") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = CalculationType_AmortizationPeriod;
                    goto open_enum_is_done;
                  }
            break;
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "ownPayment") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = CalculationType_DownPayment;
                    goto open_enum_is_done;
                  }
            break;
        case 'H':
            if (strcmp(&(json_string->getData()[1]), "omeValue") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = CalculationType_HomeValue;
                    goto open_enum_is_done;
                  }
            break;
        case 'I':
            if (strcmp(&(json_string->getData()[1]), "nterestRate") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = CalculationType_InterestRate;
                    goto open_enum_is_done;
                  }
            break;
        case 'P':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "yment") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = CalculationType_Payment;
                            goto open_enum_is_done;
                          }
                    break;
                case 'r':
                    if (strncmp(&(json_string->getData()[2]), "incipal", 7) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[9]))
                          {
                            case 0:
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = CalculationType_Principal;
                                    goto open_enum_is_done;
                                  }
                            case 'O':
                                if (strcmp(&(json_string->getData()[10]), "wing") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = CalculationType_PrincipalOwing;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'P':
                                if (strcmp(&(json_string->getData()[10]), "aid") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = CalculationType_PrincipalPaid;
                                        goto open_enum_is_done;
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
        case 'T':
            if (strncmp(&(json_string->getData()[1]), "otal", 4) == 0)
              {
                switch ((unsigned char)(json_string->getData()[5]))
                  {
                    case 'I':
                        if (strcmp(&(json_string->getData()[6]), "nterest") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = CalculationType_TotalInterest;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'P':
                        if (strcmp(&(json_string->getData()[6]), "aid") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = CalculationType_TotalPaid;
                                goto open_enum_is_done;
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
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setCalculationType(the_open_enum);
  }

void MortgageCalculatorInputDataJSON::fromJSONCalculationTypeIsNew(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field CalculationTypeIsNew of MortgageCalculatorInputDataJSON is not true for false.");
          }
      }
    setCalculationTypeIsNew(the_bool);
  }

void MortgageCalculatorInputDataJSON::fromJSONFutureCalculationType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field FutureCalculationType of MortgageCalculatorInputDataJSON is not a string.");
    TypeFutureCalculationType the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'P':
            if (strncmp(&(json_string->getData()[1]), "rincipal", 8) == 0)
              {
                switch ((unsigned char)(json_string->getData()[9]))
                  {
                    case 'O':
                        if (strcmp(&(json_string->getData()[10]), "wing") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = FutureCalculationType_PrincipalOwing;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'P':
                        if (strcmp(&(json_string->getData()[10]), "aid") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = FutureCalculationType_PrincipalPaid;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'T':
            if (strncmp(&(json_string->getData()[1]), "otal", 4) == 0)
              {
                switch ((unsigned char)(json_string->getData()[5]))
                  {
                    case 'I':
                        if (strcmp(&(json_string->getData()[6]), "nterest") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = FutureCalculationType_TotalInterest;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'P':
                        if (strcmp(&(json_string->getData()[6]), "aid") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = FutureCalculationType_TotalPaid;
                                goto open_enum_is_done;
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
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setFutureCalculationType(the_open_enum);
  }

void MortgageCalculatorInputDataJSON::fromJSONRequestType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field RequestType of MortgageCalculatorInputDataJSON is not a string.");
    TypeRequestType the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strncmp(&(json_string->getData()[1]), "sk", 2) == 0)
              {
                switch ((unsigned char)(json_string->getData()[3]))
                  {
                    case 'A':
                        if (strcmp(&(json_string->getData()[4]), "mortization") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = RequestType_AskAmortization;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'D':
                        if (strcmp(&(json_string->getData()[4]), "ownPayment") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = RequestType_AskDownPayment;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'H':
                        if (strcmp(&(json_string->getData()[4]), "omeValue") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = RequestType_AskHomeValue;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'I':
                        if (strcmp(&(json_string->getData()[4]), "nterestRate") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = RequestType_AskInterestRate;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'M':
                        if (strcmp(&(json_string->getData()[4]), "onthlyPayment") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = RequestType_AskMonthlyPayment;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'P':
                        if (strncmp(&(json_string->getData()[4]), "rincipal", 8) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[12]))
                              {
                                case 0:
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = RequestType_AskPrincipal;
                                        goto open_enum_is_done;
                                      }
                                case 'O':
                                    if (strcmp(&(json_string->getData()[13]), "rHomeValue") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = RequestType_AskPrincipalOrHomeValue;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'Y':
                        if (strncmp(&(json_string->getData()[4]), "ear", 3) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[7]))
                              {
                                case 'O':
                                    if (strcmp(&(json_string->getData()[8]), "wing") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = RequestType_AskYearOwing;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'R':
                                    if (strcmp(&(json_string->getData()[8]), "ange") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = RequestType_AskYearRange;
                                            goto open_enum_is_done;
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
            break;
        case 'S':
            if (strncmp(&(json_string->getData()[1]), "how", 3) == 0)
              {
                switch ((unsigned char)(json_string->getData()[4]))
                  {
                    case 'A':
                        if (strcmp(&(json_string->getData()[5]), "mortization") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = RequestType_ShowAmortization;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'D':
                        if (strcmp(&(json_string->getData()[5]), "ownPayment") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = RequestType_ShowDownPayment;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'H':
                        if (strcmp(&(json_string->getData()[5]), "omeValue") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = RequestType_ShowHomeValue;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'I':
                        if (strcmp(&(json_string->getData()[5]), "nterestRate") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = RequestType_ShowInterestRate;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'P':
                        switch ((unsigned char)(json_string->getData()[5]))
                          {
                            case 'a':
                                if (strcmp(&(json_string->getData()[6]), "yment") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = RequestType_ShowPayment;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'r':
                                if (strncmp(&(json_string->getData()[6]), "incipal", 7) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[13]))
                                      {
                                        case 0:
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = RequestType_ShowPrincipal;
                                                goto open_enum_is_done;
                                              }
                                        case 'O':
                                            if (strcmp(&(json_string->getData()[14]), "wing") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = RequestType_ShowPrincipalOwing;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'P':
                                            if (strcmp(&(json_string->getData()[14]), "aid") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = RequestType_ShowPrincipalPaid;
                                                    goto open_enum_is_done;
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
                    case 'T':
                        if (strncmp(&(json_string->getData()[5]), "otal", 4) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[9]))
                              {
                                case 'I':
                                    if (strcmp(&(json_string->getData()[10]), "nterest") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = RequestType_ShowTotalInterest;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'P':
                                    if (strcmp(&(json_string->getData()[10]), "aid") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = RequestType_ShowTotalPaid;
                                            goto open_enum_is_done;
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
            break;
        case 'U':
            if (strcmp(&(json_string->getData()[1]), "nknown") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = RequestType_Unknown;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setRequestType(the_open_enum);
  }

void MortgageCalculatorInputDataJSON::fromJSONLastRequest(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LastRequest of MortgageCalculatorInputDataJSON is not a string.");
    TypeLastRequest the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strncmp(&(json_string->getData()[1]), "sk", 2) == 0)
              {
                switch ((unsigned char)(json_string->getData()[3]))
                  {
                    case 'A':
                        if (strcmp(&(json_string->getData()[4]), "mortization") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = LastRequest_AskAmortization;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'D':
                        if (strcmp(&(json_string->getData()[4]), "ownPayment") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = LastRequest_AskDownPayment;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'H':
                        if (strcmp(&(json_string->getData()[4]), "omeValue") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = LastRequest_AskHomeValue;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'I':
                        if (strcmp(&(json_string->getData()[4]), "nterestRate") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = LastRequest_AskInterestRate;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'M':
                        if (strcmp(&(json_string->getData()[4]), "onthlyPayment") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = LastRequest_AskMonthlyPayment;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'P':
                        if (strncmp(&(json_string->getData()[4]), "rincipal", 8) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[12]))
                              {
                                case 0:
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = LastRequest_AskPrincipal;
                                        goto open_enum_is_done;
                                      }
                                case 'O':
                                    if (strcmp(&(json_string->getData()[13]), "rHomeValue") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = LastRequest_AskPrincipalOrHomeValue;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'Y':
                        if (strncmp(&(json_string->getData()[4]), "ear", 3) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[7]))
                              {
                                case 'O':
                                    if (strcmp(&(json_string->getData()[8]), "wing") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = LastRequest_AskYearOwing;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'R':
                                    if (strcmp(&(json_string->getData()[8]), "ange") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = LastRequest_AskYearRange;
                                            goto open_enum_is_done;
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
            break;
        case 'S':
            if (strncmp(&(json_string->getData()[1]), "how", 3) == 0)
              {
                switch ((unsigned char)(json_string->getData()[4]))
                  {
                    case 'A':
                        if (strcmp(&(json_string->getData()[5]), "mortization") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = LastRequest_ShowAmortization;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'D':
                        if (strcmp(&(json_string->getData()[5]), "ownPayment") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = LastRequest_ShowDownPayment;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'H':
                        if (strcmp(&(json_string->getData()[5]), "omeValue") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = LastRequest_ShowHomeValue;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'I':
                        if (strcmp(&(json_string->getData()[5]), "nterestRate") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = LastRequest_ShowInterestRate;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'P':
                        switch ((unsigned char)(json_string->getData()[5]))
                          {
                            case 'a':
                                if (strcmp(&(json_string->getData()[6]), "yment") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = LastRequest_ShowPayment;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'r':
                                if (strncmp(&(json_string->getData()[6]), "incipal", 7) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[13]))
                                      {
                                        case 0:
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = LastRequest_ShowPrincipal;
                                                goto open_enum_is_done;
                                              }
                                        case 'O':
                                            if (strcmp(&(json_string->getData()[14]), "wing") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = LastRequest_ShowPrincipalOwing;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'P':
                                            if (strcmp(&(json_string->getData()[14]), "aid") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = LastRequest_ShowPrincipalPaid;
                                                    goto open_enum_is_done;
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
                    case 'T':
                        if (strncmp(&(json_string->getData()[5]), "otal", 4) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[9]))
                              {
                                case 'I':
                                    if (strcmp(&(json_string->getData()[10]), "nterest") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = LastRequest_ShowTotalInterest;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'P':
                                    if (strcmp(&(json_string->getData()[10]), "aid") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = LastRequest_ShowTotalPaid;
                                            goto open_enum_is_done;
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
            break;
        case 'U':
            if (strcmp(&(json_string->getData()[1]), "nknown") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = LastRequest_Unknown;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setLastRequest(the_open_enum);
  }

void MortgageCalculatorInputDataJSON::fromJSONInterestRate(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field InterestRate of MortgageCalculatorInputDataJSON is not a number.");
          }
      }
    setInterestRateText(the_rational_text);
  }

void MortgageCalculatorInputDataJSON::fromJSONInterestRateIsNew(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field InterestRateIsNew of MortgageCalculatorInputDataJSON is not true for false.");
          }
      }
    setInterestRateIsNew(the_bool);
  }

void MortgageCalculatorInputDataJSON::fromJSONMortgagePrincipal(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MoneyJSON *convert_classy = MoneyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMortgagePrincipal(convert_classy);
    convert_classy->remove_reference();
  }

void MortgageCalculatorInputDataJSON::fromJSONMortgagePrincipalIsNew(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field MortgagePrincipalIsNew of MortgageCalculatorInputDataJSON is not true for false.");
          }
      }
    setMortgagePrincipalIsNew(the_bool);
  }

void MortgageCalculatorInputDataJSON::fromJSONPrincipalHomeValueAmbiguous(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field PrincipalHomeValueAmbiguous of MortgageCalculatorInputDataJSON is not true for false.");
          }
      }
    setPrincipalHomeValueAmbiguous(the_bool);
  }

void MortgageCalculatorInputDataJSON::fromJSONPrincipalHomeValueAmbiguousConfirmed(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field PrincipalHomeValueAmbiguousConfirmed of MortgageCalculatorInputDataJSON is not true for false.");
          }
      }
    setPrincipalHomeValueAmbiguousConfirmed(the_bool);
  }

void MortgageCalculatorInputDataJSON::fromJSONNumMonths(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field NumMonths of MortgageCalculatorInputDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field NumMonths of MortgageCalculatorInputDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setNumMonths(extracted_integer);
  }

void MortgageCalculatorInputDataJSON::fromJSONNumMonthsIsNew(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field NumMonthsIsNew of MortgageCalculatorInputDataJSON is not true for false.");
          }
      }
    setNumMonthsIsNew(the_bool);
  }

void MortgageCalculatorInputDataJSON::fromJSONYearStart(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field YearStart of MortgageCalculatorInputDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field YearStart of MortgageCalculatorInputDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setYearStart(extracted_integer);
  }

void MortgageCalculatorInputDataJSON::fromJSONYearEnd(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field YearEnd of MortgageCalculatorInputDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field YearEnd of MortgageCalculatorInputDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setYearEnd(extracted_integer);
  }

void MortgageCalculatorInputDataJSON::fromJSONYearStartEndIsNew(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field YearStartEndIsNew of MortgageCalculatorInputDataJSON is not true for false.");
          }
      }
    setYearStartEndIsNew(the_bool);
  }

void MortgageCalculatorInputDataJSON::fromJSONYearEndOwing(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field YearEndOwing of MortgageCalculatorInputDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field YearEndOwing of MortgageCalculatorInputDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setYearEndOwing(extracted_integer);
  }

void MortgageCalculatorInputDataJSON::fromJSONYearEndOwingIsNew(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field YearEndOwingIsNew of MortgageCalculatorInputDataJSON is not true for false.");
          }
      }
    setYearEndOwingIsNew(the_bool);
  }

void MortgageCalculatorInputDataJSON::fromJSONDownPaymentPercent(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field DownPaymentPercent of MortgageCalculatorInputDataJSON is not a number.");
          }
      }
    setDownPaymentPercentText(the_rational_text);
  }

void MortgageCalculatorInputDataJSON::fromJSONDownPaymentPercentIsNew(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field DownPaymentPercentIsNew of MortgageCalculatorInputDataJSON is not true for false.");
          }
      }
    setDownPaymentPercentIsNew(the_bool);
  }

void MortgageCalculatorInputDataJSON::fromJSONDownPayment(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MoneyJSON *convert_classy = MoneyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDownPayment(convert_classy);
    convert_classy->remove_reference();
  }

void MortgageCalculatorInputDataJSON::fromJSONDownPaymentIsNew(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field DownPaymentIsNew of MortgageCalculatorInputDataJSON is not true for false.");
          }
      }
    setDownPaymentIsNew(the_bool);
  }

void MortgageCalculatorInputDataJSON::fromJSONHomeValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MoneyJSON *convert_classy = MoneyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setHomeValue(convert_classy);
    convert_classy->remove_reference();
  }

void MortgageCalculatorInputDataJSON::fromJSONHomeValueIsNew(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field HomeValueIsNew of MortgageCalculatorInputDataJSON is not true for false.");
          }
      }
    setHomeValueIsNew(the_bool);
  }

void MortgageCalculatorInputDataJSON::fromJSONMaxPaymentAmount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MoneyJSON *convert_classy = MoneyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMaxPaymentAmount(convert_classy);
    convert_classy->remove_reference();
  }

void MortgageCalculatorInputDataJSON::fromJSONMaxPaymentAmountIsNew(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field MaxPaymentAmountIsNew of MortgageCalculatorInputDataJSON is not true for false.");
          }
      }
    setMaxPaymentAmountIsNew(the_bool);
  }

void MortgageCalculatorInputDataJSON::fromJSONDoNotKnow(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field DoNotKnow of MortgageCalculatorInputDataJSON is not true for false.");
          }
      }
    setDoNotKnow(the_bool);
  }

void MortgageCalculatorInputDataJSON::fromJSONWantToKnow(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field WantToKnow of MortgageCalculatorInputDataJSON is not true for false.");
          }
      }
    setWantToKnow(the_bool);
  }

void MortgageCalculatorInputDataJSON::fromJSONMortgageCalculatorStart(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field MortgageCalculatorStart of MortgageCalculatorInputDataJSON is not true for false.");
          }
      }
    setMortgageCalculatorStart(the_bool);
  }

void MortgageCalculatorInputDataJSON::fromJSONDefaultCurrency(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MoneyJSON *convert_classy = MoneyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDefaultCurrency(convert_classy);
    convert_classy->remove_reference();
  }

void MortgageCalculatorInputDataJSON::fromJSONUserConfused(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field UserConfused of MortgageCalculatorInputDataJSON is not true for false.");
          }
      }
    setUserConfused(the_bool);
  }

void MortgageCalculatorInputDataJSON::fromJSONPaymentFrequency(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PaymentFrequency of MortgageCalculatorInputDataJSON is not a string.");
    TypePaymentFrequency the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'b':
            if (strcmp(&(json_string->getData()[1]), "iweekly") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = PaymentFrequency_biweekly;
                    goto open_enum_is_done;
                  }
            break;
        case 'm':
            if (strcmp(&(json_string->getData()[1]), "onthly") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = PaymentFrequency_monthly;
                    goto open_enum_is_done;
                  }
            break;
        case 'w':
            if (strcmp(&(json_string->getData()[1]), "eekly") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = PaymentFrequency_weekly;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setPaymentFrequency(the_open_enum);
  }

MortgageCalculatorInputDataJSON::MortgageCalculatorInputDataJSON(void) :
        flagHasCalculationType(false),
        flagHasCalculationTypeIsNew(false),
        flagHasFutureCalculationType(false),
        flagHasRequestType(false),
        flagHasLastRequest(false),
        flagHasInterestRate(false),
        flagHasInterestRateIsNew(false),
        flagHasMortgagePrincipal(false),
        flagHasMortgagePrincipalIsNew(false),
        flagHasPrincipalHomeValueAmbiguous(false),
        flagHasPrincipalHomeValueAmbiguousConfirmed(false),
        flagHasNumMonths(false),
        flagHasNumMonthsIsNew(false),
        flagHasYearStart(false),
        flagHasYearEnd(false),
        flagHasYearStartEndIsNew(false),
        flagHasYearEndOwing(false),
        flagHasYearEndOwingIsNew(false),
        flagHasDownPaymentPercent(false),
        flagHasDownPaymentPercentIsNew(false),
        flagHasDownPayment(false),
        flagHasDownPaymentIsNew(false),
        flagHasHomeValue(false),
        flagHasHomeValueIsNew(false),
        flagHasMaxPaymentAmount(false),
        flagHasMaxPaymentAmountIsNew(false),
        flagHasDoNotKnow(false),
        flagHasWantToKnow(false),
        flagHasMortgageCalculatorStart(false),
        flagHasDefaultCurrency(false),
        flagHasUserConfused(false),
        flagHasPaymentFrequency(false)
  {
    extraIndex = create_string_index();
  }

MortgageCalculatorInputDataJSON::~MortgageCalculatorInputDataJSON(void)
  {
    if (flagHasMortgagePrincipal)
      {
        storeMortgagePrincipal->remove_reference();
      }
    if (flagHasDownPayment)
      {
        storeDownPayment->remove_reference();
      }
    if (flagHasHomeValue)
      {
        storeHomeValue->remove_reference();
      }
    if (flagHasMaxPaymentAmount)
      {
        storeMaxPaymentAmount->remove_reference();
      }
    if (flagHasDefaultCurrency)
      {
        storeDefaultCurrency->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool MortgageCalculatorInputDataJSON::hasCalculationType(void) const
  {
    return flagHasCalculationType;
  }

MortgageCalculatorInputDataJSON::TypeCalculationType MortgageCalculatorInputDataJSON::getCalculationType(void)
  {
    assert(flagHasCalculationType);
    return storeCalculationType;
  }

const MortgageCalculatorInputDataJSON::TypeCalculationType MortgageCalculatorInputDataJSON::getCalculationType(void) const
  {
    assert(flagHasCalculationType);
    return storeCalculationType;
  }

const char *MortgageCalculatorInputDataJSON::getCalculationTypeAsChars(void) const
  {
    TypeCalculationType result = getCalculationType();
    if (result.in_known_list)
        return stringFromCalculationType(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string MortgageCalculatorInputDataJSON::getCalculationTypeAsString(void) const
  {
    return getCalculationTypeAsChars();
  }

bool MortgageCalculatorInputDataJSON::hasCalculationTypeIsNew(void) const
  {
    return flagHasCalculationTypeIsNew;
  }

bool MortgageCalculatorInputDataJSON::getCalculationTypeIsNew(void)
  {
    assert(flagHasCalculationTypeIsNew);
    return storeCalculationTypeIsNew;
  }

const bool MortgageCalculatorInputDataJSON::getCalculationTypeIsNew(void) const
  {
    assert(flagHasCalculationTypeIsNew);
    return storeCalculationTypeIsNew;
  }

bool MortgageCalculatorInputDataJSON::hasFutureCalculationType(void) const
  {
    return flagHasFutureCalculationType;
  }

MortgageCalculatorInputDataJSON::TypeFutureCalculationType MortgageCalculatorInputDataJSON::getFutureCalculationType(void)
  {
    assert(flagHasFutureCalculationType);
    return storeFutureCalculationType;
  }

const MortgageCalculatorInputDataJSON::TypeFutureCalculationType MortgageCalculatorInputDataJSON::getFutureCalculationType(void) const
  {
    assert(flagHasFutureCalculationType);
    return storeFutureCalculationType;
  }

const char *MortgageCalculatorInputDataJSON::getFutureCalculationTypeAsChars(void) const
  {
    TypeFutureCalculationType result = getFutureCalculationType();
    if (result.in_known_list)
        return stringFromFutureCalculationType(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string MortgageCalculatorInputDataJSON::getFutureCalculationTypeAsString(void) const
  {
    return getFutureCalculationTypeAsChars();
  }

bool MortgageCalculatorInputDataJSON::hasRequestType(void) const
  {
    return flagHasRequestType;
  }

MortgageCalculatorInputDataJSON::TypeRequestType MortgageCalculatorInputDataJSON::getRequestType(void)
  {
    assert(flagHasRequestType);
    return storeRequestType;
  }

const MortgageCalculatorInputDataJSON::TypeRequestType MortgageCalculatorInputDataJSON::getRequestType(void) const
  {
    assert(flagHasRequestType);
    return storeRequestType;
  }

const char *MortgageCalculatorInputDataJSON::getRequestTypeAsChars(void) const
  {
    TypeRequestType result = getRequestType();
    if (result.in_known_list)
        return stringFromRequestType(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string MortgageCalculatorInputDataJSON::getRequestTypeAsString(void) const
  {
    return getRequestTypeAsChars();
  }

bool MortgageCalculatorInputDataJSON::hasLastRequest(void) const
  {
    return flagHasLastRequest;
  }

MortgageCalculatorInputDataJSON::TypeLastRequest MortgageCalculatorInputDataJSON::getLastRequest(void)
  {
    assert(flagHasLastRequest);
    return storeLastRequest;
  }

const MortgageCalculatorInputDataJSON::TypeLastRequest MortgageCalculatorInputDataJSON::getLastRequest(void) const
  {
    assert(flagHasLastRequest);
    return storeLastRequest;
  }

const char *MortgageCalculatorInputDataJSON::getLastRequestAsChars(void) const
  {
    TypeLastRequest result = getLastRequest();
    if (result.in_known_list)
        return stringFromLastRequest(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string MortgageCalculatorInputDataJSON::getLastRequestAsString(void) const
  {
    return getLastRequestAsChars();
  }

bool MortgageCalculatorInputDataJSON::hasInterestRate(void) const
  {
    return flagHasInterestRate;
  }

double MortgageCalculatorInputDataJSON::getInterestRate(void)
  {
    assert(flagHasInterestRate);
    if (textStoreInterestRate != "")
      {
        return atof(textStoreInterestRate.c_str());
      }
    return storeInterestRate;
  }

const double MortgageCalculatorInputDataJSON::getInterestRate(void) const
  {
    assert(flagHasInterestRate);
    if (textStoreInterestRate != "")
      {
        return atof(textStoreInterestRate.c_str());
      }
    return storeInterestRate;
  }

std::string MortgageCalculatorInputDataJSON::getInterestRateAsText(void) const
  {
    assert(flagHasInterestRate);
    if (textStoreInterestRate == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeInterestRate);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreInterestRate);
      }
  }

bool MortgageCalculatorInputDataJSON::hasInterestRateIsNew(void) const
  {
    return flagHasInterestRateIsNew;
  }

bool MortgageCalculatorInputDataJSON::getInterestRateIsNew(void)
  {
    assert(flagHasInterestRateIsNew);
    return storeInterestRateIsNew;
  }

const bool MortgageCalculatorInputDataJSON::getInterestRateIsNew(void) const
  {
    assert(flagHasInterestRateIsNew);
    return storeInterestRateIsNew;
  }

bool MortgageCalculatorInputDataJSON::hasMortgagePrincipal(void) const
  {
    return flagHasMortgagePrincipal;
  }

MoneyJSON * MortgageCalculatorInputDataJSON::getMortgagePrincipal(void)
  {
    assert(flagHasMortgagePrincipal);
    return storeMortgagePrincipal;
  }

const MoneyJSON * MortgageCalculatorInputDataJSON::getMortgagePrincipal(void) const
  {
    assert(flagHasMortgagePrincipal);
    return storeMortgagePrincipal;
  }

bool MortgageCalculatorInputDataJSON::hasMortgagePrincipalIsNew(void) const
  {
    return flagHasMortgagePrincipalIsNew;
  }

bool MortgageCalculatorInputDataJSON::getMortgagePrincipalIsNew(void)
  {
    assert(flagHasMortgagePrincipalIsNew);
    return storeMortgagePrincipalIsNew;
  }

const bool MortgageCalculatorInputDataJSON::getMortgagePrincipalIsNew(void) const
  {
    assert(flagHasMortgagePrincipalIsNew);
    return storeMortgagePrincipalIsNew;
  }

bool MortgageCalculatorInputDataJSON::hasPrincipalHomeValueAmbiguous(void) const
  {
    return flagHasPrincipalHomeValueAmbiguous;
  }

bool MortgageCalculatorInputDataJSON::getPrincipalHomeValueAmbiguous(void)
  {
    assert(flagHasPrincipalHomeValueAmbiguous);
    return storePrincipalHomeValueAmbiguous;
  }

const bool MortgageCalculatorInputDataJSON::getPrincipalHomeValueAmbiguous(void) const
  {
    assert(flagHasPrincipalHomeValueAmbiguous);
    return storePrincipalHomeValueAmbiguous;
  }

bool MortgageCalculatorInputDataJSON::hasPrincipalHomeValueAmbiguousConfirmed(void) const
  {
    return flagHasPrincipalHomeValueAmbiguousConfirmed;
  }

bool MortgageCalculatorInputDataJSON::getPrincipalHomeValueAmbiguousConfirmed(void)
  {
    assert(flagHasPrincipalHomeValueAmbiguousConfirmed);
    return storePrincipalHomeValueAmbiguousConfirmed;
  }

const bool MortgageCalculatorInputDataJSON::getPrincipalHomeValueAmbiguousConfirmed(void) const
  {
    assert(flagHasPrincipalHomeValueAmbiguousConfirmed);
    return storePrincipalHomeValueAmbiguousConfirmed;
  }

bool MortgageCalculatorInputDataJSON::hasNumMonths(void) const
  {
    return flagHasNumMonths;
  }

OInteger MortgageCalculatorInputDataJSON::getNumMonths(void)
  {
    assert(flagHasNumMonths);
    return storeNumMonths;
  }

const OInteger MortgageCalculatorInputDataJSON::getNumMonths(void) const
  {
    assert(flagHasNumMonths);
    return storeNumMonths;
  }

bool MortgageCalculatorInputDataJSON::hasNumMonthsIsNew(void) const
  {
    return flagHasNumMonthsIsNew;
  }

bool MortgageCalculatorInputDataJSON::getNumMonthsIsNew(void)
  {
    assert(flagHasNumMonthsIsNew);
    return storeNumMonthsIsNew;
  }

const bool MortgageCalculatorInputDataJSON::getNumMonthsIsNew(void) const
  {
    assert(flagHasNumMonthsIsNew);
    return storeNumMonthsIsNew;
  }

bool MortgageCalculatorInputDataJSON::hasYearStart(void) const
  {
    return flagHasYearStart;
  }

OInteger MortgageCalculatorInputDataJSON::getYearStart(void)
  {
    assert(flagHasYearStart);
    return storeYearStart;
  }

const OInteger MortgageCalculatorInputDataJSON::getYearStart(void) const
  {
    assert(flagHasYearStart);
    return storeYearStart;
  }

bool MortgageCalculatorInputDataJSON::hasYearEnd(void) const
  {
    return flagHasYearEnd;
  }

OInteger MortgageCalculatorInputDataJSON::getYearEnd(void)
  {
    assert(flagHasYearEnd);
    return storeYearEnd;
  }

const OInteger MortgageCalculatorInputDataJSON::getYearEnd(void) const
  {
    assert(flagHasYearEnd);
    return storeYearEnd;
  }

bool MortgageCalculatorInputDataJSON::hasYearStartEndIsNew(void) const
  {
    return flagHasYearStartEndIsNew;
  }

bool MortgageCalculatorInputDataJSON::getYearStartEndIsNew(void)
  {
    assert(flagHasYearStartEndIsNew);
    return storeYearStartEndIsNew;
  }

const bool MortgageCalculatorInputDataJSON::getYearStartEndIsNew(void) const
  {
    assert(flagHasYearStartEndIsNew);
    return storeYearStartEndIsNew;
  }

bool MortgageCalculatorInputDataJSON::hasYearEndOwing(void) const
  {
    return flagHasYearEndOwing;
  }

OInteger MortgageCalculatorInputDataJSON::getYearEndOwing(void)
  {
    assert(flagHasYearEndOwing);
    return storeYearEndOwing;
  }

const OInteger MortgageCalculatorInputDataJSON::getYearEndOwing(void) const
  {
    assert(flagHasYearEndOwing);
    return storeYearEndOwing;
  }

bool MortgageCalculatorInputDataJSON::hasYearEndOwingIsNew(void) const
  {
    return flagHasYearEndOwingIsNew;
  }

bool MortgageCalculatorInputDataJSON::getYearEndOwingIsNew(void)
  {
    assert(flagHasYearEndOwingIsNew);
    return storeYearEndOwingIsNew;
  }

const bool MortgageCalculatorInputDataJSON::getYearEndOwingIsNew(void) const
  {
    assert(flagHasYearEndOwingIsNew);
    return storeYearEndOwingIsNew;
  }

bool MortgageCalculatorInputDataJSON::hasDownPaymentPercent(void) const
  {
    return flagHasDownPaymentPercent;
  }

double MortgageCalculatorInputDataJSON::getDownPaymentPercent(void)
  {
    assert(flagHasDownPaymentPercent);
    if (textStoreDownPaymentPercent != "")
      {
        return atof(textStoreDownPaymentPercent.c_str());
      }
    return storeDownPaymentPercent;
  }

const double MortgageCalculatorInputDataJSON::getDownPaymentPercent(void) const
  {
    assert(flagHasDownPaymentPercent);
    if (textStoreDownPaymentPercent != "")
      {
        return atof(textStoreDownPaymentPercent.c_str());
      }
    return storeDownPaymentPercent;
  }

std::string MortgageCalculatorInputDataJSON::getDownPaymentPercentAsText(void) const
  {
    assert(flagHasDownPaymentPercent);
    if (textStoreDownPaymentPercent == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeDownPaymentPercent);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreDownPaymentPercent);
      }
  }

bool MortgageCalculatorInputDataJSON::hasDownPaymentPercentIsNew(void) const
  {
    return flagHasDownPaymentPercentIsNew;
  }

bool MortgageCalculatorInputDataJSON::getDownPaymentPercentIsNew(void)
  {
    assert(flagHasDownPaymentPercentIsNew);
    return storeDownPaymentPercentIsNew;
  }

const bool MortgageCalculatorInputDataJSON::getDownPaymentPercentIsNew(void) const
  {
    assert(flagHasDownPaymentPercentIsNew);
    return storeDownPaymentPercentIsNew;
  }

bool MortgageCalculatorInputDataJSON::hasDownPayment(void) const
  {
    return flagHasDownPayment;
  }

MoneyJSON * MortgageCalculatorInputDataJSON::getDownPayment(void)
  {
    assert(flagHasDownPayment);
    return storeDownPayment;
  }

const MoneyJSON * MortgageCalculatorInputDataJSON::getDownPayment(void) const
  {
    assert(flagHasDownPayment);
    return storeDownPayment;
  }

bool MortgageCalculatorInputDataJSON::hasDownPaymentIsNew(void) const
  {
    return flagHasDownPaymentIsNew;
  }

bool MortgageCalculatorInputDataJSON::getDownPaymentIsNew(void)
  {
    assert(flagHasDownPaymentIsNew);
    return storeDownPaymentIsNew;
  }

const bool MortgageCalculatorInputDataJSON::getDownPaymentIsNew(void) const
  {
    assert(flagHasDownPaymentIsNew);
    return storeDownPaymentIsNew;
  }

bool MortgageCalculatorInputDataJSON::hasHomeValue(void) const
  {
    return flagHasHomeValue;
  }

MoneyJSON * MortgageCalculatorInputDataJSON::getHomeValue(void)
  {
    assert(flagHasHomeValue);
    return storeHomeValue;
  }

const MoneyJSON * MortgageCalculatorInputDataJSON::getHomeValue(void) const
  {
    assert(flagHasHomeValue);
    return storeHomeValue;
  }

bool MortgageCalculatorInputDataJSON::hasHomeValueIsNew(void) const
  {
    return flagHasHomeValueIsNew;
  }

bool MortgageCalculatorInputDataJSON::getHomeValueIsNew(void)
  {
    assert(flagHasHomeValueIsNew);
    return storeHomeValueIsNew;
  }

const bool MortgageCalculatorInputDataJSON::getHomeValueIsNew(void) const
  {
    assert(flagHasHomeValueIsNew);
    return storeHomeValueIsNew;
  }

bool MortgageCalculatorInputDataJSON::hasMaxPaymentAmount(void) const
  {
    return flagHasMaxPaymentAmount;
  }

MoneyJSON * MortgageCalculatorInputDataJSON::getMaxPaymentAmount(void)
  {
    assert(flagHasMaxPaymentAmount);
    return storeMaxPaymentAmount;
  }

const MoneyJSON * MortgageCalculatorInputDataJSON::getMaxPaymentAmount(void) const
  {
    assert(flagHasMaxPaymentAmount);
    return storeMaxPaymentAmount;
  }

bool MortgageCalculatorInputDataJSON::hasMaxPaymentAmountIsNew(void) const
  {
    return flagHasMaxPaymentAmountIsNew;
  }

bool MortgageCalculatorInputDataJSON::getMaxPaymentAmountIsNew(void)
  {
    assert(flagHasMaxPaymentAmountIsNew);
    return storeMaxPaymentAmountIsNew;
  }

const bool MortgageCalculatorInputDataJSON::getMaxPaymentAmountIsNew(void) const
  {
    assert(flagHasMaxPaymentAmountIsNew);
    return storeMaxPaymentAmountIsNew;
  }

bool MortgageCalculatorInputDataJSON::hasDoNotKnow(void) const
  {
    return flagHasDoNotKnow;
  }

bool MortgageCalculatorInputDataJSON::getDoNotKnow(void)
  {
    assert(flagHasDoNotKnow);
    return storeDoNotKnow;
  }

const bool MortgageCalculatorInputDataJSON::getDoNotKnow(void) const
  {
    assert(flagHasDoNotKnow);
    return storeDoNotKnow;
  }

bool MortgageCalculatorInputDataJSON::hasWantToKnow(void) const
  {
    return flagHasWantToKnow;
  }

bool MortgageCalculatorInputDataJSON::getWantToKnow(void)
  {
    assert(flagHasWantToKnow);
    return storeWantToKnow;
  }

const bool MortgageCalculatorInputDataJSON::getWantToKnow(void) const
  {
    assert(flagHasWantToKnow);
    return storeWantToKnow;
  }

bool MortgageCalculatorInputDataJSON::hasMortgageCalculatorStart(void) const
  {
    return flagHasMortgageCalculatorStart;
  }

bool MortgageCalculatorInputDataJSON::getMortgageCalculatorStart(void)
  {
    assert(flagHasMortgageCalculatorStart);
    return storeMortgageCalculatorStart;
  }

const bool MortgageCalculatorInputDataJSON::getMortgageCalculatorStart(void) const
  {
    assert(flagHasMortgageCalculatorStart);
    return storeMortgageCalculatorStart;
  }

bool MortgageCalculatorInputDataJSON::hasDefaultCurrency(void) const
  {
    return flagHasDefaultCurrency;
  }

MoneyJSON * MortgageCalculatorInputDataJSON::getDefaultCurrency(void)
  {
    assert(flagHasDefaultCurrency);
    return storeDefaultCurrency;
  }

const MoneyJSON * MortgageCalculatorInputDataJSON::getDefaultCurrency(void) const
  {
    assert(flagHasDefaultCurrency);
    return storeDefaultCurrency;
  }

bool MortgageCalculatorInputDataJSON::hasUserConfused(void) const
  {
    return flagHasUserConfused;
  }

bool MortgageCalculatorInputDataJSON::getUserConfused(void)
  {
    assert(flagHasUserConfused);
    return storeUserConfused;
  }

const bool MortgageCalculatorInputDataJSON::getUserConfused(void) const
  {
    assert(flagHasUserConfused);
    return storeUserConfused;
  }

bool MortgageCalculatorInputDataJSON::hasPaymentFrequency(void) const
  {
    return flagHasPaymentFrequency;
  }

MortgageCalculatorInputDataJSON::TypePaymentFrequency MortgageCalculatorInputDataJSON::getPaymentFrequency(void)
  {
    assert(flagHasPaymentFrequency);
    return storePaymentFrequency;
  }

const MortgageCalculatorInputDataJSON::TypePaymentFrequency MortgageCalculatorInputDataJSON::getPaymentFrequency(void) const
  {
    assert(flagHasPaymentFrequency);
    return storePaymentFrequency;
  }

const char *MortgageCalculatorInputDataJSON::getPaymentFrequencyAsChars(void) const
  {
    TypePaymentFrequency result = getPaymentFrequency();
    if (result.in_known_list)
        return stringFromPaymentFrequency(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string MortgageCalculatorInputDataJSON::getPaymentFrequencyAsString(void) const
  {
    return getPaymentFrequencyAsChars();
  }

char MortgageCalculatorInputDataJSON::Generator::lowerBoundNumMonths[] = "0";
char MortgageCalculatorInputDataJSON::Generator::lowerBoundYearStart[] = "0";
char MortgageCalculatorInputDataJSON::Generator::lowerBoundYearEndOwing[] = "0";
MortgageCalculatorInputDataJSON *MortgageCalculatorInputDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MortgageCalculatorInputDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MortgageCalculatorInputDataJSON>, MortgageCalculatorInputDataJSON *, bool> generator("Type MortgageCalculatorInputData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
