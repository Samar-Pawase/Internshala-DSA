// Algorithm for finding sum of elements of array

#include <iostream>
using namespace std;
int main(){
    int n, sum = 0;
    cout<<"Number of elements ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<< " elements of the array "; 
    for (int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for (int i = 0;i<n;i++){
        sum= sum+arr[i];
    }cout<<"Sum of the elements of array "<<sum;
return 0;
}