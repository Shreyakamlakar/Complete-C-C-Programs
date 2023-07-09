#include<iostream>
using namespace std;

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
  
    for(int i=1; i<=n; i++)
    {
            if(i==1 || i==n)
            {
                for(int j=1; j<=n; j++)
                {
                    printf("*");
                }
                printf("\n");
            }
            else
            {
                for(int j=1; j<=1; j++)
                {
                    printf("*");
                }
                for(int j=1; j<=n-2; j++)
                {
                    printf(" ");
                }
                for(int j=1; j<=1; j++)
                {
                    printf("*");
                }
                printf("\n");
          }
    }
}
