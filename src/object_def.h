#ifndef OBJECT_DEF_H
#define OBJECT_DEF_H

#define PAGE_4K	(4*1024) 
#define O_BUF_LEN PAGE_4K
#define AT_LINE {std::cout<<__FILE__<<"/"<<__FUNCTION__<<"/"<<__LINE__<<":";}
#define OUT_LINE {std::cout<<__FILE__<<"/"<<__FUNCTION__<<":line="<<__LINE__<<"\n";}
#define WHERE_I {std::cout<<"[Location] File:"<<__FILE__<<" Function:"<<__FUNCTION__<<" line="<<__LINE__<<"\n";}
#define I_AM_HERE WHERE_I
#define OUT_LINE_N(n) {std::cout<<__FILE__<<"/"<<__FUNCTION__<<":line="<<__LINE__<<"n="<<n<<"\n";}
#define OUT_ERROR {std::cout<<"Error:"<<__FILE__<<"/"<<__FUNCTION__<<"/"<<__LINE__<<":"<<endl;}
#define OUT_ERROR_N(n) {std::cout<<"Error:"<<n<<"/"<<__FILE__<<"/"<<__FUNCTION__<<"/"<<__LINE__<<":"<<endl;);}
#define ERROR_EXIT {std::cout<<"Error:"<<__FILE__<<"/"<<__FUNCTION__<<"/"<<__LINE__<<":"<<endl;exit(1);}
#define ERROR_EXIT_N(n) {std::cout<<"Error:"<<__FILE__<<"/"<<__FUNCTION__<<"/"<<__LINE__<<":"<<endl;exit(n);}

#ifndef T_TYPE
#define T_TYPE template<typename T>
#endif

#ifndef BUF_SIZE
#define BUF_SIZE PAGE_4K
#endif

#endif //OBJECT_DEF_H