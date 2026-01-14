#include <iostream>
#include <vector>

using namespace std;

long long merge_and_count(vector<int>& arr, vector<int>& temp, int left, int mid, int right) {
    int i = left;    // Ponto inicial do primeiro subarray
    int j = mid + 1; // Ponto inicial do segundo subarray
    int k = left;    // Ponto inicial do array temporário
    long long inv_count = 0;

    // Mescla os dois subarrays em temp[]
    while ((i <= mid) && (j <= right)) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            inv_count += (mid - i + 1);
        }
    }

    // Copia os elementos restantes do primeiro subarray
    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    // Copia os elementos restantes do segundo subarray
    while (j <= right) {
        temp[k++] = arr[j++];
    }

    // Copia os elementos de temp[] para arr[]
    for (i = left; i <= right; i++) {
        arr[i] = temp[i];
    }

    return inv_count;
}

long long merge_sort_and_count(vector<int>& arr, vector<int>& temp, int left, int right) {
    long long inv_count = 0;
    if (left < right) {
        int mid = (left + right) / 2;

        // Conta inversões na primeira metade
        inv_count += merge_sort_and_count(arr, temp, left, mid);

        // Conta inversões na segunda metade
        inv_count += merge_sort_and_count(arr, temp, mid + 1, right);

        // Mescla os dois subarrays e conta inversões
        inv_count += merge_and_count(arr, temp, left, mid, right);
    }
    return inv_count;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> temp(n); // Array temporário para mesclagem

    // Conta as inversões usando Merge Sort
    long long inv_count = merge_sort_and_count(arr, temp, 0, n - 1);

    cout << inv_count << endl;

    return 0;
}
