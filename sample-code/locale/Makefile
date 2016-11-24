CFLAGS +=\
	-std=gnu++11 \
	-DLINUX_OS -D$(main)_TEST=1\
	-lpthread \


all:\
time_get \
time_put \

time_get:time_get.cpp
	g++ $(CFLAGS)-o $@ $^  
	

time_put:time_put.cpp
	g++ $(CFLAGS)-o $@ $^  


clean:
	rm -f *.o *~* *.txt *.out \
time_get \
time_put \
