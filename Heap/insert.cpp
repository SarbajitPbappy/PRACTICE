#include<bits/stdc++.h>
using namespace std;
class MaxHeap{ 
    vector<int>nodes;
public:
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
            if(nodes.size()>largest && nodes[largest]<nodes[l]){
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
};
int main(){
    MaxHeap p;
    p.insert(4);
    p.insert(7);
    p.insert(9);
    p.insert(1);
    p.insert(10);
    p.insert(20);
    p.insert(30);
    cout<<"Max Element: "<<p.getMax()<<endl;
    p.printHeap();
    p.deleteHeap(0);
    p.printHeap();
}