// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     string v;
//     cin>>n>>v;
//     int count=0;
//     for (int i = 0; i < n; i++)
//     {
//         if(v[i]=='8'){
//             count++;
//         }
//     }
//     cout<<min(count,n/11)<<endl;
// }

#include <iostream>
#include <string> // For converting n to string

using namespace std;

// Function to calculate the sum of digits of x
int sumOfDigits(long long x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

// Function to find the largest sum of digits S(a) + S(b) for a+b=n
int largestDigitSum(long long n) {
    // Finding a as n - 10^m + 1, where 10^m is the smallest power of 10 greater than n
    long long a = 1; // Initialize a to the smallest value contributing to the sum
    while (a * 10 <= n) {
        a *= 10;
    }
    a = n - a + 1;

    // b is simply n - a
    long long b = n - a;

    // Calculate and return S(a) + S(b)
    return sumOfDigits(a) + sumOfDigits(b);
}

int main() {
    long long n;
    cin >> n;

    cout << largestDigitSum(n) << endl;

    return 0;
}
