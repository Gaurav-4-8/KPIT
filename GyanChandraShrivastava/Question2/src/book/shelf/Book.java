package book.shelf;

import java.util.Objects;

public class Book {

	private int bookNumber;
	private String bookName;
	private String bookAuthor;
	private int numberOfPages;
	private float bookPrice;
	
	//Generating Constructor for Initializing instance Variable
	public Book(int bookNumber, String bookName, String bookAuthor, int numberOfPages, float bookPrice) {
		super();
		this.bookNumber = bookNumber;
		this.bookName = bookName;
		this.bookAuthor = bookAuthor;
		this.numberOfPages = numberOfPages;
		this.bookPrice = bookPrice;
	}
	
	
	// Generating getter and setter methods...
	public int getBookNumber() {
		return bookNumber;
	}

	public void setBookNumber(int bookNumber) {
		this.bookNumber = bookNumber;
	}


	public String getBookName() {
		return bookName;
	}


	public void setBookName(String bookName) {
		this.bookName = bookName;
	}


	public String getBookAuthor() {
		return bookAuthor;
	}


	public void setBookAuthor(String bookAuthor) {
		this.bookAuthor = bookAuthor;
	}

	public int getNumberOfPages() {
		return numberOfPages;
	}


	public void setNumberOfPages(int numberOfPages) {
		this.numberOfPages = numberOfPages;
	}

	public float getBookPrice() {
		return bookPrice;
	}

	public void setBookPrice(float bookPrice) {
		this.bookPrice = bookPrice;
	}
	
	
	//writing hashCode for returning hashCode for every Object
	@Override
	public int hashCode() {
		return Objects.hash(bookAuthor, bookName, bookNumber, bookPrice, numberOfPages);
	}

	//writing Equals  for comparing objects ..
	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		Book other = (Book) obj;
		return Objects.equals(bookAuthor, other.bookAuthor) && Objects.equals(bookName, other.bookName)
				&& bookNumber == other.bookNumber
				&& Float.floatToIntBits(bookPrice) == Float.floatToIntBits(other.bookPrice)
				&& numberOfPages == other.numberOfPages;
	}
	
	

}
