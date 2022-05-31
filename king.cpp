#include <iostream>
using namespace std;
class king{
	private:
		int age;
		char name[];
		char gender[];
	public:
		void getbasic_info(){
			cout<<"enter name of student"<<endl;cin>>name;
				cout<<"age of student"<<endl;cin>>age;
					cout<<"enter gender of student"<<endl;cin>>gender;
		}
		void display(){
			cout<<"name of student is "<<name<<endl;
			cout<<"age of student is "<<age<<endl;
			cout<<"gender of student is "<<gender<<endl;
		}
};
class queen:public king{
	private:
		int eng,math,french,swahili,total,average;
		char form[];
public:
	void getresults(){
		cout<<"enter grade for english"<<endl; cin>>eng;
			cout<<"enter grade for math "<<endl;cin>>math;
				cout<<"enter grade for french "<<endl;cin>>french;
					cout<<"enter grade for swahili "<<endl;cin>>swahili;
	}
	int calculate(){
	total=eng+math+french+swahili;
		cout<<"total is "<<total<<endl;
		return total;	
	}
	int calculatea(){
		average=total/4;
			cout<<"average is "<<average<<endl;
		return average;
	}
};
int main(int argc, char** argv)
{
	queen k;
	k.getbasic_info();
	k.display();
	k.getresults();
	k.calculate();
	
	return 0;
}