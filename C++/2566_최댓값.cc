#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
#define endl '\n'
#define MAX 1000002 

int arr[11][11];
int mx, nx=1, ny=1; 

int main(void) {
  ios::sync_with_stdio(false); cin.tie(NULL);

  for (int i=1; i<10; i++) {
    for (int j=1; j<10; j++) {
      cin >> arr[i][j];
      if (arr[i][j] > mx) {mx = arr[i][j]; nx=i; ny=j;}
    }
  }

  cout << mx << endl << nx << " " << ny;
  
}