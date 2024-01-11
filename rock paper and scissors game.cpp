#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	cout<<"Welcome to my world Rock paper & scissors game"<<endl;
	cout<<"                                               "<<endl;
	cout<<"******************Menu**********************"<<endl;
	cout<<"                                               "<<endl;
	cout<<"     Press"<<endl;
	cout<<"                            "<<endl;
	cout<<"0. for Rock"<<endl;
	cout<<"1. for paper"<<endl;
	cout<<"2. for scissors"<<endl;
	cout<<"Invalid choice you loose!"<<endl;
	cout<<"                                 "<<endl;
	
	int user_choice,i,a,computer_choice;
	int user_win = 0;
	int computer_win = 0;
	
	for(i=1; i<=5; i++){
	cout<<"Attempt: "<<i<<endl;
	cout<<"enter your choice "<<endl;
	cin>>user_choice;
	
	if(user_choice >2){
		cout<<"Invalid choice! you loose . enter a valid choice"<<endl;
	}
	else{
	srand(time(0)); //seed random number
	
  computer_choice = (rand()%2+1);
	cout<<"computer choice is: "<<computer_choice<<endl;
	
		if(user_choice == computer_choice){
			cout<<"it's a Draw"<<endl;
			cout<<"                        "<<endl;
		}
		else if(user_choice == 0 && computer_choice == 2){
			cout<<"you win!"<<endl;
			user_win += 1;
		cout<<"             "<<endl;
		}
		else if(user_choice < computer_choice){
			cout<<"you loose!"<<endl;
			computer_win += 1;
			cout<<"             "<<endl;
		}
		else if(user_choice == 2 && computer_choice == 0){
			cout<<"you loose!"<<endl;
			computer_win += 1;
			cout<<"             "<<endl;
		}
		else{
			cout<<"you win!"<<endl;
			user_win += 1;
			cout<<"             "<<endl;
		}
  }
}
cout<<"your total wins: "<<user_win<<endl;
cout<<"computer total wins: "<<computer_win<<endl;

if (user_win > computer_win){
	cout<<"CONGRATULATIONS! YOU ARE WINNER"<<endl;
}
else if(user_win < computer_win){
	cout<<"SORRY! YOU LOOSE"<<endl;
}
else{
	cout<<"It's Draw!"<<endl;
}
cout<<"You want to play again!"<<endl;
cout<<"                        "<<endl;
cout<<"    press"<<endl;
cout<<"1. for Yes "<<endl;
cout<<"2. for No "<<endl;
cout<<"            "<<endl;
cout<<"Enter your choice"<<endl;
cin>>a;
if(a==1){
	main();
}
else{
	exit(0);
}
	return 0;
}
