#include "stdio.h"

int main(void) {
    int i;
    int N;
    int checkPoint;
    int arr[1000000];
    
    scanf("%d", &N);
    
    for (i = 0; i < N; i++) {
        scanf("%d", arr + i);
    }
    
    for (; i < 1000000; i++) {
        arr[i] = 1000000001;
    }
    
    checkPoint = 0;
    
    for (i = 1; i < N; i++) {
        if (arr[i - 1] != arr[i]){
            
            for (int j = i - 1; j >= checkPoint; j--) {
                arr[j] = i + 1;
            }
            checkPoint = i;
        }
    }
    
    for (i = N - 1; i >= checkPoint; i--) {
        arr[i] = -1;
    }
    
    for (i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }    
}