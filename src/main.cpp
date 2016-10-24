#include "main.h"
#include "iwant.h"
#include "net.h"
#include "home.h"
#include "socket.h"
#include "task.h"
#include "url.h"
#include "new.h"

#define MAIN_TEST 0

Cmain::Cmain()
{
	this->name = "Cmain";
	this->alias ="main";
}

#if MAIN_TEST
int main(int argc, char *argv[])
{
	cout << "Hello main!\n";

	return 0;
}
#endif
