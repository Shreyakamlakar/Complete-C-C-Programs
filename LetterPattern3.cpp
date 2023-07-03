#include<iostream>
using namespace std;

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    int letter=65;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%c", letter);
        }
        letter++;
        printf("\n");
    }
}

