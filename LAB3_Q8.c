#include <stdio.h>

int main(void) {
  int row;
  int col;
  for(row=1;row<=5;row=row+1){
    if(row == 1 || row== 5){
      printf("*****");

    }
    for(col=1;col<=5;col=col+1){
      if (row != 1 && row != 5){
        if(col==1){
          printf("*");
        }else if (col == 5){
          printf("*");
        }
        else{
          printf(" ");
        }
      }
      }
    printf("\n");
  }
  printf("\n");
  for(row=1;row<=5;row=row+1){
    for(col=1;col<=row;col=col+1){
      printf("*");
    }
    printf("\n");
  }
  printf("\n");
  for(row=5;row>=1;row=row-1){
    for(col=5;col>5-row;col=col-1){
      printf("%d", col);
    }
    printf("\n");
  }
  printf("\n");
  for(row=5;row>=1;row=row-1){
    for(col=5;col>5-row;col=col-1){
      printf("*");
      }
    printf("\n");
  }
  printf("\n");
  for(row=1;row<=5;row=row+1){
    for(col=1;col<=row;col=col+1){
      printf("%d", row);
    }
    printf("\n");
  }
  printf("\n");
  for(row=1;row<=5;row=row+1){
    for(col=1;col<=row;col=col+1){
      printf("%d", col);
    }
    printf("\n");
  } 
  return 0;
}
