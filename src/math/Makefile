MK_TAG = math
MYSQL_CONCPP_DIR=../../mysql_connect

CFLAGS +=\
	-std=gnu++11 \
	-DLINUX_OS -D$(main)_TEST=1\
	-o $(MK_TAG) *.cpp ../*.cpp\
	-lpthread \
	-I../ -I $(MYSQL_CONCPP_DIR)/include \


all : 
	g++ $(CFLAGS)

clean :
	rm -f $(MK_TAG) *.o *~ .*.swp


