#include<bits/stdc++.h>
using namespace std;

class MaxHeap
{
public:
    vector<int> nodes;

    void up_heapify(int idx)
    {
        idx=nodes.size()-1;
        while(idx>0 && nodes[idx]<nodes[(idx-1)/2])
        {
            swap(nodes[idx],nodes[(idx-1)/2]);
            idx=(idx-1)/2;
        }
    }

    void insert(int x)
    {
        nodes.push_back(x);
        up_heapify(nodes.size() - 1);
    }

    void printHeap()
    {
        for(int i=0; i<nodes.size(); i++)
        {
            cout<<nodes[i]<<" ";
        }
        cout<<endl;
    }

    void down_heapify(int idx)
    {
        while(1)
        {
            int smallest=idx;
            int l=2*idx+1;
            int r=2*idx+2;
            if(nodes.size()>l && nodes[smallest]>nodes[l])
            {
                smallest=l;
            }
            if(r<nodes.size() && nodes[smallest]>nodes[r])
            {
                smallest=r;
            }
            if(smallest==idx)
                break;
            swap(nodes[idx], nodes[smallest]);
            idx=smallest;
        }
    }
    void deleteHeap(int idx)
    {
        if(idx>=nodes.size()) return;
        swap(nodes[idx],nodes[nodes.size()-1]);
        nodes.pop_back();
        if(idx<nodes.size())
        {
            down_heapify(idx);
            up_heapify(nodes.size()-1);
        }
    }
    int getSize()
    {
        return nodes.size();
    }
};

class MinHeap
{
public:
    MaxHeap mx;

    void insert(int x)
    {
        mx.insert(x);
    }

    void Delete(int idx)
    {
        mx.deleteHeap(idx);
    }

    int getMin()
    {
        return mx.nodes[0];
    }
};

int main()
{
    MinHeap p;
    p.insert(4);
    p.insert(7);
    p.insert(9);
    p.insert(1);
    p.insert(10);
    p.insert(20);
    p.insert(30);
    p.insert(40);
    p.insert(100);
    p.insert(0);
    p.insert(-1);
    cout<<"Min Element: "<<p.getMin()<<endl;
    p.Delete(2);
}
