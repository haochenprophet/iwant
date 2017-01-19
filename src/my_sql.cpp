#include "my_sql.h"
int Cmy_sql::my_init(void *p)
{
	this->name = "Cmy_sql";
	this->alias = "my_sql";
	return 0;
}

Cmy_sql::Cmy_sql()
{
	this->my_init();
}

Cmy_sql::~Cmy_sql()
{

}

#ifndef MY_SQL_TEST
#define MY_SQL_TEST 0//1
#endif

#if MY_SQL_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	cout << "MY_SQL_TEST\n\n";

	mysqlx_session_t  *sess;
	const char   *url = (argc > 1 ? argv[1] : "mysqlx://root@127.0.0.1");
	char conn_error[MYSQLX_MAX_ERROR_LEN];
	int conn_err_code;

	sess = mysqlx_get_node_session_from_url(url, conn_error, &conn_err_code);
	if (!sess)
	{
		printf("\nError! %s. Error Code: %d", conn_error, conn_err_code);
		return -1;
	}

	return 0;
}
#endif 