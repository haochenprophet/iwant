#ifndef MONEY_DATE_H
#define MONEY_DATE_H

#include "../object.h"

namespace n_money_date {
	class Cmoney_date :public Object
	{
	public:
		Cmoney_date();
		~Cmoney_date();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmoney_date); }
	};
}

using namespace n_money_date;

#endif
