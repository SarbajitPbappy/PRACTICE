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