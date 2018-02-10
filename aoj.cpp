//1115

#include<iostream>
using namespace std;
int a[10];
void count(int n)
{
    while(n)
    {
        a[n%10]++;
        n/=10;
    }
}

void R(int n)
{
    for(int i=0;i<10;i++)
        a[i]=0;
    while(n)
    {
        count(n);
        n--;
    }
}
int main()
{
    int n;
    while(cin>>n)
    {
        R(n);
        for(int i=0;i<10;i++)
            cout<<a[i]<<endl;
    }
    return 0;
}



//1558

//#include<iostream>
//#include<stdio.h>
//using namespace std;
//int main()
//{
//    int T;
//    while(cin>>T)
//    {
//        while(T--)
//        {
//            int M,N;
//            cin>>M>>N;
//            printf("%.2lf%%\n",(double)N/M*100);
//        }
//    }
//    return 0;
//}


//1004

//#include<iostream>
//using namespace std;
//int a[4];
//void swap(int e,int f)
//{
//    int term;
//    term=a[f];
//    for(int i=f-1;i>=e;i--)
//    {
//        a[i+1]=a[i];
//    }
//    a[e]=term;
//}
//
//void reswap(int e,int f)
//{
//    int term;
//    term=a[e];
//    for(int i=e;i<=f-1;i++)
//    {
//        a[i]=a[i+1];
//    }
//    a[f]=term;
//}
//
//void del(int *a,int e)
//{
//    int term=a[e];
//    for(int i=e;i<4;i++)
//        a[i]=a[i+1];
//    a[3]=term;
//}
//
//void redel(int *a,int e)
//{
//    int term=a[3];
//    for(int i=3;i>=e+1;i--)
//        a[i]=a[i-1];
//    a[e]=term;
//}
//
//void perm(int *a,int begin,int end)
//{
//    if(begin==end)
//    {
//        for(int i=0;i<=end;i++)
//        {
//            cout<<a[i];
//            if(i!=end)
//                cout<<" ";
//        }
//        cout<<endl;
//        return;
//    }
//    else
//    {
//        for(int j=begin;j<=end;j++)
//        {
//            swap(begin,j);
//            perm(a,begin+1,end);
//            reswap(begin,j);
//        }
//    }
//}
//
//void select(int *a)
//{
//    for(int i=3;i>=0;i--)
//    {
//        del(a,i);
//        perm(a,0,2);
//        redel(a,i);
//    }
//}
//int main()
//{
//    while(cin>>a[0]>>a[1]>>a[2]>>a[3])
//        {
//            select(a);
//        }
//    return 0;
//}



//1251

//#include<iostream>
//using namespace std;
//int D(int year,int month,int day)
//{
//    int a[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},
//                  {31,29,31,30,31,30,31,31,30,31,30,31}};
//    int flag=year%4==0&&year%100!=0||year%400==0;
//    for(int i=0;i<=month-2;i++)
//        day+=a[flag][i];
//    return day;
//}
//int main()
//{
//    int year,month,day;
//    char ch;
//    while(cin>>year>>ch>>month>>ch>>day)
//        cout<<D(year,month,day)<<endl;
//    return 0;
//}


//1226

//#include<iostream>
//using namespace std;
//string change(string s)
//{
//    s[0]=toupper(s[0]);
//    for(int i=1;i<s.length();i++)
//    {
//        s[i+1]=s[i]==' '?toupper(s[i+1]):s[i+1];
//    }
//    return s;
//}
//int main()
//{
//    string s;
//    while(getline(cin,s))
//    {
//
//       cout<<change(s)<<endl;
//    }
//    return 0;
//}



//1039

//#include<iostream>
//#define N 1977
//using namespace std;
//int a[3*N];
//int k;
//void count()
//{
//    a[0]=1;
//    for(int i=2;i<=N;i++)
//    {
//        int term,carry=0;
//        for(int j=0;j<3*N;j++)
//        {
//            term=a[j]*i+carry;
//            a[j]=term%10;
//            carry=term/10;
//        }
//    }
//    for(int i=3*N-1;i>=0;i--)
//        if(a[i])
//        {
//            k=i;
//            break;
//        }
//}
//int main()
//{
//    count();
//    for(int i=k;i>=0;i--)
//        cout<<a[i];
//    cout<<endl;
//    return 0;
//}



//1315

//#include<iostream>
//using namespace std;
//int main()
//{
//    int T;
//    while(cin>>T)
//    {
//        string s;
//        while(T--)
//        {
//            cin>>s;
//            int a[24]={0};
//            for(int i=0;i<s.length();i++)
//                a[s[i]-'a']++;
//
//            for(int i=0;i<s.length();i++)
//                if(s[i]!=s[i+1])
//                    cout<<a[s[i]-'a']<<s[i];
//            cout<<endl;
//        }
//    }
//    return 0;
//}


//1044
//#include<iostream>
//using namespace std;
//int  main()
//{
//    cout<<"W"<<endl;
//    return 0;
//}



//1062

//#include<iostream>
//using namespace std;
//int t;
//int monkey(int n)
//{
//    if(n-1)
//    {
//      t=(t+1)*2;
//      return monkey(n-1);
//    }
//    return t;
//}
//int main()
//{
//    int n;
//    while(cin>>n)
//    {
//        t=1;
//        cout<<monkey(n)<<endl;
//    }
//    return 0;
//}



//1553

//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main()
//{
//    int T;
//    while(cin>>T)
//    {
//        int n,flag=0;
//        cin>>n;
//        double a[n],sum=0;
//        for(int i=0;i<n;i++)
//        {
//            cin>>a[i];
//            sum+=a[i];
//            if(a[i]<0.01)
//                flag=1;
//        }
//        sort(a,a+n);
//        if(sum!=T||flag)
//            cout<<"Wrong Answer~"<<endl;
//        else if(a[n-1]==a[n-2])
//                cout<<"Not Very Good~"<<endl;
//             else
//                cout<<"Wonderful~"<<endl;
//    }
//    return 0;
//}



//1236

//#include<iostream>
//using namespace std;
//int lcm(int m,int n)
//{
//    int r=m%n,x=m*n;
//    while(r)
//    {
//        m=n;
//        n=r;
//        r=m%n;
//    }
//    return x/n;
//}
//int run(int *a,int n)
//{
//        int b[n-1];
//        for(int i=1;i<n;i++)
//            b[i-1]=lcm(a[i],a[i-1]);
//        if(n>2)
//            return run(b,n-1);
//    return b[0];
//}
//
//int main()
//{
//    int n;
//    while(cin>>n)
//    {
//        int a[n];
//        for(int i=0;i<n;i++)
//            cin>>a[i];
//        cout<<run(a,n)<<endl;
//
//    }
//    return 0;
//}



//1261

//#include<iostream>
//#define N 1000001
//using namespace std;
//int a[N];
//int b[N];
//int l;
//int list()
//{
//    for(int i=0;i<N;i++)
//        a[i]=1;
//    a[0]=a[1]=0;
//    for(int i=2;i<N;i++)
//    {
//        if(a[i])
//            for(int j=i*2;j<N;j+=i)
//                a[j]=0;
//    }
//    int k=0;
//    for(int i=0;i<N;i++)
//        if(a[i])
//          b[k++]=i;
//    l=k-1;
//}
//int main()
//{
//    list();
//    int n;
//    while(cin>>n)
//    {
//        int s=0;
//        for(int i=1;b[i]<=n&&i<=l;i++)
//            if(b[i]-b[i-1]<=2)
//                      s++;
//        cout<<s<<endl;
//    }
//    return 0;
//}



