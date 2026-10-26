/* 
Question: Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target. You may assume that each input would have exactly one solution, and you may not use the same element twice. You can return the answer in any order.

Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:
Input: nums = [3,3], target = 6
Output: [0,1]
*/

#include <stdio.h>

// Function to find two numbers that sum to the target
int twoSum(int arr[], int n, int target, int result[]) {
    int i, j, found = 0;

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                result[0] = i;
                result[1] = j;
                found = 1;
                return found; // Return immediately when a pair is found
            }
        }
    }

    return found; // Return 0 if no pair is found
}

int main() {
    int arr[50], i, n, target, result[2];

    printf("Enter How Many Numbers You Want In Array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter Number [%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter The Target Value: ");
    scanf("%d", &target);

    // Call twoSum and check if a pair was found
    if (twoSum(arr, n, target, result)) {
        printf("Result Is: [%d, %d]\n", result[0], result[1]);
    } else {
        printf("No pair found that sums to the target.\n");
    }

    return 0;
}