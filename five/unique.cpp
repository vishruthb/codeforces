#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 201010
#define inf 100000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>
#define mod 1000000007

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;

    sf(n);
    int a[n + 1];

    for(i = 1; i <= n; i++)
        sf(a[i]);

    int ans = n;
    unordered_map<int, int> mp;
    for(i = 1; i <= n; i++)
    {
        // we keep from 0 to i - 1
        k = n;
        for(j = n; j >= i; j--){
            if(mp[a[j]] == 0)
                k--, mp[a[j]]++;

            else
                break;
        }

        for(j = n; j > k; j--)
            mp[a[j]]--;

        ans = min(ans, k - i + 1);

        mp[a[i]]++;
        if(mp[a[i]] > 1) break;
    }

    pf(ans);

    return 0;
}
