/*
Group No: 07 (section: B)

1. Baki, Md. Abdullah Al     14-27968-3
2. Shihab, Mehedi Hasan      14-27923-3
3. Rashid, Md. Mamun Or

*/

#include <iostream>
#include <string>

using namespace std;

class grade
{
public:
    void setq(double a,double b,double c)
   {
       q1=a;
       q2=b;
       q3=c;
   }

    double per,att,trm;
    int cr;
    string nm[10];

protected:
    double q1,q2,q3;
};

class calculation:public grade
{
public:
    double best()
    {
        double x;
        if(q1<=q2 && q1<=q3)
            x=q2+q3;
        else if(q2<=q1 && q2<=q3)
            x=q1+q3;
        else if(q3<=q1 && q3<=q2)
            x=q1+q2;
        return x;
    }

    void getgrade(double y)
    {
        if(y>=94)
            cout<<"your grade is A+"<<endl;
        else if(y<94 && y>=90)
            cout<<"your grade is A"<<endl;
        else if(y<90 && y>=86)
            cout<<"your grade is A-"<<endl;
        else if(y<86 && y>=82)
            cout<<"your grade is B+"<<endl;
        else if(y<82 && y>=78)
            cout<<"your grade is B"<<endl;
        else if(y<78 && y>=74)
            cout<<"your grade is B-"<<endl;
        else if(y<74 && y>=70)
            cout<<"your grade is C+"<<endl;
        else if(y<70 && y>=66)
            cout<<"your grade is C"<<endl;
        else if(y<66 && y>=62)
            cout<<"your grade is C-"<<endl;
        else if(y<62 && y>=58)
            cout<<"your grade is D+"<<endl;
        else if(y<58 && y>=54)
            cout<<"your grade is D"<<endl;
        else if(y<54 && y>=50)
            cout<<"your grade is D-"<<endl;
        else if(y<50)
            cout<<"your grade is F"<<endl;
    }
    string getgrade2(double y)
    {
        string a;
        if(y>=94)
            a="A+";
        else if(y<94 && y>=90)
            a="A";
        else if(y<90 && y>=86)
            a="A-";
        else if(y<86 && y>=82)
            a="B+";
        else if(y<82 && y>=78)
            a="B";
        else if(y<78 && y>=74)
            a="B-";
        else if(y<74 && y>=70)
            a="C+";
        else if(y<70 && y>=66)
            a="C";
        else if(y<66 && y>=62)
            a="C-";
        else if(y<62 && y>=58)
            a="D+";
        else if(y<58 && y>=54)
            a="D";
        else if(y<54 && y>=50)
            a="D-";
        else if(y<50)
            a="F";
        return a;
    }

    void getgpa(double y)
    {
        if(y>=94)
            cout<<"your GPA is 4.00"<<endl;
        else if(y<94 && y>=90)
            cout<<"your GPA is 3.75"<<endl;
        else if(y<90 && y>=86)
            cout<<"your GPA is 3.50"<<endl;
        else if(y<86 && y>=82)
            cout<<"your GPA is 3.25"<<endl;
        else if(y<82 && y>=78)
            cout<<"your GPA is 3.00"<<endl;
        else if(y<78 && y>=74)
            cout<<"your GPA is 2.75"<<endl;
        else if(y<74 && y>=70)
            cout<<"your GPA is 2.50"<<endl;
        else if(y<70 && y>=66)
            cout<<"your GPA is 2.25"<<endl;
        else if(y<66 && y>=62)
            cout<<"your GPA is 2.00"<<endl;
        else if(y<62 && y>=58)
            cout<<"your GPA is 1.75"<<endl;
        else if(y<58 && y>=54)
            cout<<"your GPA is 1.50"<<endl;
        else if(y<54 && y>=50)
            cout<<"your GPA is 1.25"<<endl;
        else if(y<50)
            cout<<"your GPA is 0.00"<<endl;
    }

