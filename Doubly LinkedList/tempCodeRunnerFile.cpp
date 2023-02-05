void insert_at_anyIndex(int index, int value){
        if(index<0 || index>size){
            return;
        }
        if(index==0){
            insert_at_head(value);
            return;
        }
        size++;
        node *a=head;
        int current_index=0;
        while(current_index!=index-1){
            a=a->next_node;
            current_index++;
        }
        node * NewNode=create_new_node(value);
        NewNode->next_node=a->next_node;
        NewNode->prev_node=a;
        node *b=a->next_node;
        b->prev_node=NewNode;
        a->next_node=NewNode;
    }