#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<windows.h>
using namespace std;
class account
{
    protected:
    long double deposit,withdrawal,total;
    unsigned long long int acc_no,acc_balance,net_bal;
    int sum=0;
    char acc_type;
    public:
    string name;
    int i;
    unsigned long long int ph_no,phone;

     void pat()
     {
         int a=6;
         for(int i=0;i<a;i++)
             {
                cout<<".";
                Sleep(1000);
             }
            cout<<endl;
     }
     void pattern()
     {
         int a=80;
         for(int i=0;i<a;i++)
             {
                cout<<"*";
             }
            cout<<endl;
     }
     void space1()
     {
        cout<<"\t\t\t:: ENTER THE ACCOUNT DETAILS ::"<<endl;
     }
     void space2()
     {
        cout<<"\t\t\t:: ACCOUNT DETAILS ::"<<endl;
     }
     void show();
     void getdata();
     void putdata();

};
void account :: getdata()
{
            cout<<"Enter the name of account holder : ";
            cin>>name;
            cout<<"Enter the phone number : ";
            cin>>ph_no;
            cout<<"Enter the account number : ";
            cin>>acc_no;
            cout<<"Enter the type of account[S/C] : ";
            cin>>acc_type;
            cout<<"Enter the account balance : ";
            cin>>acc_balance;
}
void account :: putdata()
{
            cout<<"The name of account holder : "<<name<<endl;
            cout<<"The phone number : "<<ph_no<<endl;
            cout<<"The account number : "<<acc_no<<endl;
            cout<<"The type of account[S/C] : "<<acc_type<<endl;
            cout<<"The account balance : "<<total<<endl;

}
class new_acc : public account
{
     protected:
     unsigned long long int aadhar_num,phn_no,annual_income;
     double pincode;
     string dob,address,email,district,taluka,city,state,type;
     int age;
     string first_name,last_name,f_name,m_name,marital,gender;
     public:
     void show();
     void change();
     void enquiry();
     void close();
     void Get_data()
     {
            cout<<"Enter the first name of account holder : ";
            cin>>first_name;
            cout<<"Enter the last name of account holder : ";
            cin>>last_name;
            cout<<"Enter your Father's name : ";
            cin>>f_name;
            cout<<"Enter your date of birth : ";
            cin>>dob;
            cout<<"Enter your age : ";
            cin>>age;
            cout<<"Enter your Gender : ";
            cin>>gender;
            cout<<"Enter marital status : ";
            cin>>marital;
            cout<<"Enter your phone number : ";
            cin>>phn_no;
            cout<<"Enter your email address : ";
            cin>>email;
            cout<<"Enter your aadhar number : ";
            cin>>aadhar_num;
            cout<<"Enter your address : ";
            cin>>address;
            cout<<"Enter city name : ";
            cin>>city;
            cout<<"Enter pincode : ";
            cin>>pincode;
            cout<<"Enter district name : ";
            cin>>district;
            cout<<"Enter taluka name : ";
            cin>>taluka;
            cout<<"Enter state name : ";
            cin>>state;
            cout<<"Enter your annual income : ";
            cin>>annual_income;
            cout<<"Enter the type of account[S/C] : ";
            cin>>type;
            cout<<"Enter the amount you would like to deposit : ";
            cin>>net_bal;
    }
    void Put_data()
    {
            cout<<"The first name is "<<first_name<<endl;
            cout<<"The last name is "<<last_name<<endl;
            cout<<"The father's name is "<<f_name<<endl;
            cout<<"Date of birth is "<<dob<<endl;
            cout<<"Age is "<<age<<endl;
            cout<<"Gender is "<<gender<<endl;
            cout<<"The martial status is "<<marital<<endl;
            cout<<"Phone number is "<<phn_no<<endl;
            cout<<"Email Id is "<<email<<endl;
            cout<<"Aadhar Number is "<<aadhar_num<<endl;
            cout<<"City is "<<city<<endl;
            cout<<"Pincode is "<<pincode<<endl;
            cout<<"Taluka is "<<taluka<<endl;
            cout<<"District is "<<district<<endl;
            cout<<"State is "<<state<<endl;
            cout<<"Annual income is "<<annual_income<<endl;
            cout<<"Type of your account is "<<type<<endl;
            cout<<"Amount you would like to deposit : "<<net_bal<<endl;
    }
};
void new_acc :: show()
{
             int SUM;
             if(SUM!=0)
             {
                 cout<<"Enter the phone number for account you are searching for created account : ";
                 cin>>phone;
                 if(phone==phn_no)
                 {
                    cout<<"The name of account holder is "<<first_name<<" "<<last_name<<endl;
                 }
                 else
                 {
                   cout<<"Entered phone number is invalid"<<endl;
                 }
             }
             else
             {
                 cout<<"No data is entered"<<endl;
             }
}
void new_acc :: change()
{
    {
            new_acc N;
            int SUM;
            if(SUM!=0)
            {
                cout<<"Enter the phone number for account you are searching for created account : "<<endl;
                cin>>phone;

                if(phone==phn_no)
                {
                    cout<<"Enter your New Details"<<endl;
                    N.getdata();
                    N.putdata();
                }
                 else
                 {
                   cout<<"Entered phone number is invalid";
                 }
            }
             else
             {
                 cout<<"No data is entered"<<endl;
             }
    }
}
void new_acc :: enquiry()
{
    {
             int SUM;
             if(SUM==0)
             {

                 cout<<"Enter the phone number for account you are searching for created account : ";
                 cin>>phone;
                 if(phone==phn_no)
                 {
                       cout<<"The total balance is "<<net_bal<<endl;
                 }
                 else
                 {
                   cout<<"Entered phone number is invalid"<<endl;
                 }
             }
             else
             {
                 cout<<"No data is entered"<<endl;
             }
    }
}
void new_acc :: close()
{
     {
             new_acc N;
             int SUM;
            if(SUM!=0)
             {
                 cout<<"Enter the phone number for account you are searching for created account : ";
                 cin>>phone;
                     if(phone==phn_no)
                     {
                               unsigned long long int ad,p,ann,net;
                               double pin;
                               string d,e,dis,t,c,s,ta;
                               int a;
                               string f,l,ff,m,g;
                               first_name = f;
                               last_name = l;
                               f_name = ff;
                               dob = d;
                               age = a;
                               gender = g;
                               marital = m;
                               phn_no = p;
                               email = e;
                               aadhar_num = ad;
                               city = c;
                               pincode = pin;
                               taluka = ta;
                               district = dis;
                               state = s;
                               annual_income = ann ;
                               type = t;
                               net_bal = net;
                        }
                       else
                       {
                          cout<<"Entered phone number is invalid for the details you want to check."<<endl;
                       }
              }
      }
}
class transaction : public account
{
     public:
     void show1();
     void enquiry1();
     void change1();
     void close1();
     void Dep()
     {
            cout<<"Deposit amount : ";
            cin>>deposit;
            total=acc_balance+deposit;
            cout<<"total amount is :"<<total<<endl;
     }
     void With()
     {
            cout<<"Withdrawal amount : ";
            cin>>withdrawal;
            total=acc_balance-withdrawal;
            cout<<"total amount is :"<<total<<endl;
     }
 };
