#include<stdio.h>
#include<stdlib.h>
//計算某正整數的任連續兩數字相加是否相同
int checkN(int n);
int digitSum(int n);
int main()
{

    printf("請輸入正整數！\n"); 
    int x=0;
    while(scanf("%d", &x)!=EOF){  
        if(x>0) {
            // result=x%10;
            // printf("result=%d\n",result);
            int result=checkN(x);
            if(result!=0){
                printf("任兩個連續數字的和相同且其值 = %d\n",result);       
            }else{
                printf("任兩個連續數字的和不同或是輸入值小於10，請重新輸入\n");       

            }
            
        }else{
            printf("can't only handel numbers which large than 0!\n");
        };        
    }

    return 0;
}

int checkN(int n){
    if(n<10){
        return 0;
    }else if(n>=10&& n<100){
     return digitSum(n); 
    }else{
        int m=n,k=1,result;
        //get max digit info
        while(m>=10){
            k*=10;
            m/=10;
        }
        int i=0;
        while(n>0){
            int d=n*10/k;
            int check=digitSum(d);
            if(i==0){
                result=check;
                i=1;
            }

            if(result!=check){
                result=0;
                break;
            }

            n%=k;
            k/=10;            
            if(k==1){
                break;
            }
        }
        return result;
    }
}

int digitSum(int n){
    int m=n,k=1;
    //get max digit info
    while(m>=10){
        k*=10;
        m/=10;
    }
  
    int sum=0;  
    while(n>0){       
        int d=n/k;
        sum+=d;

        n%=k;
        k/=10;
    }
    return sum;
}

