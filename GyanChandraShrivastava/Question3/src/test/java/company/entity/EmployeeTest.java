package company.entity;

import org.junit.Test;
import company.dao.EmployeeDao;


public class EmployeeTest {
	
		// Creating the object of EmployeeDao class..
		EmployeeDao dao=new EmployeeDao();
		
		// this method is created for performing creation operation...
		@Test
		public void createData() {
			boolean bool=dao.createData();
			if(bool) {
				System.out.println("Data Successfully Inserted...");
			}
			else {
				System.out.println("Data Not Inserted....");
			}
		}
		
		// this method is created for performing read Single data operation...
		@Test
		public void readSingleData() {
			dao.readSingleData(125);
		}
		
		// this method is created for performing read all data operation...
		@Test
		public void readAllData() {
			dao.readAllData();
		}
		
		
		// this method is created for performing update data operation...
		@Test
		public void updateData() {
			boolean bool=dao.updateData(125);
			if(bool) {
				System.out.println("Data Successfully Updated..");
			}
			else {
				System.out.println("Data Not Updated....");
			}
		}
		
		// this method is created for performing delete data operation...
		@Test
		public void deleteData() {
			boolean bool=dao.deleteData(211);
			if(bool) {
				System.out.println("Data Successfully Deleted..");
			}
			else {
				System.out.println("Data Not Not Deleted....");
			}
		}
		
	
}
	

