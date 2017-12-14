#!/bin/bash

blih -u jospeh.vidal@epitech.eu repository create $1
blih -u jospeh.vidal@epitech.eu repository setacl $1 ramassage-tek r
blih -u jospeh.vidal@epitech.eu repository getacl
