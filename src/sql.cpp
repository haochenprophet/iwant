#include "sql.h"

Csql::Csql()
{
	this->name = "Csql";
	this->alias = "sql";
	this->sql_opetate = SqlOperate::nothing;
	this->db_name = nullptr;
	this->tab_name = nullptr;
	this->tab_field = nullptr;
	this->sql_buf = nullptr;
	this->sql = nullptr;
	this->sql_buf_len = this->allot(PAGE_4K, (void **)&this->sql_buf);
}

Csql::~Csql()
{
	this->delete_allot((void **)&this->sql_buf);
}