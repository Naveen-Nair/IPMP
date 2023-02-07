/* find two non repeating elements from an array */

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

vector<int> findNonRepeat(int arr[], int arr_size){
    vector<int> ans;
    unordered_map<int, int> hashMap;

    //initialise
    for(int i=0; i<arr_size; i++){
        hashMap[arr[i]]=0;
    }

    //take the count
    for(int i=0; i<arr_size; i++){
        hashMap[arr[i]]++;
    }

    //iterate through the hashmap and see the ones with one count
    for(auto itr=hashMap.begin(); itr!=hashMap.end(); itr++){
        if(itr->second == 1){
            ans.push_back(itr->first);
        }
    }
    return ans;
}

int main() {
    int arr[] = {1,1,2,2,7,9,2,3,3,4,9,8,4,5,5,6,6,10};
    
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    vector<int> nonRepeatEle = findNonRepeat(arr, arr_size);

    cout<<"The non repeating elements are : "<<nonRepeatEle[0]<<" "<<nonRepeatEle[1]<<endl;

    
    
}