#include<iostream>
using namespace std;

int main()
{
  int n;
  printf("Enter the number of rows: ");
  scanf("%d", &n);
  
  for(int i=1; i<=n; i++)
  {
        //to print the first half of the pattern
        for(int j=1; j<=n; j++)
        {
            if(j<=i)
                printf("%d ",j);
            else
                printf("  ");
        }
            
        //to print the second half of the pattern
        for(int k=n; k>=1 ; k--)
        {
            if(k<=i)
                printf("%d ", k);
            else
                printf("  ");
        }
        printf("\n");
            
    }
}
