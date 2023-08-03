#include <stdio.h>
int generatefibonacciseries(int n, int arr[]);
int main()
{
int n;
printf("Enter the number of sequence:\n");
scanf("%d", &n);
int res[n];
generatefibonacciseries(n, res);
for(int i = 0; i < n; i++)
{
printf("%d ", res[i]);
}
return 0;
}
int generatefibonacciseries(int n, int arr[])
{
  int i;
  int t1 = 0, t2 = 1;
  int nextTerm = t1 + t2;
  arr[0] = t1, arr[1] = t2;
  for (i = 3; i <= n; ++i) {
    arr[i-1] = nextTerm;
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }
  return 0;
}