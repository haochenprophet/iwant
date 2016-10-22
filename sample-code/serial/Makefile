src := $(shell ls *.cpp)
objs := $(patsubst %.cpp ,%.o , $(src) )

serial: $(objs)
	g++ -O -o $@ $^

%.O:%.cpp
	g++ -O -c -o $@ $< 
	
clean:
	rm -f serial *.o *~*
