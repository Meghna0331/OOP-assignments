#include<iostream>
using namespace std;

class librarybook
{
public:
   int bookid;
   int yearofpublication;
   string bookname;
   string category;

   void bookdetails()
   {
      cout << "BookID: " << bookid << endl;
      cout << "YearOfPublication: " << yearofpublication << endl;
      cout << "BookName: " << bookname << endl;
      cout << "Category: " << category << endl;
   }
};

int main()
{
   librarybook b1;

   b1.bookid = 101;
   b1.yearofpublication = 2018;
   b1.bookname = "Atomic Habits";
   b1.category = "Non-Fiction";

   b1.bookdetails();

   return 0;
}
