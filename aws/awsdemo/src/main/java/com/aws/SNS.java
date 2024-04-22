package com.aws;

import com.amazonaws.services.sns.AmazonSNS;
import com.amazonaws.services.sns.AmazonSNSClient;
import com.amazonaws.services.sns.model.CreateTopicResult;

public class SNS {
    
    public static void main(String[] args) {

      AmazonSNS client = AmazonSNSClient.builder().withRegion("ca-central-1").build();

        SNS.createTopic(client);




    }

    public static void createTopic(AmazonSNS client) {
        CreateTopicResult request = client.createTopic("topic01");
        String arn = request.getTopicArn();
        client.subscribe(arn,"email","19bcs2906@gmail.com");
        client.publish(arn, "hlw");
      
    }
}
