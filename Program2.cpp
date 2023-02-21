//Program 2: Implement a function to calculate Simple Interest. Using the default value of rate of interest if it is not enterted by user

#include <iostream>
using namespace std;

float SI(float p,float t, float r= 0.15){
	float SI = p * r * t * 0.01; 
	return SI; 
}

int main(){
	float p_amt ,rate ,time;
	cout << "Enter the Principal Amount: ";
	cin  >> p_amt;
	cout << "Enter the Rate of Interest: ";
	cin  >> rate;
	cout << "Enter the time (in years): ";
	cin  >> time;
	cout << endl << "Simple Interest : " << SI(p_amt,time,rate) << endl << endl;
	cout << "Simple Interest(with default value of rate of interest) : " << SI(p_amt,time) << endl;
	
	return 0;
	
}
