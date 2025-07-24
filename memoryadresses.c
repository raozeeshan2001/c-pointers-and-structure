#include <stdio.h>
#include <stdlib.h>

void takeinput(int n, int *ptr)
{

    for (int i = 0; i < n; i++)
    {
        // ptr[i]=(i+1)*5;
        printf("enter values");
        scanf("%d", &ptr[i]);
    }
}

void printvalue(int n, int *ptr)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n ptr %d is %d at adress %p", i, ptr[i], (void *)&ptr[i]);
    }
}

int main()
{
    int n;
    printf("Enter how many values you want to input: ");
    scanf("%d", &n);

    int *ptr = (int *)malloc(n * sizeof(int)); // memory allocation

    // ptr=(int*)calloc(n,sizeof(int));
    takeinput(n, ptr);
    printvalue(n, ptr);

    // ptr[0]=10;
    // ptr[1]=20;
    // ptr[2]=30;

    // printf("\n ptr[0] %d",ptr[0]);
    // printf("\n ptr[1] %d",ptr[1]);
    // printf("\n ptr[2] %d",ptr[2]);

    // free(ptr);
    free(ptr);

    return 0;
}
