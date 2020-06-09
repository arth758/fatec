#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T, Q, R = 0;
    for(int i = 0 ; i <= 2; i++){
        scanf("%i %i",&T,&Q);
        R = R + T / Q;
    }
    printf("\n %i \n",R);
}