//1182

//#include<iostream>
//using namespace std;
//string swap(string s)
//{
//    for(int i=0;i<s.length();i++)
//    {
//        if(islower(s[i]))
//            s[i]=toupper(s[i]);
//        else
//            s[i]=tolower(s[i]);
//    }
//    return s;
//}
//int main()
//{
//    int T;
//    while(cin>>T)
//    {
//        string s;
//        while(T--)
//        {
//            cin>>s;
//            cout<<swap(s)<<endl;
//        }
//    }
//    return 0;
//}



//1005

//#include<iostream>
//using namespace std;
//int main()
//{
//    int T;
//    cin>>T;
//    while(T--)
//    {
//        int m,n;
//        cin>>m>>n;
//        for(int i=1;i<=m;i++)
//            if(i==1||i==m)
//                cout<<"X";
//            else
//                cout<<" ";
//        cout<<endl;
//        while(n--)
//        {
//            for(int i=2;i<=m;i++)
//            {
//                for(int j=1;j<=m;j++)
//                {
//                    if(j==i||j==m-i+1)
//                    {
//                        cout<<"X";
//                        if(j>m/2)
//                            break;
//                    }
//                    else
//                    {
//                        cout<<" ";
//                    }
//                }
//                cout<<endl;
//            }
//        }
//        cout<<endl;
//    }
//    return 0;
//}



//1035

//#include<iostream>
//#include<cmath>
//using namespace std;
//int sum(long long n)
//{
//    int s=0;
//    while(n)
//    {
//        s++;
//        n/=10;
//    }
//    return s;
//}
//
//int main()
//{
//    for(long long i=0;i<=200000;i++)
//        if((i*i)%(int)ceil(pow(10,sum(i)))==i)
//            cout<<i<<"  ";
//    return 0;
//}



//1038

//#include<iostream>
//using namespace std;
//int main()
//{
//    int n;
//    while(cin>>n)
//    {
//        while(n!=1)
//        {
//            if(n%2)
//            {
//                cout<<n<<"*"<<3<<"+"<<1<<"=";
//                n=n*3+1;
//                cout<<n<<endl;
//            }
//            else
//            {
//                cout<<n<<"/"<<2<<"=";
//                n/=2;
//                cout<<n<<endl;
//            }
//        }
//    }
//    return 0;
//}




//1227

//#include<iostream>
//using namespace std;
//int main()
//{
//    int T;
//    while(cin>>T)
//    {
//        string s;
//        while(T--)
//        {
//            int sum=0;
//            cin>>s;
//            for(int i=0;i<s.length();i++)
//                sum+=isdigit(s[i]);
//            cout<<sum<<endl;
//        }
//    }
//    return 0;
//}



//1087
//#include<iostream>
//using namespace std;
//int main()
//{
//    string s;
//    while(getline(cin,s))
//    {
//        for(int i=0;i<s.length();i++)
//            if(s[i]==' ')
//                s=s.erase(i,1);
//        cout<<s<<endl;
//    }
//    return 0;
//}



//1013

//#include<iostream>
//using namespace std;
//int sum(int n)
//{
//    int s=0;
//    for(int i=1;i<n;i++)
//        s+=(n%i==0)*i;
//    return s;
//}
//int main()
//{
//    for(int i=1;i<=3000;i++)
//        if(i==sum(sum(i))&&i<sum(i))
//            cout<<"("<<i<<","<<sum(i)<<")";
//    return 0;
//}


//1560

//#include<iostream>
//using namespace std;
//int one(int n)
//{
//    while(n/10)
//    {
//        int sum=0,m=n;
//        while(m)
//        {
//            sum+=m%10;
//            m/=10;
//        }
//        n=sum;
//    }
//    return n;
//}
//int main()
//{
//    int n;
//    while(cin>>n)
//        cout<<one(n)<<endl;
//    return 0;
//}



//1073

//#include<iostream>
//using namespace std;
//int way(int m)
//{
//    int count=0;
//    for(int i=5;i<=100;i+=5)
//        for(int j=2;j<=100;j+=2)
//            for(int k=1;k<=100;k++)
//                count+=i+j+k==m;
//    return count;
//}
//int main()
//{
//    int m;
//    while(cin>>m)
//        cout<<way(m)<<endl;
//    return 0;
//}



//1014

//#include<iostream>
//using namespace std;
//int gcd(int m,int n)
//{
//    int r=m%n;
//    while(r)
//    {
//        m=n;
//        n=r;
//        r=m%n;
//    }
//    return n;
//}
//int main()
//{
//    for(int i=1;i<40;i++)
//        if(gcd(40,i)==1)
//            cout<<i<<"/"<<40<<",";
//    return 0;
//}



//1055

//#include<iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//    int m,n;
//    while(cin>>m>>n)
//    {
//        int a[m],b[n];
//        for(int i=0;i<m;i++)
//            cin>>a[i];
//        for(int i=0;i<n;i++)
//            cin>>b[i];
//        int min=abs(a[0]-b[0]);
//        for(int i=0;i<m;i++)
//            for(int j=0;j<n;j++)
//                min=min>abs(a[i]-b[j])?abs(a[i]-b[j]):min;
//        cout<<min<<endl;
//    }
//    return 0;
//}



//1527

//#include<iostream>
//using namespace std;//博文
//int main()
//{
//    int n;
//    while(cin>>n)
//        cout<<1.0/6*(n+1)*(n+1)*(n+1)+5.0/6*(n+1)+1.0<<endl;
//    return 0;
//}



//1140

//#include<iostream>
//using namespace std;
//int D(int year,int month,int day)
//{
//    int a[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},
//                  {31,29,31,30,31,30,31,31,30,31,30,31}};
//    int flag=year%4==0&&year%100!=0||year%400==0;
//    int sum=day;
//    for(int i=0;i<=month-2;i++)
//        sum+=a[flag][i];
//    return sum;
//}
//int main()
//{
//    int year,month,day;
//    char ch;
//    while(cin>>year>>ch>>month>>ch>>day)
//        cout<<D(year,month,day)<<endl;
//    return 0;
//}



//1136

//#include<iostream>
//using namespace std;
//int main()
//{
//    int T;
//    while(cin>>T)
//    {
//        int a[T][T];
//        for(int i=0;i<T;i++)
//            for(int j=0;j<T;j++)
//                cin>>a[i][j];
//        for(int j=0;j<T;j++)
//        {
//            for(int i=0;i<T;i++)
//            {
//                cout<<a[i][j];
//                if(i!=T-1)
//                    cout<<" ";
//            }
//            cout<<endl;
//        }
//    }
//    return 0;
//}




//1188

//#include<iostream>
//#define N 1000001
//using namespace std;
//int a[N];
//void list()
//{
//    for(int i=2;i<N;i++)
//        a[i]=1;
//    for(int i=2;i<N;i++)
//        if(a[i])
//        for(int j=i*2;j<N;j+=i)a[j]=0;
//}
//int main()
//{
//    list();
//    int n;
//    while(cin>>n)
//    {
//        for(int i=n/2;i>=0;i--)
//            if(a[i]&&a[n-i])
//            {
//                cout<<i<<" "<<n-i<<endl;
//                break;
//            }
//    }
//    return 0;
//}



