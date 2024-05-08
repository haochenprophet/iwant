
MK_TAG = hardware

CFLAGS +=\
	-std=gnu++11 \
	-DLINUX_OS -D$(main)_TEST=1 -D$(debug)_DEBUG=1 \
	-DSTATIC_CONCPP \
	-Wl,-Bdynamic \
	-o $(MK_TAG) *.cpp ../*.cpp $(src) $(sql) ../math/*.cpp \
	-lpthread -luuid -ldl -L/usr/lib/mysql -lmysqlclient -lz \
	-I./ -I../ -I $(MYSQL_CONCPP_DIR)/include

all : 
	g++ $(CFLAGS)

clean :
	rm -f $(MK_TAG) *.o *~ .*.swp
