package com.kpit.service;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Component;

import com.kpit.entity.SavingsAccount;
import com.kpit.exception.DataAlreadyExistException;
import com.kpit.exception.DataNotFoundException;
import com.kpit.repository.SavingsAccountRepository;

@Component
public class SavingsAccountService {
	
	public SavingsAccountService() {
		System.out.println("Service Constructor() Started......");
	}
	
	@Autowired
	SavingsAccountRepository savingsAccountRepository;

	public List<SavingsAccount> getAllData() throws DataNotFoundException {
		List<SavingsAccount> list= (List<SavingsAccount>)savingsAccountRepository.findAll();
		if(list.isEmpty()) {
			throw new DataNotFoundException("Data Not Found..");
		}else {
			return list;
		}
	}

	public SavingsAccount getSingleData(int id) throws DataNotFoundException {
		SavingsAccount list=savingsAccountRepository.findById(id);
		if(list==null) {
			throw new DataNotFoundException("Data Not Found..");
		}else {
			return list;
		}
	}

	public void storeData( SavingsAccount account) throws DataAlreadyExistException {
		SavingsAccount list=savingsAccountRepository.findById(account.getAccountNumber());
		if(list==null) {
			savingsAccountRepository.save(account);
		}else {
			throw new DataAlreadyExistException("Data Already Exist");
		}
	}

	public void updateData(int id, SavingsAccount account) throws DataNotFoundException {
		SavingsAccount list=savingsAccountRepository.findById(id);
		if(list==null) {
			throw new DataNotFoundException("Data Not Found..");
			
		}else {
			
			list.setAccountHolderName(account.getAccountHolderName());
			list.setAccountBalance(account.getAccountBalance());
			savingsAccountRepository.save(list);
		}
	}

	public void deleteData(int id) throws DataNotFoundException {	
		SavingsAccount list=savingsAccountRepository.findById(id);
		if(list==null) {
			throw new DataNotFoundException("Data Not Found..");
			
		}else {		
			savingsAccountRepository.delete(list);
		}
	}

}
