int x, y;
int nwd = x * a + y * b;
if ((p % nwd) != (q % nwd)) assert(false);
a /= nwd;
b /= nwd;
int nww = a * b;
int ret = mno(x * a, q / nwd, nww) + mno(y * b, p / nwd, nww);

int powe(int b, int e) {
  int r = 1;
  for (int i = 0; i < e; ++i)
    r *= b;
  return r;
}

int main() {
  debug << crt2(5, 24, 11, 67);
  for (int p = 2; p < 100; ++p)
    if (is_prime(p)) prime.push_back(p);
  for (int i = l; i <= 100; ++i) {
    int g = i / __gcd(i, M);
    assert(g == 1 || is_prime(g));
  }
  debug << imie(prime);
  ld pro = 1;
  for (int p : prime) pro *= p;
  debug << imie(pro);
  int n;
  scanf("%d", &n);
  return 0;
}
