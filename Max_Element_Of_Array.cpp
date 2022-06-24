
#include <iostream>
using namespace std;
int main() {
    
    int n,i,max;
    cout<<"Enter Size of Array : ";
    cin>>n;
    int arr[n];
    
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    cout<<"Max Element is : "<<max;
    return 0;
}
