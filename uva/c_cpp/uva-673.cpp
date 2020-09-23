#include <bits/stdc++.h>

using namespace std;

int main()
{

    int T,i,j,sz;
    string input;

    cin >> T;

    getchar();
    while(T--)
    {
        stack <char> par;
        getline(cin,input);

        if(input.compare("n")==0)
        {
            printf("Yes\n");
            continue;
        }

        if(par.size()==1||par.size()%2!=0)
        {
            printf("No\n");
            continue;
        }




        j = 0 ;
        for(i = 0 ; i < input.size() ; i++)
        {
            if(input[i] == '(' || input[i] == '[') par.push(input[i]);

            else if(input[i] == ']' && !par.empty() && par.top() == '[')
            {
                par.pop();
            }

                else if(input[i] == ')'&& !par.empty() && par.top() == '(')
                {
                    par.pop();
                }

                else j = 1;

        }

        if(par.empty() && j == 0)
            printf("Yes\n");
        else printf("No\n");

    }
    return 0;
}

