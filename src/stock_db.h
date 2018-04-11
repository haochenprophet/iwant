#ifndef STOC_DB_H
#define STOC_DB_H

#include "my_sql.h"

namespace n_stock_db {
	enum class StockAtcion{
		verify_id = BIT0,
	};

	class Cstock_db :public Object
	{
	public:
		Cmy_sql * my_sql;
	public:
		Cstock_db();
		~Cstock_db();
		int my_init(void *p=nullptr);
		int execute(void *p1, void *p2, void *p3);
		int func(void *p = nullptr); // callback function
		int deal_cmd(int argc, char *argv[]);
		int verify_id_cmd(int argc, char *argv[]);//verify_id action cmdd call back func.
		int verify_id_first(void *p = nullptr);//verify_id action call back func 1
		int verify_id_second(void *p1, void *p2, void *p3);//verify_id action call back func 2
	};
}

using namespace n_stock_db;

#endif
