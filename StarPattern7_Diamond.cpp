#include<iostream>
using namespace std;

int main()
{
  int n;
  printf("Enter the number of rows: ");
  scanf("%d", &n);

  //Printing the upper half of the diamond
   for(int i=0; i<n; i++)
   {
       for(int j=0; j<n-i-1; j++)
       {
         printf(" ");
       }
                
       for(int k=0; k<i+1; k++)
       {
         printf("* ");
       }
       printf("\n");
   }
  //Printing the lower half of the diamond
  for(int i=0; i<n; i++)
  {
      for(int j=0; j<i; j++ )
      {
        printf(" ");
      }
               
      for(int k=0; k<=n-1-i; k++)
      {
        printf("* ");
      }
      printf("\n");
  }
}
