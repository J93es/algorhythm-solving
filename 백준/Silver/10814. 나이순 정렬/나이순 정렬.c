
#include <stdio.h>
#include <stdlib.h>

#define MAX_N 100000
#define MAX_LEN 101


typedef struct human
{
        int age;
        char name[MAX_LEN];
        int num;
} Human;


int Comp(const void* man1, const void* man2)
{
        Human *person1 = (Human*) man1;
        Human *person2 = (Human*) man2;
        
        if (person1->age < person2->age)
                return -1;
        else if (person1->age == person2->age)
                return 0;
        return 1;
}


int main(void)
{
        int N;
        Human* person;
        
        person = (Human*)malloc(sizeof(Human) * MAX_N);

        scanf("%d", &N);
        for (int i=0; i<N; i++)
        {
                scanf("%d %s", &person[i].age, person[i].name);
                person[i].num = i;
        }
        
        qsort(person, N, sizeof(Human), Comp);
        
        for (int i=0; i<N; i++)
                printf("%d %s\n", person[i].age, person[i].name);
}