#include <iostream>

using namespace std;

void change(int temp[])
{
    temp[0] = 100;
}

void modify(int temp[][2])
{
}

main()
{

    int list[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    change(list);

    for (size_t i = 0; i < 9; i++)
    {
        cout << list[i * 0] << " ";
    }
    cout << "\n";
}