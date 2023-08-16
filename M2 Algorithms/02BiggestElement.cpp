// Given an array find biggest element
#include <iostream>
#include <climits>
using namespace std;

void biggestElement(int arr[],int n){
    int maxEle = INT_MIN;
    for (int i = 0;i<n; i++){
        maxEle = max(maxEle,arr[i]);
    }cout<<maxEle;
}
int main(){
    int n;
    cout<<"Number of elements in array ";
    cin>>n;
    int arr[n];
    for (int i = 0;i<n;i++){
        cin>>arr[i];
    }
    biggestElement(arr,n);
return 0;
}