//1311

//#include<iostream>
//using namespace std;
//int isprime(int n)
//{
//    if(n<2)return 0;
//    for(int i=2;i<=n/2;i++)
//        if(n%i==0)
//            return 0;
//        return 1;
//}
//int main()
//{
//    int a,b;
//    while(cin>>a>>b)
//    {
//        int sum=0;
//        for(int i=a;i<=b;i++)
//            sum+=isprime(i);
//        cout<<sum<<endl;
//    }
//    return 0;
//}


//1177

//#include<iostream>
//using namespace std;
//int a[3*500];
//int factorial(int N)
//{
//    for(int i=0;i<=3*500;i++)
//        a[i]=0;
//
//    a[0]=1;
//    for(int i=2;i<=N;i++)
//    {
//        int term,carry=0;
//        for(int j=0;j<3*500;j++)
//        {
//            term=a[j]*i+carry;
//            a[j]=term%10;
//            carry=term/10;
//        }
//    }
//    int i;
//    for(i=3*500-1;i>=0;i--)
//        if(a[i]!=0)
//          break;
//    return i;
//}
//int main()
//{
//    int N;
//    while(cin>>N)
//    {
//       for(int i=factorial(N);i>=0;i--)
//            cout<<a[i];
//       cout<<endl;
//    }
//    return 0;
//}



//1563

//#include<iostream>
//using namespace std;
//int main()
//{
//    int n;
//    while(cin>>n)
//    {
//        for(int i=0;i<n;i++)
//            cout<<"O";
//        cout<<endl;
//        for(int i=0;i<n-2;i++)
//        {
//            for(int j=0;j<n;j++)
//            {
//                if(j==0||j==n-1)
//                    cout<<"O";
//                else
//                    cout<<" ";
//            }
//            cout<<endl;
//        }
//      if(n!=1)
//      {
//        for(int i=0;i<n;i++)
//            cout<<"O";
//        cout<<endl;
//      }
//    cout<<endl;
//    }
//    return 0;
//}



//1307

//#include<iostream>
//using namespace std;
//int main()
//{
//    int a[4][3],max,row=0,col=0;
//    for(int i=0;i<4;i++)
//        for(int j=0;j<3;j++)
//        {
//            cin>>a[i][j];
//            if(i==0&&j==0)
//                max=a[i][j];
//            if(max<a[i][j])
//            {
//                max=a[i][j];
//                row=i;
//                col=j;
//            }
//        }
//        cout<<max<<" "<<row<<" "<<col<<endl;
//    return 0;
//}



//1047

//#include<iostream>
//using namespace std;
//int is(int n)
//{
//    return (n/100)*(n/100)*(n/100)+
//           (n/10%10)*(n/10%10)*(n/10%10)+
//           (n%10)*(n%10)*(n%10)==n;
//}
//int main()
//{
//    for(int i=2;i<1000;i++)
//        if(is(i))
//           cout<<i<<"  ";
//    return 0;
//}



//1017

//#include<iostream>
//using namespace std;
//string reverse(string s)
//{
//    string t=s;
//    for(int i=0;i<s.length();i++)
//        t[i]=s[s.length()-1-i];
//    return t;
//}
//int main()
//{
//    string s;
//    while(getline(cin,s))
//        cout<<s<<reverse(s)<<endl;
//    return 0;
//}


//1036

//#include<stdio.h>
//double metre(int n)
//{
//    double s=0,x=100,i=1;
//    while(n--)
//    {
//        s+=x*i;
//        x/=2.0;
//        i=2;
//    }
//    return s;
//}
//int main()
//{
//    int n;
//    while(scanf("%d",&n)!=EOF)
//        printf("%.4lf\n",metre(n));
//    return 0;
//}



//1095
//
//#include<iostream>
//using namespace std;
//int main()
//{
//    string s;
//    while(cin>>s)
//    {
//        for(int i=0;i<s.length();i++)
//            if(islower(s[i]))
//                s[i]=toupper(s[i]);
//        cout<<s<<endl;
//    }
//    return 0;
//}



//1286

//#include<iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//    for(int i=1000;i<10000;i++)
//        if(ceil(sqrt(i))==floor(sqrt(i))&&i/1000==i/100%10&&i/10%10==i%10)
//            cout<<i<<endl;
//    return 0;
//}


//1033

//#include<iostream>
//using namespace std;
//int main()
//{
//    int n;
//    while(cin>>n)
//    {
//        int s=0,i;
//        for(i=1;s<=n;i++)
//            s+=i*i*i;
//        cout<<i-2<<endl;
//    }
//    return 0;
//}



//1181

//#include<iostream>
//using namespace std;
//int fib[20];  //fibonacci
//void list()
//{
//    fib[0]=fib[1]=1;
//    for(int i=2;i<20;i++)
//        fib[i]=fib[i-1]+fib[i-2];
//}
//int main()
//{
//    int T;
//    list();
//    while(cin>>T)
//    {
//        int n;
//        while(T--)
//        {
//           cin>>n;
//           cout<<fib[n-1]<<endl;
//        }
//    }
//    return 0;
//}



//1021

//#include<iostream>
//using namespace std;
//int sum(string s)
//{
//    int su=0;
//    for(int i=0;i<s.length();i++)
//        if(isdigit(s[i]))
//            su++;
//    return su;
//}
//int main()
//{
//    string s;
//    while(cin>>s)
//        cout<<sum(s)<<endl;
//    return 0;
//}



//1529

//#include<iostream>
//using namespace std;
//void swap(char &s,char &t)
//{
//    char u;
//    u=s;
//    s=t;
//    t=u;
//}
//int main()
//{
//    string s;       //用字符串存储，序号表示移动到最左边step
//    int k;
//    while(cin>>s>>k)
//    {
//        for(int x=0;x<s.length();x++)
//        {
//         int flag=0;
//         for(char i='9';i>='0';i--)
//         {
//            for(int j=x;j<s.length();j++)
//           {
//               if(s[j]==i&&s[j]>s[x]&&k>=j-x)
//               {
//                   k=k-j+x;
//                    for(int y=j;y!=x;y--)
//                     swap(s[y],s[y-1]);
//
//                   flag=1;
//                   break;
//               }
//           }
//           if(flag)break;
//         }
//         if(k==0||x==s.length()-1)
//         {
//             cout<<s<<endl;
//             break;
//         }
//        }
//
//    }
//    return 0;
//}


//1320

//#include<iostream>
//using namespace std;
//int main()
//{
//    int T;
//    while(cin>>T)
//    {
//        while(T--)
//        {
//            int n,f,f0=1;
//            cin>>n;
//            for(int i=0;i<n;i++)
//            {
//                f=f0+2*i;
//                f0=f;
//            }
//            cout<<f<<endl;
//        }
//    }
//    return 0;
//}




//1305

//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main()
//{
//    int a[10];
//    for(int i=0;i<10;i++)
//        cin>>a[i];
//    sort(a,a+10);
//    for(int i=0;i<10;i++)
//        cout<<a[i]<<" ";
//    return 0;
//}



