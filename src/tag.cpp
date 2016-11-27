#include "tag.h"

Ctag::Ctag()
{
	this->name = "Ctag";
	this->alias = "tag";
	this->syntax = TAG_SYNTAX;
}

int Ctag::func(void *p)
{
	return 0;
}