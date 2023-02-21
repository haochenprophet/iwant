
MK_TAG = mmap

CFLAGS +=\
	-std=gnu++11 \
	-o $(MK_TAG) *.cpp 


all : 
	g++ $(CFLAGS)
install:
	cp mmap /usr/bin

clean :
	rm -f $(MK_TAG) *.o *~ .*.swp  *.out /usr/bin/$(MK_TAG) 
