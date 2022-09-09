#include<iostream>
using namespace std;

int findPivot(int  arr []  , int n ){
    int start= 0;
    int end = n-1;

    while (start<end){

        int mid = start+(end-start)/2;
        if (arr[mid]>=arr[0])
        {
            start=mid+1;
        }
        else{
            start=mid;
        }
        

    }
    return start || end ;
    
}



int main(){

    int arr[5] = {3,8,10,17,1};
   cout<< "Pivot is "<<  findPivot(arr,5) << endl;

}
