

#include <iostream>
using namespace std;
int st(int num, int stepen1, int i=0){
    int result = 1;
    for (; i < stepen1; i++) {
        result *= num;
    }
    return result;
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