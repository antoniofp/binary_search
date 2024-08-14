#include <vector>
#include <iostream>
using namespace std;
vector<int> vec = {2, 5, 8, 12, 16, 23, 38, 45, 56, 67, 78}; 
int target = 12;

int binarySearch(int target, vector<int> vec){
    int lo = 0;
    int hi = vec.size() - 1;
    while(lo <= hi){
        int mid = lo + (hi - lo) / 2;
        if(vec[mid] == target){
            return mid;
        }
        else if(vec[mid] < target){
            lo = mid + 1;
        }
        else{
            hi = mid - 1;
        }
    }
    return -1;
}

int main(){
    cout << binarySearch(12, vec);
    
    return 0;

}