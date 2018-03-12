#include "uuid.h"

Cuuid::Cuuid()
{
	this->create();
}

Cuuid::~Cuuid()
{

}

int Cuuid::create()
{
	#if WINDOWS_OS
		if(S_OK==CoCreateGuid(&this->uuid)) return 0;
		return -1;
	#endif

	#if LINUX_OS
		uuid_generate(uuid);
		return 0;
	#endif
}

void Cuuid::display(UUID_T * uuid)
{
#if WINDOWS_OS
	printf("%08X-%04X-%04x-%02X%02X-%02X%02X%02X%02X%02X%02X\n", uuid->Data1,uuid->Data2,uuid->Data3,uuid->Data4[0], uuid->Data4[1], uuid->Data4[2], uuid->Data4[3], uuid->Data4[4], uuid->Data4[5], uuid->Data4[6], uuid->Data4[7]);
#endif

#if LINUX_OS
	unsigned char *cp=(unsigned char *)&uuid;
	for(int i=sizeof(UUID_T)/sizeof(char)-1;i>0;i--)
		printf("%02X",cp[i]);
	printf("\n");
#endif

}

void Cuuid::display()
{
	this->display(&this->uuid);
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