void transaction :: show1()
{
             int SUM;
             if(SUM!=0)
             {
                cout<<"No data is entered"<<endl;
             }
             else
             {
                  cout<<"Enter the phone number for account you are searching for used during transaction : ";
                 cin>>phone;
                 if(phone==ph_no)
                 {
                       cout<<"The name of account holder is "<<name<<endl;
                 }
                 else
                 {
                   cout<<"Entered phone number is invalid"<<endl;
                 }
             }
}
void transaction :: change1()
{
    {
             new_acc N;
             int SUM;
             if(SUM!=0)
             {
                 cout<<"Enter the phone number for account you are searching for used during transaction : "<<endl;
                 cin>>phone;
                 if(phone==ph_no)
                 {
                   cout<<"Enter your New Details"<<endl;
                   N.getdata();
                   N.putdata();
                 }
                 else
                 {
                   cout<<"Entered phone number is invalid"<<endl;
                 }
             }
             else
             {
                 cout<<"No data is entered"<<endl;
             }
    }
}
void transaction :: enquiry1()
{
    {
             int SUM;
             if(SUM!=0)
             {
                cout<<"No data is entered"<<endl;
             }
             else
             {
                 cout<<"Enter the phone number for account you are searching for used during transaction : ";
                 cin>>phone;
                 if(phone==ph_no)
                 {
                       cout<<"The total balance is "<<total<<endl;
                 }
                 else
                 {
                   cout<<"Entered phone number is invalid"<<endl;
                 }
             }
    }
}
void transaction :: close1()
{
             int phn;
             int SUM;
             if(SUM!=0)
             {
                 cout<<"Enter the phone number for account you are searching for used during transaction : ";
                 cin>>phn;
                 if(phn==ph_no)
                 {
                       long double to;
                      unsigned long long int ac,aab;
                       char aat;
                       string na;
                       unsigned long long int ph;
                     name = na;
                     ph_no=ph;
                     acc_no = ac;
                     acc_type = aat;
                     acc_balance = aab;
                     total= to;
                     cout<<"All record is deleted."<<endl;
                 }
                 else
                 {
                   cout<<"Entered phone number is invalid for the details you want to check."<<endl;
                 }
             }
             else
             {
                 cout<<"No data is entered for created account. "<<endl;
             }
}
int main()
{
    account A;
    cout<<endl;
    cout<<endl;
    system("Color 04");
    cout<<"\t\t\t:: WELCOME  TO  XYZ  BANK ::"<<endl;
    cout<<endl;
    cout<<"\t\t\t\tLoading ";
    A.pat();
    cout<<endl;

    new_acc N;
    transaction T;
    int i;
    char repeat;
    unsigned long long int sam, ph_no;
    int num,sum=0,sum3=0,SUM=0,pswd;

    repeat:
    A.pattern();
    cout<<"\t\t\t::  SELECTION LIST  ::"<<endl;
    A.pattern();

    cout<<"1. Create An Account"<<endl;
    cout<<"2. For Transactions"<<endl;
    cout<<"3. Balance Enquiry"<<endl;
    cout<<"4. Update information of existing account"<<endl;
    cout<<"5. Name of the all account holders"<<endl;
	cout<<"6. Remove existing account"<<endl;
	cout<<"7. Exit"<<endl;
    cout<<endl;
    A.pattern();
    cout<<"\t\t\tSELECT YOUR OPTION FROM 1 TO 8 : ";
    cin>>num;

    if(num==1)
    {
        sum=sum+1;
    }
    if(num==2)
    {
        sum3=sum3+1;
    }
    SUM=SUM+sum+sum3;
    if(num==7)
    {
             A.pattern();
             cout<<"BANK MANAGEMENT PROJECT"<<endl;
             cout<<"22CS017 --> DRASHTI"<<endl;
             cout<<"22CS070 --> PRAGATI"<<endl;
             cout<<"22CS091 --> SHREYA"<<endl;
             A.pattern();
             cout<<"Exit";
    }
    else
    {
    switch(num)
    {
    case 1:
             cout<<"For verification please enter the password : ";
             cin>>pswd;
             if(pswd==1234)
             {
                 N.pattern();
                 N.space1();
                 N.pattern();
                 N.Get_data();
                 N.pattern();
                 N.space2();
                 N.pattern();
                 N.Put_data();
             }
             else
             {
                 cout<<"Incorrect Password "<<endl;
             }
             goto repeat;
             break;

    case 2:
             char trans,D,W;
             cout<<"Enter the type of transaction : "<<endl;
             cout<<"Press D for Deposit : "<<endl;
             cout<<"Press W for Withdrawal : "<<endl;
             cin>>trans;

             if(trans=='D')
             {
             T.pattern();
             T.space1();
             T.pattern();
             T.getdata();
             T.Dep();
             T.pattern();
             T.space2();
             T.pattern();
             T.putdata();
             }

             if(trans=='W')
             {
             T.pattern();
             T.space1();
             T.pattern();
             T.getdata();
             T.With();
             T.pattern();
             T.space2();
             T.pattern();
             T.putdata();
             }
             goto repeat;
             break;

    case 3:
             if(SUM!=0)
             {
                 if(sum!=0)
                    {
                          N.enquiry();
                    }
                 if(sum3!=0)
                    {
                          T.enquiry1();
                    }
             }
             else
             {
                 cout<<"No data is entered"<<endl;
             }
             goto repeat;
             break;

    case 4:
             if(SUM!=0)
             {
                 if(sum!=0)
                    {
                       N.change();
                    }
                  if(sum3!=0)
                    {
                       T.change1();
                    }
             }
             else
             {
                 cout<<"No data is entered"<<endl;
             }
             goto repeat;
             break;

    case 5:
            if(SUM!=0)
             {
                 if(sum!=0)
                    {
                          N.show();
                    }
                 if(sum3!=0)
                    {
                          T.show1();
                    }
             }
             else
             {
                 cout<<"No data is entered"<<endl;
             }
             goto repeat;
             break;

    case 6:
             if(SUM!=0)
             {
                 if(sum!=0)
                    {
                       N.close();
                    }
                  if(sum3!=0)
                    {
                       T.close1();
                    }
             }
             else
             {
                 cout<<"No data is entered"<<endl;
             }
             goto repeat;
             break;

    case 7:

             cout<<"EXIT";
             break;

    }
    }
    return 0;
}
