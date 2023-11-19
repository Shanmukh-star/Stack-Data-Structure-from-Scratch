//Shanmukh
#include<bits/stdc++.h>
using namespace std;
class Elem
{
    private:
      int data;
    public:
      Elem()
      {
        data=-1;
      }
      Elem(int d)
      {
        data=d;
      }
    friend class Stack;
};
class Stack
{
    private:
      Elem* Estack;
      int top;
      int capacity;
    public:
       Stack(int cap=16)
       {
        capacity=cap;
        top=0;
        Estack = new Elem[cap];
       }
       bool isEmpty();
       bool isFull();
       int Size();
       void Pop();
       void Push(Elem);
       void TopData();
       Elem Top();
};
bool Stack::isEmpty()
{
    if(top==0)
    {
        return true;
    }
    else return false;
}
bool Stack :: isFull()
{
    if(top==capacity)
    {
        return true;
    }
    else return false;
}
int Stack::Size()
{
    return top;
}
void Stack:: Pop()
{
    if(top==0) return ;
    top--;
    Estack[top].~Elem();
}
void Stack:: Push(Elem a)
{
    if(top==capacity) return;
    Estack[top]=a;
    top++;
}
Elem Stack :: Top()
{
    return Estack[top-1];
}
void Stack :: TopData()
{
    cout<<Estack[top-1].data<<endl;
}
int main()
{
    int a;
    Stack ID;
    for(int i=0;i<16;i++)
    {
        cin>>a;
        Elem* e = new Elem(a);
        ID.Push(*e);
    }
    ID.TopData();
}
