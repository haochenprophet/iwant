#include "map_message.h"
int Cmap_message::my_init(void *p)
{
	this->name = "Cmap_message";
	this->alias = "map_message";
	return 0;
}

Cmap_message::Cmap_message()
{
	this->my_init();
}

Cmap_message::~Cmap_message()
{

}

#ifndef MAP_MESSAGE_TEST
#define MAP_MESSAGE_TEST 0//1
#endif

#if MAP_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "MAP_MESSAGE_TEST\n\n";

	return 0;
}
#endif 