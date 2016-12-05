CFLAGS +=\
	-std=gnu++11 \
	-DLINUX_OS -D$(main)_TEST=1\
	-lpthread \


all:\
replace \
rfind \
find \
insert \
pop_back \
push_back \
substr \
stof \
strstr \
strcpy \

replace:replace.cpp
	g++ $(CFLAGS)-o $@ $^  
	
rfind:rfind.cpp
	g++ $(CFLAGS)-o $@ $^  


find:find.cpp
	g++ $(CFLAGS)-o $@ $^  

insert:insert.cpp
	g++ $(CFLAGS) -o $@ $^

pop_back:pop_back.cpp
	g++ $(CFLAGS) -o $@ $^

push_back:push_back.cpp
	g++ $(CFLAGS) -o $@ $^

substr:substr.cpp
	g++ $(CFLAGS) -o $@ $^

stof:stof.cpp
	g++ $(CFLAGS) -o $@ $^

strstr:strstr.cpp
	g++ $(CFLAGS) -o $@ $^

strcpy:strcpy.cpp
	g++ $(CFLAGS) -o $@ $^

clean:
	rm -f *.o *~* *.txt *.out \
replace \
rfind \
find \
insert \
pop_back \
push_back \
substr \
stof \
strstr \
strcpy \