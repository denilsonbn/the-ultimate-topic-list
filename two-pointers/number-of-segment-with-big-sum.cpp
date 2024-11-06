#include <bits/stdc++.h>
#define ll long long

ll segments(ll k, ll sum, std::vector<ll> nums) {
    
    ll cont = 0, curr = 0;

    for (int r=0, l=0; r<k; r++) {
        curr += nums[r];



    }

}

// 2 6 4 3 6 8 9
// 2 8 12 15 21 29 38
// 0 0 0 0 1 2 3

int main() {

    ll k, sum;
    std::cin >> k >> sum;
    std::vector<ll> nums(k);

    for (int i=0; i<k; i++) std::cin >> nums[i];

    std::cout << segments(k, sum, nums) << "\n";



    return 0;
}