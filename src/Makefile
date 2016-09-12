src := $(shell ls *.cpp)
objs := $(patsubst %.cpp , %.o ,$(src))

iwant : $(objs)
	g++ -o $@ $^

%.o : %.cpp
	g++ -c -o $@ $<

clean :
	rm -f iwant *.o 
