#include<iostream>
using namespace std;
int main()
{
   int sum=0;
   int n=10;
   for(int i=1;i<=n;i++){
    if(i%3==0){sum+=i;
        cout<<i<<""<<endl;
        }
   } 
    cout<<"sum ="<<sum;
     return 0;
     }
    
