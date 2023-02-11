

#include <iostream>
using namespace std;
int suma(int start, int end,int sum=0){

    if (start > end) {
        return sum;
    }
    else if(start <= end) {
        sum += start;
        start++;
        return suma(start, end, sum);
    }
}
int main(){
    int a,b;
    cout <<"Enter a: ";
    cin>>a;
    cout <<"Enter b: ";
    cin >>b;
    cout <<"Result: " << suma(a,b);

    return 0;
}
