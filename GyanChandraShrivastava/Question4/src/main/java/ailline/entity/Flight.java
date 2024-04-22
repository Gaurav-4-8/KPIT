package ailline.entity;

import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.Id;
import javax.persistence.Table;

@Entity // to map the class name as a entity//
@Table(name="flight") // to give the table specific name...
public class Flight {
	
	@Id // to declare flightNumber as a primary key...
	private int flightNumber;
	private String flightName;
	private String source;
	private String destination;
	
	// Creating Parameterized Constructor to Initialize the instance variable...
	public Flight(int flightNumber, String flightName, String source, String destination) {
		super();
		this.flightNumber = flightNumber;
		this.flightName = flightName;
		this.source = source;
		this.destination = destination;
	}
	
	
	// creating constructor with 3 attributes....
	public Flight(String flightName, String source, String destination) {
		super();
		this.flightName = flightName;
		this.source = source;
		this.destination = destination;
	}



	//creating default constructor...
	public Flight() {
		super();
		// TODO Auto-generated constructor stub
	}

	// creating getter and setter....
	public int getFlightNumber() {
		return flightNumber;
	}



	public void setFlightNumber(int flightNumber) {
		this.flightNumber = flightNumber;
	}

	public String getFlightName() {
		return flightName;
	}

	public void setFlightName(String flightName) {
		this.flightName = flightName;
	}

	public String getSource() {
		return source;
	}

	public void setSource(String source) {
		this.source = source;
	}

	public String getDestination() {
		return destination;
	}

	public void setDestination(String destination) {
		this.destination = destination;
	}

	// generating toString()..
	@Override
	public String toString() {
		return "Flight [flightNumber=" + flightNumber + ", flightName=" + flightName + ", source=" + source
				+ ", destination=" + destination + "]";
	}
	
	
	
	
	
	

}
