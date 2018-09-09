

#include <stdlib.h>
#include <stdio.h>
//作業二 使用者輸入一個十進位正整數， 並加總所有位數(digit)
int main()
{

    int score=0;
    int result=0;
    printf ("please type some number and press enter!\n"); 
    scanf("%d", &score);
    if(score<0){
        printf ("can't input negative numbers!\n"); 

    }else if(score==0){
        printf ("do nothing!\n"); 

    }else{
        while(score)
        {
            result+= score % 10;
            printf("%d\n", score % 10);
            
            score /= 10;
        }
        printf("the answer is %d\n", result);
    }

    return 0;

}
