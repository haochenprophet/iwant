
sudo apt install cmake
apt-cache search boost
sudo apt-get install libboost-dev

git clone https://github.com/mysql/mysql-connector-cpp
cd ./mysql-connector-cpp
cmake .
make clean
make
sudo make install
# g++ -o test_install \
#  -I/usr/local/include -I/usr/local/include/cppconn \
#  -Wl,-Bdynamic standalone_example.cpp -lmysqlcppconn

export LD_LIBRARY_PATH=/usr/local/lib
export DYLD_LIBRARY_PATH=/usr/local/lib
#./test_install localhost root password database
