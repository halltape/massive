#include <stdio.h>

int main ()
{
    int N = 0;
    int flag = 1;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++) {   //scanf ARRAY//
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < N; i++) {   //if number is bigger than the last k = 0//
        if (arr[i] >= arr[N - 1]) {
            flag = 0;
        }
    }
    for (int i = 0; i < N; i++) {   //if number is less than the last k = 0//
        if (arr[i] < arr[N - 1]) {
            printf("%d ", arr[i]);
            flag = 1;
        }
    }
    if (flag == 0){
        printf("0");
    }

    return 0;
}