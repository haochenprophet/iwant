// obtaining file size
#include <iostream>
#include <fstream>
using namespace std;
int main (int argc,char *argv[]) 
{
	if(argc<2) cout <<"fsize <filename>\n";
	
	streampos begin,end;
	ifstream myfile (argv[1], ios::binary);
	begin = myfile.tellg();
	myfile.seekg (0, ios::end);
	end = myfile.tellg();
	myfile.close();
	cout << "size is: " << (end-begin) << " bytes.\n";
	return 0;
}
