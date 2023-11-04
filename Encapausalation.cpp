#include <iostream>
using namespace std;

class student {
private:
    string name;
    int age;
    int height;

public:
    void setAge(int newAge) {
        this->age = newAge;
    }

    int getAge() {
        return this->age;
    }
};

int main() {
    student first;
    first.setAge(20); // You can set the age using the setAge method
    cout << "sab this chal raha h" << endl;
    return 0;
}
