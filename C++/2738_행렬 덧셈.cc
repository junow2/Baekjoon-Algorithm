#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
#define endl '\n'
#define MAX 1000002 

int A[102][102];
int N, M, x;

int main(void) {
  ios::sync_with_stdio(false); cin.tie(NULL);

  cin >> N >> M; 

  for (int i=0; i<N; i++) 
    for (int j=0; j<M; j++) cin >> A[i][j]; 
  
  for (int i=0; i<N; i++)
    for (int j=0; j<M; j++) { cin >> x; A[i][j] += x; }

  for (int i=0; i<N; i++) {

    for (int j=0; j<M; j++) cout << A[i][j] << " ";
    cout << endl;
  }

}