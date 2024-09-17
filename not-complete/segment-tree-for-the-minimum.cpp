#include <bits/stdc++.h>
#define ll long long
#define INF 1e10;

using namespace std;

vector<int> nums, seg;

ll build(int node, int l, int r) {
    if (l == r) return seg[node] = nums[l];
    int mid = (l+r)/2;
    return seg[node] = min(build(node*2, l, mid), build(node*2+1, mid+1, r));
}

void update(int node, int l, int r, int pos, ll v) {
    if (l == r) {
        seg[node] = nums[pos] = v;
        return;
    }
    int mid = (r+l)/2;
    if (pos >= l && pos <= mid) update(node*2, l, mid, pos, v);
    else update(node*2+1, mid+1, r, pos, v);
    seg[node] = min(seg[node*2], seg[node*2+1]);
}

ll query(int node, int l, int r, int a, int b) {
    if (l > b || r < a) return INF;
    if (l >= a && r <= b) return seg[node];
    int mid = (l+r)/2;
    return min(query(node*2, l, mid, a, b), query(node*2+1, mid+1, r, a, b));
}

int main() {
    int n, q; cin >> n >> q;
    nums.resize(n); seg.resize(n*4);

    for (int i=0; i<n; i++) cin >> nums[i];

    build(1, 0, n-1);
    
    while (q--) {
        int op, a, b; cin >> op >> a >> b;
        if (op == 1) update(1, 0, n-1, a, b);
        else cout << query(1, 0, n-1, a, b-1) << "\n";
    }

    return 0;
}