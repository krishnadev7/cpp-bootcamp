#include<iostream>
using namespace std;

void insertSort(int a[],int);

int main()
{
   int a[20],len,i;
   cout<<"Enter size of the array: "<<endl;
   cin>>len;
   cout<<"Enter "<<len<<" elements to the array: "<<endl;
   for(int i=0;i<len;i++)
   {
    cin>>a[i];
   }
   insertSort(a,len);
   cout<<"After insertion sort: "<<endl;
   for(i=0; i<len; i++){
    cout<<a[i]<<" ";
   }
}

void insertSort(int a[],int len){
    for(int i=1;i<len;i++){
        int temp = a[i];
       int j = i-1;
       while(i>=0 && a[j] > temp){
        a[j+1] = a[j];
        j--;
       }
       a[j+1] = temp;
    }
}