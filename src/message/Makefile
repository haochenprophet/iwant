MK_TAG = message

CFLAGS +=\
	-std=gnu++11 \
	-DLINUX_OS -D$(main)_TEST=1\
	-o $(MK_TAG) *.cpp ../*.cpp \
	-lpthread -luuid -ldl -L/usr/lib/mysql -lmysqlclient -lz \

all : 
	g++ $(CFLAGS)

clean :
	rm -f $(MK_TAG) *.o *~
