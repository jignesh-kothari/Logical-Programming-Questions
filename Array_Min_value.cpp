#include <iostream>
using namespace std;
int main() {
    
    int n,i,min;
    cout<<"Enter Size of Array : ";
    cin>>n;
    int arr[n];
    
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    min=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }
    cout<<"Min Element is : "<<min;
    return 0;
}
