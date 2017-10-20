#include "VSHUFF64x2.h"
int CVSHUFF64x2::my_init(void *p)
{
	this->name = "CVSHUFF64x2";
	this->alias = "VSHUFF64x2";
	return 0;
}

CVSHUFF64x2::CVSHUFF64x2()
{
	this->my_init();
}

CVSHUFF64x2::~CVSHUFF64x2()
{

}
