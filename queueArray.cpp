//
// Created by TAWFIQ'ashraf on 12/13/2020.
// circular  queue project
//
//
#include<iostream>
class queue{
private:
    int maxSize;
    int *arr;
    int front;
    int rear;
    int nElements;
public:
     queue(int s){
        maxSize=s;
        nElements=0;
        front=0;
        arr=new int[maxSize];
        rear=-1;   // or rear=maxSize-1      poth when i insert in the first time will be 0
    }
    void insert(int j)
    {      // to insert we move the rear

             rear = (rear + 1) % maxSize;    // or we can use
             /*  we can replace the  rear=(rear+1)%maxSize with
              * if(rear==maxSize-1)
              * rear=-1;
              * rear++;
              */
             arr[rear] = j;
             nElements++;

    }
    int remove()   //don't remove with no check
    {       //when remove we move the front
         int k= arr[front];
         front=(front+1)%maxSize;
         /*
          * if(front==maxSize)
          *   front=0;
          *   front++;
          */
         nElements--;
         return k;
    }
    int peekfront() // we use peek front to take the data in the first element
    {
         return arr[front];
    }
     bool isEmpty()
     {
         return(nElements==0);

     }
    bool isFull()
    {
         return (nElements==maxSize);

    }
    int size()
    {
         return nElements;
    }
    int getFront()
    {
         return front;
    }
    int getRear()
    {
         return rear;
    }

};




