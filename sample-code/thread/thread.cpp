#include <iostream>
#include <thread>
using namespace std;
int thread_count =0;

void thread_call(int count)
{
	int id=++thread_count;
	while(1) cout<<"thread_count="<<id<<endl;//stop
}

int main() 
{
	int n=0;
	while(1)
	{		
		cout<<"main:"<<++n<<endl;
		std::thread (thread_call,0).detach();	
	}

	return 0;
}

