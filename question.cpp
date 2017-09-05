#include <iostream>

using namespace std;

class example
{
private:
    int num;

public:
    void setNum(int val) {num = val;}
    void showNum(void);
};

void example::showNum()
{
    cout << num << endl << endl;

}

void test(example &ob1)
{
    ob1.setNum(300);
    ob1.showNum();
}

int main()
{
    example obj1, ob[2], *p;
    ob[0].setNum(100);
    ob[1].setNum(200);

    p = &ob[0];
    //p->showNum();
    (p+1)->showNum();
    //(p[1])->showNum();
    //(p[0])->showNum();
    test(obj1);

    return 0;
}
