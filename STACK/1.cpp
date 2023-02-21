#include<bits/stdc++.h>

using namespace std;

template<class T>
class Queue
{
public:
    T *arr;
    int capacity;
    int l,r;
    int size;
    Queue()
    {
        arr = new T [1];
        capacity = 1;
        l = 0;
        r = -1;
        size = 0;
    }
    void remove_circular()
    {
        if(l>r)
        {
            T *tmp = new T[capacity];
            int index = 0;
            for(int i = l; i<capacity; i++)
            {
                tmp[index] = arr[i];
                index++;
            }
            for(int i = 0; i<=r; i++)
            {
                tmp[index] = arr[i];
                index++;
            }
            swap(tmp,arr);
            l = 0;
            r = capacity-1;
            delete [] tmp;
        }
    }
    void increse_size()
    {
        remove_circular();

        T *tmp = new T[capacity*2];
        for(int i = 0; i<capacity; i++)
        {
            tmp[i] = arr[i];
        }
        swap(arr,tmp);
        capacity = capacity*2;
        delete [] tmp;
    }
    void enque(T value)
    {
        if(size==capacity)
        {
            increse_size();
        }
        r++;
        if(r == capacity)
        {
            r = 0;
        }
        arr[r] = value;
        size++;
    }
    void deenque()
    {
        if(size==0)
        {
            cout<<"Empty"<<"\n";
            return ;
        }
        l++;
        if(l == capacity)
        {
            l = 0;
        }
        size--;
    }
    T front()
    {
        if(size==0)
        {
            cout<<"Empty"<<"\n";
            return -1;
        }
        return arr[l];
    }
};

int main()
{
    Queue<int> q;
    q.enque(1);
    q.enque(2);
    q.enque(3);
    q.enque(4);
    cout<<q.front()<<"\n";
    q.deenque();
    cout<<q.front()<<"\n";
    q.deenque();
    cout<<q.front()<<"\n";
    q.deenque();
    cout<<q.front()<<"\n";
    q.enque(5);
    cout<<q.front()<<"\n";
    q.deenque();
    q.enque(6);
    cout<<q.front()<<"\n";
    q.deenque();
    cout<<q.front()<<"\n";
    q.deenque();
    cout<<q.front()<<"\n";
    return 0;
}
