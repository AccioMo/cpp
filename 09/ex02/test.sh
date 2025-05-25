#/bin/sh

if [ -z "$1" ]; then
  echo "usage: $0 [number_of_random_numbers] [range_start] [range_end]"
  exit 1
fi

if [ -z "$2" ]; then
  range_start=1
  range_end=1000
else
  range_start=$2
  range_end=$3
fi

numbers=`shuf -i $range_start-$range_end -n $1 | tr "\n" " "`

echo $numbers
