#include<bits/stdc++.h>
using namespace std;
template<class T>
class StacK{
    public:
    T *a;
    int stackSize;
    int arrcapacity;
    StacK(){
        a=new T[1];
        arrcapacity=1;
        stackSize=0;
    }
    //logn
    void increaseSize(){
        T *tmp=new T[arrcapacity*2];
        for(int i=0;i<arrcapacity;i++){
            tmp[i]=a[i];
        }
        swap(a,tmp);
        delete[]tmp;
        arrcapacity=arrcapacity*2;
    }
    //1
    void push(T value){
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
        stackSize--;
    }
    //return top element of stack
    //1
    T top(){
        if(stackSize==0){
            assert(false);
        }
        return a[stackSize-1];
    }
};
int main()
{
    StacK<double>st;
    st.push(3.5);
    st.push(3.9);
    st.push(3.10);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    //cout<<st.top()<<endl;
    StacK<char>st2;
    st2.push('a');
    st2.push('b');
    st2.push('c');
    cout<<st2.top()<<endl;
    st2.pop();
    cout<<st2.top()<<endl;
    st2.pop();
    cout<<st2.top()<<endl;
    st2.pop();
}