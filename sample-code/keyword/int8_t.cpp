// sized_int_types.cpp  
  
#include <stdio.h>  
#include <stdint.h>

void func(int i) {  
    printf("%s : %d\n", __FUNCTION__,i);  
}  
  
int main()  
{  
    int8_t i8 = 100;  
    func(i8);   // no void func(int8_t i8) function  
                // int8_t will be promoted to int  
}  
