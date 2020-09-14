#include<map>
#include<cstdio>
#include<string>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    char ch;
    int k, n;
    string s;
    map<char, int> cnt;
    map<char, vector<string> > mapa;
    scanf("%d %d", &k, &n);
    for(int i = 0; i < k; ++i){
        cin >> s;
        mapa[s[0]].push_back(s);
        cnt[s[0]] = 0;
    }
    for(map<char, vector<string> >::iterator it = mapa.begin(); it != mapa.end(); ++it)
        sort(it -> second.begin(), it -> second.end());

    for(int i = 0; i < n; ++i){
        cin >> ch;
        cout << mapa[ch][cnt[ch]] << endl;
        cnt[ch] = (cnt[ch] + 1) % mapa[ch].size();
    }
    return 0;
}
