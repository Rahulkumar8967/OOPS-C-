#include<iostream>
using namespace std;

 int main(){
string value = "123";
int num;

 num = stoi(value);
cout <<" string to int conversion "<< num<<endl;


int anotherInt = 456 ;
string intString;
intString = to_string(anotherInt);
cout<<"int to string conversion "<<intString<<endl;

    return 0;
}
