#include<iostream>
#include<vector>
using namespace std;
class Book{
string title;
string Author;
Book(string t,string a):title(t),Author(a){}
void Showbook(){
cout<<"Title:"<<title<<endl;
cout<<"Author:"<<Author<<endl;
}
};
class Library{
private:
vector<Book>books;
public:
void addBook(Book* book){
books.push_back(book);
}
void ShowLibrary(){
cout<<"Library Books:"<<endl;
for(const auto& book:books){
book->Showbook();
}
};
~Library(){
};
int main(){
Book book1("1984","George Orwell");
Book book2("To Kill a Mocking Bird","Harper Lee");
Book book3("The Great Gatsby",f. Scott fitzgerald);
}
Librar mylibrary;
Library.addBook(&book1);
Library.addBook(&book2);
Library.addBook(&book3);
mylibrary.ShowLibrary();
return 0;
}
