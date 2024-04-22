package com.aws;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;
import java.util.Scanner;

/**
 * Hello world!
 *
 */
public class App 
{
    private static final String url = "jdbc:mysql://g-kuber-cabs.cn6qkoww88oi.ap-northeast-1.rds.amazonaws.com/sampledb";
    private static final String user = "admin";
    private static final String pswd = "Gaurav123";
    public static void main( String[] args )
    {
        Connection conn = null;

        try {
            Class.forName("com.mysql.cj.jdbc.Driver");

            conn = DriverManager.getConnection(App.url,App.user,App.pswd);

           PreparedStatement ps = conn.prepareStatement("insert into customers(driver_name, customer_name, passenger_count) values(?,?,?)");
           Scanner scanner1 = new Scanner(System.in);
            Scanner scanner2 = new Scanner(System.in);
            Scanner scanner3 = new Scanner(System.in);

            System.out.println("Enter Driver Name: ");
            String driverName = scanner1.nextLine();
            System.out.println("Enter Customer name: ");
            String customerName = scanner2.nextLine();
            System.out.println("Enter Passenger count: ");
            int passCount = scanner3.nextInt();
            ps.setString(1, driverName);
            ps.setString(2, customerName);
            ps.setInt(3, passCount);

            System.out.println("Executing the query..");
            ps.executeUpdate();


        } catch (ClassNotFoundException e) {
            System.out.println("Class not found..");
            e.printStackTrace();
        } catch (SQLException e) {
            System.out.println(e.getMessage());
        }
    }
}
