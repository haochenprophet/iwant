#ifndef OBJECT_DEF_H
#define OBJECT_DEF_H

#define PAGE_4K	(4*1024) 
#define O_BUF_LEN PAGE_4K
#define AT_LINE do{std::cout<<__FILE__<<"/"<<__FUNCTION__<<"/"<<__LINE__<<":";}while(0);
#define OUT_LINE do{std::cout<<__FILE__<<"/"<<__FUNCTION__<<":line="<<__LINE__<<"\n";}while(0);
#define WHERE_I do{std::cout<<"[Location] File:"<<__FILE__<<" Function:"<<__FUNCTION__<<" line="<<__LINE__<<"\n";}while(0);
#define I_AM_HERE WHERE_I
#define OUT_LINE_N(n) do{std::cout<<__FILE__<<"/"<<__FUNCTION__<<":line="<<__LINE__<<"n="<<n<<"\n";}while(0);
#define OUT_ERROR do{std::cout<<"Error:"<<__FILE__<<"/"<<__FUNCTION__<<"/"<<__LINE__<<":"<<endl;}while(0);
#define OUT_ERROR_N(n) do{std::cout<<"Error:"<<n<<"/"<<__FILE__<<"/"<<__FUNCTION__<<"/"<<__LINE__<<":"<<endl;);}while(0);
#define ERROR_EXIT do{std::cout<<"Error:"<<__FILE__<<"/"<<__FUNCTION__<<"/"<<__LINE__<<":"<<endl;exit(1);}while(0);
#define ERROR_EXIT_N(n) do{std::cout<<"Error:"<<__FILE__<<"/"<<__FUNCTION__<<"/"<<__LINE__<<":"<<endl;exit(n);}while(0);

#ifndef T_TYPE
#define T_TYPE template<typename T>
#endif

#endif //OBJECT_DEF_H