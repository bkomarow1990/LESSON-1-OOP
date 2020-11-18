#include <iostream>
#include <string>
using namespace std;
bool isDigit(const size_t& SIZE_, const string& string_) {
	for (size_t i = 0; i < SIZE_; i++)
	{
		if (!isdigit(string_[i]))
		{
			return false;
		}
	}
	return true;
}
class Student {
	// start Class Date in Class Student
	class Date {
		static const size_t CURRENT_YEAR = 2020;
		static const size_t OLDEST_YEAR = 1910;
		bool isLeap(size_t& year) {
			return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
		}
	
	public:
		const size_t& getMonth() {
			return month;
		}
		const size_t& getYear() {
			return year;
		}
		const size_t& getDay() {
			return day;
		}
		void setMonth(const size_t& month_) {
			if (month_ >= 1 && month_ <= 12)
			{
				month = month_;
			}
		}
		void setYear(const size_t& year_) {
			if (year_ < CURRENT_YEAR && year_ < OLDEST_YEAR) {
				year = year_;
			}
		}
		void setDay(size_t& day_) {
			size_t dayInMonth[]{ 31,28,31,30,31,30,31,31,30,31,30,31 };
			if (day >= 1 && day <= dayInMonth[month - 1])
			{
				day = day_;
			}
			else if (month == 2 && day_ == 29 && isLeap(year)) {
				day = day_;

			}
			else {
				cout << "ENTER CORRECT DATE" << endl;
			}
		}
		void inputDate() {
			size_t month_, day_, year_;
			cout << "Enter Month" << endl;
			cin >> month_;
			setMonth(month_);
			cout << "Enter Day" << endl;
			cin >> day_;
			setDay(day_);
			cout << "Enter Year" << endl;
			cin >> year_;
			setYear(year_);
		}
		void print() {
			cout << day << "." << month << "." << year << endl;
		}
	private:
		size_t day, month, year;
	}; // end Date

	bool phoneIsRight(const string& phone_) {
		if (isDigit(phone_.length(), phone_))
		{
			if (phone_.length() == 10 || phone_.length() == 12)
			{
				return true;
			}
		}
		return false;
	}
	class EducationPlace {
	public:
		void input() {
			string city_, country_;
			size_t number_group_;
			cout << "ENTER CITY OF PLACE" << endl;
			cin >> city_;
			setCity(city_);
			cout << "ENTER CONTRY OF PLACE" << endl;
			cin >> country_;
			setCountry(country_);
			cout << "ENTER NUMBER OF GROUP" << endl;
			cin >> number_group_;
			setNumberGroup(number_group_);
		}
		void print() {
			cout << "City: " << city <<endl;
			cout << "Country: " << country <<endl;
			cout << "Number of group: " << number_group << endl;
		}
		const string & getCity() {
			return city;
		}
		const string& getCountry() {
			return country;
		}
		const size_t& getNumberGroup() {
			return number_group;
		}
		void setCity(const string & city_) {
			if (!isDigit(city_.length(), city_))
			{
				city = city_;
			}
			else {
				cout << "ENTER CORRECT CITY" << endl;
			}
		}
		void setCountry(const string& country_) {
			if (!isDigit(country_.length(), country_))
			{
				country = country_;
			}
			else {
				cout << "ENTER CORRECT COUNTRY" << endl;
			}
		}
		void setNumberGroup(const size_t & number_group_) {
			number_group = number_group_;
		}
	private:
		string city;
		string country;
		size_t number_group;

	}; //end Class EducationPlace

private:
	string name;
	string surname;
	string fathername;
	string phone;
	string city;
	string country;
	Date birth;
	EducationPlace place;
public:
	const string& getName() {
		return name;
	}
	const string& getSurname() {
		return surname;
	}
	const string& getFathername() {
		return fathername;
	}
	const string& getPhone() {
		return phone;
	}
	const string& getCity() {
		return city;
	}
	const string& getCountry() {
		return country;
	}
	void setName(const string & name_) {
		if (!name_.empty())
		{
			if (!isDigit(name_.length(), name_))
			{
				name = name_;
			}
			else {
				cout << "ENTER CORRECT NAME" << endl;
			}
		}	
	}
	void setSurname(const string& surname_) {
		if (!surname_.empty())
		{
			if (!isDigit(surname_.length(), surname_))
			{
				surname = surname_;
			}
			else {
				cout << "ENTER CORRECT SURNAME" << endl;
			}
		}
	}
	void setFathername(const string& fathername_) {
		if (!fathername_.empty())
		{
			if (!isDigit(fathername_.length(), fathername_))
			{
				fathername = fathername_;
			}
			else {
				cout << "ENTER CORRECT FATHERNAME" << endl;
			}
		}
	}
	void setCity(const string& city_) {
		if (!city_.empty())
		{
			if (!isDigit(city_.length(), city_))
			{
				city = city_;
			}
			else {
				cout << "ENTER CORRECT CITY" << endl;
			}
		}
	}
	void setCountry(const string& country_) {
		if (!country_.empty())
		{
			if (!isDigit(country_.length(), country_))
			{
				country = country_;
			}
			else {
				cout << "ENTER CORRECT COUNTRY" << endl;
			}
		}
	}
	void input() {
		string phone_,name_,surname_,fathername_,city_,country_;
			cout << "ENTER NAME: " << endl;
			cin >> name_;
			setName(name_);
			cout << "ENTER SURNAME: " << endl;
			cin >> surname_;
			setSurname(surname_);
			cout << "ENTER FATHERSNAME: " << endl;
			cin >> fathername_;
			setFathername(fathername_);
			cout << "ENTER DATE OF B-DAY: " << endl;
			birth.inputDate();
			cout << "ENTER PHONE: " << endl;
			cin >> phone_;
			if (phoneIsRight(phone_))
			{
				phone = phone_;
			}
			else {
				cout << "Enter correct phone" << endl;
			}
			cout << "ENTER CITY: " << endl;
			cin >> city_;
			setCity(city_);
			cout << "ENTER COUNTRY: " << endl;
			cin >> country_;
			setCountry(country_);
			place.input();
	}
	void print() {
		cout << "Name: " << name << endl;
		cout << "Surname: " << surname << endl;
		cout << "Fathername: " << fathername << endl;
		cout << "Phone: " << phone << endl;
		cout << "City: " << city << endl;
		cout << "Country: " << country << endl;
		birth.print();
		place.print();
	}

};
int main() {
	Student Boris;
	Boris.input();
	Boris.print();
	return 0;
}