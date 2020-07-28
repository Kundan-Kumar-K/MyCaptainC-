#include<iostream>
#include<string>
using namespace std;

class time
{
    private:
    int h,m,s;
    char s1[7];

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
        s1[2] = ':';
        s1[5] = ':';
        if (p<10)
        {
            s1[0] = '0';
            s1[1] = p;
        }
        else
        {
            s1[0,1] = p;
        }
        if (q<10)
        {
            s1[3] = '0';
            s1[4] = q;
        }
        else
        {
            s1[3,4] = q;
        }
        if (r<10)
        {
            s1[6] = '0';
            s1[7] = r;
        }
        else
        {
            s1[6,7] = r;
        }
    }

    void displayseconds()
    {
        cout<<"The time is = "<<s1<<endl;
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
    t.displayseconds();
}
