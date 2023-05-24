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
        cout << "学生ID: " << id << ", 语文分数: " << yw << ", 数学分数: " << sx << ", 总分: " << sum << endl;
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

    sort(s, s + 5); // 使用sort函数对学生对象进行排序

    cout << "降序排序后的学生信息：" << endl;
    for (int i = 0; i < 5; i++) {
        s[i].prt();
    }

    return 0;
}
