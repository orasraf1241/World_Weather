#!/bin/bash
#this scrips check if the file exisst in the folder and copy it to /tmp Dir

echo "enter a file name:"
read NAME
var=false
for i in $(ls)
	do
		if [ $NAME = $i ] 
		then
			cp $NAME /tmp/
			echo 'the file is copy to /tmp'
			var=true
			
		fi
done

if [ "$var" = false ]
then
	echo 'The file is not exsist'
fi




		