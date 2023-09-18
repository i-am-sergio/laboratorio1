#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vector1 = {};
    vector1.emplace_back(1999);
    cout << vector1[0];
    return 0;
}