//1526

//#include<iostream>
//using namespace std;
//int main()
//{
//    int y,m;
//    int a[2][12]={{31,28,31,30,31,30,31,31,40,31,30,31},
//                  {31,29,31,30,31,30,31,31,40,31,30,31}};
//    while(cin>>y>>m)
//        cout<<a[y%4==0&&y%100!=0||y%400==0][m-1]<<endl;
//    return 0;
//}


//1564

//#include<iostream>
//using namespace std;
//int length(int n)
//{
//    return n==1?1:(n%4==0?n/4+1:-1);
//}
//
//int main()
//{
//    int n;
//    while(cin>>n)
//        cout<<length(n)<<endl;
//    return 0;
//}


//1153


//#include<iostream>
//using namespace std;
//int clockwise(int x1,int y1,int x2,int y2,int x3,int y3)//向量叉乘
//{
//    return (x2-x1)*(y3-y2)-(y2-y1)*(x3-x2)<0?1:0;
//}
//int main()
//{
//    int x1,y1,x2,y2,x3,y3;
//    while(cin>>x1>>y1>>x2>>y2>>x3>>y3&&x1!=0||y1!=0||x2!=0||y2!=0||x3!=0||y3!=0)
//        cout<<clockwise(x1,y1,x2,y2,x3,y3)<<endl;
//    return 0;
//}



//1026

//#include<iostream>
//using namespace std;
//long long sum(int a,int n)
//{
//    long long s=0,t=0;
//    while(n--)
//    {
//        t*=10;
//        t+=a;
//        s+=t;
//    }
//    return s;
//}
//int main()
//{
//    int a,n;
//    while(cin>>a>>n)
//        cout<<sum(a,n)<<endl;
//    return 0;
//}



//1302

//#include<iostream>
//using namespace std;
//int main()
//{
//    string s;
//    while(getline(cin,s))
//    {
//        for(int i=0;i<s.length();i++)
//            cout<<(char)toupper(s[i]);
//        cout<<endl;
//    }
//    return 0;
//}



//1031

//#include<iostream>
//using namespace std;
//int reverse(int n)
//{
//    int m=0;
//    while(n)
//    {
//        m*=10;
//        m+=n%10;
//        n/=10;
//    }
//    return m;
//}
//int main()
//{
//    for(int i=95860;;i++)
//        if(i==reverse(i))
//      {
//        cout<<i<<endl;
//        break;
//      }
//    return 0;
//}


//1043

//#include<stdio.h>
//double sum(int n)
//{
//    double s=1;
//    for(int i=2;i<=n;i++)
//        s-=1.0/i/i;
//    return s;
//}
//int main()
//{
//    int n;
//    while(scanf("%d",&n)!=EOF)
//        printf("%.6lf\n",sum(n));
//    return 0;
//}


//1565

//#include<iostream>
//using namespace std;
//void time_add(int &HH,int &MM,int &SS,int hh,int mm,int ss)
//{
//    SS+=ss;
//    MM+=SS/60;
//    SS%=60;
//
//    MM+=mm;
//    HH+=MM/60;
//    MM%=60;
//
//    HH+=hh;
//    HH%=24;
//}
//int main()
//{
//    int HH,MM,SS,hh,mm,ss;
//    while(cin>>HH>>MM>>SS>>hh>>mm>>ss)
//    {
//        time_add(HH,MM,SS,hh,mm,ss);
//        cout<<HH/10<<HH%10<<":"<<MM/10<<MM%10<<":"<<SS/10<<SS%10<<endl;
//    }
//    return 0;
//}



//1191

//#include<iostream>
//#include<cmath>
//using namespace std;
//string iscube(int n)
//{
//    return floor(pow(n,1.0/3))==ceil(pow(n,1.0/3))?"YES":"NO";
//}
//int main()
//{
//    int n;
//    while(cin>>n)
//        cout<<iscube(n)<<endl;
//    return 0;
//}


//1022

//#include<iostream>
//using namespace std;
//int main()
//{
//    int n;
//    while(cin>>n)
//    {
//     int f[n];
//     f[0]=f[1]=1;
//     for(int i=2;i<n;i++)
//        f[i]=f[i-1]+f[i-2];
//
//     for(int i=0;i<n;i++)
//     {
//         cout<<f[i]<<" ";
//     }
//     cout<<endl;
//    }
//    return 0;
//}



//1057

//#include<iostream>
//using namespace std;
//int sum(int x,int y)
//{
//    int s=0;
//    for(int i=x;i<=y;i++)
//        s+=(i%3==1&&i%5==3)*i;
//    return s;
//}
//int main()
//{
//    int x,y;
//    while(cin>>x>>y)
//        cout<<sum(x,y)<<endl;
//    return 0;
//}


//1297
//#include<stdio.h>
//double sum(int n,int m)
//{
//    double s=0;
//    for(int i=n;i<=m;i++)
//        s+=1.0/i/i;
//    return s;
//}
//int main()
//{
//    int n,m;
//    while(scanf("%d%d",&n,&m)!=EOF)
//        printf("%.5lf\n",sum(n,m));
//    return 0;
//}

//1426

//#include<stdio.h>
//int main()
//{
//    int T;
//    while(scanf("%d",&T)!=EOF)
//    {
//        int N;
//        scanf("%d",&N);
//        int a[N],sum=0,max=0;
//        for(int i=0;i<N;i++)
//        {
//            scanf("%d",&a[i]);
//            sum+=a[i];
//            if(sum<0)
//                sum=0;
//            else if(max<sum)
//                    max=sum;
//        }
//        printf("%d\n",max);
//    }
//    return 0;
//}



//1318

//#include<iostream>
//using namespace std;
//
//int sum(int m,int n)
//{
//    int s=0;
//    for(int i=1;i<=m;i++)
//        s+=i%n;
//    return s;
//}
//
//int main()
//{
//    int T,m,n;
//    while(cin>>T)
//    {
//        while(T--)
//        {
//            cin>>m>>n;
//            cout<<sum(m,n)<<endl;
//        }
//    }
//
//
//    return 0;
//}


//1210

//#include<iostream>
//using namespace std;
//int main()
//{
//    string s;
//    while(getline(cin,s))
//        cout<<s<<endl;
//    return 0;
//}


//1131

//#include<iostream>
//using namespace std;
//long long cn(int n,int r)
//{
//    double f=1;
//    while(r)
//    {
//        f*=(n-r+1)/(double)r;
//        r--;
//    }
//    return f;
//}
//int main()
//{
//    int m,n;
//    while(cin>>m>>n)
//        cout<<cn(m,n)<<endl;
//    return 0;
//}



//1552

//#include<iostream>
//using namespace std;
//int main()
//{
//    int T;
//    while(cin>>T)
//    {
//        double max=0;
//        while(T--)
//        {
//            double m;
//            cin>>m;
//            max=max<m?m:max;
//        }
//        cout<<max<<endl;
//    }
//    return 0;
//}


//1012

//#include<iostream>
//using namespace std;
//int main()
//{
//    for(int i=0;i<=2000;i++)
//    if(i%8==1&&i/8%8==1&&i/8/8%8==7
//       &&i%17==4&&i/17%17==15
//       &&i/8/8/8*2==i/17/17)
//        cout<<i<<endl;
//    return 0;
//}



