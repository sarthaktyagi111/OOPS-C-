
#include <iostream>
#include<string>
using namespace std;

class Book {
public:
	string Title;
	string Author;
	float* Rates;
	int RatesCounter;
	int* Year;

	Book(string title, string author) {
		Title = title;
		Author = author;

		RatesCounter = 2;
		Rates = new float[2];
		Rates[0] = 4;
		Rates[1] = 5;
		Year = new int;
		*Year = 10;

		cout << "Constructor invoked for "+Title<<endl;
	}

	~Book() {
		//use for array
		delete [] Rates;
		Rates = nullptr;
		//use for simple types
		delete Year;
		Year = nullptr;
		cout << "Destructor invoked for "+Title<<endl;
	}
	Book(const Book& orginal){
		Title = orginal.Title;
		Author = orginal.Author;
		RatesCounter = orginal.RatesCounter;
		Rates = new float[RatesCounter];
		for(int i = 0;i<RatesCounter;i++){
			Rates[i] = orginal.Rates[i];
		}
		cout<<"copy constructor imvoked"<<endl;
	}
};
void printbook(Book book){
	cout<<book.Author<<endl;
	cout<<book.Title<<endl;
	for(int i = 0;i<book.RatesCounter;i++){
		cout<<book.Rates[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	Book book1("Millionaire Fastlane", "M. J. DeMarco");
	Book book2("C++ Lambda Story", "Bartek Filipek");

	/*Let me know in the comments if you know why the line below will cause an error*/
	Book book3(book1);
	printbook(book1);
	printbook(book2);
	printbook(book3);

	
}