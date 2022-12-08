#include <stdio.h>
int main(){
   if(sizeof(int)>-1)
   //unsigned long(4) > integer(-1) =false
   //if(4 > 0xFFFFFFFF)
   //integer x =-1; 0xff ff ff ff
   //long x =-1;    0xff ff ff ff ff ff ff
   //in c lang. sign data convert into unsign datatype
   printf("true");
   else
   printf("false");
    return 0;
}