#include<iostream>
using namespace std;
int a=0,count=0;
long number[100];
string name[100];
string tname;
long tnumber;

void add(){
    a+=1;
    cout<<"\n\nEnter The Name Of The Contact  :  ";
    cin.ignore();
    getline(cin,tname);
    cout<<"\n\nEnter The Number Of The Contact  :  ";
    cin>>tnumber;
    name[a]=tname;
    number[a]=tnumber;
}

void getname(){
    cout<<"\n\nEnter The Name To Search : ";
    cin.ignore();
    getline(cin,tname);
    for(int i=1;i<(a+1);i++){
        if(name[i]==tname){
            cout<<"\n\nRecord Found!!";
            cout<<"\n\nContact Name  :  "<<name[i];
            cout<<"\n\nContact Number  :  "<<number[i];
            cout<<"\n\n";
            count+=1;
        }
    }
    if(count==0){
        cout<<"\n\nNo Record Found!!!";
        cout<<"\n\n";
    }
}

void getnum(){
    cout<<"\n\nEnter The Number To Search : ";
    cin>>tnumber;
    for(int i=1;i<(a+1);i++){
        if(number[i]==tnumber){
            cout<<"\n\nRecord Found!!";
            cout<<"\n\nContact Name  :  "<<name[i];
            cout<<"\n\nContact Number  :  "<<number[i];
            cout<<"\n\n";
            count+=1;
        }
    }
    if(count==0){
        cout<<"\n\nNo Record Found!!!";
        cout<<"\n\n";
    }
}

void display(){
    cout<<"\n\nThe Stored Contacts Are Listed Below";
    for(int j=1;j<(a+1);j++){
        cout<<"\n\nContact Name    :  "<<name[j];
        cout<<"\n\nContact Number  :  "<<number[j]<<endl;
        cout<<"\n\n";
        cout<<"--------------------------------------------------------------------";
    }
    cout<<"\n\n";
}
int main(){
    int ans,ans1;
    cout<<"\n\n\t\t\t\t\tWelcome To The PHONEBOOK Program!!!\n\n";
    cout<<"----------------------------------------------------------------------------------------------------------------------";
    while(1){
        cout<<"\n\n\t1.Add Contact\n\n";
	    cout<<"\t2.Find Contact\n\n";
        cout<<"\t3.Display All The Contacts\n\n";
        cout<<"\t4.Exit From Program\n\n";
	    cout<<"Please Enter The Preferred Option[1/2/3/4]  :  ";
	    cin>>ans;

        if(ans==1){
            add();
        }

        if(ans==2){
            cout<<"\n\nYou Would Like To Retrieve Records Using : ";
            cout<<"\n\n\t\t1.Name";
            cout<<"\n\n\t\t2.Number";
            cout<<"\n\nPlease Enter The Preferred Option[1/2]  :  ";
            cin>>ans1;
            if(ans1==1){
                getname();
            }
            if(ans1==2){
                getnum();
            }
        } 
        

        if(ans==3){
            display();
        }

        if(ans==4){
            cout<<"\n\nThank you Using Our Program!!!\n\n\n\n";
            break;
        }
    }
    return 0;
}
