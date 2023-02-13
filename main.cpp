

#include <iostream>
#include <ctime>
using namespace std;

int findMax(int size, int arr[]) {
    int max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}

int findMax(int rows, int columns, int arr[][columns]) {
    int max = arr[0][0];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            if (max < arr[i][j]) {
                max = arr[i][j];
            }
        }
    }
    return max;
}

int findMax(int layers, int rows, int columns, int arr[layers][rows][columns]) {
    int max = arr[0][0][0];
    for (int i = 0; i < layers; ++i) {
        for (int j = 0; j < rows; ++j) {
            for (int k = 0; k < columns; ++k) {
                if (max < arr[i][j][k]) {
                    max = arr[i][j][k];
                }
            }
        }
    }
    return max;
}
int findMax(int a, int b){
     (a>b)? cout << a <<"is bigger then "<< b : cout << b <<"is bigger then "<<a;
    return findMax(a,b);
}
int findMax(int a, int b,int c){
    (a>b)? cout << a <<"is bigger then "<< b : cout << b <<"is bigger then "<<a;
    (c>b)? cout << c <<"is bigger then "<< b : cout << b <<"is bigger then "<<c;
    (c>a)? cout << c <<"is bigger then "<< a : cout << a <<"is bigger then "<<c;
    return findMax(a,b);
}
int main() {
    srand(time(0));
    int size1D = 10;
    int arr1D[size1D];
    for (int i = 0; i < size1D; ++i) {
        arr1D[i] = rand() % 100 + 1;
    }
    cout << "Maximum value in 1D array: " << findMax(size1D, arr1D[size1D]) << endl;

    int rows2D = 2;
    int columns2D = 5;
    int arr2D[rows2D][columns2D];
    for (int i = 0; i < rows2D; ++i) {
        for (int j = 0; j < columns2D; ++j) {
            arr2D[i][j] = rand() % 100 + 1;
        }
    }

    cout << "Maximum value in 2D array: " << findMax(rows2D, columns2D, arr2D[rows2D][columns2D]) << endl;

    int layers3D = 2;
    int rows3D = 2;
    int columns3D = 2;
    int arr3D[layers3D][rows3D][columns3D];
    for (int i = 0; i < layers3D; ++i) {
        for (int j = 0; j < rows3D; ++j) {
            for (int k = 0; k < columns3D; ++k) {
                arr3D[i][j][k] = rand() % 100 + 1;
            }
        }
    }
    cout << "Maximum value in 3D array: " << findMax(layers3D, rows3D, columns3D, arr3D[layers3D][rows3D][columns3D]) << endl;
    int a=5,b=13,c=28;
    cout <<"Max two integer is " << findMax(a,b);
    cout <<"Max three integer is "<< findMax(a,b,c);

    return 0;
}