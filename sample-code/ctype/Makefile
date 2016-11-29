CFLAGS +=\
	-std=gnu++11 \
	-DLINUX_OS -D$(main)_TEST=1\
	-lpthread \


all:\
isupper \


isupper:isupper.cpp
	g++ $(CFLAGS)-o $@ $^  


clean:
	rm -f *.o *~* *.txt *.out \
isupper \
