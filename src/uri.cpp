#include "uri.h"

Curi::Curi()
{
	this->name = "Curi";
	this->alias = "uri";
}

int Curi::func(void *p)
{
	this->s_uri="";
	this->s_uri+=this->scheme;
	this->s_uri+=this->authority;
	this->s_uri+=this->path;
	this->s_uri+=this->query;
	this->s_uri+=this->fragment;
}