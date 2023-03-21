#include<iostream>
using namespace std;

void sSort(int a[],int len){
    for(int i=0; i<len-1; i++){
        int min = i;
        for(int j=i+1; j<len; j++){
            if(a[j] < a[min]){
                min=j;
            }
        }
        if(min!=i){
            swap(a[i],a[min]);
        }
    }
}

int main(){
    int a[20],len,i;
    cout<<"Enter size of the array: "<<endl;
    cin>>len;
    cout<<"Enter elements to the array: "<<endl;
    for(i=0;i<len;i++){
        cin>>a[i];
    }
    sSort(a,len);
    cout<<"after selection sort: "<<endl;
    for(i=0; i<len; i++){
        cout<<a[i]<<" ";
    }
}