// Copyright 2019-2022 Lawrence Livermore National Security, LLC and other
// Variorum Project Developers. See the top-level LICENSE file for details.
//
// SPDX-License-Identifier: MIT

#include <stdio.h>

#include <variorum.h>

int main(void)
{
    int ret;

    ret = variorum_disable_turbo();
    if (ret != 0)
    {
        printf("Disable turbo failed!\n");
    }
    return ret;
}
