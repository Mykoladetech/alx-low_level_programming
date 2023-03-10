#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rcs liball.a *.a
ranlib liball.a 
