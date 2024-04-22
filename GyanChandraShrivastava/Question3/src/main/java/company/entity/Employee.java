package company.entity;

import java.time.LocalDate;

// creating Employee class which store All Information regarding Employee...
public class Employee {
	private int empNumber;
	private String empName;
	private LocalDate empJoiningDate;
	private String empDesignation;
	private float empSalary;
	
	// creating Parameterized Constructor for Initializing instance variable,, 
	public Employee(int empNumber, String empName, LocalDate empJoiningDate, String empDesignation, float empSalary) {
		super();
		this.empNumber = empNumber;
		this.empName = empName;
		this.empJoiningDate = empJoiningDate;
		this.empDesignation = empDesignation;
		this.empSalary = empSalary;
	}

	//Generating Getter Setter Methods...
	public int getEmpNumber() {
		return empNumber;
	}

	public void setEmpNumber(int empNumber) {
		this.empNumber = empNumber;
	}

	public String getEmpName() {
		return empName;
	}

	public void setEmpName(String empName) {
		this.empName = empName;
	}

	public LocalDate getEmpJoiningDate() {
		return empJoiningDate;
	}

	public void setEmpJoiningDate(LocalDate empJoiningDate) {
		this.empJoiningDate = empJoiningDate;
	}

	public String getEmpDesignation() {
		return empDesignation;
	}

	public void setEmpDesignation(String empDesignation) {
		this.empDesignation = empDesignation;
	}

	public float getEmpSalary() {
		return empSalary;
	}

	public void setEmpSalary(float empSalary) {
		this.empSalary = empSalary;
	}

	//Generating toString() method for Returning result....
	@Override
	public String toString() {
		return "Employee [empNumber=" + empNumber + ", empName=" + empName + ", empJoiningDate=" + empJoiningDate
				+ ", empDesignation=" + empDesignation + ", empSalary=" + empSalary + "]";
	}
	
	
	
	
	
	

}
