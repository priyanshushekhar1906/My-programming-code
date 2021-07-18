#include<iostream>
using namespace std;
class stack{
    public:
    int*arr;
    int size;
    int top;
    void push(int data);
    void pop();
    void print();
};
class stack*sp=new stack();
int isFull(){
    if(sp->top==sp->size-1){
        return 1;
    }
    return 0;
}
int isEmpty(){
    if(sp->top==-1){
        return 1;
    }
    return 0;
}
void stack::push(int data){
    
    if(isFull()){
         cout<<"Stack is full"<<endl;
    }
    else{
        sp->top++;
        sp->arr[sp->top]=data;
    }
}
void stack::print(){
    for(int i=0;i<=sp->top;i++){
        cout<<sp->arr[i]<<" ";
    }

}
void stack::pop(){
    if(isEmpty()){
        cout<<"\nStack is empty"<<endl;
    }
    top=top-1;
}
int main(){
    sp->size=2;
    sp->arr=(int*) malloc(sp->size*sizeof(int));
    sp->top=-1;
    sp->push(1);
    sp->push(2);
    sp->push(3);
    sp->push(3);
    sp->push(3);
    sp->push(13);
    // sp->push(3);
    // sp->push(3);
    // sp->pop();
    // sp->pop();
    // sp->pop();
    // sp->pop();
    sp->print();
    return 0; 
}