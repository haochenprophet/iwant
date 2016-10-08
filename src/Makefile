src := $(shell ls *.cpp)
objs := $(patsubst %.cpp , %.o ,$(src))

iwant : $(objs)
	g++ -std=gnu++11 -o $@ $^ -lpthread

%.o : %.cpp
	g++ -std=gnu++11 -o $@ $< -lpthread

clean :
	rm -f iwant *.o 
