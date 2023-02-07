/* find union and intersection of two sorted arrays */

#include<iostream>
#include<vector>
using namespace std;

vector<int> findUnion(int A[], int B[], int A_size, int B_size){
    int i=0;
    int j=0;

    vector<int> ans;

    while(i < A_size && j < B_size){
        if(A[i] < B[j]){
            ans.push_back(A[i++]);
        }
        else if(A[i] > B[j]){
            ans.push_back(B[j++]);
        }
        else {
            //when they are equal, you only consider one
            ans.push_back(A[i]);
            i++; j++;
        }
    }
    //then we have to include all the leftovers from the other arrays
    while(i < A_size){
        ans.push_back(A[i++]);
    }
    while(j < B_size){
        ans.push_back(B[j++]);
    }
    return ans;
}   

vector<int> findIntersection(int A[], int B[], int A_size, int B_size){
    int i=0;
    int j=0;

    vector<int> ans;

    while(i < A_size && j < B_size){
        
        if(A[i] < B[j]){
            i++;
        }
        else if(A[i] > B[j]){
            j++;
        }
        else {
            //we should only consider the intersection
            ans.push_back(A[i]);
            i++; j++;
        }
    }
    return ans;
}   


void display(vector<int> arr){
    for(int i=0 ; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}   

int main() {
    int A[] = {1,3,4,6,7,9,11,20,23,29,32,35};
    int B[] = {2,3,4,5,7,8,9,10,15,16,21,23,25,29,33};

    int A_size = sizeof(A)/sizeof(A[0]);
    int B_size = sizeof(B)/sizeof(B[0]);

    vector<int> unionArray = findUnion(A, B, A_size, B_size);
    vector<int> intersectionArray = findIntersection(A, B, A_size, B_size);

    cout<<"Union of the two arrays are : ";
    display(unionArray);
    
    cout<<"Intersection of the two arrays are : ";
    display(intersectionArray);
    
    return 0;
}
