#include<bits/stdc++.h>
using namespace std;
class Queue{
public:
    int *a;
    int arrayCapacity;
    int l,r,size;//l=start,r=end
    Queue(){
        a=new int[1];
        arrayCapacity=1;
        l=0;
        r=-1;
        size=0;
    }
    int getSize(){
        return size;
    }
    void RemoveCircular(){
        if(l>r){
        int *temp=new int[arrayCapacity];
        int idx=0;
        for(int i=l;i<arrayCapacity;i++){
            temp[idx]=a[i];
            idx++;
        }
        for(int i=0;i<=r;i++){
            temp[idx]=a[i];
            idx++;
        }
        swap(temp,a);
        l=0;
        r=arrayCapacity-1;
        delete[] temp;
        }
    }
    void increaseSize(){
        RemoveCircular();
        int *temp=new int[arrayCapacity*2];
        for(int i=0;i<arrayCapacity;i++){
            temp[i]=a[i];
        }
        swap(a,temp);
        arrayCapacity*=2;
        delete[] temp;
    }
    //1
    void enqueue(int value){
        if(size==arrayCapacity){
            increaseSize();
        }
        size++;
        r++;
        if(r==arrayCapacity){
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
        if(l==arrayCapacity){
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