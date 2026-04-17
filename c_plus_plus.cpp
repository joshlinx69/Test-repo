#include <iostream>
#include <vector>

using namespace std;

bool isInThere (vector<int>& vec, int n){
    for (auto it = vec.begin(); it != vec.end(); it++){
        if (*it == n){
            return true;
        }
    }
    return false;
}

void disVect(vector<int>& vec){
    for (int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main() {
    int a;
    cin >> a;
    vector<int> nums = {1, 3, 4, 16, 25, 57, 72};
    if (isInThere(nums, a)){
        cout << a << " is in the vector." << endl;
    }
    else {
        cout << a << " is not in the vector." << endl;
        nums.push_back(a);
        cout << "The vector has been updated: ";
        disVect(nums);
    }
    return 0;
}