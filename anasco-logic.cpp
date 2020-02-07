#include <iostream>
#include <string.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Logic{
	private:
		int choice, repeat;
	public:
		void input();
		void conjunction();
		void disjunction();
		void negation();
		void conditional();
		void biconditional();
		void wantToRepeat();
};

int main(int argc, char** argv) {
	Logic logic;
	logic.input();
	
	return 0;
}

void Logic::input(){
	cout<<"This is a demo for logic statements\n\nSelect your choice to continue\n(1)Conjunction\t(2)Disjunction\n(3)Negation\t(4)Conditional\n(5)Biconditional\n"<<endl;
	cout<<"Choice: ";
	cin>>choice;
	switch(choice){
		case 1:
			conjunction();
			break;
		case 2:
			disjunction();
			break;
		case 3:
			negation();
			break;
		case 4:
			conditional();
			break;
		case 5:
			biconditional();
			break;
		default:
			cout<<"Invalid choice";
	}
	wantToRepeat();
}

void Logic::conjunction(){
	cout<<"| P | Q || P^Q |"<<endl;
	cout<<"| T | T ||  T  |"<<endl;
	cout<<"| T | F ||  F  |"<<endl;
	cout<<"| F | T ||  F  |"<<endl;
	cout<<"| F | F ||  F  |"<<endl;
}

void Logic::disjunction(){
	cout<<"| P | Q || PvQ |"<<endl;
	cout<<"| T | T ||  T  |"<<endl;
	cout<<"| T | F ||  T  |"<<endl;
	cout<<"| F | T ||  T  |"<<endl;
	cout<<"| F | F ||  F  |"<<endl;
}

void Logic::negation(){
	cout<<"| P | Q || ~P | ~Q |"<<endl;
	cout<<"| T | T ||  F |  F |"<<endl;
	cout<<"| T | F ||  F |  T |"<<endl;
	cout<<"| F | T ||  T |  F |"<<endl;
	cout<<"| F | F ||  T |  T |"<<endl;
}

void Logic::conditional(){
	cout<<"| P | Q || P-->Q |"<<endl;
	cout<<"| T | T ||   T   |"<<endl;
	cout<<"| T | F ||   F   |"<<endl;
	cout<<"| F | T ||   T   |"<<endl;
	cout<<"| F | F ||   T   |"<<endl;
}

void Logic::biconditional(){
	cout<<"| P | Q || P<->Q |"<<endl;
	cout<<"| T | T ||   T   |"<<endl;
	cout<<"| T | F ||   F   |"<<endl;
	cout<<"| F | T ||   F   |"<<endl;
	cout<<"| F | F ||   T   |"<<endl;
}

void Logic::wantToRepeat(){
	cout<<"\n\nSelect what to do next: \n(1)Try again\t(2)Exit\n\nChoice: ";
	cin>>repeat;
	if(repeat==1){
		cout<<"\n\n";
		input();
	}
}
