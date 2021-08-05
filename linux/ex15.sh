#!/bin/bash

#this scrips check if the file exisst in the folder and copy it to /tmp Dir

echo "enter a file name:"
var=false
read NAME
for i in $(ls)
	do
		if [ [ "$i" = NAME ] ]  
		then
			cp $i  /tmp
			var=$true
			echo $i   & NAME
 	    fi
done
if [[ "$var" = true ]] 
then 
	echo 'the file not exisst'
fi


		