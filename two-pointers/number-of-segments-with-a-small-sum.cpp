#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll small_sum(ll k, ll sum, vector<ll> nums) {

    ll curr = 0, cont = 0, seq=0;

    for (ll r=0, l=0; r<k; r++) {
        curr += nums[r];
        seq++;

        while (curr > sum) {
            curr -= nums[l];
            l++;
            seq--;
        }

        cont += seq;

    }

    return cont;

}

// 2 6 4 3 6
// 1 2 3 4 4 

int main() {
    ll k, sum; cin >> k >> sum;
    vector<ll> nums(k);

    for (int i=0; i<k; i++) cin >> nums[i];

    cout << small_sum(k, sum, nums);



    return 0;
}