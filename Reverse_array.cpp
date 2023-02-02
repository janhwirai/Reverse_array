#include<iostream>
using namespace std;
int main(){
    cout<<"Enter length of an array ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of an array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Elements in reverse order ";
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}