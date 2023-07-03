#include<iostream>
using namespace std;

int main()
{
  int n;
  printf("Enter the number of rows: ");
  scanf("%d", &n);
  
  for(int i=n; i>=1; i--)
        {
            int letter=65;
            
            for(int j=i; j>=1; j--)
            {
                printf("%c", letter);
                letter++;
            }
            
            printf("\n");
        }
}
