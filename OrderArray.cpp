//
// Created by TAWFIQ'ashraf on 11/10/2020.
//
#include<iostream>
#include<vector>
using namespace std;

class OrderArray{
private:
    vector <double>v;
    int nElems;
public:
    OrderArray(int max):nElems(0){
        v.resize(max);
    }
    int getsize(){
        return nElems;
    }
    int find(double sk)
    {
        int lower=0;
        int upper=nElems-1;
        int curE;
        while (true)
        {
            curE=(lower+upper)/2;
            if(v[curE]==sk)
                return curE;
            else if(lower>upper)
                return nElems;
            else
            {
                if(v[curE]<sk)
                    lower=curE+1;
                else
                    upper=curE-1;
            }
        }
    }
    void insert(double value)
    {
        int i;
        for(i=0;i<nElems;i++)
        {
            if(v[i]>value)
                break;
        }
        for(int k=nElems;k>i;k--)
        {
            v[k]=v[k-1];
        }
        v[i]=value;
        nElems++;
    }
    bool remove(double value){
        int i=find(value);
        if(i==nElems)
            return false;
        else
        {
            for(int k=i;k<nElems-1;k++)
            {
                v[k]=v[k+1];
            }
            nElems--;
            return true;
        }
    }
    void display()
    {
        cout<<"[";
        for(auto i:v)
            cout<<i<<" ";
        cout<<"]"<<endl;
    }
};
