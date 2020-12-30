//
// Created by TAWFIQ'ashraf on 11/26/2020.
//
//
// Created by TAWFIQ'ashraf on 11/26/2020.
//

//
// Created by TAWFIQ'ashraf on 11/15/2020.
//
#include<vector>
#include<iostream>
using namespace std;

class arrshellSort{
private:
    vector <double> v;
    int nElems;
public:
    arrshellSort(int Max):nElems(0){
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

    void shellSort(int m)
    {
        int inner ,outer;
        long temp;
        int h=1;
        while(h<=nElems/3)
            h=h*3+1;//1,4,13,40j

            while(h>0)
            {
                for(outer=h;outer<nElems;outer++)
                {
                    temp=v[outer];
                    inner=outer;
                    //one subpass (eg 0,4,8)
                    while(inner>h-1&&v[inner-h]>=temp)
                    {
                        v[inner]=v[inner-h];
                        inner-=h;
                    }
                    v[inner]=temp;
                }
                h=(h-1)/3;
            }



    }

};



