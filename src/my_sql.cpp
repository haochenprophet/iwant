#include "my_sql.h"
int Cmy_sql::my_init(void *p)
{
	this->name = "Cmy_sql";
	this->alias = "my_sql";
	this->mysql=nullptr;
	this->is_connect=false;
	this->result=nullptr;
	this->fields=nullptr;
	this->row=nullptr;
	return 0;
}

Cmy_sql::Cmy_sql()
{
	this->my_init();
}

Cmy_sql::Cmy_sql(char * password,char * user,char * host,char * use_db,char *sql)
{
	this->my_init();
	this->host=host;
	this->user=user;
	this->password=password;
	this->use_db=use_db;
	this->sql=sql;
	this->mysql=&this->mysql_i;
	if(NULL==mysql_init(this->mysql))
	{
		this->inc_error();
		this->mysql=nullptr;
	} 

}

Cmy_sql::~Cmy_sql()
{
	if(this->mysql) mysql_close(this->mysql);
}


int Cmy_sql::connect()
{
	int ret=0;
	if(this->is_connect) return 0;
	if(this->is_error()) return -1;
	if(!this->mysql&&!mysql_init(this->mysql)) //if not init ,init 
	{
		this->inc_error();
		this->mysql=nullptr;
		return ++ret;
	}

	if(!mysql_real_connect(this->mysql,	this->host,this->user,this->password,this->use_db,0,NULL,0))
	{
		this->inc_error();
		return ++ret;
	}
	this->is_connect=true;
	return 0;
}

int Cmy_sql::query(char *sql)
{
	if(this->is_error()) return -1;
	if(mysql_query(this->mysql,sql))
	{
		this->inc_error();
		return 1;
	}
	return 0;//pass
}

int Cmy_sql::query()
{
	if(!this->sql) {this->inc_error(); return -1;}
	return this->query(this->sql);
}

int Cmy_sql::get(MYSQL_RES *result,MYSQL_FIELD *fields,bool show)
{
	if(!result) return -1;

	unsigned int i,num_fields;

	num_fields = mysql_num_fields(result);
	if(num_fields<1) return 1;

	fields = mysql_fetch_fields(result);
	if(!fields) return 2;

	if(!show) return 0;

	for(i = 0; i < num_fields; i++)
	{
		printf("Field[%u]=%s\n", i, fields[i].name);
	}
	return 0;
}

int Cmy_sql::get(MYSQL_FIELD *fields,bool show)
{
	return this->get(this->result,fields,show);
}

int Cmy_sql::get(MYSQL_RES *result,	MYSQL_ROW row)
{
	unsigned int i,num_fields;
	unsigned long *lengths;

	num_fields = mysql_num_fields(result);
	if(num_fields<1) return 1;
	while ((row = mysql_fetch_row(result)))
	{
		lengths = mysql_fetch_lengths(result);
		for(i = 0; i < num_fields; i++)
		{
			printf("[%.*s] ", (int) lengths[i],row[i] ? row[i] : "NULL");
		}
		printf("\n");
	}
	return 0;
}

int Cmy_sql::get(MYSQL_RES *result)//get row
{
	return this->get(result,this->row);
}

int Cmy_sql::get(void *p)//get row
{
	return this->get(this->result,this->row);
}

int Cmy_sql::func(void *p)
{
	Cmy_sql *m=(Cmy_sql*) p;
	cout<<"Cmy_sql::func\nrow_count="<<m->result->row_count<<"\nfield_count="<<m->result->field_count<<"\ncurrent_field="<<m->result->current_field<<endl;
	//this->get(this->fields,true);
}

int Cmy_sql::execute(Object *o)
{
	if(this->is_error()) return -1;

	do {
		this->result = mysql_store_result(this->mysql);	// did current statement return data? 
		if(this->result)
		{
			o->execute( (void*) this); //point Cmy_sql to call back
			mysql_free_result(this->result);
		}
	} while (!mysql_next_result(this->mysql));
	return 0;
}

int Cmy_sql::execute()
{
	return this->execute((Object *) this);
}

int Cmy_sql::execute(char * sql,Object *o)
{
	int ret=0;
	if(!sql) return ++ret;
	if(!this->is_connect && this->connect()) return ++ret;
	this->sql=sql;
	if(this->query()) return ++ret;
	
	if(o){
		if(this->execute(o)) return ++ret;
	}
	else
	{
		if(this->execute()) return ++ret;		
	}

	return ret;
}

#ifndef MY_SQL_TEST
#define MY_SQL_TEST 01
#endif

#if MY_SQL_TEST
#include "all_h_include.h"

int main(int argc, const char* argv[])
{
    char password[100];//program language  
    cout<<"Enter mysql_db server root password :"; 
    std::cin>>password;

	Cmy_sql m((char *)password);//Cmy_sql m((char *)"password");

	int ret=0;
	for(int n=0;n<1;n++)
	{
		ret=m.execute((char *)"show databases;");
		cout<<"return="<<ret<<endl;	
	}

	Object obj;
	ret=m.execute((char *)"show databases;",&obj);
	m.get();
	//ret=m.execute((char *)"select * from test.url;");
	//m.get();
	return 	ret;
}
#endif 