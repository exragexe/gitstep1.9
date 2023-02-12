

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int subArraySize = 20;

void exercise(int count, int max, int subArray[], int &subArrayIndex, int sum =0) {
    if (count == 0) {
        return;
    } else {
        if (subArrayIndex < subArraySize) {
            int randomNumber = rand() % max + 1;
            subArray[subArrayIndex] = randomNumber;
            ++subArrayIndex;
            return exercise(count - 1, max, subArray, subArrayIndex);
        } else {
            subArrayIndex = 0;
            for (int i = 0; i < subArraySize; ++i) {
                i++;
                cout << subArray[i] << " ";
                sum+=subArray[i];
            }
            cout <<"         "<<sum;
            cout << endl;
            return exercise(count - subArraySize, max, subArray, subArrayIndex);
        }
    }
}

int main() {
    srand(time(0));
    int subArray[subArraySize];
    int subArrayIndex = 0;
    exercise(400, 100, subArray, subArrayIndex);
    return 0;
}