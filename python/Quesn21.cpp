#include<iostream>
using namespace std;

void SortArray(int arr1[],int arr2[],int n1,int n2,int arr[]) {
    int a=0,b=0,c=0;
    while(a<n1 && b<n2){
        if(arr1[a]<arr2[b])
            arr[c++]=arr1[a++];
        else
            arr[c++]=arr2[b++];
    }
    while(a<n1){
        arr[c++]=arr1[a++];
    }
    while(b<n2){
        arr[c++]=arr2[b++];
    }
}

int main() {
    int n1,n2;
    cout<<"Enter Size of Array1:"<<endl;
    cin>>n1;
    cout<<"Enter Size of Array2:"<<endl;
    cin>>n2;
    int arr1[n1],arr2[n2];
    int SortedArray[n1+n2];
    cout<<"Enter elements of Array1"<<endl;
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter elements of Array2"<<endl;
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    SortArray(arr1,arr2,n1,n2,SortedArray);
    cout<<"Sorted Array is:"<<endl;
    for(int i=0;i<n1+n2;i++){
        cout<<SortedArray[i]<<" ";
    }
}
