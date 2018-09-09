#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
// void compute(int, int, int, int);



 void roots(double a, double b, double c){
       double x, y1,y2; 

        x = b*b -4*a*c;
        y1= (-b+sqrt(x))/(2*a);
        y2= (-b-sqrt(x))/(2*a);
        printf("roots are %f and %f \n",y1,y2);

 }
 bool evaluate(double a, double b, double c){

         double result= b*b-4*a*c;
         if(result<0){
                 return false;
         }else{
                 return true;
         }
 }

int main(){    
        double a,b,c;
        char confirm;
        printf("please set the equation!\n");
        printf("a =");
        scanf("%lf",&a);
        printf("b =");
        scanf("%lf",&b);
        printf("c =");
        scanf("%lf",&c);

        printf("what u had typed is %f x^2+ %f x+ %f \n",a,b,c);
        printf("are u sure? [Y/N]\n");
        scanf("%s", &confirm);
        //  printf("%d\n", tolower(confirm));
         if(tolower(confirm)==121){
                printf("keep Going\n");            
                if(evaluate( a,  b,  c)){
                        printf("compute roots values\n");
                        roots(a,b,c);

                }else{
                      printf("this equation has no real roots\n");  
                }
         }else{
                    printf("stop running\n");              
         }

        return(0);
}



