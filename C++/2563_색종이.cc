#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
#define endl '\n'
#define MAX 1000002 

int arr[102][102];
int n, x, y, cnt;

void paint(int x, int y) {
  
  for (int i=x; i<x+10; i++) 
    for (int j=y; j<y+10; j++) arr[i][j] = 1;
}

void ct() {

  for (int i=0; i<101; i++)
    for (int j=0; j<101; j++)
      if (arr[i][j]) cnt++; 
}

int main(void) {
  ios::sync_with_stdio(false); cin.tie(NULL);

  cin >> n; 
  for (int i=0; i<n; i++) { cin >> x >> y; paint(x,y); }

  ct(); cout << cnt; 
}