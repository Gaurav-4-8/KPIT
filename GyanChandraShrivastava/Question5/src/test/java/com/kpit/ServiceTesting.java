package com.kpit;

import java.util.List;


import org.junit.jupiter.api.Test;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.test.context.SpringBootTest;


import com.kpit.entity.SavingsAccount;
import com.kpit.exception.DataAlreadyExistException;
import com.kpit.exception.DataNotFoundException;
import com.kpit.service.SavingsAccountService;

@SpringBootTest
public class ServiceTesting {

	@Autowired
	SavingsAccountService savingsAccountService;
	
	@Test
	public void getAllData() {
		try {
			List<SavingsAccount>list=savingsAccountService.getAllData();
			for(SavingsAccount data:list) {
				System.out.println(data);
			}
		} catch (DataNotFoundException e) {
			System.out.println(e.getMessage());
		}
	}
	
	@Test
	public void getSingleData() {
		try {
			SavingsAccount list=savingsAccountService.getSingleData(2);
			System.out.println(list);
		} catch (DataNotFoundException e) {
			System.out.println(e.getMessage());
		}
	}
	
	@Test
	public void storeData() {
		try {
			SavingsAccount data=new SavingsAccount("anuj",45000f);
			savingsAccountService.storeData(data);
			System.out.println("successfullt stoed..");
		} catch (DataAlreadyExistException e) {
			System.out.println(e.getMessage());
		}
	}
	
	public void updateData() {
		try {
			SavingsAccount data=new SavingsAccount("anuj",45000f);
			savingsAccountService.updateData(2,data);
			System.out.println("data Updated..");
		} catch (DataNotFoundException e) {
			System.out.println(e.getMessage());
		}
	}
	
	public void deleteData() {
		try {
			savingsAccountService.deleteData(53);
			System.out.println("data delteed..");
		} catch (DataNotFoundException e) {
			System.out.println(e.getMessage());
		}
	}
	
	
	
	
}
