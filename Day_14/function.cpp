#include <iostream>
using namespace std;

int Sum(int m, int n) //function declare
{
    int ans =m+n;  //function define
    return ans;

}
int Mul(int m, int n){
    int ans=m*n;
    return ans;
}

int main(){

    int a,b;
    cout<<"Enter your number :";
    cin>>a>>b;

    // function call
    cout<<Sum(a,b)<<endl;
    cout<<Mul(a,b)<<endl;


}