//
// Created by TAWFIQ'ashraf on 12/11/2020.
//
#include<iostream>
using namespace std;
class stack{
private:
    int max;
    double *arr;
    int top;
public:
    stack( int max):top(-1),max(max)
    {
        arr=new double[max];
    }
    void push(double value)
    {
        if(top==max-1)
            cout<<"cant push its full"<<endl;
        else
        arr[++top]=value;
    }
    void pop()
    {
        if(top<=-1)
            cout<<"cant pop"<<endl;
        else
        --top;
    }
    double peek(){
        return arr[top];
    }
    bool isEmpty(){
        return (top==-1);
    }
    bool isFull(){
        return (top==max-1);
    }
    void display(){
        cout<<"[";
        for(int i=top;i>=0;i--)
            cout<<" "<<arr[i]<<" ";
        cout<<"]";
    }
};