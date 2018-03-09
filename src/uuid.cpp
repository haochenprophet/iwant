#include "uuid.h"

Cuuid::Cuuid()
{
	this->create();
}

Cuuid::~Cuuid()
{

}

int Cuuid::create(UUID_T uuid)
{
	#if WINDOWS_OS
		CoCreateGuid(&uuid);
	#endif

	#if LINUX_OS
		uuid_generate(uuid);
	#endif
	
	return 0;
}

int Cuuid::create()
{
	return this->create(this->uuid);
}

void Cuuid::display(UUID_T uuid)
{
	unsigned char *cp=(unsigned char *)&uuid;
	for(int i=sizeof(UUID_T)/sizeof(char)-1;i>0;i--)
		printf("%02X",cp[i]);
	printf("\n");
}

void Cuuid::display()
{
	this->display(this->uuid);
}

#if UUID_TEST

int main(int argc, char *argv[])
{
	cout<<__FILE__<<"/"<<__FUNCTION__<<"/"<<__LINE__<<"\n";

	Cuuid uuid;
	uuid.display();
	return 0;
}
#endif