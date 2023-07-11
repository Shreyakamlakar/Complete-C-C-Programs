#include<iostream>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};
    int n=5;
    cout<< "The array is: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    int temp;
    
        for(int i=0; i<n/2; i++)
        {
            temp=arr[n-i-1];
            arr[n-i-1]=arr[i];
            arr[i]=temp;
        }
    
    cout<< "The reversed array is: ";
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
}
