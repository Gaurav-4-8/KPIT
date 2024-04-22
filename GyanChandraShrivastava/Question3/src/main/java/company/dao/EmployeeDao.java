package company.dao;

import java.sql.*;
import java.time.LocalDate;

import company.entity.ConnectionProvider;
public class EmployeeDao {

	// importing connection object from ConnectionProvider Class...
	Connection con=ConnectionProvider.createConnection();
	
	// this method() Performing Creation Operation...
	public boolean createData() {
		boolean b=false;
		try {
			String query="insert into emp_master(emp_number,emp_name,emp_joiningDate,emp_designation,emp_salary) values(?,?,?,?,?)";
			// step 3 Creating prepare statement...
			PreparedStatement ps= con.prepareStatement(query);
			ps.setInt(1, 207);
			ps.setString(2,"anuj");
			ps.setString(3,"01/02/2022");
			ps.setString(4,"Trainee");
			ps.setFloat(5,35000f);
			
			//Firing Query...
			ps.executeUpdate();
			b=true;
			
		} catch (SQLException e) {			
			e.printStackTrace();
		}
		return b;
	}

	// this method() Performing read Single Data Operation...
	public void readSingleData(int id) {
	  try{
		String query="select * from emp_master where emp_number=?";
		// step 3 Creating prepare statement...
		PreparedStatement ps= con.prepareStatement(query);
		ps.setInt(1, id);
		
		//Firing Query...
		ResultSet data=ps.executeQuery();
		while(data.next()) {
			int id1=data.getInt(1);
			String name=data.getString(2);
			String date=data.getString(3);
			String designation=data.getString(4);
			float salary=data.getFloat(5);
			System.out.println("Employee Number is ->"+id1);
			System.out.println("Employee Name is ->"+name);
			System.out.println("Employee Joining Date is ->"+date);
			System.out.println("Employee Designation is ->"+designation);
			System.out.println("Employee Salary is ->"+salary);
		}
	} catch (Exception e) {			
		e.printStackTrace();
	}
	
	}

	// this method() Performing Read All Data Operation...
	public void readAllData() {
		try{
			String query="select * from emp_master";
			// step 3 Creating prepare statement...
			Statement ps= con.createStatement();
			
			//Firing Query...
			ResultSet data=ps.executeQuery(query);
			while(data.next()) {
				int id1=data.getInt(1);
				String name=data.getString(2);
				String date=data.getString(3);
				String designation=data.getString(4);
				float salary=data.getFloat(5);
				System.out.println("Employee Number is ->"+id1);
				System.out.println("Employee Name is ->"+name);
				System.out.println("Employee Joining Date is ->"+date);
				System.out.println("Employee Designation is ->"+designation);
				System.out.println("Employee Salary is ->"+salary);
				System.out.println("******************************\n");
			}
		} catch (Exception e) {			
			e.printStackTrace();
		}
		
	}

	// this method() Performing Update Operation...
	public boolean updateData(int id) {
		boolean b=false;
		try {
			String query="update emp_master set emp_number=?,emp_name=?,emp_joiningDate=?,emp_designation=?,emp_salary=? where  emp_number=?";
			// step 3 Creating prepare statement...
			PreparedStatement ps= con.prepareStatement(query);
			ps.setInt(1, 211);
			ps.setString(2,"kolar");
			ps.setString(3,"04/02/2022");
			ps.setString(4,"Trainee");
			ps.setFloat(5,35000f);
			ps.setInt(6,id);
			
			//Firing Query...
			ps.executeUpdate();
			b=true;
			
		} catch (SQLException e) {			
			e.printStackTrace();
		}
		return b;
	}

	// this method() Performing Delete Operation...
	public boolean deleteData(int id) {
		boolean b=false;
		try {
			String query="delete from emp_master where  emp_number=?";
			// step 3 Creating prepare statement...
			PreparedStatement ps= con.prepareStatement(query);
			ps.setInt(1, id);
	
			//Firing Query...
			ps.executeUpdate();
			b=true;
			
		} catch (SQLException e) {			
			e.printStackTrace();
		}
		return b;

	}

	
}
