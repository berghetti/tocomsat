# tocomsat
network remote control of combat S


this is a note for maybe one day making a mobile app, as the supplier's app does not work in current versions...


compile: gcc -o code encode.c -DNDEBUG

see codes.h to get id keys

Usage: ./code 1

take the encoded code and send it to the network (see send.py)

tested with S combat (limited edition)
