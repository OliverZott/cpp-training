#!/bin/sh
# Todo: executable permission: chmod +x cleanup.sh
# Run: ./cleanup.sh or sh cleanup.sh

# Find (pre-) compiled files and delete
result=$(find . -type f \( -name "*.o" -o -name "main" \))      # process substitution
# echo $result

for i in $result ; do
    echo Delete... $i
    rm $i
done
