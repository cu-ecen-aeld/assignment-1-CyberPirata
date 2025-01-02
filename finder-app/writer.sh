#!/bin/bash


writefile=${1}
writestr=${2}

if [ "$#" -ne 2 ]; then
echo "Error"
exit 1
fi

mkdir -p "$(dirname "$writefile")"


echo "$writestr" > "$writefile"
cat $writefile
