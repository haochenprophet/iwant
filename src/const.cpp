#include "const.h"
int Cconst::my_init(void *p)
{
	this->name = "Cconst";
	this->alias = "const";
	return 0;
}

Cconst::Cconst()
{
	this->my_init();
}

bool Cconst::isHex(char *cp)
{
	bool ret=true;
	for(;*cp!='\0';cp++){
		if(isxdigit(*cp)) continue;
		if(isalpha(*cp)||*cp=='_') ret=false;
		break;
	}
	return ret;
}


bool Cconst::isDec(char *cp)
{
	bool ret=true;
	for(;*cp!='\0';cp++){
		if(isdigit(*cp)) continue;
		if(isalpha(*cp)||*cp=='_') ret=false;
		break;
	}
	return ret;
}

#ifndef CONST_TEST
#define CONST_TEST 0//1
#endif

#if CONST_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "CONST_TEST\n\n";
	
	char s[]="12345678d ";

	if(Cconst::isHex(s)) printf("isHex\n");
	else printf("NoHex\n");
	
	printf("s=%ld\n",atol(s));
	return 0;
}
#endif 