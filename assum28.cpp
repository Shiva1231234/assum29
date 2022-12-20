Q=1
/*
#include<iostream>
using namespace std;
struct item // struct declaration
{
int codeno;
int qty;
};
int main()
{
item a,*b; // object declaration
a.codeno=123; // direct access & initialization of member variables
a.qty= 150;
cout<<“\n With simple variable”;
cout<< “\n Codeno :”<<a.codeno;
cout<<“\n Qty : “<<a.qty;
b->codeno=124; // direct access & initialization of member variables
b->qty= 75;
cout<<“\n With pointer variable”;
cout<< “\n Codeno :”<<a->codeno;
cout<<“\n Qty : “<<a->qty;
return 0;
}*/
Q=2
/*

#include <iostream>
using namespace std;

class NUM {
private:
    int n;

public:
    // function to get number
    void getNum(int x)
    {
        n = x;
    }
    // function to display number
    void dispNum(void)
    {
        cout << "value of n is: " << n;
    }
    // unary ++ operator overloading
    void operator++(void)
    {
        n = ++n;
    }
    // unary -- operator overloading
    void operator--(void)
    {
        n = --n;
    }
};

int main()
{
    NUM num;
    num.getNum(10);

    ++num;
    cout << "After increment - ";
    num.dispNum();
    cout << endl;

    --num;
    cout << "After decrement - ";
    num.dispNum();
    cout << endl;

    return 0;
}*/
Q=3
/*
#include<iostream>
using namespace std;

class Complex
{
        int num1, num2;
    public:
        void accept()
        {
                cout<<"\n Enter Two Complex Numbers : ";
                cin>>num1>>num2;
        }

        //Overloading '+' operator using Friend function
        friend Complex operator+(Complex c1, Complex c2);   
                           
        void display()
        {
                cout<<num1<<"+"<<num2<<"i"<<"\n";
        }
};
Complex operator+(Complex c1, Complex c2)
{
        Complex c;
        c.num1=c1.num1+c2.num1;
        c.num2=c1.num2+c2.num2;
        return(c);
}
int main()
{
        Complex c1,c2, sum;      //Created Object of Class Complex i.e c1 and c2

        c1.accept();  //Accepting the values
        c2.accept();

        sum = c1+c2;   //Addition of object
    
        cout<<"\n Entered Values : \n";
        cout<<"\t";
        c1.display();    //Displaying user input values
        cout<<"\t";
        c2.display();
  
        cout<<"\n Addition of Real and Imaginary Numbers : \n";
        cout<<"\t";
        sum.display();  //Displaying the addition of real and imaginary numbers
     
        return 0;
}*/
Q=4
/*
#include<iostream.h>
#include<conio.h>
class time
{
public:
int hour;
int minute;
int second;
public:
friend istream &operator>>(istream &scan,time &t)
{
scan>>t.hour>>t.minute>>t.second;
return scan;
}
friend ostream &operator<<(ostream &print,time &t)
{
print<<t.hour<<“:”<<t.minute<<“:”<<t.second;
return print;
}
void operator==(time z)
{
if(hour==z.hour&&minute==z.minute&&second==z.second)
{
cout<<“\nBoth the time are same: “;
}
else
{
cout<<“\nTime are not same: “;
}
}
};
void main()
{
time t1,t2;
clrscr();
cout<<“\nEnter the Time 1st: HOUR MINUTE SECOND \n”;
cin>>t1;
cout<<“\nTIME: “;
cout<<t1;
cout<<“\nEnter the Time 2nd: HOUR MINUTE SECOND \n”;
cin>>t2;
cout<<“\nTIME: “;
cout<<t2;
t1==t2;
getch();
}

*/
Q=5
/*
#include<iostream>
using namespace std;

class Numbers
{
        int x, y, z;
    public:
        void accept()
        {
                cout<<"\n Enter Three Numbers";
                cout<<"\n --------------------------";
                cout<<"\n First Number   :  ";
                cin>>x;
                cout<<"\n Second Number  :  ";
                cin>>y;
                cout<<"\n Three Number   :  ";
                cin>>z;
                cout<<"\n --------------------------";
        }
        void display()
        {
                cout<<" ";
                cout<<x<<"\t"<<y<<"\t"<<z;
        }
        void operator-()
        {
                x=-x;
                y=-y;
                z=-z;
        }
};
int main()
{
        Numbers num;
        num.accept();
        cout<<"\n Numbers are :\n\n";
        num.display();
        -num;    //Overloaded Unary (-) Operator
        cout<<"\n\n Negated Numbers are :\n\n";
        num.display();
        return 0;
}*/
Q=6
/*
#include<iostream>
#include<string.h>
using namespace std;

class CString
{
    public:
        char str[20];
    public:
        void get_string()
        {
                cout<<"\n Enter String              :   ";
                cin>>str;
        }
        void display()
        {
                cout<<str;
        }
        CString operator+(CString x)  //Concatenating String
        {
                CString s;
                strcat(str, x.str);
                strcpy(s.str, str);
                return s;
        }
        int operator==(CString &t);   //Comparing String
};
int CString::operator==(CString &t)  
{
        for(int i=0; str[i]!='_'; i++)
        {
                for(int j=0; t.str[j]!='_'; j++)
                {
                        if(str[i]==t.str[j])
                        {
                                return 0;
                        }
                        else
                        {
                                return 1;
                        }
                }
        }
}
int main()
{
        CString str1, str2, str3;
        int result=0;

        str1.get_string();
        str2.get_string();

        cout<<"\n ----------------------------------------------";
        cout<<"\n\n First String is           :  ";
        str1.display();   //Displaying First String

        cout<<"\n\n Second String is          :  ";
        str2.display();  //Displaying Second String

        cout<<"\n ----------------------------------------------";
        str3=str1+str2;         //String is concatenated. Overloaded '+' operator
        cout<<"\n\n Concatenated String is    :  ";
        str3.display();

        result=str1==str2;    //Comparing two strings. Overloaded '==' operator
        if(result==0)
        {
                cout<<"\n\n Both Strings are Equal";
        }
        else
        {
                cout<<"\n\n Both Strings are Not Equal";
        }
        return 0;
}*/
Q=7
/*
#include<iostream>
#include<stdio.h>
using namespace std;

class fraction
{
    private:
        long num, deno;
    public:
        fraction(long int n=0, long int d=0)
        {
                num=n;
                deno=d;
        }
        friend void operator>>(istream &in, fraction &f)
        {
                cout<<"\n Numerator    :   ";
                in>>f.num;
                cout<<"\n Denominator  :   ";
                in>>f.deno;
        }
        friend void operator<<(ostream &out, fraction &f)
        {
                out<<f.num<<"/"<<f.deno;
        }
        fraction operator++()
        {
                ++num;
                ++deno;
                return (*this);
        }
        fraction operator++(int s)
        {
                fraction tmp=*this;
                this->num++;
                this->deno++;
                return tmp;
        }
};
int main()
{
        fraction f1,f2;
        cout<<"\n f1    :  ";
        cout<<f1;
        cout<<"\n f2    :  ";
        cout<<f2;
        cout<<"\n\n Enter 1st Fraction Value \n";
        cin>>f1;
        cout<<"\n f1++  :  ";
        f1++;
        cout<<f1;
        <<"\n ++f1  :  ";
        ++f1;
        cout<<f1;
        cout<<"\n\n Enter 2nd Fraction Value \n";
        cin>>f2;
        f2=++f1;
        cout<<"\n f2 = ++f1";
        cout<<"\n f1    :   ";
        cout<<f1;
        cout<<"\n f2    :   ";
        cout<<f2;
        f2=f1++;
        cout<<"\n\n f2 = f1++";
        cout<<"\n f1    :  ";
        cout<<f1;
        cout<<"\n f2    :  ";
        cout<<f2;
        return 0;
}*/
Q=8
/*
#include<iostream>
#include<stdio.h>
using namespace std;

class fraction
{
    private:
        long num, deno;
    public:
        fraction(long int n=0, long int d=0)
        {
                num=n;
                deno=d;
        }
        friend void operator>>(istream &in, fraction &f)
        {
                cout<<"\n Numerator    :   ";
                in>>f.num;
                cout<<"\n Denominator  :   ";
                in>>f.deno;
        }
        friend void operator<<(ostream &out, fraction &f)
        {
                out<<f.num<<"/"<<f.deno;
        }
        fraction operator++()
        {
                ++num;
                ++deno;
                return (*this);
        }
        fraction operator++(int s)
        {
                fraction tmp=*this;
                this->num++;
                this->deno++;
                return tmp;
        }
};
int main()
{
        fraction f1,f2;
        cout<<"\n f1    :  ";
        cout<<f1;
        cout<<"\n f2    :  ";
        cout<<f2;
        cout<<"\n\n Enter 1st Fraction Value \n";
        cin>>f1;
        cout<<"\n f1++  :  ";
        f1++;
        cout<<f1;
        <<"\n ++f1  :  ";
        ++f1;
        cout<<f1;
        cout<<"\n\n Enter 2nd Fraction Value \n";
        cin>>f2;
        f2=++f1;
        cout<<"\n f2 = ++f1";
        cout<<"\n f1    :   ";
        cout<<f1;
        cout<<"\n f2    :   ";
        cout<<f2;
        f2=f1++;
        cout<<"\n\n f2 = f1++";
        cout<<"\n f1    :  ";
        cout<<f1;
        cout<<"\n f2    :  ";
        cout<<f2;
        return 0;
}*/