
#include <iostream>
using namespace std;

void fillArray(int arr1[], int arr2[], int result[3][5],int length) {
    for (int i = 0; i < length; i++) {
        result[0][i] = arr1[i] + arr2[i];
        result[1][i] = arr1[i] - arr2[i]; 
        result[2][i] = arr1[i] * arr2[i]; 
    }
}


void printArray(int result[3][5], int length) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < length; j++) {
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }
}


int main() {
    const int length = 5;
    int arr1[length] = { 0, 1, 2, 3, 4 };
    int arr2[length] = { 5, 6, 0, 7, 1 };
    int result[3][length];

    fillArray(arr1, arr2, result, length);

    printArray(result, length);


    return 0;

}