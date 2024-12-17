#!/bin/bash

# Create Makefile.am with header
echo "AUTOMAKE_OPTIONS = subdir-objects" > Makefile.am
echo "bin_PROGRAMS = myproject" >> Makefile.am

# Find all .c files in Leet_Code directory and append to Makefile.am
echo -n "myproject_SOURCES = " >> Makefile.am
find Leet_Code -name '*.c' | tr '\n' ' ' >> Makefile.am
echo "" >> Makefile.am
