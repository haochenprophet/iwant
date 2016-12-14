#include "http.h"


int Chttp::my_init(void *p)
{
	this->name = "Chttp";
	this->alias = "http";
	this->uri.syntax =HTTP_URI_SYNTAX;
	this->version=HTTP_VERSION;
	return 0;
}

Chttp::Chttp()
{
	this->my_init();
}
