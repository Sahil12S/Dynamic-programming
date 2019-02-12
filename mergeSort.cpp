// Implementation of Merge Sort
#include <iostream>
#include <vector>

using namespace std;

void mergeSort(vector<int>& nums, int left, int right);
void merge(vector<int>& nums, int left, int mid, int right);
void print(vector<int> nums);


int main(int argc, char const *argv[])
{
    vector<int> nums = {38, 27, 43, 3, 9, 82, 10};
    mergeSort(nums, 0, 6);
    print(nums);
    return 0;
}

void mergeSort(vector<int>& nums, int left, int right) {

    if (left < right) {
        int mid = (right - left) / 2 + left;

        mergeSort(nums, left, mid);
        mergeSort(nums, mid + 1, right);

        merge(nums, left, mid, right);
    }
}

void merge(vector<int>& nums, int left, int mid, int right) {
    int size1 = mid - left + 1;
    int size2 = right - mid;

    vector<int> Left(size1), Right(size2);

    int i, j, k;

    for (i = 0; i < size1; i++) {
        Left[i] = nums[left + i];
    }
    for (j = 0; j < size2; j++) {
        Right[j] = nums[mid + 1 + j];
    }

    i = j = 0;
    k = left;

    while (i < size1 && j < size2) {
        if (Left[i] <= Right[j]) {
            nums[k++] = Left[i];
            i++;
        }
        else {
            nums[k++] = Right[j];
            j++;
        }
        // k++;
    }

    while (i < size1) {
        nums[k++] = Left[i++];
    }

    while (j < size2) {
        nums[k++] = Right[j++];
    }
}

void print(vector<int> nums) {
    for (int num : nums) {
        cout << num << ", ";
    }
    cout << endl;
}