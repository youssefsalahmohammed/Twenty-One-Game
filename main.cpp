#include <iostream>



using namespace std;



int main()
{
   int Coins=21,player1Game,player2Game,playAgainOrNot;

tryagain:


   while(Coins!=0)
   {

       // player 1 turn \\

       cout<<"player 1 : enter your number"<<endl;
       cin>>player1Game;


       while((player1Game!=1) && (player1Game!=2) && (player1Game!=3))
       {
           cout<<"please enter a right number"<<endl;
           cin>>player1Game;
       }
       cout<<"the number become : "<<Coins-player1Game<<endl;
       Coins=Coins-player1Game;
       if(Coins==0)
       {


           cout<<"player 2 is the winner"<<endl;
           cout<<"Do you want to play Again : \n1)Yes \n2)No"<<endl;
           cin>>playAgainOrNot;
           if(playAgainOrNot==1)
           {
               Coins=21;
               goto tryagain;

           }
           if(playAgainOrNot==2)
           {
               return 0;
           }

       }

       // player 2 turn \\

       cout<<"player 2 : enter your number"<<endl;
       cin>>player2Game;

       while((player2Game!=1) && (player2Game!=2) && (player2Game!=3))
       {
           cout<<"please enter a right number"<<endl;
           cin>>player2Game;
       }
       cout<<"the number become : "<<Coins-player2Game<<endl;
       Coins=Coins-player2Game;
       if(Coins==0)
       {
           cout<<"player 1 is the winner"<<endl;
           cout<<"Do you want to play Again : \n1)Yes \n2)No"<<endl;
           cin>>playAgainOrNot;
           if(playAgainOrNot==1)
           {
               Coins=21;
               goto tryagain;

           }
           if(playAgainOrNot==2)
           {
               return 0;
           }
       }

   }
}
