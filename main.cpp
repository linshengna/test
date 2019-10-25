/*对于给定的正整数N，求它的位数及其各位数字之和。

输入格式：
输入在一行中给出一个不超过10
​9
​​ 的正整数N。

输出格式：
在一行中输出N的位数及其各位数字之和，中间用一个空格隔开。*/
//注意m可能溢出
/*
#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int t,temp;
    temp=num;
    t=0;
   while(temp>0){
       temp/=10;
       t++;
   }

   long m=1,sum;
   sum=0;
   for(int i=1;i<=t;i++)
       m*=10;
while(m!=0){
    sum+=num/m;
    num%=m;
    m/=10;

}

cout<<t<<' '<<sum;
    return 0;
}*/
/*
#include <stdio.h>
int main(){
    int n, count, sum;
    sum = 0;
    count = 0;
    scanf("%d", &n);
    while(n!=0){
        count++;
        sum += n%10;
        n /= 10;
    }
    printf("%d %d\n", count, sum);

    return 0;
}
 */
/*
#include <stdio.h>
int main() {
    int n = 0;
    int x;
    scanf("%d", &x);
    n++;
    x /= 10;
    while (x > 0) {
        n++;
        x /= 10;
    }
    printf("%d\n", n);
}
 */
/*
#include <stdio.h>
int gcd(int x, int y);
int main()
{
    int m, n;

    scanf("%d %d", &m, &n);

    printf("%d\n", gcd(m, n));
    return 0;
}

int gcd(int a, int b)
{
    int t, g;

    if (b == 0)
        g = a;
    else
        g = gcd(b, a % b);
    return g;
}
*/
/*计算阶乘和Sum= 1!+2!+...+n! 对1000000007求模的结果(不含前导0)。

输入格式:
输入若干个整数 ，其中每个整数 N ，满足1<=N<=20000000。

输出格式:
输出对应各个整数的阶乘和对1000000007求模的结果，每个一行，最后一行
 后面一样有换行符。

输入样例:
在这里给出一组输入。例如：

5
18
200000000

输出样例:
在这里给出相应的输出。例如：

153
478885618
9949683*/
#include<stdio.h>

int di(int i);
int main(){
    long n,a[10000];
   long sum;
    sum=0;
    while(scanf("%d",&n)==1){
        for(int i=1;i<=n;i++){
            a[i]=di(i)%1000000007;
        }
        for(int i=1;i<=n;i++)
            sum=a[i]%1000000007+sum%1000000007;
        printf("%d\n",sum%1000000007);



    }



    return 0;
}

int di(int i){

   long n=1;

        for (i; i > 1; i--)
            n =(n%1000000007)* i;
      return n%1000000007;

}