package book.shelf;

import java.util.HashSet;
import java.util.Iterator;

public class BookTest {

	public static void main(String[] args) {
		// creating the objects of Book class ...
		Book book=new Book(12,"C","gyan",130,520f);
		Book book1=new Book(14,"Cpp","shubham",230,6500f);
		Book book2=new Book(18,"java","anuj",4200,1200f);
		Book book3=new Book(12,"C","gyan",130,520f);
		Book book4=new Book(16,"python","maswood",710,520f);
		
		//Storing book Information in HashSet() for uniqueness....
		HashSet<Book> data=new HashSet<Book>();
		data.add(book1);
		data.add(book2);
		data.add(book3);
		data.add(book4);
		data.add(book1);
		
		System.out.println("****************Showing all unique Book Information  *************");
		
		Iterator<Book> itr=data.iterator();
		while(itr.hasNext()) {
			Book data1=itr.next();
			System.out.println("Book Number is -> "+data1.getBookNumber());
			System.out.println("Book Name is -> "+data1.getBookName());
			System.out.println("Book Author Name is -> "+data1.getBookAuthor());
			System.out.println("Number of pages in books is -> "+data1.getNumberOfPages());
			System.out.println("Book Price is -> "+data1.getBookPrice());
			System.out.println("***********************\n");
		}

	}

}
