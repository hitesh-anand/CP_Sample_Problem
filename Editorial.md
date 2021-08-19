# EDITORIAL

## It was quite easier to guess that the number of candies collected after k days(1<=k<=n) will be the kth Fibonacci number.
## As you might be familiar with, the first two Fibonacci numbers are 0 and 1, and for n>=2 the nth fibonacci number is given by the (n-1)th and (n-2)th fibonacci numbers. But here is a catch. We cannot use conventional methods for finding the nth fibonacci number. As given in the hint, doing so will result in a Time Limit Exceeded error since the constraints are too large(of the order 14). So what should we do now?

## Interestingly, there is a very special method for such problems. Please notice that we need not work out the exact value of F(n), instead we are asked to print F(n)%m. On observing carefully, we can see a pattern in the values of F(n)%m for different values of n(a fixed m). The following illustration will make it easier:

## The first 13 fibonacci numbers are as follows: [0,1,1,2,3,5,8,13,21,34,55,89,144]
## The following array contains the values of F[i] mod 2 :- [0,1,1,0,1,1,0,1,1,0,1,1,0]
## The following array contains the values of F[i] mod 3 :- [0,1,1,2,0,2,2,1,0,1,1,2,0]
## What did you observe? We observe that the values of F[i] mod 2 and F[i] mod 3 repeat after a certain time. Interestingly, this is true for natural numbers other than 2 and 3 also.(Try yourself :)

## Hence, we say that the sequence F[i] mod m is periodic and this period is called the Pisano Period. And hence we can simplify our algorithm by using this property. To be more precise, F(n) mod m = F(k) mod m where k = n%p, p being the pisano period of m. It is quite straight forward since the value of F(n) mod m will repeat after p, i.e. for n+p, n+2p and so on. Hence we can safely say that F(n) mod m will have the same value as F(k) mod m. 

## Hence we just need to find the pisano period of m. For this, another important observation is that every pisano period starts with (0,1,....). Hence, we have to keep track of this thing to check the pisano period of m.










