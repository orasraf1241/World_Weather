#!/bin/bash

 sudo netstat -lp| grep LISTEN > listen.txt
 cat listen.txt
