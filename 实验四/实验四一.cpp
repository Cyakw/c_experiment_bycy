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

    // 输出坐标值
    void putout() {
        cout << "坐标：(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p(5, 10);

    cout << "初始坐标：" << endl;
    p.putout();

    ++p;
    cout << "p++运算符后的坐标：" << endl;
    p.putout();

    --p;
    cout << "p--运算符后的坐标：" << endl;
    p.putout();

    return 0;
}
