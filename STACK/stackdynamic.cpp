#include<bits/stdc++.h>
using namespace std;
//static
class StacK{
    public:
    int *a;
    int stackSize;
    int arrcapacity;
    StacK(){
        a=new int[1];
        arrcapacity=1;
        stackSize=0;
    }
    //logn
    void increaseSize(){
        int *tmp=new int[arrcapacity*2];
        for(int i=0;i<arrcapacity;i++){
            tmp[i]=a[i];
        }
        swap(a,tmp);
        delete[]tmp;
        arrcapacity=arrcapacity*2;
    }
    //1
    void push(int value){
        if(stackSize+1>arrcapacity){
            increaseSize();
        }
        stackSize++;
        a[stackSize-1]=value;
    }
    //1
    void pop(){
        if(stackSize==0){
            return;
        }
        a[stackSize-1]=0;
        stackSize--;
    }
    //return top element of stack
    //1
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