

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//作業三 費伯納西數列(Fibonacci number)
//limitation :
//1. doesn't consider dynamic length of result string and temp string
//2. 

int main()
{
    int n=0;
    printf ("please type the count of Fibonacci number  and press enter!\n"); 
    scanf("%d", &n);
    int arr[n];       
    char result[50000];
    char tmpstr[25];
    int i, j,k;

    if(n<0){
        printf ("can't input negative numbers!\n");
    }else {
        //calculate Fibonacci number arr
        for(i=0; i < n; i += 1)
        {
            if(i<=1){
                arr[i]=i;
            }else {
                arr[i]=arr[i-1]+arr[i-2];
            }         
        } 

        //cast int to string and concat them
        for(k=0; k < n; k += 1){
            // printf("%d\n",arr[k]);
            sprintf(tmpstr, "%d", arr[k]);
            strcat(tmpstr, ",");
            strcat(result,tmpstr);
        }

         printf ("%s\n",result);
    }

    return 0;

}

