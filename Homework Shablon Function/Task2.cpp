#include <iostream>
using namespace std;

int main() {
    const int rows = 3; 
    const int cols = 4;
    int arr[rows][cols] = 
    {
        {3, 5, 9, 2},
        {4, 8, 1, 7},
        {6, 0, 12, 3}
    };
    int max = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    cout << "Максимальнные значения - " << max << endl;
}
