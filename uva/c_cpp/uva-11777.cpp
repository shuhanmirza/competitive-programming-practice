#include <stdio.h>

int main()
{
    int T,ans,cas,tt_1,tt_2,att,fnl,ct_1,ct_2,ct_3;

    scanf("%d",&T);

    for(cas = 1 ; cas <= T ; cas++)
    {
        scanf("%d %d %d %d %d %d %d",&tt_1,&tt_2,&fnl,&att,&ct_1,&ct_2,&ct_3);

         ans = tt_1 + tt_2 + fnl + att;

         if( ct_1 >= ct_2 && ct_3 >= ct_2 ) ans+=(ct_1 + ct_3)/2;
         else if( ct_1 >= ct_3 && ct_2 >= ct_3 ) ans+=(ct_1 + ct_2)/2;
         else  ans+=(ct_3 + ct_2)/2;

         //A ≥ 90%• B ≥ 80% & < 90%• C ≥ 70% & < 80%• D ≥ 60% & < 70%• F < 60%

         if( ans >= 90) printf("Case %d: A\n",cas);
         else if( ans >= 80 ) printf("Case %d: B\n",cas);
         else if( ans >= 70) printf("Case %d: C\n",cas);
         else if( ans >= 60) printf("Case %d: D\n",cas);
         else  printf("Case %d: F\n",cas);
    }
    return 0;
}
