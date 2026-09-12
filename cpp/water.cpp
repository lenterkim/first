#include <iostream>
using namespace std;

int main(){
int a = 1;
int x = 0;
cin >> x;
int s[x] = {};
int i;

for (i = 0; i < x; i++) {
    cin >> s[i];
    //cout << seris[i];
} 
// xu ly day
int av = s[0];
for(i = 1; i < x; i++) {
    if(av < s[i]) {
        av = s[i];
        a++;
    }
}
cout << a;
return 0;
}