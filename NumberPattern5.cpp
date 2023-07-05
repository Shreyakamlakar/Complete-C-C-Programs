#include<iostream>
using namespace std;

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            for(int j=1; j<=i; j++)
            {
                if(j%2!=0)
                {
                    printf("%d ",1);
                }
                else
                {
                    printf("%d ",0);
                }
            }
            printf("\n");        
        }
        else
        {
            for(int j=1; j<=i; j++)
            {
                              
                if(j%2!=0)
                {
                    printf("%d ",0);
                }
                else
                {
                    printf("%d ",1);
                }
        }
        printf("\n");
        }
              
              
    }
}
