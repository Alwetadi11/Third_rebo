#include <iostream>
using namespace std;

class ATM
{
private:

    long long num_card;//رقم الفيزا
    int pass;
    int new_paas;

    int choose;
    int mon;
    long long scard;

public:
int money=0;
long long  setcard()
{
  return num_card;

}



void welcome()
{
  cout<<"\t\t\t****Welcome to ATM**** \n\n\n";
}

void getdata()
{
  cout<<"Enter your card number: ";
  cin>>num_card;
  cout<<"Enter your password: ";
  cin>>pass;


}


int show()
{
  cout<<"1) Withdraw money\t2) Ideal money\n3) Inquiry about money\t4) Change the password\n5) Sending money \n\n";
  cout<<"Enter your choose: ";
  cin>>choose;
  return choose;
}

int withdraw()
{
  cout<<"Enter number : ";
  cin>>mon;
  if(money>=mon)
  {
    money-=mon;
    cout<<"Done\n";
    cout<<"Your money is "<<money<<endl;

  }
  else
    cout<<"Money not enght \n";

  cout<<"1) To eixit\t2) To back the main page\n";
  cin>>choose;
  return choose;

}

int ideal()
{
  cout<<"Enter number : ";
  cin>>mon;
  money+=mon;
  cout<<"Done\n";
  cout<<"Your money is "<<money<<endl;

  cout<<"1) To eixit\t2) To back the main page\n";
  cin>>choose;
  return choose;


}

int inquiry()
{
  cout<<"Your money is "<<money<<endl;
  cout<<"1) To eixit\t2) To back the main page\n";
  cin>>choose;
  return choose;

}

int change ()
{
  star:
  cout<<"Enter your new password: ";
  cin>>new_paas;
  cout<<"Enter agine your new password: ";
  int again_pass;
  cin>>again_pass;
  if(new_paas==again_pass)
  {
    cout<<"Done"<<endl;
    pass=new_paas;
    cout<<"1) To eixit\t2) To back the main page\n";
    cin>>choose;
    return choose;
  }

  else
    goto star;


}

long long   sent()
{
  cout<<"Enter number : ";
  cin>>scard;
  return scard;




}




};


int main()
{

  ATM cline[5];

  int i,c,count;
  for(i=0;i<5;)
    {
      for(int v=0;v<5;v++)
        {
          if(cline[i].setcard()==cline[v].setcard()&&i!=v)
          {
            c=1;
            count=i;
            break;

          }


          else
            c=0;
        }

      if(c==0)
      {
      cline[i].welcome();
      cline[i].getdata();
      start:
      int chek = cline[i].show();

      if(chek==1)
      {
        int check1=cline[i].withdraw();

        if(check1==1)
          goto omar;
        else if(check1==2)
          goto start;
        else
          goto omar;
      }


      else if(chek==2)
      {
        int check2=cline[i].ideal();

        if(check2==1)
          goto omar;
        else if(check2==2)
          goto start;
        else
          goto omar;


      }

      else if(chek==3)
      {
        int check3=cline[i].inquiry();

        if(check3==1)
          goto omar;
        else if(check3==2)
          goto start;
        else
          goto omar;
      }


      else if(chek==4)
      {
        int check4=cline[i].change();

        if(check4==1)
          goto omar;
        else if(check4==2)
          goto start;
        else
          goto omar;
      }


       else if(chek==5)
      {
         long long  check6 = cline[i].sent();
         for(int j=0;j<5;j++)
           {
             if(check6==cline[j].setcard())
             {
               cout<<"Enter money: ";
               int m;
               cin>>m;
                cline[j].money+=m;
               cout<<"Done\n";
               cline[i].money-=m;

             }

           }

        cout<<"1) To eixit\t2) To back the main page\n";
        int m;
        cin>>m;

        if(m==1)
          goto omar;
        else if(m==2)
          goto start;
        else
          goto omar;


       }
      else
        goto omar;


      omar:
      i++;
      }


      else if(c==1)
      {
        cline[i]=cline[count+1];
        cline[i].welcome();
        cline[i].getdata();
        star:
        int chek = cline[i].show();

        if(chek==1)
        {
          int check1=cline[i].withdraw();

          if(check1==1)
            goto oma;
          else if(check1==2)
            goto star;
          else
            goto oma;
        }


        else if(chek==2)
        {
          int check2=cline[i].ideal();

          if(check2==1)
            goto oma;
          else if(check2==2)
            goto star;
          else
            goto oma;


        }

        else if(chek==3)
        {
          int check3=cline[i].inquiry();

          if(check3==1)
            goto oma;
          else if(check3==2)
            goto star;
          else
            goto oma;
        }


        else if(chek==4)
        {
          int check4=cline[i].change();

          if(check4==1)
            goto oma;
          else if(check4==2)
            goto star;
          else
            goto oma;
        }


         else if(chek==5)
        {
           long long  check6 = cline[i].sent();
           for(int j=0;j<5;j++)
             {
               if(check6==cline[j].setcard())
               {
                 cout<<"Enter money: ";
                 int m;
                 cin>>m;
                  cline[j].money+=m;
                 cout<<"Done\n";
                 cline[i].money-=m;

               }

             }

          cout<<"1) To eixit\t2) To back the main page\n";
          int m;
          cin>>m;

          if(m==1)
            goto oma;
          else if(m==2)
            goto star;
          else
            goto oma;


         }
        else
          goto oma;


        oma:
        i++;





      }



    }







}
