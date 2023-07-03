#include<iostream>
using namespace std;

int main()
{
  int n;
  printf("Enter the number of rows: ");
  scanf("%d", &n);
  
  for(int i=1; i<=n; i++)
  {
      int letter=65;  //ASCII Value of 'A'
              
      for(int j=1; j<=i; j++)
      {
          printf("%c", letter);
          letter++;
      }
                
      printf("\n");
  }
}
