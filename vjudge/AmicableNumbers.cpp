#include <iostream>
#include <vector>
using namespace std;

int factor(int a)
{
    vector<int> fact;
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            fact.push_back(i);
        }
    }
    int sum = 0;
    for (int j = 0; j < fact.size(); j++)
    {
        sum += fact[j];
    }
    return sum;
}

int main()
{
    for (int i = 1; i <= 100000000; i++)
    {
        int factorSum = factor(i);
        if (factor(factorSum) == i && factorSum != i && i < factorSum) // Updated condition
        {
            cout << i << " " << factorSum << endl;
        }
    }
    return 0;
}
