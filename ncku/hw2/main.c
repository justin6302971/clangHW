#include <stdio.h>

int sum(int count){

    int total;
    for(int i=1;i<=count;i++){
        total+=i;
    }
    return(total);
}

int main(int argc, char const *argv[])
{
    int count=0,
        result=0;
    printf("type the counts of the numbers to caculate the sum\n");

    scanf("%d",&count);

    if(count<=0)
    {
        printf("can't not handle negative values or zero\n");
    }else{
        result=sum(count);
        printf("The sum of 1 .. n is %d\n",result);
    }

    
    /* code */
    return 0;
}

