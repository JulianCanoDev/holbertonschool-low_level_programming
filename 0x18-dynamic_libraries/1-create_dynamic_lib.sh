#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -o libholberton.so *.o
ls -la lib*
