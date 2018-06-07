#ifndef STOCK_DB_H
#define STOCK_DB_H

#include "my_sql.h"
#include "stock_db_action.h"

namespace n_stock_db {
	class Cstock_db :public Object
	{
	public:
		Cmy_sql * my_sql, *pm;//point_mysql	
		MYSQL_RES  *result;
		MYSQL_ROW row;
		unsigned int * num_fields;
		unsigned long *lengths;
	public:
		Cstock_db();
		~Cstock_db();
		int my_init(void *p=nullptr);
		int execute(void *p1, void *p2, void *p3);
		int func(void *p = nullptr); // callback function
		int parse_run_action();
		int deal_cmd(int argc, char *argv[]);
		int do_action(void * a);
		int display(ActionInfo * a);
		int action_cmd(); 
		int verify_id_cmd();//verify_id action cmdd call back func.
		int verify_id_first(void *p = nullptr);//verify_id action call back func 1
		int verify_id_second(void *p1, void *p2, void *p3);//verify_id action call back func 2
		int add_ma_cmd(); //add_ma action cmdd call back func.
		int add_ma_first(void *p = nullptr);//add_ma action call back func 1
		int add_ma_second(void *p1, void *p2, void *p3);//add_ma action call back func 2
		int print_all_data(MYSQL_ROW row, unsigned int* num_fields, unsigned long *lengths);
		int calculate_ma_cmd(); //calculate_ma action cmdd call back func.
		int calculate_ma_first(void *p = nullptr);//calculate_ma action call back func 1
		int calculate_ma_second(void *p1, void *p2, void *p3);//calculate_ma action call back func 2
		int add_avg_second(void *p1, void *p2, void *p3);
		int add_avg_first(void *p);
		int add_avg_cmd();
		int build_batch_second(void *p1, void *p2, void *p3);
		int build_batch_first(void *p);
		int build_batch_cmd();
		int calculate_avg_second(void *p1, void *p2, void *p3);
		int calculate_avg_first(void *p);
		int calculate_avg_cmd();
		int add_rd_second(void *p1, void *p2, void *p3);
		int add_rd_first(void *p);
		int add_rd_cmd();
		int calculate_rd_second(void *p1, void *p2, void *p3);
		int calculate_rd_first(void *p);
		int calculate_rd_cmd();
		int delete_zero_second(void *p1, void *p2, void *p3);
		int delete_zero_first(void *p);
		int delete_zero_cmd();
	};
}

using namespace n_stock_db;

#endif
