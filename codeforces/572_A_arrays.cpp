#include<bits/stdc++.h>

using namespace std;

int main()
{
     long long  nA,nB,k,m,A[100005],B[100005];

     cin >> nA >> nB;
     cin >> k >> m;

     for(int i = 1 ; i <= nA ; i++) cin >> A[i];
     for(int i = 0 ; i < nB ; i++) cin >> B[i];

     if(A[k] < B[nB-m]) cout <<"YES";
     else cout << "NO";
}
