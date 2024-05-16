#include <iostream>
using namespace std;

class a {
public:
    float z = 300; // 새로운 public member data

    void showz() {
        cout << "z " << z << endl;
        cout << "y " << y << endl;
        cout << "yy " << gety() << endl;
    }

    void sety(float z) {
        y = z;
    }

    float showy() {
        return y;
    }

    ~a() {
        cout << "z in destructor: " << z << endl;
    }

private:
    float y = 200;

    float gety() {
        return y;
    }
};

int main() {
    a b;
    b.showz(); // 새로운 public member data와 private member function을 활용하여 출력

    return 0;
}
