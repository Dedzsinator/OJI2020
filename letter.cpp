#include <fstream>
using namespace std;
ifstream f("litere.in");
ofstream g("litere.out");
int rende[10001],p,n,i,j,pas,k,x;
char v[10001];
int main() {
    f>>p>>n;
    for(i=1;i<=n;i++)
        f>>v[i];
    if(p==1)
    {
        x=1;
        while(x*x<n)x++;
        g<<x*x-n<<'\n';return 0;
    }
    if(p==2) {
        x=0;
        while(x*x<n) {
            g<<v[x*x+1]<<" ";
            x++;
        }
        return 0;
    }
    x=1;
    while(x*x<n)
        x++;
    for(i=x*x;i>n;i--)
        v[i]='*';

    rende[1]=(x-1)*(x-1)+1;
    k=1;
    rende[0]=0;

    for(i=2;i<=x;i++) {
        j=rende[1]+2*i-2;
        pas=2*x-1;
        for(;k<i*i-1;j-=pas,pas-=2) {
            rende[++k]=j;
            rende[++k]=j-1;
        }
        rende[++k]=j;
    }
     for(i=1,j=1;i<=x;i++) {
            for(;j<i*i;j++)
                if(v[rende[j]]!='*')
                    g<<v[rende[j]]<<" ";
            g<<v[rende[j++]]<<'\n';
       }
return 0;
}
