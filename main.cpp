#include <iostream>
#include<string>
#include<stdio.h>
#include<algorithm>
#include<stack>
#include <stdlib.h>
#include<limits.h>
#include <math.h>
#include<map>
#include<vector>
#include<sstream>
#include <queue>
#include <iostream>
#include <stdio.h>
#include <cstring>
#include <vector>
#include <algorithm>
#include <iterator>
#include <list>
using namespace std;//RSA算法所需参数



int main(void)

{
    vector<vector<char> >vec;
    FILE *fp;
    char a;
    fp = fopen("domain.txt","r");
    char temp[100];
   // string s;
    vector<char>king;
   // king.push_back("asdfghjk");
   // king.push_back("gh");
  //  cout<<king[1]<<endl;
 //   reverse(king.begin(),king.end());
 //   cout<<king[0];
   // fgets(temp,100,fp);
    //cout<<temp;
   // string stemp;
   // stemp=temp;
   // s.push_back(stemp);
   // cout<<s[0];
      while(!feof(fp))
    {
        a=fgetc(fp);
       // fputc(a, output);
       king.push_back(a);

        if(a=='\n')
        {
           // while(a!='\n')
           // {
           reverse(king.begin(),king.end());
         //  for(ptr=king.begin();ptr!=king.end();ptr++)
   // cout<<*ptr;
                vec.push_back(king);
               // a=fgetc(fp);
                king.clear();
            //}
          //  fputc(a, output);
        }
    }
    sort(vec.begin(),vec.end());
    FILE *out;
    out=fopen("out.txt","w");
    for(int j = 0; j < vec.size(); ++j)
    {
         for(int n=vec[j].size()-1; n >=0; n--)
         {
            // cout << vec[j][n];
             fputc(vec[j][n],out);
         }
            cout<<endl;
    }

    int n='c';
    switch(n++)
    {

        case 'c':case 'C':printf("c");
        case 'd':case 'D':printf("d");
        default :printf("error");break;
    }
   // cout<<19/10;
   // vector<char>::iterator ptr;
   // for(ptr=king.begin();ptr!=king.end();ptr++)
   // cout<<*ptr;
   // cout<<vec.size()<<endl;
   // vector<vector<char> >::iterator ptr1;
  //  for(ptr1=vec.begin();ptr1!=vec.end();ptr1++)
   // cout<<(*ptr1)[1];
   /*
   int i=0;

    while(fgets(temp,100,fp))
    {
         vector<string>s;
        vec.push_back(s);
        vec[i++].push_back(temp);

    }
    cout<<vec.size();
    for(int i=0;i<vec.size();i++)
    {
       // cout<<(*ptr)[1];
       reverse(vec[i].begin(),vec[i].end());
    }
    vector<vector<string> >::iterator ptr;
    for(ptr=vec.begin();ptr!=vec.end();ptr++)
    {
        cout<<(*ptr)[1];
    }
   // cout<<vec[0][0];
*/
    return 0;

}
