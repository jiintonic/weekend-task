/* file "HoundRequester.cpp" */

/* Copyright 2014, 2015 SoundHound, Incorporated.  All rights reserved. */


#include "HoundRequester.h"
#include <stdio.h>
#include <time.h>
#include "build_info.h"


void HoundRequester::show_version_information(FILE *fp)
  {
    fprintf(fp, "        SDK Variant: %s\n", "Standard");
    fprintf(fp, "SDK Private Domains: %s\n", "");
    fprintf(fp, "         Build User: %s\n", build_user);
    fprintf(fp, "         Build Date: %s\n", build_date);
    fprintf(fp, "      Build Machine: %s\n", build_machine);
    fprintf(fp, " Build SVN Revision: %s\n", build_svn_revision);
    fprintf(fp, "   Build SVN Branch: %s\n", build_svn_branch);
    fprintf(fp, "       Build Number: %s\n", build_number);
    fprintf(fp, "         Build Kind: %s\n", build_kind);
    fprintf(fp, "      Build Variant: %s\n", build_variant);
  }
