

#include <iostream>
using namespace std;
int st(int num, int stepen1, int i=0){
    if (stepen1 ==0){
        return 1;
    }
    return num * st(num,stepen1-1);
}
int main(){
    int n,k;
    cout <<"Enter number: ";
    cin>>n;
    cout <<"Enter stepen: ";
    cin >>k;

    cout <<"Result: " << st(n,k);

    return 0;
}