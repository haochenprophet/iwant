#include "PHMINPOSUW.h"
int CPHMINPOSUW::my_init(void *p)
{
	this->name = "CPHMINPOSUW";
	this->alias = "PHMINPOSUW";
	return 0;
}

CPHMINPOSUW::CPHMINPOSUW()
{
	this->my_init();
}

CPHMINPOSUW::~CPHMINPOSUW()
{

}
