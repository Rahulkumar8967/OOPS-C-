#include<iostream>
using namespace std;

/*
student --> test
student -->sports
test --> result
sports --> result
*/

class student{
    protected:
    int roll_no;
    public:
    void set_number(int a){
        roll_no = a;
    }
    void print_number(void){
        cout<<"your roll no is "<<roll_no<<endl;
    }
};
class Test : virtual public student{
    protected:
    float maths, physics;
    public:
    void set_marks(float m1, float m2){
        maths = m1;
        physics = m2;
    }
    void print_marks(void){
        cout<<"your result is here: "<<endl
            <<" Maths: "<< maths<<endl
            <<"physics: "<< physics<<endl;
    }
};

class Sports: virtual public student{
protected:
  float score;
  public:
  void set_score(float fix){
    score = fix;
  }
  void print_score(void){
    cout<<"Your PT score is "<<score<<endl;
  }

};

class Result: public Test, public Sports{
    private:
    float total;
    public:
    void display(void){
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout<< "Your total score is: "<<total<<endl;
    }
};


int main()
{
  Result harry;
  harry.set_number(440);
harry.set_marks(78.0, 90);
harry.set_score(9);
harry.display();
  return 0;  
} 
