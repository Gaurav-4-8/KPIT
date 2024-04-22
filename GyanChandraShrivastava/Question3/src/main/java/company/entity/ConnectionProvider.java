package company.entity;

import java.sql.Connection;
import java.sql.DriverManager;

public class ConnectionProvider {
	// taking instance variable of Connection type..
	static Connection con=null;
	
	public static Connection createConnection() {
		try {
		// Step 1-> Load the HSQL Driver...			
		Class.forName("org.hsqldb.jdbc.JDBCDriver");
		
		
		// Step 2 -> Establishing the Connection
		String url="jdbc:hsqldb:hsql://localhost/xdb";
		String username="SA";
		String password="";
		con=DriverManager.getConnection(url,username,password);
		}catch(Exception e) {
			e.printStackTrace();
		}
		return con;
	}
}
