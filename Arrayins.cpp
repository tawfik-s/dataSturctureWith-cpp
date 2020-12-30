//
// Created by TAWFIQ'ashraf on 11/15/2020.
//
#include<vector>
#include<iostream>
using namespace std;

class arrayins{
private:
    vector <double> v;
    int nElems;
public:
    arrayins(int Max):nElems(0){
        v.resize(Max);       // arr[max]
    }
    void insert(double value)
    {           //0 1 2
        v[nElems]=value;
        nElems++;
    }
    void display()
    {
        for(int i=0;i<nElems;i++)
            cout<<v[i]<<" ";
        cout<<endl;
    }
    ///////////////////////////////////////////////////////////////////////////
    void insertionSort(){
        double key;
        int j;
        for(int i=1;i<nElems;i++)     // i start from 1
        {
            key=v[i];                // to save the value of v[i]
            j=i-1;              // العنصر الي قبل j
            while (j>=0&&v[j]>key)  // بافتراض ان كل العناصر مرتبة قبل key
            {
                v[j+1]=v[j];
                j--;
            }
            v[j+1]=key;
        }

    }
    ///////////////////////////////////////////////

};

