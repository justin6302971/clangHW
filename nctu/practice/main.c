#include<stdio.h>
#include<stdlib.h>


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
        printf("%d",d);

        if(n>=10) printf("+");
        n%=k;
        k/=10;

        if(n==0&&k==1){
             printf("%d",n);
        }
    }
    return sum;
}

int main()
{
    int x=0;
    while(scanf("%d", &x)!=EOF){
        printf("%d\n",x);

        
    }

    return 0;
}
