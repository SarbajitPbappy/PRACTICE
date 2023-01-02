#include<bits/stdc++.h>
using namespace std;
// string erase_first_last(string s){
//     s.erase(s.begin());
//     s.pop_back();
//     return s;
// }
void erase_first_last1(string &s){
    s.erase(s.begin());
    s.pop_back();
}
int main(){
    string s;
    getline(cin, s);
    erase_first_last1(s);
    cout<<s<<endl;
}