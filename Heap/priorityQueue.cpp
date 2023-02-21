#include<bits/stdc++.h>
using namespace std;
class MaxHeap{ 
public:
    vector<int>nodes;
    MaxHeap(){

    }
    void up_heapify(int idx){
        while(idx>0 && nodes[idx]>nodes[(idx-1)/2]){//logn
            swap(nodes[idx],nodes[(idx-1)/2]);
            idx=(idx-1)/2;
        }
    }
    void insert(int x){
        nodes.push_back(x);//1
        up_heapify(nodes.size() - 1);
    }
    void printHeap(){
        for(int i=0; i<nodes.size(); i++){
            cout<<nodes[i]<<" ";
        }
        cout<<endl;
    }
    //logn
    void down_heapify(int idx){
        while(1){
            int largest=idx;
            int l=2*idx+1;
            int r=2*idx+2;
            if(nodes.size()>l && nodes[largest]<nodes[l]){
                largest=l;
            }
            if(r<nodes.size() && nodes[largest]<nodes[r]){
                largest=r;
            }
            if(largest==idx)
                break;
            swap(nodes[idx], nodes[largest]);
           idx=largest; 
        }
    }
    void deleteHeap(int idx){
        if(idx>=nodes.size()) return;
        swap(nodes[idx],nodes[nodes.size()-1]);
        nodes.pop_back();//1
        down_heapify(idx);
    }
    //1
    int getMax(){
        if(nodes.empty()) return -1;
        return nodes[0];
    }
    int ExtractMax(){
        if(nodes.empty()) return -1;
        int ret =nodes[0];
        deleteHeap(0);
        return ret;
    }
    //n
    void build_from_array(vector<int>&a){
        nodes=a;
        int n=nodes.size();
        int last_non_leaf= (n/2) - 1;
        for(int i=last_non_leaf; i>=0; i--){
            down_heapify(i);
        }
    }
    int getSize(){
        return nodes.size();
    }
};
class PriorityQueue{
    public:
        MaxHeap h;
        PriorityQueue(){

        }
        void push(int x){
            h.insert(x);
        }
        void pop(){
            h.deleteHeap(0);
        }
        int top(){
            return h.getMax();
        }
        int size(){
            return h.getSize();
        }
};
int main(){
    PriorityQueue pQ;
    pQ.push(5);
    pQ.push(7);
    pQ.push(10);
    pQ.push(1);
    pQ.push(2);
    while(pQ.size()!=0){
        cout<<pQ.top()<<" ";
        pQ.pop();
    }
}