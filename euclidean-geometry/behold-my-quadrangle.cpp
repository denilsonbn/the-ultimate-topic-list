#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> nums;

void solve() {
    nums.resize(4);

    for (int i = 0; i < 4; i++) 
        cin >> nums[i];

    sort(nums.begin(), nums.end());

    if (4 * nums[0] == nums[0] + nums[1] + nums[2] + nums[3]) {
        cout << "square\n";
        return;
    }

    if (nums[0] == nums[1] && nums[2] == nums[3]) {
        cout << "rectangle\n";
        return;
    }

    if (nums[0] + nums[1] + nums[2] <= nums[3]) {
        cout << "banana\n";
        return;
    }

    cout << "quadrangle\n";

}

int main() {

    int t;
    cin >> t;

    while(t--) {
        solve();
    }


    return 0;
}