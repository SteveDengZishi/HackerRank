#include<iostream>
#include<string>

using namespace std;


template<class Object>
struct Node{
    Object data;
    Node* next;
    Node(Object x):data(x),next(nullptr){}
};

template<class Object>
class queue{
public:
    //constructor
    queue():size(0),front(nullptr),tail(nullptr){ }
//always check whether is empty
bool isEmpty(){return size==0;}

const Object& top(){
    if(isEmpty()){
        throw underflow_error("empty");
    }
    else return front->data;
}

    Object& pop(){
        if(isEmpty()){
            throw underflow_error("empty");
        }
        else{
            Node<Object>* tmp=front;
            front=front->next;
            -- size;
            return std::move(tmp->data);
        }
    }
    
    void enqueue(Object& x){
        if(isEmpty()){
            Node<Object> tmp=Node<Object>(x);
            front=& tmp;
            tail=& tmp;
        }
        else{
            Node<Object> tmp=Node<Object>(x);
            tail->next=& tmp;
            tail=tail->next;
        }
        ++size;
    }
    
    void dequeue(){
        if(isEmpty()){
            throw underflow_error("empty");
        }
        else if(size==1){
            front=nullptr;
            tail=nullptr;
        }
        else{
            Node<Object>* tmp=front;
            front=front->next;
            delete tmp;
            tmp=nullptr;
        }
        -- size;
    }
    
    
private:
    Node<Object>* front;
    Node<Object>* tail;
    int size;
};
