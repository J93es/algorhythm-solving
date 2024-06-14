  int main(void)
{
    int num, i, r, max=-1000001, min=1000001;
    scanf("%d", &r);
    
    for(i=0; i<r; i++)
    {
        scanf("%d", &num);
        if(max<num)
            max = num;
        if(min>num)
            min = num;
    }
    printf("%d %d", min, max);
}