#include <iostream>
using namespace std;

void prime(int num){
    if(num<2)
    return;

for(int i=2; i<=num-1; i++)
{
    if (num%2==0)
    return ;
}
cout<<num<<" ";
return;



}

int main(){

    int arr[8]={2,4,6,5,9,8,34,11};
    for(int i=0; i<8; i++){
        prime(arr[i]);

    }

}