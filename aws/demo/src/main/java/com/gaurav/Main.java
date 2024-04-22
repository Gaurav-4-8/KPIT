package com.gaurav;

import java.sql.*;

import javax.naming.spi.DirStateFactory.Result;

/**
 * Hello world!
 *
 */
public class Main
{
    private static final String URL = "sampledb.cimr0kdyqj64.us-east-1.rds.amazonaws.com";
    private static final String user = "admin";
    private static final String pswd = "Password!123";
    public static void main( String[] args )
    {
        Connection con = null;

        try  {
            Class.forName("com.mysql.cj.jdbc.Driver");

        } catch (ClassNotFoundException ex) {
            System.out.println("unable to load JDBC Driver for MySqll");
            return;
        }

        try {
            con = DriverManager.getConnection(URL, user, pswd);
            System.out.println("Connected to database...");

        } catch (SQLException ex) {
            System.out.println("Unable to connect database:  "+ex.getMessage());
        }

        try {
            Statement st = con.createStatement();
            ResultSet rs = st.executeQuery("select * from employees");
            System.out.println("Fetching results..");
            while(rs.next()) {
                System.out.println(rs.getString("column_name"));
            }
        } catch (SQLException ex) {

        }

    }
}
