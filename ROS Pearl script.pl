#!/usr/bin/perl
 
use strict;
use warnings;


system  ("sudo top -bn1  >> topOutputaft.txt "); #Record top after c code


system ("cat topB4Heading.txt >> finalData.txt");#add a heading
system ("cat topOutputb4.txt  >> finalData.txt");# print the topOutput table to the terminal 


system ("cat topCurrentHeading.txt >> finalData.txt");#add a heading
system ("cat topOutput.txt  >> finalData.txt");# print the topOutput table to the terminal 


system ("cat topAfterHeading.txt >> finalData.txt");#add a heading
system ("cat topOutputaft.txt  >> finalData.txt");# print the topOutput table to the terminal 


system ("cat lsHeading1.txt >> finalData.txt");#add a heading
system ("cat lsHeading2.txt >> finalData.txt");#add a heading
system ("cat lsOutput.txt  >> finalData.txt");#Print lsOutput to the terminal 
