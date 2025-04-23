#!/bin/bash

gcc -E task_without_context10.c -o task_without_context10.i && gcc -S task_without_context10.i -o task_without_context10.s && gcc -c task_without_context10.s -o task_without_context10.o && gcc task_without_context10.o -o task_without_context10.exe
