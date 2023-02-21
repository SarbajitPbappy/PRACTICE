#include <bits/stdc++.h>
using namespace std;
void deleteValue(list<int> &l, int value)
{
    auto it = l.begin();
    while (it != l.end())
    {
        if (*it == value)
        {
            l.erase(it);
            break;
        }
        it++;
    }
}
int main()
{
    list<int> l = {7, 3, 8, 4, 5, 4};
    deleteValue(l, 4);
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
