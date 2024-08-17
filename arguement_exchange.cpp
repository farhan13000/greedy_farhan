// The main idea is that we can arrange A and B anyhow to find MAX(A.B).
// So , Basically now we have 2 degree of freedom therefor we will have to reduce it to 1 only.
// For this purpose we just sorted B (ASC) and fixed it now we tried to find that arrangement of A for which (A.B) is MAXIMUM.
// and we just sorted A (ASC) {which we can prove by using Arguement exchange/swapping proof} */ 



#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{ 
    // Started here
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=(a[i]*b[i]);
    }
    cout<<"Maximum possible Dot Product of A and B = "<<sum<<endl;

}