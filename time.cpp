#include<iostream>
#include<string>
using namespace std;

class time
{
    private:
    int h,m,s;

    public:
    int hours(int a)
    {
        h = 3600*a;
        return 0;
    }

    int minutes(int b)
    {
        m = b*60;
        return 0;
    }

    int seconds(int c)
    {
        s = c;
        return 0;
    }

    void strng(int p, int q,int r)
    {
        cout<<"The time is = ";
        if (p<10)
        {
            cout<<"0"<<p<<":";
        }
        else
        {
            cout<<p<<":";
        }
        if (q<10)
        {
            cout<<"0"<<q<<":";
        }
        else
        {
            cout<<q<<":";
        }
        if (r<10)
        {
            cout<<"0"<<r<<endl;
        }
        else
        {
            cout<<r<<endl;
        }
        cout<<"Time in total seconds: "<<h+m+s<<endl;
    }
};

int main()
{
    cout<<"Enter time:"<<endl;
    cout<<"Hours :";
    int h,m,s;
    cin>>h;
    cout<<"Minutes :";
    cin>>m;
    cout<<"Seconds :";
    cin>>s;
    time t;
    t.hours(h);
    t.minutes(m);
    t.seconds(s);
    t.strng(h,m,s);
    return 0;
}
