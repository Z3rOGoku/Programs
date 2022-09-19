#include<iostream>
#include<conio.h>
#include<unistd.h>
#include<windows.h>


using namespace std;

void changeColor(int desiredColor)
{ 
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), desiredColor); 
} 
 
 int main()
{
char option;

cout<< "\nDo you want to Encrypt or Decrypt Your Password?"<<endl<<endl;
cout<<">> A. Encrypt"<<endl<<">> B. Decrypt"<<endl<<endl;
cin>>option;

if(option=='A')
{
    int c,i;


    cout.width(60);
    changeColor(4);
    cout<<"Welcome to Z3rO Encrypter V1.0"<<endl<<endl<<endl;
    cout.width(55);
    changeColor(7);
    cout<<"Enter To Continue"<<endl<<endl<<endl;
    getch();

    cout<<">> Enter the Length Of your Password "<<endl;
    cin>>c;
    
    char k[c],p,g;

    g=c;

    cout<<">> Enter the Letters of your Password One by one "<<endl;

    for ( i = 0; i < c; i++)
    {
        cin>>p;
        k[i]=p;
    }
    // Determining the strength of password
    if (c<=5)
    {
        cout<<"\n--Your Password is weak"<<endl;
    }
    
    else if (5<c<=10)
    {
        cout<<"\n--your password is strong"<<endl;
    }

    else if(c>7)
    {
        cout<<"\n--Your password is stronger than the HULK"<<endl;
    }
    

    
    cout<<">> The entered Password is - "<<endl;
    for ( i = 0; i < c; i++)
    {
        cout<<k[i]<<" ";
    }
    
    cout<<" "<<endl;
    cout<<">> You want to continue?"<<endl<<"y/n"<<endl;

    cin>>option;
    if (option=='y')
    {
        cout<<">> Encrypting Your Password..."<<endl<<endl;

        for (int i = 0; i < c; i++)
        {
            switch (k[i])
            {
            case 'a':
            
            k[i]='l';
           
            break;

            
            case 'b':
            k[i]='f';

            break;

            case 'c':
            k[i]='k';

            break;

            case 'd':
            k[i]='h';

            break;

            case 'e':
            k[i]='R';

            break;

            case 'f':
            k[i]='0';

            break;

            case 'g':
            k[i]='F';

            break;

            case 'h':
            k[i]='N';


            break;

            case 'i':
            k[i]='g';

            break;

            case 'j':
            k[i]='t';

            break;

            case 'k':
            k[i]='x';

            break;

            case 'l':
            k[i]='y';

            break;

            case 'm':
            k[i]='z';

            break;

            case 'n':
            k[i]='o';

            break;

            case 'o':
            k[i]='Q';

            break;

            case 'p':
            k[i]='a';

            break;

            case 'q':
            k[i]='i';

            break;

            case 'r':
            k[i]='B';

            break;

            case 's':
            k[i]='2';

            break;

            case 't':
            k[i]='6';

            break;

            case 'u':
            k[i]='7';

            break;

            case 'v':
            k[i]='9';

            break;

            case 'w':
            k[i]='Z';

            break;

            case 'x':
            k[i]='X';

            break;

            case 'y':
            k[i]='Y';

            break;

            case 'z':
            k[i]='A';

            break;


            

            
            default:
            cout<<"not working";
                break;
            }
        }
        
        
    }
    
    else{
        cout<<"Start again";
    }
    
    for (int t = 0; t <=100; t++)
    {
        changeColor(10);
        cout<<"\nloading...";
        cout<<t<<"%";
        sleep(.7);
        // system("Color 02"); 
        system ("CLS");
        
    }
    
    changeColor(7);
    cout<<">> Thank you For using my program :) "<<endl<<endl;
    changeColor(7);
    cout<<">> Your encrypted password is - "<<endl<<endl;

    changeColor(7);

    for ( i = 0; i < c; i++)
    {
        cout<<k[i]<<" ";
    }
    

    return 0;

}

else
{
    int c,i;


    cout.width(60);
    changeColor(2);
    cout<<"Welcome to Z3rO Decrypter V1.0"<<endl<<endl<<endl;
    cout.width(55);
    changeColor(7);
    cout<<"Enter To Continue"<<endl<<endl<<endl;
    getch();

    cout<<">> Enter the Length Of your Password "<<endl;
    cin>>c;
    
    char k[c],p,g;

    g=c;

    cout<<">> Enter Your Encrypted Password One by one "<<endl;

    for ( i = 0; i < c; i++)
    {
        cin>>p;
        k[i]=p;
    }
    
    cout<<">> The entered values are - "<<endl;
    for ( i = 0; i < c; i++)
    {
        cout<<k[i]<<" ";
    }
    
    cout<<" "<<endl;
    cout<<">> You want to continue?"<<endl<<"y/n"<<endl;

    cin>>option;
    if (option=='y')
    {
        cout<<">> Decrypting Your Password..."<<endl<<endl;

        for (int i = 0; i < c; i++)
        {
            switch (k[i])
            {
            case 'l':
            
            k[i]='a';
           
                break;

            
            case 'f':
            k[i]='b';

            break;

            case 'k':
            k[i]='c';

            break;

            case 'h':
            k[i]='d';

            break;

            case 'R':
            k[i]='e';

            break;

            case '0':
            k[i]='f';

            break;

            case 'F':
            k[i]='g';

            break;

            case 'N':
            k[i]='h';


            break;

            case 'g':
            k[i]='i';

            break;

            case 't':
            k[i]='j';

            break;

            case 'x':
            k[i]='k';

            break;

            case 'y':
            k[i]='l';

            break;

            case 'z':
            k[i]='m';

            break;

            case 'o':
            k[i]='n';

            break;

            case 'Q':
            k[i]='o';

            break;

            case 'a':
            k[i]='p';

            break;

            case 'i':
            k[i]='q';

            break;

            case 'B':
            k[i]='r';

            break;

            case '2':
            k[i]='s';

            break;

            case '6':
            k[i]='t';

            break;

            case '7':
            k[i]='u';

            break;

            case '9':
            k[i]='v';

            break;

            case 'Z':
            k[i]='w';

            break;

            case 'X':
            k[i]='x';

            break;

            case 'Y':
            k[i]='y';

            break;

            case 'A':
            k[i]='z';

            break;


            

            
            default:
            cout<<"not working";
                break;
            }
        }
        
        
    }
    
    else{
        cout<<"Start again";
    }
    
    for (int t = 0; t <=100; t++)
    {
        changeColor(10);
        cout<<"\nloading...";
        cout<<t<<"%";
        sleep(.7);
        // system("Color 02"); 
        system ("CLS");
        
    }
    
    changeColor(7);
    cout<<">> Thank you For using my program :) "<<endl<<endl;
    changeColor(7);
    cout<<">> Your encrypted password is - "<<endl<<endl;

    changeColor(7);

    for ( i = 0; i < c; i++)
    {
        cout<<k[i]<<" ";
    }
    

    return 0;
}


}