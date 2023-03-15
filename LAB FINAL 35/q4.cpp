#include<bits/stdc++.h>
using namespace std;
bool is_blanced(string str){
    stack<char>st;
    for(int i=0; i<str.length();i++){
        char brackets = str[i];
        if(brackets=='(' || brackets=='{' || brackets=='['){
            st.push(brackets);
        }
        else if(brackets==')' || brackets=='}' || brackets==']'){
            if(st.empty()){
                return false;
            }
            char top=st.top();
            if((brackets==')' && top=='(') || (brackets=='}' && top=='{') || (brackets==']' && top=='[')){
                st.pop();
            }
            else {
                return false;
            }
        }
    }
    return true;
}
int main(){
    string s;
    getline(cin, s);
    if(is_blanced(s)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}