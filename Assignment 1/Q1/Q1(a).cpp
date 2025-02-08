// check whether n is a prime number
#include <iostream>
using namespace std;
int main(){
int num;
  cout<<"enter the number:";
  cin>>num;
  for (int i=2;i<num;i++){
     if (num%i==0){
      cout<<"it is not a  prime number"<<endl;
      return 0;
  }
 }
cout<< "it is a prime number";       

  return 0;
}

