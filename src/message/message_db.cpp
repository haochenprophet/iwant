#include "message_db.h"
int Cmessage_db::my_init(void *p)
{
	this->name = "Cmessage_db";
	this->alias = "message_db";
	return 0;
}

Cmessage_db::Cmessage_db()
{
	this->my_init();
}

Cmessage_db::~Cmessage_db()
{

}

#ifndef MESSAGE_DB_TEST
#define MESSAGE_DB_TEST 0//1
#endif

#if MESSAGE_DB_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "MESSAGE_DB_TEST\n\n";

	return 0;
}
#endif 