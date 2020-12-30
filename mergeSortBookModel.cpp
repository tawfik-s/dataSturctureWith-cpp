//
// Created by TAWFIQ $ on 12/15/2020.
//

//
// Created by TAWFIQ'ashraf on 11/22/2020.
//
#include <iostream>
#include <vector>
using namespace std;
class ArrMergeSort{
private:
    vector <int> arr;
    int nElems;
    void merge(int l,int m,int r)      //  6
    {
        // m=l+(r-l)/2;            //    m is middle    if l=0 &&r=6  m=2  0,1,2,3,4,5
        int i,j,k;
        int n1=m-l+1;            // first subarray is arr[l..m]
        int n2=r-m;             // second sub array number of elements arr[m+1..r]
        int *L=new int [n1];     // the left sub array
        int *R=new int [n2];       // the right subarray
        // ليه استخدمنا الطريقة الي فوق في تعريف Array
        for(i=0; i<n1;i++)
            L[i]=arr[l+i];
        for(j=0; j<n2;j++)
            R[j]=arr[m+1+j];

        i=j=0;  //make them equal zero

        k=l;
        // start sorting
        while(i<n1 && j<n2)  // n1 is the size of first array  n2 the size of second array
        {
            if(L[i]<=R[j])      // في حالة عكس الشرط تتغير طريقة الترتيب
            {
                arr[k]=L[i++];

            }
            else
            {
                arr[k] =R[j++];

            }
            k++;
        }
        while (i<n1)
        {
            arr[k++]=L[i++];

        }
        while (j<n2)
        {
            arr[k++]=R[j++];
        }
    }


public:
    ArrMergeSort(int max):nElems(0){
        arr.resize(max);
    }
    void insert(int value)
    {
        arr[nElems]=value;
        nElems++;
    }
    void display(){
        for(int i=0;i<nElems;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    int size(){
        return nElems;
    }

    void mergeSort(int l,int r)
    {
        if(l<r)
        {
            int m=l+(r-l)/2;
            mergeSort(l,m);
            mergeSort(m+1,r);
            merge(l,m,r);
        }
    }


};