#!/bin/bash

if [ $# == 0 ]
then
    wc -l
    
else
    grep -ci ";$1"
fi
