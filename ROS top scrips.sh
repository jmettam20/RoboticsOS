#!/bin/bash


#  this function dosnt work nerd script output.txt 

echo "Reading ls" #Print reading ls to the terminal 

sudo ls -bn1   >> lsOutput.txt #Run the ls command as super user once then output it to the text file

echo "output ls" #Print output ls 
