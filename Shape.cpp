# include<iostream>
using namespace std;
class shape{
	int radius,length,width;
	int peri, per;
	public:
		shape(int);
		shape(int,int);
		~shape();
	    int calculate_circle(int);
		int calculate_rectangle(int,int);
		void displayC();
		void displayR();
	
};
shape::shape(int r){
	radius=r;
}
shape::shape(int l,int w){
	length=l;
	width=w;
}
shape::~shape(){
	cout<<"Destructor called"<<endl;
}
int shape::calculate_circle(int r){
	peri=2*3.14*r;
	return peri;
}
int shape::calculate_rectangle(int l,int w){
    per=2*(l+w);
	return per;
}
void shape::displayC(){
	cout<<"The perimeter of Ciecle: "<<peri<<endl;
}
void shape::displayR(){
	cout<<"The perimeter of Rectaangle: "<<per<<endl;
}
int main(){
	int sc;
	int radius,length,width;

	do{
		cout<<"1. Press 1 to calculate the perimeter of circle."<<endl;
		cout<<"2. Press 2 to calculate the perimeter of rectangle."<<endl;
		cout<<"3. Press 3 to destroy the perimeter calculation."<<endl;
		cout<<"4. Press 4 to Exit."<<endl;
		cout<<"Enter your choice: ";
		cin>>sc;
		if (sc==4){
			cout<<"You have existed the program!"<<endl;
			break;
		}
		else{
		switch(sc){
		  case 1:{
		  	cout<<"Enter the radius of circle: ";
		  	cin>>radius;
		  	shape s1(radius);
		  	s1.calculate_circle(radius);
		  	s1.displayC();
			  break;}
		  case 2:{
		    cout<<"Enter the length of rectangle: ";
		  	cin>>length;
		  	cout<<"Enter the width of rectangle: ";
		  	cin>>width;
		  	shape s2(length,width);
		  	s2.calculate_rectangle(length,width);
		  	s2.displayR();
			  break;}
		  case 3:{
		  	cout<<"You have destructed the calculate_perimeter."<<endl;
		  	break;}
			  		  	
		  default:{
			cout<<"No match found."<<endl;}	
		}
		
	}
}while(1);
	return 0;
}	

