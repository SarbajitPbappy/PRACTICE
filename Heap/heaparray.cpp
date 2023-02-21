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
};
//nlogn
vector<int>heapSort(vector<int>a){
    MaxHeap h;
    h.build_from_array(a);
    vector<int>ans;
    for(int i=0;i<a.size();i++){
        ans.push_back(h.ExtractMax());
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main(){
    vector<int>a={1,2,3,4,10,9,5,7};
    // p.build_from_array(a);
    // p.printHeap();
    vector<int>sorted=heapSort(a);
    for(int i=0;i<sorted.size();i++){
        cout<<sorted[i]<<" ";
    }
    cout<<endl;
}