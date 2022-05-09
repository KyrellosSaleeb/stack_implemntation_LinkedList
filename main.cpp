#include <iostream>

using namespace std;

class Node
{
public:
    Node(int d)
    {
        data = d;
        link = NULL;
    }
    int data;
    Node *link;
};

class Stack
{
private:
    Node *top;

public:
    Stack()
    {
        top =NULL;
    }

    void Push(int data)
    {
        Node *newNode = new Node(data);
        newNode->link = top;
        top = newNode;
    }

    void Pop()
    {
        int data=0;
        Node *current;
        if(top == NULL)
        {
            cout<<"The Stack is Empty!\n";
        }
        else
        {
            current = top;
            data = top->data;
            top = top->link;
            cout<<"The value popped is: "<<data<<"\n";
            delete (current);
        }
    }
    void display()
    {
        Node *current = top;
        int i=1;
        if(top == NULL)
        {
            cout<<"The Stack is Empty!\n";
        }
        else
        {
            while(current != NULL)
            {
                cout<<"The Value of the index "<<i<<" of the Stack is: "<<current->data<<endl;
                current = current->link;
                i++;
            }
        }
    }
};

int main()
{
    Stack st;
    st.Push(5);
    st.Push(10);
    st.Push(15);
    st.Push(20);
    st.display();
    st.Pop();
    st.display();
    return 0;
}
