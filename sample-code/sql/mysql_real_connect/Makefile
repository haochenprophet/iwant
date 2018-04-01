
MK_TAG = test

CFLAGS +=\
	-std=gnu++11 \
	-DLINUX_OS -D$(main)_TEST=1\
	-DSTATIC_CONCPP \
	-Wl,-Bdynamic \
	-o $(MK_TAG) *.cpp \
	-lpthread -ldl -L/usr/lib/mysql -lmysqlclient -lz \
	-I./ 

all : 
	g++ $(CFLAGS)

clean :
	rm -f $(MK_TAG) *.o *~ .*.swp
