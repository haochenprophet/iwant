#include "VFMSUB231SD.h"
int CVFMSUB231SD::my_init(void *p)
{
	this->name = "CVFMSUB231SD";
	this->alias = "VFMSUB231SD";
	return 0;
}

CVFMSUB231SD::CVFMSUB231SD()
{
	this->my_init();
}

CVFMSUB231SD::~CVFMSUB231SD()
{

}
