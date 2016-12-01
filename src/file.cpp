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

int Cfile::f_append(char * ap_str)
{
	if(this->f_name.empty()) return -1;
	return this->f_append((char *)this->f_name.c_str(),ap_str);
}


#ifndef FILE_TEST
#define FILE_TEST 0//1
#endif

#if FILE_TEST
int main(int argc, char *argv[])
{
	cout << "FILE_TEST\n\n";
	return 0;
}
#endif 