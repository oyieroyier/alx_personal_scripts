#!/bin/bash

echo "Enter file name:"

read file_name

touch $file_name.c

echo -e "#include <stdio.h>\n\n/**\n * main - Entry point\n *\n *Description - \n *\n * Return: Always 0 (Success)\n */\n\nint main(void)\n{\n;\nreturn (0);\n}\n" > $file_name.c

vi +star $file_name.c

perl -i -pe 's/\s+\n/\n/' $file_name.c

gcc $file_name.c -o $file_name

