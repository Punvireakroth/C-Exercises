#include <stdio.h>
int main()
{
  int inten_row;
  printf("Input Row Number: ");
  scanf("%d", &inten_row);


  for(int row=1;row<=inten_row;++row)
  {
    for(int space=1;space<=inten_row - row; ++space){
      printf(" ");
    }
    for (int col=1;col<=row;col++){
      printf("%d",row);
    }
    printf("\n");
  }
  
 return 0;
}