#include <iostream>
using namespace std;

class student
{
protected:
    int roll_no;

public:
    void set_rollnumber(int a)
    {
        roll_no = a;
    }
    void display()
    {
        cout << " student roll no is " << roll_no << endl;
    }
};

class Test : virtual public student
{
protected:
    int physics, chemistry, mathematics;

public:
    void set_number(int p, int c, int m)
    {
        physics = p;
        chemistry = c;
        mathematics = m;
    }
    void displayNumber()
    {
        cout << "Your marks is here " << endl;
        cout << "marks of physics is " << physics << endl;
        cout << "marks of chemistry is " << chemistry << endl;
        cout << "marks of mathematics is " << endl;
    }
};

class sports : virtual public student
{
protected:
    float score;

public:
    void setScore(int s)
    {
        score = s;
    }
    void displayPTscore()
    {
        cout << "Your PT score is " << score << endl;
    }
};

class Result : public Test, public sports
{
private:
    float totalpercentage;

public:
    void displayResult()
    {

        totalpercentage = (mathematics + physics + chemistry + score) / 4 * 100;
      //  display();
      //  displayNumber();
      //  displayPTscore();
        cout << "your percentage is here " << score << "%" << endl;
    }
};

int main()
{
    Result Rahul;
    Rahul.set_rollnumber(46);
    Rahul.set_number(95, 97, 100);
    Rahul.setScore(95);

 Rahul.display();
       Rahul.displayNumber();
     Rahul.displayPTscore();
    Rahul.displayResult();

    return 0;
}