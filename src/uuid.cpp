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

int Cuuid::cmp(UUID_T * uuid)
{
#if WINDOWS_OS
	if (this->uuid.Data1 > uuid->Data1) return 1;
	if (this->uuid.Data1 < uuid->Data1) return -1;

	if (this->uuid.Data2 > uuid->Data2) return 1;
	if (this->uuid.Data2 < uuid->Data2) return -1;

	if (this->uuid.Data3 > uuid->Data3) return 1;
	if (this->uuid.Data3 < uuid->Data3) return -1;

	for (int n = 7; n >=0; n--)
	{
		if (this->uuid.Data4[n] > uuid->Data4[n]) return 1;
		if (this->uuid.Data4[n] < uuid->Data4[n]) return -1;
	}
	return 0;
#endif

#if LINUX_OS
	unsigned char *cp = (unsigned char *)&uuid;
	for (int i = sizeof(UUID_T) / sizeof(char) - 1; i > 0; i--)
	{
		if (this->uuid[i] > cp[i]) return 1;
		if (this->uuid[i] < cp[i]) return -1;
	}
	return 0;
#endif
}

int Cuuid::cmp(Cuuid * uuid)
{
	return this->cmp(&uuid->uuid);
}

bool Cuuid::operator == (Cuuid& uuid)
{
	if(0==this->cmp(&uuid.uuid)) return true;
	return false;
}

bool Cuuid::operator != (Cuuid& uuid)
{
	if (0 != this->cmp(&uuid.uuid)) return true;
	return false;
}

bool Cuuid::operator > (Cuuid& uuid)
{
	if (this->cmp(&uuid.uuid) > 0) return true;
	return false;
}

bool Cuuid::operator < (Cuuid& uuid)
{
	if ( this->cmp(&uuid.uuid) < 0) return true;
	return false;
}

bool Cuuid::operator >= (Cuuid& uuid)
{
	if ( this->cmp(&uuid.uuid)>=0) return true;
	return false;
}

bool Cuuid::operator <= (Cuuid& uuid)
{
	if (this->cmp(&uuid.uuid)<=0) return true;
	return false;
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

int Cuuid::test()
{
	Cuuid u1, u2;
	u1.display();
	u2.display();
	printf("	u1.cmp(&u2); = %d\n",u1.cmp(&u2));
	return 0;
}

#if UUID_TEST

int main(int argc, char *argv[])
{
	cout<<__FILE__<<"/"<<__FUNCTION__<<"/"<<__LINE__<<"\n";

	Cuuid uuid, uuid2;
	uuid.display();

	return 0;
}
#endif