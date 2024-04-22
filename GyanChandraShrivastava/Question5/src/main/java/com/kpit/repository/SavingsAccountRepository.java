package com.kpit.repository;

import org.springframework.data.repository.CrudRepository;
import com.kpit.entity.SavingsAccount;

public interface SavingsAccountRepository extends CrudRepository<SavingsAccount,Integer> {
	public SavingsAccount findById(int id);
}
