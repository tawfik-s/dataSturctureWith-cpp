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

        int h =m/2;   // increment is integer = the half of the array element
        // increment is a space between each element
        while(h != 0)
        {
            int i=h,j,key;  // key العنصر الي عليه الدور
            while(i<m)
            {
                key=v[i];
                j=i-h;       //عشان j تجيب العنصر الي قبله
                while(j>=0 && v[j]>key)
                {
                    v[i] = v[j];
                    j=j-h;

                }
                v[j+h]=key;
                i=i+h;
            }
            h=h/2;
        }
    }

};

