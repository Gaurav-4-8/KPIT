package com.example;

import com.amazonaws.services.sns.AmazonSNS;
import com.amazonaws.services.sns.AmazonSNSClient;
import com.amazonaws.services.sns.AmazonSNSClientBuilder;
import com.amazonaws.services.sns.model.PublishRequest;

public class SnS {
    
    public static void main(String[] args) {

        AmazonSNS client = AmazonSNSClient.builder().withRegion("ap-northeast-1").build();
        String topicArn = "arn:aws:sns:ap-northeast-1:106129732153:bill-alerts:170a8cd8-a930-4790-9ce0-02748a6a67f1";

        Bill bill = new Bill("jan", 10, 200);
        publishTopic(client, topicArn, bill);

    }

    static void publishTopic(AmazonSNS client, String topicArn, Bill bill) {

        client.publish(topicArn, bill.getMonth());
    }
}
