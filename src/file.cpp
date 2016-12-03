#include "file.h"

Cfile::Cfile()
{
	this->name = "Cfile";
	this->alias = "file";
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

	std::fstream fs;
	fs.open (filename, std::fstream::in | std::fstream::out | std::fstream::app);
	
	fs << ap_str;
	fs.close();

	return 0;
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

	this->allot(len+1,FileData_T);	// get size of file for allot memory
	if(NULL==this->addr)
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
	this->addr[this->size]='\0';
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

int Cfile::func(void *p)
{
	if(!p) return -1;
	return this->f_read((char *) p);
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
	f.f_name="file.cpp";
	f.f_read();
	cout<<f.addr<<endl;

	return 0;
}
#endif 