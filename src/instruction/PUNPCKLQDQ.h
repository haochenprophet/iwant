#ifndef PUNPCKLQDQ_H
#define PUNPCKLQDQ_H

#include "object.h"

namespace n_PUNPCKLQDQ {
	class CPUNPCKLQDQ :public Object
	{
	public:
		CPUNPCKLQDQ();
		~CPUNPCKLQDQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PUNPCKLQDQ;

#endif
