src := $(shell ls *.cpp)
objs := $(patsubst %.cpp ,%.o , $(src) )

fcut: $(objs)
	g++ -O -o $@ $^

%.O:%.cpp
	g++ -O -c -o $@ $< 
	
clean:
	rm -f fcut *.o file.out  readme2.txt
