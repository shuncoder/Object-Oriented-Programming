#include <iostream>
#include<string>

using namespace std;

class Person{
	private :
		string name;
		int age;
		float gpa;
		string address;
		string classroom;
		bool diemdanh;
	public :
	    Person(string name , int age,string classroom , float gpa , string address , bool diemdanh ){
               this->name = name;
               this->age = age;
               this->gpa = gpa;
               this->address = address;
               this->diemdanh = diemdanh;
               this->classroom = classroom;
		}	
		void display(){
			cout<<"Name :"<<name<<endl;
			cout<<"Age :"<<age<<endl;
			cout<<"Class :"<<classroom<<endl;
			cout<<"GPA :"<<gpa<<endl;
			cout<<"Address :"<<address<<endl;
			if(diemdanh){
				cout<<"Hom nay co di hoc"<<endl;
			}else cout<<"Hom nay khong di hoc "<<endl;
		}
};
int main(){
	string name,address,classroom;
	int age;
	float gpa;
	bool diemdanh = true;
	char dd;
	cout<<"Nhap ten sinh vien :"<<endl;
	getline(cin, name);
	cout<<"Nhap tuoi sinh vien :"<<endl;
	cin>>age;
	cout<<"Nhap ten lop hoc :"<<endl;
	cin>>classroom;
	cout<<"Nhap GPA cua sinh vien :"<<endl;
	cin>>gpa;
    //dung de xoa bo nho dem tranh troi lenh
	cin.ignore();
	cout<<"Nhap dia chi cua sinh vien :"<<endl;
	getline(cin,address);
	cout<<"Hom nay co di hoc khong (Y or N)"<<endl;
	cin>>dd;
	cin.ignore();
	if(toupper(dd) == 'Y'){
		diemdanh = true;
	}else diemdanh = false;
	Person p(name , age , classroom , gpa , address, diemdanh);
	p.display();
	
	return 0;
	}
