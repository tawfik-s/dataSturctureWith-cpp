//
// Created by TAWFIQ'ashraf on 11/13/2020.
//
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class ArrayBub{
private:
    vector <double> v;
    int nElems;
    void swab(int one,int two)
    {
        double l=v[one];
        v[one]=v[two];
        v[two]=l;
    }
public:
    ArrayBub(int Max):nElems(0)
    {
        v.resize(Max);  //arr[1]
    }
    void insert(double value)
    {
        v[nElems]=value;
        nElems++;
    }
    void display()
    {
        cout<<endl;
        for(auto i:v)
            cout<<i<<" ";
        cout<< endl;
    }
    void bubbleSort()
    {
         bool flag=true;

        for(int i=0;i<nElems-1;i++)
        {
            for(int j=0;j<nElems-1-i;j++)    // j<nElems-1-i
            {
                if(v[j]>v[j+1])
                {
                    swab(j, j + 1);
                    flag = false;
                }
            }
            if(flag==true)
            {
                break;
            }
        }
    }


};