//1027

//#include<iostream>
//using namespace std;
//int main()
//{
//    int n;
//    for(int i=1000;i<10000;i++)
//    {
//        if((i/100+i%100)*(i/100+i%100)==i)
//            cout<<i<<"  ";
//    }
//    return 0;
//}



//1290
//#include<iostream>
//using namespace std;
//int main()
//{
//    string s;
//    while(getline(cin,s))
//        cout<<s.length()<<endl;
//    return 0;
//}




//1028
//
//#include<iostream>
//using namespace std;
//int main()
//{
//    int x;
//    while(cin>>x)
//        cout<<(x-1)*2+10<<endl;
//    return 0;
//}



//1123

//#include<iostream>
//using namespace std;
//int lcm(int m,int n)
//{
//    int r=m%n,t=m*n;
//    while(r)
//    {
//        m=n;
//        n=r;
//        r=m%n;
//    }
//    return t/n;
//}
//int main()
//{
//    int m,n;
//    while(cin>>m>>n)
//        cout<<lcm(m,n)<<endl;
//    return 0;
//}


//1032

//#include<iostream>
//using namespace std;
//int main()
//{
//    for(int cock=0;cock<20;cock++)
//        for(int hen=0;hen<33;hen++)
//            for(int chicken=0;chicken<100;chicken++)
//                if(cock*5+hen*3+chicken*1.0/3==100&&cock+hen+chicken==100)
//                    cout<<"cock="<<cock<<","<<"hen="<<hen<<","<<"chicken="<<chicken<<endl;
//
//    return 0;
//}



//1116

//#include<iostream>
//using namespace std;
//int c_seven(int n)
//{
//    int sum=0;
//    while(n)
//    {
//        sum+=n%7==0||n%10==7||n/10%10==7
//                ||n/100%10==7||n/1000%10==7;
//        n--;
//    }
//    return sum;
//}
//int main()
//{
//    int N;
//    while(cin>>N)
//        cout<<c_seven(N)<<endl;
//    return 0;
//}


//1566

//#include<iostream>
//using namespace std;
////int a[1000000];
////void list()
////{
////    for(int i=2;i<1000000;i++)a[i]=1;
////
////    for(int i=2;i<1000000;i++)
////    {
////        if(a[i])
////            for(int j=i*2;j<1000000;j+=i)a[j]=0;
////    }
////}
//int isprime(int n)
//{
//    if(n<2)return 0;
//    for(int i=2;i<=n/2;i++)
//        if(n%i==0)
//        return 0;
//    return 1;
//}
//int reverse(int n)
//{
//    int m=0;
//    while(n)
//    {
//        m*=10;
//        m+=n%10;
//        n/=10;
//    }
//    return m;
//}
//int main()
//{
////    list();
//    int n;
//    while(cin>>n)
//    {
//        char result=isprime(reverse(n))?'Y':'N';
//        cout<<result<<endl;
//    }
//    return 0;
//}


//1019

//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main()
//{
//    int a[4];
//    while(cin>>a[0]>>a[1]>>a[2]>>a[3])
//    {
//        sort(a,a+4);
//        cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<endl;
//    }
//    return 0;
//}


//1024

//#include<iostream>
//using namespace std;
//int main()
//{
//    int n;
//    while(cin>>n)
//    {
//            int a[n][2];
//            for(int i=0;i<n;i++)
//                cin>>a[i][0]>>a[i][1];
//
////               //冒泡
////               int term0,term1;
////               for(int i=0;i<n-1;i++)
////               {
////                   for(int j=1;j<n-i;j++)
////                   {
////                       if(a[j-1][0]>a[j][0])
////                       {
////                           term0=a[j-1][0];
////                           term1=a[j-1][1];
////                           a[j-1][0]=a[j][0];
////                           a[j-1][1]=a[j][1];
////                           a[j][0]=term0;
////                           a[j][1]=term1;
////                       }
////                   }
////               }
//
//
//              int max=0;
//              for(int i=0;i<n;i++)
//              {
//                  int s=1,x=i,y=i+1;
//                  while(y<n)
//                  {
//                      if(a[x][1]<=a[y][0])
//                      {
//                          s++;
//                          x=y;
//                      }
//                      y++;
//                  }
//                  max=max<s?s:max;
//              }
//              cout<<max<<endl;
//        }
//
//    return 0;
//}


//1291

//#include<iostream>
//using namespace std;
//int is(int n)
//{
//    return (n%10)*(n%10)*(n%10)+(n/10%10)*
//           (n/10%10)*(n/10%10)+(n/100)*(n/100)*
//           (n/100)==n?1:0;
//}
//int main()
//{
//    int a,b;
//    while(cin>>a>>b)
//    {
//        for(int i=a;i<=b;i++)
//            if(i>100&&i<1000&&is(i))cout<<i<<endl;
//    }
//    return 0;
//}



//1304

//#include<iostream>
//using namespace std;
//int factorial_sum(int m)
//{
//    int f=1,s=0;
//    for(int i=1;i<=m;i++)
//    {
//        f*=i;
//        s+=f;
//    }
//    return s;
//}
//int main()
//{
//    int m;
//    while(cin>>m)
//        cout<<factorial_sum(m)<<endl;
//    return 0;
//}

//1505

//#include<iostream>
//using namespace std;
//int reverse(int n)
//{
//    int m=0;
//    while(n)
//    {
//        m*=10;
//        m+=n%10;
//        n/=10;
//    }
//    return m;
//}
//int main()
//{
//    int a,b;
//    while(cin>>a>>b)
//        cout<<a+reverse(b)<<endl;
//    return 0;
//}

//1557

//#include<iostream>
//using namespace std;
//long long highest(long long n)
//{
//    long t=n;
//    while(n)
//    {
//        t=n;
//        n/=10;
//    }
//    return t;
//}
//int main()
//{
//    int T;
//    cin>>T;
//    while(T--)
//    {
//        long long n;
//        cin>>n;
//        cout<<highest(n)<<endl;
//    }
//    return 0;
//}



//1009

//#include<iostream>
//using namespace std;
//int Tom_num(long long n)
//{
//    int t=0;
//    while(n)
//    {
//        t+=n%10;
//        n/=10;
//    }
//    return t;
//}
//int main()
//{
//    long long n;
//    while(cin>>n)
//        cout<<Tom_num(n)<<endl;
//    return 0;
//}



//1303

//#include<iostream>
//using namespace std;
//int main()
//{
//    int m,n;
//    while(cin>>m>>n)
//    {
//        int x=(m/10%10+n/10%10)%10*10+(m%10+n%10)%10;
//        cout<<x<<endl;
//    }
//    return 0;
//}


//1003

//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//    string s;
//    while(getline(cin,s))
//    {
//        for(int i=0;i<s.length();i++)
//            if(!isalpha(s[i]))
//                s=s.erase(i--,1);//注意这里的--
//        cout<<s<<endl;
//    }
//    return 0;
//}


//1247
//
//#include<iostream>
//using namespace std;
//int main()
//{
//    long long n;
//    while(cin>>n)cout<<n*(n+1)/2<<endl;
//    return 0;
//}


//1030

