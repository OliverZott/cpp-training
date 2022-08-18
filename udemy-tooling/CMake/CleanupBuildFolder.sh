#!/bin/sh
# executable permission: chmod +x cleanup.sh

# Find (pre-) compiled files and delete
# result=$(find . -type f \( -name "*.o" -o -name "main" \))      # process substitution
result=$(find -type d -name build)      # process substitution
# echo $result

for i in $result ; do
    echo --------- Delete contentn of $i ---------
    #rm -r $i *
done
