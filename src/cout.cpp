#include "cout.h"

Ccout::Ccout()
{
	this->name = "Ccout";
	this->alias = "cout";
}

int Ccout::func(void *p)
{
	if(!p) return -1;
	cout << ((char *)p)<<endl;
	return 0;
}
