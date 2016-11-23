all:\
tmpfile \
tmpnam \
rename \
remove \

tmpfile:tmpfile.cpp
	g++ -o $@ $^  

tmpnam:tmpnam.cpp
	g++ -o $@ $^  

rename:rename.cpp
	g++ -o $@ $^

remove:remove.cpp
	g++ -o $@ $^

clean:
	rm -f *.o *~* *.txt *.out \
tmpfile \
tmpnam \
rename \
remove \