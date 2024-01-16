#include <bits/stdc++.h>
using namespace std;

map <string, int> mp;

void solve(string a) {
    int sum = 0;
    for (int i = 0 ; i < a.size() ; i++) {
        if (isalpha(a[i])) {
            string b = "";
            while (i < a.size() && isalpha(a[i])) {
                b += a[i];
                i++;
                if ((mp[b] > 0) && isupper(a[i+1])) {
                    break;
                }
            }
            int count = 0 ;
            while (i < a.size() && isdigit(a[i])) {
                count += (count*10) + (a[i] - '0');
                i++;
            }
            if (count == 0) {
                count = 1;
            }
            sum += (mp[b] * count);
            i--;
        }
    }

    cout << "So nguyen tu khoi cua " << a << " la : " << sum << endl;
}

int main() {
    int n;
        cout << "Nhap so nguyen to ban muon them : " << endl;
        cin >> n;
    for (int i = 0 ; i < n ; i++) {
        string s;
        int x;

        cout << "Nhap nguyen to vo bang tuan hoan : " << endl;
            cin >> s;
        cout <<  "Nhap phan tu khoi cua nguyen to vua nhap : " << endl;
            cin >> x;
            mp[s] = x;  
    }
    int m;
        cout << "Nhap so luong phan tu ban muon tinh : " << endl;
        cin >> m;
    string a;    
    for (int i = 0 ; i < m ; i++) {
        cout << "Nhap ten cua phan tu : " << endl;
        cin >> a;
        solve (a);
    }    
return 0;    
}