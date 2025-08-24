//Write a program to demonstrate a Rock Paper Scissor Game. 

#include<iostream>
#include<cstdlib>   // part of c standard library  - rand() - generate random number / //   srand() random generator initialize (seed set)
#include<ctime>    //  headerfile for time function 
using namespace std;
class rockpaper{
	
	public :
	    string n;
    	int round;
        int userScore = 0; 	
        int compScore = 0; 
      
	void getdetails()
	{
		cout<< "*----------*-----------*";cout<<endl;
	    cout<< "          NAME  ";cout<<endl;
	    cout<<"*-----------*------------*";cout<<endl;
	
     	cout<<"ENTER YOUR NAME  : ";
	    cin>>n;
	
	    cout << "Enter Number of round : "; cout<<endl;
        cin >> round;
	}
    void playgame()
    {
    	int userChoice = 0 ,  compChoice = 0;
    	srand(time(0));
    	
    	cout << " Choices: 1 = Rock, 2 = Paper, 3 = Scissors" << endl;
    	 for (int i = 1; i <= round; i++) 
		{
            cout << " Round " << i << " - Enter your choice: ";
            cin >> userChoice;
            
            compChoice = (rand() % 3) + 1; 
            cout << "Computer chose: " << compChoice << endl;
            
             if (userChoice == compChoice)
			  {
               cout << "It's a tie"<<endl;
              }
             else if ((userChoice == 1 && compChoice == 3) ||
                      (userChoice == 2 && compChoice == 1) ||
                      (userChoice == 3 && compChoice == 2)) 
		         {
                      cout << n << " wins this round! ";
                      userScore++;
                 }
           else {
                 cout << "Computer wins this round! "<<endl;
                 compScore++;
                 
                 }     
              }
                cout << " Final Score -> " << n << ": " << userScore;
                cout << "  Computer: " << compScore << endl;

            if (userScore > compScore)
              cout << n << " wins the game! "<<endl;
            else if (userScore < compScore)
              cout << " Computer wins the game! "<<endl;
             else
              cout << "  The game is a Tie! "<<endl;	
			 } 
	
};
int main()
{
	
	rockpaper r1;
    r1.getdetails();
    r1.playgame();

	
	return 0;
}
