#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#define MX 100010

int ar[4*MX];

int min(int a,int b)
{
    if(a<b) return a;
    return b;
}

void insert(int idx,int st,int ed,int pos,int val)
{
    if(st==pos&& ed==pos)
    {
        ar[idx]=val;
        return;
    }

    int mid=(st+ed)/2;
    int l=2*idx;
    int r=l+1;
    if(pos<=mid) insert(l,st,mid,pos,val);
    else insert(r,mid+1,ed,pos,val);

    ar[idx]=min(ar[l],ar[r]);
}


int query(int idx,int st,int ed,int i,int j)
{
    if(st==i&&ed==j) return ar[idx];

    int mid=(st+ed)/2;
    int l=2*idx;
    int r=l+1;

    if(j<=mid) return query(l,st,mid,i,j);
    else if(i>mid) return query (r,mid+1,ed,i,j);
    else
    {
        int a=query(l,st,mid,i,mid);
        int b=query(r,mid+1,ed,mid+1,j);
        return min(a,b);
    }
}


int main()
{
    int n,q,t,cmd,i,j,k,l,ans,v,x,y;

    scanf("%d",&t);
    for(j=1; j<=t; j++)
    {
        //printf("\n");
        scanf("%d%d",&n,&q);

        printf("Case %d:\n",j);

        memset(ar,0,sizeof ar);

        for(i=1; i<=n; i++)
        {
            scanf("%d",&v);
            insert(1,1,n,i,v);
        }


        for(i=1; i<=q; i++)
        {
            scanf("%d%d",&x,&y);

            ans=query(1,1,n,x,y);
            printf("%d\n",ans);
        }
    }
    return 0;
}
