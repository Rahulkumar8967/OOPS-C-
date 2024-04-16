// first occ ==left occ
//last occ == right occ
#include<iostream>
using namespace std;
int firstOcc(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
     ans=mid;
     e=mid-1;
        }else if(key> arr[mid]){
    s=mid+1;
        }else if(key < arr[mid]){
    e=mid-1;
        }
         mid = s+(e-s)/2;
    }
    return ans;
}
int lastOcc(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
     ans=mid;
     s=mid+1;
        }else if(key> arr[mid]){
    s=mid+1;
        }else if(key < arr[mid]){
    e=mid-1;
          }
         mid = s+(e-s)/2;
    }
    return ans;
}
int main(){
int even[5]={2,5,3,3,8};
cout <<"first occurance of 3 at Index " << firstOcc(even,5,3) <<endl;
cout <<"last occurance of 3 at Index " << lastOcc(even,5,3) <<endl;
}