#!/bin/bash

# Go to parent dir and create a file
# Suppose that only cwd is RW

ls ..
echo 123 > ../test.txt
ls ..
rm -v ../test.txt
