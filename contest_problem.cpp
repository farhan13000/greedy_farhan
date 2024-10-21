#include<bits/stdc++.h>
using namespace std;

int main()
{
    int _t;
    cin>>_t;
    while(_t--) {
        int n,k;
        cin>>n>>k;
        pair<int, int>a[n];
        for (int i = 0; i < n; i++) {
            cin>>a[i].first>>a[i].second;
        }
        sort(a, a+n);
        reverse(a, a+n);
        int best_team_score = 0;
        int top_k_sum = 0;
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < n; i++) {
            pq.push(a[i].second);
            top_k_sum += a[i].second;
            if(pq.size() > k) {
                int x = pq.top();
                pq.pop();
                top_k_sum -= x;
            }
            if(pq.size() == k) {
                best_team_score = max(best_team_score, top_k_sum*a[i].first);
            }
        }
        cout<<best_team_score<<endl;
    }
}