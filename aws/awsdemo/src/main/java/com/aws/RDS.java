package com.aws;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

import com.amazonaws.services.sns.AmazonSNS;
import com.amazonaws.services.sns.AmazonSNSClient;


public class RDS {
    
    private static final String url = "jdbc:mysql://database01.cbsm42wu8lt1.ca-central-1.rds.amazonaws.com:3306/database01";
    private static final String user = "admin";
    private static final String pswd = "Gaurav123";

    public static void main(String[] args) {
        
        Connection conn = null;

        try {
            Class.forName("com.mysql.cj.jdbc.Driver");

            conn = DriverManager.getConnection(RDS.url,RDS.user,RDS.pswd);

            Statement statement = conn.createStatement();
            ResultSet resultSet = statement.executeQuery("select * from table01");
            while (resultSet.next()) {
                System.out.println(resultSet.getInt(1)+" "+resultSet.getString(2));
                
            }
        } catch (ClassNotFoundException e) {
            System.out.println("Class not found..");
            e.printStackTrace();
        } catch (SQLException e) {
            System.out.println(e.getMessage());
        }
            
    }

}
