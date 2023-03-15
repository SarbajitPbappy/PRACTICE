#include<bits/stdc++.h>
using namespace std;
const int max_size =100;
class Queue{
public:
    int arr[max_size];
    int frontIdx;
    int lastIdx;
    Queue(){
        frontIdx = 0;
        lastIdx = -1;
    }
    bool full(){
        return lastIdx==max_size-1;
    }
    bool empty(){
        return frontIdx>lastIdx;
    }
    void enqueue(int value){
        if(full()){cout<<"Queue Is Full"<<endl;
        return;
        }
        lastIdx++;
        arr[lastIdx]=value;
    }
    void dequeue(){
        if(empty()){
            cout<<"Queue Is Empty"<<endl;
            return;
        }
        frontIdx++;
    }
    int front(){
        if(empty()){
            cout<<"Queue Is Empty"<<endl;
            return -1;
        }
        return arr[frontIdx];
    }
};
int main(){
Queue q;
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);
    cout << "Front of queue: " << q.front() << endl;
    q.dequeue();
    cout << "Front of queue: " << q.front() << endl;
    q.dequeue();
    cout << "Front of queue: " << q.front() << endl;
    q.dequeue();
    cout << "Front of queue: " << q.front() << endl;
    q.dequeue();
    return 0;
}