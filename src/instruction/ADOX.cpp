#include "ADOX.h"
int CADOX::my_init(void *p)
{
	this->name = "CADOX";
	this->alias = "ADOX";
	return 0;
}

CADOX::CADOX()
{
	this->my_init();
}

CADOX::~CADOX()
{

}
