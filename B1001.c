B1001
#include <cstdio>
int main(){
	int n, step = 0;
	scanf("%d",&n);
	while(n!=1){
	if(n%2==0)n=n/2;
	else n=(3*n+1)
	step++;
	}
	printf("%d",step);
	return 0;
}

B1011
#include <cstdio>
int main(){
  int T,tcase=1;
  scanf("%d",&T);
  while(T--){
    long long a,b,c;
    scanf("%lld%lld%lld",a,b,c);
    if(a+b>c){
      printf("Case #%d: true\n",tcase++);
    }else{
      printf("Case #%d: false\n",tcase++);
    }
  }
  return 0;
}

b1016
//运行超时了...
#include <cstdio>
int main(){
  long long a ,da ,b ,db;
  scanf("%lld%lld%lld%lld",&a,&da,&b,&db);
  long long s1 =0 ,s2 =0;
  while(a!=0){
    if(a%10==da){
      s1=s1*10+da;
      a=a/10;
    }
  }
  while(b!=0){
    if(b%10==db){
      s2=s2*10+db;
      b=b/10;
    }
  }
  printf("%lld",s1+s2);
  return 0;
}
//这个没有超时...
#include <iostream>
using namespace std;
int main() {
    string a, b;
    int m, n, counta = 0, countb = 0, ta = 0, tb = 0;
    cin >> a >> m >> b >> n;
    for (int i = 0; i < a.length(); i++)
        if (m == (a[i] - '0')) counta++;
    for (int i = 0; i < b.length(); i++)
        if (n == (b[i] - '0')) countb++;
    if (counta != 0) ta = m;
    if (countb != 0) tb = n;
    for (int i = 1; i < counta; i++)
        ta = 10 * ta + m;
    for (int i = 1; i < countb; i++)
        tb = 10 * tb + n;
    cout << ta + tb;
    return 0;
}

B1026
#include <cstdio>
int main(){
	int c1,c2;
	scanf("%d%d",&c1,&c2);
	int ans = c2-c1;
	if(ans%100>=50){
		ans=ans/100+1;
	}else{
		ans=ans/100;
	}
	printf("%02d:%02d:%02d\n",ans/3600,ans%3600/60,ans%60 );
	return 0;
}