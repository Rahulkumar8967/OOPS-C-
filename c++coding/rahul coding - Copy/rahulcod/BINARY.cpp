#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int mid=start+(end-start/2);//because 2^31 wale two number adding error problem
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key >arr[mid]){
            start =mid+1;
        }else {
            end =mid-1;
    }
    mid =start+(end-start/2);
}
return -1;
}

int main(){
    int even[6]={2,4,7,8,16,21};
    int odd[5] ={3,8,11,14,16};


int index = binarySearch(even,6,4);
cout <<"index of 12 is"<<index << endl;




    return 0;
}