//#include<iostream>
//using namespace std;
//int a[1000000];
//void list(int N)
//{
//    a[0]=a[1]=0;
//    for(int i=2;i<=N;i++)a[i]=1;
//
//    for(int i=2;i<=N;i++)
//    {
//        if(a[i])
//            for(int j=2*i;j<=N;j+=i)a[j]=0;
//    }
//
//}
//int main()
//{
//    int N;
//    while(cin>>N)
//    {
//         list(N);
//        for(int i=1;i<=N;i++)
//            if(a[i])
//              cout<<i<<" ";
//        cout<<endl;
//    }
//    return 0;
//}



//1331

//#include<iostream>
//using namespace std;
//int main()
//{
//    int T;
//    cin>>T;
//    while(T--)
//    {
//        int M,N;
//        cin>>M>>N;
//        int a[M][N];
//        for(int i=0;i<M;i++)
//            for(int j=0;j<N;j++)
//              cin>>a[i][j];
//
//              int flag=0;
//        for(int i=1;i<M-1;i++)
//            for(int j=1;j<N-1;j++)
//              if(a[i][j]>a[i-1][j]&&a[i][j]>a[i][j+1]&&a[i][j]>a[i+1][j]&&a[i][j]>a[i][j-1])
//                        {
//                            cout<<a[i][j]<<" "<<i+1<<" "<<j+1<<endl;
//                            flag=1;
//                        }
//                        if(flag==0)cout<<"None "<<M<<" "<<N<<endl;
//    }
//    return 0;
//}



//1199

//#include<iostream>
//using namespace std;
//int main()
//{
//    int a,b;
//    while(cin>>a>>b&&a!=0||b!=0)
//        cout<<a+b<<endl;
//    return 0;
//}



//1555
//#include<iostream>
//using namespace std;
//int tow_Factorial(int n)
//{
//    int f=1;
//    while(n>0)
//    {
//        f*=n;
//        n-=2;
//    }
//    return f;
//}
//int main()
//{
//    int N;
//    while(cin>>N)
//    {
//       cout<<tow_Factorial(N)<<endl;
//    }
//    return 0;
//}



//1281

//#include<stdio.h>
//int main()
//{
//    int n;
//    while(scanf("%d",&n)!=EOF)
//    {
//        printf("%.2lf\n",95.0*n>=300?95.0*n*0.85:95.0*n);
//    }
//    return 0;
//}



//1202
//#include<iostream>
//using namespace std;
//int sum(int n)
//{
//    int s=0;
//    while(n)
//    {
//        s+=n%10;
//        n/=10;
//    }
//    return s;
//}
//int main()
//{
//    int n;
//    while(cin>>n)
//    {
//        string s=n%sum(n)?"No Answer":"Lucky Word";
//        cout<<s<<endl;
//    }
//    return 0;
//}


//1023

//#include<iostream>
//#include<limits.h>
//using namespace std;
//int main()
//{
//    int n=0,max=INT_MIN;
//    while(n!=-1)
//    {
//        cin>>n;
//        max=max<n?n:max;
//    }
//    cout<<max<<endl;
//    return 0;
//}



//1159

//#include<stdio.h>
//int main()
//{
//    int N;
//    while(scanf("%d",&N)!=EOF)
//    {
//        int a,max=-1,min=101,sum=0,x=N;
//        while(N--)
//        {
//            scanf("%d",&a);
//            max=max<a?a:max;
//            min=min>a?a:min;
//            sum+=a;
//        }
//        printf("%.2lf\n",(sum-max-min)/(x-2.0));
//    }
//    return 0;
//}


//1208

//#include<iostream>
//using namespace std;
//int main()
//{
//    int n,m,T;
//    cin>>T;
//    while(T--)
//    {
//        cin>>n>>m;
//        if(m%2!=0||m/2<n||n<0)
//            cout<<"No answer"<<endl;
//        else
//        {
//        int x=2*n-m/2,y=m/2-n;
//        cout<<x<<" "<<y<<endl;
//        }
//    }
//    return 0;
//}


//1278

//#include<stdio.h>
//#include<math.h>
//#define pi 4.0*atan(1.0)
//int main()
//{
//    int n;
//    while(scanf("%d",&n)!=EOF)
//    {
//        printf("%.3lf %.3lf\n",sin(n*pi/180),cos(n*pi/180));
//    }
//    return 0;
//}


//1328

//#include<iostream>
//using namespace std;
//int main()
//{
//    string s;
//    while(getline(cin,s))
//    {
//        cout<<(char)toupper(s[0]);
//        for(int i=1;i<s.length();i++)
//        {
//            cout<<(char)tolower(s[i]);
//        }
//        cout<<endl;
//    }
//    return 0;
//}

//1332

//#include<iostream>
//using namespace std;
//int main()
//{
//    int a,b;
//    while(cin>>a>>b)
//    {
//        int s=1;
//        for(int i=0;i<b;i++)
//        {
//            s*=a;
//            s%=1000;
//        }
//        cout<<s/100<<s/10%10<<s%10<<endl;
//    }
//    return 0;
//}


//1322

//#include<iostream>
//using namespace std;
//int main()
//{
//    cout<<"I am an \"ACMer\", I love \"ACM\".";
//    return 0;
//}


//1102

//#include<iostream>
//using namespace std;
//int main()
//{
//    int m,n;
//    while(cin>>m>>n)
//    {
//        int s=0,t=0;
//        for(int i=m;i<=n;i++)
//        {
//            if(i%2==0)
//                s+=i*i;
//            else
//                t+=i*i*i;
//        }
//        cout<<s<<" "<<t<<endl;
//    }
//    return 0;
//}


//1246

//#include<iostream>
//using namespace std;
//int main()
//{
//    int T;
//    cin>>T;
//    while(T--)
//    {
//        int N,a,sum=0;
//        cin>>N;
//        while(N--)
//        {
//            cin>>a;
//            sum+=a;
//        }
//        cout<<sum<<endl<<endl;
//    }
//    return 0;
//}

//1209

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int u,d,h;
//    while(scanf("%d%d%d",&u,&d,&h)!=EOF)
//    {
//        printf("%.2lf\n%.2lf\n",(u+d)*h/2.0,u+d+2*sqrt(h*h+((d-u)/2.0)*((d-u)/2.0)));
//    }
//    return 0;
//}


//1567

//#include<stdio.h>
//int main()
//{
//    int h;
//    while(scanf("%d",&h)!=EOF)
//    {
//        printf("%.1lf\n",h*1.8-180);
//    }
//    return 0;
//}


//1309

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    double a,b,c,s;
//    while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF)
//    {
//        if(a+b>c&&a+c>b&&b+c>a)
//        {
//            s=(a+b+c)/2;
//            printf("%.2lf\n",sqrt(s*(s-a)*(s-b)*(s-c)));
//        }
//        else
//            printf("Input error!\n");
//    }
//    return 0;
//}


//1020

//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main()
//{
//    int a[10];
//    for(int i=0;i<10;i++)
//    {
//        cin>>a[i];
//        a[i]*=-1;
//    }
//    sort(a,a+10);
//    for(int i=0;i<10;i++)
//    {
//        cout<<a[i]*(-1)<<" ";
//    }
//    cout<<endl;
//    return 0;
//}


//1243

//#include<iostream>
//using namespace std;
//int main()
//{
//    int T;
//    cin>>T;
//    while(T--)
//    {
//        int N,a,sum=0;
//        cin>>N;
//        while(N--)
//        {
//            cin>>a;
//            sum+=a;
//        }
//        cout<<sum<<endl;
//    }
//    return 0;
//}


