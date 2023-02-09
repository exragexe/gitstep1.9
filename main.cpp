

#include <iostream>

using namespace std;
int rows(int num,char znak = '*') {
    if (num == 0) {
        cout << endl;
        return 0;
    }
    cout << znak << " ";
    rows(num-1, znak);
}
int main() {
    int n;
    cout <<"Enter number of stars: ";
    cin >> n;
    cout << rows(n);
    return 0;
}