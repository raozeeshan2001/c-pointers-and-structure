#include <stdio.h>

void  PointersUsingArays(){
    
    int arr[4]={25,50,75,100};
    printf("\n*****************");
      for (int i = 0; i < 4; i++)
      {
   
        printf("\n memory adress of %d  is %p",*(arr+i),&arr[i]);
      }      
}

int main()
{
    
    int a = 25;
    int *ptr = &a;
    printf("memory adress is %p\n", ptr);

    printf(" pointer value is %d \n", *ptr);
    printf ("size of int  %zu",sizeof(a));
    PointersUsingArays();
 
    return 0;
}