//1554

//#include<iostream>
//using namespace std;
//int main()
//{
//    int a,b,max;
//    while(cin>>a>>b)
//    {
//        if(a==b)cout<<a<<" "<<b<<endl;
//        else
//        {
//            max=a>b?a:b;
//            cout<<max<<endl;
//        }
//    }
//    return 0;
//}



//1283

//#include<iostream>
//using namespace std;
//int main()
//{
//    int a,b,c;
//    while(cin>>a>>b>>c)
//    {
//        string result=a+b>c&&a+c>b&&b+c>a?
//                    (a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a?"yes":"no")
//                     :"not a triangle";
//        cout<<result<<endl;
//    }
//    return 0;
//}

//1329

//#include<iostream>
//using namespace std;
//int main()
//{
//    int T,h,a;
//    while(cin>>T>>h)
//    {
//        int sum=0;
//        while(T--)
//        {
//            cin>>a;
//            if(a>h)
//                sum+=2;
//            else
//                sum+=1;
//        }
//        cout<<sum<<endl;
//    }
//    return 0;
//}


//1015

//#include<iostream>
//#include<limits>
//using namespace std;
//int main()
//{
//    string s;
//    while(getline(cin,s))
//    {
//        for(int i=0;i<s.length();i++)
//            cout<<(char)tolower(s[i]);
//        cout<<endl;
//    }
//    return 0;
//}



//1063

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    double x1,y1,x2,y2;
//    while(scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2)!=EOF)
//    printf("%.2lf\n",sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
//    return 0;
//}

//1064

//#include<stdio.h>
//#include<math.h>
//#define pi 4.0*atan(1.0)
//int main()
//{
//    double r;
//    while(scanf("%lf",&r)!=EOF)
//    {
//        printf("%.3lf\n",4/3.0*pi*r*r*r);
//    }
//    return 0;
//}



//1241
//#include<iostream>
//using namespace std;
//int main()
//{
//    int T,a;
//    while(cin>>T&&T)
//    {
//        int sum=0;
//        while(T--)
//        {
//            cin>>a;
//            sum+=a;
//        }
//        cout<<sum<<endl;
//    }
//    return 0;
//}



//1285

//#include<iostream>
//using namespace std;
//int main()
//{
//    int n;
//    while(cin>>n)
//        for(int i=1;i<=n;i++)
//            cout<<i<<endl;
//    return 0;
//}


//1183

//#include<iostream>
//using namespace std;
//int min(int m,int n)
//{
//    return m<=n?m:n;
//}
//int max(int m,int n)
//{
//    return m<=n?n:m;
//}
//int gcd(int m,int n)
//{
//    if(!min(m,n))return max(m,n);
//    int r;
//    while(r=m%n)
//    {
//        m=n;
//        n=r;
//    }
//    return n;
//}
//int main()
//{
//    int T,m,n;
//    cin>>T;
//    while(T--)
//    {
//        cin>>m>>n;
//        cout<<gcd(m,n)<<" "<<m*n/gcd(m,n)<<endl;
//    }
//
//    return 0;
//}

//1556
//#include<iostream>
//using namespace std;
//int main()
//{
//    int a,b;
//    while(cin>>a>>b)cout<<a-b<<endl;
//    return 0;
//}


//1268

//#include<iostream>
//using namespace std;
//int reverse(int n)
//{
//    int m=0;
//    while(n)
//    {
//        m*=10;
//        m+=n%10;
//        n/=10;
//    }
//    return m;
//}
//int main()
//{
//    int m,n;
//    while(cin>>m>>n)cout<<reverse(reverse(m)*reverse(n))<<endl;
//
//    return 0;
//}


//1128

//#include<iostream>
//using namespace std;
//char IsPrime(int n)
//{
//    if(n<2)return 'N';
//    for(int i=2;i<=n/2;i++)
//        if(n%2==0)
//        return 'N';
//    return 'Y';
//}
//int main()
//{
//    int n;
//    while(cin>>n)cout<<IsPrime(n)<<endl;
//    return 0;
//}

//1279

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    double x1,y1,x2,y2;
//    while(scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2)!=EOF)
//       printf("%.3lf\n",sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
//
//    return 0;
//}


//1282

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    float f;
//    while(scanf("%f",&f)!=EOF)
//        printf("%.2f\n",fabs(f));
//    return 0;
//}

//1034

//#include<iostream>
//using namespace std;
//int IsPrimer[2001];
//void list()
//{
//    for(int i=0;i<2001;i++)IsPrimer[i]=1;
//    IsPrimer[0]=IsPrimer[1]=0;
//    for(int i=2;i<2001;i++)
//    {
//           if(IsPrimer[i])
//        for(int j=i*2;j<2001;j+=i)IsPrimer[j]=0;
//    }
//}
////int  IsPrimer(int n)
////{
////    if(n<2)return 0;
////    for(int i=2;i<=n/2;i++)
////        if(n%i==0)return 0;
////    return 1;
////}
//int main()
//{
//    list();
//    int n;
//    while(cin>>n)cout<<IsPrimer[n]<<endl;
//    return 0;
//}


//1277

//#include<iostream>
//using namespace std;
//int main()
//{
//    long long n;
//    while(cin>>n)cout<<n*(n+1)/2<<endl;
//    return 0;
//}



//1245

//#include<iostream>
//using namespace std;
//int main()
//{
//    int a,b;
//    while(cin>>a>>b)cout<<a+b<<endl<<endl;
//
//    return 0;
//}


//1273

//#include<iostream>
//using namespace std;
//int main()
//{
//    int a,b;
//    while(cin>>a>>b)cout<<b<<" "<<a<<endl;
//    return 0;
//}


//1042

//#include<iostream>
//using namespace std;
//int Factorial(int n)
//{
//    int f=1;
//    while(n)f*=n--;
//    return f;
//}
//int main()
//{
//    int n;
//    while(cin>>n)cout<<Factorial(n)<<endl;
//    return 0;
//}


//1271
//
//#include<stdio.h>
//#include<math.h>
//#define pi 4.0*atan(1.0)
//int main()
//{
//    double r,h;
//    while(scanf("%lf%lf",&r,&h)!=EOF)
//      printf("Area=%.3lf\n",2*pi*r*r+2*pi*r*h);
//
//  return 0;
//}

//1244
//
//#include<iostream>
//using namespace std;
//int main()
//{
//    int T;
//    while(cin>>T)
//    {
//        int sum=0,a;
//        while(T--)
//        {
//            cin>>a;
//            sum+=a;
//        }
//        cout<<sum<<endl;
//    }
//}


//1284
//
//#include<iostream>
//using namespace std;
//int main()
//{
//    int year;
//    while(cin>>year)
//    {
//        string result=year%4==0&&year%100!=0||year%400==0?"yes":"no";
//        cout<<result<<endl;
//    }
//    return 0;
//}


//1242

//#include<iostream>
//using namespace std;
//int main()
//{
//    int a,b;
//    while(cin>>a>>b&&a+b!=0)
//    {
//        cout<<a+b<<endl;
//    }
//    return 0;
//}

//1040

