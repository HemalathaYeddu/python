#include<iostream>
using namespace std;

class student{
	private:
		int rollNo;
		string name;
		
		public:
			student(){
				rollNo=0;
				name="Unknown";
			}
			student(int r, string n){
			rollNo=r;
			name=n;
		}
		void display(){
			cout<<"Roll No:"<<rollNo<<",Name:"<<name<<endl;
	}
};
int main()
{
	student s1;
	student s2(101,"Ravi");
	s1.display();
	s2.display();
	return 0;
}
