#include<stdio.h>
//計算房間最多可貼幾片地磚
int isPrime(int n);
int main(int argc, char const *argv[])
{

    int x,y;
    printf("請輸入整數\n");
    x = scanf("%d", &y);
    while(x!=EOF){
        int result=isPrime(y);
        if(result==1){
             printf("%d 是質數\n\n",y);
        }else{
             printf("%d 不是質數\n\n",y); 
        }     
        //reset input
        printf("請輸入整數\n");
        x = scanf("%d", &y);
    }
    
    return 0;
}
int isPrime(int n){
    if(n <= 1) return 0;  
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
         return 0;
        }
    }
    return 1;
}
