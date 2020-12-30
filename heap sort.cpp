//#include<iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
////#include "Arrayins.cpp"
////#include "ArrMergeSort.cpp"
////#include"knuthShellSortAlgorithm.cpp"
//using namespace std;
//void heapify(int arr[],int n,int i)
//{
//    int l=2*i+1;
//    int r=2*i+2;
//    int max=i;
//    if(l<n&&arr[l]>arr[max])
//        max=l;
//    if(r<n&&arr[r]>arr[max])
//        max=r;
//    if(max !=i)
//    {
//        swap(arr[i],arr[max]);
//        heapify(arr,n,max);
//    }
//}
//void buildHeap(int arr[],int n)
//{
//    for(int i=n/2-1;i>=0;i--)
//        heapify(arr,n,i);
//}
//void heapSort(int arr[], int n)
//{
//    buildHeap(arr,n);
//    for(int i=n-1;i>=0;i--)
//    {
//        swap(arr[0],arr[i]);
//        heapify(arr,i,0);
//    }
//}
//
//int main(){
//    int arr[]={20,50,60,30,40,10};
//    heapSort(arr,6);
//    for(auto i:arr)
//        cout<<i<<endl;
//
//    return 0;
//}
//
//
//
//
//
//
//
//
////