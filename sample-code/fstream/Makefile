 
all:filebuf-open.out  fstream.out

fstream.out: fstream.cpp 
	g++ -o $@ $^

filebuf-open.out:filebuf-open.cpp 
	g++ -o $@ $^
	
clean:
	rm -f fstream *.o *~* *.txt *.out
