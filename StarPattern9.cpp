#include<iostream>
using namespace std;

int main()
{
  int n;
  printf("Enter the number of rows: ");
  scanf("%d", &n);
  // to print first half of the pattern
  for(int i=n; i>=1; i--)
  {
       for(int j=i; j>=1; j--)
       {
            printf("*");
       }
       for(int k=1; k<=2*(n-i); k++)
       {
            printf(" ");
       }
       for(int j=i; j>=1; j--)
       {
            printf("*");
       }
       printf("\n");
  }
        
  for(int i=1; i<=n; i++)
  {
            
       for(int j=1; j<=i; j++)
       {
            printf("*");
       }
       for(int k=1; k<=2*(n-i); k++)
       {
            printf(" ");
       }
       for(int j=1; j<=i; j++)
       {
            printf("*");
       }
       printf("\n");
  }
}
