#ifndef BITS_H
#define BITS_H
#include "object.h"

namespace n_bits
{
	class Cbits :public Object
	{
	public:
		Cbits();
		int my_init(void *p=nullptr);
	};	
}
using namespace n_bits;
#endif