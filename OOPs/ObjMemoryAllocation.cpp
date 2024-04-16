#include <iostream>
using namespace std;

class MyClass {
public:
  MyClass() {
    cout << "MyClass object created" << endl;
  }

  ~MyClass() {
    cout << "MyClass object destroyed" << endl;
  }
};

int main() {
  MyClass myObject;

  // The object is destroyed here
  return 0;
}

//  object memory allocation in C++.
/*
When an object is created, memory is allocated for its data members. The memory is allocated in the heap, which is a region of memory that is managed by the program. The size of the memory allocated is equal to the size of the object's data members.
When an object is destroyed, the memory allocated for its data members is deallocated. The deallocation is done automatically by the program.
*/