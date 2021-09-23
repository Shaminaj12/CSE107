#include <stdio.h>
int main(void)
{
  int marks;
  
  printf("Please Enter your Marks: ");
  scanf("%d",&marks);
  if(marks >= 80 && marks < 100){
    printf("A+");
  }
  else if(marks >= 70 && marks <= 79){
    printf("A");
  }
  else if(marks >= 60 && marks <= 69){
    printf("B+");
  }
  else if(marks >= 50 && marks <= 59){
    printf("B");
  }
  else if(marks >= 40 && marks <= 49){
    printf("C");
  }
  else if(marks < 40){
    
  printf("Fail, Go Home\n");
}
  
  return 0;
}