    double getpoint(double y)
    {
        double r;
        if(y>=94)
            r=4.00;
        else if(y<94 && y>=90)
            r=3.75;
        else if(y<90 && y>=86)
            r=3.50;
        else if(y<86 && y>=82)
            r=3.25;
        else if(y<82 && y>=78)
            r=3.00;
        else if(y<78 && y>=74)
            r=2.75;
        else if(y<74 && y>=70)
            r=2.50;
        else if(y<70 && y>=66)
            r=2.25;
        else if(y<66 && y>=62)
            r=2.00;
        else if(y<62 && y>=58)
            r=1.75;
        else if(y<58 && y>=54)
            r=1.50;
        else if(y<54 && y>=50)
            r=1.25;
        else if(y<50)
            r=0;
    return r;
    }

    void totalcgpa(double y)
    {
             if(y == 4.00)
            cout<<"your total Grade is A+"<<endl;
        else if(y<4.00 && y>= 3.75)
            cout<<"your total Grade is A"<<endl;
        else if(y<3.75 && y>=3.50)
            cout<<"your total Grade is A-"<<endl;
        else if(y<3.50 && y>=3.25)
            cout<<"your total Grade is B+"<<endl;
        else if(y<3.25 && y>=3.00)
            cout<<"your total Grade is B"<<endl;
        else if(y<3.00 && y>=2.75)
            cout<<"your total Grade is B-"<<endl;
        else if(y<2.75 && y>=2.50)
            cout<<"your total Grade is C+"<<endl;
        else if(y<2.50 && y>=2.25)
            cout<<"your total Grade is C"<<endl;
        else if(y<2.25 && y>=2.00)
            cout<<"your total Grade is C-"<<endl;
        else if(y<2.00 && y>=1.75)
            cout<<"your total Grade is D+"<<endl;
        else if(y<1.75 && y>=1.50)
            cout<<"your total Grade is D"<<endl;
        else if(y<1.50 && y>=1.25)
            cout<<"your total Grade is D-"<<endl;
        else if(y<1.25)
            cout<<"your total Grade is F"<<endl;
    }
};

