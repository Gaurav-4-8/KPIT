package com.example;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.Scanner;

import com.amazonaws.services.s3.AmazonS3;
import com.amazonaws.services.s3.AmazonS3Client;
import com.amazonaws.services.s3.model.S3Object;
import com.amazonaws.services.s3.model.S3ObjectInputStream;

/**
 * Hello world!
 *
 */
public class App {
    public static void main(String[] args) {
        AmazonS3 client = AmazonS3Client.builder().withRegion("ca-central-1").build();

        client.createBucket("g-driver-ids");
        System.out.println("bucket created");

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the detals..");

        String line = sc.nextLine();

        client.putObject("g-driver-ids", "id001.txt", line);

        S3Object obj = client.getObject("g-driver-ids", "id001.txt");

        S3ObjectInputStream stream = obj.getObjectContent();
        System.out.println("Enter the path of file");
        String path = sc.nextLine();
        FileOutputStream fos;
        try {
            fos = new FileOutputStream(new File(path));
            byte[] read_buf = new byte[1024];
        int read_len = 0;
        while ((read_len = stream.read(read_buf)) > 0) {
            fos.write(read_buf, 0, read_len);
        }

        System.out.println("File downloaded..");
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (IOException e) {

        }

      

    }
}
