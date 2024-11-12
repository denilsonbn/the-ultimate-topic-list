#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll segments(ll k, ll sum, vector<ll> nums) {
    
    ll cont = 0, curr = 0;

    for (int r=0, l=0; r<k; r++) {
        curr += nums[r];

        while(curr-nums[l] >= sum) {
            l++;
        }

        if (curr >= sum) cont += l;

    }

    return cont;

}

// 2 6 4 3 6 8 9
// 2 8 12 15 21 29 38
// 0 0 0 0 1 2 3

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll k, sum, current=0, ans;
    cin >> k >> sum;
    vector<ll> nums(k);

    for (int i=0; i<k; i++) {
        cin >> nums[i];
    }

    ans = segments(k, sum, nums);

    cout << ans << "\n";

    return 0;
}


#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxm=3e5+5;
int a[maxm];
int n,s;
void solve(){
    cin>>n>>s;
    for(int i=1;i<=n;i++)cin>>a[i];
    int sum=0,l=1;
    int ans=0;
    for(int i=1;i<=n;i++){
        sum+=a[i];
        while(sum-a[l]>=s)sum-=a[l++];
        if(sum>=s){
            ans+=l;
        }
    }
    cout<<ans<<endl;
}
signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    solve();
    return 0;
}
