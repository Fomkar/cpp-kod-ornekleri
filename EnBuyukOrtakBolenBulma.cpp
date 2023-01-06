#include<iostream>

using namespace std;
 
void gcd(int, int);
 
int main()
{
    int a, b;
    cout << "Iki sayi giriniz: ";
    cin >> a >> b;
    gcd(a,b);
  	return 0;
}
 
void gcd(int a, int b)
{
    int m,n;
 
    m=a;
    n=b;
    cout << " m :" << m ;
    cout << " n :" << n<< endl;
    while(m!=n)
    {
        if(m>n){
            m=m-n;
            cout << " m :" << m ;
            cout << " n :" << n<< endl;
        }
        else{
            n=n-m;
            cout << " m :" << m ;
            cout << " n :" << n<< endl;}
    }
 
    cout << "\nEBOB " << a <<" & " << b << ": " << m;
}
