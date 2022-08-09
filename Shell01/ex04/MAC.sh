#!/bin/sh
ifconfig | grep 'ether' | awk 'NR=$2'
