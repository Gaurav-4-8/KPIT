package com.example;

import java.util.Map;

import com.amazonaws.services.dynamodbv2.AmazonDynamoDB;
import com.amazonaws.services.dynamodbv2.AmazonDynamoDBClient;
import com.amazonaws.services.dynamodbv2.model.AttributeValue;
import com.amazonaws.services.dynamodbv2.model.ListTablesResult;
import com.amazonaws.services.dynamodbv2.model.ScanRequest;
import com.amazonaws.services.dynamodbv2.model.ScanResult;

/**
 * Hello world!
 *
 */
public class App 
{
    public static void main( String[] args )
    {
        AmazonDynamoDB client = AmazonDynamoDBClient.builder().withRegion("ap-northeast-1").build();

        ListTablesResult result = client.listTables();

        for(String table : result.getTableNames()) {
            System.out.println("Table name: "+table);

            ScanResult scanResult = client.scan(new ScanRequest(table));

            for(Map<String, AttributeValue> items : scanResult.getItems()) {
                for(String key : items.keySet()) {
                    System.out.println(key +" "+items.get(key).toString());
                }
            }
        }

    }
}
