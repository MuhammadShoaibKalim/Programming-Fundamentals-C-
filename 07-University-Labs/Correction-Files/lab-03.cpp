/* This program implements a class of Book and displays the data of three books entered by user.
Identify and correct errors
*/

#include <iostream>
using namespace std;
class book
{
string title;
float price;
   public:   //public access specifier missing to public access
void getdata ();
void putdata ();

} ;
void book :: getdata () //missing :, book not  books
{
cout<<"Title:"; // ” -> " 
cin>>title;
cout<<"Price:";
cin>>price;
};
void book :: putdata ()
{
cout<<"Title:"<<title<< "\n";
cout<<"Price:"<<price<< "\n"; // ” to "
};  //missing  closing 
int main ()
{
book book1, book2, book3;   //book not books

cout<<"--------Getting data------"<<endl;
cout<<"Enter data for book 1\n";
book1.getdata ();
cout<<"Enter data for book 2\n";
book2.getdata ();

cout<<"Enter data for book 3\n";
book3.getdata ();

cout<<"Data for book 2\n";
book2.putdata ();

cout<<"--------Displaying data------"<<endl;
cout<<"Data for book 3\n";
book3.putdata ();

cout<<"Data for book 1\n";
book1.putdata();

return 0;
}
