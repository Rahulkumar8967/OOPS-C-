#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int main(){

cout <<"Enter a string "<<endl;
string inputString;
getline(cin, inputString);
// Display an length of string 
cout <<"Length of the string is "<<inputString.length()<<endl;

// store the string in a file
ofstream outputFile("output.txt");
if(outputFile.is_open()){
    outputFile<<inputString;
    outputFile.close();
    cout<<" string stored in the file name output.txt "<<endl;
}else{
    cerr<<"Enable to open a file writing "<<endl;
    return 1;
}
// fetch the stored characters from file
ifstream inputputFile("output.txt");
if(inputputFile.is_open()){
    string storedString;
    getline(inputputFile, storedString);
    inputputFile.close();
    cout<<"characters fetch from the file "<<storedString<<endl;
    } else{
        cerr<<" Enable to open file for reading "<<endl;
        return 1;
    }

    return 0;
}