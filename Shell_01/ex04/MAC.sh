#!bin/sh
ifconfig -a | grep ether | cut -b 15-31
