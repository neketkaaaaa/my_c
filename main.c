#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define X 3
#define Y 5


int main()
{
    int a[X][Y];
    int i,j;
    int min;


    for (i = 0; i < X; i++)
        for(j = 0; j< Y; j++)
    {a[i][j] = rand()%100;
    }

    for( i = 0; i < X; i++){
        for(j = 0; j <  Y; j++)
            printf("%5d", a[i][j]);
        printf("\n");
    }


    for (j = 0; j < Y; j++){
        min = a[0,j];
        for (i = 0; i < X; i++)
            if (a[i][j] < min) min = a[i][j];
        printf("%5d", min);
        printf("\n");
    }
    return 0;
}

