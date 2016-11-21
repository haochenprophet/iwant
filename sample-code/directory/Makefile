all:\
scandir \
readdir \
tree \
stat \

scandir:scandir.cpp
	g++ -o $@ $^  

readdir:readdir.cpp
	g++ -o $@ $^ 

tree:tree.cpp
	g++ -o $@ $^ 

stat:stat.cpp
	g++ -o $@ $^ 

clean:
	rm -f *.o *~* *.txt *.out \
scandir \
readdir \
tree \
stat \