rm g_code.cpp
make main=CODE
./iwant >g_code.i
mv g_code.i g_code.cpp
make main=CODE
