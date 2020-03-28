#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printx2(int a)
{
    cout << a * 2 << " ";
}

class X
{
public:
    X(int a, int b) : a(a), b(b) {}
    void operator()(int i)
    {
        cout << a + i + b << "\n";
    }

    int a;
    int b;
};

int main()
{
    X cc(2, 3);
    vector<int> a = {1, 2, 3};

    for_each(a.begin(), a.end(), printx2);
    for_each(a.begin(), a.end(), cc);

    return 0;
}