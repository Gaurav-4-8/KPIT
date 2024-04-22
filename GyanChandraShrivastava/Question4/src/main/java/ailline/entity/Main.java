package ailline.entity;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Scanner sc=new Scanner(System.in);
		while(true) {
			System.out.println("*********************Welcome in AirLine**********************");
			System.out.println("Press 1 for Inserting Flight Information in Database ");
			System.out.println("Press 2 for get single Flight Information in Database ");
			System.out.println("Press 3 for Get all Flight Information in Database ");
			System.out.println("Press 4 for Update Flight Information in Database ");
			System.out.println("Press 5 for Deleted Flight Information in Database ");
			System.out.print("Press 6 for Inserting Flight Information in Database -> ");
			
			int choice=sc.nextInt();
			if(choice==1) {
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
							
			}else if(choice==2) {
				System.out.println("Enter the FlightNumber which want to show-> ");
				int num=sc.nextInt();
				//calling a getSingleData()
				FlightTest.getSingleData(num);
			}else if(choice==3) {
				//calling a getAllData()
				FlightTest.getAllData();
			}else if(choice==4) {
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
			}else if(choice==5) {
				System.out.println("Enter the FlightNumber which want to show-> ");
				int num=sc.nextInt();
			
				//calling a deleteData()
				FlightTest.deleteData(num);
			}else if(choice==6) {
				break;
			}else {
				System.out.println("You Have Entered Wrong Input please give Right Input");
			}
			
		}
			
		
	}

}
