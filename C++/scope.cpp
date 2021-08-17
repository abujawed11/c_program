#include<iostream>
using namespace std;
int n = 25;
int main()
{
    int x = 2;
    {
        int u = 3;
        cout << ::n << endl;
    }
    return 0;
}