MK_TAG = stdlib

CFLAGS +=\
	-std=gnu++11 \
	-DLINUX_OS -D$(main)_TEST=1\
	-o $(MK_TAG) *.cpp \
	-lpthread \

all : 
	g++ $(CFLAGS)

clean :
	rm -f $(MK_TAG) *.o *~
