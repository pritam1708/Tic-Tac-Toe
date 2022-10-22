#include<iostream>
using namespace std;
char sq[10] = {'0','1','2','3','4','5','6','7','8','9',};
void dig();
int check();

int main()
{
    int p = 1, i, ch ;
    char m;
    do{
        dig();
        if(p%2==1)
        p=1;
        else
        p=2;
        cout<<"Player "<<p<<" enter a number\t";
        cin>>ch;
        if(p==1)
        {
            m = 'X';
        }
        else{
            m = 'O';
        }
    if(ch==1 && sq[1]=='1')
    sq[1]=m;
    else if(ch==2 && sq[2]=='2') 
    sq[2]=m;
     else if(ch==3 && sq[3]=='3') 
    sq[3]=m;
     else if(ch==4 && sq[4]=='4') 
    sq[4]=m;
     else if(ch==5 && sq[5]=='5') 
    sq[5]=m;
     else if(ch==6 && sq[6]=='6') 
    sq[6]=m;
     else if(ch==7 && sq[7]=='7') 
    sq[7]=m;
     else if(ch==8 && sq[8]=='8') 
    sq[8]=m;
     else if(ch==9 && sq[9]=='9') 
    sq[9]=m;
    else
    {
    cout<<"invalid choice enter a valid number";
    p--;
    cin.ignore();
    cin.get();
    }
i= check();
p++;
}while(i==-1);
dig();
if(i==1)
cout<<"==> \aPlayer "<<--p<<" is the winner";
else
cout<<"==> \aGame is draw";
cin.ignore();
cin.get();
return 0;
}



void dig()
{
    system("cls");

    cout<<"\n===========================================================";
    cout<<"\n\tTic Tac Toe\n";
    cout<<"\n============================================================";
    cout<<"\nPlayer 1(X) - Player 2(O)"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<sq[1]<<"  |  "<<sq[2]<<"  |  "<<sq[3] <<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
     cout<<"  "<<sq[4]<<"  |  "<<sq[5]<<"  |  "<<sq[6] <<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
     cout<<"  "<<sq[7]<<"  |  "<<sq[8]<<"  |  "<<sq[9] <<endl;
    cout<<"     |     |     "<<endl;
}



int check()
{
if(sq[1]==sq[2] && sq[2]==sq[3])
return 1;
else if(sq[4]==sq[5] && sq[5]==sq[6])
return 1;
else if(sq[7]==sq[8] && sq[8]==sq[9])
return 1;
else if(sq[1]==sq[4] && sq[4]==sq[7])
return 1;
else if(sq[2]==sq[5] && sq[5]==sq[8])
return 1;
else if(sq[3]==sq[6] && sq[6]==sq[9])
return 1;
else if(sq[1]==sq[5] && sq[5]==sq[9])
return 1;
else if(sq[3]==sq[5] && sq[5]==sq[7])
return 1;
else if(sq[1] != '1' && sq[2] != '2' && sq[3] != '3' && sq[4] != '4' && sq[5] != '5' && sq[6] != '6' && 
sq[7] != '7' && sq[8] != '8' && sq[9] != '9')
return 0;

else
{
    return -1;
}
}