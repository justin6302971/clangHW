#include <stdlib.h>
#include <stdio.h>
//作業一計算硬幣組合最佳解（假設最佳解為依幣值大小順續）
int main()
{
    int v=0;
    int x = 0;
    int y=0;
    int z=0;
    int w=0;

    printf ("please type some number and press enter!\n"); 
    scanf("%d", &v);
    if(v<0){
        printf ("can't input negative numbers!\n"); 

    }else if(v==0){
        printf ("do nothing!\n"); 

    }else{
        w=v/50;
        v=v-w*50;
        z=v/10;
        v=v-z*10;
        y=v/5;
        v=v-y*5;
        x=v;

        printf ("50元有 %d 個\n", w); 
        printf ("10元有 %d 個\n", z);      
        printf ("5元有 %d 個\n", y); 
        printf ("1元有 %d 個\n", x); 
    }

    return 0;

}
