#include <iostream>
using namespace std;

class Human {
public:
    int height;
    int weight;
    int age;

public:
    int getAge() {
        return this->age;
    }

    void setWeight(int w) {
        this->weight = w;
    }
};

class Male : public Human {
public:
    string color;

    void sleep() {
        cout << "Male sleeping" << endl;
    }
};

int main() {
    Male object1;
    object1.weight = 70; // setting weight for object1
    object1.height = 180; // setting height for object1
    object1.color = "White"; // setting color for object1
    cout << object1.weight << endl;
    cout << object1.height << endl;
    cout << object1.color << endl;
    return 0;
}
