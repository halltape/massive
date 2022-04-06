#include <stdio.h>

int main ()
{
    int N = 0, max, min, imax = 0, imin = 0, temp = 0;

    scanf("%d", &N);
    int arr[N];

    for (int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    max = min;

   for (int i = 0; i < N; i++){
        if (arr[i] < min){
            min = arr[i];
            imin = i;
                                                            //printf("min - %d\nimin - %d\n", min, imin);
        } else if(arr[i] >= max){
            max = arr[i];
            imax = i;
                                                            //printf("max - %d\nimax - %d\n", max, imax);
        }
    }

                                                            //printf("min - %d\nimin - %d\n", min, imin);
    temp = arr[imin];
    arr[imin] = arr[imax];
    arr[imax] = temp;

    for (int i = 0; i < N; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}