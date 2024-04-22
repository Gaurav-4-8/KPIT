package com.kpit;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

import com.amazonaws.services.s3.AmazonS3;
import com.amazonaws.services.s3.AmazonS3ClientBuilder;
import com.amazonaws.services.s3.model.S3Object;
import com.amazonaws.services.s3.model.S3ObjectInputStream;

/**
 * Hello world!
 *
 */
public class App {
    public static void main(String[] args) {
        

        AmazonS3 s3 = AmazonS3ClientBuilder.standard().withRegion("ap-northeast-1").build();
        // Scanner sc = new Scanner(System.in);
        // String line = sc.nextLine();
        // s3.putObject("gaurav-reports","jan.txt", line);
        // s3.putObject("gaurav-reports","feb.txt", line);
        // s3.putObject("gaurav-reports","march.txt", line);

        // download


        try {
            String cotent = s3.getObjectAsString("gaurav-reports", "jan.txt");
        FileWriter out = new FileWriter(new File("D:\\fils\\jan.txt"));
        out.write(cotent);
        out.close();
        } catch (IOException ex) {

        }
        // try {
        //     S3Object s3obj = s3.getObject("gaurav-reports", "jan.txt");
        //     S3ObjectInputStream s3is = s3obj.getObjectContent();
        //     FileOutputStream fos = new FileOutputStream(new File("jan.txt"));
        //     byte[] read_buf = new byte[1024];
        //     int read_len = 0;
        //     while ((read_len = s3is.read(read_buf)) > 0) {
        //         fos.write(read_buf, 0, read_len);
        //     }
        //     s3is.close();
        //     fos.close();
        // } catch (FileNotFoundException e) {
        // } catch (IOException e) {
        // }

    }
}
