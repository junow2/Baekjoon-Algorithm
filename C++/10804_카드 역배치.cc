#include <bits/stdc++.h>
using namespace std;
typedef long long li;


int card[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
int n, m, l;
int tmp = 0;

void swapCard(int n, int m, int l, int arr[]) { 
    for (int i = 0; i < l/2; i++) {
      swap(arr[n+i-1], arr[m-i-1]);
    }
}

int main(void) {
  for (int i = 0; i < 10; i++) {
    cin >> n >> m;
    l = m - n + 1;
    swapCard(n, m, l, card);
  }

  for (int i = 0; i < 20; i++) {
    cout << card[i] << " ";
  }
}