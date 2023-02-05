 #include<bits/stdc++.h>
 using namespace std;
 //vector insert=== v.insert(v.begin()+i);
 //memory complexity O(n)
 class Array{
    private:
        int *array;
        int capacity;
        int size;
        void Increase_capacity(){
                capacity = capacity*2;
                int *temp=new int[capacity];
                for(int i=0;i<size;i++){
                    temp[i]= array[i];
                }
                delete[] array;
                array=temp;
        }
    public:
        Array(){
            array = new int[1];
            capacity=1;
            size=0;
        }
    //time complexity of push_back O(1) if capacity==size then O(n)
    void Push_Back(int x){
        if(capacity==size){
            Increase_capacity();
        }
        array[size++]=x;
    }
    //O(size-position) O(size)
    void Insert(int position, int value){
        if(capacity==size){
            Increase_capacity();
        }
        for(int i=size-1; i>=position; i--){
            array[i+1]=array[i];
        }array[position]=value;
        size++;
    }
    //O(size)
    void print(){
        for(int i=0;i<size;i++){
            cout<<array[i]<<" ";
        }
        cout<<endl;
    }
    //O(1)
    int getSize(){
        return size;
    }
    //O(1)
    int getElement(int index){
        if(index>=size){
            cout<<"Error: "<<index<<endl;
            return -1;
        }
        return array[index];
    }
    //O(1)
    void Pop_back(){
        if(size==0){
            cout<<"Error size is 0"<<endl;
            return;
        }
        size--;
    }
    //O(size)
    void erase(int position){
        if(position>=size){
            cout<<"Error position"<<endl;
            return;
        }
        for(int i=position+1;i<size;i++){
            array[i-1]=array[i];
           // swap(array[i-1],array[i]);
        }
        size--;
    }
 };
 int main(){
    Array a;
    a.Push_Back(10);
    a.Push_Back(20);
    a.Push_Back(30);
    a.Push_Back(40);
    a.Push_Back(50);
    a.Insert(1,5);
    a.print();
    // cout<<a.getSize()<<endl;
    // for(int i=0; i<a.getSize(); i++){
    //     cout<<a.getElement(i)<<endl;
    // }
    a.Pop_back();
    a.print();
    a.Pop_back();
    a.print();
    a.erase(1);
    a.print();
 }