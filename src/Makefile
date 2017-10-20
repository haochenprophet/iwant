
MK_TAG = iwant


MYSQL_CONCPP_DIR=../mysql_connect

CFLAGS +=\
	-std=gnu++11 \
	-DLINUX_OS -D$(main)_TEST=1\
	-DSTATIC_CONCPP \
	-Wl,-Bdynamic \
	-o $(MK_TAG) *.cpp $(src) $(sql) \
	$(MYSQL_CONCPP_DIR)/lib64/libmysqlcppconn2-static.a \
	-lpthread \
	-I./ -I $(MYSQL_CONCPP_DIR)/include

all : 
	g++ $(CFLAGS)

clean :
	rm -f $(MK_TAG) *.o *~ .*.swp
