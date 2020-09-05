#include<bits/stdc++.h>
using namespace std;
int main()
 {
    int T;
    cin >> T;
    while(T--){
	string s;
	cin >> s;
	int n=s.length();
    unordered_map<char, int>m;
    int ans=0;
    m['I']=1;
    m['V']=5;
    m['X']=10;
    m['L']=50;
    m['C']=100;
    m['D']=500;
    m['M']=1000;
    for(int i=0;i<n; i++){
        if(m[s[i]] < m[s[i+1]] && i<n-1){
            ans-=m[s[i]];
        }
        else{
            ans+=m[s[i]];
        }
    }
    cout << ans << endl;
	}
	return 0;
}
