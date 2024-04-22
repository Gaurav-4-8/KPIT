package com.example;

import java.util.Scanner;

import com.amazonaws.auth.profile.ProfileCredentialsProvider;
import com.amazonaws.services.sqs.AmazonSQS;
import com.amazonaws.services.sqs.AmazonSQSClient;
import com.amazonaws.services.sqs.model.SendMessageRequest;

/**
 * Hello world!
 *
 */
public class App 
{
    public static void main( String[] args )
    {
        AmazonSQS client = AmazonSQSClient.builder().withCredentials(new ProfileCredentialsProvider()).withRegion("ca-central-1").build();

        String queueUrl = client.getQueueUrl("g-kube-cabs").getQueueUrl();

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the source: ");
        String source = sc.nextLine();

        System.out.println("Enter the destination: ");
        String dest = sc.nextLine();

        SendMessageRequest send_msg_request = new SendMessageRequest()
        .withQueueUrl(queueUrl)
        .withMessageBody("Book ride from "+source+" and "+dest);
client.sendMessage(send_msg_request);
    }
}
