#!/bin/sh

# ---------->  executable permission: chmod +x cleanup.sh

result=$(find -type d -name build)      # process substitution

for i in $result ; do
    if [ "$(ls $i)" ] ; then 
        echo --------- Delete content of $i ---------
        rm -v $i/*
    else
        echo "Nothing to clean :)"

    fi
done


# ___________
# - Remarks -
# -----------

# Find (pre-) compiled files and delete
# result=$(find . -type f \( -name "*.o" -o -name "main" \))      # process substitution
# echo $result

# remove substring: 
# https://stackoverflow.com/questions/16623835/remove-a-fixed-prefix-suffix-from-a-string-in-bash
# dir=${i#"."}
# echo $dir/*