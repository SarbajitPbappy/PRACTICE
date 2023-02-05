#include<bits/stdc++.h>
using namespace std;
const int MAX_SIZE=500;
//static
class StacK{
    public:
    int a[MAX_SIZE];
    int stackSize;
    StacK(){
        stackSize=0;
    }
    void push(int value){
        if(stackSize+1>MAX_SIZE){
            return;
        }
        stackSize++;
        a[stackSize-1]=value;
    }
    void pop(){
        if(stackSize==0){
            return;
        }
        a[stackSize-1]=0;
        stackSize--;
    }
    //return top element of stack
    int top(){
        if(stackSize==0){
            return -1;
        }
        return a[stackSize-1];
    }
};
int main(){
    StacK st;
    st.push(3);
    cout << st.top() << endl;
    st.push(4);
    cout << st.top() << endl;
    st.push(5);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
}