//#include<iostream>
//using namespace std;
//int main()
//{
//    int n;
//    while(cin>>n)
//    {
//        int sum=0;
//        while(n)sum+=n%2*n--;
//        cout<<sum<<endl;
//    }
//    return 0;
//}



//1276
//
//#include<stdio.h>
//int main()
//{
//    double f;
//    while(scanf("%lf",&f)!=EOF)
//    {
//        printf("%.3lf\n",5*(f-32)/9);
//    }
//    return 0;
//}


//1228

//#include<iostream>
//using namespace std;
//int a[4*5000];
//
//int Factorial(int n)
//{
//    for(int i=0;i<4*n;i++)a[i]=0;
//    a[4*n-1]=1;
//    for(int i=2;i<=n;i++)
//    {
//        int term,carry=0;
//        for(int j=4*n-1;j>=0;j--)//乘法及进位
//        {
//            term=a[j]*i+carry;
//            a[j]=term%10;
//            carry=term/10;
//        }
//    }
//    int k;
//    for(k=0;k<4*n;k++)
//        if(a[k]!=0)break;
//    return k;//输出开始位置
//}
//
//int main()
//{
//    int n;
//    while(cin>>n)
//    {
//    for(int i=Factorial(n);i<4*n;i++)
//        cout<<a[i];
//    cout<<endl;
//    }
//    return 0;
//}


//1041
//#include<stdio.h>
//using namespace std;
//int main()
//{
//    int n;
//    while(scanf("%d",&n)!=EOF)
//    {
//        double t=0;
//        for(int i=1;i<=n;i++)t+=1.0/i;
//        printf("%.6lf\n",t);
//    }
//}



//1312

//#include<iostream>
//using namespace std;
//string reverse(string s)
//{
//    string t=s;
//    for(int i=0;i<s.length();i++)t[i]=s[s.length()-i-1];
//    return t;
//}
//int main()
//{
//    string s;
//    while(cin>>s)
//        cout<<reverse(s)<<endl;
//}


//1207

//#include<iostream>
//using namespace std;
//int Is(int n)
//{
//    return (n%10)*(n%10)*(n%10)+(n/10%10)*(n/10%10)*(n/10%10)+(n/100)*(n/100)*(n/100)==n;
//}
//int main()
//{
//    int n;
//    while(cin>>n)
//    {
//        if(!n)break;
//        string result=Is(n)?"Yes":"No";
//        cout<<result<<endl;
//    }
//}

//1314
//
//#include<iostream>
//int main()
//{
//    std::cout<<"Happy new year \"2014\""<<std::endl;
//}


//1108
//
//#include<iostream>
//using namespace std;
//int main()
//{
//    int score;
//    while(cin>>score)
//    {
//        if(score>100||score<0)
//            cout<<"Score is error!"<<endl;
//        else if(score>=90)
//            cout<<"A"<<endl;
//        else if(score>=80)
//            cout<<"B"<<endl;
//        else if(score>=70)
//            cout<<"C"<<endl;
//        else if(score>=60)
//            cout<<"D"<<endl;
//        else
//            cout<<"E"<<endl;
//    }
//}


//1002
//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    double a,b,c;
//    while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF)
//    {
//        printf("%.2lf %.2lf\n",(-b+sqrt(b*b-4*a*c))/2/a,(-b-sqrt(b*b-4*a*c))/2/a);
//    }
//}


//1274

//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main()
//{
//    int a[3];
//    while(cin>>a[0]>>a[1]>>a[2])
//    {
//        sort(a,a+3);
//        cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
//    }
//}


//1206

//#include<iostream>
//using namespace std;
//int a[1000];
//void list()
//{
//    for(int i=0;i<1000;i++)a[i]=1;
//    a[0]=a[1]=0;
//    for(int i=2;i<1000;i++)
//    {
//        if(a[i])
//            for(int j=i*2;j<1000;j+=i)a[j]=0;
//    }
//}
//int main()
//{
//    list();
//    int T,N;
//    cin>>T;
//    while(T--)
//    {
//        cin>>N;
//        int i,result=0;
//        while(N--)
//        {
//            cin>>i;
//            result+=a[i]*i;
//        }
//        cout<<result<<endl;
//    }
//    return 0;
//}

//1273
//
//#include<iostream>
//using namespace std;
//int reverse(int n)
//{
//   int m=0;
//   while(n)
//   {
//       m*=10;
//       m+=n%10;
//       n/=10;
//   }
//   return m;
//}
//int main()
//{
//    int a;
//    while(cin>>a)
//    {
//        cout<<reverse(a)<<endl;
//    }
//
//    return 0;
//}

//1201
//
//#include<iostream>
//using namespace std;
//int main()
//{
//    int m,n;
//    while(cin>>m>>n)
//  {
//     int count=0;
//    while(m++<=n)if(m%15==0)count++;
//
//    cout<<count<<endl;
//  }
//}

//1275

//#include<stdio.h>
//int main()
//{
//    int a,b,c;
//    while(scanf("%d%d%d",&a,&b,&c)!=EOF)
//    printf("%.3f\n",(a+b+c)/3.0);
//}

//1011

//#include<iostream>
//using namespace std;
//int Is(int n) //三位正整数
//{
//    return (n%10)*(n%10)*(n%10)+(n/10%10)*(n/10%10)*(n/10%10)+(n/100)*(n/100)*(n/100)==n;
//}
//int main()
//{
//    for(int i=100;i<=999;i++)
//    {
//        if(Is(i))cout<<i<<endl;
//    }
//}

//1240

//#include<iostream>
//using namespace std;
//int main()
//{
//    int T,a,b;
//    cin>>T;
//    while(T--)
//    {
//        cin>>a>>b;
//        cout<<a+b<<endl;
//    }
//    return 0;
//}

//1239

//#include<iostream>
//using namespace std;
//int main()
//{
//    int a,b;
//    while(cin>>a>>b)
//    {
//        cout<<a+b<<endl;
//    }
//    return 0;
//}


//1280

//#include<iostream>
//using namespace std;
//int main()
//{
//    int n;
//    while(cin>>n)
//    {
//        string s=n%2==0?"yes":"no";
//        cout<<s<<endl;
//    }
//    return 0;
//}

//1313

//#include<iostream>
//int main()
//{
//    int n;
//    std::cin>>n;
//    for(int i=7;i<=n;i++)
//        if(i%7==0||i%10==7||i/10%10==7||i/100==7)
//        std::cout<<i<<std::endl;
//    return 0;
//}


//1301

//#include<stdio.h>
//int main()
//{
//	int a;
//	while(~scanf("%d",&a))
//		printf("%d\n",a*a*a);
//	return 0;
//}
//

//1163

//#include<stdio.h>
//int main()
//{
//	printf("WelCome To Ahstu Online Judge System\n");
//}

//1161

//#include<stdio.h>
//int main()
//{
//	int a,b;
//	scanf("%d%d",&a,&b);
//	printf("%d\n",a+b);
//	return 0;
//}

//1011

//#include<stdio.h>
//int main()
//{
//   int a;
//   while(scanf("%d",&a)!=EOF)
//   printf("%d\n",(a%10)*(a%10)*(a%10)+(a/10%10)*(a/10%10)*(a/10%10)+(a/100)*(a/100)*(a/100)==a?1:0);
//   return 0;
//}
