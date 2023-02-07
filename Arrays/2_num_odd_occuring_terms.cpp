/* find number of the odd occuring terms in an array */

#include<iostream>
#include<unordered_map>
using namespace std;

int findOddOccuring(int arr[], int arr_size){
    unordered_map<int, int> hashMap;
    int ans;

    //initialise the hashMap 
    for(int i=0; i<arr_size; i++){
        hashMap[arr[i]]=0;
    }

    //then for each occurence we add one
    for(int i=0; i<arr_size; i++){
        hashMap[arr[i]]++;
    }

    //then we go through the hashmap and see all the values with odd occurences and add it to the ans
    for(auto itr=hashMap.begin(); itr !=hashMap.end(); itr++){
        //here itr->second is the occurences of the values, and we check if it is odd;
        if(itr->second%2==1){
            //if it is odd, then we push it to the ans    
            ans = itr->first;
            break;
        }
    }
    return ans;

}

int main() {
    int arr[] = {1,4,6,2,4,9,7,9,5,5,1,7,9,5,5,1,9};
    
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    cout<<"The odd occuring term in the array is " << findOddOccuring(arr, arr_size)<< endl;

    return 0;
}
