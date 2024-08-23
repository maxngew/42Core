#!/bin/bash

if [ "$#" -ne 1 ]; then
	echo "Usage: $0 <PID>"
	exit 1
fi

#run_valgrind()
#{
#	local cmd="$1"
#	echo "Running with Valgrind:"
#	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose $cmd
#}

PID=$1

echo "Single Message Test"
printf '  '
{ time ./client "$PID" "hello"; } 2>&1 | tr '\n' ' '
echo

echo "Multiple Message Test"
printf '  '
{ time ./client "$PID" "hello"; sleep 2; ./client "$PID" "world"; } 2>&1 | tr '\n' ' '
echo

echo "Empty Message Test"
printf '  '
{ time ./client "$PID" ""; } 2>&1 | tr '\n' ' '
echo

echo "Null Character Test"
printf '  '
{ time ./client "$PID" "\0"; } 2>&1 | tr '\n' ' '
echo

echo "Invalid PID Test"
printf '  '
{ time ./client 999999 "Test"; } 2>&1 | tr '\n' ' '
echo

echo "Invalid Arguments Test"
printf '  '
{ time ./client; } 2>&1 | tr '\n' ' '
echo

echo "Test with 100 Characters"
printf '  '
{ time ./client "$PID" "SEEQ27q2addryo5sNxzRgKPShA6oAxsRtNVCFzW1qTshcDNo6GPzstNzQJ5yFBQaTJNGC38hmQSFbqZy5D14ex4eDOxuc229oW1M"; } 2>&1 | tr '\n' ' '
echo
