#include <mysql/mysql.h>
#include <iostream>
#include <algorithm>

int count=0;
int process_result_set(MYSQL * mp, MYSQL_RES * rp)
{
  fprintf(stdout, "[%d]process_result_set\nrow_count=%d\nfield_count=%d\ncurrent_field=%d\n",++count,(int)rp->row_count,rp->field_count,rp->current_field);
  return 0;
}

int main()
{
  int status;
  int ret=0;

  MYSQL mysql;
  MYSQL_RES  *result;

  char * host=(char *)"127.0.0.1";
  char * user=(char *)"root";
  char * password=(char *)"password";//!
  char * use_db=(char *)"test";
  char * sql=(char *)"show tables;";

  mysql_init(&mysql);
  mysql_options(&mysql,MYSQL_READ_DEFAULT_GROUP,"test");

  if (!mysql_real_connect(&mysql,host,user,password,use_db,0,NULL,0))
  {
      fprintf(stderr, "Failed mysql_real_connect: %s\n",mysql_error(&mysql));
      mysql_close(&mysql);
      return ++ret;
  }
  fprintf(stdout, "mysql_real_connect pass!\n");

/* execute multiple statements */
status = mysql_query(&mysql,sql);
if (status)
{
  printf("Could not execute statement(%s)\n",sql);
  mysql_close(&mysql);
  exit(0);
}

/* process each statement result */
do {
  /* did current statement return data? */
  result = mysql_store_result(&mysql);
  if (result)
  {
    /* yes; process rows and free the result set */
    process_result_set(&mysql, result);
    mysql_free_result(result);
  }
  else          /* no result set or error */
  {
    if (mysql_field_count(&mysql) == 0)
    {
      printf("%lld rows affected\n",
            mysql_affected_rows(&mysql));
    }
    else  /* some error occurred */
    {
      printf("Could not retrieve result set\n");
      break;
    }
  }
  /* more results? -1 = no, >0 = error, 0 = yes (keep looping) */
  if ((status = mysql_next_result(&mysql)) > 0)
    printf("Could not execute statement\n");
} while (status == 0);


  mysql_close(&mysql);
  return ret;
}

