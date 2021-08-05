#!/bin/bash

#this scrips check if the file exisst in the folder and copy it to /tmp Dir

echo "enter a file name:"
var=false
read NAME

		if [ [NAME = $(ls) ] ]  
		then
			echo $i   & NAME
		else
			echo 'the file not exisst'
done



		