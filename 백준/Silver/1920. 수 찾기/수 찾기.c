#include <stdio.h>
#define max 100001

long long int arr[max], temp[max];


void MSort(long long int L, long long int R)
{
    if(L>=R)
        return;
    
    long long int M=(L+R)/2;

    MSort(L, M);
    MSort(M+1, R);

    for(long long int i=L, l=L, r=M+1; r != R+1  ||  l != M+1; i++)
    {
        if(( (r != R+1)  &&  (l <= M)  &&  (arr[l] < arr[r]) )  ||  r == R+1)
            temp[i]=arr[l++];
        else
            temp[i]=arr[r++];
    }

    for(long long int i=L; i<=R; i++)
        arr[i]=temp[i];
}


int BSearch(long long target, long long len)
{
    long long first = 0;
    long long last = len - 1;
    long long middle;
    
    while (first <= last)
    {
        middle = (first+last) / 2;
        
        if (arr[middle] == target)
            return 1;
        
        else if (arr[middle] > target)
            last = middle - 1;
        
        else
            first = middle + 1;
    }
    return 0;
}

int main(void)
{
    long long N, M;
    
    scanf("%lld", &N);
    for (long long i=0; i<N; i++)
        scanf("%lld", &arr[i]);
    MSort(0, N-1);
    
    scanf("%lld", &M);
    for (long long i=0; i<M; i++)
        scanf("%lld", &temp[i]);
    
    for (long long i=0; i<M; i++)
        printf("%d\n", BSearch(temp[i], N));
    
}