#include <iostream>
using namespace std;

class a {
public:
    float z = 300; // ���ο� public member data

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
    b.showz(); // ���ο� public member data�� private member function�� Ȱ���Ͽ� ���

    return 0;
}
