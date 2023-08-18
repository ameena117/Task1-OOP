//Create class Account that contains the following :
//          // attributes
//-Id
//- Name
//- Balance
//           // methods
//- Constructors(default, parametrized, copy constructor)
//- Setters & getters
//- setData()
//- printInfo() = > print Account information
//- TransferTo() = > transfer particular amount of money to another account

#include <iostream>
using namespace std;

class Acccount {
private: 
	// attributes
	int Id;
	string Name;
	double Balance;
public:
	Acccount() {
		//default
		Id = 0;
		Name = "";
		Balance = 0;
	}
	Acccount(int i,string n, double b) {
		//parametrized
		Id = i;
		Name = n;
		Balance = b;
	}
	Acccount(Acccount &copy) {
		//copy
		Id = copy.getId();
		Name = copy.getName();
		Balance = copy.getBalance();
	}
	//Setters
	void setId(int i) { Id = i; }
	void setName(string n) { Name = n; }
	void setBalance(double b) { Balance = b; }
	//Getters
	int getId() { return Id; }
	string getName() { return Name; }
	double getBalance() { return Balance; }
	//setData
	void setData(int i, string n, double b) {
		Id = i;
		Name = n;
		Balance = b;
	}
	//TransferTo() = > transfer particular amount of money to another account
	double TransferTo(double amount) {
		return Balance -= amount;
	}
	void printInfo() {
		cout << Id << " " << Name << " " << Balance << endl;
	}

};

int main()
{
	Acccount a;
	a.printInfo();
	a.setId(1);
	a.setBalance(1500);
	a.setName("Ameena");
	a.TransferTo(500);
	a.printInfo();
	a.setData(5, "Test", 2000);
	a.printInfo();
	Acccount a1(8, "Test1", 1000);
	a1.printInfo();
	Acccount a2(10, "Test2", 2500);
	a2.printInfo();
	//copy
	Acccount a3=a;
	a3.printInfo();
	Acccount a4(a2);
	a4.printInfo();

}