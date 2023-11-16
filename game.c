#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num,guess,nguesses=1;
    srand(time(0));
    num = rand() % 100 + 1; // generate no.betn 1-100

    //printf("the number is %d\n", num);
    //loop till the correct no. is guessed
    do
    {
       printf("guess the number between 1-100\n\n");
       scanf("%d",&guess);
       if(guess>num){
        printf("please enter lower number\n");
       }
       else if (guess<num)
       {
         printf("please enter higher number\n");
       }
       else
       {
        printf("you guessed in %d guesse\n",nguesses);
       }
       nguesses++;

    } while (guess!=num);
    
    return 0;
}