
import java.util.Scanner;

import org.junit.Test;

import ailline.entity.Flight;
import ailline.entity.FlightTest;



public class FlightTest1 {
	
		Scanner sc=new Scanner(System.in);
		// Creating the object of FlightTest class..
		FlightTest dao=new FlightTest();
		
		// this method is created for performing creation operation...
		@Test
		public void createData() {
			System.out.println("Enter the FlightNumber -> ");
			int num=sc.nextInt();
			System.out.println("Enter the FlightName -> ");
			String name=sc.next();
			System.out.println("Enter the Flight Sourse -> ");
			String sourse=sc.next();
			System.out.println("Enter the Flight Destination-> ");
			String destination=sc.next();
			
			// creating object...
			Flight emp=new Flight(num,name,sourse,destination);
			
			//calling a insertData()
			FlightTest.insertData(emp);
		}
		
		// this method is created for performing read Single data operation...
		@Test
		public void readSingleData() {
			System.out.println("Enter the FlightNumber which want to show-> ");
			int num=sc.nextInt();
			//calling a getSingleData()
			FlightTest.getSingleData(num);

		}
		
		// this method is created for performing read all data operation...
		@Test
		public void readAllData() {
			//calling a getAllData()
			FlightTest.getAllData();
		}
		
		
		// this method is created for performing update data operation...
		@Test
		public void updateData() {
			System.out.println("Enter the FlightNumber which want to update-> ");
			int num=sc.nextInt();
			System.out.println("Enter the new FlightName -> ");
			String name=sc.next();
			System.out.println("Enter the new Flight Sourse -> ");
			String sourse=sc.next();
			System.out.println("Enter the new Flight Destination-> ");
			String destination=sc.next();
			Flight emp=new Flight(name,sourse,destination);
			//calling a updateData()
			FlightTest.updateData(num,emp);
		}
		
		// this method is created for performing delete data operation...
		@Test
		public void deleteData() {
			System.out.println("Enter the FlightNumber which want to show-> ");
			int num=sc.nextInt();
			//calling a deleteData()
			FlightTest.deleteData(num);
		}
		
	
}
