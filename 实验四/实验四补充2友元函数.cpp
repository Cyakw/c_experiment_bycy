#include <iostream>
#include <algorithm>
using namespace std;

class Student {
private:
    int id;
    int yw;
    int sx;
    int sum;

public:
    Student(int id, int yw, int sx) : id(id), yw(yw), sx(sx), sum(yw + sx) {}

    friend bool operator<( Student& s1,  Student& s2);

    void prt() {
        cout << "ѧ��ID: " << id << ", ���ķ���: " << yw << ", ��ѧ����: " << sx << ", �ܷ�: " << sum << endl;
    }
};

bool operator<( Student& s1,  Student& s2) {
    return s1.sum > s2.sum;
}

int main() {
    Student s[5] = {
        Student(1001, 80, 80),
        Student(1002, 70, 70),
        Student(1003, 90, 90),
        Student(1004, 50, 50),
        Student(1005, 60, 60)
    };

    sort(s, s + 5); // ʹ��sort������ѧ�������������

    cout << "����������ѧ����Ϣ��" << endl;
    for (int i = 0; i < 5; i++) {
        s[i].prt();
    }

    return 0;
}
