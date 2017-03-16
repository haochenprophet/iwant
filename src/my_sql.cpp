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
#include <iostream>
#include <mysql_devapi.h>


using ::std::cout;
using ::std::endl;
using namespace ::mysqlx;


int main(int argc, const char* argv[])
{
	  unsigned short port = (argc > 1 ? atoi(argv[1]) : 0);
	  const char    *user = (argc > 2 ? argv[2] : "root");
	  const char    *pwd  = (argc > 3 ? argv[3] : NULL);

	  if (0 == port)
	  {
	    // Default MySQL X port
	    port = 33060;
	  }

	  cout << "Creating session on localhost, port " << port
	       << " ..." << endl;

	  XSession sess("localhost", port, user, pwd);

	  cout <<"Session accepted, creating collection..." <<endl;

	  Schema sch= sess.getSchema("test");

}
#endif 