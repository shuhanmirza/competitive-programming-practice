package uva_10130;

import java.util.*;

public class Uva_10130 {

    static long w[] = new long[1005];
    static long p[] = new long[1005];
    static long cap, num_prd;
    static long dp[][] = new long[1005][1005];

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        long cas, mem, T, ans;
        long mw[] = new long[200];
        int i;

        T = scan.nextLong();
        //scanf("%lld",  & T);

        for (cas = 1; cas <= T; cas++) {
            
            num_prd = scan.nextLong();
            //scanf("%lld",num_prd);

            for (i = 0; i < num_prd; i++) {

                p[i] = scan.nextLong();
                w[i] = scan.nextLong();

                //scanf("%lld %lld",  & p[i],  & w[i]);
            }

            mem = scan.nextLong();
            //scanf("%lld",  & mem);

            ans = 0;
            for (i = 0; i < mem; i++) {
                mw[i] = scan.nextLong();
                //scanf("%lld",  & mw[i]);

                for (int j = 0; j < 1005; j++) {
                    for(int k = 0 ; k < 1005 ; k++)
                        dp[k][j] = -1;
                }

                cap = mw[i];
                
                ans += rec(0,0);
            }

            System.out.println(ans);
        }
    }

    private static long rec(int pos, int cp) {

        if (pos >= num_prd) {
            return 0;
        }

        long i = -1;

        if (dp[pos][cp] != i) {
            return dp[pos][cp];
        }

        long ret = rec(pos + 1, cp);

        if (cp + w[pos] <= cap) {
            ret = max(ret, rec(pos + 1,(int) (cp + w[pos])) + p[pos]);
        }

        dp[pos][cp] = ret;
        return ret;
    }

    private static long max(long a, long b) {
        if (a > b) {
            return a;
        } else {
            return b;
        }
    }

}
