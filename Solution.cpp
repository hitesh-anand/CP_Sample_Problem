#include<bits/stdc++.h>
using namespace std;

long long pisano(long m) // function to find the pisano period of m
{
  long prev = 0;
  long curr = 1;
  long res = 1;
  for(long i=0; i<m*m; i++)
  {
    long temp = 0;
    temp = curr;
    curr = (curr+prev)%m;
    prev = temp;
    if(prev == 0 && curr == 1)
    {
      res = i+1;
    }

  }
  return res;
}



long long fibonacciModulo(long long n, long m)
{
  long per = pisano(m); // calculate the pisano period of m
  int val1 = n%per;
  long long fib[val1+1];
  fib[0] = 0;
  fib[1] = 1;
  for(int i=2; i<=val1; i++)
  {
    fib[i] = (fib[i-1]+fib[i-2])%m;
  }
  return fib[val1];
}

// Simply run the following code. The code will itself generate 10 random test cases within the constraints defined in the problem and produce the output.
int main()
{
  long long n;
  long m;
  int t = 10;
  for(int i=0; i<t; i++)
  {
    n = rand()%(99999999999999) + 1;
    cout<<"n is: "<<n<<endl;
    m = rand()%(999)+2;
    cout<<"m is: "<<m<<endl;
    cout<<"The desired output is: "<<fibonacciModulo(n,m)<<endl;
  }
}
