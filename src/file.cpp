#include "file.h"

Cfile::Cfile()
{
	this->name = "Cfile";
	this->alias = "file";
}

Cfile::~Cfile()
{

	if(this->ap_fs.is_open()) this->ap_fs.close();//Cfile::f_append
}

int Cfile::is_exist(char *filename)
{
	if(!filename) return -1;

	int ret=0;
	std::fstream fs;
	fs.open (filename, std::fstream::in);
	if(fs.good()) ret =1;
	fs.close();

	return ret;
}

int Cfile::is_exist()
{
	if(this->f_name.empty()) return -1;
	return this->is_exist((char *)this->f_name.c_str());	
}

int Cfile::f_append(char *filename,char * ap_str)
{
	if( !(filename && ap_str) ) return -1;

	if(!this->ap_fs.is_open()) 
	{
		this->ap_fs.open (filename, std::fstream::in | std::fstream::out | std::fstream::app);
	}

	this->ap_fs << ap_str;
	this->ap_fs.close();
	return 0;
}

int Cfile::f_append(string *filename, string *ap_str)
{
	if (filename->empty()|| ap_str->empty()) return -1;
	return this->f_append((char *)filename->c_str(), ap_str->c_str());
}

int Cfile::f_append(string filename, char * ap_str)
{
	if (filename.empty()) return -1;
	return this->f_append((char *)filename.c_str(), ap_str);
}

int Cfile::f_append(char *filename, string ap_str)
{
	if (filename==nullptr|| ap_str.empty()) return -1;
	return this->f_append(filename, ap_str.c_str());
}


int Cfile::f_size(char *f_name)
{
	std::ifstream is (f_name, std::ifstream::binary);
	if (!is) return -1;	
	is.seekg (0, is.end);
	int len=is.tellg();
	is.close();
	return len;
}

int Cfile::f_size()
{
	if(this->size>0) return this->size-1;
	if(this->f_name.empty()) return -1;
	return this->f_size((char *)this->f_name.c_str());
}

int Cfile::f_read(char *f_name) //this->size=file_sile+1;'\0'
{
	std::ifstream is (f_name, std::ifstream::binary);
	if (!is) return -1;

	is.seekg (0, is.end);
	int len=is.tellg();

	this->allot(len+1,FileData_T,MY_MEMORY_REALLOT); // get size of file for allot memory

	if(nullptr==this->addr)
	{
		is.close();
		return -1;
	}

	is.seekg (0, is.beg);
	is.read (this->addr,len);// read data as a block:

	if (!is)
	{
		std::cout << "error: only " << is.gcount() << " could be read";
		this->error++;
	}

	this->addr[len]='\0';
	is.close();

	return 0;
}

int Cfile::f_read()
{
	if(this->f_name.empty()) return -1;
	return this->f_read((char *)this->f_name.c_str());
}

int Cfile::f_append(char * ap_str)
{
	if(this->f_name.empty()) return -1;
	return this->f_append((char *)this->f_name.c_str(),ap_str);
}

int Cfile::f_append(string * ap_str)
{
	return this->f_append((char *)ap_str->c_str());
}

char * Cfile::f_find(char *f_name,char * str,char *start)
{
	if(this->size==0||this->f_name!=f_name)
	{
		if(this->f_read(f_name)) return nullptr;
	}

	if(start==nullptr) start=this->addr;
	if(start>=(this->addr+this->size)) return nullptr;

	return strstr(start,str);
}

char * Cfile::f_find(char * str,char *start)
{
	return this->f_find((char *)this->f_name.c_str(),str,start);
}

// c/c++ function : return_type [space] <func_name> [space] (...)

int Cfile::is_exist_func(char *f_name,char *func_name,int dispaly)
{
	char *cp=nullptr;
	int len=strlen(func_name);

	while(1)
	{
		cp=this->f_find(f_name,func_name,cp);
		if(!cp) return 0;

		if( *(cp-1)!=' '&&*(cp-1)!='\t' )
		{
			cp+=len;continue;
		}

		if(dispaly) cout<<cp<<endl;
		cp+=len;

		if(*(cp)=='(') return 1;//c/c++ function
		for(;*cp==' '||*cp=='\t';cp++);
		if(*cp=='(') return 1;
	}
	return 0; 
}

int Cfile::func(void *p)
{
	if(!p) return -1;
	return this->f_read((char *) p);
}

int Cfile::create(void *p)
{
	if (p == nullptr)
	{
		if (this->f_name.empty()) return -1;
		this->ap_fs.open(this->f_name.c_str(), std::fstream::in | std::fstream::out | std::fstream::trunc);
		return 0;
	}

	char *filename = (char *)p;
	this->f_name = filename;
	this->ap_fs.open(filename, std::fstream::in | std::fstream::out | std::fstream::trunc);
	return 0;
}

#ifndef FILE_TEST
#define FILE_TEST 0//1
#endif

#if FILE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	cout << "FILE_TEST!\n\n";
	Cfile f;
	f.f_name="question.cpp";

	f.f_read();
	cout<<f.addr<<endl;

	return 0;
}
#endif 
