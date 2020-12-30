//
//
//#include <iostream>
//    using namespace std;
//
//    int partion(int arr[],int i,int j)
//    {
//
//        int pivloc = i;
//        while(true){
//            while(arr[pivloc] <= arr[j]&&pivloc!=j)   //pivot is point to i
//            {
//                j--;                 //  j go to left
//            }
//            if(pivloc==j)
//                break;
//            else if(arr[pivloc]> arr[j])
//            {
//                swap(arr[j],arr[pivloc]);
//                pivloc=j;
//            }
//            while(arr[pivloc] >= arr[i]&&pivloc!=i)
//            {
//                i++;           // go to right
//            }
//            if(pivloc==i)
//                break;
//            else if(arr[pivloc]<arr[i])
//            {
//                swap(arr[i],arr[pivloc]);
//                pivloc=i;
//            }
//
//        }
//        return pivloc;
//    }
//
//
//    void quickSort(int arr[],int i, int h)
//    {
//        if(i<h)
//        {
//            int piv=partion(arr,i,h);
//            quickSort(arr,i,piv-1);
//            quickSort(arr,piv+1,h);
//        }
//    }
