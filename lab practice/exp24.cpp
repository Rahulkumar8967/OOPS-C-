#include<iostream>
using namespace std;
int main(){
cout <<"Default flags "<<hex<< 90<<endl;

cout.setf(ios::showbase);
cout<<"with showbase flag "<< 39<<endl;

cout.unsetf(ios::showbase);
cout<<"without showbase flag "<<endl;

  double pi = 3.14159265358979323846;
  cout<<"Double precision "<<endl;
  cout.precision(4);
  cout<<"precision set to 4 "<<pi<<endl;

  cout.unsetf(ios::fixed);
  cout.precision(6);
  cout<<"precision set to default "<<pi<<endl;



    return 0;
}