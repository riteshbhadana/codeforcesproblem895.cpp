codeforce div 895
problemn A
A two vessel
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int mod = 1000000007;
int main() 
{
    int t; cin >> t;
    while(t --) {
        int a, b, c; cin >> a >> b >> c;
        int req = (abs(a - b) + 1) / 2;
        int ans = (req + c - 1)  / c;
        cout << ans << endl;
    }
}



problem b
The  corridor or there and back again 

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int mod = 1000000007;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll ans = 1e18;
        for(int i = 1; i <= n; i++) {
            ll d, s; cin >> d >> s;
            ans = min(ans, (2 * d + s - 1) / 2);
        }
        cout << ans << '\n';
    }
}


 problem c
non coprime split

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int mod = 1000000007;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    cin >> t;
    while(t--)
    {
        ll l, r; cin >> l >> r;
        if(l == r && l % 2) {
            bool sac = false;
            for(int i = 2; i * i <= l; i++) {
                if(l % i == 0) {
                    cout << i <<" " << l - i << endl;
                    sac = true;
                    break;
                }
            }
            if(!sac) {
                cout << -1 << endl;
            }
            continue;
        }
        
        l = l / 2 + l % 2;
        r =  r / 2 ;
        
        ll ans = -1;
        if(r == l && l != 1) {
            ans = l;
        } else if(r > l) {
            ans = l + 1;
        }
        if(ans != -1) {
             cout << ans <<" " << ans << endl;
        }
        else {
            cout << ans << endl;
        }
    }
}



