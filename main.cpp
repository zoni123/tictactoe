#include <iostream>

bool w=0;
char a[5][5];
int v1, v2;
void afisare(char a[5][5])
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
            std::cout<<a[i][j]<<' ';
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
}

void joc(char c[3], char a[5][5]);

void alegere(char c[3])
{
    std::cout<<"X or O? ";
    std::cin>>c[0];
    joc(c, a);
}

void joc(char c[3], char a[5][5])
{
    if(c[0]=='O')
    {
        while(w==0)
        {
            std::cin>>c[1]>>c[2];
            std::cout<<std::endl;
            v1=c[1]-'0';
            v2=c[2]-'0';
            if((c[1]!='1' && c[1]!='2' && c[1]!='3') || (c[2]!='1' && c[2]!='2' && c[2]!='3') || a[2*v1-2][2*v2-2]!=0)
            {
                std::cout<<"Invalid input, aborting"<<'\n';
                break;
            }
            a[2*v1-2][2*v2-2]='O';
            afisare(a);

            if((a[0][0]=='O' && a[0][2]=='O' && a[0][4]=='O') || (a[2][0]=='O' && a[2][2]=='O' && a[2][4]=='O') || (a[4][0]=='O' && a[4][2]=='O' && a[4][4]=='O') || (a[0][0]=='O' && a[2][0]=='O' && a[4][0]=='O') || (a[0][2]=='O' && a[2][2]=='O' && a[4][2]=='O') || (a[0][4]=='O' && a[2][4]=='O' && a[4][4]=='O') || (a[0][0]=='O' && a[2][2]=='O' && a[4][4]=='O') || (a[0][4]=='O' && a[2][2]=='O' && a[4][0]=='O'))
            {
                w=1;
                std::cout<<"Winner: O";
            }
            if((a[0][0]=='X' && a[0][2]=='X' && a[0][4]=='X') || (a[2][0]=='X' && a[2][2]=='X' && a[2][4]=='X') || (a[4][0]=='X' && a[4][2]=='X' && a[4][4]=='X') || (a[0][0]=='X' && a[2][0]=='X' && a[4][0]=='X') || (a[0][2]=='X' && a[2][2]=='X' && a[4][2]=='X') || (a[0][4]=='X' && a[2][4]=='X' && a[4][4]=='X') || (a[0][0]=='X' && a[2][2]=='X' && a[4][4]=='X') || (a[0][4]=='X' && a[2][2]=='X' && a[4][0]=='X'))
            {
                w=1;
                std::cout<<"Winner: X";
            }
            if(w==1)
                break;
            std::cin>>c[1]>>c[2];
            std::cout<<std::endl;
            v1=c[1]-'0';
            v2=c[2]-'0';
            if((c[1]!='1' && c[1]!='2' && c[1]!='3') || (c[2]!='1' && c[2]!='2' && c[2]!='3') || a[2*v1-2][2*v2-2]!=0)
            {
                std::cout<<"Invalid input, aborting"<<'\n';
                break;
            }
            a[2*v1-2][2*v2-2]='X';
            afisare(a);

            if((a[0][0]=='O' && a[0][2]=='O' && a[0][4]=='O') || (a[2][0]=='O' && a[2][2]=='O' && a[2][4]=='O') || (a[4][0]=='O' && a[4][2]=='O' && a[4][4]=='O') || (a[0][0]=='O' && a[2][0]=='O' && a[4][0]=='O') || (a[0][2]=='O' && a[2][2]=='O' && a[4][2]=='O') || (a[0][4]=='O' && a[2][4]=='O' && a[4][4]=='O') || (a[0][0]=='O' && a[2][2]=='O' && a[4][4]=='O') || (a[0][4]=='O' && a[2][2]=='O' && a[4][0]=='O'))
            {
                w=1;
                std::cout<<"Winner: O";
            }
            if((a[0][0]=='X' && a[0][2]=='X' && a[0][4]=='X') || (a[2][0]=='X' && a[2][2]=='X' && a[2][4]=='X') || (a[4][0]=='X' && a[4][2]=='X' && a[4][4]=='X') || (a[0][0]=='X' && a[2][0]=='X' && a[4][0]=='X') || (a[0][2]=='X' && a[2][2]=='X' && a[4][2]=='X') || (a[0][4]=='X' && a[2][4]=='X' && a[4][4]=='X') || (a[0][0]=='X' && a[2][2]=='X' && a[4][4]=='X') || (a[0][4]=='X' && a[2][2]=='X' && a[4][0]=='X'))
            {
                w=1;
                std::cout<<"Winner: X";
            }
        }
    }
    else if(c[0]=='X')
    {
        while(w==0)
        {
            std::cin>>c[1]>>c[2];
            std::cout<<std::endl;
            v1=c[1]-'0';
            v2=c[2]-'0';
            if((c[1]!='1' && c[1]!='2' && c[1]!='3') || (c[2]!='1' && c[2]!='2' && c[2]!='3') || a[2*v1-2][2*v2-2]!=0)
            {
                std::cout<<"Invalid input, aborting"<<'\n';
                break;
            }
            a[2*v1-2][2*v2-2]='X';
            afisare(a);

            if((a[0][0]=='O' && a[0][2]=='O' && a[0][4]=='O') || (a[2][0]=='O' && a[2][2]=='O' && a[2][4]=='O') || (a[4][0]=='O' && a[4][2]=='O' && a[4][4]=='O') || (a[0][0]=='O' && a[2][0]=='O' && a[4][0]=='O') || (a[0][2]=='O' && a[2][2]=='O' && a[4][2]=='O') || (a[0][4]=='O' && a[2][4]=='O' && a[4][4]=='O') || (a[0][0]=='O' && a[2][2]=='O' && a[4][4]=='O') || (a[0][4]=='O' && a[2][2]=='O' && a[4][0]=='O'))
            {
                w=1;
                std::cout<<"Winner: O";
            }
            if((a[0][0]=='X' && a[0][2]=='X' && a[0][4]=='X') || (a[2][0]=='X' && a[2][2]=='X' && a[2][4]=='X') || (a[4][0]=='X' && a[4][2]=='X' && a[4][4]=='X') || (a[0][0]=='X' && a[2][0]=='X' && a[4][0]=='X') || (a[0][2]=='X' && a[2][2]=='X' && a[4][2]=='X') || (a[0][4]=='X' && a[2][4]=='X' && a[4][4]=='X') || (a[0][0]=='X' && a[2][2]=='X' && a[4][4]=='X') || (a[0][4]=='X' && a[2][2]=='X' && a[4][0]=='X'))
            {
                w=1;
                std::cout<<"Winner: X";
            }
            if(w==1)
                break;
            std::cin>>c[1]>>c[2];
            std::cout<<std::endl;
            v1=c[1]-'0';
            v2=c[2]-'0';
            if((c[1]!='1' && c[1]!='2' && c[1]!='3') || (c[2]!='1' && c[2]!='2' && c[2]!='3') || a[2*v1-2][2*v2-2]!=0)
            {
                std::cout<<"Invalid input, aborting"<<'\n';
                break;
            }
            a[2*v1-2][2*v2-2]='O';
            afisare(a);

            if((a[0][0]=='O' && a[0][2]=='O' && a[0][4]=='O') || (a[2][0]=='O' && a[2][2]=='O' && a[2][4]=='O') || (a[4][0]=='O' && a[4][2]=='O' && a[4][4]=='O') || (a[0][0]=='O' && a[2][0]=='O' && a[4][0]=='O') || (a[0][2]=='O' && a[2][2]=='O' && a[4][2]=='O') || (a[0][4]=='O' && a[2][4]=='O' && a[4][4]=='O') || (a[0][0]=='O' && a[2][2]=='O' && a[4][4]=='O') || (a[0][4]=='O' && a[2][2]=='O' && a[4][0]=='O'))
            {
                w=1;
                std::cout<<"Winner: O";
            }
            if((a[0][0]=='X' && a[0][2]=='X' && a[0][4]=='X') || (a[2][0]=='X' && a[2][2]=='X' && a[2][4]=='X') || (a[4][0]=='X' && a[4][2]=='X' && a[4][4]=='X') || (a[0][0]=='X' && a[2][0]=='X' && a[4][0]=='X') || (a[0][2]=='X' && a[2][2]=='X' && a[4][2]=='X') || (a[0][4]=='X' && a[2][4]=='X' && a[4][4]=='X') || (a[0][0]=='X' && a[2][2]=='X' && a[4][4]=='X') || (a[0][4]=='X' && a[2][2]=='X' && a[4][0]=='X'))
            {
                w=1;
                std::cout<<"Winner: X";
            }
        }
    }
    else
    {
        std::cout<<"retry"<<'\n';
        alegere(c);
    }

}

int main()
{
    char c[3];
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            if(i==1 || i==3 || j==1 || j==3)
                a[i][j]='#';
    alegere(c);
    return 0;
}
