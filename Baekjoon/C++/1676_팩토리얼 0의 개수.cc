#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'
typedef long long ll;
#define MAX 2000000
const int INF = 10002; 

int N;

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  cin >> N; 
  cout << N/5 + N/25 + N/125;
}
// 5의 배수일시 +1 거기서 25의 배수이면 추가로 +1 125면 +1
