#include <stdio.h>

int main ()
{
    int N = 0, average = 0;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
        average = average + arr[i];
    }
    printf("%.2lf", (double)average / N);

    return 0;
}