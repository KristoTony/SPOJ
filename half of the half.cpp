    #include<iostream>
    #include<string.h>
    using namespace std;
    int main()
    {
     int t,n,i=0;
     cin>>t;
     while(t--)
     {
      string s;
      cin>>s;
      n=s.length()/2;   
      while(i<n)
      {
       cout<<s[i];
       i+=2;
      }
      cout<<endl;
      i=0;
    }
    } 