# iwant


I want Library .  


[Thinker]: 
Who am I, what I know,what can I do?
Everyone serves me, I serve everyone.

I am a thinker , I am Object ;
I am you ,  You are me ,I am time, I am space, time is me, space is me;
I am all , I am everything , everthing is me ;

I know you ,You know me , I know everything , everything know me ;
I know the past, understand the present, insight into the future, know everything;
I know anywhere, I can find anywhere, I arrive at any time any space.

I can do everthing , I exist, also disappear ;
I live and die; Can be live,Can be die, Can be live and die;Can be east ,Can be west, Can be east and west; Can be do everything.
I am here, I'm not here ;
I will use the most positive mind to perceive the power of the code.
I will be reduced to ashes, I will be everywhere .

No gun, no cannons, we made ourselves, We create ourselves and create the future.(Objetc::create)
Self-creation, self-renewal, self-improvement, creating classes, creating source code, creating Makefiles ... 

I am inside the code, also outside the code.
I will with as little time as possible and the code, output as much as possible the code value.

I will recording all human history and activities .

[package]:code tree: main|root/package/files/namespace/class/command/action/function/coding...  


[class]:

class Ctimeline: The life cycle of all objects is in the same time space. 

class Ctimetree: Use c++ Describe the evolution and growth and activity of anything or object in the universe .
                 This time map will help you understand the time tree . https://github.com/haochenprophet/iwant/blob/master/doc/timetree.jpg

[Get code]: git clone --recursive  https://github.com/haochenprophet/iwant


[Coding rule]:We should endless pursuit of the graceful code.

1.function return code rule : <0 do nothing , ==0 success, >0 fail .

2.callback ,extern ,execute , thread , function rule : typedef int(*MyFunc)(void *p);  

3.All classes inherit from the 'Object' class. For example : class Ciwant:public Object  
  All class constructor must set the class name and alias .Class Id is automatically set .
 An example of a subclass constructor : 
 Ciwant::Ciwant()
{
	this->name = "Ciwant";
	this->alias = this->name; 
}

4.A file has a main class and the class name is cpp filename add C.  ie. class Ciwant.

5.For 'Object' class use the 'O' ,like Ouuid,Oinput .. 
  namespace name 'n'  n_object , union 'u' or 'U'  like Udata . 
  
6.All program should abstract out all the string definitions to separately.

7.Standard c or libc ... c functions have overloaded function names with _c attached. 
  ie. static int printf_c(const char* format, ...);

8.callback class function like runme():int Ctree_func::runme(void* node) for other class call this runme function.

[Building]:
request :Need C + + compiler

1. how to building in linux: 
	depend insall: uuid-dev,make,g++,libmysqlclient-dev

	  libmysqlclient-dev: https://dev.mysql.com/doc/mysql-apt-repo-quick-guide/en/#apt-repo-fresh-install
		ie: sudo apt-get install uuid-dev make g++ 
		    sudo apt-get install libmysqlclient-dev

	step 1: cd src
	step 2: make
          Build class example: sh ../batch/build_control_class.sh
  
2. how to building in windows:
	step 1: install vs 2015 or least .
	step 2: using the vs 2015 open "winIwant.sln"

[sample-code ] :
1.The sample-code for learning, reference and testing purposes only,do not use for other purposes .
