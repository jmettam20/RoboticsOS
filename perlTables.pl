 
#!/usr/bin/perl
 use strict; 
 use warnings; 
 open (lsOutput.txt, '<', 'FB_LPWAP.txt') or die ("ERROR: Could not read file"+);
 
 print <lsOutput.txt>; #Prints entire file 
 while (<lsOutput.txt>){ 
 my @array = split /\t/, $_; 
 print "$array[1]\t"; #File_Name

 } 
 close (FILE); 
