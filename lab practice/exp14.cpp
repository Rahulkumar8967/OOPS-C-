#include<iostream>
using namespace std;

class Alpha{
    int x;
    public:
Alpha(int i){
    x = i;
    cout<<"Alpha initialised"<<endl;
}
void showAlpha(void){
    cout<<"value of x is "<<x<<endl;
}
};

class beta{
    float y;
    public:
    beta(float j){
        y = j;
        cout<<"Beta initialised "<<endl;
    }
    void showbeta(void){
        cout<<"value of y is "<<y<<endl;
    }
};

class gamma : public beta, public Alpha{
    int m, n;
public:
gamma(int a,int b ,int c, int d): Alpha(a),beta(b) {
m = c;
n = d;
cout<<"gamma initialised "<<endl;
}
void showgamma(void){
    cout<<"value of m is "<<m<<endl;
    cout<<"value of n is "<<n<<endl;
}
};
int main(){
gamma g(5,10,15,20);
g.showAlpha();
g.showbeta();
g.showgamma();

    return 0;
}