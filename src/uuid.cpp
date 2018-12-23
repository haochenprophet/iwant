#include "uuid.h"
#include "uuid_class.h"

Cuuid::Cuuid()
{
	this->name = "Cuuid";
	this->alias = "uuid";
}

Cuuid::~Cuuid()
{
}

Ouuid::Ouuid()
{
	this->create();
}

Ouuid::~Ouuid()
{

}

int  Ouuid::create(char * format )
{
	return this->create_uuid(this->uuid, format);
}

int Ouuid::create_uuid(std::string & uuid_s, char * format)
{
	UUID_U uuid;
	char buf[GUID_LEN];

#if WINDOWS_OS
	if (S_OK != CoCreateGuid((GUID*) &uuid.guid)) return -1;
#endif

#if LINUX_OS
	uuid_generate(uuid.uuid);
#endif

	sprintf(buf, format, uuid.guid.Data1, uuid.guid.Data2, uuid.guid.Data3, uuid.guid.Data4[0], uuid.guid.Data4[1], uuid.guid.Data4[2], uuid.guid.Data4[3], uuid.guid.Data4[4], uuid.guid.Data4[5], uuid.guid.Data4[6], uuid.guid.Data4[7]);
	uuid_s = buf;

	return 0;
}

#if UUID_TEST

int main(int argc, char *argv[])
{
	std::cout<<__FILE__<<"/"<<__FUNCTION__<<"/"<<__LINE__<<"\n";

	Ouuid uuid;
	std::cout<<uuid.uuid<<endl;

	return 0;
}
#endif