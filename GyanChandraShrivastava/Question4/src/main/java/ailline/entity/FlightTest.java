package ailline.entity;

import java.util.List;

import javax.persistence.EntityManager;
import javax.persistence.EntityManagerFactory;
import javax.persistence.EntityTransaction;
import javax.persistence.Persistence;
import javax.persistence.Query;

public class FlightTest {
	
	static EntityManagerFactory factory=Persistence.createEntityManagerFactory("MyJPA");
	static EntityManager manager=factory.createEntityManager();
	
	//Inserting data into Database....
	public static void insertData(Flight flight) {		
		EntityTransaction tx1=manager.getTransaction();
		tx1.begin();		
		manager.persist(flight);
		tx1.commit();	
		System.out.println("Data inserted Successfully....");
	}
	
	//find single data from Database....
	public static void getSingleData(int id) {		
		EntityTransaction tx1=manager.getTransaction();
		tx1.begin();		
		Flight f=manager.find(Flight.class, id);
		System.out.println("Flight Number is -> "+f.getFlightNumber());
		System.out.println("Flight Name is -> "+f.getFlightName());
		System.out.println("Flight Source is -> "+f.getSource());
		System.out.println("Flight Destination is -> "+f.getDestination());
		System.out.println("*********************\n");
		tx1.commit();
	}

	public static void getAllData() {
		EntityTransaction tx1=manager.getTransaction();
		tx1.begin();		
		Query query=manager.createQuery("from Flight");
		List<Flight> list=query.getResultList();
		for(Flight f:list) {
			System.out.println("Flight Number is -> "+f.getFlightNumber());
			System.out.println("Flight Name is -> "+f.getFlightName());
			System.out.println("Flight Source is -> "+f.getSource());
			System.out.println("Flight Destination is -> "+f.getDestination());
			System.out.println("*********************\n");
		}
		tx1.commit();
		
	}

	public static void updateData(int num,Flight flight) {
		EntityTransaction tx2=manager.getTransaction();
		tx2.begin();
		Flight f=manager.find(Flight.class, num);
		System.out.println(f);
		f.setFlightName(flight.getFlightName());
		f.setSource(flight.getSource());
		f.setDestination(flight.getDestination());
		manager.merge(f);
		System.out.println("Data Updated...");
		tx2.commit();
		
	}

	public static void deleteData(int num) {
		EntityTransaction tx1=manager.getTransaction();
		tx1.begin();	
		Flight f=manager.find(Flight.class, num);
		manager.remove(f);
		tx1.commit();
		System.out.println("Data Deleted...");
		
	}

}