int main()
{
    grade gr;
    calculation cal;

    int i,n,r;
    double a,b,c,p,d[10],x,t,y=0,z=0,m[10],s[10],u,k,l,l1,l2,l3,l4,l5,l6;

    cout<<"Credit completed: ";
    cin>>r;
    cout<<"Current CGPA: ";
    cin>>u;
    cout<<"How many courses you took in this semister: ";
    cin>>n;

     m[n];
     s[n];

    for(i=0;i<n;i++)
    {
    cout<<endl<<endl<<"Input Subject name: ";
    cin>>gr.nm[i];
    cout<<"Input the credit of this Subject: ";
    cin>>gr.cr;

    if(gr.cr==1)
    {
        cout<<"Input the 1st Lab report's mark: ";
        cin>>l1;
        try
    {
        if(l1>10 || l1<0)throw c;
    }
    catch(double x)
    {
        cout<<"Lab report's mark will not be greater than 10 and not be less than 0"<<endl;
    }
        cout<<"Input the 2nd Lab report's mark: ";
        cin>>l2;
        try
    {
        if(l2>10 || l2<0)throw c;
    }
    catch(double x)
    {
        cout<<"Lab report's mark will not be greater than 10 and not be less than 0"<<endl;
    }
        cout<<"Input the 3rd Lab report's mark: ";
        cin>>l3;
        try
    {
        if(l3>10 || l3<0)throw c;
    }
    catch(double x)
    {
        cout<<"Lab report's mark will not be greater than 10 and not be less than 0"<<endl;
    }
        cout<<"Input the 4th Lab report's mark: ";
        cin>>l4;
        try
    {
        if(l1>10 || l1<0)throw c;
    }
    catch(double x)
    {
        cout<<"Lab report's mark will not be greater than 10 and not be less than 0"<<endl;
    }
        cout<<"Input the 5th Lab report's mark: ";
        cin>>l5;
        try
    {
        if(l1>10 || l1<0)throw c;
    }
    catch(double x)
    {
        cout<<"Lab report's mark will not be greater than 10 and not be less than 0"<<endl;
    }
        l=l1+l2+l3+l4+l5;

        cout<<"Input your Lab Quiz mark: ";
        cin>>l6;

        cout<<"input your performance mark: ";
        cin>>gr.per;
        try
    {
        if(gr.per>10 || gr.per<0)throw c;
    }
    catch(double x)
    {
        cout<<"Performance mark will not be greater than 10 and not be less than 0"<<endl;
    }
        cout<<"Input your attendance Mark: ";
        cin>>gr.att;
        try
    {
        if(gr.att>10 || gr.att<0)throw c;
    }
    catch(double x)
    {
        cout<<"Attendance mark will not be greater than 10 and not be less than 0"<<endl;
    }
        d[i]=l+l6+gr.per+gr.att;

        cout<<"Your total mark is:"<<d[i]<<endl;

        cal.getgrade(d[i]);
        cal.getgpa(d[i]);
    }

    else
    {


    cout<<"Input your Quiz 1 mark: ";
    cin>>a;
    try
    {
        if(a>20 || a<0)throw a;
    }
    catch(double x)
    {
        cout<<"Quiz mark will not be greater than 20 and not be less than 0"<<endl;
    }
    cout<<"Input your Quiz 2 mark: ";
    cin>>b;
    try
    {
        if(b>20 || b<0)throw b;
    }
    catch(double x)
    {
        cout<<"Quiz mark will not be greater than 20 and not be less than 0"<<endl;
    }
    cout<<"Input your Quiz 3 mark: ";
    cin>>c;
    try
    {
        if(c>20 || c<0)throw c;
    }
    catch(double x)
    {
        cout<<"Quiz mark will not be greater than 20 and not be less than 0"<<endl;
    }
    cal.setq(a,b,c);

    cout<<"The sum of best two quizes: "<<cal.best()<<endl;

    cout<<"Input Your Performance mark: ";
    cin>>gr.per;
    try
    {
        if(gr.per>10 || gr.per<0)throw gr.per;
    }
    catch(double x)
    {
        cout<<"performance mark will not be greater than 10 and not be less than 0"<<endl;
    }
      cout<<"Input Your Attendance mark: ";
    cin>>gr.att;
    try
    {
        if(gr.att>10 || gr.att<0)throw gr.att;
    }
    catch(double x)
    {
        cout<<"Attendance mark will not be greater than 10 and not be less than 0"<<endl;
    }
      cout<<"Input Your Term exam mark: ";
    cin>>gr.trm;
    try
    {
        if(gr.trm>40 || gr.trm<0)throw gr.trm;
    }
    catch(double x)
    {
        cout<<"Term exam mark will not be greater than 40 and not be less than 0"<<endl;
    }

    d[i]=cal.best()+gr.per+gr.att+gr.trm;

    cout<<"your total mark is: "<<d[i]<<endl;

    cal.getgrade(d[i]);
    cal.getgpa(d[i]);
    }
    m[i]=cal.getpoint(d[i]);
    s[i]=gr.cr;
    }

    for(i=0;i<n;i++)
    {
        m[i]*s[i];
        y+=m[i]*s[i];
        z+=s[i];
    }
    k=((r*u)+y)/(z+r);
    t=y/z;


    cout<<endl<<endl<<" Results :"<<endl;
    for(i=0;i<n;i++)
    {
        int g=i+1;
        cout<<g<<". Subject Name: "<<gr.nm[i]<<"     Credit: "<<s[i]<<"      Mark: "<<d[i]<<"   GPA: "<<cal.getgrade2(d[i])<<endl;
    }

    cout<<endl<<"Your CGPA of this semister is: "<<t<<endl<<endl;
    cal.totalcgpa(t);
    cout<<"Your final CGPA: "<<k<<endl<<endl<<endl;
    return 0;
}
