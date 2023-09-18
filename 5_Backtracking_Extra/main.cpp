#include <iostream>
using namespace std;

int main()
{
    char abc[] = "abcdefghi";
    for (int i = 0; i < 5; i++)
    {
        cout << abc[i] + abc[i + 1] << endl;
    }

    return 0;
}