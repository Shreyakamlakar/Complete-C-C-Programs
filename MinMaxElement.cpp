#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the length of the array: ";
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int min=1000,max=0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]>=max)
        {
            max=arr[i];
        }

        else
        {
            continue;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]<=min)
        {
            min=arr[i];
        }

        else
        {
            continue;
        }
    }

    cout<<"The maximum number is: "<<max <<"\n";
    cout<<"The minimum element is: "<<min;
}
