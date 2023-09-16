#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int add(int a,int b){
   
   return a+b;
}
int main(){


     int a,b;

      cout<<"Input a and b"<<'\n';
     cin>>a>>b;
    int sum=add(a,b);
   cout<<"sum of "<<a<<" and "<<b<<" is "<<sum<<'\n';

}
