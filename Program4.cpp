//Program4: Define a class to represent complex number and include the real and imaginary part as data members.

#include <iostream>
using namespace std;

class complex
{
    int real, img;
    public:
    	complex(){
    		real = 0;
    		img  = 0;
		}
		//(a)Assigning initial value
		void assign_values(int x, int y){
			real = x;
			img  = y;
			cout << "Values are initialized!\n";
		}
		//(b)Displaying Complex number in proper format
		void display(){
			cout << real << "+" << img << "i" << endl;
		}
		//(c)(i) Adding real number to complex number
		void add_real(int num){
			real = real+num;
		}
		//(c)(ii) Subtracting real number from a complex number
		void sub_real(int num){
			real = real-num; 
		}
		//(d)(i) Adding imaginary number to complex number
		void add_img(int num){
			img = img+num;
		}
		//(d)(ii) Subtracting imaginary number from a complex number	
		void sub_img(int num){
			img = img-num;
		}
};

int main(){
	complex c;
	
	string ch = "y";
	while(ch=="y" or ch=="Y"){
		cout << "***** MENU *****\n";
		cout << "1. Assign initial values" << endl;
		cout << "2. Display Complex number in proper format" << endl;
		cout << "3. Add and subtract real number to complex number" << endl;
		cout << "4. Add and subtract imaginary number from complex number" << endl;
		
		int choice;
		cout << "\nEnter your choice: ";
		cin  >> choice;
		
		if(choice==1){
			int real, imag;
			cout << "\nEnter real part: ";
			cin  >> real;
			cout << "Enter imaginary part: ";
			cin  >> imag;
			
			c.assign_values(real,imag);
			
		}
		else if(choice==2){
			c.display();
		}
		else if(choice==3){
			string ch1 = "y";
			while(ch1=="y" or ch1=="Y"){
				int choice1;
				cout << "1. Add\n2. Subtract\n3. Display" << endl;
				cout << "Enter your choice: ";
				cin  >> choice1;
				 
				
				if(choice1==1){
					int num;
					cout << "Enter real number: ";
					cin  >> num;
					c.add_real(num);
				}
				else if(choice1==2){
					int num;
					cout << "Enter real number: ";
					cin  >> num;
					c.sub_real(num);
				}
				else if(choice1==3){
					c.display();
				}
				else{
					cout << "Invalid choice!\n"	;	
				}
				cout << "\nDo you want to continue?(y/n): ";
				cin  >> ch1;
			}
		}
		else if(choice==4){
			string ch2;
			ch2 = "y";
			while(ch2=="y" or ch2=="Y"){
				int choice2;
				cout << "1. Add\n2. Subtract\n3. Display" << endl;
				cout << "Enter your choice: ";
				cin  >> choice2; 
				
				if(choice2==1){
					int num1;
					cout << "Enter imaginary number: ";
					cin  >> num1;
					c.add_img(num1);
				}
				else if(choice2==2){
					int num1;
					cout << "Enter imaginary number: ";
					cin  >> num1;
					c.sub_img(num1);
				}
				else if(choice2==3){
					c.display();
				}
				else{
					cout << "Invalid choice!\n"	;	
				}
				cout << "\nDo you want to continue?(y/n): ";
				cin  >> ch2;
			}
		}
		else{
			cout << "Invalid choice!";
		} 
		cout << "\nWant to continue?(y/n): ";
		cin  >> ch;
	}
	return 0;
}



