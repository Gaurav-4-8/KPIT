package com.kpit.controller;

import java.util.List;
import java.util.Optional;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.DeleteMapping;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.PutMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RestController;
import org.springframework.web.servlet.function.EntityResponse;

import com.kpit.entity.SavingsAccount;
import com.kpit.exception.DataAlreadyExistException;
import com.kpit.exception.DataNotFoundException;
import com.kpit.service.SavingsAccountService;

@RestController
public class SavingsAccountController {
	
	public SavingsAccountController() {
		System.out.println("Controller Constructor() Started......");
	}
	
	@Autowired
	SavingsAccountService savingsAccountService;
	
	// Getting all data...
	@GetMapping("/acounts")
	public ResponseEntity<List<SavingsAccount>>getAllData() {
		try {
			List<SavingsAccount>list=savingsAccountService.getAllData();
			return ResponseEntity.of(Optional.of(list));
		} catch (DataNotFoundException e) {
			return ResponseEntity.status(HttpStatus.NOT_FOUND).build();
		}
	}
	
	// Getting single data...
	@GetMapping("/acounts/{id}")
	public ResponseEntity<SavingsAccount>getSingleData(@PathVariable("id") int id) {
		try {
			SavingsAccount list=savingsAccountService.getSingleData(id);
			return ResponseEntity.of(Optional.of(list));
		} catch (DataNotFoundException e) {
			return ResponseEntity.status(HttpStatus.NOT_FOUND).build();
		}
	}
	
	// Storing data...
		@PostMapping("/acounts")
		public ResponseEntity<String>storeData(@RequestBody SavingsAccount account) {
			try {
				savingsAccountService.storeData(account);
				return ResponseEntity.status(HttpStatus.CREATED).body("Data inserted successfully..");
			} catch (DataAlreadyExistException e) {
				return ResponseEntity.status(HttpStatus.CONFLICT).body(e.getMessage());
			}
		}
		
		//Updating Data....
		@PutMapping("/acounts/{id}")
		public ResponseEntity<String>updateData(@RequestBody SavingsAccount account,@PathVariable("id") int id) {
			try {
				savingsAccountService.updateData(id,account);
				return ResponseEntity.status(HttpStatus.ACCEPTED).body("Data updated successfully..");
			} catch (DataNotFoundException e) {
				return ResponseEntity.status(HttpStatus.NOT_FOUND).body(e.getMessage());
			}
		}
		
		//deleting a record..
		@DeleteMapping("/acounts/{id}")
		public ResponseEntity<String>deleteData(@PathVariable("id") int id) {
			try {
				savingsAccountService.deleteData(id);
				return ResponseEntity.status(HttpStatus.ACCEPTED).body("Data deletesuccessfully..");
			} catch (DataNotFoundException e) {
				return ResponseEntity.status(HttpStatus.NOT_FOUND).body(e.getMessage());
			}
		}
		
}
