src := $(shell ls *.cpp)
objs := $(patsubst %.cpp ,%.o , $(src) )

new: $(objs)
	g++ -O -o $@ $^

%.O:%.cpp
	g++ -O -c -o $@ $< 
	
clean:
	rm -f new *.o *~*
