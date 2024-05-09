MK_TAG = sensor

MYSQL_CONCPP_DIR=../../mysql_connect

source_code = *.cpp ../*.cpp ../math/*.cpp 

CFLAGS +=\
	-std=gnu++11 \
	-DLINUX_OS -D$(main)_TEST=1 -D$(debug)_DEBUG=1 \
	-DSTATIC_CONCPP \
	-Wl,-Bdynamic \
	-o $(MK_TAG) $(source_code) $(src) $(sql) \
	-lpthread -luuid -ldl -L/usr/lib/mysql -lmysqlclient -lz \
	-I./ -I../ -I $(MYSQL_CONCPP_DIR)/include

all : 
	g++ $(CFLAGS)

clean :
	rm -f $(MK_TAG) *.o *~ .*.swp
