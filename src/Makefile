
MK_TAG = iwant

CFLAGS +=\
	-std=gnu++11 \
	-DLINUX_OS -D$(main)_TEST=1 -D$(debug)_DEBUG=1 \
	-DSTATIC_CONCPP \
	-Wl,-Bdynamic \
	-o $(MK_TAG) *.cpp $(src) $(sql) math/crc.cpp \
	-lpthread -luuid -ldl -L/usr/lib/mysql -lmysqlclient -lz \
	-I./ -I $(MYSQL_CONCPP_DIR)/include

all : 
	g++ $(CFLAGS)

clean :
	rm -f $(MK_TAG) *.o *~ .*.swp
