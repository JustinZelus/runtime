// Licensed to the .NET Foundation under one or more agreements.
// The .NET Foundation licenses this file to you under the MIT license.

/*============================================================================
**
** Source:  test3.c
**
** Purpose: Test #3 for the sprintf_s function. Tests the wide string
**          specifier (%S).
**
**
**==========================================================================*/



#include <palsuite.h>
#include "../sprintf_s.h"

/* 
 * Depends on memcmp and strlen
 */

PALTEST(c_runtime_sprintf_s_test3_paltest_sprintf_test3, "c_runtime/sprintf_s/test3/paltest_sprintf_test3")
{
    if (PAL_Initialize(argc, argv) != 0)
    {
        return FAIL;
    }

    DoWStrTest("foo %S", convert("bar"), "foo bar");
    DoStrTest("foo %hS", "bar", "foo bar");
    DoWStrTest("foo %lS", convert("bar"), "foo bar");
    DoWStrTest("foo %wS", convert("bar"), "foo bar");
    DoWStrTest("foo %LS", convert("bar"), "foo bar");
    DoWStrTest("foo %I64S", convert("bar"), "foo bar");
    DoWStrTest("foo %5S", convert("bar"), "foo   bar");
    DoWStrTest("foo %.2S", convert("bar"), "foo ba");
    DoWStrTest("foo %5.2S", convert("bar"), "foo    ba");
    DoWStrTest("foo %-5S", convert("bar"), "foo bar  ");
    DoWStrTest("foo %05S", convert("bar"), "foo 00bar");
    DoWStrTest("foo %S", NULL, "foo (null)");
    DoStrTest("foo %hS", NULL, "foo (null)");
    DoWStrTest("foo %lS", NULL, "foo (null)");
    DoWStrTest("foo %wS", NULL, "foo (null)");
    DoWStrTest("foo %LS", NULL, "foo (null)");
    DoWStrTest("foo %I64S", NULL, "foo (null)");

    PAL_Terminate();
    return PASS;
}


