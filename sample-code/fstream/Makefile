
CFLAGS +=\
	-std=gnu++11 \
	-DLINUX_OS -D$(main)_TEST=1\
	-lpthread \


all:\
filebuf-open \
fsize \
fstream \
open \
read \

filebuf-open:filebuf-open.cpp
	g++ $(CFLAGS)-o $@ $^  
	
fsize:fsize.cpp
	g++ $(CFLAGS)-o $@ $^  


fstream:fstream.cpp
	g++ $(CFLAGS) -o $@ $^

open:open.cpp
	g++ $(CFLAGS) -o $@ $^

read:read.cpp
	g++ $(CFLAGS) -o $@ $^


clean:
	rm -f *.o *~* *.txt *.out \
filebuf-open \
fsize \
fstream \
open \
read \
