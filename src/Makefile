
MK_TAG = iwant

CFLAGS +=\
	-std=gnu++11 \
	-DLINUX_OS -D$(main)_TEST=1\
	-o $(MK_TAG) *.cpp $(src) $(sql) \
	-lpthread \
	-I./

all : 
	g++ $(CFLAGS)

clean :
	rm -f $(MK_TAG) *.o *~
