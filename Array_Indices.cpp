#include <iostream>
#include <vector>
using namespace std;

vector<int> index_finding(int arr[], int size, int key) {
    vector<int> indices;
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            indices.push_back(i);
        }
    }
    return indices;
}

int main() {
    // Multiple occurences
    int arr1[] = {1, 3, 7, 3, 5, 3, 9, 4, 3, 2, 1};
    int size1 = sizeof(arr1) / sizeof(arr1[0]); 
    vector<int> result1 = index_finding(arr1, size1, 3);
    cout << "Indices of 3: ";
    for (int i = 0; i < result1.size(); i++)
        cout << result1[i] << " "<<endl;
   
    // not found
    int arr2[] = {0, 1, 2, 33, 44, 10, 20, 30, 40};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    vector<int> result2 = index_finding(arr2, size2, 25);
    cout << "Indices of 25: ";
    if (result2.empty())
        cout << "(empty means not found)";
    else
        for (int i = 0; i < result2.size(); i++)
            cout << result2[i] << " "<<endl;

    // empty array
    int arr3[1] = {}; 
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    vector<int> result3 = index_finding(arr3, size3, 5);
    cout << "Indices of 5: ";
    if (result3.empty())
        cout << "(empty array test)";
    else
        for (int i = 0; i < result3.size(); i++)
            cout << result3[i] << " ";
   
}
