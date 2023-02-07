/* find two odd occuring terms in an unsorted array*/


#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> findOddOccuringTerms(int arr[], int arr_size){
    unordered_map<int, int> hashMap;
    vector<int> ans;

    //initialise
    for(int i=0; i<arr_size; i++){
        hashMap[arr[i]]=0;
    }
    //count
    for(int i=0; i<arr_size; i++){
        hashMap[arr[i]]++;
    }

    for(auto itr=hashMap.begin(); itr !=hashMap.end(); itr++){
        if(itr->second%2==1){
            ans.push_back(itr->first);
        }
    }
    return ans;

}

int main() {
    int arr[] = {5,9,6,3,1,3,5,7,8,3,2,5,7,8,9,5,3,2,3,6};
    
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    

    vector<int> oddOccuringTerms = findOddOccuringTerms(arr, arr_size);

    cout<<"The odd occuring terms in the array are " ;

    for(int i=0; i<oddOccuringTerms.size(); i++){
        cout<<oddOccuringTerms[i]<<" ";
    }
    cout<<endl;

    return 0;
}
