package com.example;

import java.sql.*;

import javax.naming.spi.DirStateFactory.Result;

/**
 * Hello world!
 *
 */
public class App 
{
    private static final String URL = "jdbc:mysql://sampledb.cimr0kdyqj64.us-east-1.rds.amazonaws.com/sampledb";
    private static final String user = "admin";
    private static final String pswd = "Password!123";
    public static void main( String[] args )
    {
        Connection con = null;

        try  {
            Class.forName("com.mysql.cj.jdbc.Driver");

       
            con = DriverManager.getConnection(URL, user, pswd);
            System.out.println("Connected to database...");

            Statement st = con.createStatement();
            ResultSet rs = st.executeQuery("select * from employees");
            System.out.println("Fetching results..");
            while(rs.next()) {
                System.out.println(rs.getInt(1));
                System.out.println(rs.getString(2));
                System.out.println(rs.getString(3));
            }
        } catch (SQLException ex) {

        } catch (ClassNotFoundException ex) {

        }

    }
}
