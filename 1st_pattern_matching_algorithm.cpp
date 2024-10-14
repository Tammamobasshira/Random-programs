///write a program to implement first pattern matching algorithm
/*
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
int main()
{
 int i, j, temp, Size;
 string text, pattern;
 cout<<"Enter your text : ";
 getline(cin, text);
 int n = text.length();
 cout<<"Enter the text to be find in the text : ";
 getline(cin, pattern);
 int m = pattern.length();
 for(i = 0; text[i]!='\0'; i++)
 {
   j=0;
   if(text[i] == pattern[j])
   {
     temp = i+1;
     while(text[i] == pattern[j])
     {
       i++;
       j++;
     }
     if(pattern[j] == '\0')
     {
       cout<<"The substring is present in the string at position "<<temp<<endl;
       exit(0);
     }
     else
     {
       i = temp;
       temp = 0;
     }
   }
 }
 if(temp == 0)
 {
   cout<<"The substring is not present in the string."<<endl;
 }
 return 0;
}
*/
#include <iostream>
#include<cstdlib>
#include <string>
using namespace std;
int main()
{
    int temp;
    string text;
    string pattern;
    cout<<"Enter your text : ";
    getline(cin, text);
    cout<<"Enter the pattern to be find in the text : ";
    getline(cin, pattern);
    int n = text.length();
    int m = pattern.length();
        for (int j = 0; j<n; j++)
        {   int i =0;
            if (text[j] == pattern[i])
            {
                temp = j+1;
                int a = j, b = i;
                while(text[a] == pattern[b] && a!=n && b!=m)
                {
                  a++;
                  b++;

                }
                if(b==m)
                {
                     cout << "The pattern position " << temp << endl;
                     exit(0);

                }

            }
        }
    cout << "The pattern is not found" <<endl;
    return 0;
}

/*
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string text;
    string pattern;
    getline(cin, text);
    getline(cin, pattern);
    int n = text.length();
    int m = pattern.length();
    for (int i = 0; i <= n - m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (text[i + j] != pattern[j])
            {
                break;
            }
            if (j == m - 1)
            {
                cout << "The pattern position " << i + 1 << endl;
            }
        }
    }

    return 0;
}

#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
int main()
{
 int i, j, temp, Size;
 char str[100] = {"my name is tamma"};
 char subst[20] = {"tam"};
 for(i = 0; str[i]!='\0'; i++)
 {
   j=0;
   if(str[i] == subst[j])
   {
     temp = i+1;
     while(str[i] == subst[j])
     {
       i++;
       j++;
     }
     if(subst[j] == '\0')
     {
       cout<<"The substring is present in the string at position "<<temp<<endl;
       exit(0);
     }
     else
     {
       i = temp;
       temp = 0;
     }
   }
 }
 if(temp ==0)
 {
   cout<<"The substring is not present in the string."<<endl;
 }
 return 0;
}
*/
