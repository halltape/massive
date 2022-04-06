#include <stdio.h>
//This program shows you is your array a palindrom//
int main ()
{
    int N;
    scanf("%d", &N);
    int mas[N];
    int k = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d", &mas[i]);
    }

    for (int i = 0; i < N/2; i++) {
        if (mas[i] != mas[N - i - 1]) {
            k = 1;
        }
    }
    if (k == 1){
        printf("NO");
    } else printf("YES");

    return 0;
}