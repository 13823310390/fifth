#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
int main(){
    int count =3;
    int guessNumber = 0;
    int orgNumber = 0;
    srand(time(0));
    for (; 3>1 ;){
        for (int i= 0;i<count; i++){
            int temp = rand()%9 +1;
            printf("%d",temp);
            orgNumber = orgNumber*10 + temp;

        }
        sleep(2);
        printf("\r");
        scanf ("%d",guessNumber);
        if (orgNumber == guessNumber);
        printf("ÕýÈ·\n");


        }
    }







