/*input
2
acbac
aababc
*/

/*~~~~~~~~~~~~~~~~~~~~dwij28 == Abhinav Jha~~~~~~~~~~~~~~~~~~~~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define MAX(a, b) ((a > b) ? a : b)
#define MIN(a, b) ((a < b) ? a : b)
#define set_bit(n, x, i) (n ^ ((-x ^ n) & (1 << i)))
#define get_bit(n, i) ((n >> i) & 1) 
using namespace std;

template<typename T>void scan(T&x){bool n=false;register T c=getchar();x=0;if(c=='-'){n=true;c=getchar();}for(;(c>47&&c<58);c=getchar()){x=(x<<1)+(x<<3)+c-48;}if(n){x*=-1;}}
template<typename T>void allocate(T **x,T n){*x=(T*)malloc(sizeof(T)*n);}

int main() {
	int t, p;
	char s[210];
	scanf("%d", &t);
	while (t--) {
		scanf("%s", s);
		p = 0;
		for (int i = 0, l = strlen(s); i < l; i++) {
			if (i < l-1) {
				if (s[i] == 'a' && s[i+1] == 'c') {
					i++;
					continue;
				}
			}
			if (s[i] == 'b')
				continue;
			s[p++] = s[i];
		}
		s[p] = '\0';
		printf("%s\n", s);
	}
	return 0;
}