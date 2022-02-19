#include <cstdio>                         // �ڱ����в����Ǳ����

extern "C" int Seniorious(int);           // ��������Ҫ����һ�ν���������ĺ�����

extern "C" int Chtholly(int n, int OvO) { // ������ʵ�ֽ�����Ҫ����ʵ�ֵĺ�����
  int ans = 1;
  for (int l = 1, r = n, mid = (l + r) >> 1; l <= r; mid = (l + r) >> 1) if (Seniorious(mid) >= 0) {
    r = (ans = mid) - 1;
  } else {
    l = mid + 1;
  }
  return ans;
}
