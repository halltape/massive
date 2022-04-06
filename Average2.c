#include <stdio.h>

int main ()
{
    int N = 0, sum = 0;
    double average = 0;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
        }
    average = (double)sum/N;

    for (int i = 0; i < N; i++){
        if (arr[i] > average){
        printf("%d ", arr[i]);
        }
    }

    for (int i = 0; i < N; i++){
        if (arr[i] <= average){
            printf("%d ", arr[i]);
        }
    }



    return 0;
}