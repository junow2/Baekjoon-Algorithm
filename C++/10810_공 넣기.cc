#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'
typedef long long ll;
#define MAX 2000000

int N, M, i, j, k;
int arr[1002];

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  cin >> N >> M;

  for (int a=0; a < M; a++) {
    cin >> i >> j >> k;

    for (int x=i; x <= j; x++) arr[x] = k;
  }

  for (int x=1; x <= N; x++) cout << arr[x] << " ";
}