#include <iostream> 

using namespace std;

class Month
{
  private:
  int month;
  
  public:
  //CONSTRUCTORS
  //a default constructor (what does it do? nothing)
  Month() {}
  //constructor to set month based on first 3 chars of the month name
  Month(char c1, char c2, char c3) {
    month = 0;

    string m = "";
    m += c1;
    m += c2;
    m += c3;

    if (m == "jan") {
      month = 1;
    }
    else if (m == "feb") {
      month = 2;
    }
    else if (m == "mar") {
      month = 3;
    }
    else if (m == "apr") {
      month = 4;
    }
    else if (m == "may") {
      month = 5;
    }
    else if (m == "jun") {
      month = 6;
    }
    else if (m == "jul") {
      month = 7;
    }
    else if (m == "aug") {
      month = 8;
    }
    else if (m == "sep") {
      month = 9;
    }
    else if (m == "oct") {
      month = 10;
    }
    else if (m == "nov") {
      month = 11;
    }
    else if (m == "dec") {
      month = 12;
    }
}
//a constructor to set month base on month number
  Month( int monthNumber) {
    month = monthNumber;
  }
  
  //METHODS
  //input function to set the month based on an input
  void getMonthByName(istream& in) {
    
    string m;
    in >> m;

    if (m == "jan") {
      month = 1;
    }
    else if (m == "feb") {
      month = 2;
    }
    else if (m == "mar") {
      month = 3;
    }
    else if (m == "apr") {
      month = 4;
    }
    else if (m == "may") {
      month = 5;
    }
    else if (m == "jun") {
      month = 6;
    }
    else if (m == "jul") {
      month = 7;
    }
    else if (m == "aug") {
      month = 8;
    }
    else if (m == "sep") {
      month = 9;
    }
    else if (m == "oct") {
      month = 10;
    }
    else if (m == "nov") {
      month = 11;
    }
    else if (m == "dec") {
      month = 12;
    }
  }
  //an input function to set the month based on the month number
  void getMonthByNumber(istream& in) {
    in >> month;
  }
  //an output function that outputs the month as an integer
  void outputMonthNumber(ostream& out) {
    out << month;
  }
  //an output function that outputs the month as the letters
  void outputMonthName(ostream& out) {
   
    switch (month) {
      case 1:
      out << "Jan";
      break;
      case 2:
      out << "Feb";
      break;
      case 3:
      out << "Mar";
      break;
      case 4:
      out << "Apr";
      break;
      case 5:
      out << "May";
      break;
      case 6:
      out << "Jun";
      break;
      case 7:
      out << "Jul";
      break;
      case 8:
      out << "Aug";
      break;
      case 9:
      out << "Sep";
      break;
      case 10:
      out << "Oct";
      break;
      case 11:
      out << "Nov";
      break;
      case 12:
      out << "Dec";
      break;
      default:
      break;
    }
  }
  //a function that returns the next month as a month object
  Month nextMonth() {
    int nextMonth = month + 1;
    if (nextMonth == 13) {
      nextMonth = 1;
    }
    return Month(nextMonth);
  }
  int monthNumber() {
    return month;
  }
};

int main() {

cout << "\nTesting constructor Month(char c1, char c2, char c3)" << endl;
Month m;
m = Month('j', 'a', 'n');
m.outputMonthNumber(cout); cout << " ";
m.outputMonthName(cout); cout << endl;

m = Month('f', 'e', 'b');
m.outputMonthNumber(cout); cout << " ";
m.outputMonthName(cout); cout << endl;

m = Month('m', 'a', 'r');
m.outputMonthNumber(cout); cout << " ";
m.outputMonthName(cout); cout << endl;

m = Month('a', 'p', 'r');
m.outputMonthNumber(cout); cout << " ";
m.outputMonthName(cout); cout << endl;

m = Month('m', 'a', 'y');
m.outputMonthNumber(cout); cout << " ";
m.outputMonthName(cout); cout << endl;

m = Month('j', 'u', 'n');
m.outputMonthNumber(cout); cout << " ";
m.outputMonthName(cout); cout << endl;

m = Month('j', 'u', 'l');
m.outputMonthNumber(cout); cout << " ";
m.outputMonthName(cout); cout << endl;

m = Month('a', 'u', 'g');
m.outputMonthNumber(cout); cout << " ";
m.outputMonthName(cout); cout << endl;

m = Month('s', 'e', 'p');
m.outputMonthNumber(cout); cout << " ";
m.outputMonthName(cout); cout << endl;

m = Month('o', 'c', 't');
m.outputMonthNumber(cout); cout << " ";
m.outputMonthName(cout); cout << endl;

m = Month('n', 'o', 'v');
m.outputMonthNumber(cout); cout << " ";
m.outputMonthName(cout); cout << endl;

m = Month('d', 'e', 'c');
m.outputMonthNumber(cout); cout << " ";
m.outputMonthName(cout); cout << endl;

cout << "\nTesting constructor Month(int monthNumber)" << endl;
int i = 1;
while (i <= 12) {
  Month mm(i);
  mm.outputMonthNumber(cout);
  cout << " ";
  mm.outputMonthName(cout);
  cout << endl;
  i++;
}

cout << "\nTesting the getMonthByName and outputMonth methods" << endl;
i = 1;
Month mm;
while (i <= 12) {
  mm.getMonthByName(cin);
  mm.outputMonthNumber(cout);
  cout << " ";
  mm.outputMonthName(cout);
  cout << endl;
  i++;
}

cout << "\nTesting the getMonthByNumber and outputMonth methods" << endl;
i = 1;
while (i <= 12) {
  mm.getMonthByNumber(cin);
  mm.outputMonthNumber(cout);
  cout << " ";
  mm.outputMonthName(cout);
  cout << endl;
  i++;
}

cout << "\nTesting the nextMonth and outputMonth methods" << endl;
i = 1;
while (i <= 12) {
  Month mm(i);
  mm = mm.nextMonth();
  mm.outputMonthNumber(cout);
  cout << " ";
  mm.outputMonthName(cout);
  cout << endl;
  i++;
}

return 0;
}