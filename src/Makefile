
TAG = iwant

CFLAGS +=\
	-std=gnu++11 \
	-DLINUX_OS -D$(main)_TEST=1\
	-o $(TAG) *.cpp \
	-lpthread \

all : 
	g++ $(CFLAGS)

clean :
	rm -f $(TAG) *.o *~
