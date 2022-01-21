//Sierra Libertini
//28/1/14
/*Purpose:
 *magic 8 ball~final copy
 */

#include <iostream>//input/output control
#include <ctime>//allow use for random number generator (srand)
#include <windows.h>//allow compiler into windows system and mess with it (Sleep)

using namespace std;


int main(){

    int answer;
    string Answer[20]={"It is certain","It is decidedly so",
                       "Without a doubt","Yes definitely",
                       "You may rely on it","As I see it, yes",
                       "Most likely","Outlook good",
                       "Yes","Signs point to yes",
                       "Reply hazy try again","Ask again later",
                       "Better not tell you now","Cannot predict now",
                       "Concentrate and ask again","Don't count on it",
                       "My reply is no","My sources say no",
                       "Outlook not so good","Very doubtful"};
    
    string ques,again;
    
    do{
      cout<<"You may ask any question...\n";
      getline(cin,ques);
      cout<<"\nMagic EIGHT BALL kmows all\n";
      cout<<" Your question was --- "<<ques<<"?\n";
      cout<<" Well....";
      
      answer=rand()%20;
      cout<<Answer[answer]<<"\n\n";
      Sleep(400);
      
      cout<<"Do you want to ask again? ";
      cin>>again;
      cin.get();
      }while(again=="yes"||again=="y");
      
      if (again!="no") cout<<"I took your response as a no...";
      cout<<"Have a great day\n\n";
      
    system("PAUSE");
    
    return 0;
}//End main function
