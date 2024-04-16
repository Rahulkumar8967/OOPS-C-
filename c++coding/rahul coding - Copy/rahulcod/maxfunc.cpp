#include <iostream>
#include <cstdio>
using namespace std;
int maxValue(int a ,int b, int c, int d){
 int maxVal=a;
if(b>maxVal){
 maxVal=b;
}if(c>maxVal){
   maxVal=c;
}if(d>maxVal){
   maxVal=d;
}
return maxVal;
}

int main() {
    int a, b, c, d;
   cin >>a >> b >>c >>d;
     int maxVal = maxValue(a, b, c, d);
     cout << maxVal <<endl;
return 0 ;
}