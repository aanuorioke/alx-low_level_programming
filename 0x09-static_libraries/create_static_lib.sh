#!/bin/bash
for file in *.c; do
	cc -c $file
done
for file in *.o; do
	ar rc liball.a $file
done
