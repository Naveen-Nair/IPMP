/* find missing number from an array of n-1 numbers of range 1 to n */

#include<iostream>
using namespace std;

int findMissingNumber(int arr[], int n){
    //we know sum of all integer values till n is n(n+1)/2, so we use the concept and find the missing number;

    int total_sum = (n * (n+1)) / 2;

    int partial_sum = 0;
    for(int i=0; i<n-1; i++){
        partial_sum += arr[i];
    }

    return total_sum - partial_sum;

}

int main() {
    int arr[] = {1,3,2,5,8,6,4,9,10,13,11,12};
    int n = 13;

    int missingNum = findMissingNumber(arr, n);

    cout <<  "The missing number in the array is : " <<  missingNum  <<  endl;

    
    return 0;
}
