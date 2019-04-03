#include "protocol.h"
int Cprotocol::my_init(void *p)
{
	this->name = "Cprotocol";
	this->alias = "protocol";
	return 0;
}

Cprotocol::Cprotocol()
{
	this->my_init();
}

Cprotocol::~Cprotocol()
{

}

#ifndef PROTOCOL_TEST
#define PROTOCOL_TEST 0//1
#endif

#if PROTOCOL_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "PROTOCOL_TEST\n\n";

	return 0;
}
#endif 