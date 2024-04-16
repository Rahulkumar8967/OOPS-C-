#include <iostream>
#include <cstring>
using namespace std;

class person {
    char* name;
    int age;

public:
    person(const char* _name, int _age) {
        name = new char[strlen(_name) + 1];
        age = _age;
    }

    const person* findEldest(const person* other) const {
        return (this->age > other->age) ? this : other;
    }

    void display() const {
        cout << "Name -> " << name << " Age -> " << age << endl;
    }

    ~person() {
        delete[] name;
    }
};

int main() {
    person p1("sonalica", 22);
    person p2("Aarti", 19);
    person p3("Reena", 20);

    p1.display();
    p2.display();
    p3.display();

    const person* Eldest = p1.findEldest(&p2)->findEldest(&p3);
    cout << "The eldest person is:" << endl;
    Eldest->display();

    return 0;
}
