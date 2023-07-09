#include<iostream>
using namespace std;

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
  
    for(int i=0; i<=2*n-2; i++)
        {
            for(int j=0; j<=2*n-2; j++)
            {
                int top=i;
                int left=j;
                int right=(2*n-2)-j;
                int down=(2*n-2)-i;
                
                cout<< (n - min(min(top,down),min(left,right)))<<" ";
            }
            printf("\n");
        }
}
