#include<iostream>
using namespace std;

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
  
    for(int i=1; i<=n; i++)
    {
        // for printing first half 
        for(int j=1; j<=n-i; j++)
        {
            printf(" ");
        }
            
        int a=65;
        for(int j=1; j<=i; j++)
        {
               
            printf("%c",a);
            a++;
        }
            
        //for printing the second half
        int A=65;
        for(int k=i-1; k>=1; k--)
        {
            printf("%c",A+k-1);
                
        }
            
        printf("\n");
    }
}
