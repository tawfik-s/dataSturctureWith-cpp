//
// Created by TAWFIQ'ashraf on 12/14/2020.
// priority queue.cpp
//

class priorityQueue{
private:
    int maxSize;
    double *Qarr;
    int nElems;
public:
    priorityQueue(int s)
    {
        maxSize=s;
        Qarr=new double[maxSize];
        nElems=0;
    }
    void insert (double item)
    {
        int j;
        if(nElems==0)
            Qarr[nElems++]=item;
        else
        {
            for(j=nElems-1;j>=0;j--)
            {
                if(item>Qarr[j])
                    Qarr[j+1]=Qarr[j];
                else
                    break;
            }
            Qarr[j+1]=nElems;
            nElems++;
        }
    }
     double remove()
    {
        return Qarr[--nElems];
    }
    double peekMin()
    {
        return Qarr[nElems-1];
    }
    bool isEmpty()
    {
        return (nElems==0);
    }
    bool isFull() {
        return (nElems==maxSize);
    }

};