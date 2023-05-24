#include <iostream>
using namespace std;

class juzheng {
private:
    int a[2][3];

public:
    void getshu() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> a[i][j];
            }
        }
    }

    void putshu() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    juzheng operator+(juzheng& B) {
        juzheng res;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                res.a[i][j] = a[i][j] + B.a[i][j];
            }
        }
        return res;
    }
};

int main() {
    juzheng A, B;
    cout << "输入数组 A:" << endl;
    A.getshu();
    cout << "输入数组 B:" << endl;
    B.getshu();

    juzheng C = A + B;

    cout << "矩阵 C:" << endl;
    C.putshu();

    return 0;
}
