bool marked[M];
void sieve(int n) {
  for (int i = 2; i < n; i++) {
    if (marked[i] == false) { // i is a prime
      for (int j = i + i; j <= n; j += i) {
        marked[j] = true;
      }
    }
  }
}
