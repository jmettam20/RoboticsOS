#!/bin/bash 

sudo top -bn1  >> topOutputb4.txt # run the top command once in sudo user mode and then send the top table to the text file
gcc bigC.c -o bigC -lpthread #compile c program w threads


./bigC #Run c file



./perlTables.pl #Once c file has fnished running run perl file
