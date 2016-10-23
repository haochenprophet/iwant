#include "main.h"
#include "iwant.h"
#include "net.h"
#include "home.h"
#include "socket.h"
#include "task.h"
#include "url.h"
#include "new.h"

Cmain::Cmain()
{
	this->name = "Cmain";
	this->alias = this->name;
}

int main(int argc, char *argv[])
{
	cout << "Hello main!\n";
	return 0;
}