#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;

public:
    Point(int x, int y) : x(x), y(y) {}

    Point& operator++() {
        ++x;
        ++y;
        return *this;
    }

    
    Point& operator--() {
        --x;
        --y;
        return *this;
    }

    // �������ֵ
    void putout() {
        cout << "���꣺(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p(5, 10);

    cout << "��ʼ���꣺" << endl;
    p.putout();

    ++p;
    cout << "p++�����������꣺" << endl;
    p.putout();

    --p;
    cout << "p--�����������꣺" << endl;
    p.putout();

    return 0;
}
