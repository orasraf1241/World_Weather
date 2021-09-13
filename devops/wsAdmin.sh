#!/bin/bash

echo 'Please enter a service name:'

#get user input
read service

#check service status
sudo systemctl status $service


# simple script menu
function start 
{
	clear
	if (systemctl is-active $service)
		then
		sudo systemctl restart $service
	else
		sudo systemctl start $service
	fi

}

function stop 
	{
		clear
		sudo systemctl stop $service
	}

function leaveit 
{
	clear
	sudo systemctl status $service
}

function menu 
{
	echo
	echo -e " Sys Admin Menu "
	echo -e " 1. Start it"
	echo -e " 2. Stop"
	echo -e " 3. Leave it at the current status"
	echo -e " 0. Exit program "
	echo -en " Enter option: "
	read -n 1 option
}


while [ 1 ]
	do
	menu
	case $option in
	0)
	break ;;
	1)
	startit ;;
	2)
	stop ;;
	3)
	leaveit ;;
	*)
	clear
	echo "Sorry, wrong selection";;
	esac
	echo -en " Hit any key to continue"
	read -n 1 line
done

clear

