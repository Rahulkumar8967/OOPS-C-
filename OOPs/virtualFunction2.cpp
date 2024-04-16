#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()
    {
    }
};
class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string s, float r, float v1) : CWH(s, r)
    {
        videoLength = v1;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is: " << videoLength << " minutes" << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing Text tutorial with title Django tutorial " << title << endl;
        cout << "Ratings of this text tutorial: " << rating << "out of 5 stars" << endl;
        cout << "No. of words in this text tutorial is: " << words << "words" << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // for code with Harry Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);
  //  djVideo.display();

  // for code with harry Text
  title = "Django tutorial Text ";
  words = 433;
  rating = 4.3;
  CWHText djText(title, rating, words);
  djText.display();

  CWH* Tuts[2];
  Tuts[0] = &djVideo;
Tuts[1] = &djText;

Tuts[0]->display();
Tuts[1]->display();



    return 0;
}

/*
// Rules for virtual functions 
1. They cannot be static
2. They are accessed by object pointers
3. virtual function can be a friend of another class
4. A virtual function in base class might not be used.
5. If a virtual function is defined in a base class, There is no necessity of
redefining in the derived class


*/