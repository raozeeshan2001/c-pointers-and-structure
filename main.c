#include <stdio.h>

void pointerspractice(){
// int a = 25;
    // int *ptr = &a;
    // printf("memory adress is %p\n", ptr);

    // printf(" pointer value is %d \n", *ptr);
    // printf ("size of int  %zu",sizeof(a));

}

void  PointersUsingArays(){
    
    int arr[4]={25,50,75,100};
    printf("\n*****************");
      for (int i = 0; i < 4; i++)
      {
   
        printf("\n memory adress of %d  is %p",*(arr+i),&arr[i]);
      }      
}

struct carstructure
{
  char name [20];
  char color[20];
  int model;
  
};


void printstructurevalue(struct carstructure c){

    printf("\n car name is %s",c.name);
     printf("\n car color is %s",c.color);
      printf("\n car model is %d",c.model);
}
void updatestructurevaluebypointer(struct carstructure *c){

  c->model=2030;

}



int main()
{
       struct carstructure s1={"civic","blue",2021};
       struct carstructure s2={"city","gray",2018};
      
       printstructurevalue(s1);
       printstructurevalue(s2);

    
      

    
    return 0;
}

