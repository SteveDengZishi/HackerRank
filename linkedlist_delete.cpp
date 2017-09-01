/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    Node* tmp=head;
    int i=0;
    Node* prev;
   
    //when the first item is removed, need to change head
    if(position==0){
        head=head->next;
        delete tmp;
        tmp=nullptr;
    }
    
    //else head is not changed
    else{
        tmp=tmp->next;
        prev=head;
        i++;
        while(i<position){
            tmp=tmp->next;
            prev=prev->next;
            i++;
        }
        prev->next=tmp->next;
        delete tmp;
        tmp=nullptr;
    }
    return head;
}
