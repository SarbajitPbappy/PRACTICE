#include<bits/stdc++.h>
using namespace std;
const int max_size =500;
class Queue{
public:
    int a[max_size];
    int l,r,size;//l=start,r=end
    Queue(){
        l=0;
        r=-1;
        size=0;
    }
    int getSize(){
        return size;
    }
    //1
    void enqueue(int value){
        if(size==max_size){
            cout<<"Queue Is Full!"<<endl;
            return;
        }
        size++;
        r++;
        if(r==max_size){
            r=0;
        }
        a[r]=value;
    }
    //1
    void dequeue(){
        if(size==0){
            cout<<"Queue Is Empty!"<<endl;
            return;
        }
        size--;
        l++;
        if(l==max_size){
            l=0;
        }
    }
    int front(){
        if(l>r){
            cout<<"Queue Is Empty!"<<endl;
            return -1;
        }
        return a[l];
    }
};
int main(){
    Queue q;
    q.enqueue(1);
    q.enqueue(12);
    q.enqueue(3);
    cout<<"Q Size : "<<q.getSize()<<endl;
    cout<<"First Element : "<<q.front()<<endl;
    q.dequeue();
    cout<<"First Element : "<<q.front()<<endl;
    q.dequeue();
    cout<<"First Element : "<<q.front()<<endl;
    q.dequeue();
    cout<<"Q Size : "<<q.getSize()<<endl;
}