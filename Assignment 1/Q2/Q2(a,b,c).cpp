#include<iostream>
using namespace std;
int main(){
    int n,i,j,tmp=0,ss,sl;


    //a accept an integer array from the user (size determined at the runtime)
    cout<<"Enter the size of array: ";
    cin>>n;

    int m[n];
    cout<<"Enter elements of array: "<<endl;
    for(i=0;i<n;i++)
    cin>>m[i];

    cout<<"Actual array : ";
    for(i=0;i<n;i++)
    cout<<m[i]<<" ";


    //b reverse the array and display it
    for(i=0,j=n-1;i<j;i++,j--){
        tmp=m[i];
        m[i]=m[j];
        m[j]=tmp;
    }

    cout<<endl<<"Reverse array : ";
    for(i=0;i<n;i++)
    cout<<m[i]<<" ";


    //c find and display the second largest and second smallest elements in the array
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(m[i]>m[j]){
                tmp=m[i];
                m[i]=m[j];
                m[j]=tmp;
            }
        }
    }
    ss = m[1];
    sl = m[n-2];
    cout<<endl<<"Second Smallest: "<<ss;
    cout<<endl<<"Second Largest: "<<sl;
}
