#include <mysql/mysql.h>
#include <iostream>
#include <algorithm>

int main()
{
  int ret=0;
  MYSQL mysql;
  char * host=(char *)"127.0.0.1";
  char * user=(char *)"root";
  char * password=(char *)"password";
  char * use_db=(char *)"test";


  mysql_init(&mysql);
  mysql_options(&mysql,MYSQL_READ_DEFAULT_GROUP,"test");

  if (!mysql_real_connect(&mysql,host,user,password,use_db,0,NULL,0))
  {
      fprintf(stderr, "Failed mysql_real_connect: %s\n",mysql_error(&mysql));
      return ++ret;
  }
  fprintf(stdout, "mysql_real_connect pass!\n");
  mysql_close(mysql);
  return ret;
}
