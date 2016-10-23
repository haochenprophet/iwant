src := $(shell ls *.cpp)
objs := $(patsubst %.cpp ,%.o , $(src) )

fstream: $(objs)
	g++ -O -o $@ $^

%.O:%.cpp
	g++ -O -c -o $@ $< 
	
clean:
	rm -f fstream *.o *~*
