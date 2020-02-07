#include <iostream>
#include<string>

using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	bool B_answer;
	
	cout<<"OrTable\n"<<endl;
	cout<< "1+1 = " <<(B_answer=0+1)<<endl;
	cout<< "1+0 = " <<(B_answer=1+0)<<endl;
	cout<< "0+1 = " <<(B_answer=0+1)<<endl;
	cout<< "0+0 = " <<(B_answer=0+0)<<endl<<endl;

	cout<< "True or false \n"<<endl;

	cout<< "True or True   = " <<(B_answer=true||true)<<endl;
	cout<< "True or False  = " <<(B_answer=true||false)<<endl;
	cout<< "False or True  = " <<(B_answer=false||true)<<endl;
	cout<< "False or False = " <<(B_answer=false||false)<<endl<<endl;
	
	cout<<"And Table\n"<<endl;
	cout<< "1*1 = " <<(B_answer=1*1)<<endl;
	cout<< "1*0 = " <<(B_answer=1*0)<<endl;
	cout<< "0*1 = " <<(B_answer=0*1)<<endl;
	cout<< "0*0 = " <<(B_answer=0*0)<<endl<<endl;

	cout<< "True and false \n"<<endl;

	cout<< "True and True   = " <<(B_answer=true&&true)<<endl;
	cout<< "True and False  = " <<(B_answer=true&&false)<<endl;
	cout<< "False and True  = " <<(B_answer=false&&true)<<endl;
	cout<< "False and False = " <<(B_answer=false&&false)<<endl;


	system("pause");
	return 0;
}
