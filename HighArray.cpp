//
// Created by TAWFIQ'ashraf on 11/8/2020.
//

#include<vector>
#include<iostream>
using namespace std;

 class HighArray{
 private:
    vector <double> v;
    int nElems;
 public:
     HighArray(){
         nElems=0;
     }
     HighArray(int max):nElems(0)
     {
         v.resize(max);
     }
     bool find(double searchKey)   //find specified value
     {
         for(int i=0;i<nElems;i++)
         {
             if(v[i]==searchKey)
             {
                 return true;
             }

         }
         return false;
     }
     void insert(double value)
     {
         v[nElems]=value;
         nElems++;        // increase size of the deque;
     }
     void remove(double value)
     {
         if(find(value)){
             int i=0;
             for(;i<nElems;i++)
             {
                 if(v[i]==value)
                    break;
             }
            for(int k=i;k<nElems-1;k++)
            {
                v[k]=v[k+1];
            }
            nElems--;
         }
     }
     void display(){
         for(int i=0;i<nElems;i++)
         {
             cout<<v[i]<<" ";
         }
         cout<<endl;
     }
};