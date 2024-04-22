package com.example;

import java.util.ArrayList;
import java.util.List;

import com.amazonaws.services.dynamodbv2.AmazonDynamoDB;
import com.amazonaws.services.dynamodbv2.AmazonDynamoDBClientBuilder;
import com.amazonaws.services.dynamodbv2.document.DynamoDB;
import com.amazonaws.services.dynamodbv2.document.Table;
import com.amazonaws.services.dynamodbv2.model.AttributeDefinition;
import com.amazonaws.services.dynamodbv2.model.CreateTableRequest;
import com.amazonaws.services.dynamodbv2.model.KeySchemaElement;
import com.amazonaws.services.dynamodbv2.model.KeyType;
import com.amazonaws.services.dynamodbv2.model.ProvisionedThroughput;

public class Dynamo {

    static AmazonDynamoDB client = AmazonDynamoDBClientBuilder.standard().build();
    static DynamoDB dynamoDB = new DynamoDB(client);

    static String tableName = "table01";
    
    public static void main(String args[]) {

        createTable();


    }

    static void createTable() {

        try {

        List<AttributeDefinition> aList = new ArrayList<AttributeDefinition>();

        aList.add(new AttributeDefinition().withAttributeName("id").withAttributeType("N"));

        List<KeySchemaElement> kElements = new ArrayList<KeySchemaElement>();

        kElements.add(new KeySchemaElement().withAttributeName("Id").withKeyType(KeyType.HASH));

        CreateTableRequest cRequest = new CreateTableRequest().withTableName(tableName).withKeySchema(kElements)
        .withAttributeDefinitions(aList).withProvisionedThroughput(new ProvisionedThroughput()
        .withReadCapacityUnits(5L).withWriteCapacityUnits(6L));

        Table table = dynamoDB.createTable(cRequest);

      
            table.waitForActive();
    
        
        System.out.println("Table created...");

        } catch (Exception ex) {
            System.out.println("Table creation failed..");
        }
    }
}
